#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ec38[6];
void __attribute__((noreturn)) GameRoutine_ce5300(void);
__int64 SkeletalBlendCallback_Unknown2(__int64 result, __int64 a2);
__int64* SkeletalBlendCallback_ce5120(__int64* result, _QWORD* a2);
_QWORD* GameRoutine_d2b700(_QWORD* __return_ptr, _QWORD);
__int64 AnimCtrlModule_a78450(_QWORD, _QWORD);
__int64 GameRoutine_1a0a8b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c3b000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ce4320(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ce5320(_QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(void);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_ce5850(void);
__int64 SkeletalBlendCallback_ce3be0(__int64 result, _QWORD* a2, __int64 a3,
                                     unsigned int a4, int a5, float a6);
__int64 SkeletalBlendCallback_ce45a0(__int64 a1, __int64 a2);
_QWORD* SkeletalBlendCallback_ce4aa0(_QWORD* result, int a2, float a3);
void SkeletalBlendCallback_ce4b70(__int64 a1, int a2, long double a3);
float SkeletalBlendCallback_ce4ca0(__int64 a1, int a2, long double a3);
float SkeletalBlendCallback_ce4db0(__int64 a1, int a2, long double a3);
__int64 SkeletalBlendCallback_ce4ec0(__int64 result, int a2, float a3);

__int64 SkeletalBlendCallback_Unknown2(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  _BYTE* i;
  __int64 v7;
  __int64 v8;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  float v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_DWORD*)(v2 + 80);
  if ((v3 & 0x80000000) == 0) {
    v4 = 0;
    v5 = 104LL * v3 + 104;
    for (i = (_BYTE*)(*(_QWORD*)(v2 + 56) + 4LL);; i += 8) {
      if (*i == 1) {
        v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 72LL) + v4);
        if (v7 != 0) {
          v8 = *(_QWORD*)(v7 + 24);
          if (v8 != 0 && v8 == *(_QWORD*)a2) {
            break;
          }
        }
      }
      v4 += 104;
      if (v5 == v4) {
        return result;
      }
    }
    v10 = *((_DWORD*)i - 1);
    v11 = *(_QWORD*)(v2 + 88);
    v12 = *(_QWORD*)(v2 + 96);
    v13 = v11;
    if (v11 != v12) {
      v13 = v11;
      while (*(_DWORD*)(v13 + 48) != v10) {
        v13 += 64;
        if (v13 == v12) {
          goto LABEL_19;
        }
      }
    }
    if (v13 == v12) {
    LABEL_19:
      if (v11 == v12) {
        v14 = 1.0;
      }
      else {
        v16 = *(int*)(a2 + 8);
        v14 = 1.0;
        v17 = v16 >> 6;
        v18 = 1LL << v16;
        do {
          if (*(_DWORD*)(v11 + 56) == 1 && v10 < *(_DWORD*)(v11 + 48) &&
              (*(_QWORD*)(*(_QWORD*)(v11 + 24) + 8 * v17) & v18) != 0) {
            v14 = v14 * (float)(1.0 - *(float*)(v11 + 52));
          }
          v11 += 64;
        } while (v11 != v12);
      }
      v15 = *(float*)(a2 + 12);
    }
    else {
      if (((*(_QWORD*)(*(_QWORD*)(v13 + 24) +
                       8 * ((unsigned __int64)*(int*)(a2 + 8) >> 6)) >>
            *(_DWORD*)(a2 + 8)) &
           1) == 0) {
        *(_DWORD*)(a2 + 12) = 0;
        return result;
      }
      v14 = *(float*)(a2 + 12);
      v15 = *(float*)(v13 + 52);
    }
    *(float*)(a2 + 12) = v14 * v15;
  }
  return result;
}

