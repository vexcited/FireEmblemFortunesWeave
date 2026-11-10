#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_7c41f0(__int64, int, int);
__int64 GameRoutine_68e5e0(_QWORD, _QWORD);
__int64 GameRoutine_7d5160(_QWORD, _QWORD);
__int64 MapUtil_753570(_QWORD, _QWORD);
__int64 Trick_7d2180_alt1(_QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("Trick_7d2180");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f9a818[])();
extern __int64 (*GameData_1f9a868[])();
extern __int64 (*GameData_1f9a940[])();
extern __int64 (*GameData_1f9b218[])();
extern __int64 (*GameData_1f9b728[])();
extern __int64 (*GameData_1f9b7a8[])();
extern __int64 (*GameData_1f9b998[])();
extern __int64 (*GameData_1f9ba28[])();
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd158;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c930;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern int GameData_21d9954;
extern unsigned __int8 GameData_1b41aa9[22];
extern unsigned __int8 GameData_1b41abf[17];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_7d18f0(_QWORD);
__int64 Trick_Destructor(_QWORD* a1);
__int64 Trick_DeletingDestructor(_QWORD* a1);
__int64 game_map_Trick_Impl_EachDanger(__int64 a1, __int64 a2);
__int64 Trick_7cb0c0(__int64 a1);
__int64 Trick_Unknown3(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6);
__int64 Trick_Unknown6(__int64 result, __int64 a2);
__int64 Trick_Unknown2(__int64 result, __int64 a2);
__int64 game_map_Trick_Impl_CanPut_closure_Invoke(__int64 a1, unsigned int* a2,
                                                  unsigned int* a3);
__int64 Trick_7d2180(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4);
__int64 game_map_Trick_Impl_TryDelete_closure_Invoke(__int64 result, _DWORD* a2,
                                                     _DWORD* a3);
__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d2990(__int64 a1,
                                                            _QWORD* a2);
__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d2b40(__int64 a1,
                                                            _DWORD* a2,
                                                            _DWORD* a3);
__int64 game_map_Trick_Impl_UpdateLink_closure_Invoke_7d2c90(__int64 a1,
                                                             _QWORD* a2);
__int64 game_map_Trick_Impl_EachBreakable_closure_Invoke(__int64 a1,
                                                         _QWORD* a2);
__int64 game_map_Trick_Impl_EachDanger_closure_Invoke(__int64 a1, _QWORD* a2);
_QWORD* game_map_Trick_Impl_EachCoveredCharacter_closure_Clone(__int64 a1);
__int64 game_map_Trick_Impl_EachCoveredCharacter_closure_Invoke(__int64 result,
                                                                __int64 a2,
                                                                __int64 a3);
_QWORD* game_map_Trick_Impl_UpdateLink(_QWORD* a1, __int64 a2);
__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d4d10(__int64 a1,
                                                            _QWORD** a2);
__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d4e80(__int64 a1, int* a2,
                                                            int* a3);
__int64 game_map_Trick_Impl_UpdateLink_closure_Invoke_7d4fe0(__int64 a1,
                                                             _QWORD* a2);
__int64 game_map_Trick_Impl_TryCommit_closure_Invoke(__int64 result, int* a2,
                                                     int* a3);
__int64 game_map_Trick_Impl_TryCommit_closure0_Invoke(__int64 a1, int* a2,
                                                      int* a3);

__int64 Trick_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = GameData_1f9a818;
  a1[1] = GameData_1f9a868;
  result = a1[2];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[2] = 0;
  }
  *a1 = GameData_1f9a940;
  if ((_QWORD*)GameData_21cd158 == a1) {
    GameData_21cd158 = 0;
    GameData_21d9954 = 0;
  }
  return result;
}

