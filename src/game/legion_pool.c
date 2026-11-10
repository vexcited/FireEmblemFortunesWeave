#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_89d820(float*, unsigned __int64*, __int64, __int64**);
__int64 GameRoutine_65f240(_QWORD, _QWORD);
__int64 GameRoutine_65f3d0(_QWORD, _QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_70f2d0(_QWORD, _QWORD);
__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 GameRoutine_876a40(_QWORD*, _QWORD*);
__int64 GameRoutine_9389a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9392a0(void);
__int64 LegionPool_936cf0(_QWORD, _QWORD);
__int64 LegionPool_9374e0_alt1(_QWORD, _QWORD) __asm__("LegionPool_9374e0");
__int64 LegionPool_937de0_alt1(_QWORD, _QWORD) __asm__("LegionPool_937de0");
__int64 LegionPool_93a920_alt1(_QWORD, _QWORD) __asm__("LegionPool_93a920");
__int64 SpotMgr_132ffa0(_QWORD);
__int64 UnitHeroes_6d2c90(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN GameData_21f4278;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_1faebf0[])();
extern __int64 (*GameData_1faed40[])();
extern __int64 (*game_LegionPool_List_vtable[])();
extern __int64 GameData_21ca310;
extern __int64 GameData_21eea40;
extern __int64 GameData_21f4280;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c780;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212d6d0;
extern char GameData_1a9f09e;
extern int GameData_21f4270;
struct PseudoSret GameRoutine_93aa60(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6f93f0(void);
__int64 LegionPool_9369a0(__int64 result);
bool LegionPool_9374e0(_QWORD* a1, __int64 a2);
__int64 LegionPool_937620(__int64 a1, __int64 a2, unsigned int a3);
__int64 LegionPool_9377a0(__int64 a1, __int64 a2, unsigned int a3);
__int64 LegionPool_937de0(__int64 a1, __int64 a2);
__int64 LegionPool_937fe0(__int64 a1, __int64 a2);
__int64 LegionPool_938160(__int64 a1, __int64 a2);
__int64 LegionPool_938460(__int64 a1);
__int64 LegionPool_938560(unsigned int a1);
unsigned __int64 LegionPool_9386f0();
__int64 LegionPool_938ca0(__int64 a1);
__int64 game_LegionPool_List_Impl_EachData_closure_Invoke(__int64 a1,
                                                          unsigned int* a2);
__int64 LegionPool_93a920(_QWORD* a1, unsigned __int8* a2);
__int64 LegionPool_Impl_Destructor(_QWORD* a1);
__int64 LegionPool_Impl_DeletingDestructor(_QWORD* a1);
__int64 game_LegionPool_GetVariety_lambda0_Invoke(__int64 result,
                                                  unsigned __int8* a2);

__int64 LegionPool_9369a0(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  _BYTE* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  int v27;
  _BYTE v28[4];
  char v29[4];
  _BYTE* v30;

  v1 = result;
  if (*(_BYTE*)(result + 76) == 1) {
    if (*(_QWORD*)(result + 32) != 0) {
      v2 = *(_QWORD**)(result + 24);
      if (v2 != nullptr) {
        v3 = fw_memory_g_heap_manager_ptr;
        do {
          v4 = (_QWORD*)*v2;
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v5 = 128;
          }
          else {
            v5 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
          v2 = v4;
        } while (v4 != nullptr);
      }
      v6 = *(_QWORD*)(v1 + 16);
      *(_QWORD*)(v1 + 24) = 0;
      if (v6 != 0) {
        v7 = v6 & 7;
        if (v6 >= 8) {
          v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
          v8 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + 8 * v8 + 48) = 0;
            v10 = *(_QWORD*)(v1 + 8) + 8 * v8;
            v8 += 8;
            *(_QWORD*)(v10 + 56) = 0;
          } while (v9 != v8);
        }
        else {
          v8 = 0;
        }
        if (v7 != 0) {
          v11 = 8 * v8;
          do {
            --v7;
            *(_QWORD*)(*(_QWORD*)(v1 + 8) + v11) = 0;
            v11 += 8;
          } while (v7 != 0);
        }
      }
      *(_QWORD*)(v1 + 32) = 0;
    }
    v12 = 1;
    v13 = 0;
    do {
      v29[0] = *(_BYTE*)(*(_QWORD*)(v1 + 48) + v12);
      if (v29[0] != 0) {
        if (game_UnitPool_Get(v29) != 0) {
          v30 = v28;
          v28[0] = v29[0];
          *(_DWORD*)(GameRoutine_9389a0(v1 + 8, v28, &v30) + 20) = v13;
        }
        else {
          *(_BYTE*)(*(_QWORD*)(v1 + 48) + v12) = 0;
        }
      }
      v12 += 8;
      ++v13;
    } while (v12 != 2401);
    v27 = 511;
    result = game_UnitPool_GetFirst(&v27);
    if (result != 0) {
      v14 = *(_QWORD*)(result + 432);
      v15 = result;
      if (v14 == 0) {
        v24 = *(_QWORD*)(result + 440);
        if (v24 == 0 || (v25 = *(unsigned __int8*)(v24 + 16)) > 8) {
        LABEL_35:
          result = LegionPool_936cf0(v1, v15);
          goto LABEL_36;
        }
        v26 = 24LL * (unsigned int)v25 + 556024;
        while (1) {
          if (v25 <= 7) {
            v14 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v26);
            if (v14 != 0) {
              break;
            }
          }
          ++v25;
          v26 += 24;
          if (v25 == 9) {
            goto LABEL_35;
          }
        }
      }
      while (1) {
        do {
          v16 = v14;
          LegionPool_936cf0(v1, v15);
          v14 = *(_QWORD*)(v16 + 432);
          v15 = v16;
        } while (v14 != 0);
        v17 = *(_QWORD*)(v16 + 440);
        if (v17 == 0) {
          break;
        }
        v18 = *(unsigned __int8*)(v17 + 16);
        if (v18 > 8) {
          break;
        }
        v19 = 24LL * (unsigned int)v18 + 556024;
        while (1) {
          if (v18 <= 7) {
            v14 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v19);
            if (v14 != 0) {
              break;
            }
          }
          ++v18;
          v19 += 24;
          if (v18 == 9) {
            goto LABEL_34;
          }
        }
        v15 = v16;
      }
    LABEL_34:
      v15 = v16;
      goto LABEL_35;
    }
  }
