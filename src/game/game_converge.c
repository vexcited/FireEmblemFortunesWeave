#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_GameConverge_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GameConverge_Destructor(_QWORD* a1);
__int64 GameConverge_DeletingDestructor(_QWORD* a1);
__int64 GameRecord_99d540(_QWORD);
__int64 GameRoutine_130a9a0(_QWORD, _QWORD);
__int64 GameRoutine_130b1a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1327310(void);
__int64 GameRoutine_6c3980(_QWORD, _QWORD);
__int64 GameRoutine_6d86a0(_QWORD, _QWORD);
__int64 GameRoutine_7152e0(_QWORD);
__int64 GameRoutine_8305a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_89b540(__int64);
__int64 GameRoutine_8e61e0(__int64, __int64);
__int64 GameRoutine_8e7ec0(__int64 result, unsigned int, int);
__int64 GameRoutine_8ee960(_QWORD, _QWORD);
__int64 GameRoutine_8ef040(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8f31e0(_QWORD, _QWORD);
__int64 GameRoutine_99d700(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 GameRoutine_ae07e0(_QWORD);
__int64 GameVariable_8272a0(_QWORD);
__int64 Impl_718440(void);
__int64 RidePool_93bb80(_QWORD);
__int64 SideStoryFile_12ae4c0(_QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 UnitHeroes_6daf00(_QWORD);
__int64 Unit_6db740(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitPool_Find_6eac40(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_Unit_Unknown6c46e0(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1aed5ad;
extern _UNKNOWN* game_g_hero_ids;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_1fabaa0[])();
extern __int64 (*GameData_1fabb20[])();
extern __int64 (*GameData_1fabe10[])();
extern __int64 (*GameData_1fabf20[])();
extern __int64 (*GameData_1fac220[])();
extern __int64 GameData_21c6980;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9a78;
extern __int64 GameData_21c9a80;
extern __int64 GameData_21ca310;
extern __int64 GameData_21d9f90;
extern __int64 GameData_21d9f98;
extern __int64 GameData_21d9fa8;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c780;
extern char GameData_1a9f09e;
extern int GameData_21d8810;
struct PseudoSret GameRoutine_936f60(_QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_93c6a0(_QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
void __attribute__((noreturn)) GameRoutine_740050(void);
void __attribute__((noreturn)) GameRoutine_8f2260(void);
__int64 GameConverge_8e7ca0(__int64 a1, unsigned __int64* a2);
__int64 GameConverge_8e7dc0(__int64 result);
_QWORD* game_GameConverge_Impl_GetUnitList(__int64 a1, _QWORD* a2,
                                           unsigned int a3, int a4);
__int64 game_GameConverge_Impl_Commit(__int64 result, __int64* a2);
__int64 game_GameConverge_Impl_CommonInfo_MergeRelay(__int64 a1);
__int64 GameConverge_8ea270(__int64 a1, unsigned int a2, __int64 a3);
__int64 GameConverge_8eeec0(__int64 result, unsigned int a2, int a3);
__int64 GameConverge_8ef7c0(__int64 result);
__int64 GameConverge_8ef980(__int64 a1);
__int64 GameConverge_8eff50(__int64 result, __int16* a2);
__int64 GameConverge_8f0c60(__int64 a1, __int64 a2);
_QWORD* game_GameConverge_Impl_RouteInfo_ResetReceived_closure_Invoke_8f1450(
    __int64 a1, __int64 a2);
_QWORD* game_GameConverge_Impl_RouteInfo_ResetReceived_closure_Invoke_8f1580(
    __int64 a1, __int64 a2);
__int64
game_GameConverge_Impl_CommitStartBind_closure_Invoke_8f16a0(__int64 a1,
                                                             _QWORD* a2);
unsigned __int64 game_GameConverge_Impl_CommitStartBind_closure_Invoke_8f17c0(
    __int64 a1, unsigned __int8* a2);
_QWORD* GameConverge_8f2280(_QWORD* a1, __int64* a2);
_QWORD* GameConverge_8f23a0(_QWORD* result);
_QWORD* GameConverge_8f24c0(_QWORD* a1, __int64* a2);
_QWORD* game_GameConverge_Impl_CommitEndBind_closure_Destructor(_QWORD* a1);
_QWORD* game_GameConverge_Impl_CommitEndBind_closure_Clone(__int64 a1);
_QWORD* game_GameConverge_Impl_CommitEndBind_closure_Destroy(__int64 a1);
__int64 game_GameConverge_Impl_TryJoin_closure_Invoke(__int64 a1, _QWORD* a2);
__int64 game_GameConverge_Impl_TryJoin_closure0_Invoke(__int64 a1, __int64* a2);
__int64 game_GameConverge_Impl_GetUnitList_closure_Invoke(__int64 result,
                                                          __int64* a2);
__int64
game_GameConverge_Impl_EachCompleted_closure_Invoke(__int64 result,
                                                    unsigned __int8* a2);
__int64 GameRoutine_89b540_alt1(_QWORD) __asm__("GameRoutine_89b540");
__int64 LegionPool_9374e0(_QWORD, _QWORD);
__int64 RidePool_93cc20(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_1fabba0[])();
extern __int64 (*GameData_1fabc20[])();
extern __int64 (*GameData_1fabca0[])();
extern __int64* GameData_212dd88[5];
extern __int64* GameData_212dda8;
__int64 game_GameConverge_Impl_RouteInfo_ResetReceived(_QWORD* a1);
__int64
game_GameConverge_Impl_CommitEndBind_closure_DeletingDestructor(_QWORD* a1);
__int64
game_GameConverge_Impl_GetMaxMergeCount_closure_Invoke(__int64 result,
                                                       unsigned __int8* a2);
__int64
game_GameConverge_Impl_GetMaxClearDifficulty_closure_Invoke(__int64 result,
                                                            _BYTE* a2);

__int64 GameConverge_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_GameConverge_vtable;
  result = a1[1];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[1] = 0;
  }
  return result;
}

__int64 GameConverge_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_GameConverge_vtable;
  v2 = a1[1];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1] = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

__int64 GameConverge_8e7ca0(__int64 a1, unsigned __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64*** v9;
  __int64** v10;
  unsigned __int64 v11;
  __int64* v12;

  v2 = 1;
  while (1) {
    if (a2 != nullptr) {
      v3 = (_QWORD*)(a1 + 256 + 216 * v2);
      v4 = v3[4];
      if (v4 != 0 && v3[6] != 0) {
        v6 = *a2;
        v7 = v4 - 1;
        if ((v4 & (v4 - 1)) != 0) {
          v8 = *a2;
          if (v6 >= v4) {
            v8 = v6 % v4;
          }
        }
        else {
          v8 = v7 & v6;
        }
        v9 = *(__int64****)(v3[3] + 8 * v8);
        if (v9 != nullptr) {
          v10 = *v9;
          if (v10 != nullptr) {
            break;
          }
        }
      }
    }
  LABEL_3:
    if (++v2 == 10) {
      return 0;
    }
  }
  if ((v4 & v7) == 0) {
    while (1) {
      v12 = v10[1];
      if ((__int64*)v6 == v12) {
        if (v10[2] == (__int64*)v6) {
          goto LABEL_2;
        }
      }
      else if (((unsigned __int64)v12 & v7) != v8) {
        goto LABEL_3;
      }
      v10 = (__int64**)*v10;
      if (v10 == nullptr) {
        goto LABEL_3;
      }
    }
  }
  while (1) {
    v11 = (unsigned __int64)v10[1];
    if (v6 == v11) {
      break;
    }
    if (v11 >= v4) {
      v11 %= v4;
    }
    if (v11 != v8) {
      goto LABEL_3;
    }
  LABEL_18:
    v10 = (__int64**)*v10;
    if (v10 == nullptr) {
      goto LABEL_3;
    }
  }
  if (v10[2] != (__int64*)v6) {
    goto LABEL_18;
  }
LABEL_2:
  if (((_DWORD)v10[3] & 0x80000000) != 0) {
    goto LABEL_3;
  }
  return 1;
}

__int64 GameConverge_8e7dc0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  char v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  char v17;
  char v18;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(*GameData_212c780 + 8);
  v3 = *(__int64**)(v2 + 48);
  v4 = *(__int64**)(v2 + 56);
  while (v3 != v4) {
    v5 = *v3;
    if (*v3 != 0) {
      v16 = *(_DWORD*)(v5 + 96);
      v6 = *(_BYTE*)(v5 + 176);
      v7 = *(_BYTE*)(v5 + 178);
      v17 = v6;
      v18 = v7;
      result = GameRoutine_8ee960(v1 + 8, &v16);
    }
    ++v3;
  }
  if (game_GameModeData_instance_ != 0) {
    v8 = *(_QWORD*)(game_GameModeData_instance_ + 160);
    if (v8 != 0) {
      v9 = *(_QWORD*)(v1 + 184);
      v11 = *(_QWORD*)(v9 + 8);
      v10 = *(_QWORD*)(v9 + 16);
      if (v10 != v11 && v10 - v11 == *(_QWORD*)(v8 + 16) - *(_QWORD*)(v8 + 8)) {
        v13 = 4;
        v14 = 0;
        do {
          v15 = *(_DWORD*)(*(_QWORD*)(v8 + 8) + v13);
          if (*(_DWORD*)(v11 + v13) < v15) {
            *(_DWORD*)(v11 + v13) = v15;
            v11 = *(_QWORD*)(v9 + 8);
            v10 = *(_QWORD*)(v9 + 16);
          }
          ++v14;
          v13 += 32;
        } while (v14 < (v10 - v11) >> 5);
      }
    }
  }
  return result;
}

_QWORD* game_GameConverge_Impl_GetUnitList(__int64 a1, _QWORD* a2,
                                           unsigned int a3, int a4)
{
  __int64 v4;
  __int64 v5;
  _QWORD* i;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* result;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  _QWORD v43[4];
  _QWORD* v44;
  __int64 v45;

  v4 = a2[1];
  v5 = a2[2];
  for (i = a2; v5 != v4; v5 -= 16) {
    v10 = *(_QWORD*)(v5 - 8);
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  v11 = i[7];
  i[2] = v4;
  if (v11 != 0) {
    a2 = (_QWORD*)i[6];
    if (a2 != nullptr) {
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)*a2;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14);
        a2 = v13;
      } while (v13 != nullptr);
    }
    v15 = i[5];
    i[6] = 0;
    if (v15 != 0) {
      v16 = v15 & 7;
      if (v15 >= 8) {
        v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
        v17 = 0;
        do {
          *(_QWORD*)(i[4] + 8 * v17) = 0;
          *(_QWORD*)(i[4] + 8 * v17 + 8) = 0;
          *(_QWORD*)(i[4] + 8 * v17 + 16) = 0;
          *(_QWORD*)(i[4] + 8 * v17 + 24) = 0;
          *(_QWORD*)(i[4] + 8 * v17 + 32) = 0;
          *(_QWORD*)(i[4] + 8 * v17 + 40) = 0;
          *(_QWORD*)(i[4] + 8 * v17 + 48) = 0;
          v19 = i[4] + 8 * v17;
          v17 += 8;
          *(_QWORD*)(v19 + 56) = 0;
        } while (v18 != v17);
      }
      else {
        v17 = 0;
      }
      if (v16 != 0) {
        v20 = 8 * v17;
        do {
          --v16;
          *(_QWORD*)(i[4] + v20) = 0;
          v20 += 8;
        } while (v16 != 0);
      }
    }
    i[7] = 0;
  }
  v21 = *(_QWORD*)(a1 + 8);
  v22 = v43;
  v44 = v43;
  v23 = *(_QWORD*)(v21 + 2416);
  v43[0] = GameData_1fac220;
  v43[1] = v21;
  *(_QWORD*)(v21 + 2424) = v23;
  v24 = v21 + 216LL * (unsigned __int8)a3;
  v25 = *(_QWORD*)(v24 + 256);
  v26 = *(_QWORD*)(v24 + 264);
  if (v25 == v26) {
    goto LABEL_29;
  }
  do {
    v27 = v44;
    v45 = v25;
    if (v44 == nullptr) {
    LABEL_50:
      GameRoutine_60a310(v27, a2);
    }
    (*(void (**)(_QWORD*, __int64*))(*v44 + 48LL))(v44, &v45);
    v25 += 2224;
  } while (v25 != v26);
  v22 = v44;
  if (v44 == v43) {
  LABEL_29:
    v28 = 32;
  }
  else {
    if (v44 == nullptr) {
      goto LABEL_31;
    }
    v28 = 40;
  }
  (*(void (**)(_QWORD*, _QWORD*))(*v22 + v28))(v22, a2);
LABEL_31:
  v29 = *(__int64**)(v21 + 2416);
  v30 = *(__int64**)(v21 + 2424);
  while (v29 != v30) {
    v31 = *v29;
    v32 = GameRoutine_8e61e0((__int64)i, *v29);
    if (v32 != 0) {
      GameRoutine_6c3980(*(_QWORD*)(v32 + 8), v31);
    }
    ++v29;
  }
  GameRoutine_8e7ec0(*(_QWORD*)(a1 + 8), a3, a4);
  v33 = *(_QWORD*)(a1 + 8);
  result = v43;
  v44 = v43;
  v35 = *(_QWORD*)(v33 + 2416);
  v43[0] = GameData_1fac220;
  v43[1] = v33;
  *(_QWORD*)(v33 + 2424) = v35;
  v36 = v33 + 216LL * (unsigned __int8)a3;
  v37 = *(_QWORD*)(v36 + 256);
  v38 = *(_QWORD*)(v36 + 264);
  if (v37 != v38) {
    do {
      v27 = v44;
      v45 = v37;
      if (v44 == nullptr) {
        goto LABEL_50;
      }
      (*(void (**)(_QWORD*, __int64*))(*v44 + 48LL))(v44, &v45);
      v37 += 2224;
    } while (v37 != v38);
    result = v44;
    if (v44 != v43) {
      if (v44 != nullptr) {
        v39 = 40;
      LABEL_43:
        result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(*result + v39))(
            result, a2);
      }
      v40 = *(__int64**)(v33 + 2416);
      v41 = *(__int64**)(v33 + 2424);
      while (v40 != v41) {
        v42 = *v40;
        result = (_QWORD*)GameRoutine_8e61e0((__int64)i, *v40);
        if (result != nullptr) {
          result = (_QWORD*)GameRoutine_6c3980(result[3], v42);
        }
        ++v40;
      }
      return result;
    }
  }
  v39 = 32;
  goto LABEL_43;
}