__int64 Trick_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = GameData_1f9a818;
  a1[1] = GameData_1f9a868;
  v2 = a1[2];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[2] = 0;
  }
  *a1 = GameData_1f9a940;
  if ((_QWORD*)GameData_21cd158 == a1) {
    GameData_21cd158 = 0;
    GameData_21d9954 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 game_map_Trick_Impl_EachDanger(__int64 a1, __int64 a2)
{
  __int64 v4;
  _WORD* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  _WORD* v9;
  __int64* v10;
  __int64 v11;
  _QWORD* v12;
  unsigned int v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v21[4];
  _QWORD* v22;
  __int64 v23;

  v4 = fw_memory_g_heap_manager_ptr;
  v5 = (_WORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 2, 16, 0);
  v8 = *(__int64**)(a1 + 18848);
  v9 = v5;
  *v5 = 1549;
  v21[0] = GameData_1f9b728;
  v21[1] = a2;
  v10 = *(__int64**)(a1 + 18856);
  v22 = v21;
  if (v10 == v8) {
    v13 = 6;
  }
  else {
    do {
      v11 = *v8++;
      v12 = v22;
      v23 = v11;
      if (v22 == nullptr) {
        goto LABEL_17;
      }
      (*(void (**)(_QWORD*, __int64*))(*v22 + 48LL))(v22, &v23);
    } while (v8 != v10);
    v13 = *((unsigned __int8*)v9 + 1);
  }
  v14 = a1 + 18536 + 24LL * v13;
  v16 = *(__int64**)v14;
  v15 = *(__int64**)(v14 + 8);
  if (v15 != *(__int64**)v14) {
    while (1) {
      v17 = *v16++;
      v12 = v22;
      v23 = v17;
      if (v22 == nullptr) {
        break;
      }
      (*(void (**)(_QWORD*, __int64*))(*v22 + 48LL))(v22, &v23);
      if (v16 == v15) {
        goto LABEL_9;
      }
    }
  LABEL_17:
    GameRoutine_60a310(v12, v6, v7);
  }
LABEL_9:
  if (v22 == v21) {
    v18 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_14;
    }
    v18 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v22 + v18))(v22, v6);
LABEL_14:
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v19 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v19, v9);
}

__int64 Trick_7cb0c0(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  char v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int8 v9;
  char v10;
  __int16 v11;
  int v12;
  int v13;
  unsigned __int8 v14;

  v1 = *(_QWORD**)(a1 + 32);
  v2 = *(_QWORD**)(a1 + 40);
  if (v1 == v2) {
    return 0;
  }
  v4 = 0;
  v5 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  do {
    v6 = *v1;
    v7 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v1 + 248LL))(*v1);
    if (v7 >= 1 && v5 == *(unsigned __int8*)(v6 + 14) &&
        ((v8 = *(unsigned __int8*)(v6 + 13), v7 >= (unsigned int)(v8 + 1))
             ? (v9 = v8 + 1)
             : (v9 = v7),
         *(_BYTE*)(v6 + 13) = v9, v7 == v9)) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 480LL))(v6) & 1) != 0) {
        *(_WORD*)(v6 + 20) |= 2u;
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 416LL))(v6);
      }
      v10 = 1;
      v11 = *(_WORD*)(v6 + 20);
      if ((v11 & 0x40) == 0) {
        goto LABEL_25;
      }
    }
    else {
      v10 = 0;
      v11 = *(_WORD*)(v6 + 20);
      if ((v11 & 0x40) == 0) {
        goto LABEL_25;
      }
    }
    *(_WORD*)(v6 + 20) = v11 & 0xFFBF;
    v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 256LL))(v6);
    if (v12 >= 1) {
      v13 = *(unsigned __int8*)(v6 + 13);
      v14 = v12 >= (unsigned int)(v13 + 1) ? v13 + 1 : v12;
      *(_BYTE*)(v6 + 13) = v14;
      if (v12 == v14) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 480LL))(v6) & 1) != 0) {
          *(_WORD*)(v6 + 20) |= 2u;
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 416LL))(v6);
        }
        v10 = 1;
      }
    }
  LABEL_25:
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 496LL))(v6) & 1) != 0 &&
        v5 == 0) {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)v6 + 392LL))(v6, 0);
      v10 = 1;
    }
    ++v1;
    v4 |= v10;
  } while (v1 != v2);
  if ((v4 & 1) != 0) {
    GameRoutine_7d5160(a1, 1);
    return 1;
  }
  return 0;
}

__int64 Trick_Unknown3(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v6 = *(_QWORD*)(a1 + 16);
  v7 = *(__int64**)(v6 + 32);
  v8 = *(__int64**)(v6 + 40);
  if (v7 != v8) {
    do {
      v9 = *v7++;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 720LL))(v9);
    } while (v7 != v8);
    v7 = *(__int64**)(v6 + 32);
  }
  *(_QWORD*)(v6 + 40) = v7;
  *(_BYTE*)(v6 + 92848) = 0;
  memset(v6 + 104, 255, 18432, a4, a5, a6);
  return memset(*(_QWORD*)(*GameData_212ce98[0] + 48) + 8LL, 0, 2048, v10, v11,
                v12);
}

