#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1262240(_QWORD*, unsigned __int16*, int);
__int64 GameRoutine_12623a0(_QWORD*, __int64, int);
__int64 DeliveryKindExecutor_Destructor(__int64 a1, unsigned __int16* a2);
__int64 DeliveryKindExecutor_DeletingDestructor(__int64 a1, __int64 a2, int a3);
__attribute__((swiftcall)) void TransporterConst_89cb30(PSEUDO_X8);
__int64 DeliveryKindExecutor_12634c0_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("DeliveryKindExecutor_12634c0");
__int64 DeliveryKindExecutor_12638e0_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "DeliveryKindExecutor_12638e0");
__int64 GameRoutine_1263ac0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1263ea0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_8f7120(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212c060;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(void);
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 DeliveryKindExecutor_Unknown6_alt1(__int64 a1) __asm__(
    "DeliveryKindExecutor_Unknown6");
__int64 DeliveryKindExecutor_12634c0(__int64 result, unsigned int* a2,
                                     __int64** a3, unsigned __int64 a4,
                                     unsigned int* a5, signed __int64 a6);
bool DeliveryKindExecutor_12638e0(_QWORD* a1, int a2, int a3);
bool DeliveryKindExecutor_Unknown4(__int64 a1);
_QWORD* game_8f7120(float*, __int64*, __int64*);
__attribute__((swiftcall)) void
TransporterConst_89cb30_alt1(PSEUDO_X8, __int64 result,
                             int) __asm__("TransporterConst_89cb30");
__int64 GameRoutine_1a09d20_alt1(unsigned __int64,
                                 __int64) __asm__("GameRoutine_1a09d20");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5a20_alt1() __asm__("GameRoutine_6e5a20");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void DeliveryKindExecutor_Unknown6(__int64 a1);

__int64 DeliveryKindExecutor_Destructor(__int64 a1, unsigned __int16* a2)
{
  int v2;
  int v3;
  int v4;
  _QWORD* v7;
  unsigned __int16* v8;
  int v9;
  int v10;
  int v11;
  _QWORD* v12;

  v2 = a2[1];
  v3 = *(_DWORD*)(a1 + 96);
  v4 = *(_DWORD*)(a1 + 8);
  v7 = (_QWORD*)(a1 + 16);
  v8 = a2 + 2;
  v9 = v3 + v2;
  v10 = v4 - v3;
  if (v9 >= v4) {
    v11 = v10;
  }
  else {
    v11 = v2;
  }
  v12 = (_QWORD*)GameRoutine_1262240(v7, v8, v11);
  GameRoutine_12623a0(v12, 0, *a2);
  *(_DWORD*)(a1 + 96) += v11;
  return 0;
}

__int64 DeliveryKindExecutor_DeletingDestructor(__int64 a1, __int64 a2, int a3)
{
  _QWORD* v6;

  v6 = (_QWORD*)GameRoutine_1262240(
      (_QWORD*)(a1 + 16), (unsigned __int16*)(a2 + 8LL * a3 + 828), 1);
  GameRoutine_12623a0(v6, a2, a3);
  ++*(_DWORD*)(a1 + 96);
  return 0;
}

bool DeliveryKindExecutor_Unknown4(__int64 a1)
{
  return (signed __int32)*(_DWORD*)(a1 + 96) >=
         (signed __int32)*(_DWORD*)(a1 + 8);
}

void DeliveryKindExecutor_Unknown6(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  unsigned __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned int* v5;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned int* v17;
  signed __int64 v18;
  __int64 v19;
  __int64 v20;
  int* v21;
  unsigned __int64 v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64** v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  bool v36;
  __int64 v37;
  __int64 v38;
  unsigned int* v39;
  unsigned int* v40;
  unsigned int v41;
  unsigned int* v42;
  int v43;
  int v44;
  __int64 v45;
  int v46;
  int v47;
  int* v48;
  unsigned __int64 v49;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64** v54;
  __int64* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v64;
  __int64 v65;
  unsigned int* v66;
  unsigned int* v67;
  int v68;
  unsigned int* v69;
  int v70;
  __int64 v71;
  int v72;
  int v73;
  __int64 v74;
  int* v75;
  _QWORD* v76;
  __int64* v78;

  v1 = *(_DWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 40);
  if (v2 != 0) {
    if (v2 >> 62 != 0) {
    LABEL_159:
      GameRoutine_6e5a20_alt1();
    }
    v3 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v2, 16, 0);
    v4 = v3 + 4 * v2;
    v5 = (unsigned int*)v3;
  }
  else {
    v4 = 0;
    v5 = nullptr;
  }
  v6 = *(__int64**)(a1 + 32);
  if (v6 != nullptr) {
    v7 = (__int64)v5;
    while (1) {
      if ((unsigned __int64)v5 < v4) {
        *v5++ = *((_DWORD*)v6 + 4);
      }
      else {
        v8 = (unsigned __int64)v5 - v7;
        v9 = ((__int64)v5 - v7) >> 2;
        v10 = v9 + 1;
        if ((unsigned __int64)(v9 + 1) >> 62 != 0) {
          goto LABEL_159;
        }
        if ((__int64)(v4 - v7) >> 1 > v10) {
          v10 = (__int64)(v4 - v7) >> 1;
        }
        if (v4 - v7 >= 0x7FFFFFFFFFFFFFFCLL) {
          v11 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v11 = v10;
        }
        if (v11 != 0) {
          if (v11 >> 62 != 0) {
            GameRoutine_60a210_alt1();
          }
          v12 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v11, 16, 0);
        }
        else {
          v12 = 0;
        }
        v4 = v12 + 4 * v11;
        v13 = v12 + v8 - 4 * v9;
        *(_DWORD*)(v12 + v8) = *((_DWORD*)v6 + 4);
        v5 = (unsigned int*)(v12 + v8 + 4);
        memcpy_alt1(v13, v7, v8);
        if (v7 != 0) {
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v7);
        }
        v7 = v13;
      }
      v6 = (__int64*)*v6;
      if (v6 == nullptr) {
        goto LABEL_26;
      }
    }
  }
  v7 = (__int64)v5;
