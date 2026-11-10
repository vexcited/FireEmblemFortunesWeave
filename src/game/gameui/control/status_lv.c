#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_1890220(__int64, int, int, int, char, char, int);
_QWORD* GameRoutine_1890420(__int64, int, int, int, char);
_QWORD* StatusNum_1890080(__int64);
__int64 GameRoutine_174d670(_QWORD);
__int64 GameRoutine_174d800(float, float);
__int64 GameRoutine_18aba70(_QWORD, _QWORD);
__int64 LayoutAccessor_15730d0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
__int64 StatusLV_18a2a20(__int64 a1, __int64* a2);
_QWORD* StatusLV_18a2d70(__int64 a1, int a2, int a3, int a4);
_QWORD* StatusLV_18a2e20(__int64 a1, int a2, int a3, int a4);
_QWORD* StatusLV_18a2ed0(_QWORD* a1, int a2, int a3, int a4, int a5, float a6,
                         float a7);
__int64 StatusLV_18a3070(__int64 result, char a2, unsigned __int8 a3);
__int64 StatusLV_18a30a0(__int64 result, __int64 a2);
_QWORD* StatusLV_18a3250(_QWORD* result, __int64 a2, int a3);
_QWORD* StatusLV_18a34f0(_QWORD* a1);
__int64* GameRoutine_18a2880(_QWORD*);
__int64 GameRoutine_1888c80(__int64, __int64, __int64);
__int64 GameRoutine_18b26a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_576600(_QWORD, _QWORD);
__int64 LayoutEx_579160(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_2103cc8[])();
extern __int64 (*GameData_2103cf0[])();
extern __int64 (*GameData_2103d38[])();
extern __int64 (*GameData_2103f10[])();
extern __int64 (*GameData_2103f38[])();
extern __int64 (*game_gameui_control_StatusLV_Destroy_StatusLV_18a3880_ptr[])();
extern __int64 (*game_gameui_control_StatusLV_vtable[])();
extern __int64 GameData_2103d10;
extern __int64 GameData_2103d20;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_2103d08;
extern char* GameData_2103d18;
__attribute__((swiftcall)) void StatusLV_18a2ab0(PSEUDO_X8 x8_, __int64 a1,
                                                 __int64 a2, __int64 a3);

__int64 StatusLV_18a2a20(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = result;
      result = *a2;
      if (*a2 != 0) {
        result = GameRoutine_18aba70(result, *(_QWORD*)(a1 + 1104));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        return std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void StatusLV_18a2ab0(PSEUDO_X8 x8_, __int64 a1,
                                                 __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  __int64 v20;

  v8 = (_QWORD*)LayoutEx_579160(1136, 8);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_2103d38;
  GameRoutine_18b26a0(v8 + 3, a1, a2, a3);
  v10[138] = 0;
  v10[139] = 0;
  v10[3] = game_gameui_control_StatusLV_vtable;
  v10[12] = GameData_2103cc8;
  v10[132] = GameData_2103cf0;
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v13 = GameData_2103d10;
  *v12 = GameData_2103d08;
  v12[1] = v13;
  v14 = GameData_2103d20;
  v12[2] = GameData_2103d18;
  v12[3] = v14;
  v15 = GameRoutine_576600(a1, "Num");
  if (v15 != 0) {
    v19 = v15;
    v20 = strlen(v15);
    if (v20 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)v12, (__int64)&v19);
    }
  }
  v16 = GameRoutine_576600(a1, v12[2]);
  if (v16 != 0) {
    v19 = v16;
    v20 = strlen(v16);
    if (v20 != 0) {
      GameRoutine_1888c80((__int64)(v10 + 29), (__int64)(v12 + 2),
                          (__int64)&v19);
    }
  }
  GameRoutine_18a2880(v9);
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
    v17 = 56;
  }
  result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v17);
  *a4 = v9;
  a4[1] = v10;
  v10[3] = game_gameui_control_StatusLV_Destroy_StatusLV_18a3880_ptr;
  v10[12] = GameData_2103f10;
  v10[132] = GameData_2103f38;
  {
    result;
    return;
  }
}