__int64 game_GameConverge_Impl_Commit(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64** v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned int* v14;
  unsigned int* k;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  bool v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v27;
  __int64* v28;
  __int64 m;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  int v33;
  __int64 v34;
  unsigned int* v35;
  unsigned int* i;
  unsigned int v37;
  unsigned int v38;
  int v39;
  __int64 v40;
  bool v41;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64** v50;
  __int64 j;
  unsigned __int64* v52;
  unsigned __int64 v53;
  char v54;
  __int64 v55;
  unsigned __int64 v56;
  int v57;
  __int64 (**v58)();
  char* v59;
  __int64 (***v60)();
  int v61;

  v2 = result;
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 15) == 9) {
    v4 = *(__int64**)(result + 88);
    result = (__int64)&v58;
    v58 = GameData_1fabaa0;
    v59 = (char*)(game_GameModeData_instance_ + 40);
    v60 = &v58;
    if (v4 == nullptr) {
      goto LABEL_77;
    }
    do {
      v5 = *(_QWORD*)(*(_QWORD*)(v3 + 48) + 3932784LL);
      if (v5 != 0 && *(_QWORD*)(*(_QWORD*)(v3 + 48) + 3932800LL) != 0) {
        v7 = *((unsigned int*)v4 + 4);
        v8 = v5 - 1;
        if ((v5 & (v5 - 1)) != 0) {
          v9 = *((unsigned int*)v4 + 4);
          if (v5 <= v7) {
            v9 = (unsigned int)v7 % (unsigned int)v5;
          }
        }
        else {
          v9 = ((_DWORD)v5 - 1) & (unsigned int)v7;
        }
        v10 =
            *(__int64***)(*(_QWORD*)(*(_QWORD*)(v3 + 48) + 3932776LL) + 8 * v9);
        if (v10 != nullptr) {
          v11 = *v10;
          if (v11 != nullptr) {
            if ((v5 & v8) == 0) {
              while (1) {
                v13 = v11[1];
                if (v13 == v7) {
                  if (*((_DWORD*)v11 + 4) == (_DWORD)v7) {
                    goto LABEL_33;
                  }
                }
                else if ((v13 & v8) != v9) {
                  goto LABEL_5;
                }
                v11 = (__int64*)*v11;
                if (v11 == nullptr) {
                  goto LABEL_5;
                }
              }
            }
            do {
              v12 = v11[1];
              if (v12 == v7) {
                if (*((_DWORD*)v11 + 4) == (_DWORD)v7) {
                LABEL_33:
                  a2 = v11 + 3;
                  if (v11[3] == 0) {
                    goto LABEL_8;
                  }
                  goto LABEL_6;
                }
              }
              else {
                if (v12 >= v5) {
                  v12 %= v5;
                }
                if (v12 != v9) {
                  break;
                }
              }
              v11 = (__int64*)*v11;
            } while (v11 != nullptr);
          }
        }
      }
    LABEL_5:
      a2 = &GameData_21c6980;
      if (GameData_21c6980 != 0) {
      LABEL_6:
        v61 = *((_DWORD*)v4 + 5);
        if (v60 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        ((void (*)(__int64 (***)()))(*v60)[6])(v60);
      }
    LABEL_8:
      v4 = (__int64*)*v4;
    } while (v4 != nullptr);
    result = (__int64)v60;
    if (v60 == &v58) {
    LABEL_77:
      v34 = 32;
    }
    else {
      if (v60 == nullptr) {
      LABEL_79:
        v35 = *(unsigned int**)(v2 + 8);
        for (i = *(unsigned int**)(v2 + 16); v35 != i; v35 += 2) {
          v59 = &GameData_1a9f09e;
          v58 = (__int64 (**)())*v35;
          result = SpotMgr_132ffa0(&v58);
          if (result != 0) {
            v37 = *(unsigned __int8*)(result + 176);
            v38 = *((unsigned __int8*)v35 + 4);
            if (v38 <= v37) {
              v39 = *(unsigned __int8*)(result + 176);
            }
            else {
              v39 = *((unsigned __int8*)v35 + 4);
            }
            if (v37 < v38) {
              v40 = *(_QWORD*)(result + 120);
              v41 = v39 == 1 || v40 == 0;
              if (v41 || (*(_WORD*)(v40 + 258) & 0x80) == 0) {
                *(_BYTE*)(result + 176) = v39;
                if (v39 == 2) {
                  *(_BYTE*)(result + 177) = 3;
                }
                if (v39 != 1 && v40 != 0) {
                  v43 = result;
                  v44 = (_QWORD*)GameRoutine_ae07e0(v40);
                  result = v43;
                  if (*v44 != 0) {
                    game_VariableManager_SetFlag(v44, 1);
                    result = v43;
                  }
                }
              }
            }
            *(_BYTE*)(result + 178) =
                (*(_BYTE*)(result + 178) | *((_BYTE*)v35 + 5)) & 0xFD;
          }
        }
        v45 = *(_QWORD*)(v2 + 184);
        if (v45 != 0) {
          v46 = *(_QWORD*)(game_GameModeData_instance_ + 160);
          v48 = *(_QWORD*)(v46 + 8);
          v47 = *(_QWORD*)(v46 + 16);
          if (v47 != v48 &&
              v47 - v48 == *(_QWORD*)(v45 + 16) - *(_QWORD*)(v45 + 8)) {
            v55 = 4;
            v56 = 0;
            do {
              v57 = *(_DWORD*)(*(_QWORD*)(v45 + 8) + v55);
              if (*(_DWORD*)(v48 + v55) < v57) {
                *(_DWORD*)(v48 + v55) = v57;
                v48 = *(_QWORD*)(v46 + 8);
                v47 = *(_QWORD*)(v46 + 16);
              }
              ++v56;
              v55 += 32;
            } while (v56 < (v47 - v48) >> 5);
          }
        }
        v50 = (unsigned __int64**)GameData_21c9a78;
        for (j = GameData_21c9a80; v50 != (unsigned __int64**)j;
             result = game_VariableManager_SetFlag(v53 + 1432, v54 & 1)) {
          v52 = *v50++;
          v53 = v52[3];
          v54 = GameConverge_8e7ca0(v2, v52);
        }
        return result;
      }
      v34 = 40;
    }
    result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result + v34))(
        result, a2);
    goto LABEL_79;
  }
  v14 = *(unsigned int**)(result + 8);
  for (k = *(unsigned int**)(result + 16); v14 != k; v14 += 2) {
    v59 = &GameData_1a9f09e;
    v58 = (__int64 (**)())*v14;
    result = SpotMgr_132ffa0(&v58);
    if (result != 0) {
      v16 = result;
      result = GameRoutine_1327310();
      if ((result & 1) == 0) {
        v17 = *(unsigned __int8*)(v16 + 176);
        v18 = *((unsigned __int8*)v14 + 4);
        if (v18 <= v17) {
          v19 = *(unsigned __int8*)(v16 + 176);
        }
        else {
          v19 = *((unsigned __int8*)v14 + 4);
        }
        if (v17 < v18) {
          result = *(_QWORD*)(v16 + 120);
          v20 = v19 == 1 || result == 0;
          if (v20 || (*(_WORD*)(result + 258) & 0x80) == 0) {
            *(_BYTE*)(v16 + 176) = v19;
            if (v19 == 2) {
              *(_BYTE*)(v16 + 177) = 3;
            }
            if (v19 != 1 && result != 0) {
              result = ((__int64 (*)(void))GameRoutine_ae07e0)();
              if (*(_QWORD*)result != 0) {
                result = game_VariableManager_SetFlag(result, 1);
              }
            }
          }
        }
        *(_BYTE*)(v16 + 178) =
            (*(_BYTE*)(v16 + 178) | *((_BYTE*)v14 + 5)) & 0xFD;
      }
    }
  }
  v22 = *(_QWORD*)(v2 + 184);
  if (v22 != 0) {
    v23 = *(_QWORD*)(game_GameModeData_instance_ + 160);
    v25 = *(_QWORD*)(v23 + 8);
    v24 = *(_QWORD*)(v23 + 16);
    if (v24 != v25 && v24 - v25 == *(_QWORD*)(v22 + 16) - *(_QWORD*)(v22 + 8)) {
      v31 = 4;
      v32 = 0;
      do {
        v33 = *(_DWORD*)(*(_QWORD*)(v22 + 8) + v31);
        if (*(_DWORD*)(v25 + v31) < v33) {
          *(_DWORD*)(v25 + v31) = v33;
          v25 = *(_QWORD*)(v23 + 8);
          v24 = *(_QWORD*)(v23 + 16);
        }
        ++v32;
        v31 += 32;
      } while (v32 < (v24 - v25) >> 5);
    }
  }
  if (*(_BYTE*)(v2 + 168) == 0) {
    v27 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v27 = *(_BYTE*)(game_GameModeData_instance_ + 15);
    }
    *(_BYTE*)(v2 + 168) = v27;
  }
  v28 = (__int64*)GameData_21c9a78;
  for (m = GameData_21c9a80; v28 != (__int64*)m;
       result =
           game_VariableManager_SetFlag(*(_QWORD*)(v30 + 24) + 1432LL, 0)) {
    v30 = *v28++;
  }
  return result;
}