LABEL_26:
  v76 = (_QWORD*)(a1 + 16);
  v78 = (__int64*)(a1 + 16);
  if (((__int64)v5 - v7) >> 2 < 129) {
    v18 = 0;
  LABEL_32:
    DeliveryKindExecutor_12634c0(v7, v5, &v78, ((__int64)v5 - v7) >> 2, nullptr,
                                 v18);
    if ((unsigned int*)v7 == v5) {
      goto LABEL_153;
    }
  }
  else {
    v15 = ((__int64)v5 - v7) >> 2;
    v16 = GameData_212c060;
    while (1) {
      v17 = (unsigned int*)GameRoutine_1a09d20_alt1(4 * v15, v16);
      if (v17 != nullptr) {
        break;
      }
      v18 = v15 >> 1;
      v36 = v15 > 1;
      v15 >>= 1;
      if (!v36) {
        goto LABEL_32;
      }
    }
    v19 = (__int64)v17;
    DeliveryKindExecutor_12634c0(v7, v5, &v78, ((__int64)v5 - v7) >> 2, v17,
                                 v15);
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v19);
    if ((unsigned int*)v7 == v5) {
      goto LABEL_153;
    }
  }
  v21 = (int*)v7;
  while (2) {
    v22 = *(_QWORD*)(a1 + 24);
    if (v22 == 0 || *(_QWORD*)(a1 + 40) == 0) {
      goto LABEL_158;
    }
    v24 = *v21;
    v25 = v22 - 1;
    if ((v22 & (v22 - 1)) != 0) {
      v26 = *v21;
      if (v22 <= v24) {
        v26 = v24 % v22;
      }
    }
    else {
      v26 = v25 & v24;
    }
    v27 = *(__int64***)(*v76 + 8 * v26);
    if (v27 == nullptr || (v28 = *v27) == nullptr) {
    LABEL_158:
      String_60a250_alt1("unordered_map::at: key not found");
    }
    v75 = v21;
    if ((v22 & v25) == 0) {
      while (1) {
        v30 = v28[1];
        if (v30 == v24) {
          if (*((_DWORD*)v28 + 4) == (_DWORD)v24) {
            goto LABEL_61;
          }
        }
        else if ((v30 & v25) != v26) {
          goto LABEL_158;
        }
        v28 = (__int64*)*v28;
        if (v28 == nullptr) {
          goto LABEL_158;
        }
      }
    }
    while (1) {
      v29 = v28[1];
      if (v29 == v24) {
        break;
      }
      if (v29 >= v22) {
        v29 %= v22;
      }
      if (v29 != v26) {
        goto LABEL_158;
      }
    LABEL_51:
      v28 = (__int64*)*v28;
      if (v28 == nullptr) {
        goto LABEL_158;
      }
    }
    if (*((_DWORD*)v28 + 4) != (_DWORD)v24) {
      goto LABEL_51;
    }
  LABEL_61:
    v31 = (__int64*)v28[4];
    v32 = (__int64*)v28[5];
    if (v31 == v32) {
      if (v1 <= 0) {
        goto LABEL_153;
      }
    LABEL_95:
      v21 = v75 + 1;
      if (v75 + 1 == (int*)v5) {
        v48 = (int*)v7;
        while (1) {
          v49 = *(_QWORD*)(a1 + 24);
          if (v49 == 0 || *(_QWORD*)(a1 + 40) == 0) {
            goto LABEL_158;
          }
          v51 = *v48;
          v52 = v49 - 1;
          if ((v49 & (v49 - 1)) != 0) {
            v53 = *v48;
            if (v49 <= v51) {
              v53 = v51 % v49;
            }
          }
          else {
            v53 = v52 & v51;
          }
          v54 = *(__int64***)(*v76 + 8 * v53);
          if (v54 == nullptr) {
            goto LABEL_158;
          }
          v55 = *v54;
          if (v55 == nullptr) {
            goto LABEL_158;
          }
          if ((v49 & v52) == 0) {
            while (1) {
              v57 = v55[1];
              if (v57 == v51) {
                if (*((_DWORD*)v55 + 4) == (_DWORD)v51) {
                  goto LABEL_120;
                }
              }
              else if ((v57 & v52) != v53) {
                goto LABEL_158;
              }
              v55 = (__int64*)*v55;
              if (v55 == nullptr) {
                goto LABEL_158;
              }
            }
          }
          while (1) {
            v56 = v55[1];
            if (v56 == v51) {
              break;
            }
            if (v56 >= v49) {
              v56 %= v49;
            }
            if (v56 != v53) {
              goto LABEL_158;
            }
          LABEL_110:
            v55 = (__int64*)*v55;
            if (v55 == nullptr) {
              goto LABEL_158;
            }
          }
          if (*((_DWORD*)v55 + 4) != (_DWORD)v51) {
            goto LABEL_110;
          }
        LABEL_120:
          v58 = (__int64*)v55[4];
          v59 = (__int64*)v55[5];
          while (v58 != v59) {
            if (*v58 != 0) {
              v60 = v58[1];
              v61 = v58[2];
              v62 = (unsigned __int64)(v61 - v60) >> 2;
              if (v61 != v60 && (int)v62 >= 1) {
                v64 = v60 + 4;
                do {
                  v65 = *v58 + 8LL * *(int*)(v64 - 4);
                  if (*(_WORD*)(v65 + 828) != 0) {
                    *(_QWORD*)(v65 + 828) = 0;
                    game_8f7120((float*)(a1 + 56), v58, v58);
                    if (v1 < 2) {
                      goto LABEL_153;
                    }
                    LODWORD(v62) = v62 - 1;
                    --v1;
                  }
                  if (v64 == v61) {
                    break;
                  }
                  v64 += 4;
                } while ((int)v62 > 0);
              LABEL_121:
                if (v1 < 1) {
                  goto LABEL_153;
                }
              }
            }
            else {
              v66 = (unsigned int*)v58[1];
              v67 = (unsigned int*)v58[2];
              if (v66 != v67) {
                v68 = 0;
                v69 = (unsigned int*)v58[1];
                do {
                  if ((*v69 & 0x80000000) != 0) {
                    v70 = 0;
                  }
                  else {
                    v70 = *(
                        unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                     game_TransporterConst_List_instance__ptr
                                                                         [0] +
                                                                 8LL) +
                                                      8LL) +
                                           12LL * *v69 + 2);
                  }
                  v68 += v70;
                  ++v69;
                } while (v69 != v67);
                if (v68 != 0) {
                  while (1) {
                    v45 = *v66;
                    if ((v45 & 0x80000000) == 0) {
                      v71 =
                          *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ +
                                                8) +
                                     8LL) +
                          12LL * (unsigned int)v45;
                      v72 = *(unsigned __int16*)(v71 + 2);
                      if (*(_WORD*)(v71 + 2) != 0) {
                        v73 = v1 - v72;
                        if (v1 < v72) {
                          goto LABEL_152;
                        }
                        TransporterConst_89cb30_alt1((void*)((__int64)&v78),
                                                     v45, v72);
                        v1 = v73;
                        if (v73 == 0) {
                          goto LABEL_153;
                        }
                      }
                    }
                    if (++v66 == v67) {
                      goto LABEL_121;
                    }
                  }
                }
              }
            }
            v58 += 4;
          }
          if (++v48 == (int*)v5) {
            goto LABEL_153;
          }
        }
      }
      continue;
    }
    break;
  }
  while (1) {
    if (*v31 != 0) {
      v33 = v31[1];
      v34 = v31[2];
      v35 = (unsigned __int64)(v34 - v33) >> 2;
      v36 = v34 == v33 || (int)v35 <= 1;
      if (!v36) {
        v37 = v33 + 4;
        do {
          v38 = *v31 + 8LL * *(int*)(v37 - 4);
          if (*(_WORD*)(v38 + 828) != 0) {
            *(_QWORD*)(v38 + 828) = 0;
            game_8f7120((float*)(a1 + 56), v31, v31);
            if (v1 < 2) {
              goto LABEL_153;
            }
            LODWORD(v35) = v35 - 1;
            --v1;
          }
          if (v37 == v34) {
            break;
          }
          v37 += 4;
        } while ((int)v35 > 1);
      }
      goto LABEL_91;
    }
    v39 = (unsigned int*)v31[1];
    v40 = (unsigned int*)v31[2];
    if (v39 != v40) {
      v41 = 0;
      v42 = (unsigned int*)v31[1];
      do {
        if ((*v42 & 0x80000000) != 0) {
          v43 = 0;
        }
        else {
          v43 = *(
              unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                           game_TransporterConst_List_instance__ptr
                                                               [0] +
                                                       8LL) +
                                            8LL) +
                                 12LL * *v42 + 2);
        }
        v41 += v43;
        ++v42;
      } while (v42 != v40);
      if (v41 >= 2) {
        break;
      }
    }
  LABEL_91:
    if (v1 < 1) {
      goto LABEL_153;
    }
    v31 += 4;
    if (v31 == v32) {
      goto LABEL_95;
    }
  }
  v44 = v41 - 1;
  while (1) {
    v45 = *v39;
    if ((v45 & 0x80000000) == 0 &&
        *(_WORD*)(*(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ +
                                        8) +
                             8LL) +
                  12LL * (unsigned int)v45 + 2) != 0) {
      if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ +
                                                     8) +
                                          8LL) +
                               12LL * (unsigned int)v45 + 2) >= v44) {
        v46 = v44;
      }
      else {
        v46 = *(
            unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ +
                                                     8) +
                                          8LL) +
                               12LL * (unsigned int)v45 + 2);
      }
      v47 = v1 - v46;
      if (v1 < v46) {
      LABEL_152:
        TransporterConst_89cb30_alt1((void*)((__int64)&v78), v45, v1);
        break;
      }
      TransporterConst_89cb30_alt1((void*)((__int64)&v78), v45, v46);
      v1 = v47;
      if (v47 == 0) {
        break;
      }
    }
    if (++v39 == v40) {
      goto LABEL_91;
    }
  }
