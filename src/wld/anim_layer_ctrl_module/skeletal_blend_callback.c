#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ec38[6];
void __attribute__((noreturn)) GameRoutine_ce5300(void);
__int64 SkeletalBlendCallback_Unknown2(__int64 result, __int64 a2);
__int64* SkeletalBlendCallback_ce5120(__int64* result, _QWORD* a2);
__attribute__((swiftcall)) void GameRoutine_d2b700(PSEUDO_X8, _QWORD);
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
__int64 SkeletalBlendCallback_ce3be0_alt1(
    __int64 result, _QWORD* a2, __int64 a3, unsigned int a4, int a5,
    float a6) __asm__("SkeletalBlendCallback_ce3be0");
__int64 SkeletalBlendCallback_ce45a0(__int64 a1, __int64 a2);
_QWORD* SkeletalBlendCallback_ce4aa0_alt1(
    _QWORD* result, int a2, float a3) __asm__("SkeletalBlendCallback_ce4aa0");
void SkeletalBlendCallback_ce4b70(__int64 a1, int a2, long double a3);
float SkeletalBlendCallback_ce4ca0(__int64 a1, int a2, long double a3);
float SkeletalBlendCallback_ce4db0(__int64 a1, int a2, long double a3);
__int64 SkeletalBlendCallback_ce4ec0(__int64 result, int a2, float a3);
_QWORD* GameRoutine_ce5320_alt1(_QWORD* result,
                                __int64*) __asm__("GameRoutine_ce5320");
__int64*
GameRoutine_c3b000_alt1(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_c3b000");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_ce4320_alt1(__int64*, unsigned __int64,
                             char) __asm__("GameRoutine_ce4320");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5a20_alt1() __asm__("GameRoutine_6e5a20");
void __attribute__((noreturn))
GameRoutine_ce5850_alt1() __asm__("GameRoutine_ce5850");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SkeletalBlendCallback_ce3be0(_QWORD* a1, const char** a2, __int64 a3,
                                  unsigned int a4, int a5, float a6);
__attribute__((swiftcall)) void BlendLayer_d2b700(PSEUDO_X8, _QWORD* result);
void SkeletalBlendCallback_ce4aa0(__int64 a1, int a2, float a3);
__attribute__((swiftcall)) void
BlendLayer_d2b700_alt1(PSEUDO_X8, __int64*) __asm__("BlendLayer_d2b700");

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