__int64 Trick_Unknown6(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* i;
  __int64 v11;

  v2 = *(_QWORD*)(result + 16);
  v3 = *(int*)(a2 + 20);
  v5 = *(_QWORD*)(v2 + 32);
  v4 = *(_QWORD*)(v2 + 40);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v6 = v4 - v5;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v3) = v6 >> 3;
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v6 >> 11;
  v8 = *(__int64**)(v2 + 32);
  for (i = *(__int64**)(v2 + 40); v8 != i;
       result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v11 + 728LL))(
           v11, a2)) {
    v11 = *v8++;
  }
  return result;
}

__int64 Trick_Unknown2(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* i;
  __int64 v11;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(int*)(a2 + 20);
  v5 = *(_QWORD*)(v2 + 32);
  v4 = *(_QWORD*)(v2 + 40);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v6 = v4 - v5;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v3) = v6 >> 3;
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v6 >> 11;
  v8 = *(__int64**)(v2 + 32);
  for (i = *(__int64**)(v2 + 40); v8 != i;
       result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v11 + 728LL))(
           v11, a2)) {
    v11 = *v8++;
  }
  return result;
}

__int64 game_map_Trick_Impl_CanPut_closure_Invoke(__int64 a1, unsigned int* a2,
                                                  unsigned int* a3)
{
  __int64 result;

  result = Trick_7d2180_alt1(*(_QWORD*)(a1 + 8), *a2, *a3,
                             *(_QWORD*)(*(_QWORD*)(a1 + 16) + 56LL));
  if ((result & 1) == 0) {
    **(_BYTE**)(a1 + 24) = 0;
  }
  return result;
}

