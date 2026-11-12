#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13261c0(_QWORD);
__int64 GameRoutine_1329000(_QWORD, _QWORD);
__int64 GameRoutine_1329200(_QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_14de000(_QWORD);
__int64 GameRoutine_14de4e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65f240(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotAttachmentRecruit_GetData(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strchr(_QWORD, _QWORD);
extern __int64 (*game_gmap_SpotAttachmentRecruit_vtable[])();
extern __int64 GameData_21c9ea8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 SpotAttachmentRecruit_Destructor(__int64 result);
__int64 SpotAttachmentRecruit_DeletingDestructor(_QWORD* a1);
unsigned __int64 SpotAttachmentRecruit_15189e0(__int64 a1, __int64 a2,
                                               unsigned int a3);
__int64 SpotAttachmentRecruit_Unknown36(__int64 a1, __int64 a2);
__int64 GameRoutine_715440(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_14ffd60(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6f93f0(void);
__int64 SpotAttachmentRecruit_14de000(__int64 a1);
__int64 SpotAttachmentRecruit_14de4e0(__int64 result, __int64* a2,
                                      unsigned int a3, int a4);
__int64 GameRoutine_1537230(__int64 result, __int64, __int64);
__int64 GameRoutine_715440_alt1() __asm__("GameRoutine_715440");
__int64 GameRoutine_975940(__int64);
__int64 RuntimeBuffer_8924a0(__int64 result, __int64, unsigned __int64,
                             unsigned __int8);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_gmap_SpotAttachmentRecruit_GetData_alt1() __asm__(
    "game_gmap_SpotAttachmentRecruit_GetData");
__int64 nn_os_LockMutex(_QWORD);
__n128 SpotAttachmentRecruit_14de4e0_alt1(
    __int64, __int64*, unsigned int,
    int) __asm__("SpotAttachmentRecruit_14de4e0");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_202c698[])();
extern __int64 (*GameData_20498f0[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212cac8[110];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d740[3];
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9ec8;
extern __int64 fw_memory_g_heap_manager;
__int64 SpotAttachmentRecruit_1517ee0();
__n128 SpotAttachmentRecruit_Unknown11_alt1(__int64 a1, __int64 a2) __asm__(
    "SpotAttachmentRecruit_Unknown11");
void game_gmap_SpotAttachmentRecruit_OnBoost_alt1(__int64 a1) __asm__(
    "game_gmap_SpotAttachmentRecruit_OnBoost");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 strchr_alt1(const char*, int) __asm__("strchr");
void SpotAttachmentRecruit_14de4e0_alt2(
    __int64, __int64*, unsigned int,
    int) __asm__("SpotAttachmentRecruit_14de4e0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpotAttachmentRecruit_Unknown11(__int64 a1, __int64 a2);
__int64 game_gmap_SpotAttachmentRecruit_OnBoost(__int64 a1);

__int64 SpotAttachmentRecruit_14de000(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  unsigned __int8* v4;
  unsigned __int8* v5;
  int v6;
  int v7;
  __int64 v8;
  unsigned int v9;

  v2 = GameRoutine_715440(a1);
  v3 = *(unsigned __int16*)(a1 + 72);
  if (*(_WORD*)(a1 + 72) != 0) {
    v4 = *(unsigned __int8**)(a1 + 80);
    v6 = *v4;
    v5 = v4 + 1;
    if ((int)v2 >= v6) {
      v7 = v3 - 1;
      v8 = v3 - 1;
      LODWORD(v3) = -1;
      while (v8 != 0) {
        v9 = *v5++;
        LODWORD(v3) = v3 + 1;
        --v8;
        if (v2 < v9) {
          return (unsigned int)v3;
        }
      }
      LODWORD(v3) = v7;
    }
    else {
      LODWORD(v3) = 0;
    }
  }
  return (unsigned int)v3;
}

__int64 SpotAttachmentRecruit_14de4e0(__int64 result, __int64* a2,
                                      unsigned int a3, int a4)
{
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  char* v57;
  __int64 v58;
  __int64* v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  char* v67;
  unsigned __int64 v68;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v81;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v86;
  __int64 v87;

  v84 = result;
  if ((a3 & 0x80000000) == 0) {
    if (a4 >= 1) {
      v4 = 0;
      v5 = 0;
      v6 = nullptr;
      v7 = 0;
      v81 = a3 + 1;
      while (1) {
        v9 = **(_QWORD**)(v84 + 40);
        if (v4 >= (*(_QWORD*)(*(_QWORD*)(v84 + 40) + 8LL) - v9) >> 3) {
          break;
        }
        v10 = *(_QWORD*)(v9 + 8 * v4);
        v86 = v4;
        v11 = *(unsigned __int16*)(v10 + 56);
        if (*(_WORD*)(v10 + 56) != 0) {
          v12 = 8;
          do {
            v13 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + v12);
            if ((unsigned __int64)v6 < v7) {
              *(_QWORD*)v6 = v13;
              v6 += 8;
              v8 = v5;
            }
            else {
              v14 = &v6[-v5];
              v15 = (__int64)&v6[-v5] >> 3;
              v16 = v15 + 1;
              if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
              LABEL_129:
                GameRoutine_6f93f0();
              }
              if ((__int64)(v7 - v5) >> 2 > v16) {
                v16 = (__int64)(v7 - v5) >> 2;
              }
              if (v7 - v5 >= 0x7FFFFFFFFFFFFFF8LL) {
                v17 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v17 = v16;
              }
              if (v17 != 0) {
                if (v17 >> 61 != 0) {
                LABEL_130:
                  GameRoutine_60a210(result);
                }
                v18 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
              }
              else {
                v18 = 0;
              }
              v7 = v18 + 8 * v17;
              v19 = &v6[-v5];
              v8 = (__int64)&v14[v18 + -8 * v15];
              *(_QWORD*)&v14[v18] = v13;
              v6 = &v14[v18 + 8];
              result = memcpy(v8, v5, v19);
              if (v5 != 0) {
                v20 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v20 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v5);
              }
            }
            --v11;
            v12 += 16;
            v5 = v8;
          } while (v11 != 0);
        }
        else {
          v8 = v5;
        }
        if (a4 != 1) {
          v21 = **(_QWORD**)(v84 + 40);
          if (v86 >= (*(_QWORD*)(*(_QWORD*)(v84 + 40) + 8LL) - v21) >> 3) {
            break;
          }
          v22 = *(_QWORD*)(v21 + 8 * v86);
          v23 = *(unsigned __int16*)(v22 + 72);
          if (*(_WORD*)(v22 + 72) != 0) {
            v24 = 8;
            while (1) {
              v26 = *(_QWORD*)(*(_QWORD*)(v22 + 80) + v24);
              if ((unsigned __int64)v6 < v7) {
                *(_QWORD*)v6 = v26;
                v6 += 8;
                v25 = v8;
              }
              else {
                v27 = &v6[-v8];
                v28 = (__int64)&v6[-v8] >> 3;
                v29 = v28 + 1;
                if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
                  goto LABEL_129;
                }
                if ((__int64)(v7 - v8) >> 2 > v29) {
                  v29 = (__int64)(v7 - v8) >> 2;
                }
                if (v7 - v8 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v30 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v30 = v29;
                }
                if (v30 != 0) {
                  if (v30 >> 61 != 0) {
                    goto LABEL_130;
                  }
                  v31 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v30, 16, 0);
                }
                else {
                  v31 = 0;
                }
                v7 = v31 + 8 * v30;
                v32 = &v6[-v8];
                v25 = (__int64)&v27[v31 + -8 * v28];
                *(_QWORD*)&v27[v31] = v26;
                v6 = &v27[v31 + 8];
                result = memcpy(v25, v8, v32);
                if (v8 != 0) {
                  v33 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v33 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v8);
                }
              }
              --v23;
              v24 += 16;
              v8 = v25;
              if (v23 == 0) {
                goto LABEL_49;
              }
            }
          }
          v25 = v8;
        LABEL_49:
          if (a4 < 3) {
            v8 = v25;
          }
          else {
            v34 = **(_QWORD**)(v84 + 40);
            if (v86 >= (*(_QWORD*)(*(_QWORD*)(v84 + 40) + 8LL) - v34) >> 3) {
              break;
            }
            v35 = *(_QWORD*)(v34 + 8 * v86);
            v36 = *(unsigned __int16*)(v35 + 88);
            if (*(_WORD*)(v35 + 88) != 0) {
              v37 = 8;
              while (1) {
                v39 = *(_QWORD*)(*(_QWORD*)(v35 + 96) + v37);
                if ((unsigned __int64)v6 < v7) {
                  *(_QWORD*)v6 = v39;
                  v6 += 8;
                  v38 = v25;
                }
                else {
                  v40 = &v6[-v25];
                  v41 = (__int64)&v6[-v25] >> 3;
                  v42 = v41 + 1;
                  if ((unsigned __int64)(v41 + 1) >> 61 != 0) {
                    goto LABEL_129;
                  }
                  if ((__int64)(v7 - v25) >> 2 > v42) {
                    v42 = (__int64)(v7 - v25) >> 2;
                  }
                  if (v7 - v25 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v43 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v43 = v42;
                  }
                  if (v43 != 0) {
                    if (v43 >> 61 != 0) {
                      goto LABEL_130;
                    }
                    v44 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v43, 16, 0);
                  }
                  else {
                    v44 = 0;
                  }
                  v7 = v44 + 8 * v43;
                  v45 = &v6[-v25];
                  v38 = (__int64)&v40[v44 + -8 * v41];
                  *(_QWORD*)&v40[v44] = v39;
                  v6 = &v40[v44 + 8];
                  result = memcpy(v38, v25, v45);
                  if (v25 != 0) {
                    v46 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v46 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v25);
                  }
                }
                --v36;
                v37 += 16;
                v25 = v38;
                if (v36 == 0) {
                  goto LABEL_71;
                }
              }
            }
            v38 = v25;
          LABEL_71:
            if (a4 != 3) {
              v47 = **(_QWORD**)(v84 + 40);
              if (v86 >= (*(_QWORD*)(*(_QWORD*)(v84 + 40) + 8LL) - v47) >> 3) {
                break;
              }
              v48 = *(_QWORD*)(v47 + 8 * v86);
              v49 = *(unsigned __int16*)(v48 + 104);
              if (*(_WORD*)(v48 + 104) != 0) {
                v50 = 8;
                while (1) {
                  v51 = *(_QWORD*)(*(_QWORD*)(v48 + 112) + v50);
                  if ((unsigned __int64)v6 < v7) {
                    *(_QWORD*)v6 = v51;
                    v6 += 8;
                    v8 = v38;
                  }
                  else {
                    v52 = &v6[-v38];
                    v53 = (__int64)&v6[-v38] >> 3;
                    v54 = v53 + 1;
                    if ((unsigned __int64)(v53 + 1) >> 61 != 0) {
                      goto LABEL_129;
                    }
                    if ((__int64)(v7 - v38) >> 2 > v54) {
                      v54 = (__int64)(v7 - v38) >> 2;
                    }
                    if (v7 - v38 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v55 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v55 = v54;
                    }
                    if (v55 != 0) {
                      if (v55 >> 61 != 0) {
                        goto LABEL_130;
                      }
                      v56 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v55, 16,
                          0);
                    }
                    else {
                      v56 = 0;
                    }
                    v7 = v56 + 8 * v55;
                    v57 = &v6[-v38];
                    v8 = (__int64)&v52[v56 + -8 * v53];
                    *(_QWORD*)&v52[v56] = v51;
                    v6 = &v52[v56 + 8];
                    result = memcpy(v8, v38, v57);
                    if (v38 != 0) {
                      v58 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v58 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v38);
                    }
                  }
                  --v49;
                  v50 += 16;
                  v38 = v8;
                  if (v49 == 0) {
                    goto LABEL_5;
                  }
                }
              }
            }
            v8 = v38;
          }
        }
      LABEL_5:
        v5 = v8;
        v4 = v86 + 1;
        if (v86 + 1 == v81) {
          goto LABEL_94;
        }
      }
    LABEL_131:
      GameRoutine_14ffd60();
    }
    v8 = 0;
    v6 = nullptr;
  LABEL_94:
    v59 = a2;
    v60 = a3;
    do {
      v61 = **(_QWORD**)(v84 + 40);
      if (v60 >= (*(_QWORD*)(*(_QWORD*)(v84 + 40) + 8LL) - v61) >> 3) {
        goto LABEL_131;
      }
      v83 = v60;
      v62 = *(_QWORD*)(v61 + 8 * v60);
      v63 = *(unsigned __int16*)(v62 + 40);
      if (*(_WORD*)(v62 + 40) != 0) {
        v64 = 0;
        v87 = v62;
        do {
          v66 = *(_QWORD*)(*(_QWORD*)(v62 + 48) + 16 * v64 + 8);
          if ((char*)v8 == v6) {
            goto LABEL_108;
          }
          v67 = (char*)v8;
          while (*(_QWORD*)v67 != v66) {
            v67 += 8;
            if (v67 == v6) {
              goto LABEL_108;
            }
          }
          if (v67 == v6) {
          LABEL_108:
            v69 = (_QWORD*)v59[1];
            v68 = v59[2];
            if ((unsigned __int64)v69 < v68) {
              *v69 = v66;
              v65 = (__int64)(v69 + 1);
            }
            else {
              v70 = *v59;
              v71 = (__int64)v69 - *v59;
              v72 = (v71 >> 3) + 1;
              if (v72 >> 61 != 0) {
                goto LABEL_129;
              }
              v73 = v68 - v70;
              if (v73 >> 2 > v72) {
                v72 = v73 >> 2;
              }
              if ((unsigned __int64)v73 >= 0x7FFFFFFFFFFFFFF8LL) {
                v74 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v74 = v72;
              }
              if (v74 != 0) {
                if (v74 >> 61 != 0) {
                  goto LABEL_130;
                }
                v75 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v74, 16, 0);
              }
              else {
                v75 = 0;
              }
              v76 = v75 + 8 * v74;
              v77 = v75 + v71 - 8 * (v71 >> 3);
              *(_QWORD*)(v75 + v71) = v66;
              v65 = v75 + v71 + 8;
              result = memcpy(v77, v70, v71);
              v59 = a2;
              *a2 = v77;
              a2[1] = v65;
              a2[2] = v76;
              if (v70 != 0) {
                v78 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v78 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, v70);
              }
              v62 = v87;
            }
            v59[1] = v65;
          }
          ++v64;
        } while (v64 != v63);
      }
      v60 = v83 - 1;
    } while (v83 > 0);
    if (v8 != 0) {
      v79 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v79 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v8);
    }
  }
  return result;
}

