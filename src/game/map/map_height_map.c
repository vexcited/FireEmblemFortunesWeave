#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_map_MapHeightMap_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* MapHeightMap_Destructor(_QWORD* result);
__int64 GameRoutine_1002b40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1003260(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74e080(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_JobContext_Drain(_QWORD);
__int64 fw_world_JobContext_Wait(_QWORD, _QWORD);
__int64 fw_world_JobQueue_Submit(_QWORD, _QWORD);
__int64 fw_world_SwapCallables(_QWORD, _QWORD);
__int64 game_map_HeightCellMap_Commit(_QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_2167748;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_1ff1ec0[])();
extern __int64 (*GameData_1ff1f30[])();
extern __int64 (*GameData_1ff1fc0[])();
extern __int64 GameData_212e368[4];
extern __int64 GameData_21323e8[4];
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212f878;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(_QWORD);
__int64 MapHeightMap_f0f740(__int64 a1);
__int64 game_map_MapHeightMap_TryRefreshBmap_lambda0_Invoke_f10200(__int64 a1,
                                                                   __int64* a2);
__int64 game_map_MapHeightMap_TryRefreshBmap_lambda0_Invoke_f10370(__int64 a1,
                                                                   _DWORD* a2,
                                                                   _DWORD* a3);
__int64 game_map_MapHeightMap_TryRefreshBmap_lambda1_Invoke(__int64 result,
                                                            __int64 a2,
                                                            atomic_uint* a3);

_QWORD* MapHeightMap_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v1 = result[32];
  v2 = result;
  *result = game_map_MapHeightMap_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[33] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = v2[29];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    v2[30] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  v9 = v2[26];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    v2[27] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v10 + v11, v9);
  }
  v12 = (_QWORD*)v2[18];
  if (v12 != nullptr) {
    do {
      v13 = (_QWORD*)*v12;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14, v12);
      v12 = v13;
    } while (v13 != nullptr);
  }
  v15 = v2[16];
  v2[16] = 0;
  if (v15 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v15);
  }
  v17 = (_QWORD*)v2[11];
  if (v17 != nullptr) {
    do {
      v18 = (_QWORD*)*v17;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v19 = 128;
      }
      else {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v19, v17);
      v17 = v18;
    } while (v18 != nullptr);
  }
  v20 = v2[9];
  v2[9] = 0;
  if (v20 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v21 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v21, v20);
  }
  v22 = (_QWORD*)v2[4];
  if (v22 != nullptr) {
    do {
      v23 = (_QWORD*)*v22;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v24 = 128;
      }
      else {
        v24 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v24, v22);
      v22 = v23;
    } while (v23 != nullptr);
  }
  v25 = v2[2];
  v2[2] = 0;
  if (v25 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v26 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v26, v25);
  }
  return result;
}