LABEL_36:
  v20 = *(_QWORD*)(v1 + 48);
  v21 = 300;
  v22 = 0;
  *(_DWORD*)(v1 + 72) = 0;
  v23 = (_BYTE*)(v20 + 24);
  do {
    if (*(v23 - 24) != 0) {
      *(_DWORD*)(v1 + 72) = ++v22;
    }
    if (*(v23 - 16) != 0) {
      *(_DWORD*)(v1 + 72) = ++v22;
    }
    if (*(v23 - 8) != 0) {
      *(_DWORD*)(v1 + 72) = ++v22;
    }
    if (*v23 != 0) {
      *(_DWORD*)(v1 + 72) = ++v22;
    }
    if (v23[8] != 0) {
      *(_DWORD*)(v1 + 72) = ++v22;
    }
    if (v23[16] != 0) {
      *(_DWORD*)(v1 + 72) = ++v22;
    }
    v21 -= 6;
    v23 += 48;
  } while (v21 != 0);
  return result;
}

bool LegionPool_9374e0(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  int v6;
  _QWORD* v7;
  bool v8;
  _BYTE* v9;
  _BYTE* v10;
  int v11;
  _QWORD* v12;
  int* v13;
  int* v14;
  int v15;
  __int64 v16;
  int* v17;
  int* v18;
  int v19;
  int v21;
  int v22;
  int v23;

  v3 = a1 + 10;
  v2 = a1[10];
  v6 = 0;
  v21 = 0;
  a1[11] = v2;
  v7 = a1 + 13;
  a1[14] = a1[13];
  do {
    v9 = (_BYTE*)(a1[6] + 8LL * v6);
    if (*v9 != 0) {
      v11 = (unsigned __int8)v9[1];
      v10 = v9 + 1;
      v12 = v7;
      if (v11 != 0) {
        if (game_UnitPool_Get(v10) != 0) {
          v12 = v3;
        }
        else {
          v12 = v7;
        }
      }
      GameRoutine_7d6200(v12, &v21);
      v6 = v21;
    }
    v8 = v6++ < 299;
    v21 = v6;
  } while (v8);
  if (*(_QWORD*)(a2 + 32) != 0) {
    v13 = (int*)a1[10];
    v14 = (int*)a1[11];
    if (v13 != v14) {
      while (1) {
        v15 = *v13++;
        v16 = *(_QWORD*)(a2 + 32);
        v22 = v15;
        if (v16 == 0) {
          break;
        }
        (*(void (**)(__int64, int*))(*(_QWORD*)v16 + 48LL))(v16, &v22);
        if (v13 == v14) {
          goto LABEL_14;
        }
      }
    LABEL_18:
      GameRoutine_60a310(v16, a2);
    }
  LABEL_14:
    v17 = (int*)a1[13];
    v18 = (int*)a1[14];
    if (v17 != v18) {
      while (1) {
        v19 = *v17++;
        v16 = *(_QWORD*)(a2 + 32);
        v23 = v19;
        if (v16 == 0) {
          break;
        }
        (*(void (**)(__int64, int*))(*(_QWORD*)v16 + 48LL))(v16, &v23);
        if (v17 == v18) {
          return ((__int64)(a1[11] - a1[10]) >> 2) +
                     ((__int64)(a1[14] - a1[13]) >> 2) !=
                 0;
        }
      }
      goto LABEL_18;
    }
  }
  return ((__int64)(a1[11] - a1[10]) >> 2) +
             ((__int64)(a1[14] - a1[13]) >> 2) !=
         0;
}

__int64 LegionPool_937620(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5;
  __int64* v6;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  _DWORD v18[2];
  char* v19;

  if ((a3 & 0x80000000) != 0) {
    return 0;
  }
  v5 = *(_QWORD*)(a1 + 48) + 8LL * a3;
  v6 = GameData_212c780;
  if (*(_DWORD*)(v5 + 4) == 0 || *GameData_212c780 == 0) {
    if (a2 == 0) {
      return 0;
    }
  }
  else {
    v18[0] = *(_DWORD*)(v5 + 4);
    v18[1] = 0;
    v19 = &GameData_1a9f09e;
    if (SpotMgr_132ffa0(v18) == a2) {
      return 0;
    }
  }
  if (a2 != 0) {
    if (*(_BYTE*)v5 == 0 ||
        *(_BYTE*)(v5 + 1) != 0 && game_UnitPool_Get(v5 + 1) != 0) {
      return 0;
    }
    v10 = 0;
    while (1) {
      v11 = *(_QWORD*)(a1 + 48);
      if (*(_BYTE*)(v11 + v10) != 0) {
        v12 = *(_DWORD*)(v11 + v10 + 4);
        if (v12 != 0 && *v6 != 0) {
          v19 = &GameData_1a9f09e;
          v18[0] = v12;
          v18[1] = 0;
          if (SpotMgr_132ffa0(v18) == a2) {
            break;
          }
        }
      }
      v10 += 8;
      if (v10 == 2400) {
        goto LABEL_31;
      }
    }
    v14 = *(_QWORD*)(a1 + 48);
    v15 = *(_DWORD*)(v5 + 4);
    v16 = 0;
    if (v15 != 0 && *v6 != 0) {
      v19 = &GameData_1a9f09e;
      v18[0] = v15;
      v18[1] = 0;
      v17 = SpotMgr_132ffa0(v18);
      if (v17 != 0) {
        v16 = *(_DWORD*)(v17 + 96);
      }
      else {
        v16 = 0;
      }
    }
    *(_DWORD*)(v14 + v10 + 4) = v16;
  LABEL_31:
    v9 = *(_DWORD*)(a2 + 96);
  }
  else {
    v9 = 0;
  }
  *(_DWORD*)(v5 + 4) = v9;
  return 1;
}