__int64 Trick_7d2180(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64* v20;
  char v21;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  bool v36;
  bool v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v53;
  bool v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  unsigned int v59;
  char v60;
  __int64 v61;
  char v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int16 v73;

  if (a4 == 0) {
    return 0;
  }
  v4 = GameData_21ca300;
  if (GameData_21ca300 == 0) {
    return 0;
  }
  v5 = 0;
  if (*(unsigned __int8*)(GameData_21ca300 + 18) <=
          (unsigned int)(unsigned __int8)(a2 -
                                          *(_BYTE*)(GameData_21ca300 + 16)) ||
      *(unsigned __int8*)(GameData_21ca300 + 19) <=
          (unsigned int)(unsigned __int8)(a3 -
                                          *(_BYTE*)(GameData_21ca300 + 17))) {
    return v5;
  }
  v6 = a2 + 32 * a3;
  if (v6 >= 0x400) {
    v7 = 0;
  }
  else {
    v7 = v6;
  }
  v8 = 2LL * (unsigned int)v7;
  v9 = *(unsigned __int8*)(a4 + 57);
  v10 = *(_QWORD*)(*GameData_212c930 + 64);
  v11 =
      *(_QWORD*)(v10 +
                 8LL * *(unsigned __int16*)(*(_QWORD*)(GameData_21ca300 + 32) +
                                            v8 + 8));
  v12 =
      *(_QWORD*)(v10 +
                 8LL * *(unsigned __int16*)(*(_QWORD*)(GameData_21ca300 + 40) +
                                            v8 + 8));
  v13 = GameData_1b41aa9[*(unsigned __int8*)(a4 + 57)];
  v14 = *(__int16*)(a1 + ((unsigned __int64)GameData_1b41abf[v13] << 11) + v8 +
                    104);
  if (v14 < 0 || (v15 = *(_QWORD*)(a1 + 8)) == 0) {
    v20 = nullptr;
    if (a4 == v11) {
      goto LABEL_16;
    }
  }
  else {
    v16 = GameData_1b41aa9[*(unsigned __int8*)(a4 + 57)];
    LODWORD(v13) = a2;
    v17 = a1;
    v18 = a4;
    v72 = GameData_21ca300;
    v19 = a3;
    v20 = (__int64*)(v15 + 144LL * (int)v14);
    v73 = 8;
    v21 = (*(__int64 (**)(__int64*, __int16*))(*v20 + 784))(v20, &v73);
    a3 = v19;
    v4 = v72;
    v36 = (v21 & 1) == 0;
    a2 = v13;
    LOBYTE(v13) = v16;
    a4 = v18;
    a1 = v17;
    if (!v36) {
      v20 = nullptr;
    }
    if (v18 == v11) {
    LABEL_16:
      if (*(_WORD*)(v12 + 16) == 0) {
        return 1;
      }
    }
  }
  if (v11 == 0) {
    return 0;
  }
  v23 = *(unsigned __int8*)(a4 + 60);
  if (*(unsigned __int8*)(v11 + 60) > v23) {
    return 0;
  }
  v24 = *(unsigned __int16*)(a4 + 248);
  if (*(_WORD*)(a4 + 248) != 0) {
    v25 = *(_QWORD*)(a4 + 256);
    v26 = *(unsigned __int8*)(v11 + 56);
    v27 = v24 & 3;
    if (v24 >= 4) {
      v47 = (_QWORD*)(v25 + 40);
      v28 = 0;
      v29 = 0;
      v30 = 0;
      do {
        v48 = *(v47 - 4);
        if (*(unsigned __int8*)(v48 + 56) == v26) {
          if (v48 == v11) {
            ++v29;
          }
          else {
            ++v30;
          }
        }
        v49 = *(v47 - 2);
        if (*(unsigned __int8*)(v49 + 56) == v26) {
          if (v49 == v11) {
            ++v29;
          }
          else {
            ++v30;
          }
        }
        if (*(unsigned __int8*)(*v47 + 56LL) == v26) {
          if (*v47 == v11) {
            ++v29;
          }
          else {
            ++v30;
          }
        }
        v50 = v47[2];
        if (*(unsigned __int8*)(v50 + 56) == v26) {
          if (v50 == v11) {
            ++v29;
          }
          else {
            ++v30;
          }
        }
        v28 += 4;
        v47 += 8;
      } while ((v24 & 0xFFFC) != v28);
    }
    else {
      v28 = 0;
      v29 = 0;
      v30 = 0;
    }
    if ((v24 & 3) != 0) {
      v31 = (__int64*)(v25 + 16 * v28 + 8);
      do {
        v33 = *v31;
        v31 += 2;
        v32 = v33;
        if (*(unsigned __int8*)(v33 + 56) == v26) {
          if (v32 == v11) {
            ++v29;
          }
          else {
            ++v30;
          }
        }
        --v27;
      } while (v27 != 0);
    }
    if (v29 == 0 && v30 >= 1) {
      return 0;
    }
  }
  v34 = *(unsigned __int16*)(a4 + 240);
  if (*(_WORD*)(a4 + 240) == 0) {
    return 0;
  }
  v35 = *(unsigned __int16*)(*(_QWORD*)(v11 + 48) + 16LL);
  v36 = ((1 << v35) & v34) != 0 || v35 == 0;
  v37 = !v36 || v12 == 0;
  if (v37 || *(unsigned __int8*)(v12 + 60) > v23) {
    return 0;
  }
  if (*(_WORD*)(a4 + 248) != 0) {
    v38 = *(_QWORD*)(a4 + 256);
    v39 = *(unsigned __int8*)(v12 + 56);
    v40 = v24 & 3;
    if (v24 >= 4) {
      v63 = (unsigned __int16)v24 & 0xFFFC;
      v64 = (_QWORD*)(v38 + 40);
      v41 = 0;
      v42 = 0;
      v43 = 0;
      do {
        v65 = *(v64 - 4);
        if (*(unsigned __int8*)(v65 + 56) == v39) {
          if (v65 == v12) {
            ++v42;
          }
          else {
            ++v43;
          }
        }
        v66 = *(v64 - 2);
        if (*(unsigned __int8*)(v66 + 56) == v39) {
          if (v66 == v12) {
            ++v42;
          }
          else {
            ++v43;
          }
        }
        if (*(unsigned __int8*)(*v64 + 56LL) == v39) {
          if (*v64 == v12) {
            ++v42;
          }
          else {
            ++v43;
          }
        }
        v67 = v64[2];
        if (*(unsigned __int8*)(v67 + 56) == v39) {
          if (v67 == v12) {
            ++v42;
          }
          else {
            ++v43;
          }
        }
        v41 += 4;
        v64 += 8;
      } while (v63 != v41);
    }
    else {
      v41 = 0;
      v42 = 0;
      v43 = 0;
    }
    if (v40 != 0) {
      v44 = (__int64*)(v38 + 16 * v41 + 8);
      do {
        v46 = *v44;
        v44 += 2;
        v45 = v46;
        if (*(unsigned __int8*)(v46 + 56) == v39) {
          if (v45 == v12) {
            ++v42;
          }
          else {
            ++v43;
          }
        }
        --v40;
      } while (v40 != 0);
    }
    if (v42 == 0 && v43 >= 1) {
      return 0;
    }
  }
  v51 = (1 << *(_WORD*)(*(_QWORD*)(v12 + 48) + 16LL)) & v34;
  if (*(_WORD*)(*(_QWORD*)(v12 + 48) + 16LL) != 0 && v51 == 0) {
    return 0;
  }
  if (*(_BYTE*)(a4 + 57) == 10) {
    if (*(_BYTE*)(*(_QWORD*)(v4 + 96) + v7 + 8) != 0) {
      v53 = *(_QWORD*)(GameData_21ca310 + 56) +
            2224LL * *(unsigned __int8*)(*(_QWORD*)(v4 + 96) + v7 + 8);
      v54 = *(unsigned __int8*)(*(_QWORD*)(v4 + 96) + v7 + 8) > 0xFAu ||
            v53 == 2224;
      if (!v54 && *(_QWORD*)(v53 - 1832) != 0) {
        return 0;
      }
    }
    if ((*(__int16*)(a1 + 2 * v7 + 12392) & 0x80000000) == 0 &&
        *(_QWORD*)(a1 + 8) != 0) {
      return 0;
    }
  }
  if ((unsigned int)(v9 - 17) >= 2) {
    v55 = *(__int16*)(a1 + 2 * v7 + 2152);
    if ((v55 & 0x8000000000000000LL) == 0) {
      v56 = *(_QWORD*)(a1 + 8);
      if (v56 != 0) {
        v57 = a4;
        v58 = a3;
        v59 = a2;
        v60 = (*(__int64 (**)(__int64))(*(_QWORD*)(v56 + 144LL * (int)v55) +
                                        272LL))(v56 + 144LL * (int)v55);
        a2 = v59;
        a3 = v58;
        a4 = v57;
        if ((v60 & 1) != 0) {
          return 0;
        }
      }
    }
    if (((1LL << v13) & 0x405) != 0) {
      v61 = a4;
      v62 = MapUtil_753570(a2, a3);
      a4 = v61;
      if ((v62 & 1) == 0) {
        return 0;
      }
    }
  }
  if (*(_BYTE*)(a4 + 57) == 19) {
    if (v20 == nullptr) {
      return 0;
    }
  }
  else if (v20 == nullptr) {
    return 1;
  }
  v68 = *v20;
  v69 = v20;
  v70 = a4;
  v71 = (*(__int64 (**)(__int64*))(v68 + 224))(v69);
  return (GameRoutine_68e5e0(v70, v71) & 1) != 0;
}