__int64 SkeletalBlendCallback_ce3be0(__int64 result, _QWORD* a2, __int64 a3,
                                     unsigned int a4, int a5, float a6)
{
  _QWORD* v6;
  _QWORD* v8;
  _QWORD* v10;
  unsigned __int64 v11;
  char* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int16* v24;
  unsigned __int64 v25;
  char* v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  char* v47;
  char* v48;
  char* v49;
  __int64 v50;
  char* v51;
  char* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  char* v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  _QWORD v75[3];
  __int64 v76;
  int v77;
  int v78;

  if (a3 != 0) {
    v6 = (_QWORD*)result;
    if (*(_QWORD*)(**(_QWORD**)(*(_QWORD*)(result + 24) + 40LL) + 8LL) != 0) {
      v8 = &a2[2 * a3];
      v10 = a2;
      v78 = a5;
      v11 = 0;
      v12 = nullptr;
      v13 = nullptr;
      do {
        v14 = *(_QWORD*)(**(_QWORD**)(v6[3] + 40LL) + 8LL);
        if (v14 != 0) {
          v15 = *v10;
          if (*v10 != 0) {
            result = strlen(*v10);
            v16 = result;
          }
          else {
            v16 = 0;
          }
          v17 = v14 + 8;
          v18 = *(unsigned __int16*)(v14 + 12);
          v19 = v14 + 8 + 16 * v18;
          v20 = *(_DWORD*)v19;
          if (*(_DWORD*)(v14 + 8) < *(_DWORD*)v19) {
            do {
              v23 = (__int64)v20 >> 3;
              if (v16 > v23) {
                v21 = (*(unsigned __int8*)(v15 + v16 + ~v23) >> (v20 & 7)) & 1;
              }
              else {
                v21 = 0;
              }
              v18 = *(unsigned __int16*)(v14 + 12 + 16 * v18 + 2 * v21);
              v22 = v20 < *(_DWORD*)(v17 + 16 * v18);
              v20 = *(_DWORD*)(v17 + 16 * v18);
            } while (v22);
            v19 = v17 + 16 * v18;
          }
          v24 = *(unsigned __int16**)(v19 + 8);
          if (v16 == *v24) {
            result = memcmp(v24 + 1, v15, v16);
            if ((_DWORD)result == 0) {
              v25 = (unsigned __int64)(v19 - v14 - 24) >> 4;
              if ((_DWORD)v25 != -1) {
                if ((unsigned __int64)v12 < v11) {
                  *(_DWORD*)v12 = v25;
                  v12 += 4;
                }
                else {
                  v26 = (char*)(v12 - v13);
                  v27 = (v12 - v13) >> 2;
                  v28 = v27 + 1;
                  if ((unsigned __int64)(v27 + 1) >> 62 != 0) {
                    GameRoutine_6e5a20();
                  }
                  if ((__int64)(v11 - (_QWORD)v13) >> 1 > v28) {
                    v28 = (__int64)(v11 - (_QWORD)v13) >> 1;
                  }
                  if (v11 - (unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFFCLL) {
                    v29 = 0x3FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v29 = v28;
                  }
                  if (v29 != 0) {
                    if (v29 >> 62 != 0) {
                      goto LABEL_114;
                    }
                    v30 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v29, 16, 0);
                  }
                  else {
                    v30 = 0;
                  }
                  v11 = v30 + 4 * v29;
                  v31 = (char*)(v12 - v13);
                  v32 = (__int64)&v26[v30 + -4 * v27];
                  *(_DWORD*)&v26[v30] = v25;
                  v12 = &v26[v30 + 4];
                  result = memcpy(v32, v13, v31);
                  if (v13 != nullptr) {
                    v33 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v33 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
                  }
                  v13 = (char*)v32;
                }
              }
            }
          }
        }
        v10 += 2;
      } while (v10 != v8);
      if (v13 != v12) {
        v34 = v6[11];
        v35 = v6[12];
        v36 = v34;
        if (v34 != v35) {
          while (*(_DWORD*)(v36 + 48) != a4) {
            v36 += 64LL;
            if (v36 == v35) {
              goto LABEL_42;
            }
          }
        }
        if (v36 == v35) {
        LABEL_42:
          v37 = v6[13];
          memset(v75, 0, sizeof(v75));
          v77 = 0;
          v76 = a4;
          if (v35 >= v37) {
            v39 = v35 - v34;
            v40 = ((__int64)(v35 - v34) >> 6) + 1;
            if (v40 >> 58 != 0) {
              GameRoutine_ce5850();
            }
            v41 = v37 - v34;
            v42 = v41 >> 5;
            if (v41 >> 5 <= v40) {
              v42 = v40;
            }
            if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFC0LL) {
              v43 = 0x3FFFFFFFFFFFFFFLL;
            }
            else {
              v43 = v42;
            }
            if (v43 != 0) {
              if (v43 >> 58 != 0) {
              LABEL_114:
                GameRoutine_60a210(result);
              }
              v44 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v43 << 6, 16, 0);
            }
            else {
              v44 = 0;
            }
            v45 = v44 + v39;
            v46 = v44 + (v43 << 6);
            *(_QWORD*)(v45 + 8) = 0;
            *(_QWORD*)(v45 + 16) = 0;
            *(_QWORD*)v45 = 0;
            GameRoutine_ce5320(v44 + v39 + 24, v75);
            v47 = (char*)v6[11];
            v48 = (char*)v6[12];
            *(_QWORD*)(v45 + 48) = v76;
            v38 = v45 + 64;
            *(_DWORD*)(v45 + 56) = v77;
            v49 = (char*)(v45 + v47 - v48);
            if (v47 != v48) {
              v50 = 0;
              do {
                v51 = &v49[v50];
                v52 = &v47[v50];
                v50 += 64;
                *((_QWORD*)v51 + 1) = 0;
                *((_QWORD*)v51 + 2) = 0;
                *(_QWORD*)v51 = *(_QWORD*)v52;
                *((_QWORD*)v51 + 1) = *((_QWORD*)v52 + 1);
                *((_QWORD*)v51 + 2) = *((_QWORD*)v52 + 2);
                *((_QWORD*)v52 + 1) = 0;
                *((_QWORD*)v52 + 2) = 0;
                *(_QWORD*)v52 = 0;
                *((_QWORD*)v51 + 3) = *((_QWORD*)v52 + 3);
                *((_QWORD*)v51 + 4) = *((_QWORD*)v52 + 4);
                *((_QWORD*)v51 + 5) = *((_QWORD*)v52 + 5);
                *((_QWORD*)v52 + 4) = 0;
                *((_QWORD*)v52 + 5) = 0;
                *((_QWORD*)v52 + 3) = 0;
                v53 = *((_QWORD*)v52 + 6);
                *((_DWORD*)v51 + 14) = *((_DWORD*)v52 + 14);
                *((_QWORD*)v51 + 6) = v53;
              } while (v52 + 64 != v48);
              do {
                if (*((_QWORD*)v47 + 3) != 0) {
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                    v54 = 128;
                  }
                  else {
                    v54 = 56;
                  }
                  nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v54);
                }
                if (*(_QWORD*)v47 != 0) {
                  *((_QWORD*)v47 + 1) = *(_QWORD*)v47;
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                    v55 = 128;
                  }
                  else {
                    v55 = 56;
                  }
                  nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v55);
                }
                v47 += 64;
              } while (v47 != v48);
              v47 = (char*)v6[11];
            }
            v6[11] = v49;
            v6[12] = v38;
            v6[13] = v46;
            if (v47 != nullptr) {
              v56 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v56 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v56);
            }
          }
          else {
            *(_QWORD*)(v35 + 8) = 0;
            *(_QWORD*)(v35 + 16) = 0;
            *(_QWORD*)v35 = 0;
            GameRoutine_ce5320(v35 + 24, v75);
            *(_QWORD*)(v35 + 48) = v76;
            v38 = v35 + 64;
            *(_DWORD*)(v35 + 56) = v77;
          }
          v57 = v6[3];
          v6[12] = v38;
          if (*(_QWORD*)(v57 + 392) == 0) {
            *(_QWORD*)(v57 + 392) = v6[14];
          }
          if (v75[0] != 0) {
            v58 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v58 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v58);
          }
          v36 = v38 - 64;
        }
        v59 = *(_QWORD*)(v6[3] + 40LL);
        v60 = *(unsigned __int16*)(v59 + 80);
        GameRoutine_ce4320(v36 + 24, *(unsigned __int16*)(v59 + 80), 0);
        v61 = v13;
        do {
          v62 = *(int*)v61;
          v61 += 4;
          *(_QWORD*)(*(_QWORD*)(v36 + 24) +
                     ((v62 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) |= 1LL << v62;
        } while (v61 != v12);
        if (v60 != 0) {
          if (v60 == 1) {
            v63 = 0;
          }
          else {
            v63 = 0;
            do {
              v67 = *(_QWORD*)(v36 + 24);
              v68 = v63;
              while (((*(_QWORD*)(v67 + 8 * (v68 >> 6)) >> v68) & 1) == 0) {
                v69 = *(_QWORD*)(v59 + 16);
                if (v69 != 0) {
                  v68 = *(unsigned __int16*)(v69 + 96 * v68 + 42);
                  if (v68 != 0xFFFF) {
                    continue;
                  }
                }
                goto LABEL_101;
              }
              *(_QWORD*)(v67 + ((v63 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) |=
                  1LL << (v63 & 0x3E);
            LABEL_101:
              v70 = *(_QWORD*)(v36 + 24);
              v71 = v63 | 1;
              while (((*(_QWORD*)(v70 + 8 * (v71 >> 6)) >> v71) & 1) == 0) {
                v72 = *(_QWORD*)(v59 + 16);
                if (v72 != 0) {
                  v71 = *(unsigned __int16*)(v72 + 96 * v71 + 42);
                  if (v71 != 0xFFFF) {
                    continue;
                  }
                }
                goto LABEL_94;
              }
              *(_QWORD*)(v70 + ((v63 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) |=
                  1LL << ((unsigned __int8)v63 | 1u);
            LABEL_94:
              v63 += 2LL;
            } while (v63 != (v60 & 0xFFFE));
          }
          if ((v60 & 1) != 0) {
            v64 = *(_QWORD*)(v36 + 24);
            v65 = v63;
            while (((*(_QWORD*)(v64 + 8 * (v65 >> 6)) >> v65) & 1) == 0) {
              v66 = *(_QWORD*)(v59 + 16);
              if (v66 != 0) {
                v65 = *(unsigned __int16*)(v66 + 96 * v65 + 42);
                if (v65 != 0xFFFF) {
                  continue;
                }
              }
              goto LABEL_107;
            }
            *(_QWORD*)(v64 + ((v63 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) |= 1LL << v63;
          }
        }
      LABEL_107:
        result = GameRoutine_c3b000(v36, v13, v12, (v12 - v13) >> 2);
        v73 = v78;
        *(float*)(v36 + 52) = a6;
        *(_DWORD*)(v36 + 56) = v73;
      }
      if (v13 != nullptr) {
        v74 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v74 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v74);
      }
    }
  }
  return result;
}

__int64 SkeletalBlendCallback_ce45a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  v2 = *(_QWORD*)(a1 + 8);
  v5 = fw_memory_g_heap_manager_ptr;
  if (a2 + 64 == v2) {
    v9 = a2;
    if (a2 == v2) {
      goto LABEL_29;
    }
    goto LABEL_19;
  }
  v6 = a2;
  do {
    if (*(_QWORD*)v6 != 0) {
      *(_QWORD*)(v6 + 8) = *(_QWORD*)v6;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v13 = 128;
      }
      else {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v13);
      *(_QWORD*)(v6 + 8) = 0;
      *(_QWORD*)(v6 + 16) = 0;
    }
    v14 = *(_QWORD*)(v6 + 64);
    v15 = *(_QWORD*)(v6 + 72);
    v16 = *(_QWORD*)(v6 + 24);
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)v6 = v14;
    *(_QWORD*)(v6 + 8) = v15;
    v17 = *(_QWORD*)(v6 + 80);
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 80) = 0;
    *(_QWORD*)(v6 + 16) = v17;
    if (v16 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v18 = 128;
      }
      else {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v18);
      *(_QWORD*)(v6 + 32) = 0;
      *(_QWORD*)(v6 + 40) = 0;
    }
    v7 = *(_QWORD*)(v6 + 88);
    v8 = *(_QWORD*)(v6 + 96);
    v9 = v6 + 64;
    *(_QWORD*)(v6 + 88) = 0;
    *(_QWORD*)(v6 + 24) = v7;
    *(_QWORD*)(v6 + 32) = v8;
    v10 = *(_QWORD*)(v6 + 104);
    v11 = *(_QWORD*)(v6 + 112);
    *(_QWORD*)(v6 + 96) = 0;
    *(_QWORD*)(v6 + 104) = 0;
    *(_QWORD*)(v6 + 40) = v10;
    *(_QWORD*)(v6 + 48) = v11;
    *(_DWORD*)(v6 + 56) = *(_DWORD*)(v6 + 120);
    v12 = v6 + 128;
    v6 += 64;
  } while (v12 != v2);
  v2 = *(_QWORD*)(a1 + 8);
  if (v9 != v2) {
    do {
    LABEL_19:
      if (*(_QWORD*)(v2 - 40) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v19);
      }
      v20 = v2 - 64;
      v21 = *(_QWORD*)(v2 - 64);
      if (v21 != 0) {
        *(_QWORD*)(v2 - 56) = v21;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v22);
      }
      v2 -= 64;
    } while (v20 != v9);
  }