_QWORD* StatusLV_18a2d70(__int64 a1, int a2, int a3, int a4)
{
  _QWORD* result;
  _QWORD* v9;

  result = *(_QWORD**)(a1 + 1088);
  if (result != nullptr) {
    result = (_QWORD*)std___1___shared_weak_count_lock(result);
    if (result != nullptr) {
      v9 = result;
      result = *(_QWORD**)(a1 + 1080);
      if (result != nullptr) {
        result = GameRoutine_1890220((__int64)result, a3, a2, a4, 1, 0, -1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(_QWORD*))(*v9 + 16LL))(v9);
        return (_QWORD*)std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  return result;
}

_QWORD* StatusLV_18a2e20(__int64 a1, int a2, int a3, int a4)
{
  _QWORD* result;
  _QWORD* v9;

  result = *(_QWORD**)(a1 + 1088);
  if (result != nullptr) {
    result = (_QWORD*)std___1___shared_weak_count_lock(result);
    if (result != nullptr) {
      v9 = result;
      result = *(_QWORD**)(a1 + 1080);
      if (result != nullptr) {
        result = GameRoutine_1890420((__int64)result, a3, a2, a4, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(_QWORD*))(*v9 + 16LL))(v9);
        return (_QWORD*)std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  return result;
}

_QWORD* StatusLV_18a2ed0(_QWORD* a1, int a2, int a3, int a4, int a5, float a6,
                         float a7)
{
  _QWORD* result;
  _QWORD* v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;

  result = (_QWORD*)a1[136];
  if (result != nullptr) {
    result = (_QWORD*)std___1___shared_weak_count_lock(result);
    if (result != nullptr) {
      v15 = result;
      result = (_QWORD*)a1[135];
      if (result != nullptr) {
        result = GameRoutine_1890220((__int64)result, a2, a2, a3, 1, 0, -1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(_QWORD*))(*v15 + 16LL))(v15);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v15);
      }
    }
  }
  v16 = a1[137];
  if (v16 != 0) {
    GameRoutine_1560070(&v27, a1 + 11, v16 + 176);
    v17 = 1.0;
    if (a5 < 1) {
      v19 = 1.0;
      result = v28;
      if (v28 == nullptr) {
        return result;
      }
      goto LABEL_22;
    }
    v18 = (float)a4;
    v19 = 1.0;
    if ((float)a4 != (float)a5) {
      v20 = (float)a5 - v18;
      if (a7 >= v18) {
        v21 = a7;
      }
      else {
        v21 = (float)a4;
      }
      v22 = v21 - v18;
      if (v20 < v22) {
        v22 = (float)a5 - v18;
      }
      v17 = v22 / v20;
      if (a6 >= v18) {
        v23 = a6;
      }
      else {
        v23 = (float)a4;
      }
      v24 = v23 - v18;
      if (v20 < v24) {
        v24 = v20;
      }
      v19 = v24 / v20;
    }
    result = v28;
    if (v28 != nullptr) {
    LABEL_22:
      v25 = std___1___shared_weak_count_lock(result);
      if (v25 != 0) {
        v26 = v25;
        if (v27 != 0) {
          GameRoutine_174d800(v17, v19);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          std___1___shared_weak_count___release_weak(v26);
        }
      }
      result = v28;
      if (v28 != nullptr) {
        return (_QWORD*)std___1___shared_weak_count___release_weak(v28);
      }
    }
  }
  return result;
}

__int64 StatusLV_18a3070(__int64 result, char a2, unsigned __int8 a3)
{
  __int64 v3;

  v3 = *(_QWORD*)(result + 1096);
  if (v3 != 0) {
    *(_BYTE*)(v3 + 88) = *(_BYTE*)(v3 + 88) & 0xFE | a2 & 1;
    return ui_LayoutAccessor_SetPaneVisible(result + 88, "Border",
                                            a3 & (unsigned __int8)~a2 & 1);
  }
  return result;
}

__int64 StatusLV_18a30a0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  float v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  *(_QWORD*)(result + 1104) = a2;
  if (a2 != 0) {
    v2 = result;
    v3 = *(_QWORD*)(result + 1088);
    if (v3 != 0) {
      v5 = *(unsigned __int8*)(a2 + 498);
      v6 = std___1___shared_weak_count_lock(v3);
      if (v6 != 0) {
        v7 = v6;
        v8 = *(_QWORD*)(v2 + 1080);
        if (v8 != 0) {
          GameRoutine_1890220(v8, v5, v5, 99, 1, 0, -1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
      }
    }
    result = LayoutAccessor_15730d0(v2 + 88, a2);
    v9 = *(_QWORD*)(v2 + 1096);
    if (v9 != 0) {
      v10 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
      if (*(unsigned __int8*)(a2 + 498) >= (int)v10) {
        v11 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
      }
      else {
        v11 = *(unsigned __int8*)(a2 + 498);
      }
      if (*(_BYTE*)(a2 + 498) != 0) {
        v12 = v11 - 1;
      }
      else {
        v11 = 1;
        v12 = 0;
      }
      if (v11 == (_DWORD)v10) {
        v13 = 0;
      }
      else {
        v13 = *(_DWORD*)(GameData_21d9968 + 4LL * v11);
      }
      v14 = *(_DWORD*)(a2 + 504);
      v15 = *(_DWORD*)(GameData_21d9968 + 4 * v12);
      GameRoutine_1560070(&v22, v2 + 88, v9 + 176);
      v16 = 1.0;
      if (v13 >= 1) {
        v17 = v13 - v15;
        if (v13 != v15) {
          if (v14 <= v15) {
            v18 = v15;
          }
          else {
            v18 = v14;
          }
          v19 = v18 - v15;
          if (v17 < v19) {
            v19 = v13 - v15;
          }
          v16 = (float)v19 / (float)v17;
        }
      }
      result = v23;
      if (v23 != 0) {
        v20 = std___1___shared_weak_count_lock(v23);
        if (v20 != 0) {
          v21 = v20;
          if (v22 != 0) {
            GameRoutine_174d800(v16, v16);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
            std___1___shared_weak_count___release_weak(v21);
          }
        }
        result = v23;
        if (v23 != 0) {
          return std___1___shared_weak_count___release_weak(v23);
        }
      }
    }
  }
  return result;
}

_QWORD* StatusLV_18a3250(_QWORD* result, __int64 a2, int a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  _DWORD* v9;
  int v10;
  int v14;
  _QWORD* v15;
  __int64 v16;
  int v17;
  _DWORD* v18;
  int v19;
  int v20;
  __int64 v24;
  __int64 v25;
  __int64 v27;
  int v28;
  float v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;

  if (a2 == 0) {
    return result;
  }
  v3 = *(_QWORD*)(a2 + 8);
  v4 = result;
  v5 = v3 + 32;
  v6 = *(_QWORD*)(v3 + 8) + 32LL * (unsigned int)a3;
  if (a3 >= 0) {
    v7 = v6;
  }
  else {
    v7 = v5;
  }
  v8 = *(_DWORD*)(v7 + 4);
  v9 = *(_DWORD**)(*(_QWORD*)(v7 + 16) + 24LL);
  v10 = v9[105];
  if (v10 > 2 && v9[103] <= v8) {
    v14 = 3;
    result = (_QWORD*)result[136];
    if (result == nullptr) {
      goto LABEL_29;
    }
  }
  else if (v10 > 1 && v9[102] <= v8) {
    v14 = 2;
    result = (_QWORD*)result[136];
    if (result == nullptr) {
      goto LABEL_29;
    }
  }
  else if (v10 >= 1 && v9[101] <= v8) {
    v14 = 1;
    result = (_QWORD*)result[136];
    if (result == nullptr) {
      goto LABEL_29;
    }
  }
  else {
    v14 = v9[104];
    result = (_QWORD*)result[136];
    if (result == nullptr) {
      goto LABEL_29;
    }
  }
  result = (_QWORD*)std___1___shared_weak_count_lock(result);
  if (result != nullptr) {
    v15 = result;
    result = (_QWORD*)v4[135];
    if (result != nullptr) {
      result = GameRoutine_1890220((__int64)result, v14, v14, v10, 1, 0, -1);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(_QWORD*))(*v15 + 16LL))(v15);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v15);
    }
  }
LABEL_29:
  v16 = v4[137];
  if (v16 == 0) {
    return result;
  }
  v17 = *(_DWORD*)(v7 + 4);
  v18 = *(_DWORD**)(*(_QWORD*)(v7 + 16) + 24LL);
  v19 = v18[105];
  v20 = v18[103];
  if (v19 > 2 && v20 <= v17) {
    if ((unsigned int)v19 <= 3) {
      goto LABEL_57;
    }
    v25 = 4;
  LABEL_56:
    v28 = v18[v25 + 100];
    goto LABEL_58;
  }
  if (v19 > 1 && v18[102] <= v17) {
    v20 = v18[102];
    if ((unsigned int)v19 <= 2) {
      goto LABEL_57;
    }
    v25 = 3;
    goto LABEL_56;
  }
  if (v19 >= 1 && v18[101] <= v17) {
    v24 = 1;
  }
  else {
    v24 = (int)v18[104];
  }
  v20 = v18[v24 + 100];
  if (v19 >= 1 && v18[101] <= v17) {
    if ((unsigned int)v19 > 1) {
      v25 = 2;
      goto LABEL_56;
    }
  }
  else {
    v27 = (int)v18[104];
    if ((int)v27 < v19) {
      v25 = v27 + 1;
      goto LABEL_56;
    }
  }
LABEL_57:
  v28 = 0;
LABEL_58:
  GameRoutine_1560070(&v35, v4 + 11, v16 + 176);
  v29 = 1.0;
  if (v28 >= 1) {
    v30 = v28 - v20;
    if (v28 != v20) {
      if (v17 <= v20) {
        v31 = v20;
      }
      else {
        v31 = v17;
      }
      v32 = v31 - v20;
      if (v30 < v32) {
        v32 = v28 - v20;
      }
      v29 = (float)v32 / (float)v30;
    }
  }
  result = v36;
  if (v36 != nullptr) {
    v33 = std___1___shared_weak_count_lock(v36);
    if (v33 != 0) {
      v34 = v33;
      if (v35 != 0) {
        GameRoutine_174d800(v29, v29);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
        std___1___shared_weak_count___release_weak(v34);
      }
    }
    result = v36;
    if (v36 != nullptr) {
      return (_QWORD*)std___1___shared_weak_count___release_weak(v36);
    }
  }
  return result;
}

_QWORD* StatusLV_18a34f0(_QWORD* a1)
{
  __int64 v1;
  _QWORD* result;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[137];
  if (v1 != 0) {
    GameRoutine_1560070(&v5, a1 + 11, v1 + 176);
    GameRoutine_174d670(&v5);
    if (v6 != 0) {
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  result = (_QWORD*)a1[136];
  if (result != nullptr) {
    result = (_QWORD*)std___1___shared_weak_count_lock(result);
    if (result != nullptr) {
      v4 = result;
      result = (_QWORD*)a1[135];
      if (result != nullptr) {
        result = StatusNum_1890080((__int64)result);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(_QWORD*))(*v4 + 16LL))(v4);
        return (_QWORD*)std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