__int64 game_GameConverge_Impl_CommonInfo_MergeRelay(__int64 a1)
{
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  int v38;
  unsigned int v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  __int64 v46;
  unsigned int v47;
  unsigned int v48;
  __int64 v49;
  unsigned int v50;
  unsigned int v51;
  __int64 v52;
  unsigned int v53;
  unsigned int v54;
  __int64 v55;
  unsigned int v56;
  unsigned int v57;
  __int64 v58;
  unsigned int v59;
  unsigned int v60;
  __int64 v61;
  unsigned int v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64* v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  char v80;
  char v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v86;
  unsigned __int64 v87;
  int v88;
  __int64 (***v89)();
  __int64 v90;
  __int64* v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  unsigned int v96;
  __int64 (**v97)();
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 (***v101)();
  int v102;
  __int64 v103;
  __int64 v104;

  if (game_GameModeData_instance_ != 0) {
    v2 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    v3 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  }
  else {
    v2 = 0;
    v3 = 0;
  }
  *(_BYTE*)(*(_QWORD*)(a1 + 8) + 160LL) = v2;
  *(_DWORD*)(*(_QWORD*)(a1 + 8) + 164LL) = v3;
  v4 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v4 + 160) != 0) {
    v5 = *(_DWORD*)(v4 + 164);
    v6 = 216LL * *(unsigned __int8*)(v4 + 160);
    v7 = 432;
    if (v5 == 2) {
      v7 = 436;
    }
    v8 = v4 + v7;
    v9 = v4 + v6;
    v10 = *(_DWORD*)(v8 + v6);
    if (v10 >= 99) {
      v10 = 99;
    }
    v11 = v10 + 1;
    if (v5 == 2) {
      *(_DWORD*)(v9 + 436) = v11;
    }
    else {
      *(_DWORD*)(v9 + 432) = v11;
    }
  }
  v12 = GameRoutine_9a28e0(44);
  if (game_GameModeData_instance_ == 0 ||
      (v13 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v12)) == 0 ||
      *(_DWORD*)(v13 + 32) == 0) {
    v14 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      v15 = v14 + 216LL * v2;
      if (v3 == 2) {
        v16 = *(unsigned __int8*)(v15 + 441);
        v17 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_22;
        }
      LABEL_20:
        v18 = *(unsigned __int8*)(v17 + 13);
        LODWORD(v17) = *(unsigned __int8*)(v17 + 14);
      LABEL_23:
        if (v18 >= (unsigned int)v17 && v18 != 3 || (_DWORD)v17 == 3) {
          v18 = v17;
        }
        if ((v18 < v16 || v18 == 3) && v16 != 3) {
          LOBYTE(v18) = v16;
        }
        if (v2 != 0) {
          v23 = 216LL * v2;
          v24 = v14 + v23;
          if (v3 == 2) {
            *(_BYTE*)(v24 + 441) = v18;
            *(_DWORD*)(*(_QWORD*)(a1 + 8) + v23 + 468) = GameData_21d8810;
          }
          else {
            *(_BYTE*)(v24 + 440) = v18;
            *(_DWORD*)(*(_QWORD*)(a1 + 8) + v23 + 464) = GameData_21d8810;
          }
        }
        goto LABEL_44;
      }
      v16 = *(unsigned __int8*)(v15 + 440);
      v17 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_20;
      }
    }
    else {
      v16 = 3;
      v17 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_20;
      }
    }
  LABEL_22:
    v18 = 0;
    goto LABEL_23;
  }