__int64 LegionPool_9377a0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned int v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64 v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  _BYTE* v26;
  char v27;
  char v28;
  int v29;
  __int64 v30;
  int v31;
  _BYTE* v32;
  __int64** v33;
  __int64* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  _BYTE* v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  _BYTE* v58;
  _BYTE v59[4];
  _BYTE v60[4];
  _BYTE* v61;
  _BYTE v62[4];
  _BYTE v63[4];

  result = 0;
  if ((a3 & 0x80000000) != 0 || (*(_BYTE*)(a1 + 76) & 1) == 0) {
    return result;
  }
  v6 = a3;
  v7 = *(_QWORD*)(a1 + 48) + 8LL * a3;
  if (a2 == 0) {
    v17 = *(unsigned __int8*)(v7 + 1);
    v16 = v7 + 1;
    if (v17 != 0) {
      result = game_UnitPool_Get(v16);
      if (result == 0) {
        return result;
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 48) + 8 * v6 + 1) = 0;
      v18 = GameData_212ceb0;
      v19 = *GameData_212ceb0;
      if (*(_QWORD*)(result + 1944) != *GameData_212ceb0) {
        *(_WORD*)(result + 1944) = v19;
        *(_BYTE*)(result + 1946) = BYTE2(v19);
        v20 = *(_DWORD*)((char*)v18 + 3);
        *(_BYTE*)(result + 1951) = *((_BYTE*)v18 + 7);
        v21 = *(_DWORD*)(result + 416);
        *(_DWORD*)(result + 1947) = v20;
        if ((v21 & 0x10000000) == 0) {
          v22 = result;
          *(_DWORD*)(result + 416) = v21 | 0x10000000;
          GameRoutine_6c51e0(result);
          GameRoutine_6c6da0(v22);
          GameRoutine_6c6ec0(v22);
          result = v22;
          *(_DWORD*)(v22 + 416) &= ~0x10000000u;
        }
        *(_WORD*)(result + 20) |= 1u;
      }
      v63[0] = *(_BYTE*)(result + 2088);
      LegionPool_93a920_alt1(a1 + 8, v63);
      v23 = *(_QWORD*)(a1 + 48);
      v24 = 300;
      v25 = 0;
      *(_DWORD*)(a1 + 72) = 0;
      v26 = (_BYTE*)(v23 + 24);
      do {
        if (*(v26 - 24) != 0) {
          *(_DWORD*)(a1 + 72) = ++v25;
        }
        if (*(v26 - 16) != 0) {
          *(_DWORD*)(a1 + 72) = ++v25;
        }
        if (*(v26 - 8) != 0) {
          *(_DWORD*)(a1 + 72) = ++v25;
        }
        if (*v26 != 0) {
          *(_DWORD*)(a1 + 72) = ++v25;
        }
        if (v26[8] != 0) {
          *(_DWORD*)(a1 + 72) = ++v25;
        }
        if (v26[16] != 0) {
          *(_DWORD*)(a1 + 72) = ++v25;
        }
        v24 -= 6;
        v26 += 48;
      } while (v24 != 0);
    }
    return 0;
  }
  if (*(_BYTE*)v7 == 0) {
    return 0;
  }
  if (*(_BYTE*)(v7 + 1) != 0 && (v9 = game_UnitPool_Get(v7 + 1)) != 0) {
    v10 = v9;
    if (*(_BYTE*)(a1 + 76) == 1) {
      v11 = *(_QWORD*)(a1 + 16);
      v12 = -1;
      if (v11 != 0 && *(_QWORD*)(a1 + 32) != 0) {
        v13 = *(unsigned __int8*)(a2 + 2088);
        v14 = v11 - 1;
        if ((v11 & (v11 - 1)) != 0) {
          v15 = *(unsigned __int8*)(a2 + 2088);
          if (v11 <= v13) {
            v15 = (unsigned int)v13 % (unsigned int)v11;
          }
        }
        else {
          v15 = ((_DWORD)v11 - 1) & (unsigned int)v13;
        }
        v33 = *(__int64***)(*(_QWORD*)(a1 + 8) + 8 * v15);
        if (v33 != nullptr) {
          v34 = *v33;
          if (v34 != nullptr) {
            if ((v11 & v14) == 0) {
              while (1) {
                v36 = v34[1];
                if (v36 == v13) {
                  if (*((unsigned __int8*)v34 + 16) == (_DWORD)v13) {
                    goto LABEL_74;
                  }
                }
                else if ((v36 & v14) != v15) {
                  goto LABEL_73;
                }
                v34 = (__int64*)*v34;
                if (v34 == nullptr) {
                  goto LABEL_73;
                }
              }
            }
            while (1) {
              v35 = v34[1];
              if (v35 == v13) {
                if (*((unsigned __int8*)v34 + 16) == (_DWORD)v13) {
                LABEL_74:
                  v12 = *((_DWORD*)v34 + 5);
                  break;
                }
              }
              else {
                if (v35 >= v11) {
                  v35 %= v11;
                }
                if (v35 != v15) {
                LABEL_73:
                  v12 = -1;
                  break;
                }
              }
              v34 = (__int64*)*v34;
              if (v34 == nullptr) {
                goto LABEL_73;
              }
            }
          }
        }
      }
      v37 = *(_QWORD*)(a1 + 48) + 8 * v6;
      v39 = *(unsigned __int8*)(v37 + 1);
      v38 = v37 + 1;
      if (v39 != 0) {
        v40 = game_UnitPool_Get(v38);
        if (v40 != 0) {
          *(_BYTE*)(*(_QWORD*)(a1 + 48) + 8 * v6 + 1) = 0;
          v41 = GameData_212ceb0;
          v42 = *GameData_212ceb0;
          if (*(_QWORD*)(v40 + 1944) != *GameData_212ceb0) {
            *(_WORD*)(v40 + 1944) = v42;
            *(_BYTE*)(v40 + 1946) = BYTE2(v42);
            v43 = *(_DWORD*)((char*)v41 + 3);
            *(_BYTE*)(v40 + 1951) = *((_BYTE*)v41 + 7);
            v44 = *(_DWORD*)(v40 + 416);
            *(_DWORD*)(v40 + 1947) = v43;
            if ((v44 & 0x10000000) == 0) {
              v45 = v40;
              *(_DWORD*)(v40 + 416) = v44 | 0x10000000;
              GameRoutine_6c51e0(v40);
              GameRoutine_6c6da0(v45);
              GameRoutine_6c6ec0(v45);
              v40 = v45;
              *(_DWORD*)(v45 + 416) &= ~0x10000000u;
            }
            *(_WORD*)(v40 + 20) |= 1u;
          }
          v60[0] = *(_BYTE*)(v40 + 2088);
          LegionPool_93a920_alt1(a1 + 8, v60);
          v46 = *(_QWORD*)(a1 + 48);
          v47 = 300;
          v48 = 0;
          *(_DWORD*)(a1 + 72) = 0;
          v49 = (_BYTE*)(v46 + 24);
          do {
            if (*(v49 - 24) != 0) {
              *(_DWORD*)(a1 + 72) = ++v48;
            }
            if (*(v49 - 16) != 0) {
              *(_DWORD*)(a1 + 72) = ++v48;
            }
            if (*(v49 - 8) != 0) {
              *(_DWORD*)(a1 + 72) = ++v48;
            }
            if (*v49 != 0) {
              *(_DWORD*)(a1 + 72) = ++v48;
            }
            if (v49[8] != 0) {
              *(_DWORD*)(a1 + 72) = ++v48;
            }
            if (v49[16] != 0) {
              *(_DWORD*)(a1 + 72) = ++v48;
            }
            v47 -= 6;
            v49 += 48;
          } while (v47 != 0);
        }
      }
      if ((v12 & 0x80000000) == 0 && (*(_BYTE*)(a1 + 76) & 1) != 0) {
        v50 = *(_QWORD*)(a1 + 48) + 8LL * v12;
        v52 = *(unsigned __int8*)(v50 + 1);
        v51 = v50 + 1;
        if (v52 != 0) {
          v53 = game_UnitPool_Get(v51);
          if (v53 != 0) {
            v54 = v53;
            *(_BYTE*)(*(_QWORD*)(a1 + 48) + 8LL * v12 + 1) = 0;
            UnitHeroes_6d2c90(v53, GameData_212ceb0);
            v62[0] = *(_BYTE*)(v54 + 2088);
            LegionPool_93a920_alt1(a1 + 8, v62);
            v55 = *(_QWORD*)(a1 + 48);
            v56 = 300;
            v57 = 0;
            *(_DWORD*)(a1 + 72) = 0;
            v58 = (_BYTE*)(v55 + 24);
            do {
              if (*(v58 - 24) != 0) {
                *(_DWORD*)(a1 + 72) = ++v57;
              }
              if (*(v58 - 16) != 0) {
                *(_DWORD*)(a1 + 72) = ++v57;
              }
              if (*(v58 - 8) != 0) {
                *(_DWORD*)(a1 + 72) = ++v57;
              }
              if (*v58 != 0) {
                *(_DWORD*)(a1 + 72) = ++v57;
              }
              if (v58[8] != 0) {
                *(_DWORD*)(a1 + 72) = ++v57;
              }
              if (v58[16] != 0) {
                *(_DWORD*)(a1 + 72) = ++v57;
              }
              v56 -= 6;
              v58 += 48;
            } while (v56 != 0);
          }
        }
      }
    }
    else {
      v12 = -1;
    }
    LegionPool_9377a0(a1, v10, v12);
  }
  else {
    LegionPool_937de0_alt1(a1, a2);
  }
  v27 = *(_BYTE*)(a2 + 2088);
  *(_BYTE*)(v7 + 1) = v27;
  if (*(_QWORD*)(a2 + 1944) != *(_QWORD*)v7) {
    *(_WORD*)(a2 + 1944) = *(_QWORD*)v7;
    *(_BYTE*)(a2 + 1946) = *(_BYTE*)(v7 + 2);
    v28 = *(_BYTE*)(v7 + 7);
    *(_DWORD*)(a2 + 1947) = *(_DWORD*)(v7 + 3);
    v29 = *(_DWORD*)(a2 + 416);
    *(_BYTE*)(a2 + 1951) = v28;
    if ((v29 & 0x10000000) == 0) {
      *(_DWORD*)(a2 + 416) = v29 | 0x10000000;
      GameRoutine_6c51e0(a2);
      GameRoutine_6c6da0(a2);
      GameRoutine_6c6ec0(a2);
      *(_DWORD*)(a2 + 416) &= ~0x10000000u;
      v27 = *(_BYTE*)(a2 + 2088);
    }
    *(_WORD*)(a2 + 20) |= 1u;
  }
  v59[0] = v27;
  v61 = v59;
  *(_DWORD*)(GameRoutine_9389a0(a1 + 8, v59, &v61) + 20) = a3;
  v30 = 300;
  v31 = 0;
  *(_DWORD*)(a1 + 72) = 0;
  v32 = (_BYTE*)(*(_QWORD*)(a1 + 48) + 24LL);
  do {
    if (*(v32 - 24) != 0) {
      *(_DWORD*)(a1 + 72) = ++v31;
    }
    if (*(v32 - 16) != 0) {
      *(_DWORD*)(a1 + 72) = ++v31;
    }
    if (*(v32 - 8) != 0) {
      *(_DWORD*)(a1 + 72) = ++v31;
    }
    if (*v32 != 0) {
      *(_DWORD*)(a1 + 72) = ++v31;
    }
    if (v32[8] != 0) {
      *(_DWORD*)(a1 + 72) = ++v31;
    }
    if (v32[16] != 0) {
      *(_DWORD*)(a1 + 72) = ++v31;
    }
    v30 -= 6;
    v32 += 48;
  } while (v30 != 0);
  return 1;
}