__int64 MapHeightMap_f0f740(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  _BYTE* v7;
  _BYTE* v8;
  _BYTE* v9;
  char v10;
  __int64 v11;
  _BYTE* v12;
  _BYTE* v13;
  _BYTE* v14;
  _BYTE* v15;
  char v16;
  __int64 v17;
  int v18;
  __int64* v19;
  int i;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _BYTE* v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  _BYTE* v33;
  _BYTE* v34;
  char v35;
  __int64 v36;
  _BYTE* v37;
  char v38;
  unsigned int v39;
  char v40;
  unsigned int v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _BYTE* v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  _BYTE* v52;
  _BYTE* v53;
  char v54;
  __int64 v55;
  char* v56;
  char* v57;
  void* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int128 v62;
  __int128 v63;
  __int128 v64;
  __int64 v65;
  int v66;
  void* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int128 v71;
  __int128 v72;
  __int128 v73;
  __int64 v74;
  int v75;
  char* v76;
  char* v77;
  void* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int128 v82;
  __int128 v83;
  __int128 v84;
  __int64 v85;
  int v86;
  __int64 v87;
  _QWORD* v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  __int64 v98;
  __int64 v99;
  int v100;
  int v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  unsigned __int64* v104;
  _QWORD* v105;
  _QWORD* v106;
  __int64 v107;
  unsigned __int64 v108;
  _QWORD* v109;
  __int64 v110;
  unsigned int v111;
  __int64 v112;
  __int64 v114;
  _QWORD v115[4];
  _QWORD* v116;
  char v117;
  __int64 v118;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      12, 16, 0);
  v5 = v2;
  *(_QWORD*)v2 = 0x100000000LL;
  *(_DWORD*)(v2 + 8) = 2;
  if ((*(_BYTE*)(a1 + 8) & 1) == 0) {
    v6 = *(_BYTE**)(a1 + 208);
    if (*(_QWORD*)(a1 + 224) - (_QWORD)v6 <= 0x1FFu) {
      v7 = *(_BYTE**)(a1 + 216);
      v2 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 512, 16, 0);
      if (v7 != v6) {
        v8 = v6;
        v9 = (_BYTE*)v2;
        do {
          *v9 = *v8;
          v9[1] = v8[1];
          v9[2] = v8[2];
          v10 = v8[3];
          v8 += 4;
          v9[3] = v10;
          v9 += 4;
        } while (v8 != v7);
      }
      *(_QWORD*)(a1 + 208) = v2;
      *(_QWORD*)(a1 + 216) = v2 + v7 - v6;
      *(_QWORD*)(a1 + 224) = v2 + 512;
      if (v6 != nullptr) {
        v11 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v11 = 56;
        }
        v2 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v6);
      }
    }
    v12 = *(_BYTE**)(a1 + 232);
    if (*(_QWORD*)(a1 + 248) - (_QWORD)v12 <= 0x1FFu) {
      v13 = *(_BYTE**)(a1 + 240);
      v2 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 512, 16, 0);
      if (v13 != v12) {
        v14 = v12;
        v15 = (_BYTE*)v2;
        do {
          *v15 = *v14;
          v15[1] = v14[1];
          v15[2] = v14[2];
          v16 = v14[3];
          v14 += 4;
          v15[3] = v16;
          v15 += 4;
        } while (v14 != v13);
      }
      *(_QWORD*)(a1 + 232) = v2;
      *(_QWORD*)(a1 + 240) = v2 + v13 - v12;
      *(_QWORD*)(a1 + 248) = v2 + 512;
      if (v12 != nullptr) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        v2 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v12);
      }
    }
    v114 = v5;
    v18 = 0;
    v19 = GameData_212ce98[0];
    do {
      for (i = 0; i != 32; ++i) {
        if (*(unsigned __int8*)(*v19 + 26) >
                (unsigned int)(unsigned __int8)(v18 - *(_BYTE*)(*v19 + 24)) &&
            *(unsigned __int8*)(*v19 + 27) >
                (unsigned int)(unsigned __int8)(i - *(_BYTE*)(*v19 + 25))) {
          v23 = *(_QWORD*)(a1 + 216);
          v22 = *(_QWORD*)(a1 + 224);
          if (v23 >= v22) {
            v25 = *(_BYTE**)(a1 + 208);
            v26 = v23 - (_QWORD)v25;
            v27 = (__int64)(v23 - (_QWORD)v25) >> 2;
            v28 = v27 + 1;
            if ((unsigned __int64)(v27 + 1) >> 62 != 0) {
              goto LABEL_98;
            }
            v29 = v22 - (_QWORD)v25;
            if (v29 >> 1 > v28) {
              v28 = v29 >> 1;
            }
            if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFFCLL) {
              v30 = 0x3FFFFFFFFFFFFFFFLL;
            }
            else {
              v30 = v28;
            }
            if (v30 >> 62 != 0) {
              goto LABEL_99;
            }
            v2 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v30, 16, 0);
            v31 = v2 + v26;
            v32 = v2 + v26 - 4 * v27;
            *(_BYTE*)v31 = v18;
            *(_BYTE*)(v31 + 1) = i;
            *(_WORD*)(v31 + 2) = 0;
            if (v25 != (_BYTE*)v23) {
              v33 = v25;
              v34 = (_BYTE*)(v2 + v26 - 4 * v27);
              do {
                *v34 = *v33;
                v34[1] = v33[1];
                v34[2] = v33[2];
                v35 = v33[3];
                v33 += 4;
                v34[3] = v35;
                v34 += 4;
              } while (v33 != (_BYTE*)v23);
            }
            v24 = v31 + 4;
            *(_QWORD*)(a1 + 208) = v32;
            *(_QWORD*)(a1 + 216) = v31 + 4;
            *(_QWORD*)(a1 + 224) = v2 + 4 * v30;
            if (v25 != nullptr) {
              v36 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v36 = 56;
              }
              v2 = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v25);
            }
          }
          else {
            *(_BYTE*)v23 = v18;
            *(_BYTE*)(v23 + 1) = i;
            v24 = v23 + 4;
            *(_WORD*)(v23 + 2) = 0;
          }
          v37 = (_BYTE*)*v19;
          *(_QWORD*)(a1 + 216) = v24;
          v38 = v37[24];
          v39 = (unsigned __int8)v37[26];
          if (v39 <= (unsigned __int8)(v18 + 1 - v38) ||
              (v40 = v37[25], (v41 = (unsigned __int8)v37[27]) <=
                                  (unsigned __int8)(i - v40)) ||
              v39 <= (unsigned __int8)~(v38 - v18) ||
              v39 <= (unsigned __int8)(v18 - v38) ||
              v41 <= (unsigned __int8)(i - v40 + 1) ||
              v41 <= (unsigned __int8)~(v40 - i)) {
            v43 = *(_QWORD*)(a1 + 240);
            v42 = *(_QWORD*)(a1 + 248);
            if (v43 < v42) {
              *(_BYTE*)v43 = v18;
              *(_BYTE*)(v43 + 1) = i;
              v21 = v43 + 4;
              *(_WORD*)(v43 + 2) = 0;
            }
            else {
              v44 = *(_BYTE**)(a1 + 232);
              v45 = v43 - (_QWORD)v44;
              v46 = (__int64)(v43 - (_QWORD)v44) >> 2;
              v47 = v46 + 1;
              if ((unsigned __int64)(v46 + 1) >> 62 != 0) {
              LABEL_98:
                GameRoutine_74e1f0(v2);
              }
              v48 = v42 - (_QWORD)v44;
              if (v48 >> 1 > v47) {
                v47 = v48 >> 1;
              }
              if ((unsigned __int64)v48 >= 0x7FFFFFFFFFFFFFFCLL) {
                v49 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v49 = v47;
              }
              if (v49 >> 62 != 0) {
              LABEL_99:
                GameRoutine_60a210(v2);
              }
              v2 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v49, 16, 0);
              v50 = v2 + v45;
              v51 = v2 + v45 - 4 * v46;
              *(_BYTE*)v50 = v18;
              *(_BYTE*)(v50 + 1) = i;
              *(_WORD*)(v50 + 2) = 0;
              if (v44 != (_BYTE*)v43) {
                v52 = v44;
                v53 = (_BYTE*)(v2 + v45 - 4 * v46);
                do {
                  *v53 = *v52;
                  v53[1] = v52[1];
                  v53[2] = v52[2];
                  v54 = v52[3];
                  v52 += 4;
                  v53[3] = v54;
                  v53 += 4;
                } while (v52 != (_BYTE*)v43);
              }
              v21 = v50 + 4;
              *(_QWORD*)(a1 + 232) = v51;
              *(_QWORD*)(a1 + 240) = v50 + 4;
              *(_QWORD*)(a1 + 248) = v2 + 4 * v49;
              if (v44 != nullptr) {
                v55 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v55 = 56;
                }
                v2 = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v44);
              }
            }
            *(_QWORD*)(a1 + 240) = v21;
          }
        }
      }
      ++v18;
    } while (v18 != 32);
    v56 = *(char**)(a1 + 208);
    v57 = *(char**)(a1 + 216);
    if (v56 != v57) {
      v58 = std___1_piecewise_construct_ptr;
      do {
        v59 = *v56;
        v60 = v56[1];
        v115[0] = &v118;
        v118 = v60 + (v59 << 8);
        v61 = GameRoutine_1003260(a1 + 16, &v118, v58, v115, &v117);
        *(_QWORD*)(v61 + 128) = 0;
        *(_QWORD*)(v61 + 144) = 0;
        v62 = *(_OWORD*)(v61 + 128);
        v63 = *(_OWORD*)(v61 + 144);
        *(_QWORD*)(v61 + 160) = 0;
        *(_QWORD*)(v61 + 176) = 0;
        *(_QWORD*)(v61 + 192) = 0;
        *(_QWORD*)(v61 + 32) = 0;
        *(_QWORD*)(v61 + 40) = 0;
        *(_QWORD*)(v61 + 48) = 0;
        *(_QWORD*)(v61 + 56) = 0;
        *(_QWORD*)(v61 + 64) = 0;
        *(_QWORD*)(v61 + 72) = 0;
        *(_QWORD*)(v61 + 80) = 0;
        *(_QWORD*)(v61 + 88) = 0;
        *(_QWORD*)(v61 + 96) = 0;
        *(_QWORD*)(v61 + 104) = 0;
        *(_DWORD*)(v61 + 112) = 0;
        v115[0] = &v118;
        *(_OWORD*)(v61 + 128) = (unsigned __int64)v62;
        *(_OWORD*)(v61 + 144) = (unsigned __int64)v63;
        v64 = *(_OWORD*)(v61 + 176);
        *(_OWORD*)(v61 + 160) = *(unsigned __int64*)(v61 + 160);
        *(_OWORD*)(v61 + 176) = (unsigned __int64)v64;
        *(_OWORD*)(v61 + 192) = *(unsigned __int64*)(v61 + 192);
        v65 = GameRoutine_1003260(a1 + 16, &v118, v58, v115, &v117);
        *(_QWORD*)(v65 + 32) = a1 + 16;
        v66 = *(_DWORD*)v56;
        v56 += 4;
        *(_QWORD*)(v65 + 44) = 0xC2C80000C2C80000LL;
        *(_QWORD*)(v65 + 52) = 0xC2C80000C2C80000LL;
        *(_DWORD*)(v65 + 60) = -1027080192;
        *(_DWORD*)(v65 + 40) = v66;
      } while (v56 != v57);
      v56 = *(char**)(a1 + 208);
      v57 = *(char**)(a1 + 216);
    }
    if (v56 != v57) {
      v67 = std___1_piecewise_construct_ptr;
      do {
        v68 = *v56;
        v69 = v56[1];
        v115[0] = &v118;
        v118 = v69 + (v68 << 8);
        v70 = GameRoutine_1003260(a1 + 72, &v118, v67, v115, &v117);
        *(_QWORD*)(v70 + 128) = 0;
        *(_QWORD*)(v70 + 144) = 0;
        v71 = *(_OWORD*)(v70 + 128);
        v72 = *(_OWORD*)(v70 + 144);
        *(_QWORD*)(v70 + 160) = 0;
        *(_QWORD*)(v70 + 176) = 0;
        *(_QWORD*)(v70 + 192) = 0;
        *(_QWORD*)(v70 + 32) = 0;
        *(_QWORD*)(v70 + 40) = 0;
        *(_QWORD*)(v70 + 48) = 0;
        *(_QWORD*)(v70 + 56) = 0;
        *(_QWORD*)(v70 + 64) = 0;
        *(_QWORD*)(v70 + 72) = 0;
        *(_QWORD*)(v70 + 80) = 0;
        *(_QWORD*)(v70 + 88) = 0;
        *(_QWORD*)(v70 + 96) = 0;
        *(_QWORD*)(v70 + 104) = 0;
        *(_DWORD*)(v70 + 112) = 0;
        v115[0] = &v118;
        *(_OWORD*)(v70 + 128) = (unsigned __int64)v71;
        *(_OWORD*)(v70 + 144) = (unsigned __int64)v72;
        v73 = *(_OWORD*)(v70 + 176);
        *(_OWORD*)(v70 + 160) = *(unsigned __int64*)(v70 + 160);
        *(_OWORD*)(v70 + 176) = (unsigned __int64)v73;
        *(_OWORD*)(v70 + 192) = *(unsigned __int64*)(v70 + 192);
        v74 = GameRoutine_1003260(a1 + 72, &v118, v67, v115, &v117);
        *(_QWORD*)(v74 + 32) = a1 + 72;
        v75 = *(_DWORD*)v56;
        v56 += 4;
        *(_QWORD*)(v74 + 44) = 0xC2C80000C2C80000LL;
        *(_QWORD*)(v74 + 52) = 0xC2C80000C2C80000LL;
        *(_DWORD*)(v74 + 60) = -1027080192;
        *(_DWORD*)(v74 + 40) = v75;
      } while (v56 != v57);
    }
    v76 = *(char**)(a1 + 232);
    v77 = *(char**)(a1 + 240);
    if (v76 != v77) {
      v78 = std___1_piecewise_construct_ptr;
      do {
        v79 = *v76;
        v80 = v76[1];
        v115[0] = &v118;
        v118 = v80 + (v79 << 8);
        v81 = GameRoutine_1003260(a1 + 128, &v118, v78, v115, &v117);
        *(_QWORD*)(v81 + 128) = 0;
        *(_QWORD*)(v81 + 144) = 0;
        v82 = *(_OWORD*)(v81 + 128);
        v83 = *(_OWORD*)(v81 + 144);
        *(_QWORD*)(v81 + 160) = 0;
        *(_QWORD*)(v81 + 176) = 0;
        *(_QWORD*)(v81 + 192) = 0;
        *(_QWORD*)(v81 + 32) = 0;
        *(_QWORD*)(v81 + 40) = 0;
        *(_QWORD*)(v81 + 48) = 0;
        *(_QWORD*)(v81 + 56) = 0;
        *(_QWORD*)(v81 + 64) = 0;
        *(_QWORD*)(v81 + 72) = 0;
        *(_QWORD*)(v81 + 80) = 0;
        *(_QWORD*)(v81 + 88) = 0;
        *(_QWORD*)(v81 + 96) = 0;
        *(_QWORD*)(v81 + 104) = 0;
        *(_DWORD*)(v81 + 112) = 0;
        v115[0] = &v118;
        *(_OWORD*)(v81 + 128) = (unsigned __int64)v82;
        *(_OWORD*)(v81 + 144) = (unsigned __int64)v83;
        v84 = *(_OWORD*)(v81 + 176);
        *(_OWORD*)(v81 + 160) = *(unsigned __int64*)(v81 + 160);
        *(_OWORD*)(v81 + 176) = (unsigned __int64)v84;
        *(_OWORD*)(v81 + 192) = *(unsigned __int64*)(v81 + 192);
        v85 = GameRoutine_1003260(a1 + 128, &v118, v78, v115, &v117);
        *(_QWORD*)(v85 + 32) = a1 + 128;
        v86 = *(_DWORD*)v76;
        v76 += 4;
        *(_QWORD*)(v85 + 44) = 0xC2C80000C2C80000LL;
        *(_QWORD*)(v85 + 52) = 0xC2C80000C2C80000LL;
        *(_DWORD*)(v85 + 60) = -1027080192;
        *(_DWORD*)(v85 + 40) = v86;
      } while (v76 != v77);
    }
    v5 = v114;
    *(_BYTE*)(a1 + 8) = 1;
  }
  v87 = *(_QWORD*)(a1 + 256);
  v88 = v115;
  v89 = GameData_212cfb8[0];
  v116 = v115;
  *(_QWORD*)(a1 + 264) = v87;
  v90 = *v89;
  v115[0] = GameData_1ff1ec0;
  v115[1] = a1;
  v91 = *(_QWORD*)(v90 + 16);
  v92 = *(__int64**)(v91 + 18568);
  v93 = *(__int64**)(v91 + 18560);
  if (v92 != v93) {
    do {
      v94 = *v93++;
      v118 = v94;
      if (v116 == nullptr) {
        GameRoutine_60a310(0, v3, v4);
      }
      (*(void (**)(_QWORD*, __int64*))(*v116 + 48LL))(v116, &v118);
    } while (v93 != v92);
    v88 = v116;
    if (v116 != v115) {
      if (v116 != nullptr) {
        v95 = 40;
      LABEL_81:
        (*(void (**)(void*))(*v88 + v95))(v88);
      }
      LOBYTE(v118) = 0;
      v96 = v5;
      v97 = (_QWORD*)GameData_21323e8[0];
      fw_world_JobContext_Drain(*(_QWORD*)GameData_21323e8[0]);
      v98 = *v97;
      v99 = *v97 + 32LL;
      do {
        v100 = *(_DWORD*)(v98 + 8);
        v101 = (v100 + 1) & 0xFFFFFF;
        if (v100 + 1 <= 0) {
          v101 = -(-(v100 + 1) & 0xFFFFFF);
        }
        *(_DWORD*)(v98 + 8) = v101;
        v102 = atomic_load((unsigned __int64*)(v99 + 32LL * (v100 & 0x3F)));
        if (v102 != 0) {
          v100 = -1;
        }
      } while (v100 < 0);
      v103 = v100 | 0xC0000000;
      v104 = (unsigned __int64*)(v99 + 32LL * (v100 & 0x3F));
      nn_os_ClearLightEvent(v104 + 1);
      v105 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      v105[2] = 0;
      v106 = v105;
      v107 = GameData_212e368[0];
      v105[8] = 0;
      *v105 = v107 + 16;
      v105[1] = 0;
      v108 = v104[3];
      v104[3] = (unsigned __int64)v106;
      if (v108 != 0) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)v108 + 8LL))(v108);
      }
      atomic_store(v103, v104);
      v106[1] = v98;
      *((_DWORD*)v106 + 4) = v103;
      v109 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      v116 = v109;
      *v109 = GameData_1ff1fc0;
      v109[1] = v96;
      v109[2] = 3;
      v109[3] = a1;
      v109[4] = &v118;
      fw_world_SwapCallables(v115, v106 + 4);
      if (v116 == v115) {
        v110 = 32;
      }
      else {
        if (v116 == nullptr) {
          goto LABEL_95;
        }
        v110 = 40;
      }
      (*(void (**)(void*))(*v116 + v110))(v116);
    LABEL_95:
      fw_world_JobQueue_Submit(*(_QWORD*)(v98 + 16), v103);
      fw_world_JobContext_Wait(*v97, v103);
      v111 = (unsigned __int8)v118;
      v112 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v112 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v112, v96);
      return v111;
    }
  }
  v95 = 32;
  goto LABEL_81;
}