LABEL_29:
  *(_QWORD*)(a1 + 8) = v9;
  return a2;
}

_QWORD* SkeletalBlendCallback_ce4aa0(_QWORD* result, int a2, float a3)
{
  __int64 v3;
  _QWORD* v4;
  int* v6;
  int* v7;
  int v8;
  __int64 v9;
  int* v10;
  int* v11;

  v3 = result[4] + 72LL * a2;
  if (*(_BYTE*)(v3 + 52) == 1) {
    v4 = result;
    result =
        GameRoutine_d2b700(&v10, *(_QWORD*)(v3 + 24) + 56LL * *(int*)(v3 + 48));
    v6 = v10;
    v7 = v11;
    if (v10 != v11) {
      do {
        v8 = *v6++;
        *(float*)(*(_QWORD*)(v4[3] + 72LL) + 104LL * v8 + 8) = a3;
      } while (v6 != v7);
      v6 = v10;
    }
    if (v6 != nullptr) {
      v11 = v6;
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
    }
  }
  return result;
}

void SkeletalBlendCallback_ce4b70(__int64 a1, int a2, long double a3)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v3 = *(_QWORD*)(a1 + 32) + 72LL * a2;
  if (*(_BYTE*)(v3 + 52) != 1) {
    return;
  }
  v4 = (__int64*)(*(_QWORD*)(v3 + 24) + 56LL * *(int*)(v3 + 48));
  v6 = *v4;
  v5 = v4[1];
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v6 != 0) {
    LODWORD(v7) = *(_DWORD*)(v6 + 108);
    if (v5 == 0) {
    LABEL_9:
      if (v6 == 0) {
        goto LABEL_10;
      }
    LABEL_14:
      v10 = *(_QWORD*)(a1 + 24);
      v11 = *(_QWORD*)(*(_QWORD*)(v10 + 72) + 104LL * (int)v7);
      if (v11 != 0) {
        v12 = *(_QWORD*)(v11 + 16);
        if (v12 != 0) {
          *(float*)v12 = (*(float (**)(_QWORD, long double, float, float))(
              v12 + 16))(*(_QWORD*)(v12 + 24), a3, *(float*)(v12 + 4),
                         *(float*)(v12 + 8));
          *(_WORD*)(v11 + 168) = 0;
        }
      }
      *(_BYTE*)(v10 + 249) = 1;
      return;
    }
  }
  else {
    LODWORD(v7) = 0;
    if (v5 == 0) {
      goto LABEL_9;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_9;
  }
  v8 = a1;
  v9 = LODWORD(a3);
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak(v5);
  LODWORD(a3) = v9;
  a1 = v8;
  if (v6 != 0) {
    goto LABEL_14;
  }

LABEL_10:
  if ((*(_BYTE*)(v3 + 52) & 1) == 0) {
    GameRoutine_8123d0(a1);
  }
  v7 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 56LL * *(int*)(v3 + 48) + 16);
  if ((v7 & 0x100000000LL) != 0) {
    goto LABEL_14;
  }
}

