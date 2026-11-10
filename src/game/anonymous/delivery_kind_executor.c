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
__int64 DeliveryKindExecutor_Unknown6(__int64 a1);
__int64 DeliveryKindExecutor_12634c0(__int64 result, unsigned int* a2,
                                     __int64** a3, unsigned __int64 a4,
                                     unsigned int* a5, signed __int64 a6);
bool DeliveryKindExecutor_12638e0(_QWORD* a1, int a2, int a3);

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

__int64 DeliveryKindExecutor_Unknown6(__int64 a1)
{
  int v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  int* v4;
  __int64* v5;
  int* v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 result;
  __int64 v19;
  int* v20;
  unsigned __int64 v21;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64** v26;
  __int64* v27;
  unsigned __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  bool v35;
  __int64 v36;
  __int64 v37;
  unsigned int* v38;
  unsigned int* v39;
  unsigned int v40;
  unsigned int* v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int* v46;
  unsigned __int64 v47;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64** v52;
  __int64* v53;
  unsigned __int64 v54;
  __int64 v55;
  _QWORD* v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v62;
  __int64 v63;
  unsigned int* v64;
  unsigned int* v65;
  int v66;
  unsigned int* v67;
  int v68;
  __int64 v69;
  int v70;
  int v71;
  __int64 v72;
  int* v73;
  _QWORD* v74;
  _QWORD* v75;
  _QWORD* v76;

  v1 = *(_DWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 40);
  v75 = (_QWORD*)a1;
  if (v2 != 0) {
    if (v2 >> 62 != 0) {
    LABEL_159:
      GameRoutine_6e5a20();
    }
    a1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        4 * v2, 16, 0);
    v3 = a1 + 4 * v2;
    v4 = (int*)a1;
  }
  else {
    v3 = 0;
    v4 = nullptr;
  }
  v5 = (__int64*)v75[4];
  if (v5 != nullptr) {
    v6 = v4;
    while (1) {
      if ((unsigned __int64)v4 < v3) {
        *v4++ = *((_DWORD*)v5 + 4);
      }
      else {
        v7 = (char*)((char*)v4 - (char*)v6);
        v8 = v4 - v6;
        v9 = v8 + 1;
        if ((unsigned __int64)(v8 + 1) >> 62 != 0) {
          goto LABEL_159;
        }
        if ((__int64)(v3 - (_QWORD)v6) >> 1 > v9) {
          v9 = (__int64)(v3 - (_QWORD)v6) >> 1;
        }
        if (v3 - (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFFCLL) {
          v10 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v10 = v9;
        }
        if (v10 != 0) {
          if (v10 >> 62 != 0) {
            GameRoutine_60a210(a1);
          }
          v11 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v10, 16, 0);
        }
        else {
          v11 = 0;
        }
        v3 = v11 + 4 * v10;
        v12 = (__int64)&v7[v11 + -4 * v8];
        *(_DWORD*)&v7[v11] = *((_DWORD*)v5 + 4);
        v4 = (int*)&v7[v11 + 4];
        a1 = memcpy(v12, v6, v7);
        if (v6 != nullptr) {
          v13 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v13 = 56;
          }
          a1 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v13);
        }
        v6 = (int*)v12;
      }
      v5 = (__int64*)*v5;
      if (v5 == nullptr) {
        goto LABEL_26;
      }
    }
  }
  v6 = v4;