LABEL_44:
  v25 = GameRoutine_9a28e0(44);
  if (game_GameModeData_instance_ == 0 ||
      (v26 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v25)) == 0 ||
      *(_DWORD*)(v26 + 32) == 0) {
    v28 = *(_QWORD**)(a1 + 8);
    if (game_GameModeData_instance_ != 0) {
      v29 = game_GameModeData_instance_ + 104;
    }
    else {
      v29 = 0;
    }
    GameRoutine_99d700(v28[27 * v2 + 57], v3, v29);
    if (v3 - 1 <= 1) {
      v30 = v28[84];
      v31 = 8;
      if (v3 != 1) {
        v31 = 9;
      }
      v32 = &v28[27 * v2];
      v33 = *(char*)(v32[57] + v31);
      v34 = *(char*)(v30 + 8);
      if (v33 < 0) {
        v36 = *(unsigned __int8*)(v30 + 9);
        v37 = v28[219];
        v38 = ((v36 >> 7) ^ 1) + ((v34 & 0x80) == 0) +
              ((*(unsigned __int8*)(v28[111] + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v28[111] + 9LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v28[138] + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v28[138] + 9LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v28[165] + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v28[165] + 9LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v28[192] + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v28[192] + 9LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v37 + 8) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v37 + 9) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v28[246] + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v28[246] + 9LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v28[273] + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v28[273] + 9LL) >> 7) ^ 1);
        v35 = v38 + ((*(unsigned __int8*)(v28[300] + 8LL) >> 7) ^ 1) +
              ((*(unsigned __int8*)(v28[300] + 9LL) >> 7) ^ 1);
      }
      else {
        if (v34 <= 0) {
          LOBYTE(v35) = 0;
        }
        else {
          if ((unsigned __int8)v33 < (unsigned int)(unsigned __int8)v34) {
            *(_BYTE*)(v30 + 8) = v34 - 1;
            v30 = v28[84];
          }
          LOBYTE(v35) = 1;
        }
        if (*(char*)(v30 + 9) >= 1) {
          v39 = *(unsigned __int8*)(v30 + 9);
          if (v39 > (unsigned __int8)v33) {
            *(_BYTE*)(v30 + 9) = v39 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v40 = v28[111];
        if (*(char*)(v40 + 8) >= 1) {
          v41 = *(unsigned __int8*)(v40 + 8);
          if (v41 > (unsigned __int8)v33) {
            *(_BYTE*)(v40 + 8) = v41 - 1;
            v40 = v28[111];
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v40 + 9) >= 1) {
          v42 = *(unsigned __int8*)(v40 + 9);
          if (v42 > (unsigned __int8)v33) {
            *(_BYTE*)(v40 + 9) = v42 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v43 = v28[138];
        if (*(char*)(v43 + 8) >= 1) {
          v44 = *(unsigned __int8*)(v43 + 8);
          if (v44 > (unsigned __int8)v33) {
            *(_BYTE*)(v43 + 8) = v44 - 1;
            v43 = v28[138];
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v43 + 9) >= 1) {
          v45 = *(unsigned __int8*)(v43 + 9);
          if (v45 > (unsigned __int8)v33) {
            *(_BYTE*)(v43 + 9) = v45 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v46 = v28[165];
        if (*(char*)(v46 + 8) >= 1) {
          v47 = *(unsigned __int8*)(v46 + 8);
          if (v47 > (unsigned __int8)v33) {
            *(_BYTE*)(v46 + 8) = v47 - 1;
            v46 = v28[165];
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v46 + 9) >= 1) {
          v48 = *(unsigned __int8*)(v46 + 9);
          if (v48 > (unsigned __int8)v33) {
            *(_BYTE*)(v46 + 9) = v48 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v49 = v28[192];
        if (*(char*)(v49 + 8) >= 1) {
          v50 = *(unsigned __int8*)(v49 + 8);
          if (v50 > (unsigned __int8)v33) {
            *(_BYTE*)(v49 + 8) = v50 - 1;
            v49 = v28[192];
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v49 + 9) >= 1) {
          v51 = *(unsigned __int8*)(v49 + 9);
          if (v51 > (unsigned __int8)v33) {
            *(_BYTE*)(v49 + 9) = v51 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v52 = v28[219];
        if (*(char*)(v52 + 8) >= 1) {
          v53 = *(unsigned __int8*)(v52 + 8);
          if (v53 > (unsigned __int8)v33) {
            *(_BYTE*)(v52 + 8) = v53 - 1;
            v52 = v28[219];
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v52 + 9) >= 1) {
          v54 = *(unsigned __int8*)(v52 + 9);
          if (v54 > (unsigned __int8)v33) {
            *(_BYTE*)(v52 + 9) = v54 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v55 = v28[246];
        if (*(char*)(v55 + 8) >= 1) {
          v56 = *(unsigned __int8*)(v55 + 8);
          if (v56 > (unsigned __int8)v33) {
            *(_BYTE*)(v55 + 8) = v56 - 1;
            v55 = v28[246];
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v55 + 9) >= 1) {
          v57 = *(unsigned __int8*)(v55 + 9);
          if (v57 > (unsigned __int8)v33) {
            *(_BYTE*)(v55 + 9) = v57 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v58 = v28[273];
        if (*(char*)(v58 + 8) >= 1) {
          v59 = *(unsigned __int8*)(v58 + 8);
          if (v59 > (unsigned __int8)v33) {
            *(_BYTE*)(v58 + 8) = v59 - 1;
            v58 = v28[273];
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v58 + 9) >= 1) {
          v60 = *(unsigned __int8*)(v58 + 9);
          if (v60 > (unsigned __int8)v33) {
            *(_BYTE*)(v58 + 9) = v60 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
        v61 = v28[300];
        if (*(char*)(v61 + 8) >= 1) {
          v62 = *(unsigned __int8*)(v61 + 8);
          if (v62 > (unsigned __int8)v33) {
            *(_BYTE*)(v61 + 8) = v62 - 1;
            v61 = v28[300];
          }
          LOBYTE(v35) = v35 + 1;
        }
        if (*(char*)(v61 + 9) >= 1) {
          v63 = *(unsigned __int8*)(v61 + 9);
          if (v63 > (unsigned __int8)v33) {
            *(_BYTE*)(v61 + 9) = v63 - 1;
          }
          LOBYTE(v35) = v35 + 1;
        }
      }
      v64 = v32[57];
      if (v3 == 1) {
        *(_BYTE*)(v64 + 8) = v35;
      }
      else {
        *(_BYTE*)(v64 + 9) = v35;
      }
    }
    LODWORD(v97) = 241;
    v65 = game_UnitPool_GetFirst(&v97);
    if (v65 != 0) {
      v66 = *(_QWORD*)(v65 + 432);
      if (v66 == 0) {
        v66 = *(_QWORD*)(v65 + 440);
        if (v66 != 0) {
          v67 = *(unsigned __int8*)(v66 + 16);
          if (v67 <= 8) {
            while (1) {
              v96 = v67 + 1;
              if (((2 << v67) & 0xF0) != 0) {
                v66 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                 24LL * (unsigned __int8)(v67 + 1) + 556000);
                if (v66 != 0) {
                  break;
                }
              }
              v67 = v96;
              if (v96 == 9) {
                goto LABEL_135;
              }
            }
          }
          else {
          LABEL_135:
            v66 = 0;
          }
        }
      }
      v103 = 0;
      v98 = 0;
      v99 = 0;
      v68 = v66;
      v100 = 0;
      v101 = nullptr;
      v102 = 0;
      GameRoutine_130a9a0(&v97, v65);
      GameRoutine_130b1a0(v28[25], v3, &v97);
      if (v68 != 0) {
        v27 = v68;
        do {
          v69 = *(_QWORD*)(v27 + 432);
          if (v69 == 0) {
            v70 = *(_QWORD*)(v27 + 440);
            if (v70 != 0 &&
                (unsigned int)(v71 = *(unsigned __int8*)(v70 + 16)) <= 8) {
              while (1) {
                v72 = v71 + 1;
                if (((2 << v71) & 0xF0) != 0) {
                  v69 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                   24LL * (unsigned __int8)(v71 + 1) + 556000);
                  if (v69 != 0) {
                    break;
                  }
                }
                ++v71;
                if (v72 == 9) {
                  goto LABEL_138;
                }
              }
            }
            else {
            LABEL_138:
              v69 = 0;
            }
          }
          v103 = 0;
          v98 = 0;
          v99 = 0;
          v100 = 0;
          v101 = nullptr;
          v102 = 0;
          GameRoutine_130a9a0(&v97, v27);
          GameRoutine_130b1a0(v28[25], v3, &v97);
          v27 = v69;
        } while (v69 != 0);
      }
    }
  }
  v73 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 15) == 9) {
    return Impl_718440();
  }
  v74 = *(_QWORD*)(a1 + 8);
  v75 = *(_QWORD*)(*GameData_212c780 + 8);
  v76 = *(__int64**)(v75 + 48);
  v77 = *(__int64**)(v75 + 56);
  if (v76 != v77) {
    do {
      v79 = *v76;
      if (*v76 != 0) {
        LODWORD(v97) = *(_DWORD*)(v79 + 96);
        v80 = *(_BYTE*)(v79 + 176);
        v81 = *(_BYTE*)(v79 + 178);
        BYTE4(v97) = v80;
        BYTE5(v97) = v81;
        GameRoutine_8ee960(v74 + 8, &v97);
      }
      ++v76;
    } while (v76 != v77);
    v73 = game_GameModeData_instance_;
    v78 = *(_QWORD*)(game_GameModeData_instance_ + 160);
    if (v78 == 0) {
      goto LABEL_167;
    }
    goto LABEL_157;
  }
  v78 = *(_QWORD*)(game_GameModeData_instance_ + 160);
  if (v78 != 0) {
  LABEL_157:
    v82 = *(_QWORD*)(v74 + 184);
    v84 = *(_QWORD*)(v82 + 8);
    v83 = *(_QWORD*)(v82 + 16);
    if (v83 != v84 && v83 - v84 == *(_QWORD*)(v78 + 16) - *(_QWORD*)(v78 + 8)) {
      v86 = 4;
      v87 = 0;
      do {
        v88 = *(_DWORD*)(*(_QWORD*)(v78 + 8) + v86);
        if (*(_DWORD*)(v84 + v86) < v88) {
          *(_DWORD*)(v84 + v86) = v88;
          v84 = *(_QWORD*)(v82 + 8);
          v83 = *(_QWORD*)(v82 + 16);
        }
        ++v87;
        v86 += 32;
      } while (v87 < (v83 - v84) >> 5);
      v73 = game_GameModeData_instance_;
    }
  }
LABEL_167:
  v89 = &v97;
  v97 = GameData_1fabb20;
  v98 = v74 + 8;
  v90 = *(_QWORD*)(v73 + 48);
  v101 = &v97;
  v90 += 3932160;
  v91 = *(__int64**)(v90 + 176);
  v92 = *(__int64**)(v90 + 184);
  if (v91 != v92) {
    do {
      v93 = *v91++;
      v104 = v93;
      if (v101 == nullptr) {
        GameRoutine_60a310(0, v27);
      }
      ((void (*)(__int64 (***)(), __int64*))(*v101)[6])(v101, &v104);
    } while (v91 != v92);
    v89 = v101;
    if (v101 != &v97) {
      if (v101 != nullptr) {
        v94 = 5;
      LABEL_174:
        ((void (*)(__int64 (***)(), __int64))(*v89)[v94])(v89, v27);
      }
      return Impl_718440();
    }
  }
  v94 = 4;
  goto LABEL_174;
}

__int64 GameConverge_8ea270(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  int v9;

  if (a3 == 0) {
    return 0;
  }
  v7 = a3;
  v9 = 241;
  if (game_UnitPool_Find_6ead60(&v7, &v9) != 0) {
    return 0;
  }
  if (GameRoutine_8f31e0(a1 + 216LL * (unsigned __int8)a2 + 256, a3) != 0) {
    return 1;
  }
  if (game_GetHero(a2) != a3) {
    return 0;
  }
  v8 = SideStoryFile_12ae4c0(a2);
  v7 = game_HashString(v8);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &v7);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 GameConverge_8eeec0(__int64 result, unsigned int a2, int a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  int v11;
  int v13;
  int v14;
  unsigned int v15;

  v14 = a3;
  v15 = a2;
  if (a3 < 1) {
    return result;
  }
  v3 = *(_QWORD*)(result + 72);
  if (v3 == 0 || *(_QWORD*)(result + 88) == 0) {
    return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = a2;
    if (v3 <= a2) {
      v6 = a2 % (unsigned int)v3;
    }
  }
  else {
    v6 = ((_DWORD)v3 - 1) & a2;
  }
  v7 = *(__int64***)(*(_QWORD*)(result + 64) + 8 * v6);
  if (v7 == nullptr) {
    return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
  }
  v8 = *v7;
  if (*v7 == nullptr) {
    return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v10 = v8[1];
      if (v10 == a2) {
        if (*((_DWORD*)v8 + 4) == a2) {
          goto LABEL_25;
        }
      }
      else if ((v10 & v5) != v6) {
        return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
      }
      v8 = (__int64*)*v8;
      if (v8 == nullptr) {
        return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
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
      return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
    }
  LABEL_15:
    v8 = (__int64*)*v8;
    if (v8 == nullptr) {
      return GameRoutine_8ef040(result + 64, &v15, &v15, &v14);
    }
  }
  if (*((_DWORD*)v8 + 4) != a2) {
    goto LABEL_15;
  }
LABEL_25:
  v11 = *((_DWORD*)v8 + 5);
  result = GameVariable_8272a0(game_GameModeData_instance_ + 40);
  if (result != 0) {
    if (v11 <= a3) {
      v13 = a3;
    }
    else {
      v13 = v11;
    }
    if (*(_BYTE*)(result + 18) != 0) {
      v11 = a3;
    }
    else {
      v11 = v13;
    }
  }
  *((_DWORD*)v8 + 5) = v11;
  return result;
}

__int64 GameConverge_8ef7c0(__int64 result)
{
  __int64* v1;
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
  __int64 v13;
  unsigned __int64 v14;
  void* v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64* v19;

  v1 = (__int64*)result;
  if (*(_QWORD*)(result + 48) != 0) {
    v2 = *(_QWORD**)(result + 40);
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
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
        v2 = v4;
      } while (v4 != nullptr);
    }
    v6 = v1[4];
    v1[5] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(v1[3] + 8 * v8) = 0;
          *(_QWORD*)(v1[3] + 8 * v8 + 8) = 0;
          *(_QWORD*)(v1[3] + 8 * v8 + 16) = 0;
          *(_QWORD*)(v1[3] + 8 * v8 + 24) = 0;
          *(_QWORD*)(v1[3] + 8 * v8 + 32) = 0;
          *(_QWORD*)(v1[3] + 8 * v8 + 40) = 0;
          *(_QWORD*)(v1[3] + 8 * v8 + 48) = 0;
          v10 = v1[3] + 8 * v8;
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
          *(_QWORD*)(v1[3] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    v1[6] = 0;
  }
  v12 = *v1;
  if (v1[1] != *v1) {
    v13 = 392;
    v14 = 0;
    v15 = std___1_piecewise_construct_ptr;
    do {
      v16 = **(_QWORD**)(v12 + v13);
      v19 = &v17;
      v17 = v16;
      result = GameRoutine_8305a0(v1 + 3, &v17, v15, &v19, &v18);
      *(_DWORD*)(result + 24) = v14++;
      v13 += 2224;
      v12 = *v1;
    } while (0x3AEF6CA970586723LL * ((v1[1] - *v1) >> 4) > v14);
  }
  return result;
}

__int64 GameConverge_8ef980(__int64 a1)
{
  __int64 v1;
  void (***v2)(_QWORD);
  void (***v4)(_QWORD);
  bool v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 i;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 j;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 result;

  v2 = *(void (****)(_QWORD))a1;
  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)a1 != v1) {
    v4 = (void (***)(_QWORD))(v1 - 2224);
    do {
      (**v4)(v4);
      v5 = v4 == v2;
      v4 -= 278;
    } while (!v5);
  }
  v6 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 8) = v2;
  if (v6 != 0) {
    v7 = *(_QWORD**)(a1 + 40);
    if (v7 != nullptr) {
      v8 = fw_memory_g_heap_manager_ptr;
      do {
        v9 = (_QWORD*)*v7;
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v10);
        v7 = v9;
      } while (v9 != nullptr);
    }
    v11 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = 0;
    if (v11 != 0) {
      v12 = v11 & 7;
      if (v11 >= 8) {
        v14 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v13 + 48) = 0;
          v15 = *(_QWORD*)(a1 + 24) + 8 * v13;
          v13 += 8;
          *(_QWORD*)(v15 + 56) = 0;
        } while (v14 != v13);
      }
      else {
        v13 = 0;
      }
      if (v12 != 0) {
        v16 = 8 * v13;
        do {
          --v12;
          *(_QWORD*)(*(_QWORD*)(a1 + 24) + v16) = 0;
          v16 += 8;
        } while (v12 != 0);
      }
    }
    *(_QWORD*)(a1 + 48) = 0;
  }
  v17 = *(_QWORD*)(a1 + 80);
  *(_DWORD*)(a1 + 64) = 0;
  GameRoutine_89b540(v17);
  RidePool_93bb80(*(_QWORD*)(a1 + 96));
  v18 = *(_QWORD*)(a1 + 112);
  for (i = -2400; i != 0; i += 160) {
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(v18 + 48) + i + 2544) = 0;
    v20 = *(_QWORD*)(v18 + 48) + i;
    *(_QWORD*)(v20 + 2552) = 0;
  }
  if (*(_QWORD*)(v18 + 32) != 0) {
    v21 = *(_QWORD**)(v18 + 24);
    if (v21 != nullptr) {
      v22 = fw_memory_g_heap_manager_ptr;
      do {
        v23 = (_QWORD*)*v21;
        if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v24);
        v21 = v23;
      } while (v23 != nullptr);
    }
    v25 = *(_QWORD*)(v18 + 16);
    *(_QWORD*)(v18 + 24) = 0;
    if (v25 != 0) {
      v26 = v25 & 7;
      if (v25 >= 8) {
        v28 = v25 & 0xFFFFFFFFFFFFFFF8LL;
        v27 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27) = 0;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + 8 * v27 + 48) = 0;
          v29 = *(_QWORD*)(v18 + 8) + 8 * v27;
          v27 += 8;
          *(_QWORD*)(v29 + 56) = 0;
        } while (v28 != v27);
      }
      else {
        v27 = 0;
      }
      if (v26 != 0) {
        v30 = 8 * v27;
        do {
          --v26;
          *(_QWORD*)(*(_QWORD*)(v18 + 8) + v30) = 0;
          v30 += 8;
        } while (v26 != 0);
      }
    }
    *(_QWORD*)(v18 + 32) = 0;
  }
  *(_DWORD*)(v18 + 72) = 0;
  GameRoutine_89b540(*(_QWORD*)(a1 + 128));
  RidePool_93bb80(*(_QWORD*)(a1 + 144));
  v31 = *(_QWORD*)(a1 + 160);
  for (j = -2400; j != 0; j += 160) {
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(v31 + 48) + j + 2544) = 0;
    v33 = *(_QWORD*)(v31 + 48) + j;
    *(_QWORD*)(v33 + 2552) = 0;
  }
  if (*(_QWORD*)(v31 + 32) != 0) {
    v34 = *(_QWORD**)(v31 + 24);
    if (v34 != nullptr) {
      v35 = fw_memory_g_heap_manager_ptr;
      do {
        v36 = (_QWORD*)*v34;
        if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) != 0) {
          v37 = 128;
        }
        else {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v35 + v37);
        v34 = v36;
      } while (v36 != nullptr);
    }
    v38 = *(_QWORD*)(v31 + 16);
    *(_QWORD*)(v31 + 24) = 0;
    if (v38 != 0) {
      v39 = v38 & 7;
      if (v38 >= 8) {
        v41 = v38 & 0xFFFFFFFFFFFFFFF8LL;
        v40 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40) = 0;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + 8 * v40 + 48) = 0;
          v42 = *(_QWORD*)(v31 + 8) + 8 * v40;
          v40 += 8;
          *(_QWORD*)(v42 + 56) = 0;
        } while (v41 != v40);
      }
      else {
        v40 = 0;
      }
      if (v39 != 0) {
        v43 = 8 * v40;
        do {
          --v39;
          *(_QWORD*)(*(_QWORD*)(v31 + 8) + v43) = 0;
          v43 += 8;
        } while (v39 != 0);
      }
    }
    *(_QWORD*)(v31 + 32) = 0;
  }
  *(_DWORD*)(v31 + 72) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_WORD*)(a1 + 184) = 771;
  result = GameRecord_99d540(a1 + 192);
  *(_QWORD*)(a1 + 208) = 0;
  return result;
}