float SkeletalBlendCallback_ce4ca0(__int64 a1, int a2, long double a3)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;

  *(_QWORD*)&a3 = 0;
  v3 = *(_QWORD*)(a1 + 32) + 72LL * a2;
  if (*(_BYTE*)(v3 + 52) != 1) {
    return *(float*)&a3;
  }
  v4 = (__int64*)(*(_QWORD*)(v3 + 24) + 56LL * *(int*)(v3 + 48));
  v6 = *v4;
  v5 = v4[1];
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v6 != 0) {
    LODWORD(v7) = *(_DWORD*)(v6 + 108);
    if (v5 == 0) {
    LABEL_9:
      if (v6 == 0) {
        goto LABEL_10;
      }
    LABEL_14:
      v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 72LL) + 104LL * (int)v7);
      if (v9 != 0) {
        v10 = *(_DWORD**)(v9 + 16);
        if (v10 != nullptr) {
          LODWORD(a3) = *v10;
        }
      }
      return *(float*)&a3;
    }
  }
  else {
    LODWORD(v7) = 0;
    if (v5 == 0) {
      goto LABEL_9;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_9;
  }
  v8 = a1;
  (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(v5, a3);
  std___1___shared_weak_count___release_weak(v5);
  LODWORD(a3) = 0;
  a1 = v8;
  if (v6 != 0) {
    goto LABEL_14;
  }

LABEL_10:
  if ((*(_BYTE*)(v3 + 52) & 1) == 0) {
    GameRoutine_8123d0(a1);
  }
  v7 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 56LL * *(int*)(v3 + 48) + 16);
  if ((v7 & 0x100000000LL) != 0) {
    goto LABEL_14;
  }
  return *(float*)&a3;
}