__int64 SpotAttachmentRecruit_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _DWORD* v3;
  int v4;
  int v5;

  *(_QWORD*)result = game_gmap_SpotAttachmentRecruit_vtable;
  v1 = *(_QWORD*)(result + 32);
  if (*(_BYTE*)(v1 + 116) == 1) {
    *(_BYTE*)(v1 + 116) = 0;
    v2 = *(_QWORD*)(result + 32);
    result = GameRoutine_1329200(v2, 5);
    v3 = *(_DWORD**)(v2 + 264);
    if (*(_QWORD*)v3 == 0) {
      if ((result & 1) == 0) {
        return result;
      }
      return GameRoutine_1329000(v2, 5);
    }
    v4 = *(_DWORD*)(*(_QWORD*)v3 + 16LL);
    v5 = v3[2];
    if ((result & 1) != 0) {
      if (v4 == v5) {
        return result;
      }
      return GameRoutine_1329000(v2, 5);
    }
    if (v4 == v5) {
      return GameRoutine_14a1520(v2 + 264, 1);
    }
  }
  return result;
}

__int64 SpotAttachmentRecruit_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  _DWORD* v5;
  int v6;
  int v7;
  __int64 v8;

  *a1 = game_gmap_SpotAttachmentRecruit_vtable;
  v2 = a1[4];
  if (*(_BYTE*)(v2 + 116) == 1) {
    *(_BYTE*)(v2 + 116) = 0;
    v3 = a1[4];
    v4 = GameRoutine_1329200(v3, 5);
    v5 = *(_DWORD**)(v3 + 264);
    if (*(_QWORD*)v5 == 0) {
      if ((v4 & 1) == 0) {
        goto LABEL_10;
      }
      goto LABEL_7;
    }
    v6 = *(_DWORD*)(*(_QWORD*)v5 + 16LL);
    v7 = v5[2];
    if ((v4 & 1) != 0) {
      if (v6 == v7) {
        goto LABEL_10;
      }
    LABEL_7:
      GameRoutine_1329000(v3, 5);
      goto LABEL_10;
    }
    if (v6 == v7) {
      GameRoutine_14a1520(v3 + 264, 1);
    }
  }