__int64 LegionPool_937de0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64*** v9;
  __int64** v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  _BYTE* v24;
  _BYTE v26[4];
  __int64 v27;
  __int64 v28;

  if (a2 != 0 && (*(_BYTE*)(a1 + 76) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 16);
    if (v4 != 0 && *(_QWORD*)(a1 + 32) != 0) {
      v6 = *(unsigned __int8*)(a2 + 2088);
      v7 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v8 = *(unsigned __int8*)(a2 + 2088);
        if (v4 <= v6) {
          v8 = (unsigned int)v6 % (unsigned int)v4;
        }
      }
      else {
        v8 = ((_DWORD)v4 - 1) & (unsigned int)v6;
      }
      v27 = v2;
      v28 = v3;
      v9 = *(__int64****)(*(_QWORD*)(a1 + 8) + 8 * v8);
      if (v9 != nullptr) {
        v10 = *v9;
        if (v10 != nullptr) {
          if ((v4 & v7) == 0) {
            while (1) {
              v12 = v10[1];
              if (v12 == (__int64*)v6) {
                if (*((unsigned __int8*)v10 + 16) == (_DWORD)v6) {
                  goto LABEL_27;
                }
              }
              else if (((unsigned __int64)v12 & v7) != v8) {
                return 0;
              }
              v10 = (__int64**)*v10;
              if (v10 == nullptr) {
                return 0;
              }
            }
          }
          do {
            v11 = (unsigned __int64)v10[1];
            if (v11 == v6) {
              if (*((unsigned __int8*)v10 + 16) == (_DWORD)v6) {
              LABEL_27:
                v13 = *((unsigned int*)v10 + 5);
                if ((v13 & 0x80000000) == 0) {
                  v14 = *(_QWORD*)(a1 + 48) + 8 * v13;
                  v16 = *(unsigned __int8*)(v14 + 1);
                  v15 = v14 + 1;
                  if (v16 != 0) {
                    v18 = game_UnitPool_Get(v15);
                    if (v18 != 0) {
                      v19 = *(_QWORD*)(a1 + 48) + 8 * v13;
                      v20 = v18;
                      *(_BYTE*)(v19 + 1) = 0;
                      UnitHeroes_6d2c90(v18, GameData_212ceb0);
                      v26[0] = *(_BYTE*)(v20 + 2088);
                      LegionPool_93a920_alt1(a1 + 8, v26);
                      v21 = *(_QWORD*)(a1 + 48);
                      v22 = 300;
                      v23 = 0;
                      *(_DWORD*)(a1 + 72) = 0;
                      v24 = (_BYTE*)(v21 + 24);
                      do {
                        if (*(v24 - 24) != 0) {
                          *(_DWORD*)(a1 + 72) = ++v23;
                        }
                        if (*(v24 - 16) != 0) {
                          *(_DWORD*)(a1 + 72) = ++v23;
                        }
                        if (*(v24 - 8) != 0) {
                          *(_DWORD*)(a1 + 72) = ++v23;
                        }
                        if (*v24 != 0) {
                          *(_DWORD*)(a1 + 72) = ++v23;
                        }
                        if (v24[8] != 0) {
                          *(_DWORD*)(a1 + 72) = ++v23;
                        }
                        if (v24[16] != 0) {
                          *(_DWORD*)(a1 + 72) = ++v23;
                        }
                        v22 -= 6;
                        v24 += 48;
                      } while (v22 != 0);
                    }
                  }
                }
                return 0;
              }
            }
            else {
              if (v11 >= v4) {
                v11 %= v4;
              }
              if (v11 != v8) {
                return 0;
              }
            }
            v10 = (__int64**)*v10;
          } while (v10 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 LegionPool_937fe0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4278,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4278) != 0) {
    GameData_21f4270 = game_HashString32("LegionData");
    __cxa_guard_release(&GameData_21f4278);
  }
  if (((**(__int64 (***)(__int64, int*))a2)(a2, &GameData_21f4270) & 1) != 0) {
    v4 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v4 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = 0;
    v5 = *(int*)(a2 + 20);
    v6 = *(_DWORD*)(a1 + 72);
    *(_DWORD*)(a2 + 20) = v5 + 1;
    v7 = *(_QWORD*)(a2 + 8);
    if (v6 != 0) {
      v8 = 0;
      *(_BYTE*)(v7 + v5) = 44;
      v9 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v9 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = 1;
      v10 = GameData_212c998[0];
      do {
        v11 = *(int*)(a2 + 20);
        v12 = *(_QWORD*)(a1 + 48);
        v13 = *(unsigned __int8*)(v12 + v8);
        *(_DWORD*)(a2 + 20) = v11 + 1;
        v14 = *(_QWORD*)(a2 + 8);
        if (v13 != 0) {
          *(_BYTE*)(v14 + v11) = 1;
          GameRoutine_65f240(a2, *(_QWORD*)(v12 + v8));
          GameRoutine_65f3d0(a2,
                             *(_QWORD*)(*(_QWORD*)(*v10 + 64) +
                                        8LL * *(unsigned __int8*)(v12 + v8)));
        }
        else {
          *(_BYTE*)(v14 + v11) = 0;
        }
        v8 += 8;
      } while (v8 != 2400);
    }
    else {
      *(_BYTE*)(v7 + v5) = 0;
      v15 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v15 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = 0;
    }
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 LegionPool_938160(__int64 a1, __int64 a2)
{
  __int64 i;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;

  for (i = -2400; i != 0; i += 160) {
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 48) + i + 2544) = 0;
    v5 = *(_QWORD*)(a1 + 48) + i;
    *(_QWORD*)(v5 + 2552) = 0;
  }
  if (*(_QWORD*)(a1 + 32) != 0) {
    v6 = *(_QWORD**)(a1 + 24);
    if (v6 != nullptr) {
      v7 = fw_memory_g_heap_manager_ptr;
      do {
        v8 = (_QWORD*)*v6;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9);
        v6 = v8;
      } while (v8 != nullptr);
    }
    v10 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 24) = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v12 + 48) = 0;
          v14 = *(_QWORD*)(a1 + 8) + 8 * v12;
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(*(_QWORD*)(a1 + 8) + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    *(_QWORD*)(a1 + 32) = 0;
  }
  *(_DWORD*)(a1 + 72) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4278,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4278) != 0) {
    GameData_21f4270 = game_HashString32("LegionData");
    __cxa_guard_release(&GameData_21f4278);
  }
  if (((*(__int64 (**)(__int64, int*))(*(_QWORD*)a2 + 16LL))(
           a2, &GameData_21f4270) &
       1) != 0) {
    v16 = *(int*)(a2 + 20);
    v17 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v16 + 2;
    v18 = *(unsigned __int8*)(v17 + v16 + 1);
    *(_DWORD*)(a2 + 20) = v16 + 3;
    v19 = v18 | (*(unsigned __int8*)(v17 + v16 + 2) << 8);
    if (v19 != 0) {
      v20 = 8LL * v19;
      v21 = 0;
      do {
        GameRoutine_70f2d0(*(_QWORD*)(a1 + 48) + v21, a2);
        v21 += 8;
      } while (v20 != v21);
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
  return LegionPool_9369a0(a1);
}

__int64 LegionPool_938460(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64*** v9;
  __int64** v10;
  unsigned __int64 v11;
  __int64* v12;

  result = 0xFFFFFFFFLL;
  if (a1 != 0) {
    v3 = *(_QWORD*)(GameData_21f4280 + 8);
    if ((*(_BYTE*)(v3 + 76) & 1) != 0) {
      v4 = *(_QWORD*)(v3 + 16);
      if (v4 != 0 && *(_QWORD*)(v3 + 32) != 0) {
        v6 = *(unsigned __int8*)(a1 + 2088);
        v7 = v4 - 1;
        if ((v4 & (v4 - 1)) != 0) {
          v8 = v6;
          if (v4 <= v6) {
            v8 = (unsigned int)v6 % (unsigned int)v4;
          }
        }
        else {
          v8 = ((_DWORD)v4 - 1) & (unsigned int)v6;
        }
        v9 = *(__int64****)(*(_QWORD*)(v3 + 8) + 8 * v8);
        if (v9 != nullptr) {
          v10 = *v9;
          if (v10 != nullptr) {
            if ((v4 & v7) == 0) {
              while (1) {
                v12 = v10[1];
                if (v12 == (__int64*)v6) {
                  if (*((unsigned __int8*)v10 + 16) == (_DWORD)v6) {
                    return *((unsigned int*)v10 + 5);
                  }
                }
                else if (((unsigned __int64)v12 & v7) != v8) {
                  return 0xFFFFFFFFLL;
                }
                v10 = (__int64**)*v10;
                if (v10 == nullptr) {
                  return result;
                }
              }
            }
            do {
              v11 = (unsigned __int64)v10[1];
              if (v11 == v6) {
                if (*((unsigned __int8*)v10 + 16) == (_DWORD)v6) {
                  return *((unsigned int*)v10 + 5);
                }
              }
              else {
                if (v11 >= v4) {
                  v11 %= v4;
                }
                if (v11 != v8) {
                  return 0xFFFFFFFFLL;
                }
              }
              v10 = (__int64**)*v10;
            } while (v10 != nullptr);
          }
        }
      }
    }
  }
  return result;
}

__int64 LegionPool_938560(unsigned int a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  _BYTE* v15;
  _BYTE v17[4];

  if ((a1 & 0x80000000) == 0) {
    v1 = *(_QWORD*)(GameData_21f4280 + 8);
    if ((*(_BYTE*)(v1 + 76) & 1) != 0) {
      v3 = *(_QWORD*)(v1 + 48) + 8LL * a1;
      v5 = *(unsigned __int8*)(v3 + 1);
      v4 = v3 + 1;
      if (v5 != 0) {
        v6 = game_UnitPool_Get(v4);
        if (v6 != 0) {
          *(_BYTE*)(*(_QWORD*)(v1 + 48) + 8LL * a1 + 1) = 0;
          v7 = GameData_212ceb0;
          v8 = *GameData_212ceb0;
          if (*(_QWORD*)(v6 + 1944) != *GameData_212ceb0) {
            *(_WORD*)(v6 + 1944) = v8;
            *(_BYTE*)(v6 + 1946) = BYTE2(v8);
            v9 = *(_DWORD*)((char*)v7 + 3);
            *(_BYTE*)(v6 + 1951) = *((_BYTE*)v7 + 7);
            v10 = *(_DWORD*)(v6 + 416);
            *(_DWORD*)(v6 + 1947) = v9;
            if ((v10 & 0x10000000) == 0) {
              v11 = v6;
              *(_DWORD*)(v6 + 416) = v10 | 0x10000000;
              GameRoutine_6c51e0(v6);
              GameRoutine_6c6da0(v11);
              GameRoutine_6c6ec0(v11);
              v6 = v11;
              *(_DWORD*)(v11 + 416) &= ~0x10000000u;
            }
            *(_WORD*)(v6 + 20) |= 1u;
          }
          v17[0] = *(_BYTE*)(v6 + 2088);
          LegionPool_93a920_alt1(v1 + 8, v17);
          v12 = *(_QWORD*)(v1 + 48);
          v13 = 300;
          v14 = 0;
          *(_DWORD*)(v1 + 72) = 0;
          v15 = (_BYTE*)(v12 + 24);
          do {
            if (*(v15 - 24) != 0) {
              *(_DWORD*)(v1 + 72) = ++v14;
            }
            if (*(v15 - 16) != 0) {
              *(_DWORD*)(v1 + 72) = ++v14;
            }
            if (*(v15 - 8) != 0) {
              *(_DWORD*)(v1 + 72) = ++v14;
            }
            if (*v15 != 0) {
              *(_DWORD*)(v1 + 72) = ++v14;
            }
            if (v15[8] != 0) {
              *(_DWORD*)(v1 + 72) = ++v14;
            }
            if (v15[16] != 0) {
              *(_DWORD*)(v1 + 72) = ++v14;
            }
            v13 -= 6;
            v15 += 48;
          } while (v13 != 0);
        }
      }
    }
  }
  return 0;
}

unsigned __int64 LegionPool_9386f0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD v7[4];
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  v10 = 0;
  v11 = 0;
  v9 = 0;
  v7[0] = GameData_1faed40;
  v7[1] = &v9;
  v8 = v7;
  v0 = *(_QWORD*)(GameData_21f4280 + 8);
  v12[2] = v7;
  v13 = v12;
  v12[0] = GameData_1faebf0;
  v12[1] = v0;
  LegionPool_9374e0_alt1(v0, v12);
  if (v13 == v12) {
    v1 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v13 + v1))((__int64)v13);