LABEL_153:
  if (v7 != 0) {
    v74 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v7);
  }
}

__int64 DeliveryKindExecutor_12634c0(__int64 result, unsigned int* a2,
                                     __int64** a3, unsigned __int64 a4,
                                     unsigned int* a5, signed __int64 a6)
{
  unsigned int* v8;
  unsigned int v9;
  unsigned int* v10;
  unsigned int* v11;
  unsigned int* v12;
  unsigned int* v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int* v16;
  __int64* v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64** v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64** v28;
  __int64* v29;
  unsigned int v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned int* v34;
  unsigned __int64 v35;
  unsigned int* v38;
  unsigned int* v39;
  unsigned int* v40;
  unsigned int* v41;
  __int64 v42;
  unsigned int v43;
  __int64 v44;
  unsigned int v45;
  unsigned int v46;

  if (a4 >= 2) {
    v8 = (unsigned int*)result;
    if (a4 == 2) {
      result = DeliveryKindExecutor_12638e0_alt1(*a3, *(a2 - 1),
                                                 *(unsigned int*)result);
      if ((result & 1) != 0) {
        v9 = *v8;
        *v8 = *(a2 - 1);
        *(a2 - 1) = v9;
      }
    }
    else if ((__int64)a4 > 128) {
      v33 = a4 >> 1;
      v34 = a5;
      v35 = a4 - (a4 >> 1);
      if ((__int64)a4 <= a6) {
        GameRoutine_1263ac0(result, result + 4 * v33, a3, a4 >> 1, a5);
        v38 = &v34[v33];
        result = GameRoutine_1263ac0(&v8[v33], a2, a3, v35, v38);
        v39 = &v34[a4];
        v40 = v38;
        while (v40 != v39) {
          result = DeliveryKindExecutor_12638e0_alt1(*a3, *v40, *v34);
          if ((result & 1) != 0) {
            v41 = v40;
          }
          else {
            v41 = v34;
          }
          if ((result & 1) != 0) {
            v42 = 0;
          }
          else {
            v42 = 4;
          }
          v43 = *v41;
          v34 = (unsigned int*)((char*)v34 + v42);
          if ((result & 1) != 0) {
            v44 = 4;
          }
          else {
            v44 = 0;
          }
          v40 = (unsigned int*)((char*)v40 + v44);
          *v8++ = v43;
          if (v34 == v38) {
            while (v40 != v39) {
              v46 = *v40++;
              *v8++ = v46;
            }
            return result;
          }
        }
        while (v34 != v38) {
          v45 = *v34++;
          *v8++ = v45;
        }
      }
      else {
        DeliveryKindExecutor_12634c0(result, result + 4 * v33, a3, a4 >> 1, a5,
                                     a6);
        DeliveryKindExecutor_12634c0(&v8[v33], a2, a3, v35, v34, a6);
        return GameRoutine_1263ea0(v8, &v8[v33], a2, a3, v33, v35, v34, a6);
      }
    }
    else if ((unsigned int*)result != a2) {
      v10 = (unsigned int*)(result + 4);
      if ((unsigned int*)(result + 4) != a2) {
        v11 = (unsigned int*)result;
        do {
          v13 = v10;
          result = DeliveryKindExecutor_12638e0_alt1(*a3, v11[1], *v11);
          if ((result & 1) == 0) {
            goto LABEL_12;
          }
          v14 = *v13;
          v15 = *v11;
          v16 = v13;
        LABEL_16:
          *v16 = v15;
          if (v11 != v8) {
            v17 = *a3;
            v18 = (*a3)[1];
            if (v18 == 0 || (*a3)[3] == 0) {
              goto LABEL_81;
            }
            v20 = v18 - 1;
            v12 = v11;
            if ((v18 & (v18 - 1)) != 0) {
              v21 = (int)v14;
              if (v18 <= (int)v14) {
                v21 = (int)v14 % v18;
              }
            }
            else {
              v21 = v20 & (int)v14;
            }
            v22 = *v17;
            v23 = *(__int64***)(*v17 + 8 * v21);
            if (v23 == nullptr || (v24 = *v23, *v23 == nullptr)) {
            LABEL_81:
              String_60a250("unordered_map::at: key not found");
            }
            --v11;
            v15 = *(v12 - 1);
            if ((v18 & v20) == 0) {
              while (1) {
                v26 = v24[1];
                if (v26 == (__int64)(int)v14) {
                  if (*((_DWORD*)v24 + 4) == v14) {
                    goto LABEL_40;
                  }
                }
                else if ((v26 & v20) != v21) {
                  goto LABEL_81;
                }
                v24 = (__int64*)*v24;
                if (v24 == nullptr) {
                  goto LABEL_81;
                }
              }
            }
            while (1) {
              v25 = v24[1];
              if (v25 == (__int64)(int)v14) {
                if (*((_DWORD*)v24 + 4) == v14) {
                LABEL_40:
                  if ((v18 & v20) != 0) {
                    v27 = (int)v15;
                    if (v18 <= (int)v15) {
                      v27 = (int)v15 % v18;
                    }
                  }
                  else {
                    v27 = v20 & (int)v15;
                  }
                  v28 = *(__int64***)(v22 + 8 * v27);
                  if (v28 == nullptr) {
                    goto LABEL_81;
                  }
                  v29 = *v28;
                  if (v29 == nullptr) {
                    goto LABEL_81;
                  }
                  v30 = *((_DWORD*)v24 + 7);
                  if ((v18 & v20) == 0) {
                    while (1) {
                      v32 = v29[1];
                      if (v32 == (__int64)(int)v15) {
                        if (*((_DWORD*)v29 + 4) == v15) {
                          goto LABEL_15;
                        }
                      }
                      else if ((v32 & v20) != v27) {
                        goto LABEL_81;
                      }
                      v29 = (__int64*)*v29;
                      if (v29 == nullptr) {
                        goto LABEL_81;
                      }
                    }
                  }
                  while (2) {
                    v31 = v29[1];
                    if (v31 != (__int64)(int)v15) {
                      if (v31 >= v18) {
                        v31 %= v18;
                      }
                      if (v31 != v27) {
                        goto LABEL_81;
                      }
                    LABEL_49:
                      v29 = (__int64*)*v29;
                      if (v29 == nullptr) {
                        goto LABEL_81;
                      }
                      continue;
                    }
                    break;
                  }
                  if (*((_DWORD*)v29 + 4) != v15) {
                    goto LABEL_49;
                  }
                LABEL_15:
                  v16 = v12;
                  if (v30 >= *((_DWORD*)v29 + 7)) {
                    goto LABEL_11;
                  }
                  goto LABEL_16;
                }
              }
              else {
                if (v25 >= v18) {
                  v25 %= v18;
                }
                if (v25 != v21) {
                  goto LABEL_81;
                }
              }
              v24 = (__int64*)*v24;
              if (v24 == nullptr) {
                goto LABEL_81;
              }
            }
          }
          v12 = v8;
        LABEL_11:
          *v12 = v14;
        LABEL_12:
          v10 = v13 + 1;
          v11 = v13;
        } while (v13 + 1 != a2);
      }
    }
  }
  return result;
}