float SkeletalBlendCallback_ce4db0(__int64 a1, int a2, long double a3)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)&a3 = 0;
  v3 = *(_QWORD*)(a1 + 32) + 72LL * a2;
  if (*(_BYTE*)(v3 + 52) != 1) {
    return *(float*)&a3;
  }
  v4 = (__int64*)(*(_QWORD*)(v3 + 24) + 56LL * *(int*)(v3 + 48));
  v6 = *v4;
  v5 = v4[1];
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v6 != 0) {
    LODWORD(v7) = *(_DWORD*)(v6 + 108);
    if (v5 == 0) {
    LABEL_9:
      if (v6 == 0) {
        goto LABEL_10;
      }
    LABEL_14:
      v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 72LL) + 104LL * (int)v7);
      if (v9 != 0) {
        v10 = *(_QWORD*)(v9 + 16);
        if (v10 != 0) {
          LODWORD(a3) = *(_DWORD*)(v10 + 8);
        }
      }
      return *(float*)&a3;
    }
  }
  else {
    LODWORD(v7) = 0;
    if (v5 == 0) {
      goto LABEL_9;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_9;
  }
  v8 = a1;
  (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(v5, a3);
  std___1___shared_weak_count___release_weak(v5);
  LODWORD(a3) = 0;
  a1 = v8;
  if (v6 != 0) {
    goto LABEL_14;
  }

LABEL_10:
  if ((*(_BYTE*)(v3 + 52) & 1) == 0) {
    GameRoutine_8123d0(a1);
  }
  v7 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 56LL * *(int*)(v3 + 48) + 16);
  if ((v7 & 0x100000000LL) != 0) {
    goto LABEL_14;
  }
  return *(float*)&a3;
}