__int64 game_map_Trick_Impl_TryDelete_closure_Invoke(__int64 result, _DWORD* a2,
                                                     _DWORD* a3)
{
  __int64 v3;
  __int64 v4;
  char v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _WORD* v10;

  v3 = *(_QWORD*)(result + 16);
  v4 = result;
  v5 = 0;
  v6 = *a2 + 32 * *a3;
  v7 = **(unsigned __int8**)(result + 24);
  if (v6 >= 0x400) {
    v6 = 0;
  }
  v8 = *(__int16*)(v3 + ((unsigned __int64)GameData_1b41abf[v7] << 11) +
                   2LL * v6 + 104);
  if ((v8 & 0x8000000000000000LL) == 0) {
    v9 = *(_QWORD*)(v3 + 8);
    if (v9 != 0) {
      v10 = (_WORD*)(v9 + 144LL * (int)v8);
      result = (*(__int64 (**)(_WORD*))(*(_QWORD*)v10 + 40LL))(v10);
      if ((_DWORD)v7 == (unsigned __int8)result) {
        result = (*(__int64 (**)(_WORD*))(*(_QWORD*)v10 + 480LL))(v10);
        if ((result & 1) != 0) {
          v10[10] |= 2u;
        }
        else {
          result = (*(__int64 (**)(_WORD*))(*(_QWORD*)v10 + 416LL))(v10);
        }
        v5 = 1;
        *(_BYTE*)(v3 + 92848) = 1;
      }
      else {
        v5 = 0;
      }
    }
  }
  **(_BYTE**)(v4 + 8) |= v5;
  return result;
}