__int64 GameConverge_8eff50(__int64 result, __int16* a2)
{
  __int16 v2;
  __int16 v3;
  __int16 v4;
  __int16 v5;
  __int16 v6;
  __int16 v7;
  __int16 v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  __int16 v13;
  __int16 v14;
  __int16 v15;
  __int16 v16;
  __int16 v17;
  __int16 v18;
  __int16 v19;
  __int16 v20;
  __int16 v21;
  __int16 v22;
  __int16 v23;
  __int16 v24;
  __int16 v25;
  __int16 v26;
  __int16 v27;
  __int16 v28;
  __int16 v29;
  __int16 v30;
  __int16 v31;

  v2 = *a2;
  *(_BYTE*)(result + 2) = *((_BYTE*)a2 + 2);
  *(_WORD*)result = v2;
  *(_BYTE*)(result + 3) = *((_BYTE*)a2 + 3);
  *(_DWORD*)(result + 4) = *((_DWORD*)a2 + 1);
  v3 = a2[4];
  *(_BYTE*)(result + 10) = *((_BYTE*)a2 + 10);
  *(_WORD*)(result + 8) = v3;
  *(_BYTE*)(result + 11) = *((_BYTE*)a2 + 11);
  *(_DWORD*)(result + 12) = *((_DWORD*)a2 + 3);
  v4 = a2[8];
  *(_BYTE*)(result + 18) = *((_BYTE*)a2 + 18);
  *(_WORD*)(result + 16) = v4;
  *(_BYTE*)(result + 19) = *((_BYTE*)a2 + 19);
  *(_DWORD*)(result + 20) = *((_DWORD*)a2 + 5);
  v5 = a2[12];
  *(_BYTE*)(result + 26) = *((_BYTE*)a2 + 26);
  *(_WORD*)(result + 24) = v5;
  *(_BYTE*)(result + 27) = *((_BYTE*)a2 + 27);
  *(_DWORD*)(result + 28) = *((_DWORD*)a2 + 7);
  v6 = a2[16];
  *(_BYTE*)(result + 34) = *((_BYTE*)a2 + 34);
  *(_WORD*)(result + 32) = v6;
  *(_BYTE*)(result + 35) = *((_BYTE*)a2 + 35);
  *(_DWORD*)(result + 36) = *((_DWORD*)a2 + 9);
  v7 = a2[20];
  *(_BYTE*)(result + 42) = *((_BYTE*)a2 + 42);
  *(_WORD*)(result + 40) = v7;
  *(_BYTE*)(result + 43) = *((_BYTE*)a2 + 43);
  *(_DWORD*)(result + 44) = *((_DWORD*)a2 + 11);
  v8 = a2[24];
  *(_BYTE*)(result + 50) = *((_BYTE*)a2 + 50);
  *(_WORD*)(result + 48) = v8;
  *(_BYTE*)(result + 51) = *((_BYTE*)a2 + 51);
  *(_DWORD*)(result + 52) = *((_DWORD*)a2 + 13);
  v9 = a2[28];
  *(_BYTE*)(result + 58) = *((_BYTE*)a2 + 58);
  *(_WORD*)(result + 56) = v9;
  *(_BYTE*)(result + 59) = *((_BYTE*)a2 + 59);
  *(_DWORD*)(result + 60) = *((_DWORD*)a2 + 15);
  v10 = a2[32];
  *(_BYTE*)(result + 66) = *((_BYTE*)a2 + 66);
  *(_WORD*)(result + 64) = v10;
  *(_BYTE*)(result + 67) = *((_BYTE*)a2 + 67);
  *(_DWORD*)(result + 68) = *((_DWORD*)a2 + 17);
  v11 = a2[36];
  *(_BYTE*)(result + 74) = *((_BYTE*)a2 + 74);
  *(_WORD*)(result + 72) = v11;
  *(_BYTE*)(result + 75) = *((_BYTE*)a2 + 75);
  *(_DWORD*)(result + 76) = *((_DWORD*)a2 + 19);
  v12 = a2[40];
  *(_BYTE*)(result + 82) = *((_BYTE*)a2 + 82);
  *(_WORD*)(result + 80) = v12;
  *(_BYTE*)(result + 83) = *((_BYTE*)a2 + 83);
  *(_DWORD*)(result + 84) = *((_DWORD*)a2 + 21);
  v13 = a2[44];
  *(_BYTE*)(result + 90) = *((_BYTE*)a2 + 90);
  *(_WORD*)(result + 88) = v13;
  *(_BYTE*)(result + 91) = *((_BYTE*)a2 + 91);
  *(_DWORD*)(result + 92) = *((_DWORD*)a2 + 23);
  v14 = a2[48];
  *(_BYTE*)(result + 98) = *((_BYTE*)a2 + 98);
  *(_WORD*)(result + 96) = v14;
  *(_BYTE*)(result + 99) = *((_BYTE*)a2 + 99);
  *(_DWORD*)(result + 100) = *((_DWORD*)a2 + 25);
  v15 = a2[52];
  *(_BYTE*)(result + 106) = *((_BYTE*)a2 + 106);
  *(_WORD*)(result + 104) = v15;
  *(_BYTE*)(result + 107) = *((_BYTE*)a2 + 107);
  *(_DWORD*)(result + 108) = *((_DWORD*)a2 + 27);
  v16 = a2[56];
  *(_BYTE*)(result + 114) = *((_BYTE*)a2 + 114);
  *(_WORD*)(result + 112) = v16;
  *(_BYTE*)(result + 115) = *((_BYTE*)a2 + 115);
  *(_DWORD*)(result + 116) = *((_DWORD*)a2 + 29);
  v17 = a2[60];
  *(_BYTE*)(result + 122) = *((_BYTE*)a2 + 122);
  *(_WORD*)(result + 120) = v17;
  *(_BYTE*)(result + 123) = *((_BYTE*)a2 + 123);
  *(_DWORD*)(result + 124) = *((_DWORD*)a2 + 31);
  v18 = a2[64];
  *(_BYTE*)(result + 130) = *((_BYTE*)a2 + 130);
  *(_WORD*)(result + 128) = v18;
  *(_BYTE*)(result + 131) = *((_BYTE*)a2 + 131);
  *(_DWORD*)(result + 132) = *((_DWORD*)a2 + 33);
  v19 = a2[68];
  *(_BYTE*)(result + 138) = *((_BYTE*)a2 + 138);
  *(_WORD*)(result + 136) = v19;
  *(_BYTE*)(result + 139) = *((_BYTE*)a2 + 139);
  *(_DWORD*)(result + 140) = *((_DWORD*)a2 + 35);
  v20 = a2[72];
  *(_BYTE*)(result + 146) = *((_BYTE*)a2 + 146);
  *(_WORD*)(result + 144) = v20;
  *(_BYTE*)(result + 147) = *((_BYTE*)a2 + 147);
  *(_DWORD*)(result + 148) = *((_DWORD*)a2 + 37);
  v21 = a2[76];
  *(_BYTE*)(result + 154) = *((_BYTE*)a2 + 154);
  *(_WORD*)(result + 152) = v21;
  *(_BYTE*)(result + 155) = *((_BYTE*)a2 + 155);
  *(_DWORD*)(result + 156) = *((_DWORD*)a2 + 39);
  v22 = a2[80];
  *(_BYTE*)(result + 162) = *((_BYTE*)a2 + 162);
  *(_WORD*)(result + 160) = v22;
  *(_BYTE*)(result + 163) = *((_BYTE*)a2 + 163);
  *(_DWORD*)(result + 164) = *((_DWORD*)a2 + 41);
  v23 = a2[84];
  *(_BYTE*)(result + 170) = *((_BYTE*)a2 + 170);
  *(_WORD*)(result + 168) = v23;
  *(_BYTE*)(result + 171) = *((_BYTE*)a2 + 171);
  *(_DWORD*)(result + 172) = *((_DWORD*)a2 + 43);
  v24 = a2[88];
  *(_BYTE*)(result + 178) = *((_BYTE*)a2 + 178);
  *(_WORD*)(result + 176) = v24;
  *(_BYTE*)(result + 179) = *((_BYTE*)a2 + 179);
  *(_DWORD*)(result + 180) = *((_DWORD*)a2 + 45);
  v25 = a2[92];
  *(_BYTE*)(result + 186) = *((_BYTE*)a2 + 186);
  *(_WORD*)(result + 184) = v25;
  *(_BYTE*)(result + 187) = *((_BYTE*)a2 + 187);
  *(_DWORD*)(result + 188) = *((_DWORD*)a2 + 47);
  v26 = a2[96];
  *(_BYTE*)(result + 194) = *((_BYTE*)a2 + 194);
  *(_WORD*)(result + 192) = v26;
  *(_BYTE*)(result + 195) = *((_BYTE*)a2 + 195);
  *(_DWORD*)(result + 196) = *((_DWORD*)a2 + 49);
  v27 = a2[100];
  *(_BYTE*)(result + 202) = *((_BYTE*)a2 + 202);
  *(_WORD*)(result + 200) = v27;
  *(_BYTE*)(result + 203) = *((_BYTE*)a2 + 203);
  *(_DWORD*)(result + 204) = *((_DWORD*)a2 + 51);
  v28 = a2[104];
  *(_BYTE*)(result + 210) = *((_BYTE*)a2 + 210);
  *(_WORD*)(result + 208) = v28;
  *(_BYTE*)(result + 211) = *((_BYTE*)a2 + 211);
  *(_DWORD*)(result + 212) = *((_DWORD*)a2 + 53);
  v29 = a2[108];
  *(_BYTE*)(result + 218) = *((_BYTE*)a2 + 218);
  *(_WORD*)(result + 216) = v29;
  *(_BYTE*)(result + 219) = *((_BYTE*)a2 + 219);
  *(_DWORD*)(result + 220) = *((_DWORD*)a2 + 55);
  v30 = a2[112];
  *(_BYTE*)(result + 226) = *((_BYTE*)a2 + 226);
  *(_WORD*)(result + 224) = v30;
  *(_BYTE*)(result + 227) = *((_BYTE*)a2 + 227);
  *(_DWORD*)(result + 228) = *((_DWORD*)a2 + 57);
  v31 = a2[116];
  *(_BYTE*)(result + 234) = *((_BYTE*)a2 + 234);
  *(_WORD*)(result + 232) = v31;
  *(_BYTE*)(result + 235) = *((_BYTE*)a2 + 235);
  *(_DWORD*)(result + 236) = *((_DWORD*)a2 + 59);
  return result;
}