LABEL_10:
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, a1);
}

__int64 SpotAttachmentRecruit_1517ee0()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  unsigned __int8 v11;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if ((v1 & 0x80000000) == 0) {
    while (v2 != v3) {
      v5 = *v2++;
      v4 = v5;
      if (*(_DWORD*)(v5 + 84) == v1) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v4 = 0;
    goto LABEL_8;
  }
  if (v2 == v3) {
    goto LABEL_7;
  }
  while (1) {
    v4 = *v2;
    if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
      break;
    }
    if (++v2 == v3) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v6 = *(_QWORD*)(game_gmap_SpotAttachmentRecruit_GetData_alt1() + 40);
  v11 = 0;
  v9_.v9[0] = GameData_202c698;
  v9_.v9[1] = &v11;
  v9_.v10 = v9_.v9;
  v9_.v9[2] = v6;
  Troop_133ed80(v4, (__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v7 = 32;
    goto LABEL_16;
  }
  if (v9_.v10 != nullptr) {
    v7 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v9_.v10 + v7))((__int64)v9_.v10);
  }
  return v11;
}

void SpotAttachmentRecruit_Unknown11(__int64 a1, __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  int* v7;
  int* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  unsigned __int8* v44;
  unsigned __int8* v45;
  int v46;
  int v47;
  unsigned __int64 v48;
  __int64* v49;
  int v50;
  unsigned int v51;
  unsigned int v52;
  int v53;
  int v54;
  __int64 v55;
  unsigned int v56;
  __int64 v57;
  unsigned int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  struct {
    __int64 v68;
    __int64 v69;
    __int64 v70;
  } v68_;

  if (*(_BYTE*)(a1 + 56) == 1) {
    v68_.v69 = 0;
    v68_.v70 = 0;
    v68_.v68 = 0;
    v4 = *(_QWORD**)(*(_QWORD*)GameData_212d740[0] + 8LL);
    v6 = v4[3];
    v5 = v4[4];
    v7 = (int*)(v4 + 6);
    v10 = *v4;
    v8 = (int*)v4 + 13;
    v9 = v10;
    if (v5 == v6) {
      v8 = v7;
      v11 = v9;
    }
    else {
      v11 = v6;
    }
    v12 = (unsigned __int8*)(v11 + 24LL * *v8);
    v13 = *v12;
    if ((v13 & 1) != 0) {
      v14 = *((_QWORD*)v12 + 2);
    }
    else {
      v14 = (__int64)(v12 + 1);
    }
    if ((v13 & 1) != 0) {
      v15 = *((_QWORD*)v12 + 1);
    }
    else {
      v15 = v13 >> 1;
    }
    RuntimeBuffer_8924a0((__int64)&v68_.v68, v14, v15, 0x2Fu);
    if ((*(_BYTE*)(v68_.v68 + 48) & 1) != 0) {
      v16 = *(_QWORD*)(v68_.v68 + 64);
    }
    else {
      v16 = v68_.v68 + 49;
    }
    v17 = game_HashString_alt1(v16);
    if (v17 != 0) {
      v18 = *(_QWORD*)(*GameData_212c998[0] + 96);
      if (v18 != 0 && *(_QWORD*)(*GameData_212c998[0] + 112) != 0) {
        v20 = v18 - 1;
        if ((v18 & (v18 - 1)) != 0) {
          v21 = v17;
          if (v17 >= v18) {
            v21 = v17 % v18;
          }
        }
        else {
          v21 = v20 & v17;
        }
        v31 = *(_QWORD**)(*(_QWORD*)(*GameData_212c998[0] + 88) + 8 * v21);
        if (v31 != nullptr) {
          v32 = (_QWORD*)*v31;
          if (v32 != nullptr) {
            if ((v18 & v20) == 0) {
              while (1) {
                v34 = v32[1];
                if (v34 == v17) {
                  if (v32[2] == v17) {
                    goto LABEL_80;
                  }
                }
                else if ((v34 & v20) != v21) {
                  goto LABEL_82;
                }
                v32 = (_QWORD*)*v32;
                if (v32 == nullptr) {
                  goto LABEL_82;
                }
              }
            }
            do {
              v33 = v32[1];
              if (v33 == v17) {
                if (v32[2] == v17) {
                LABEL_80:
                  v59 = v32[3];
                  if (v59 != 0) {
                    GameRoutine_1537230(a2, *(_QWORD*)(a1 + 32), v59);
                  }
                  break;
                }
              }
              else {
                if (v33 >= v18) {
                  v33 %= v18;
                }
                if (v33 != v21) {
                  break;
                }
              }
              v32 = (_QWORD*)*v32;
            } while (v32 != nullptr);
          }
        }
      }
    }
  LABEL_82:
    v60 = v68_.v68;
    if (v68_.v68 != 0) {
      v61 = v68_.v69;
      if (v68_.v68 == v68_.v69) {
        goto LABEL_93;
      }
      v62 = v68_.v69;
      v63 = fw_memory_g_heap_manager_ptr;
      do {
        v64 = *(_BYTE*)(v62 - 24);
        v62 -= 24;
        if ((v64 & 1) != 0) {
          v65 = *(_QWORD*)(v61 - 8);
          if (v65 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v63 + 200LL) != 0) {
              v66 = 128;
            }
            else {
              v66 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v63 + v66, v65);
          }
        }
        v61 = v62;
      } while (v62 != v60);
      v68_.v69 = v60;
      v60 = v68_.v68;
      if (v68_.v68 != 0) {
      LABEL_93:
        v55 = v60;
        goto LABEL_94;
      }
    }
  }
  else {
    v22 = *(_QWORD*)(a1 + 32);
    v68_.v69 = 0;
    v68_.v70 = 0;
    v68_.v68 = 0;
    v23 = *(_QWORD*)(v22 + 120);
    v24 = *(_QWORD*)(v23 + 8);
    if (v24 != 0) {
      v25 = strchr_alt1(*(const char**)(v23 + 8), 95);
      if (v25 != 0) {
        v24 = v25 + 1;
      }
    }
    v26 = game_HashString_alt1(v24);
    if (v26 != 0) {
      v27 = *(_QWORD*)(*GameData_212cac8[0] + 96);
      if (v27 != 0 && *(_QWORD*)(*GameData_212cac8[0] + 112) != 0) {
        v29 = v27 - 1;
        if ((v27 & (v27 - 1)) != 0) {
          v30 = v26;
          if (v26 >= v27) {
            v30 = v26 % v27;
          }
        }
        else {
          v30 = v29 & v26;
        }
        v35 = *(_QWORD**)(*(_QWORD*)(*GameData_212cac8[0] + 88) + 8 * v30);
        if (v35 != nullptr) {
          v36 = (_QWORD*)*v35;
          if (v36 != nullptr) {
            if ((v27 & v29) == 0) {
              while (1) {
                v39 = v36[1];
                if (v39 == v26) {
                  if (v36[2] == v26) {
                    goto LABEL_98;
                  }
                }
                else if ((v39 & v29) != v30) {
                  goto LABEL_66;
                }
                v36 = (_QWORD*)*v36;
                v38 = 0;
                if (v36 == nullptr) {
                  goto LABEL_67;
                }
              }
            }
            do {
              v37 = v36[1];
              if (v37 == v26) {
                if (v36[2] == v26) {
                LABEL_98:
                  v38 = v36[3];
                  goto LABEL_67;
                }
              }
              else {
                if (v37 >= v27) {
                  v37 %= v27;
                }
                if (v37 != v30) {
                  break;
                }
              }
              v36 = (_QWORD*)*v36;
            } while (v36 != nullptr);
          }
        }
      }
    }
  LABEL_66:
    v38 = 0;
  LABEL_67:
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v40 = 4;
    }
    else {
      v41 = game_gmap_SpotAttachmentRecruit_GetData_alt1();
      v42 = GameRoutine_715440_alt1();
      v43 = *(unsigned __int16*)(v41 + 72);
      if (*(_WORD*)(v41 + 72) != 0 &&
          (v44 = *(unsigned __int8**)(v41 + 80), v46 = *v44, v45 = v44 + 1,
           (int)v42 >= v46)) {
        v56 = v43 - 1;
        v57 = v43 - 1;
        v40 = -1;
        while (v57 != 0) {
          v58 = *v45++;
          ++v40;
          --v57;
          if (v42 < v58) {
            goto LABEL_73;
          }
        }
        v40 = v56;
      }
      else {
        v40 = 0;
      }
    }
  LABEL_73:
    v47 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 176LL))(a1);
    SpotAttachmentRecruit_14de4e0_alt2(v38, &v68_.v68, v40, v47);
    v48 = (unsigned __int64)(v68_.v69 - v68_.v68) >> 3;
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
    v49 = game_map_MapRandom_instance__ptr[0];
    v50 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8);
    v51 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v52 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL)) ^
          (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((__int128*)0x10LL))
           << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v49 + 4) = v50;
    v53 = (v52 >> 8) ^ (v51 >> 19) ^ v52 ^ v51;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v49 + 8) = v51;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v49 + 12) = v53;
    v54 = v53 & 0x7FFFFFFF;
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    GameRoutine_1537230(
        a2, *(_QWORD*)(a1 + 32),
        *(_QWORD*)(v68_.v68 + 8LL * (unsigned int)(v54 % (int)v48)));
    v55 = v68_.v68;
    if (v68_.v68 != 0) {
      v68_.v69 = v68_.v68;
    LABEL_94:
      v67 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v67 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v55);
    }
  }
}