__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d2990(__int64 a1,
                                                            _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v6;
  _QWORD v7[2];
  char v8;
  __int64 v9;
  _QWORD* v10;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 48LL))(*a2);
  if (*(unsigned __int8*)(a1 + 16) == (unsigned __int8)result) {
    v8 = result;
    v7[0] = GameData_1f9b218;
    v7[1] = v3;
    v9 = v2;
    v10 = v7;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v2 + 744LL))(v2, v7);
    result = (__int64)v10;
    if (v10 == v7) {
      v6 = 32;
    }
    else {
      if (v10 == nullptr) {
        return result;
      }
      v6 = 40;
    }
    return (*(__int64 (**)(__int64))(*v10 + v6))((__int64)v10);
  }
  return result;
}

__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d2b40(__int64 a1,
                                                            _DWORD* a2,
                                                            _DWORD* a3)
{
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2 + 32 * *a3;
  v5 = *(unsigned __int8*)(a1 + 16);
  v6 = *(_QWORD*)(a1 + 24);
  v7 = v3 + (v5 << 11);
  if (v4 >= 0x400) {
    v4 = 0;
  }
  v8 = v7 + 2LL * v4;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
  *(_WORD*)(v8 + 104) = result;
  return result;
}

__int64 game_map_Trick_Impl_UpdateLink_closure_Invoke_7d2c90(__int64 a1,
                                                             _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD* v6;
  __int64* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 40LL))(*a2);
  if (*(unsigned __int8*)(a1 + 16) == (unsigned __int8)result) {
    v6 = (_QWORD*)(v3 + 24LL * (unsigned __int8)result);
    v7 = v6 + 2317;
    v8 = (_QWORD*)v6[2318];
    v9 = v6[2319];
    if ((unsigned __int64)v8 >= v9) {
      v11 = *v7;
      v12 = (__int64)v8 - *v7;
      v13 = (v12 >> 3) + 1;
      if (v13 >> 61 != 0) {
        GameRoutine_7d18f0(result);
      }
      v14 = v9 - v11;
      v15 = fw_memory_g_heap_manager_ptr;
      if (v14 >> 2 > v13) {
        v13 = v14 >> 2;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v13;
      }
      if (v16 != 0) {
        if (v16 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v17 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
      }
      else {
        v17 = 0;
      }
      v18 = v17 + 8 * v16;
      v19 = v17 + v12 - 8 * (v12 >> 3);
      *(_QWORD*)(v17 + v12) = v2;
      v10 = v17 + v12 + 8;
      result = memcpy(v19, v11, v12);
      *v7 = v19;
      v7[1] = v10;
      v7[2] = v18;
      if (v11 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v20 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v20, v11);
      }
    }
    else {
      *v8 = v2;
      v10 = (__int64)(v8 + 1);
    }
    v7[1] = v10;
  }
  return result;
}

__int64 game_map_Trick_Impl_EachBreakable_closure_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *a2;
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 272LL))(*a2);
  if ((result & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 8);
    v9 = v2;
    v8 = *(_QWORD*)(v7 + 32);
    if (v8 == 0) {
      GameRoutine_60a310(0, v5, v6);
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v8 + 48LL))(v8, &v9);
  }
  return result;
}

__int64 game_map_Trick_Impl_EachDanger_closure_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *a2;
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 520LL))(*a2);
  if ((result & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 8);
    v9 = v2;
    v8 = *(_QWORD*)(v7 + 32);
    if (v8 == 0) {
      GameRoutine_60a310(0, v5, v6);
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v8 + 48LL))(v8, &v9);
  }
  return result;
}

_QWORD* game_map_Trick_Impl_EachCoveredCharacter_closure_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1f9b7a8;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
    }
    else {
      v5 = result;
      result[6] = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, _QWORD*))(
          *v4 + 16LL))(v4, v4, v3);
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_map_Trick_Impl_EachCoveredCharacter_closure_Invoke(__int64 result,
                                                                __int64 a2,
                                                                __int64 a3)
{
  __int64 v3;

  if (*(_QWORD*)(*(_QWORD*)a2 + 112LL) != 0) {
    v3 = *(_QWORD*)(result + 48);
    if (v3 == 0) {
      GameRoutine_60a310((unsigned __int8)v3, a2, a3);
    }
    return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v3 + 48LL))(
        v3, *(_QWORD*)a2 + 104LL);
  }
  return result;
}