__int64 GameConverge_8f0c60(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v6;
  unsigned __int64 v7;
  __int64 result;
  __int64*** v9;
  __int64** v10;
  unsigned __int64 v11;
  __int64* v12;
  unsigned int v13;

  if (a2 == 0) {
    return 0;
  }
  v4 = game_HashString(*(_QWORD*)(a2 + 8));
  if (GameData_21d9f98 == 0 || GameData_21d9fa8 == 0) {
    goto LABEL_26;
  }
  v6 = GameData_21d9f98 - 1;
  if ((GameData_21d9f98 & (GameData_21d9f98 - 1)) != 0) {
    v7 = v4;
    if (v4 >= GameData_21d9f98) {
      v7 = v4 % GameData_21d9f98;
    }
  }
  else {
    v7 = v6 & v4;
  }
  v9 = *(__int64****)(GameData_21d9f90 + 8 * v7);
  if (v9 == nullptr || (v10 = *v9) == nullptr) {
  LABEL_26:
    v13 = 0;
    goto LABEL_27;
  }
  if ((GameData_21d9f98 & v6) == 0) {
    while (1) {
      v12 = v10[1];
      if (v12 == (__int64*)v4) {
        if (v10[2] == (__int64*)v4) {
          goto LABEL_37;
        }
      }
      else if (((unsigned __int64)v12 & v6) != v7) {
        goto LABEL_26;
      }
      v10 = (__int64**)*v10;
      if (v10 == nullptr) {
        goto LABEL_26;
      }
    }
  }
  while (1) {
    v11 = (unsigned __int64)v10[1];
    if (v11 == v4) {
      break;
    }
    if (v11 >= GameData_21d9f98) {
      v11 %= (unsigned __int64)GameData_21d9f98;
    }
    if (v11 != v7) {
      goto LABEL_26;
    }
  LABEL_16:
    v10 = (__int64**)*v10;
    if (v10 == nullptr) {
      goto LABEL_26;
    }
  }
  if (v10[2] != (__int64*)v4) {
    goto LABEL_16;
  }
LABEL_37:
  v13 = *((unsigned __int8*)v10 + 24);
LABEL_27:
  result = GameRoutine_8f31e0(a1 + 216LL * v13 + 256, a2);
  if (result == 0) {
    result = GameRoutine_8f31e0(a1 + 472, a2);
    if (result == 0) {
      result = GameRoutine_8f31e0(a1 + 688, a2);
      if (result == 0) {
        result = GameRoutine_8f31e0(a1 + 904, a2);
        if (result == 0) {
          result = GameRoutine_8f31e0(a1 + 1120, a2);
          if (result == 0) {
            result = GameRoutine_8f31e0(a1 + 1336, a2);
            if (result == 0) {
              result = GameRoutine_8f31e0(a1 + 1552, a2);
              if (result == 0) {
                result = GameRoutine_8f31e0(a1 + 1768, a2);
                if (result == 0) {
                  result = GameRoutine_8f31e0(a1 + 1984, a2);
                  if (result == 0) {
                    return GameRoutine_8f31e0(a1 + 2200, a2);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 game_GameConverge_Impl_RouteInfo_ResetReceived(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
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
  __int64 result;
  __int64 v16;
  __int64 i;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD v29[4];
  _QWORD* v30;
  _QWORD v31[2];
  _QWORD* v32;
  _QWORD* v33;

  v2 = a1[16];
  v31[0] = GameData_1fabba0;
  v31[1] = a1;
  v3 = v31;
  v33 = v31;
  v4 = *(unsigned int*)(v2 + 80);
  if ((int)v4 < 1) {
    goto LABEL_10;
  }
  v5 = 0;
  v6 = 12 * v4;
  do {
    v7 = *(_QWORD*)(v2 + 8) + v5;
    if (*(_WORD*)(v7 + 2) != 0) {
      if (v33 == nullptr) {
        GameRoutine_60a310(0, v7);
      }
      (*(void (**)(_QWORD*))(*v33 + 48LL))(v33);
    }
    v5 += 12;
  } while (v6 != v5);
  v3 = v33;
  if (v33 == v31) {
  LABEL_10:
    v8 = 32;
  }
  else {
    if (v33 == nullptr) {
      goto LABEL_12;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v3 + v8))((__int64)v3);
LABEL_12:
  v9 = a1[18];
  v29[0] = GameData_1fabc20;
  v29[1] = a1;
  v30 = v29;
  v32 = v29;
  v33 = v31;
  v31[0] = GameData_212dda8 + 2;
  v31[1] = v9;
  RidePool_93cc20(v9, v31);
  if (v33 == v31) {
    v10 = 32;
  }
  else {
    if (v33 == nullptr) {
      goto LABEL_17;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v33 + v10))((__int64)v33);
LABEL_17:
  if (v30 == v29) {
    v11 = 32;
  }
  else {
    if (v30 == nullptr) {
      goto LABEL_22;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v30 + v11))((__int64)v30);
LABEL_22:
  v12 = a1[20];
  v29[0] = GameData_1fabca0;
  v29[1] = a1;
  v30 = v29;
  v32 = v29;
  v33 = v31;
  v31[0] = GameData_212dd88[0] + 2;
  v31[1] = v12;
  LegionPool_9374e0(v12, v31);
  if (v33 == v31) {
    v13 = 32;
  }
  else {
    if (v33 == nullptr) {
      goto LABEL_27;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v33 + v13))((__int64)v33);
LABEL_27:
  if (v30 == v29) {
    v14 = 32;
    goto LABEL_31;
  }
  if (v30 != nullptr) {
    v14 = 40;
  LABEL_31:
    (*(void (**)(__int64))(*v30 + v14))((__int64)v30);
  }
  GameRoutine_89b540_alt1(a1[16]);
  result = RidePool_93bb80(a1[18]);
  v16 = a1[20];
  for (i = -2400; i != 0; i += 160) {
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2400) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2408) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2416) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2424) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2432) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2440) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2448) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2456) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2464) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2472) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2480) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2488) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2496) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2504) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2512) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2520) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2528) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2536) = 0;
    *(_QWORD*)(*(_QWORD*)(v16 + 48) + i + 2544) = 0;
    v18 = *(_QWORD*)(v16 + 48) + i;
    *(_QWORD*)(v18 + 2552) = 0;
  }
  if (*(_QWORD*)(v16 + 32) != 0) {
    v19 = *(_QWORD**)(v16 + 24);
    if (v19 != nullptr) {
      v20 = fw_memory_g_heap_manager_ptr;
      do {
        v21 = (_QWORD*)*v19;
        if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v20 + v22, v19);
        v19 = v21;
      } while (v21 != nullptr);
    }
    v23 = *(_QWORD*)(v16 + 16);
    *(_QWORD*)(v16 + 24) = 0;
    if (v23 != 0) {
      v24 = v23 & 7;
      if (v23 >= 8) {
        v26 = v23 & 0xFFFFFFFFFFFFFFF8LL;
        v25 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v16 + 8) + 8 * v25) = 0;
          *(_QWORD*)(*(_QWORD*)(v16 + 8) + 8 * v25 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v16 + 8) + 8 * v25 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v16 + 8) + 8 * v25 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v16 + 8) + 8 * v25 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v16 + 8) + 8 * v25 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v16 + 8) + 8 * v25 + 48) = 0;
          v27 = *(_QWORD*)(v16 + 8) + 8 * v25;
          v25 += 8;
          *(_QWORD*)(v27 + 56) = 0;
        } while (v26 != v25);
      }
      else {
        v25 = 0;
      }
      if (v24 != 0) {
        v28 = 8 * v25;
        do {
          --v24;
          *(_QWORD*)(*(_QWORD*)(v16 + 8) + v28) = 0;
          v28 += 8;
        } while (v24 != 0);
      }
    }
    *(_QWORD*)(v16 + 32) = 0;
  }
  *(_DWORD*)(v16 + 72) = 0;
  return result;
}