void SkeletalBlendCallback_ce3be0(_QWORD* a1, const char** a2, __int64 a3,
                                  unsigned int a4, int a5, float a6)
{

#pragma clang fp contract(off)
  const char** v8;
  const char** v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  const char* v15;
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
  unsigned __int64 v31;
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
  __int64* v47;
  __int64* v48;
  char* v49;
  __int64 v50;
  char* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  char* v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  int v75;
  __int64 v76;
  struct {
    __int64 v77[3];
    __int64 v78;
    int v79;
    char gap60_[16];
    int v80;
  } v77_;

  if (a3 != 0 && *(_QWORD*)(**(_QWORD**)(a1[3] + 40LL) + 8LL) != 0) {
    v8 = &a2[2 * a3];
    v10 = a2;
    v77_.v80 = a5;
    v11 = 0;
    v12 = nullptr;
    v13 = 0;
    do {
      v14 = *(_QWORD*)(**(_QWORD**)(a1[3] + 40LL) + 8LL);
      if (v14 != 0) {
        v15 = *v10;
        if (*v10 != nullptr) {
          v16 = strlen_alt1(*v10);
        }
        else {
          v16 = 0;
        }
        v17 = v14 + 8;
        v18 = *(unsigned __int16*)(v14 + 12);
        v19 = v14 + 8 + 16 * v18;
        v20 = *(_DWORD*)v19;
        if ((signed __int32)*(_DWORD*)(v14 + 8) <
            (signed __int32)*(_DWORD*)v19) {
          do {
            v23 = (__int64)v20 >> 3;
            if (v16 > v23) {
              v21 = ((unsigned __int8)v15[v16 + ~v23] >> (v20 & 7)) & 1;
            }
            else {
              v21 = 0;
            }
            v18 = *(unsigned __int16*)(v14 + 12 + 16 * v18 + 2 * v21);
            v22 = v20 < (signed __int32)*(_DWORD*)(v17 + 16 * v18);
            v20 = *(_DWORD*)(v17 + 16 * v18);
          } while (v22);
          v19 = v17 + 16 * v18;
        }
        v24 = *(unsigned __int16**)(v19 + 8);
        if (v16 == *v24 &&
            memcmp_alt1((__int64)(v24 + 1), (__int64)v15, v16) == 0) {
          v25 = (unsigned __int64)(v19 - v14 - 24) >> 4;
          if ((_DWORD)v25 != -1) {
            if ((unsigned __int64)v12 < v11) {
              *(_DWORD*)v12 = v25;
              v12 += 4;
            }
            else {
              v26 = &v12[-v13];
              v27 = (__int64)&v12[-v13] >> 2;
              v28 = v27 + 1;
              if ((unsigned __int64)(v27 + 1) >> 62 != 0) {
                GameRoutine_6e5a20_alt1();
              }
              if ((__int64)(v11 - v13) >> 1 > v28) {
                v28 = (__int64)(v11 - v13) >> 1;
              }
              if (v11 - v13 >= 0x7FFFFFFFFFFFFFFCLL) {
                v29 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v29 = v28;
              }
              if (v29 != 0) {
                if (v29 >> 62 != 0) {
                  goto LABEL_114;
                }
                v30 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v29, 16, 0);
              }
              else {
                v30 = 0;
              }
              v11 = v30 + 4 * v29;
              v31 = (unsigned __int64)&v12[-v13];
              v32 = (__int64)&v26[v30 + -4 * v27];
              *(_DWORD*)&v26[v30] = v25;
              v12 = &v26[v30 + 4];
              memcpy_alt1(v32, v13, v31);
              if (v13 != 0) {
                v33 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v33 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v13);
              }
              v13 = v32;
            }
          }
        }
      }
      v10 += 2;
    } while (v10 != v8);
    if ((char*)v13 != v12) {
      v34 = a1[11];
      v35 = a1[12];
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
        v37 = a1[13];
        memset(v77_.v77, 0, sizeof(v77_.v77));
        v77_.v79 = 0;
        v77_.v78 = a4;
        if (v35 >= v37) {
          v39 = v35 - v34;
          v40 = ((__int64)(v35 - v34) >> 6) + 1;
          if (v40 >> 58 != 0) {
            GameRoutine_ce5850_alt1();
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
              GameRoutine_60a210_alt1();
            }
            v44 = fw_memory_HeapManager_Allocate_alt1(
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
          GameRoutine_ce5320_alt1((_QWORD*)(v44 + v39 + 24), v77_.v77);
          v47 = (__int64*)a1[11];
          v48 = (__int64*)a1[12];
          *(_QWORD*)(v45 + 48) = v77_.v78;
          v38 = v45 + 64;
          *(_DWORD*)(v45 + 56) = v77_.v79;
          v49 = (char*)(v45 + (char*)v47 - (char*)v48);
          if (v47 != v48) {
            v50 = 0;
            do {
              v51 = &v49[v50 * 8];
              v52 = &v47[v50];
              v50 += 8;
              *((_QWORD*)v51 + 1) = 0;
              *((_QWORD*)v51 + 2) = 0;
              *(_QWORD*)v51 = *v52;
              *((_QWORD*)v51 + 1) = v52[1];
              *((_QWORD*)v51 + 2) = v52[2];
              v52[1] = 0;
              v52[2] = 0;
              *v52 = 0;
              *((_QWORD*)v51 + 3) = v52[3];
              *((_QWORD*)v51 + 4) = v52[4];
              *((_QWORD*)v51 + 5) = v52[5];
              v52[4] = 0;
              v52[5] = 0;
              v52[3] = 0;
              v53 = v52[6];
              *((_DWORD*)v51 + 14) = *((_DWORD*)v52 + 14);
              *((_QWORD*)v51 + 6) = v53;
            } while (v52 + 8 != v48);
            do {
              v54 = v47[3];
              if (v54 != 0) {
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                  v55 = 128;
                }
                else {
                  v55 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    fw_memory_g_heap_manager + v55, v54);
              }
              v56 = *v47;
              if (*v47 != 0) {
                v47[1] = v56;
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                  v57 = 128;
                }
                else {
                  v57 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    fw_memory_g_heap_manager + v57, v56);
              }
              v47 += 8;
            } while (v47 != v48);
            v47 = (__int64*)a1[11];
          }
          a1[11] = v49;
          a1[12] = v38;
          a1[13] = v46;
          if (v47 != nullptr) {
            v58 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v58 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, (__int64)v47);
          }
        }
        else {
          *(_QWORD*)(v35 + 8) = 0;
          *(_QWORD*)(v35 + 16) = 0;
          *(_QWORD*)v35 = 0;
          GameRoutine_ce5320_alt1((_QWORD*)(v35 + 24), v77_.v77);
          *(_QWORD*)(v35 + 48) = v77_.v78;
          v38 = v35 + 64;
          *(_DWORD*)(v35 + 56) = v77_.v79;
        }
        v59 = a1[3];
        a1[12] = v38;
        if (*(_QWORD*)(v59 + 392) == 0) {
          *(_QWORD*)(v59 + 392) = a1[14];
        }
        if (v77_.v77[0] != 0) {
          v60 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v60 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v77_.v77[0]);
        }
        v36 = v38 - 64;
      }
      v61 = *(_QWORD*)(a1[3] + 40LL);
      v62 = *(unsigned __int16*)(v61 + 80);
      GameRoutine_ce4320_alt1((__int64*)(v36 + 24),
                              *(unsigned __int16*)(v61 + 80), 0);
      v63 = (char*)v13;
      do {
        v64 = *(int*)v63;
        v63 += 4;
        *(_QWORD*)(*(_QWORD*)(v36 + 24) +
                   ((v64 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) |= 1LL << v64;
      } while (v63 != v12);
      if (v62 != 0) {
        if (v62 == 1) {
          v65 = 0;
        }
        else {
          v65 = 0;
          do {
            v69 = *(_QWORD*)(v36 + 24);
            v70 = v65;
            while (((*(_QWORD*)(v69 + 8 * (v70 >> 6)) >> v70) & 1) == 0) {
              v71 = *(_QWORD*)(v61 + 16);
              if (v71 != 0) {
                v70 = *(unsigned __int16*)(v71 + 96 * v70 + 42);
                if (v70 != 0xFFFF) {
                  continue;
                }
              }
              goto LABEL_101;
            }
            *(_QWORD*)(v69 + ((v65 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) |=
                1LL << (v65 & 0x3E);
          LABEL_101:
            v72 = *(_QWORD*)(v36 + 24);
            v73 = v65 | 1;
            while (((*(_QWORD*)(v72 + 8 * (v73 >> 6)) >> v73) & 1) == 0) {
              v74 = *(_QWORD*)(v61 + 16);
              if (v74 != 0) {
                v73 = *(unsigned __int16*)(v74 + 96 * v73 + 42);
                if (v73 != 0xFFFF) {
                  continue;
                }
              }
              goto LABEL_94;
            }
            *(_QWORD*)(v72 + ((v65 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) |=
                1LL << ((unsigned __int8)v65 | 1u);
          LABEL_94:
            v65 += 2LL;
          } while (v65 != (v62 & 0xFFFE));
        }
        if ((v62 & 1) != 0) {
          v66 = *(_QWORD*)(v36 + 24);
          v67 = v65;
          while (((*(_QWORD*)(v66 + 8 * (v67 >> 6)) >> v67) & 1) == 0) {
            v68 = *(_QWORD*)(v61 + 16);
            if (v68 != 0) {
              v67 = *(unsigned __int16*)(v68 + 96 * v67 + 42);
              if (v67 != 0xFFFF) {
                continue;
              }
            }
            goto LABEL_107;
          }
          *(_QWORD*)(v66 + ((v65 >> 3) & 0x1FFFFFFFFFFFFFF8LL)) |= 1LL << v65;
        }
      }
    LABEL_107:
      GameRoutine_c3b000_alt1((__int64*)v36, v13, (__int64)v12,
                              (__int64)&v12[-v13] >> 2);
      v75 = v77_.v80;
      *(float*)(v36 + 52) = a6;
      *(_DWORD*)(v36 + 56) = v75;
    }
    if (v13 != 0) {
      v76 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v76 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v13);
    }
  }
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
  __int64 v23;
  __int64 v24;

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
    v13 = *(_QWORD*)v6;
    if (*(_QWORD*)v6 != 0) {
      *(_QWORD*)(v6 + 8) = v13;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v14, v13);
      *(_QWORD*)(v6 + 8) = 0;
      *(_QWORD*)(v6 + 16) = 0;
    }
    v15 = *(_QWORD*)(v6 + 64);
    v16 = *(_QWORD*)(v6 + 72);
    v17 = *(_QWORD*)(v6 + 24);
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)v6 = v15;
    *(_QWORD*)(v6 + 8) = v16;
    v18 = *(_QWORD*)(v6 + 80);
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 80) = 0;
    *(_QWORD*)(v6 + 16) = v18;
    if (v17 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v19 = 128;
      }
      else {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v19, v17);
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
      v20 = *(_QWORD*)(v2 - 40);
      if (v20 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v21, v20);
      }
      v22 = v2 - 64;
      v23 = *(_QWORD*)(v2 - 64);
      if (v23 != 0) {
        *(_QWORD*)(v2 - 56) = v23;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v24, v23);
      }
      v2 -= 64;
    } while (v22 != v9);
  }
LABEL_29:
  *(_QWORD*)(a1 + 8) = v9;
  return a2;
}

void SkeletalBlendCallback_ce4aa0(__int64 a1, int a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  int* v6;
  int* v7;
  int v8;
  __int64 v9;
  struct {
    int* v10;
    int* v11;
  } v10_;

  v3 = *(_QWORD*)(a1 + 32) + 72LL * a2;
  if (*(_BYTE*)(v3 + 52) == 1) {
    BlendLayer_d2b700_alt1(
        (void*)((__int64*)&v10_.v10),
        (__int64*)(*(_QWORD*)(v3 + 24) + 56LL * *(int*)(v3 + 48)));
    v6 = v10_.v10;
    v7 = v10_.v11;
    if (v10_.v10 != v10_.v11) {
      do {
        v8 = *v6++;
        *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 72LL) + 104LL * v8 + 8) = a3;
      } while (v6 != v7);
      v6 = v10_.v10;
    }
    if (v6 != nullptr) {
      v10_.v11 = v6;
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v6);
    }
  }
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