__int64 game_gmap_SpotAttachmentRecruit_OnBoost(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int8** v21;
  unsigned __int8** v22;
  unsigned __int8* v23;
  unsigned __int8* v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  unsigned int v29;
  __int64 result;
  unsigned int v31;
  unsigned int v32;
  int v33;
  unsigned int v34;
  struct {
    _QWORD v35[4];
    _QWORD* v36;
  } v35_;
  struct {
    __int64 v37;
    __int64 v38;
    __int64 v39;
  } v37_;

  v37_.v38 = 0;
  v37_.v39 = 0;
  v37_.v37 = 0;
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  if (v3 < 0) {
    while (1) {
      v5 = *v4;
      if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
        break;
      }
      ++v4;
    }
  }
  else {
    v7 = *v4;
    v6 = v4 + 1;
    v5 = v7;
    if (*(_DWORD*)(v7 + 84) != v3) {
      do {
        v8 = *v6++;
        v5 = v8;
      } while (*(_DWORD*)(v8 + 84) != v3);
    }
  }
  v35_.v35[0] = GameData_20498f0;
  v35_.v35[1] = &v37_.v37;
  v35_.v36 = v35_.v35;
  Troop_133ed80(v5, (__int64)v35_.v35);
  if (v35_.v36 == v35_.v35) {
    v9 = 32;
  }
  else {
    if (v35_.v36 == nullptr) {
      goto LABEL_13;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v35_.v36 + v9))((__int64)v35_.v36);