__int64 game_map_MapHeightMap_TryRefreshBmap_lambda0_Invoke_f10200(__int64 a1,
                                                                   __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  _QWORD v6[4];
  _QWORD* v7;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v7 = v6;
  v6[0] = GameData_1ff1f30;
  v6[1] = v2;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 744LL))(v3, v6);
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

__int64 game_map_MapHeightMap_TryRefreshBmap_lambda0_Invoke_f10370(__int64 a1,
                                                                   _DWORD* a2,
                                                                   _DWORD* a3)
{
  char v3;
  __int64 v4;
  _BYTE v6[2];
  __int16 v7;

  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v7 = 0;
  v6[0] = v3;
  v6[1] = *a3;
  return GameRoutine_74e080(v4 + 256, v6);
}

__int64 game_map_MapHeightMap_TryRefreshBmap_lambda1_Invoke(__int64 result,
                                                            __int64 a2,
                                                            atomic_uint* a3)
{
  int v3;
  void* v4;
  unsigned int v5;
  signed int add;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned int v15;
  char* v16;
  char* v17;
  unsigned int v18;
  char* v19;
  char* v20;
  __int64 v21;
  unsigned int v22;
  char* v23;
  char* v24;
  unsigned __int64 i;
  unsigned __int64 v26;
  unsigned int v27;
  char* v28;
  char* v29;
  unsigned __int8* v30;
  bool v31;
  unsigned int v32;
  int v33;
  __int64 v34;
  _DWORD* v35;
  __int64 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  unsigned __int8* v40;
  int v41;
  int v42;
  char* v43;
  char* v44;
  unsigned __int8* v45;
  unsigned int v46;
  int v47;
  __int64 v48;
  _DWORD* v49;
  __int64 v50;
  __int128 v51;
  __int128 v52;
  __int128 v53;
  unsigned __int8* v54;
  int v55;
  int v56;
  float v57;
  float* v58;
  float v59;
  char* v60;
  char* j;
  int v62;
  int v63;
  unsigned int v64;
  __int64 v65;
  _DWORD* v66;
  __int64 v67;
  __int128 v68;
  __int128 v69;
  __int128 v70;
  __int128 v71;
  __int128 v72;
  int v73;
  atomic_uint* v74;
  unsigned int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  __int64* v82;

  v3 = *(_DWORD*)(result + 16);
  v77 = result;
  if (v3 >= 1) {
    v4 = std___1_piecewise_construct_ptr;
    v74 = a3;
    v73 = *(_DWORD*)(result + 16);
    v5 = v3 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                       *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                      2) &
                     0xFFFFFFFE) +
                    2);
    if ((int)v5 <= 1) {
      v5 = 1;
    }
    while (1) {
      add = atomic_fetch_add(a3, v5);
      if (add < v3) {
        break;
      }
    LABEL_5:
      v5 >>= 1;
      if (v5 <= 1) {
        v5 = 1;
      }
      if (add >= v3) {
        return result;
      }
    }
    v75 = v5;
    v7 = add + v5;
    if (v7 >= v3) {
      v7 = v3;
    }
    v8 = add;
    v76 = v7;
    while (1) {
      v9 = *(_QWORD*)(v77 + 24);
      v10 = *(_DWORD*)(*(_QWORD*)(v77 + 8) + 4 * v8);
      v78 = v8;
      v79 = v10;
      v12 = *(_QWORD*)(*GameData_212ce80[0] + 61448);
      v11 = *(_QWORD*)(*GameData_212ce80[0] + 61456);
      if (v10 == 1) {
        v17 = *(char**)(v9 + 208);
        v16 = *(char**)(v9 + 216);
        if (v17 == v16) {
          goto LABEL_36;
        }
        do {
          v18 = *v17 + 32 * v17[1];
          if (v18 >= 0x400) {
            v18 = 0;
          }
          result = GameRoutine_1002b40(v9 + 72, v17, v11 + 20LL * v18);
          if ((result & 1) != 0) {
            break;
          }
          v17 += 4;
        } while (v17 != v16);
      }
      else if (v10 == 2) {
        v14 = *(char**)(v9 + 232);
        v13 = *(char**)(v9 + 240);
        if (v14 == v13) {
          goto LABEL_36;
        }
        do {
          v15 = *v14 + 32 * v14[1];
          if (v15 >= 0x400) {
            v15 = 0;
          }
          result = GameRoutine_1002b40(v9 + 128, v14, v11 + 20LL * v15);
          if ((result & 1) != 0) {
            break;
          }
          v14 += 4;
        } while (v14 != v13);
      }
      else {
        v20 = *(char**)(v9 + 208);
        v19 = *(char**)(v9 + 216);
        if (v20 == v19) {
        LABEL_36:
          result = 0;
          goto LABEL_37;
        }
        v21 = v9 + 56LL * v10;
        do {
          v22 = *v20 + 32 * v20[1];
          if (v22 >= 0x400) {
            v22 = 0;
          }
          result = GameRoutine_1002b40(v21 + 16, v20, v12 + 20LL * v22);
          if ((result & 1) != 0) {
            break;
          }
          v20 += 4;
        } while (v20 != v19);
      }
    LABEL_37:
      v24 = *(char**)(v9 + 256);
      v23 = *(char**)(v9 + 264);
      for (i = ((v23 - v24) >> 2) - 0x61C8864680B583EBLL; v24 != v23;
           i = (v27 - 0x61C8864680B583EBLL + (v26 << 12) + (v26 >> 4)) ^ v26) {
        v26 =
            ((i << 12) - 0x61C8864680B583EBLL + (i >> 4) + (unsigned int)*v24) ^
            i;
        v27 = v24[1];
        v24 += 4;
      }
      if (*(_QWORD*)(v9 + 184 + 8 * v79) == i) {
        if ((result & 1) == 0) {
          goto LABEL_14;
        }
        if ((_DWORD)v79 == 1) {
        LABEL_59:
          v44 = *(char**)(v9 + 208);
          v43 = *(char**)(v9 + 216);
          if (v44 == v43) {
            game_map_HeightCellMap_Commit(v9 + 56LL * (int)v79 + 16);
          LABEL_75:
            v57 = *(float*)(*GameData_212f878 + 1424);
            v58 = (float*)(v9 + 88);
            *(_BYTE*)(v9 + 9) = 0;
            v59 = v57 * 0.8f;
            while (1) {
              v58 = *(float**)v58;
              if (v58 == nullptr) {
                break;
              }
              if (fabsf(v58[49] +
                        (float)((float)((float)((float)(v58[33] + v58[37]) +
                                                v58[41]) +
                                        v58[45]) *
                                -0.25f)) >= v59) {
                *(_BYTE*)(v9 + 9) = 1;
                break;
              }
            }
            *(_BYTE*)(v9 + 10) = 1;
            goto LABEL_13;
          }
          do {
            v45 = *(unsigned __int8**)(v9 + 256);
            v54 = *(unsigned __int8**)(v9 + 264);
            v55 = *v44;
            v56 = v44[1];
            if (v45 != v54) {
              while (*v45 != (unsigned __int8)v55 ||
                     v45[1] != (unsigned __int8)v56) {
                v45 += 4;
                if (v45 == v54) {
                  v45 = *(unsigned __int8**)(v9 + 264);
                  break;
                }
              }
            }
            v31 = v45 == v54;
            v46 = v55 + 32 * v56;
            v47 = v56 + (v55 << 8);
            v82 = &v80;
            if (v31) {
              v48 = v11;
            }
            else {
              v48 = v12;
            }
            if (v46 >= 0x400) {
              v46 = 0;
            }
            v80 = v47;
            v49 = (_DWORD*)(v48 + 20LL * v46);
            v50 = GameRoutine_1003260(v9 + 72, &v80, v4, &v82, &v81);
            *(_QWORD*)(v50 + 128) = 0;
            *(_QWORD*)(v50 + 144) = 0;
            v44 += 4;
            v51 = *(_OWORD*)(v50 + 128);
            v52 = *(_OWORD*)(v50 + 144);
            *(_QWORD*)(v50 + 160) = 0;
            *(_QWORD*)(v50 + 176) = 0;
            *(_QWORD*)(v50 + 192) = 0;
            *(_QWORD*)(v50 + 64) = 0;
            *(_QWORD*)(v50 + 72) = 0;
            *(_QWORD*)(v50 + 80) = 0;
            *(_QWORD*)(v50 + 88) = 0;
            *(_QWORD*)(v50 + 96) = 0;
            *(_QWORD*)(v50 + 104) = 0;
            *(_DWORD*)(v50 + 112) = 0;
            *(_OWORD*)(v50 + 128) = (unsigned __int64)v51;
            *(_OWORD*)(v50 + 144) = (unsigned __int64)v52;
            v53 = *(_OWORD*)(v50 + 176);
            *(_OWORD*)(v50 + 160) = *(unsigned __int64*)(v50 + 160);
            *(_OWORD*)(v50 + 176) = (unsigned __int64)v53;
            *(_OWORD*)(v50 + 192) = *(unsigned __int64*)(v50 + 192);
            LODWORD(v51) = *v49;
            *(_DWORD*)(v50 + 44) = *v49;
            *(_DWORD*)(v50 + 68) = v51;
            *(_DWORD*)(v50 + 88) = v51;
            LODWORD(v51) = v49[1];
            *(_DWORD*)(v50 + 48) = v51;
            *(_DWORD*)(v50 + 72) = v51;
            *(_DWORD*)(v50 + 92) = v51;
            LODWORD(v51) = v49[2];
            *(_DWORD*)(v50 + 52) = v51;
            *(_DWORD*)(v50 + 76) = v51;
            *(_DWORD*)(v50 + 96) = v51;
            LODWORD(v51) = v49[3];
            *(_DWORD*)(v50 + 56) = v51;
            *(_DWORD*)(v50 + 80) = v51;
            *(_DWORD*)(v50 + 100) = v51;
            LODWORD(v51) = v49[4];
            *(_DWORD*)(v50 + 60) = v51;
            *(_DWORD*)(v50 + 84) = v51;
            *(_DWORD*)(v50 + 104) = v51;
          } while (v44 != v43);
          goto LABEL_74;
        }
      }
      else {
        *(_QWORD*)(v9 + 184 + 8 * v79) = i;
        if ((_DWORD)v79 == 1) {
          goto LABEL_59;
        }
      }
      if ((_DWORD)v79 != 2) {
        v60 = *(char**)(v9 + 208);
        for (j = *(char**)(v9 + 216); v60 != j; *(_DWORD*)(v67 + 104) = v71) {
          v62 = *v60;
          v63 = v60[1];
          v82 = &v80;
          v64 = v62 + 32 * v63;
          v65 = v63 + (v62 << 8);
          if (v64 >= 0x400) {
            v64 = 0;
          }
          v80 = v65;
          v66 = (_DWORD*)(v12 + 20LL * v64);
          v67 = GameRoutine_1003260(v9 + 56LL * (int)v79 + 16, &v80, v4, &v82,
                                    &v81);
          *(_QWORD*)(v67 + 128) = 0;
          *(_QWORD*)(v67 + 144) = 0;
          v60 += 4;
          v68 = *(_OWORD*)(v67 + 128);
          v69 = *(_OWORD*)(v67 + 144);
          *(_QWORD*)(v67 + 160) = 0;
          *(_QWORD*)(v67 + 176) = 0;
          *(_QWORD*)(v67 + 192) = 0;
          v70 = *(_OWORD*)(v67 + 192);
          *(_QWORD*)(v67 + 64) = 0;
          *(_QWORD*)(v67 + 72) = 0;
          *(_QWORD*)(v67 + 80) = 0;
          *(_QWORD*)(v67 + 88) = 0;
          *(_QWORD*)(v67 + 96) = 0;
          *(_QWORD*)(v67 + 104) = 0;
          *(_DWORD*)(v67 + 112) = 0;
          *(_OWORD*)(v67 + 128) = (unsigned __int64)v68;
          *(_OWORD*)(v67 + 144) = (unsigned __int64)v69;
          v71 = *(_OWORD*)(v67 + 160);
          v72 = *(_OWORD*)(v67 + 176);
          *(_OWORD*)(v67 + 192) = (unsigned __int64)v70;
          *(_OWORD*)(v67 + 160) = (unsigned __int64)v71;
          *(_OWORD*)(v67 + 176) = (unsigned __int64)v72;
          LODWORD(v71) = *v66;
          *(_DWORD*)(v67 + 44) = *v66;
          *(_DWORD*)(v67 + 68) = v71;
          *(_DWORD*)(v67 + 88) = v71;
          LODWORD(v71) = v66[1];
          *(_DWORD*)(v67 + 48) = v71;
          *(_DWORD*)(v67 + 72) = v71;
          *(_DWORD*)(v67 + 92) = v71;
          LODWORD(v71) = v66[2];
          *(_DWORD*)(v67 + 52) = v71;
          *(_DWORD*)(v67 + 76) = v71;
          *(_DWORD*)(v67 + 96) = v71;
          LODWORD(v71) = v66[3];
          *(_DWORD*)(v67 + 56) = v71;
          *(_DWORD*)(v67 + 80) = v71;
          *(_DWORD*)(v67 + 100) = v71;
          LODWORD(v71) = v66[4];
          *(_DWORD*)(v67 + 60) = v71;
          *(_DWORD*)(v67 + 84) = v71;
        }
      LABEL_12:
        game_map_HeightCellMap_Commit(v9 + 56LL * (int)v79 + 16);
        goto LABEL_13;
      }
      v29 = *(char**)(v9 + 232);
      v28 = *(char**)(v9 + 240);
      if (v29 == v28) {
        goto LABEL_12;
      }
      do {
        v30 = *(unsigned __int8**)(v9 + 256);
        v40 = *(unsigned __int8**)(v9 + 264);
        v41 = *v29;
        v42 = v29[1];
        if (v30 != v40) {
          while (*v30 != (unsigned __int8)v41 ||
                 v30[1] != (unsigned __int8)v42) {
            v30 += 4;
            if (v30 == v40) {
              v30 = *(unsigned __int8**)(v9 + 264);
              break;
            }
          }
        }
        v31 = v30 == v40;
        v32 = v41 + 32 * v42;
        v33 = v42 + (v41 << 8);
        v82 = &v80;
        if (v31) {
          v34 = v11;
        }
        else {
          v34 = v12;
        }
        if (v32 >= 0x400) {
          v32 = 0;
        }
        v80 = v33;
        v35 = (_DWORD*)(v34 + 20LL * v32);
        v36 = GameRoutine_1003260(v9 + 128, &v80, v4, &v82, &v81);
        *(_QWORD*)(v36 + 128) = 0;
        *(_QWORD*)(v36 + 144) = 0;
        v29 += 4;
        v37 = *(_OWORD*)(v36 + 128);
        v38 = *(_OWORD*)(v36 + 144);
        *(_QWORD*)(v36 + 160) = 0;
        *(_QWORD*)(v36 + 176) = 0;
        *(_QWORD*)(v36 + 192) = 0;
        *(_QWORD*)(v36 + 64) = 0;
        *(_QWORD*)(v36 + 72) = 0;
        *(_QWORD*)(v36 + 80) = 0;
        *(_QWORD*)(v36 + 88) = 0;
        *(_QWORD*)(v36 + 96) = 0;
        *(_QWORD*)(v36 + 104) = 0;
        *(_DWORD*)(v36 + 112) = 0;
        *(_OWORD*)(v36 + 128) = (unsigned __int64)v37;
        *(_OWORD*)(v36 + 144) = (unsigned __int64)v38;
        v39 = *(_OWORD*)(v36 + 176);
        *(_OWORD*)(v36 + 160) = *(unsigned __int64*)(v36 + 160);
        *(_OWORD*)(v36 + 176) = (unsigned __int64)v39;
        *(_OWORD*)(v36 + 192) = *(unsigned __int64*)(v36 + 192);
        LODWORD(v37) = *v35;
        *(_DWORD*)(v36 + 44) = *v35;
        *(_DWORD*)(v36 + 68) = v37;
        *(_DWORD*)(v36 + 88) = v37;
        LODWORD(v37) = v35[1];
        *(_DWORD*)(v36 + 48) = v37;
        *(_DWORD*)(v36 + 72) = v37;
        *(_DWORD*)(v36 + 92) = v37;
        LODWORD(v37) = v35[2];
        *(_DWORD*)(v36 + 52) = v37;
        *(_DWORD*)(v36 + 76) = v37;
        *(_DWORD*)(v36 + 96) = v37;
        LODWORD(v37) = v35[3];
        *(_DWORD*)(v36 + 56) = v37;
        *(_DWORD*)(v36 + 80) = v37;
        *(_DWORD*)(v36 + 100) = v37;
        LODWORD(v37) = v35[4];
        *(_DWORD*)(v36 + 60) = v37;
        *(_DWORD*)(v36 + 84) = v37;
        *(_DWORD*)(v36 + 104) = v37;
      } while (v29 != v28);
    LABEL_74:
      game_map_HeightCellMap_Commit(v9 + 56LL * (int)v79 + 16);
      if ((_DWORD)v79 == 1) {
        goto LABEL_75;
      }
    LABEL_13:
      nn_os_LockMutex(&GameData_2167748);
      **(_BYTE**)(v77 + 32) = 1;
      result = nn_os_UnlockMutex(&GameData_2167748);
    LABEL_14:
      v8 = v78 + 1;
      if (v78 + 1 >= v76) {
        add = v78 + 1;
        a3 = v74;
        v3 = v73;
        v5 = v75;
        goto LABEL_5;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
