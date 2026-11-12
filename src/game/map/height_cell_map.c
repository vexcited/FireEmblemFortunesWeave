#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_10027c0(_QWORD*, char*);
bool GameRoutine_1002980(__int64, int*);
extern _UNKNOWN GameData_1ba290c;
extern __int64 (*GameData_20004f8[])();
extern __int64 (*GameData_2000588[])();
extern __int64 (*GameData_2000608[])();
extern __int64* GameData_212f878;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
_QWORD* game_map_HeightCellMap_Commit(__int64 a1);
float* game_map_HeightCellMap_Commit_lambda0_Invoke(__int64 a1, __int64* a2);
void game_map_HeightCellMap_Commit_lambda1_Invoke(__int64 a1, _BYTE* a2);
void __attribute__((noreturn)) String_60a250(_QWORD);
bool HeightCellMap_1002b40(_QWORD* a1, char* a2, float* a3);
unsigned __int64 HeightCellMap_1002e20(unsigned __int64 result,
                                       unsigned __int8* a2, int a3);
unsigned __int64 HeightCellMap_1003040(unsigned __int64 result,
                                       unsigned __int8* a2, int a3, int a4);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___next_prime(unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* HeightCellMap_1003260(__int64 a1, unsigned __int64* a2, __int64 a3,
                              __int64** a4);

bool HeightCellMap_1002b40(_QWORD* a1, char* a2, float* a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  float** v8;
  float* v9;
  unsigned __int64 v10;
  __int64 v11;

  v3 = a1[1];
  if (v3 == 0 || a1[3] == 0) {
    goto LABEL_32;
  }
  v5 = v3 - 1;
  v6 = a2[1] + ((__int64)*a2 << 8);
  if ((v3 & (v3 - 1)) != 0) {
    v7 = a2[1] + ((__int64)*a2 << 8);
    if (v3 <= v6) {
      v7 = v6 % v3;
    }
  }
  else {
    v7 = v5 & v6;
  }
  v8 = *(float***)(*a1 + 8 * v7);
  if (v8 == nullptr || (v9 = *v8) == nullptr) {
  LABEL_32:
    String_60a250("unordered_map::at: key not found");
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v11 = *((_QWORD*)v9 + 1);
      if (v11 == v6) {
        if (*((_QWORD*)v9 + 2) == v6) {
          return v9[11] != *a3 || v9[12] != a3[1] || v9[13] != a3[2] ||
                 v9[14] != a3[3] || v9[15] != a3[4];
        }
      }
      else if ((v11 & v5) != v7) {
        goto LABEL_32;
      }
      v9 = *(float**)v9;
      if (v9 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v10 = *((_QWORD*)v9 + 1);
    if (v10 == v6) {
      break;
    }
    if (v10 >= v3) {
      v10 %= v3;
    }
    if (v10 != v7) {
      goto LABEL_32;
    }
  LABEL_14:
    v9 = *(float**)v9;
    if (v9 == nullptr) {
      goto LABEL_32;
    }
  }
  if (*((_QWORD*)v9 + 2) != v6) {
    goto LABEL_14;
  }
  return v9[11] != *a3 || v9[12] != a3[1] || v9[13] != a3[2] ||
         v9[14] != a3[3] || v9[15] != a3[4];
}

_QWORD* game_map_HeightCellMap_Commit(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* result;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;

  v2 = *(_QWORD**)(a1 + 16);
  v3 = v15_.v15;
  v15_.v15[0] = GameData_20004f8;
  v15_.v16 = v15_.v15;
  if (v2 != nullptr) {
    while (1) {
      (*(void (**)(_QWORD*, _QWORD*))(*v3 + 48LL))(v3, v2 + 4);
      v2 = (_QWORD*)*v2;
      v3 = v15_.v16;
      if (v2 == nullptr) {
        break;
      }
      if (v15_.v16 == nullptr) {
      LABEL_24:
        GameRoutine_60a310_alt1();
      }
    }
    if (v15_.v16 != v15_.v15) {
      if (v15_.v16 != nullptr) {
        v4 = 40;
      LABEL_9:
        (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
      }
      v5 = *(_QWORD**)(a1 + 16);
      v6 = v13_.v13;
      v13_.v13[0] = GameData_2000588;
      v13_.v14 = v13_.v13;
      if (v5 != nullptr) {
        v6 = v13_.v13;
        while (1) {
          (*(void (**)(_QWORD*, _QWORD*))(*v6 + 48LL))(v6, v5 + 4);
          v5 = (_QWORD*)*v5;
          v6 = v13_.v14;
          if (v5 == nullptr) {
            break;
          }
          if (v13_.v14 == nullptr) {
            goto LABEL_24;
          }
        }
        if (v13_.v14 != v13_.v13) {
          if (v13_.v14 != nullptr) {
            v7 = 40;
          LABEL_19:
            (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
          }
          v8 = *(_QWORD**)(a1 + 16);
          result = v11_.v11;
          v11_.v11[0] = GameData_2000608;
          v11_.v12 = v11_.v11;
          if (v8 == nullptr) {
            goto LABEL_28;
          }
          result = v11_.v11;
          while (1) {
            (*(void (**)(_QWORD*, _QWORD*))(*result + 48LL))(result, v8 + 4);
            v8 = (_QWORD*)*v8;
            result = v11_.v12;
            if (v8 == nullptr) {
              break;
            }
            if (v11_.v12 == nullptr) {
              goto LABEL_24;
            }
          }
          if (v11_.v12 == v11_.v11) {
          LABEL_28:
            v10 = 32;
          }
          else {
            if (v11_.v12 == nullptr) {
              return result;
            }
            v10 = 40;
          }
          return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v10))(result);
        }
      }
      v7 = 32;
      goto LABEL_19;
    }
  }
  v4 = 32;
  goto LABEL_9;
}

unsigned __int64 HeightCellMap_1002e20(unsigned __int64 result,
                                       unsigned __int8* a2, int a3)
{
  unsigned __int64 v3;
  unsigned __int8 v5;
  __int64 v6;
  unsigned __int64 v7;
  int v8;
  float v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  float** v18;
  float* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;

  if (a3 >= 1) {
    v3 = *(_QWORD*)(result + 8);
    if (v3 != 0 && *(_QWORD*)(result + 24) != 0) {
      v5 = a2[1];
      v6 = *(_QWORD*)result;
      v7 = v3 - 1;
      v8 = 0;
      v9 = -0x1.9000000000000p+6f;
      do {
        v10 = 0;
        v11 = (__int16)((*a2 + (_WORD)v8) << 8);
        do {
          v12 = v11 + (char)(v5 + v10);
          if ((v3 & v7) == 0) {
            v13 = v7 & v12;
            v14 = *(_QWORD**)(v6 + 8 * (v7 & v12));
            if (v14 == nullptr) {
              goto LABEL_12;
            }
          LABEL_19:
            v15 = (_QWORD*)*v14;
            if (v15 == nullptr) {
              goto LABEL_12;
            }
            if ((v3 & v7) == 0) {
              while (1) {
                v16 = v15[1];
                if (v16 == v12) {
                  result = v15[2];
                  if (result == v12) {
                    goto LABEL_34;
                  }
                }
                else {
                  result = v16 & v7;
                  if (result != v13) {
                    goto LABEL_12;
                  }
                }
                v15 = (_QWORD*)*v15;
                if (v15 == nullptr) {
                  goto LABEL_12;
                }
              }
            }
            while (1) {
              result = v15[1];
              if (result == v12) {
                result = v15[2];
                if (result == v12) {
                LABEL_34:
                  if ((v3 & v7) != 0) {
                    v17 = v11 + (char)(v5 + v10);
                    if (v3 <= v12) {
                      v17 = v12 % v3;
                    }
                  }
                  else {
                    v17 = v7 & v12;
                  }
                  v18 = *(float***)(v6 + 8 * v17);
                  if (v18 == nullptr || (v19 = *v18) == nullptr) {
                  LABEL_54:
                    String_60a250("unordered_map::at: key not found");
                  }
                  if ((v3 & v7) == 0) {
                    while (1) {
                      v21 = *((_QWORD*)v19 + 1);
                      if (v21 == v12) {
                        result = *((_QWORD*)v19 + 2);
                        if (result == v12) {
                          goto LABEL_10;
                        }
                      }
                      else if ((v21 & v7) != v17) {
                        goto LABEL_54;
                      }
                      v19 = *(float**)v19;
                      if (v19 == nullptr) {
                        goto LABEL_54;
                      }
                    }
                  }
                  while (1) {
                    v20 = *((_QWORD*)v19 + 1);
                    if (v20 == v12) {
                      result = *((_QWORD*)v19 + 2);
                      if (result == v12) {
                      LABEL_10:
                        if (v9 < v19[16]) {
                          v9 = v19[16];
                        }
                        goto LABEL_12;
                      }
                    }
                    else {
                      if (v20 >= v3) {
                        v20 %= v3;
                      }
                      if (v20 != v17) {
                        goto LABEL_54;
                      }
                    }
                    v19 = *(float**)v19;
                    if (v19 == nullptr) {
                      goto LABEL_54;
                    }
                  }
                }
              }
              else {
                if (result >= v3) {
                  result %= v3;
                }
                if (result != v13) {
                  goto LABEL_12;
                }
              }
              v15 = (_QWORD*)*v15;
              if (v15 == nullptr) {
                goto LABEL_12;
              }
            }
          }
          v13 = v11 + (char)(v5 + v10);
          if (v3 <= v12) {
            v13 = v12 % v3;
          }
          v14 = *(_QWORD**)(v6 + 8 * v13);
          if (v14 != nullptr) {
            goto LABEL_19;
          }
        LABEL_12:
          ++v10;
        } while (v10 != a3);
        ++v8;
      } while (v8 != a3);
    }
  }
  return result;
}

unsigned __int64 HeightCellMap_1003040(unsigned __int64 result,
                                       unsigned __int8* a2, int a3, int a4)
{
  unsigned __int64 v4;
  unsigned __int8 v6;
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  float v10;
  int v11;
  int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  float** v19;
  float* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;

  if (a3 >= 1 && a4 >= 1) {
    v4 = *(_QWORD*)(result + 8);
    if (v4 != 0 && *(_QWORD*)(result + 24) != 0) {
      v6 = a2[1];
      v7 = *(_QWORD*)result;
      v8 = v4 - 1;
      v9 = 0;
      v10 = -0x1.9000000000000p+6f;
      do {
        v11 = 0;
        v12 = (__int16)((*a2 + (_WORD)v9) << 8);
        do {
          v13 = v12 + (char)(v6 + v11);
          if ((v4 & v8) == 0) {
            v14 = v8 & v13;
            v15 = *(_QWORD**)(v7 + 8 * (v8 & v13));
            if (v15 == nullptr) {
              goto LABEL_13;
            }
          LABEL_20:
            v16 = (_QWORD*)*v15;
            if (v16 == nullptr) {
              goto LABEL_13;
            }
            if ((v4 & v8) == 0) {
              while (1) {
                v17 = v16[1];
                if (v17 == v13) {
                  result = v16[2];
                  if (result == v13) {
                    goto LABEL_35;
                  }
                }
                else {
                  result = v17 & v8;
                  if (result != v14) {
                    goto LABEL_13;
                  }
                }
                v16 = (_QWORD*)*v16;
                if (v16 == nullptr) {
                  goto LABEL_13;
                }
              }
            }
            while (1) {
              result = v16[1];
              if (result == v13) {
                result = v16[2];
                if (result == v13) {
                LABEL_35:
                  if ((v4 & v8) != 0) {
                    v18 = v12 + (char)(v6 + v11);
                    if (v4 <= v13) {
                      v18 = v13 % v4;
                    }
                  }
                  else {
                    v18 = v8 & v13;
                  }
                  v19 = *(float***)(v7 + 8 * v18);
                  if (v19 == nullptr || (v20 = *v19) == nullptr) {
                  LABEL_55:
                    String_60a250("unordered_map::at: key not found");
                  }
                  if ((v4 & v8) == 0) {
                    while (1) {
                      v22 = *((_QWORD*)v20 + 1);
                      if (v22 == v13) {
                        result = *((_QWORD*)v20 + 2);
                        if (result == v13) {
                          goto LABEL_11;
                        }
                      }
                      else if ((v22 & v8) != v18) {
                        goto LABEL_55;
                      }
                      v20 = *(float**)v20;
                      if (v20 == nullptr) {
                        goto LABEL_55;
                      }
                    }
                  }
                  while (1) {
                    v21 = *((_QWORD*)v20 + 1);
                    if (v21 == v13) {
                      result = *((_QWORD*)v20 + 2);
                      if (result == v13) {
                      LABEL_11:
                        if (v10 < v20[16]) {
                          v10 = v20[16];
                        }
                        goto LABEL_13;
                      }
                    }
                    else {
                      if (v21 >= v4) {
                        v21 %= v4;
                      }
                      if (v21 != v18) {
                        goto LABEL_55;
                      }
                    }
                    v20 = *(float**)v20;
                    if (v20 == nullptr) {
                      goto LABEL_55;
                    }
                  }
                }
              }
              else {
                if (result >= v4) {
                  result %= v4;
                }
                if (result != v14) {
                  goto LABEL_13;
                }
              }
              v16 = (_QWORD*)*v16;
              if (v16 == nullptr) {
                goto LABEL_13;
              }
            }
          }
          v14 = v12 + (char)(v6 + v11);
          if (v4 <= v13) {
            v14 = v13 % v4;
          }
          v15 = *(_QWORD**)(v7 + 8 * v14);
          if (v15 != nullptr) {
            goto LABEL_20;
          }
        LABEL_13:
          ++v11;
        } while (v11 != a4);
        ++v9;
      } while (v9 != a3);
    }
  }
  return result;
}

_QWORD* HeightCellMap_1003260(__int64 a1, unsigned __int64* a2, __int64 a3,
                              __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v9;
  _QWORD** v10;
  _QWORD* result;
  unsigned __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  float v16;
  __int64 v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 primeEm;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  unsigned __int64 v43;
  _QWORD* v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;

  v5 = *a2;
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    v9 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v5 >= v6) {
        v4 = v5 % v6;
      }
    }
    else {
      v4 = v9 & v5;
    }
    v10 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v4);
    if (v10 != nullptr) {
      result = *v10;
      if (*v10 != nullptr) {
        if ((v6 & v9) == 0) {
          while (1) {
            v13 = result[1];
            if (v13 == v5) {
              if (result[2] == v5) {
                return result;
              }
            }
            else if ((v13 & v9) != v4) {
              goto LABEL_23;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_23;
            }
          }
        }
        do {
          v12 = result[1];
          if (v12 == v5) {
            if (result[2] == v5) {
              return result;
            }
          }
          else {
            if (v12 >= v6) {
              v12 %= v6;
            }
            if (v12 != v4) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_23:
  v14 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
  v15 = *a4;
  *result = 0;
  result[1] = v5;
  v16 = *(float*)(a1 + 32);
  v17 = *v15;
  result[24] = 0;
  result[25] = 0;
  result[22] = 0;
  result[23] = 0;
  result[20] = 0;
  result[21] = 0;
  result[18] = 0;
  result[19] = 0;
  result[16] = 0;
  result[17] = 0;
  result[14] = 0;
  result[15] = 0;
  result[12] = 0;
  result[13] = 0;
  result[10] = 0;
  result[11] = 0;
  result[8] = 0;
  result[9] = 0;
  result[6] = 0;
  result[7] = 0;
  result[4] = 0;
  result[5] = 0;
  result[2] = v17;
  v18 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v6 == 0 || (float)(v16 * (float)v6) < v18) {
    v19 = v18 / v16;
    v20 = true;
    if (v6 >= 3) {
      v20 = (v6 & (v6 - 1)) != 0;
    }
    v21 = v20 | (2 * v6);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      primeEm = v22;
    }
    else {
      primeEm = v21;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v24 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v24;
      v6 = *(_QWORD*)(a1 + 8);
    }
    if (primeEm <= v6) {
      if (primeEm >= v6) {
        goto LABEL_84;
      }
      v31 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v44 = result;
        v31 = std___1___next_prime(v31);
        result = v44;
      }
      else {
        v32 = 1LL << -(char)__clz(v31 - 1);
        if (v31 >= 2) {
          v31 = v32;
        }
      }
      if (primeEm <= v31) {
        primeEm = v31;
      }
      if (primeEm >= v6) {
        goto LABEL_84;
      }
      if (primeEm == 0) {
        v45 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v45 != 0) {
          v46 = result;
          v47 = 128;
          if (*(_QWORD*)(*v14 + 200) == 0) {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free(*v14 + v47, v45);
          result = v46;
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_84;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v25 = result;
    v26 = fw_memory_HeapManager_Allocate(*v14, 8 * primeEm, 16, 0);
    v27 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v26;
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v14 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*v14 + v28, v27);
    }
    v29 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v30 = 0;
      result = v25;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 48) = 0;
        v33 = *(_QWORD*)a1 + 8 * v30;
        v30 += 8;
        *(_QWORD*)(v33 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v30);
    }
    else {
      v30 = 0;
      result = v25;
    }
    if ((primeEm & 7) != 0) {
      v34 = 8 * v30;
      do {
        --v29;
        *(_QWORD*)(*(_QWORD*)a1 + v34) = 0;
        v34 += 8;
      } while (v29 != 0);
    }
    v36 = a1 + 16;
    v35 = *(_QWORD**)(a1 + 16);
    if (v35 != nullptr) {
      v37 = v35[1];
      v38 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v37 >= primeEm) {
          v37 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v37) = v36;
        v39 = (_QWORD*)*v35;
        if (*v35 == 0) {
          goto LABEL_84;
        }
        while (1) {
          v40 = v39[1];
          if (v40 >= primeEm) {
            v40 %= primeEm;
          }
          if (v40 != v37) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v40) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v40) = v35;
              goto LABEL_61;
            }
            *v35 = *v39;
            *v39 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v40);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v40) = v39;
            v39 = v35;
          }
          v40 = v37;
        LABEL_61:
          v35 = v39;
          v39 = (_QWORD*)*v39;
          v37 = v40;
          if (v39 == nullptr) {
            goto LABEL_84;
          }
        }
      }
      v41 = v37 & v38;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
      while (1) {
        v42 = (_QWORD*)*v35;
        if (*v35 == 0) {
          break;
        }
        v43 = v42[1] & v38;
        if (v43 == v41) {
          v35 = (_QWORD*)*v35;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v43) != 0) {
          *v35 = *v42;
          *v42 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v43);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v43) = v42;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v35;
          v35 = v42;
          v41 = v43;
        }
      }
    }
  LABEL_84:
    v6 = *(_QWORD*)(a1 + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v5 >= v6) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = (v6 - 1) & v5;
    }
  }
  v48 = *(_QWORD*)a1;
  v49 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v4);
  if (v49 != nullptr) {
    *result = *v49;
    *v49 = result;
  }
  else {
    v50 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *result = v50;
    *(_QWORD*)(v48 + 8 * v4) = a1 + 16;
    if (*result != 0) {
      v51 = *(_QWORD*)(*result + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v51 >= v6) {
          v51 %= v6;
        }
      }
      else {
        v51 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

float* game_map_HeightCellMap_Commit_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  float v4;
  float v5;
  __int64* v6;
  __int64 v7;
  _BYTE* v8;
  char v9;
  char v10;
  char v11;
  _QWORD* v12;
  float* result;
  __int64 v14;
  float v15;
  float v16;
  _WORD v17[2];

  v2 = *a2;
  if (*(_BYTE*)(*a2 + 48) == 1) {
    v4 = *(float*)(v2 + 44);
  }
  else {
    v5 = *(float*)(*GameData_212f878 + 1428);
    *(_BYTE*)(v2 + 48) = 1;
    v4 = v5 * 5.0f;
    *(float*)(v2 + 44) = v5 * 5.0f;
  }
  v6 = a2 + 7;
  v7 = 144;
  v8 = &GameData_1ba290c;
  do {
    v9 = v8[1];
    v10 = *v8 + *((_BYTE*)a2 + 8);
    v11 = *((_BYTE*)a2 + 9);
    v12 = (_QWORD*)*a2;
    HIBYTE(v17[1]) = 0;
    LOBYTE(v17[0]) = v10;
    *(_WORD*)((char*)v17 + 1) = (unsigned __int8)(v9 + v11);
    result = (float*)GameRoutine_10027c0(v12, (char*)v17);
    if (result != nullptr) {
      v14 = *((int*)v8 - 1);
      v15 = result[*((int*)v8 + 1) + 9];
      if (vabds_f32(v15, *((float*)a2 + v14 + 9)) < v4) {
        if (*((float*)v6 + v14) >= v15) {
          v15 = *((float*)v6 + v14);
        }
        *((float*)v6 + v14) = v15;
      }
    }
    v7 -= 12;
    v8 += 12;
  } while (v7 != 0);
  v16 = (float)((float)((float)((float)(*((float*)a2 + 14) + 0.0f) +
                                *((float*)a2 + 15)) +
                        *((float*)a2 + 16)) +
                *((float*)a2 + 17)) *
        0.25f;
  if (v16 < *((float*)a2 + 18)) {
    v16 = *((float*)a2 + 18);
  }
  *((float*)a2 + 18) = v16;
  return result;
}

void game_map_HeightCellMap_Commit_lambda1_Invoke(__int64 a1, _BYTE* a2)
{
  int v3;

  if ((a2[76] & 1) == 0) {
    v3 = 0;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[76] = 1;
    }
  }
  if ((a2[77] & 1) == 0) {
    v3 = 1;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[77] = 1;
    }
  }
  if ((a2[78] & 1) == 0) {
    v3 = 2;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[78] = 1;
    }
  }
  if ((a2[79] & 1) == 0) {
    v3 = 3;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[79] = 1;
    }
  }
  if ((a2[80] & 1) == 0) {
    v3 = 4;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[80] = 1;
    }
  }
  if ((a2[81] & 1) == 0) {
    v3 = 5;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[81] = 1;
    }
  }
  if ((a2[82] & 1) == 0) {
    v3 = 6;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[82] = 1;
    }
  }
  if ((a2[83] & 1) == 0) {
    v3 = 7;
    if (GameRoutine_1002980((__int64)a2, &v3)) {
      a2[83] = 1;
    }
  }
}

#pragma GCC visibility pop