_QWORD*

game_GameConverge_Impl_RouteInfo_ResetReceived_closure_Invoke_8f1450(__int64 a1,
                                                                     __int64 a2)
{
  __int64 v3;

  return (*(struct PseudoSret*)(&v3) = GameRoutine_93c6a0(
              *(_QWORD*)(*(_QWORD*)(a1 + 8) + 96LL), a2, 0, 1),
          (void*)(&v3));
}

_QWORD*

game_GameConverge_Impl_RouteInfo_ResetReceived_closure_Invoke_8f1580(__int64 a1,
                                                                     __int64 a2)
{
  __int64 v3;

  return (*(struct PseudoSret*)(&v3) =
              GameRoutine_936f60(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 112LL), a2, 0),
          (void*)(&v3));
}

__int64 game_GameConverge_Impl_CommitStartBind_closure_Invoke_8f16a0(__int64 a1,
                                                                     _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  GameRoutine_6c3980(*a2, *(_QWORD*)(a1 + 8));
  return UnitHeroes_6daf00(v2);
}

unsigned __int64 game_GameConverge_Impl_CommitStartBind_closure_Invoke_8f17c0(
    __int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 v18;
  __int64 (***v19)();
  char v20[4];

  v2 = *a2;
  result = game_HashString(*(&game_g_hero_ids + v2));
  if (result == 0) {
    return result;
  }
  v4 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v4 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    return result;
  }
  v6 = v4 - 1;
  if ((v4 & (v4 - 1)) != 0) {
    v7 = result;
    if (result >= v4) {
      v7 = result % v4;
    }
  }
  else {
    v7 = v6 & result;
  }
  v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v7);
  if (v8 == nullptr) {
    return result;
  }
  v9 = (_QWORD*)*v8;
  if (v9 == nullptr) {
    return result;
  }
  if ((v4 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v11 == result) {
        if (v9[2] == result) {
          goto LABEL_26;
        }
      }
      else if ((v11 & v6) != v7) {
        return result;
      }
      v9 = (_QWORD*)*v9;
      if (v9 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v10 == result) {
      break;
    }
    if (v10 >= v4) {
      v10 %= v4;
    }
    if (v10 != v7) {
      return result;
    }
  LABEL_15:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      return result;
    }
  }
  if (v9[2] != result) {
    goto LABEL_15;
  }
LABEL_26:
  v12 = v9[3];
  if (v12 == 0) {
    return result;
  }
  v17 = (__int64 (**)())v9[3];
  result = game_UnitPool_Find_6eac40(&v17);
  if (result != 0) {
    return result;
  }
  v18 = SideStoryFile_12ae4c0((unsigned int)v2);
  result = game_HashString(v18);
  v17 = (__int64 (**)())result;
  if (game_GameModeData_instance_ == 0) {
    return result;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &v17);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    return result;
  }
  v17 = GameData_1fabe10;
  v18 = v12;
  v19 = &v17;
  v14 = *(_QWORD*)(GameData_21ca310 + 56);
  v15 = *(_QWORD*)(v14 + 556216);
  if (v15 == 0) {
    v16 = 32;
    result = (unsigned __int64)&v17;
    return (*(__int64 (**)(unsigned __int64, __int64))(*(_QWORD*)result + v16))(
        result, v13);
  }
  GameRoutine_6d86a0(*(_QWORD*)(v14 + 556216), v12);
  v20[0] = 6;
  game_Unit_Unknown6c46e0(v15, v20);
  result = (unsigned __int64)v19;
  if (v19 == &v17) {
    v16 = 32;
    return (*(__int64 (**)(unsigned __int64, __int64))(*(_QWORD*)result + v16))(
        result, v13);
  }
  if (v19 != nullptr) {
    v16 = 40;
    return (*(__int64 (**)(unsigned __int64, __int64))(*(_QWORD*)result + v16))(
        result, v13);
  }
  return result;
}