_QWORD* game_map_Trick_Impl_UpdateLink(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];
  _QWORD* v17;
  __int64 v18;

  v2 = a1[2320];
  v3 = (_QWORD*)a1[4];
  v4 = (_QWORD*)a1[5];
  a1[2318] = a1[2317];
  v5 = a1[2323];
  a1[2321] = v2;
  v6 = a1[2326];
  a1[2324] = v5;
  v7 = a1[2329];
  a1[2327] = v6;
  v8 = a1[2332];
  a1[2330] = v7;
  v9 = a1[2335];
  a1[2333] = v8;
  v10 = a1[2338];
  a1[2336] = v9;
  v11 = a1[2341];
  a1[2339] = v10;
  a1[2342] = v11;
  a1[2345] = a1[2344];
  a1[2348] = a1[2347];
  a1[2351] = a1[2350];
  a1[2354] = a1[2353];
  a1[2357] = a1[2356];
  a1[2360] = a1[2359];
  a1[2363] = a1[2362];
  a1[2366] = a1[2365];
  v16[0] = GameData_1f9ba28;
  v16[1] = a1;
  result = v16;
  v17 = v16;
  if (v3 == v4) {
    goto LABEL_10;
  }
  do {
    v13 = *v3;
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v3 + 504LL))(*v3) & 1) == 0) {
      v18 = v13;
      if (v17 == nullptr) {
        GameRoutine_60a310(0, a2, v14);
      }
      (*(void (**)(_QWORD*, __int64*))(*v17 + 48LL))(v17, &v18);
    }
    ++v3;
  } while (v3 != v4);
  result = v17;
  if (v17 == v16) {
  LABEL_10:
    v15 = 32;
  }
  else {
    if (v17 == nullptr) {
      return result;
    }
    v15 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v15))(result,
                                                                     a2);
}

__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d4d10(__int64 a1,
                                                            _QWORD** a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v7 = v6;
  v6[0] = GameData_1f9b998;
  v6[1] = v3;
  v6[2] = v2;
  (*(void (**)(_QWORD* __return_ptr, _QWORD*, _QWORD*))(*v2 + 744LL))(v2, v2,
                                                                      v6);
  result = (__int64)v7;
  if (v7 == v6) {
    v5 = 32;
  }
  else {
    if (v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7 + v5))((__int64)v7);
}

__int64 game_map_Trick_Impl_UpdateMap_closure_Invoke_7d4e80(__int64 a1, int* a2,
                                                            int* a3)
{
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 result;

  v4 = *(_QWORD*)(a1 + 8);
  v5 = *a2;
  v6 = *a3;
  v7 = (*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 48LL))(
      *(_QWORD*)(a1 + 16));
  v8 = v5 + 32 * v6;
  v9 = v4 + (v7 << 11);
  if (v8 >= 0x400) {
    v8 = 0;
  }
  v10 = v9 + 2LL * v8;
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 16) + 32LL))(
      *(_QWORD*)(a1 + 16));
  *(_WORD*)(v10 + 104) = result;
  return result;
}

__int64 game_map_Trick_Impl_UpdateLink_closure_Invoke_7d4fe0(__int64 a1,
                                                             _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  _QWORD* v5;
  __int64* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 40LL))(*a2);
  v5 = (_QWORD*)(v3 + 24LL * (unsigned __int8)result);
  v6 = v5 + 2317;
  v7 = (_QWORD*)v5[2318];
  v8 = v5[2319];
  if ((unsigned __int64)v7 >= v8) {
    v10 = *v6;
    v11 = (__int64)v7 - *v6;
    v12 = (v11 >> 3) + 1;
    if (v12 >> 61 != 0) {
      GameRoutine_7d18f0(result);
    }
    v13 = v8 - v10;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = v16 + v11 - 8 * (v11 >> 3);
    *(_QWORD*)(v16 + v11) = v2;
    v9 = v16 + v11 + 8;
    result = memcpy(v18, v10, v11);
    *v6 = v18;
    v6[1] = v9;
    v6[2] = v17;
    if (v10 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v19, v10);
    }
  }
  else {
    *v7 = v2;
    v9 = (__int64)(v7 + 1);
  }
  v6[1] = v9;
  return result;
}