LABEL_6:
  if (v8 == v7) {
    v2 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v8 + v2))((__int64)v8);
LABEL_11:
  v3 = v9;
  v4 = v10;
  if (v9 != 0) {
    v10 = v9;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v9);
  }
  return (unsigned __int64)(v4 - v3) >> 3;
}

__int64 LegionPool_938ca0(__int64 a1)
{
  int v2;
  __int64* v3;
  void* v4;
  bool v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64*** v20;
  __int64** v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  _BYTE* v35;
  __int64 v36;
  int v37;
  _BYTE* v38;
  __int64 result;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  int v50;
  _QWORD v51[2];
  _QWORD* v52;
  __int64 v53;
  int v54;
  unsigned __int64* v55;

  v52 = nullptr;
  v53 = 0;
  v51[0] = 0;
  v51[1] = 0;
  v2 = 0;
  v3 = GameData_212c998[0];
  v54 = 1065353216;
  v4 = std___1_piecewise_construct_ptr;
  v50 = 0;
  do {
    if (*(_BYTE*)(*(_QWORD*)(a1 + 48) + 8LL * v2) != 0) {
      v6 = **(
          _QWORD**)(*(_QWORD*)(*v3 + 64) +
                    8LL * *(unsigned __int8*)(*(_QWORD*)(a1 + 48) + 8LL * v2));
      v55 = &v49;
      v49 = v6;
      v7 = GameRoutine_89d820((float*)v51, &v49, (__int64)v4, (__int64**)&v55);
      GameRoutine_7d6200(v7 + 3, &v50);
      v2 = v50;
    }
    v5 = v2++ < 299;
    v50 = v2;
  } while (v5);
  v8 = v52;
  if (v52 != nullptr) {
    v9 = GameData_212ceb0;
    do {
      v11 = v8[3];
      v10 = v8[4];
      if ((unsigned __int64)(v10 - v11) >= 5) {
        v12 = 0;
        do {
          v13 = *(unsigned int*)(v11 + 4 * v12);
          if ((v13 & 0x80000000) == 0) {
            v14 = *(_QWORD*)(a1 + 48) + 8 * v13;
            if (*(_BYTE*)v14 != 0) {
              if (*(_BYTE*)(v14 + 1) != 0) {
                v15 = game_UnitPool_Get(v14 + 1);
                if (v15 != 0 && (*(_BYTE*)(a1 + 76) & 1) != 0) {
                  v16 = *(_QWORD*)(a1 + 16);
                  if (v16 != 0 && *(_QWORD*)(a1 + 32) != 0) {
                    v17 = *(unsigned __int8*)(v15 + 2088);
                    v18 = v16 - 1;
                    if ((v16 & (v16 - 1)) != 0) {
                      v19 = *(unsigned __int8*)(v15 + 2088);
                      if (v16 <= v17) {
                        v19 = (unsigned int)v17 % (unsigned int)v16;
                      }
                    }
                    else {
                      v19 = ((_DWORD)v16 - 1) & (unsigned int)v17;
                    }
                    v20 = *(__int64****)(*(_QWORD*)(a1 + 8) + 8 * v19);
                    if (v20 != nullptr) {
                      v21 = *v20;
                      if (v21 != nullptr) {
                        if ((v16 & v18) == 0) {
                          while (1) {
                            v23 = v21[1];
                            if (v23 == (__int64*)v17) {
                              if (*((unsigned __int8*)v21 + 16) ==
                                  (_DWORD)v17) {
                                goto LABEL_40;
                              }
                            }
                            else if (((unsigned __int64)v23 & v18) != v19) {
                              goto LABEL_79;
                            }
                            v21 = (__int64**)*v21;
                            if (v21 == nullptr) {
                              goto LABEL_79;
                            }
                          }
                        }
                        do {
                          v22 = (unsigned __int64)v21[1];
                          if (v22 == v17) {
                            if (*((unsigned __int8*)v21 + 16) == (_DWORD)v17) {
                            LABEL_40:
                              v24 = *((unsigned int*)v21 + 5);
                              if ((v24 & 0x80000000) == 0) {
                                v25 = *(_QWORD*)(a1 + 48) + 8 * v24;
                                v27 = *(unsigned __int8*)(v25 + 1);
                                v26 = v25 + 1;
                                if (v27 != 0) {
                                  v28 = game_UnitPool_Get(v26);
                                  if (v28 != 0) {
                                    *(_BYTE*)(*(_QWORD*)(a1 + 48) + 8 * v24 +
                                              1) = 0;
                                    v29 = *v9;
                                    if (*(_QWORD*)(v28 + 1944) != *v9) {
                                      *(_WORD*)(v28 + 1944) = v29;
                                      *(_BYTE*)(v28 + 1946) = BYTE2(v29);
                                      *(_DWORD*)(v28 + 1947) =
                                          *(_DWORD*)((char*)v9 + 3);
                                      *(_BYTE*)(v28 + 1951) = *((_BYTE*)v9 + 7);
                                      v30 = *(_DWORD*)(v28 + 416);
                                      if ((v30 & 0x10000000) == 0) {
                                        v31 = v28;
                                        *(_DWORD*)(v28 + 416) =
                                            v30 | 0x10000000;
                                        GameRoutine_6c51e0(v28);
                                        GameRoutine_6c6da0(v31);
                                        GameRoutine_6c6ec0(v31);
                                        v28 = v31;
                                        *(_DWORD*)(v31 + 416) &= ~0x10000000u;
                                      }
                                      *(_WORD*)(v28 + 20) |= 1u;
                                    }
                                    LOBYTE(v55) = *(_BYTE*)(v28 + 2088);
                                    LegionPool_93a920_alt1(a1 + 8, &v55);
                                    v32 = *(_QWORD*)(a1 + 48);
                                    v33 = 300;
                                    v34 = 0;
                                    *(_DWORD*)(a1 + 72) = 0;
                                    v35 = (_BYTE*)(v32 + 56);
                                    do {
                                      if (*(v35 - 56) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*(v35 - 48) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*(v35 - 40) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*(v35 - 32) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*(v35 - 24) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*(v35 - 16) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*(v35 - 8) != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (*v35 != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[8] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[16] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[24] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[32] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[40] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[48] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      if (v35[56] != 0) {
                                        *(_DWORD*)(a1 + 72) = ++v34;
                                      }
                                      v33 -= 15;
                                      v35 += 120;
                                    } while (v33 != 0);
                                  }
                                }
                              }
                              break;
                            }
                          }
                          else {
                            if (v22 >= v16) {
                              v22 %= v16;
                            }
                            if (v22 != v19) {
                              break;
                            }
                          }
                          v21 = (__int64**)*v21;
                        } while (v21 != nullptr);
                      }
                    }
                  }
                }
              }
            LABEL_79:
              *(_QWORD*)v14 = 0;
              v36 = 300;
              v37 = 0;
              *(_DWORD*)(a1 + 72) = 0;
              v38 = (_BYTE*)(*(_QWORD*)(a1 + 48) + 56LL);
              do {
                if (*(v38 - 56) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*(v38 - 48) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*(v38 - 40) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*(v38 - 32) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*(v38 - 24) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*(v38 - 16) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*(v38 - 8) != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (*v38 != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[8] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[16] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[24] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[32] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[40] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[48] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                if (v38[56] != 0) {
                  *(_DWORD*)(a1 + 72) = ++v37;
                }
                v36 -= 15;
                v38 += 120;
              } while (v36 != 0);
              v11 = v8[3];
              v10 = v8[4];
            }
          }
          ++v12;
        } while (((v10 - v11) >> 2) - 1 > v12);
      }
      v8 = (_QWORD*)*v8;
    } while (v8 != nullptr);
  }
  result = *(_QWORD*)(a1 + 48);
  if (result != *(_QWORD*)(a1 + 56)) {
    result = GameRoutine_9392a0();
  }
  v40 = v52;
  v41 = fw_memory_g_heap_manager_ptr;
  if (v52 != nullptr) {
    do {
      v43 = (_QWORD*)*v40;
      v44 = v40[3];
      if (v44 != 0) {
        v45 = *(_QWORD*)v41;
        v40[4] = v44;
        if (*(_QWORD*)(v45 + 200) != 0) {
          v46 = 128;
        }
        else {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free(v45 + v46);
      }
      if (*(_QWORD*)(*(_QWORD*)v41 + 200LL) != 0) {
        v42 = 128;
      }
      else {
        v42 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v41 + v42);
      v40 = v43;
    } while (v43 != nullptr);
  }
  v47 = v51[0];
  v51[0] = 0;
  if (v47 != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)v41 + 200LL) == 0) {
      v48 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v41 + v48);
  }
  return result;
}

__int64 game_LegionPool_List_Impl_EachData_closure_Invoke(__int64 a1,
                                                          unsigned int* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;

  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
  if (v3 == 0) {
    GameRoutine_60a310((unsigned __int8)v3, a2);
  }
  v4 = *a2;
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 48LL) + 8 * v4;
  if ((int)v4 >= 0) {
    v6 = (__int64*)v5;
  }
  else {
    v6 = GameData_212ceb0;
  }
  return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v3 + 48LL))(v3, v6);
}