__int64 SkeletalBlendCallback_ce4ec0(__int64 result, int a2, float a3)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  float* v12;
  float* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  float* v17;
  float v18;
  char v19;

  v3 = *(_QWORD*)(result + 32) + 72LL * a2;
  if (*(_BYTE*)(v3 + 52) != 1) {
    return result;
  }
  v4 = (__int64*)(*(_QWORD*)(v3 + 24) + 56LL * *(int*)(v3 + 48));
  v6 = *v4;
  v5 = v4[1];
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v6 != 0) {
    LODWORD(v7) = *(_DWORD*)(v6 + 108);
    if (v5 == 0) {
    LABEL_9:
      if (v6 != 0) {
        goto LABEL_14;
      }
      goto LABEL_10;
    }
  }
  else {
    LODWORD(v7) = 0;
    if (v5 == 0) {
      goto LABEL_9;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_9;
  }
  v8 = result;
  v9 = a3;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak(v5);
  a3 = v9;
  result = v8;
  if (v6 != 0) {
    goto LABEL_14;
  }

LABEL_10:
  if ((*(_BYTE*)(v3 + 52) & 1) == 0) {
    GameRoutine_8123d0(result);
  }
  v7 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 56LL * *(int*)(v3 + 48) + 16);
  if ((v7 & 0x100000000LL) != 0) {
  LABEL_14:
    v10 = *(_QWORD*)(result + 24);
    v18 = a3;
    v11 = *(_QWORD*)(v10 + 72) + 104LL * (int)v7;
    v13 = *(float**)(v11 + 40);
    v12 = *(float**)(v11 + 48);
    v14 = (_QWORD*)(v11 + 40);
    if (v13 != v12) {
      v15 = (char*)v12 - (char*)v13 - 4;
      if ((~(_BYTE)v15 & 0xC) != 0) {
        v16 = ((unsigned __int8)((unsigned int)v15 >> 2) + 1) & 3;
        while (*v13 != a3) {
          ++v13;
          if (--v16 == 0) {
            goto LABEL_19;
          }
        }
      }
      else {
      LABEL_19:
        if (v15 < 0xC) {
        LABEL_31:
          AnimCtrlModule_a78450(v14, &v18);
          return GameRoutine_1a0a8b0(*v14, v14[1], &v19);
        }
        v13 += 2;
        while (1) {
          if (*(v13 - 2) == a3) {
            v13 -= 2;
            goto LABEL_30;
          }
          if (*(v13 - 1) == a3) {
            --v13;
            goto LABEL_30;
          }
          if (*v13 == a3) {
            goto LABEL_30;
          }
          if (v13[1] == a3) {
            break;
          }
          v17 = v13 + 2;
          v13 += 4;
          if (v17 == v12) {
            goto LABEL_31;
          }
        }
        ++v13;
      }
    }
  LABEL_30:
    if (v13 != v12) {
      return result;
    }
    goto LABEL_31;
  }
  return result;
}