__int64 game_map_Trick_Impl_TryCommit_closure_Invoke(__int64 result, int* a2,
                                                     int* a3)
{
  int v3;
  int v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  _DWORD* v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;

  v3 = *a2;
  v4 = *a3;
  v5 = v3 + 32 * v4;
  v6 = *(_QWORD*)(result + 8) + 8LL;
  if ((unsigned int)v5 >= 0x400) {
    v7 = 0;
  }
  else {
    v7 = v3 + 32 * v4;
  }
  if (*(_WORD*)(v6 + 2LL * v7) != 0) {
    *(_WORD*)(v6 + 2LL * v7) = 0;
    v8 = (_DWORD*)(GameData_21ca2e8 + 61440);
    if (*(int*)(GameData_21ca2e8 + 61624) < 1) {
      v14 = result;
      GameRoutine_7c41f0(GameData_21ca2e8, v3, v4);
      result = v14;
    }
    else {
      v9 = *(_DWORD*)(GameData_21ca2e8 + 61472);
      v10 = *(_DWORD*)(GameData_21ca2e8 + 61476);
      v11 = GameData_21ca2e8 + 4LL * (v5 >> 5);
      if (v3 < v9) {
        v9 = v3;
      }
      if (v4 < v10) {
        v10 = v4;
      }
      *(_DWORD*)(GameData_21ca2e8 + 61472) = v9;
      v8[9] = v10;
      v12 = v8[10];
      v13 = v8[11];
      if (v12 <= v3) {
        v12 = v3;
      }
      if (v13 <= v4) {
        v13 = v4;
      }
      v8[10] = v12;
      v8[11] = v13;
      *(_DWORD*)(v11 + 61488) |= 1 << v3;
    }
    **(_BYTE**)(result + 16) = 1;
  }
  return result;
}

__int64 game_map_Trick_Impl_TryCommit_closure0_Invoke(__int64 a1, int* a2,
                                                      int* a3)
{
  int v4;
  int v5;
  __int64 result;
  __int64 v7;
  unsigned int v8;
  int v9;
  unsigned int v10;
  _DWORD* v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;

  v4 = *a2;
  v5 = *a3;
  result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 24) + 16LL))(
      *(_QWORD*)(a1 + 24));
  v7 = *(_QWORD*)(a1 + 8) + 8LL;
  if ((result & 1) != 0) {
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 24) + 224LL))(
        *(_QWORD*)(a1 + 24));
    v8 = v4 + 32 * v5;
    v9 = *(unsigned __int16*)(result + 16);
    if (v8 >= 0x400) {
      v8 = 0;
    }
    if (*(unsigned __int16*)(v7 + 2LL * v8) != v9) {
      *(_WORD*)(v7 + 2LL * v8) = v9;
    LABEL_10:
      result = GameData_21ca2e8;
      v11 = (_DWORD*)(GameData_21ca2e8 + 61440);
      if (*(int*)(GameData_21ca2e8 + 61624) < 1) {
        result = (__int64)GameRoutine_7c41f0(GameData_21ca2e8, v4, v5);
      }
      else {
        v12 = *(_DWORD*)(GameData_21ca2e8 + 61472);
        v13 = *(_DWORD*)(GameData_21ca2e8 + 61476);
        if (v4 < v12) {
          v12 = v4;
        }
        if (v5 < v13) {
          v13 = v5;
        }
        *(_DWORD*)(GameData_21ca2e8 + 61472) = v12;
        v11[9] = v13;
        v14 = v11[10];
        v15 = v11[11];
        if (v14 <= v4) {
          v14 = v4;
        }
        if (v15 <= v5) {
          v15 = v5;
        }
        v11[10] = v14;
        v11[11] = v15;
        v16 = result + 4LL * ((v4 + 32 * v5) >> 5);
        *(_DWORD*)(v16 + 61488) |= 1 << v4;
      }
      **(_BYTE**)(a1 + 16) = 1;
    }
  }
  else {
    v10 = v4 + 32 * v5;
    if (v10 >= 0x400) {
      v10 = 0;
    }
    if (*(_WORD*)(v7 + 2LL * v10) != 0) {
      *(_WORD*)(v7 + 2LL * v10) = 0;
      goto LABEL_10;
    }
  }
  return result;
}

#pragma GCC visibility pop