__int64 LegionPool_93a920(_QWORD* a1, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64*** v10;
  __int64** v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[5];

  v4 = a1[1];
  if (v4 == 0 || a1[3] == 0) {
    return 0;
  }
  v7 = *a2;
  v8 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v9 = *a2;
    if (v4 <= v7) {
      v9 = (unsigned int)v7 % (unsigned int)v4;
    }
  }
  else {
    v9 = ((_DWORD)v4 - 1) & (unsigned int)v7;
  }
  v16[3] = v2;
  v16[4] = v3;
  v10 = *(__int64****)(*a1 + 8 * v9);
  if (v10 == nullptr) {
    return 0;
  }
  v11 = *v10;
  if (*v10 == nullptr) {
    return 0;
  }
  if ((v4 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == (__int64*)v7) {
        if (*((unsigned __int8*)v11 + 16) == (_DWORD)v7) {
          goto LABEL_28;
        }
      }
      else if (((unsigned __int64)v13 & v8) != v9) {
        return 0;
      }
      v11 = (__int64**)*v11;
      if (v11 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v12 = (unsigned __int64)v11[1];
    if (v12 == v7) {
      break;
    }
    if (v12 >= v4) {
      v12 %= v4;
    }
    if (v12 != v9) {
      return 0;
    }
  LABEL_16:
    v11 = (__int64**)*v11;
    if (v11 == nullptr) {
      return 0;
    }
  }
  if (*((unsigned __int8*)v11 + 16) != (_DWORD)v7) {
    goto LABEL_16;
  }
LABEL_28:
  *(struct PseudoSret*)(v16) = GameRoutine_93aa60();
  v14 = v16[0];
  v16[0] = 0;
  if (v14 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
  }
  return 1;
}

