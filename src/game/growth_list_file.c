#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HashString(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 strcmp(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a94a43;
extern __int64 GameData_21c99c0;
bool game_GrowthListFile_GetJob_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 GrowthListFile_12814c0(const char* a1);
bool game_GrowthListFile_GetJobChanges_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 memset(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201f8a8[])();
extern __int64 (*GameData_201f938[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_67afd0();
__int64 game_GrowthListFile_GetJob(__int64* a1, __int64 a2, char a3);
__attribute__((swiftcall)) void
game_GrowthListFile_GetJobChanges(PSEUDO_X8 x8_, __int64* a1, unsigned int a2,
                                  char a3);

__int64 game_GrowthListFile_GetJob(__int64* a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 (***v4)();
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  const char** v9;
  const char* v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 (**v17)();
    char v18;
    char gap9_[23];
    __int64 (***v19)();
    char gap40_[8];
    __int64 v20;
    int v21;
  } v17_;
  struct {
    __int64 (**v22)();
    char v23;
    char gap73_[23];
    __int64 (***v24)();
  } v22_;
  __int64 v25;

  v3 = *a1;
  v17_.v18 = a3;
  v17_.v21 = a2;
  v22_.v23 = a3;
  v17_.v19 = &v17_.v17;
  v4 = &v22_.v22;
  v17_.v17 = GameData_201f8a8;
  v22_.v22 = GameData_201f8a8;
  v22_.v24 = &v22_.v22;
  v17_.v20 = v3;
  if (v3 == 0 || (v5 = **(_QWORD**)(v3 + 24)) == 0 ||
      ((unsigned int)a2 >= 0x50 ? (v6 = 80) : (v6 = a2),
       (LODWORD(v7) = v6 - 1, (int)a2 <= 0) ? (v7 = 0)
                                            : (v7 = (unsigned int)v7),
       (v7 & 0x80000000) != 0)) {
    v13 = 0;
    v14 = 4;
  LABEL_17:
    ((void (*)(__int64 (***)(void)))(*v4)[v14])(v4);
    goto LABEL_18;
  }
  v8 = v7 + 1;
  v9 = (const char**)(v5 + 8LL * (unsigned int)v7 + 40);
  while (1) {
    v12 = *v9--;
    v11 = v12;
    if (v12 != nullptr) {
      v13 = GrowthListFile_12814c0(v11);
      v25 = v13;
      if (v22_.v24 == nullptr) {
        GameRoutine_60a310();
      }
      if ((((__int64 (*)(__int64 (***)(void), __int64*))(*v22_.v24)[6])(
               v22_.v24, &v25) &
           1) != 0) {
        break;
      }
    }
    if (v8-- <= 1) {
      v13 = 0;
      break;
    }
  }
  if (v22_.v24 == &v22_.v22) {
    v14 = 4;
    goto LABEL_29;
  }
  if (v22_.v24 != nullptr) {
    v14 = 5;
  LABEL_29:
    v4 = v22_.v24;
    goto LABEL_17;
  }
LABEL_18:
  if (v17_.v19 == &v17_.v17) {
    v15 = 4;
    goto LABEL_22;
  }
  if (v17_.v19 != nullptr) {
    v15 = 5;
  LABEL_22:
    ((void (*)(__int64 (***)(void), __int64))(*v17_.v19)[v15])(v17_.v19, a2);
  }
  return v13;
}

__attribute__((swiftcall)) void

game_GrowthListFile_GetJobChanges(PSEUDO_X8 x8_, __int64* a1, unsigned int a2,
                                  char a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64* v7;
  __int64** v8;
  __int64 v9;
  __int64 v10;
  __int64* v14;
  __int64 v15;
  const char** v16;
  __int64 v17;
  const char* v18;
  const char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 result;
  __int64 v33;
  struct {
    __int64 (**v34)();
    char v35;
    char gap25_[23];
    __int64 (***v36)();
    char gap56_[8];
    __int64 v37;
    unsigned int v38;
  } v34_;
  struct {
    __int64 (**v39)();
    char v40;
    char gap89_[23];
    __int64 (***v41)();
  } v39_;
  __int64 v42;

  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  v5 = *a1;
  v34_.v35 = a3;
  v34_.v38 = a2;
  v39_.v40 = a3;
  v34_.v36 = &v34_.v34;
  v39_.v39 = GameData_201f938;
  v34_.v34 = GameData_201f938;
  v39_.v41 = &v39_.v39;
  v34_.v37 = v5;
  if (v5 != 0) {
    v7 = *(__int64**)(v5 + 24);
    a4[1] = 0;
    v8 = (__int64**)(a4 + 1);
    v9 = *v7;
    if (a2 == 0) {
      goto LABEL_34;
    }
    if ((a2 & 0x80000000) != 0) {
    LABEL_46:
      GameRoutine_67afd0();
    }
  }
  else {
    a4[1] = 0;
    v8 = (__int64**)(a4 + 1);
    if (a2 == 0) {
      goto LABEL_34;
    }
    v9 = 0;
    if ((a2 & 0x80000000) != 0) {
      goto LABEL_46;
    }
  }
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       8LL * a2, 16, 0);
  v14 = (__int64*)v10;
  *a4 = v10;
  a4[1] = v10;
  a4[2] = v10 + 8LL * a2;
  if (a2 >= 0x50) {
    v15 = 80;
  }
  else {
    v15 = a2;
  }
  if (v9 != 0) {
    v16 = (const char**)(v9 + 40);
    v17 = 0;
    while (1) {
      v19 = *v16++;
      v18 = v19;
      if (v19 != nullptr) {
        v20 = GrowthListFile_12814c0(v18);
        v42 = v20;
        if (v39_.v41 == nullptr) {
          GameRoutine_60a310();
        }
        if ((((__int64 (*)(__int64 (***)(void), __int64*))(*v39_.v41)[6])(
                 v39_.v41, &v42) &
             1) != 0) {
          v17 = v20;
        }
      }
      v21 = a4[2];
      if ((unsigned __int64)v14 < v21) {
        *v14++ = v17;
      }
      else {
        v22 = *a4;
        v23 = (__int64)v14 - *a4;
        v24 = (v23 >> 3) + 1;
        if (v24 >> 61 != 0) {
          goto LABEL_46;
        }
        v25 = v21 - v22;
        if (v25 >> 2 > v24) {
          v24 = v25 >> 2;
        }
        if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
          v26 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v26 = v24;
        }
        if (v26 != 0) {
          if (v26 >> 61 != 0) {
            GameRoutine_60a210();
          }
          v27 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
        }
        else {
          v27 = 0;
        }
        v28 = v27 + 8 * v26;
        v29 = v27 + v23 - 8 * (v23 >> 3);
        *(_QWORD*)(v27 + v23) = v17;
        v14 = (__int64*)(v27 + v23 + 8);
        memcpy(v29, v22, v23);
        *a4 = v29;
        a4[1] = (__int64)v14;
        a4[2] = v28;
        if (v22 != 0) {
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v30);
        }
      }
      --v15;
      *v8 = v14;
      if (v15 == 0) {
        goto LABEL_34;
      }
    }
  }
  memset(v10, 0, (unsigned int)(8 * v15));
  a4[1] = (__int64)v14 + (unsigned int)(8 * v15);