bool DeliveryKindExecutor_12638e0(_QWORD* a1, int a2, int a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64** v12;
  __int64* v13;
  unsigned int v14;
  unsigned __int64 v15;
  __int64 v16;

  v3 = a1[1];
  if (v3 == 0 || a1[3] == 0) {
    goto LABEL_44;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = a2;
    if (v3 <= a2) {
      v6 = a2 % v3;
    }
  }
  else {
    v6 = v5 & a2;
  }
  v7 = *(__int64***)(*a1 + 8 * v6);
  if (v7 == nullptr || (v8 = *v7) == nullptr) {
  LABEL_44:
    String_60a250("unordered_map::at: key not found");
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == a2) {
        if (*((_DWORD*)v8 + 4) == a2) {
          goto LABEL_24;
        }
      }
      else if ((v10 & v5) != v6) {
        goto LABEL_44;
      }
      v8 = (__int64*)*v8;
      if (v8 == nullptr) {
        goto LABEL_44;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == a2) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      goto LABEL_44;
    }
  LABEL_14:
    v8 = (__int64*)*v8;
    if (v8 == nullptr) {
      goto LABEL_44;
    }
  }
  if (*((_DWORD*)v8 + 4) != a2) {
    goto LABEL_14;
  }
LABEL_24:
  if ((v3 & v5) != 0) {
    v11 = a3;
    if (v3 <= a3) {
      v11 = a3 % v3;
    }
  }
  else {
    v11 = v5 & a3;
  }
  v12 = *(__int64***)(*a1 + 8 * v11);
  if (v12 == nullptr) {
    goto LABEL_44;
  }
  v13 = *v12;
  if (v13 == nullptr) {
    goto LABEL_44;
  }
  v14 = *((_DWORD*)v8 + 7);
  if ((v3 & v5) == 0) {
    while (1) {
      v16 = v13[1];
      if (v16 == a3) {
        if (*((_DWORD*)v13 + 4) == a3) {
          return v14 < *((_DWORD*)v13 + 7);
        }
      }
      else if ((v16 & v5) != v11) {
        goto LABEL_44;
      }
      v13 = (__int64*)*v13;
      if (v13 == nullptr) {
        goto LABEL_44;
      }
    }
  }
  while (1) {
    v15 = v13[1];
    if (v15 == a3) {
      break;
    }
    if (v15 >= v3) {
      v15 %= v3;
    }
    if (v15 != v11) {
      goto LABEL_44;
    }
  LABEL_33:
    v13 = (__int64*)*v13;
    if (v13 == nullptr) {
      goto LABEL_44;
    }
  }
  if (*((_DWORD*)v13 + 4) != a3) {
    goto LABEL_33;
  }
  return v14 < *((_DWORD*)v13 + 7);
}

#pragma GCC visibility pop