LABEL_13:
  v10 = (unsigned __int64)(v37_.v38 - v37_.v37) >> 3;
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v11 = game_map_MapRandom_instance__ptr[0];
  v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8);
  v13 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) ^
        (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL))
         << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 4) = v12;
  v15 = (v14 >> 8) ^ (v13 >> 19) ^ v14 ^ v13;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8) = v13;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 12) = v15;
  v16 = v15 & 0x7FFFFFFF;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  v17 = v37_.v37;
  v18 = *(_QWORD*)(v37_.v37 + 8LL * (unsigned int)(v16 % (int)v10));
  v37_.v38 = v37_.v37;
  *(_QWORD*)(a1 + 48) = v18;
  v19 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v19, v17);
  v20 = GameRoutine_975940(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) + 392LL) + 288LL));
  v21 = *(unsigned __int8***)(GameData_21c9ec8 + 64);
  v22 = *(unsigned __int8***)(GameData_21c9ec8 + 72);
  if (v21 == v22) {
  LABEL_18:
    v23 = nullptr;
  }
  else {
    while (1) {
      v24 = *v21++;
      v23 = v24;
      if (*(unsigned __int8*)(v20 + 304) == v24[32]) {
        break;
      }
      if (v21 == v22) {
        goto LABEL_18;
      }
    }
  }
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v25 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8);
  v26 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 12);
  v27 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11) ^
        (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11) << 11);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11) =
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 4) = v25;
  v28 = (v27 >> 8) ^ (v26 >> 19) ^ v27 ^ v26;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8) = v26;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 12) = v28;
  v29 = v28 & 0x7FFFFFFF;
  result = nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  v31 = v29 % 0x64;
  v32 = v23[34];
  if (v29 % 0x64 >= v32) {
    v34 = v23[35] + v32;
    if (v31 >= v34) {
      if (v31 >= v34 + v23[36]) {
        v33 = 4;
      }
      else {
        v33 = 3;
      }
    }
    else {
      v33 = 2;
    }
  }
  else {
    v33 = 1;
  }
  *(_DWORD*)(a1 + 44) = v33;
  return result;
}