__int64 LegionPool_Impl_Destructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v4;

  *a1 = game_LegionPool_List_vtable;
  v2 = a1[1];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1] = 0;
  }
  *(a1 - 1) = GameData_212d6d0 + 2;
  v4 = a1 - 1;
  return GameRoutine_876a40(&GameData_21eea40, &v4);
}

__int64 LegionPool_Impl_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;

  *a1 = game_LegionPool_List_vtable;
  v2 = a1[1];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1] = 0;
  }
  *(a1 - 1) = GameData_212d6d0 + 2;
  v5 = a1 - 1;
  GameRoutine_876a40(&GameData_21eea40, &v5);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

__int64 game_LegionPool_GetVariety_lambda0_Invoke(__int64 result,
                                                  unsigned __int8* a2)
{
  __int64 v2;
  __int64* v3;
  char* v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) + 8LL * *a2);
  if (v2 == 0) {
    return result;
  }
  v3 = *(__int64**)(result + 8);
  v4 = (char*)*v3;
  v5 = (char*)v3[1];
  v6 = (char*)*v3;
  if ((char*)*v3 == v5) {
    goto LABEL_18;
  }
  v7 = v5 - v4 - 8;
  v6 = (char*)*v3;
  if ((~(_BYTE)v7 & 0x18) != 0) {
    v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
    v6 = (char*)*v3;
    while (*(_QWORD*)v6 != v2) {
      v6 += 8;
      if (--v8 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v6 != v5) {
      return result;
    }
    goto LABEL_19;
  }
LABEL_7:
  if (v7 >= 0x18) {
    v6 += 16;
    while (1) {
      if (*((_QWORD*)v6 - 2) == v2) {
        if (v6 - 16 != v5) {
          return result;
        }
        goto LABEL_19;
      }
      if (*((_QWORD*)v6 - 1) == v2) {
        v6 -= 8;
        goto LABEL_18;
      }
      if (*(_QWORD*)v6 == v2) {
        goto LABEL_18;
      }
      if (*((_QWORD*)v6 + 1) == v2) {
        break;
      }
      v9 = v6 + 16;
      v6 += 32;
      if (v9 == v5) {
        goto LABEL_19;
      }
    }
    if (v6 + 8 != v5) {
      return result;
    }
  }
LABEL_19:
  v10 = v3[2];
  if ((unsigned __int64)v5 >= v10) {
    v12 = (char*)(v5 - v4);
    v13 = (v5 - v4) >> 3;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
      GameRoutine_6f93f0();
    }
    v15 = v10 - (_QWORD)v4;
    v16 = fw_memory_g_heap_manager_ptr;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v14;
    }
    if (v17 != 0) {
      if (v17 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v17;
    v20 = (char*)(v5 - v4);
    v21 = (__int64)&v12[v18 + -8 * v13];
    *(_QWORD*)&v12[v18] = v2;
    v11 = (__int64)&v12[v18 + 8];
    result = memcpy(v21, v4, v20);
    *v3 = v21;
    v3[1] = v11;
    v3[2] = v19;
    if (v4 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v22 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v22);
    }
  }
  else {
    *(_QWORD*)v5 = v2;
    v11 = (__int64)(v5 + 8);
  }
  v3[1] = v11;
  return result;
}

#pragma GCC visibility pop