_QWORD* GameConverge_8f2280(_QWORD* a1, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  v3 = a1;
  if ((*(_BYTE*)a2 & 1) != 0) {
    a1 = (_QWORD*)fw_text_String_CopyTerminated(a1, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    a1[1] = a2[1];
    a1[2] = v5;
    *a1 = v4;
  }
  v3[4] = 0;
  v3[5] = 0;
  v3[3] = 0;
  v6 = (char*)a2[3];
  v7 = (char*)a2[4];
  v8 = v7 - v6;
  if (v7 != v6) {
    if (0xAAAAAAAAAAAAAAABLL * (v8 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(a1);
    }
    v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v7 - v6, 16, 0);
    v3[3] = v9;
    v3[4] = v9;
    v3[5] = (char*)v9 + v8;
    do {
      if ((*v6 & 1) != 0) {
        fw_text_String_CopyTerminated(v9, *((_QWORD*)v6 + 2),
                                      *((_QWORD*)v6 + 1));
      }
      else {
        v10 = *(_QWORD*)v6;
        v11 = *((_QWORD*)v6 + 2);
        v9[1] = *((_QWORD*)v6 + 1);
        v9[2] = v11;
        *v9 = v10;
      }
      v6 += 24;
      v9 += 3;
    } while (v6 != v7);
    v3[4] = v9;
  }
  return v3;
}

_QWORD* GameConverge_8f23a0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = *result;
  v1 = result[1];
  v3 = result;
  if (*result != v1) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v5 = v1;
      v6 = *(_QWORD*)(v1 - 24);
      if (v6 != 0) {
        v7 = *(_QWORD*)(v5 - 16);
        if (v6 == v7) {
          goto LABEL_15;
        }
        v8 = *(_QWORD*)(v5 - 16);
        do {
          v9 = *(_BYTE*)(v8 - 24);
          v8 -= 24;
          if ((v9 & 1) != 0 && *(_QWORD*)(v7 - 8) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
              v10 = 128;
            }
            else {
              v10 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10);
          }
          v7 = v8;
        } while (v8 != v6);
        v11 = *(_QWORD*)(v5 - 24);
        *(_QWORD*)(v5 - 16) = v6;
        if (v11 != 0) {
        LABEL_15:
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12);
        }
      }
      v1 = v5 - 48;
      if ((*(_BYTE*)(v5 - 48) & 1) != 0 && *(_QWORD*)(v5 - 32) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v13);
      }
    } while (v2 != v1);
  }
  v3[1] = v2;
  return result;
}

_QWORD* GameConverge_8f24c0(_QWORD* a1, __int64* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;

  v3 = a1;
  if ((*(_BYTE*)a2 & 1) != 0) {
    a1 = (_QWORD*)fw_text_String_CopyTerminated(a1, a2[2], a2[1]);
  }
  else {
    v4 = *a2;
    v5 = a2[2];
    a1[1] = a2[1];
    a1[2] = v5;
    *a1 = v4;
  }
  v3[4] = 0;
  v3[5] = 0;
  v3[3] = 0;
  v6 = (char*)a2[3];
  v7 = (char*)a2[4];
  v8 = v7 - v6;
  if (v7 != v6) {
    if (0xAAAAAAAAAAAAAAABLL * (v8 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00(a1);
    }
    v9 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v7 - v6, 16, 0);
    v3[3] = v9;
    v3[4] = v9;
    v3[5] = (char*)v9 + v8;
    do {
      if ((*v6 & 1) != 0) {
        fw_text_String_CopyTerminated(v9, *((_QWORD*)v6 + 2),
                                      *((_QWORD*)v6 + 1));
      }
      else {
        v10 = *(_QWORD*)v6;
        v11 = *((_QWORD*)v6 + 2);
        v9[1] = *((_QWORD*)v6 + 1);
        v9[2] = v11;
        *v9 = v10;
      }
      v6 += 24;
      v9 += 3;
    } while (v6 != v7);
    v3[4] = v9;
  }
  return v3;
}

_QWORD* game_GameConverge_Impl_CommitEndBind_closure_Destructor(_QWORD* a1)
{
  _QWORD* result;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;

  *a1 = GameData_1fabf20;
  v2 = a1[1];
  result = a1 + 1;
  if (v2 != 0) {
    v3 = result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
    }
  }
  return result;
}

__int64

game_GameConverge_Impl_CommitEndBind_closure_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = GameData_1fabf20;
  v1 = a1 + 1;
  v2 = fw_memory_g_heap_manager_ptr;
  if (a1[1] != 0) {
    GameConverge_8f23a0(a1 + 1);
    if (*v1 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v3);
    }
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
}

_QWORD* game_GameConverge_Impl_CommitEndBind_closure_Clone(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v4 = *(__int64**)(a1 + 8);
  v5 = *(__int64**)(a1 + 16);
  v6 = v3;
  v3[2] = 0;
  v3[3] = 0;
  v7 = (char*)v5 - (char*)v4;
  *v3 = GameData_1fabf20;
  v3[1] = 0;
  if (v5 != v4) {
    if (0xAAAAAAAAAAAAAAABLL * (v7 >> 4) >= 0x555555555555556LL) {
      GameRoutine_8f2260();
    }
    v8 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, (char*)v5 - (char*)v4, 16,
                                                 0);
    v6[1] = v8;
    v6[3] = (char*)v8 + v7;
    do {
      GameConverge_8f24c0(v8, v4);
      v4 += 6;
      v8 += 6;
    } while (v4 != v5);
    v6[2] = v8;
  }
  return v6;
}

_QWORD* game_GameConverge_Impl_CommitEndBind_closure_Destroy(__int64 a1)
{
  _QWORD* result;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  result = (_QWORD*)(a1 + 8);
  if (v2 != 0) {
    v3 = result;
    result = GameConverge_8f23a0(result);
    if (*v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
    }
  }
  return result;
}

__int64 game_GameConverge_Impl_TryJoin_closure_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  GameRoutine_6c3980(*a2, *(_QWORD*)(a1 + 8));
  return Unit_6db740(v2, *(unsigned __int8*)(a1 + 16), 0);
}

__int64 game_GameConverge_Impl_TryJoin_closure0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD v6[2];

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(a1 + 16) == 1) {
    v4 = GameRoutine_7152e0(a1);
    if ((_DWORD)v4 == 0) {
    LABEL_3:
      GameRoutine_7152e0(v4);
    }
  }
  else {
    v6[1] = &GameData_1aed5ad;
    v4 = game_HashString(&GameData_1aed5ad);
    v6[0] = v4;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_3;
    }
    v4 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v6);
    if (v4 == 0 || *(_DWORD*)(v4 + 32) == 0) {
      goto LABEL_3;
    }
  }
  return GameRoutine_6d86a0(v2, v3);
}

__int64 game_GameConverge_Impl_GetUnitList_closure_Invoke(__int64 result,
                                                          __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;

  v2 = *(_QWORD**)(result + 8);
  v3 = *a2;
  v4 = (_QWORD*)v2[303];
  v5 = v2[304];
  if ((unsigned __int64)v4 >= v5) {
    v7 = v2[302];
    v8 = (char*)v4 - v7;
    v9 = ((__int64)v4 - v7) >> 3;
    v10 = v9 + 1;
    if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
      GameRoutine_740050();
    }
    v11 = v5 - v7;
    v12 = fw_memory_g_heap_manager_ptr;
    if (v11 >> 2 > v10) {
      v10 = v11 >> 2;
    }
    if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
      v13 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
    }
    else {
      v14 = 0;
    }
    v15 = v14 + 8 * v13;
    v16 = (char*)v4 - v7;
    v17 = (__int64)&v8[v14 + -8 * v9];
    *(_QWORD*)&v8[v14] = v3;
    v6 = (__int64)&v8[v14 + 8];
    result = memcpy(v17, v7, v16);
    v2[302] = v17;
    v2[303] = v6;
    v2[304] = v15;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v18);
    }
  }
  else {
    *v4 = v3;
    v6 = (__int64)(v4 + 1);
  }
  v2[303] = v6;
  return result;
}

__int64 game_GameConverge_Impl_EachCompleted_closure_Invoke(__int64 result,
                                                            unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  _BYTE v4[4];

  v2 = *(_QWORD*)(result + 16) + 216LL * *a2;
  if (*(_QWORD*)(v2 + 264) != *(_QWORD*)(v2 + 256)) {
    v3 = *(_QWORD*)(result + 64);
    v4[0] = *a2;
    if (v3 == 0) {
      GameRoutine_60a310(0, a2);
    }
    return (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v3 + 48LL))(v3, v4);
  }
  return result;
}

__int64

game_GameConverge_Impl_GetMaxMergeCount_closure_Invoke(__int64 result,
                                                       unsigned __int8* a2)
{
  int* v2;
  __int64 v3;
  int v4;

  v2 = *(int**)(result + 8);
  v3 = *(_QWORD*)(result + 16) + 216LL * *a2;
  v4 = *(_DWORD*)(v3 + 428) + *(_DWORD*)(v3 + 424);
  if (*v2 > v4) {
    v4 = *v2;
  }
  *v2 = v4;
  return result;
}

__int64

game_GameConverge_Impl_GetMaxClearDifficulty_closure_Invoke(__int64 result,
                                                            _BYTE* a2)
{
  _BYTE* v2;
  unsigned int v3;
  __int64 v4;
  unsigned int v5;

  v2 = *(_BYTE**)(result + 8);
  v3 = (unsigned __int8)*v2;
  if (*a2 != 0) {
    v4 = *(_QWORD*)(result + 24) + 216LL * (unsigned __int8)*a2;
    if (*(_DWORD*)(result + 16) == 2) {
      v5 = *(unsigned __int8*)(v4 + 441);
    }
    else {
      v5 = *(unsigned __int8*)(v4 + 440);
    }
  }
  else {
    v5 = 3;
  }
  if (v5 >= v3 && v5 != 3 || v3 == 3) {
    LOBYTE(v3) = v5;
  }
  *v2 = v3;
  return result;
}

#pragma GCC visibility pop