unsigned __int64 SpotAttachmentRecruit_15189e0(__int64 a1, __int64 a2,
                                               unsigned int a3)
{
  __int64 v6;
  unsigned __int64 result;
  __int64 v8;
  unsigned __int8* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v6 = game_gmap_SpotAttachmentRecruit_GetData(a1);
  result = GameRoutine_13261c0(a2);
  v8 = *(unsigned __int16*)(v6 + 48);
  if (*(_WORD*)(v6 + 48) != 0) {
    v9 = *(unsigned __int8**)(v6 + 56);
    while (1) {
      v10 = *v9++;
      if (v10 == (unsigned __int8)result) {
        break;
      }
      if (--v8 == 0) {
        return result;
      }
    }
    v11 = *(_QWORD*)(a2 + 120);
    v12 = *(_QWORD*)(v11 + 8);
    if (v12 != 0) {
      v13 = strchr(*(_QWORD*)(v11 + 8), 95);
      if (v13 != 0) {
        v12 = v13 + 1;
      }
    }
    result = game_HashString(v12);
    if (result != 0) {
      v14 = *(_QWORD*)(GameData_21c9ea8 + 96);
      if (v14 != 0 && *(_QWORD*)(GameData_21c9ea8 + 112) != 0) {
        v16 = v14 - 1;
        if ((v14 & (v14 - 1)) != 0) {
          v17 = result;
          if (result >= v14) {
            v17 = result % v14;
          }
        }
        else {
          v17 = v16 & result;
        }
        v18 = *(_QWORD**)(*(_QWORD*)(GameData_21c9ea8 + 88) + 8 * v17);
        if (v18 != nullptr) {
          v19 = (_QWORD*)*v18;
          if (v19 != nullptr) {
            if ((v14 & v16) == 0) {
              while (1) {
                v21 = v19[1];
                if (v21 == result) {
                  if (v19[2] == result) {
                    goto LABEL_34;
                  }
                }
                else if ((v21 & v16) != v17) {
                  return result;
                }
                v19 = (_QWORD*)*v19;
                if (v19 == nullptr) {
                  return result;
                }
              }
            }
            do {
              v20 = v19[1];
              if (v20 == result) {
                if (v19[2] == result) {
                LABEL_34:
                  v22 = v19[3];
                  if (v22 != 0) {
                    if (game_GameModeData_instance_ != 0 &&
                        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
                      v23 = 4;
                    }
                    else {
                      v24 = game_gmap_SpotAttachmentRecruit_GetData(result);
                      v23 = (unsigned int)GameRoutine_14de000(v24);
                    }
                    return GameRoutine_14de4e0(v22, a1, v23, a3);
                  }
                  return result;
                }
              }
              else {
                if (v20 >= v14) {
                  v20 %= v14;
                }
                if (v20 != v17) {
                  return result;
                }
              }
              v19 = (_QWORD*)*v19;
            } while (v19 != nullptr);
          }
        }
      }
    }
  }
  return result;
}