__int64* SkeletalBlendCallback_ce5120(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  __int64 (***v3)(_QWORD);
  __int64* v5;
  __int64** v6;
  _QWORD* v7;
  __int64* v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64* v13;
  char* v14;
  char* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 (***v23)(_QWORD);
  __int64 (**v24)(_QWORD);
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64** v28;
  __int64* v29;

  v3 = (__int64 (***)(_QWORD))*result;
  v2 = (_QWORD*)result[1];
  v5 = result;
  v6 = (__int64**)(a2[1] + *result - (_QWORD)v2);
  if (v2 != (_QWORD*)*result) {
    v29 = result;
    v7 = (_QWORD*)*result;
    v28 = (__int64**)(a2[1] + *result - (_QWORD)v2);
    v8 = GameData_212ec38[0] + 2;
    do {
      *v6 = v8;
      v12 = (__int64*)v7[1];
      v13 = (__int64*)v7[2];
      v6[3] = nullptr;
      v6[4] = nullptr;
      v6[5] = nullptr;
      v6[1] = v12;
      v6[2] = v13;
      v15 = (char*)v7[3];
      v14 = (char*)v7[4];
      v16 = v14 - v15;
      if (v14 != v15) {
        if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * (v16 >> 3)) >=
            0x492492492492493LL) {
          GameRoutine_ce5300();
        }
        v17 = (__int64*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v14 - v15, 16, 0);
        v6[3] = v17;
        v6[4] = v17;
        v6[5] = (__int64*)((char*)v17 + v16);
        do {
          *v17 = *(_QWORD*)v15;
          v22 = *((_QWORD*)v15 + 1);
          v17[1] = v22;
          if (v22 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                      memory_order_relaxed);
          }
          v17[2] = *((_QWORD*)v15 + 2);
          v18 = *((_QWORD*)v15 + 3);
          v19 = *((_QWORD*)v15 + 4);
          v20 = *((_QWORD*)v15 + 5);
          v21 = *((_QWORD*)v15 + 6);
          v15 += 56;
          v17[5] = v20;
          v17[6] = v21;
          v17[3] = v18;
          v17[4] = v19;
          v17 += 7;
        } while (v15 != v14);
        v6[4] = v17;
      }
      v9 = (__int64*)v7[6];
      v10 = (__int64*)v7[7];
      v11 = (__int64*)v7[8];
      v7 += 9;
      v6[7] = v10;
      v6[8] = v11;
      v6[6] = v9;
      v6 += 9;
    } while (v7 != v2);
    v6 = v28;
    v5 = v29;
    v23 = v3;
    do {
      v24 = *v23;
      v23 += 9;
      result = (__int64*)(*v24)(v3);
      v3 = v23;
    } while (v23 != v2);
  }
  a2[1] = v6;
  v25 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v25;
  v26 = v5[1];
  v5[1] = a2[2];
  a2[2] = v26;
  v27 = v5[2];
  v5[2] = a2[3];
  a2[3] = v27;
  *a2 = a2[1];
  return result;
}

#pragma GCC visibility pop