LABEL_34:
  if (v39_.v41 == &v39_.v39) {
    v31 = 4;
  }
  else {
    if (v39_.v41 == nullptr) {
      goto LABEL_39;
    }
    v31 = 5;
  }
  ((__int64 (*)(__int64))(*v39_.v41)[v31])((__int64)v39_.v41);
LABEL_39:
  result = (__int64)v34_.v36;
  if (v34_.v36 == &v34_.v34) {
    v33 = 4;
  }
  else {
    if (v34_.v36 == nullptr) {
      result;
      return;
    }
    v33 = 5;
  }
  {
    ((__int64 (*)(__int64))(*v34_.v36)[v33])((__int64)v34_.v36);
    return;
  }
}

bool game_GrowthListFile_GetJob_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return *(_QWORD*)a2 == 0 || *(unsigned __int8*)(*(_QWORD*)a2 + 49LL) <=
                                  (unsigned int)*(unsigned __int8*)(a1 + 8);
}

__int64 GrowthListFile_12814c0(const char* a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE v13[80];

  if ((unsigned int)strcmp(a1, &GameData_1a94a43) != 0) {
    nn_util_SNPrintf(v13, 80, "%s%s", "JID_", a1);
    v2 = game_HashString(v13);
    if (v2 != 0) {
      v3 = *(_QWORD*)(GameData_21c99c0 + 96);
      if (v3 != 0 && *(_QWORD*)(GameData_21c99c0 + 112) != 0) {
        v5 = v3 - 1;
        if ((v3 & (v3 - 1)) != 0) {
          v6 = v2;
          if (v2 >= v3) {
            v6 = v2 % v3;
          }
        }
        else {
          v6 = v5 & v2;
        }
        v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c0 + 88) + 8 * v6);
        if (v7 != nullptr) {
          v8 = (_QWORD*)*v7;
          if (v8 != nullptr) {
            if ((v3 & v5) == 0) {
              while (1) {
                v11 = v8[1];
                if (v11 == v2) {
                  if (v8[2] == v2) {
                    return v8[3];
                  }
                }
                else if ((v11 & v5) != v6) {
                  return 0;
                }
                v8 = (_QWORD*)*v8;
                v10 = 0;
                if (v8 == nullptr) {
                  return v10;
                }
              }
            }
            do {
              v9 = v8[1];
              if (v9 == v2) {
                if (v8[2] == v2) {
                  return v8[3];
                }
              }
              else {
                if (v9 >= v3) {
                  v9 %= v3;
                }
                if (v9 != v6) {
                  return 0;
                }
              }
              v8 = (_QWORD*)*v8;
            } while (v8 != nullptr);
          }
        }
      }
    }
  }
  return 0;
}

bool game_GrowthListFile_GetJobChanges_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return *(_QWORD*)a2 == 0 || *(unsigned __int8*)(*(_QWORD*)a2 + 49LL) <=
                                  (unsigned int)*(unsigned __int8*)(a1 + 8);
}

#pragma GCC visibility pop