LABEL_26:
  v74 = v75 + 2;
  v76 = v75 + 2;
  if (v4 - v6 < 129) {
    v17 = 0;
  LABEL_32:
    result = DeliveryKindExecutor_12634c0_alt1(v6, v4, &v76, v4 - v6, 0, v17);
    if (v6 == v4) {
      goto LABEL_153;
    }
  }
  else {
    v14 = v4 - v6;
    v15 = GameData_212c060;
    while (1) {
      v16 = GameRoutine_1a09d20(4 * v14, v15);
      if (v16 != 0) {
        break;
      }
      v17 = v14 >> 1;
      v35 = v14 > 1;
      v14 >>= 1;
      if (!v35) {
        goto LABEL_32;
      }
    }
    DeliveryKindExecutor_12634c0_alt1(v6, v4, &v76, v4 - v6, v16, v14);
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
    if (v6 == v4) {
      goto LABEL_153;
    }
  }
  v20 = v6;
  while (2) {
    v21 = v75[3];
    if (v21 == 0 || v75[5] == 0) {
      goto LABEL_158;
    }
    v23 = *v20;
    v24 = v21 - 1;
    if ((v21 & (v21 - 1)) != 0) {
      v25 = *v20;
      if (v21 <= v23) {
        v25 = v23 % v21;
      }
    }
    else {
      v25 = v24 & v23;
    }
    v26 = *(__int64***)(*v74 + 8 * v25);
    if (v26 == nullptr || (v27 = *v26) == nullptr) {
    LABEL_158:
      String_60a250("unordered_map::at: key not found");
    }
    v73 = v20;
    if ((v21 & v24) == 0) {
      while (1) {
        v29 = v27[1];
        if (v29 == v23) {
          if (*((_DWORD*)v27 + 4) == (_DWORD)v23) {
            goto LABEL_61;
          }
        }
        else if ((v29 & v24) != v25) {
          goto LABEL_158;
        }
        v27 = (__int64*)*v27;
        if (v27 == nullptr) {
          goto LABEL_158;
        }
      }
    }
    while (1) {
      v28 = v27[1];
      if (v28 == v23) {
        break;
      }
      if (v28 >= v21) {
        v28 %= v21;
      }
      if (v28 != v25) {
        goto LABEL_158;
      }
    LABEL_51:
      v27 = (__int64*)*v27;
      if (v27 == nullptr) {
        goto LABEL_158;
      }
    }
    if (*((_DWORD*)v27 + 4) != (_DWORD)v23) {
      goto LABEL_51;
    }
  LABEL_61:
    v30 = (_QWORD*)v27[4];
    v31 = (_QWORD*)v27[5];
    if (v30 == v31) {
      if (v1 <= 0) {
        goto LABEL_153;
      }
    LABEL_95:
      v20 = v73 + 1;
      if (v73 + 1 == v4) {
        v46 = v6;
        while (1) {
          v47 = v75[3];
          if (v47 == 0 || v75[5] == 0) {
            goto LABEL_158;
          }
          v49 = *v46;
          v50 = v47 - 1;
          if ((v47 & (v47 - 1)) != 0) {
            v51 = *v46;
            if (v47 <= v49) {
              v51 = v49 % v47;
            }
          }
          else {
            v51 = v50 & v49;
          }
          v52 = *(__int64***)(*v74 + 8 * v51);
          if (v52 == nullptr) {
            goto LABEL_158;
          }
          v53 = *v52;
          if (v53 == nullptr) {
            goto LABEL_158;
          }
          if ((v47 & v50) == 0) {
            while (1) {
              v55 = v53[1];
              if (v55 == v49) {
                if (*((_DWORD*)v53 + 4) == (_DWORD)v49) {
                  goto LABEL_120;
                }
              }
              else if ((v55 & v50) != v51) {
                goto LABEL_158;
              }
              v53 = (__int64*)*v53;
              if (v53 == nullptr) {
                goto LABEL_158;
              }
            }
          }
          while (1) {
            v54 = v53[1];
            if (v54 == v49) {
              break;
            }
            if (v54 >= v47) {
              v54 %= v47;
            }
            if (v54 != v51) {
              goto LABEL_158;
            }
          LABEL_110:
            v53 = (__int64*)*v53;
            if (v53 == nullptr) {
              goto LABEL_158;
            }
          }
          if (*((_DWORD*)v53 + 4) != (_DWORD)v49) {
            goto LABEL_110;
          }
        LABEL_120:
          v56 = (_QWORD*)v53[4];
          v57 = (_QWORD*)v53[5];
          while (v56 != v57) {
            if (*v56 != 0) {
              v58 = v56[1];
              v59 = v56[2];
              v60 = (unsigned __int64)(v59 - v58) >> 2;
              if (v59 != v58 && (int)v60 >= 1) {
                v62 = v58 + 4;
                do {
                  v63 = *v56 + 8LL * *(int*)(v62 - 4);
                  if (*(_WORD*)(v63 + 828) != 0) {
                    *(_QWORD*)(v63 + 828) = 0;
                    result = GameRoutine_8f7120(v75 + 7, v56, v56);
                    if (v1 < 2) {
                      goto LABEL_153;
                    }
                    LODWORD(v60) = v60 - 1;
                    --v1;
                  }
                  if (v62 == v59) {
                    break;
                  }
                  v62 += 4;
                } while ((int)v60 > 0);
              LABEL_121:
                if (v1 < 1) {
                  goto LABEL_153;
                }
              }
            }
            else {
              v64 = (unsigned int*)v56[1];
              v65 = (unsigned int*)v56[2];
              if (v64 != v65) {
                v66 = 0;
                v67 = (unsigned int*)v56[1];
                do {
                  if ((*v67 & 0x80000000) != 0) {
                    v68 = 0;
                  }
                  else {
                    v68 = *(
                        unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                     game_TransporterConst_List_instance__ptr
                                                                         [0] +
                                                                 8LL) +
                                                      8LL) +
                                           12LL * *v67 + 2);
                  }
                  v66 += v68;
                  ++v67;
                } while (v67 != v65);
                if (v66 != 0) {
                  while (1) {
                    result = *v64;
                    if ((result & 0x80000000) == 0) {
                      v69 =
                          *(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ +
                                                8) +
                                     8LL) +
                          12LL * (unsigned int)result;
                      v70 = *(unsigned __int16*)(v69 + 2);
                      if (*(_WORD*)(v69 + 2) != 0) {
                        v71 = v1 - v70;
                        if (v1 < v70) {
                          goto LABEL_152;
                        }
                        result =
                            (__int64)(TransporterConst_89cb30((void*)(&v76)),
                                      (void*)(&v76));
                        v1 = v71;
                        if (v71 == 0) {
                          goto LABEL_153;
                        }
                      }
                    }
                    if (++v64 == v65) {
                      goto LABEL_121;
                    }
                  }
                }
              }
            }
            v56 += 4;
          }
          if (++v46 == v4) {
            goto LABEL_153;
          }
        }
      }
      continue;
    }
    break;
  }
  while (1) {
    if (*v30 != 0) {
      v32 = v30[1];
      v33 = v30[2];
      v34 = (unsigned __int64)(v33 - v32) >> 2;
      v35 = v33 == v32 || (int)v34 <= 1;
      if (!v35) {
        v36 = v32 + 4;
        do {
          v37 = *v30 + 8LL * *(int*)(v36 - 4);
          if (*(_WORD*)(v37 + 828) != 0) {
            *(_QWORD*)(v37 + 828) = 0;
            result = GameRoutine_8f7120(v75 + 7, v30, v30);
            if (v1 < 2) {
              goto LABEL_153;
            }
            LODWORD(v34) = v34 - 1;
            --v1;
          }
          if (v36 == v33) {
            break;
          }
          v36 += 4;
        } while ((int)v34 > 1);
      }
      goto LABEL_91;
    }
    v38 = (unsigned int*)v30[1];
    v39 = (unsigned int*)v30[2];
    if (v38 != v39) {
      v40 = 0;
      v41 = (unsigned int*)v30[1];
      do {
        if ((*v41 & 0x80000000) != 0) {
          v42 = 0;
        }
        else {
          v42 = *(
              unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                           game_TransporterConst_List_instance__ptr
                                                               [0] +
                                                       8LL) +
                                            8LL) +
                                 12LL * *v41 + 2);
        }
        v40 += v42;
        ++v41;
      } while (v41 != v39);
      if (v40 >= 2) {
        break;
      }
    }
  LABEL_91:
    if (v1 < 1) {
      goto LABEL_153;
    }
    v30 += 4;
    if (v30 == v31) {
      goto LABEL_95;
    }
  }
  v43 = v40 - 1;
  while (1) {
    result = *v38;
    if ((result & 0x80000000) == 0 &&
        *(_WORD*)(*(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ +
                                        8) +
                             8LL) +
                  12LL * (unsigned int)result + 2) != 0) {
      if (*(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ +
                                                     8) +
                                          8LL) +
                               12LL * (unsigned int)result + 2) >= v43) {
        v44 = v43;
      }
      else {
        v44 = *(
            unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ +
                                                     8) +
                                          8LL) +
                               12LL * (unsigned int)result + 2);
      }
      v45 = v1 - v44;
      if (v1 < v44) {
      LABEL_152:
        result =
            (__int64)(TransporterConst_89cb30((void*)(&v76)), (void*)(&v76));
        break;
      }
      result = (__int64)(TransporterConst_89cb30((void*)(&v76)), (void*)(&v76));
      v1 = v45;
      if (v45 == 0) {
        break;
      }
    }
    if (++v38 == v39) {
      goto LABEL_91;
    }
  }
LABEL_153:
  if (v6 != nullptr) {
    v72 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v72 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v72);
  }
  return result;
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
                if (v26 == v14) {
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
              if (v25 == v14) {
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
                      if (v32 == v15) {
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
                    if (v31 != v15) {
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