__int64 SpotAttachmentRecruit_Unknown36(__int64 a1, __int64 a2)
{
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  char v9;
  __int64 v10;
  char v11;
  __int64 v12;
  int v13;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v4;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = 9;
  GameRoutine_65f240(a2, ((__int64)*(__int16*)(a1 + 22) << 24) +
                             ((__int64)*(__int16*)(a1 + 20) << 32) +
                             ((__int64)*(__int16*)(a1 + 24) << 18) +
                             ((__int64)*(__int16*)(a1 + 26) << 12) +
                             ((__int64)*(__int16*)(a1 + 28) << 6) +
                             *(__int16*)(a1 + 30));
  result = GameRoutine_65f240(a2, ((__int64)*(__int16*)(a1 + 10) << 24) +
                                      ((__int64)*(__int16*)(a1 + 8) << 32) +
                                      ((__int64)*(__int16*)(a1 + 12) << 18) +
                                      ((__int64)*(__int16*)(a1 + 14) << 12) +
                                      ((__int64)*(__int16*)(a1 + 16) << 6) +
                                      *(__int16*)(a1 + 18));
  v8 = *(int*)(a2 + 20);
  v9 = *(_BYTE*)(a1 + 41);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v9;
  v10 = *(int*)(a2 + 20);
  v11 = *(_BYTE*)(a1 + 40);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v11;
  v12 = *(int*)(a2 + 20);
  v13 = *(_DWORD*)(a1 + 44);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v13;
  return result;
}

#pragma GCC visibility pop
