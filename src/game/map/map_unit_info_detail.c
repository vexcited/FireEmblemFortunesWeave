#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Cursor_730e40(_QWORD, _QWORD);
__int64 GameRoutine_182cf20(_QWORD, _QWORD);
__int64 GameRoutine_752480(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7595d0(_QWORD);
__int64 MapUnitInfo_1828ef0(__int64 result, __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_212d0d0[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212cfc0[10];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 MapUnitInfoDetail_Unknown140(__int64 a1, __int64* a2);
__int64 MapUnitInfoDetail_Unknown103(__int64 a1);
__int64 MapUnitInfoDetail_Unknown105(__int64 a1);
_QWORD* GameRoutine_182ff80(_QWORD* result, int*, _QWORD*, __int64, __int64,
                            int*, __int64);
_QWORD* GameRoutine_1830fa0(_QWORD* result, int*, _QWORD*, __int64, __int64,
                            int*, __int64);
__int64 GameRoutine_1000();
__int64 GameRoutine_182f4a0(_QWORD);
__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_6fc7a0(_QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
extern __int64* GameData_212c880[5];
__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda0_Invoke(__int64 result,
                                                            int* a2);
__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda1_Invoke(__int64 result,
                                                            int* a2);
_QWORD* MapUnitInfoDetail_18302e0(_QWORD* result, int* a2, _QWORD* a3,
                                  __int64 a4, unsigned __int64 a5, __int64 a6);
__int64* MapUnitInfoDetail_18305e0(__int64* result, __int64 a2, __int64* a3,
                                   __int64 a4, char* a5, __int64* a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10);
_QWORD* MapUnitInfoDetail_1831300(_QWORD* result, int* a2, _QWORD* a3,
                                  __int64 a4, unsigned __int64 a5, __int64 a6);
__int64* MapUnitInfoDetail_1831600(__int64* result, __int64 a2, __int64* a3,
                                   __int64 a4, char* a5, __int64* a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10);
__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda5_Invoke(__int64 result,
                                                            unsigned int* a2);

__int64 MapUnitInfoDetail_Unknown140(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "XHelp";
    *(_QWORD*)(v15 + 8) = 0;
    v16 = v14 + 40 * v12;
    *(_BYTE*)(v15 + 16) = 0;
    *(_BYTE*)(v15 + 28) = 0;
    v6 = v14 + v8 + 40;
    *(_QWORD*)(v15 + 32) = 0;
    *(_DWORD*)(v15 + 20) = 2;
    *(_DWORD*)(v15 + 24) = result;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 16) = 0;
    *(_BYTE*)(v4 + 28) = 0;
    v6 = v4 + 40;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "XHelp";
    *(_QWORD*)(v4 + 8) = 0;
    *(_DWORD*)(v4 + 20) = 2;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

__int64 MapUnitInfoDetail_Unknown103(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_212cfc0[0];
  v3 = GameRoutine_752480(
      *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL),
      *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL), 1);
  if (*(_QWORD*)(a1 + 1064) == v3) {
    return 0;
  }
  v4 = Cursor_730e40(*(_QWORD*)(*v2 + 48), v3);
  v5 = GameRoutine_7595d0(v4);
  *(_QWORD*)(a1 + 1064) = v5;
  MapUnitInfo_1828ef0(*(_QWORD*)GameData_212d0d0[0], v5);
  GameRoutine_182cf20(a1, 0);
  return 13;
}

__int64 MapUnitInfoDetail_Unknown105(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_212cfc0[0];
  v3 = GameRoutine_752480(
      *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 8LL),
      *(unsigned int*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 12LL), 0);
  if (*(_QWORD*)(a1 + 1064) == v3) {
    return 0;
  }
  v4 = Cursor_730e40(*(_QWORD*)(*v2 + 48), v3);
  v5 = GameRoutine_7595d0(v4);
  *(_QWORD*)(a1 + 1064) = v5;
  MapUnitInfo_1828ef0(*(_QWORD*)GameData_212d0d0[0], v5);
  GameRoutine_182cf20(a1, 0);
  return 13;
}

__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda0_Invoke(__int64 result,
                                                            int* a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;

  v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 1064LL);
  if (v2 != 0 && (*a2 & 0xFFF) != 0) {
    v4 = result;
    v5 = GameData_212c880[0];
    v6 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    result = GameRoutine_6fc510(v6);
    if ((result & 1) == 0) {
      if (*(_BYTE*)(v6 + 273) == 0 ||
          ((v7 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * (*a2 & 0xFFFLL)),
            v8 = *(unsigned __int8*)(v7 + 104),
            v9 = *(unsigned __int8*)(v7 + 273), (unsigned int)(v8 - 5) >= 2)
               ? (v10 = 0)
               : (v10 = ((unsigned int)*a2 >> 19) & 0x1F),
           (int)(v10 - (((unsigned int)*a2 >> 12) & 0x7F) + v9) >= 1)) {
        result = GameRoutine_6fc7a0(v6, v2 + 1744);
        if ((result & 1) != 0) {
          v11 = *(_QWORD**)(v4 + 16);
          v12 = v11[1];
          v13 = v11[2];
          v14 = v13 - v12;
          v15 = v13 == v12;
          v16 = *a2;
          v17 = (v14 << 6) - 1;
          v18 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * (*a2 & 0xFFFLL));
          if (v15) {
            v19 = 0;
          }
          else {
            v19 = v17;
          }
          v20 = v11[5] + v11[4];
          if (v19 == v20) {
            result = GameRoutine_182f4a0(v11);
            v12 = v11[1];
            v20 = v11[5] + v11[4];
            v16 = *a2;
          }
          v21 = *(_QWORD*)(v12 + 8 * (v20 >> 9)) + 8 * (v20 & 0x1FF);
          *(_DWORD*)v21 = v16;
          *(_BYTE*)(v21 + 4) = *(_BYTE*)(v18 + 112);
          ++v11[5];
        }
      }
    }
  }
  return result;
}

__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda1_Invoke(__int64 result,
                                                            int* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;

  v2 = GameData_212c880[0];
  v3 = *a2 & 0xFFF;
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v3);
  if ((*(_WORD*)(v4 + 754) & 0x20) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(result + 8) + 1064LL);
    v6 = v5 == 0 || (*a2 & 0xFFF) == 0;
    if (!v6) {
      v7 = result;
      result = GameRoutine_6fc510(
          *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v3));
      if ((result & 1) == 0) {
        if (*(_BYTE*)(v4 + 273) == 0 ||
            ((v9 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL)),
              v10 = *(unsigned __int8*)(v9 + 104),
              v11 = *(unsigned __int8*)(v9 + 273), (unsigned int)(v10 - 5) >= 2)
                 ? (v12 = 0)
                 : (v12 = ((unsigned int)*a2 >> 19) & 0x1F),
             (int)(v12 - (((unsigned int)*a2 >> 12) & 0x7F) + v11) >= 1)) {
          result = GameRoutine_6fc7a0(v4, v5 + 1744);
          if ((result & 1) != 0) {
            v13 = *(_QWORD**)(v7 + 16);
            v14 = v13[1];
            v15 = v13[2];
            v16 = v15 - v14;
            v6 = v15 == v14;
            v17 = *a2;
            v18 = (v16 << 6) - 1;
            v19 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL));
            if (v6) {
              v20 = 0;
            }
            else {
              v20 = v18;
            }
            v21 = v13[5] + v13[4];
            if (v20 == v21) {
              result = GameRoutine_182f4a0(*(_QWORD*)(v7 + 16));
              v14 = v13[1];
              v21 = v13[5] + v13[4];
              v17 = *a2;
            }
            v22 = *(_QWORD*)(v14 + 8 * (v21 >> 9)) + 8 * (v21 & 0x1FF);
            *(_DWORD*)v22 = v17;
            *(_BYTE*)(v22 + 4) = *(_BYTE*)(v19 + 112);
            ++v13[5];
          }
        }
      }
    }
  }
  return result;
}

_QWORD* MapUnitInfoDetail_18302e0(_QWORD* result, int* a2, _QWORD* a3,
                                  __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  int* v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64* v24;
  int* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  int* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  int* v36;

  if (a5 != 0) {
    if (a5 == 2) {
      if (a4 == *a3) {
        a4 = *(a3 - 1) + 4096LL;
      }
      if (*(unsigned __int8*)(a4 - 4) <=
          (unsigned int)*((unsigned __int8*)a2 + 4)) {
        *(_QWORD*)a6 = *(_QWORD*)a2;
        v6 = *(_QWORD*)(a4 - 8);
      }
      else {
        *(_QWORD*)a6 = *(_QWORD*)(a4 - 8);
        v6 = *(_QWORD*)a2;
      }
      *(_QWORD*)(a6 + 8) = v6;
    }
    else if (a5 == 1) {
      *(_QWORD*)a6 = *(_QWORD*)a2;
    }
    else if ((__int64)a5 > 8) {
      v15 = a5 >> 1;
      v18 = a4;
      v19 = (a5 >> 1) + (((__int64)a2 - *result) >> 3);
      if (v19 < 1) {
        v22 = 511 - v19;
        v20 = &result[-(v22 >> 9)];
        v21 = (int*)(*v20 + 8LL * (~(_WORD)v22 & 0x1FF));
      }
      else {
        v20 = &result[(unsigned __int64)v19 >> 9];
        v21 = (int*)(*v20 + 8 * (v19 & 0x1FF));
      }
      v23 = result;
      v24 = (__int64*)a2;
      GameRoutine_182ff80(result, a2, v20, (__int64)v21, a5 >> 1, (int*)a6,
                          v15);
      result = GameRoutine_182ff80(v20, v21, a3, v18, a5 - v15,
                                   (int*)(a6 + 8 * v15), a5 - v15);
      if (v24 == (__int64*)v21) {
        v26 = v21;
        v27 = (_QWORD*)a6;
      LABEL_45:
        while (v26 != (int*)v18) {
          v35 = *(_QWORD*)v26;
          v26 += 2;
          *v27 = v35;
          if ((char*)((char*)v26 - *v20) == (char*)GameRoutine_1000) {
            v36 = (int*)v20[1];
            ++v20;
            v26 = v36;
          }
          ++v27;
        }
      }
      else {
        v26 = v21;
        v27 = (_QWORD*)a6;
        v28 = v23;
        while (v26 != (int*)v18) {
          if (*((unsigned __int8*)v26 + 4) <=
              (unsigned int)*((unsigned __int8*)v24 + 4)) {
            v31 = *v24++;
            *v27 = v31;
            if ((char*)((char*)v24 - *v28) == (char*)GameRoutine_1000) {
              v32 = (__int64*)v28[1];
              ++v28;
              v24 = v32;
            }
          }
          else {
            v29 = *(_QWORD*)v26;
            v26 += 2;
            *v27 = v29;
            if ((char*)((char*)v26 - *v20) == (char*)GameRoutine_1000) {
              v30 = (int*)v20[1];
              ++v20;
              v26 = v30;
            }
          }
          ++v27;
          if (v24 == (__int64*)v21) {
            goto LABEL_45;
          }
        }
        while (v24 != (__int64*)v21) {
          v33 = *v24++;
          *v27 = v33;
          if ((char*)((char*)v24 - *v28) == (char*)GameRoutine_1000) {
            v34 = (__int64*)v28[1];
            ++v28;
            v24 = v34;
          }
          ++v27;
        }
      }
    }
    else if (a2 != (int*)a4) {
      v7 = 0;
      v8 = (_QWORD*)a6;
      *(_QWORD*)a6 = *(_QWORD*)a2;
      while (1) {
        a2 += 2;
        if ((char*)((char*)a2 - *result) == (char*)GameRoutine_1000) {
          v9 = (__int64*)result[1];
          ++result;
          a2 = (int*)v9;
        }
        if (a2 == (int*)a4) {
          break;
        }
        v10 = v8 + 1;
        if (*((unsigned __int8*)a2 + 4) <=
            (unsigned int)*((unsigned __int8*)v8 + 4)) {
          *v10 = *(_QWORD*)a2;
        }
        else {
          v8[1] = *v8;
          v11 = a6;
          if (v8 != (_QWORD*)a6) {
            v12 = v7;
            while (1) {
              v11 = a6 + v12;
              v13 = *(unsigned __int8*)(a6 + v12 - 4);
              if (*((unsigned __int8*)a2 + 4) <= v13) {
                break;
              }
              v14 = *(_DWORD*)(v11 - 8);
              v12 -= 8;
              *(_BYTE*)(v11 + 4) = v13;
              *(_DWORD*)v11 = v14;
              if (v12 == 0) {
                v11 = a6;
                break;
              }
            }
          }
          *(_DWORD*)v11 = *a2;
          *(_BYTE*)(v11 + 4) = *((_BYTE*)a2 + 4);
        }
        v7 += 8;
        v8 = v10;
      }
    }
  }
  return result;
}

__int64* MapUnitInfoDetail_18305e0(__int64* result, __int64 a2, __int64* a3,
                                   __int64 a4, char* a5, __int64* a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10)
{
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64* v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  int v54;
  __int64 v55;
  __int64 v56;
  _BOOL4 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  __int64* v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  _QWORD* v73;
  __int64* v74;
  __int64* v75;
  __int64 v76;
  __int64* v77;
  _BYTE* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v87;
  __int64* v88;
  __int64* v89;
  __int64 v90;
  __int64* v91;
  char v92;
  __int64 v93;
  char v94;
  __int64 v95;
  int v96;
  __int64* v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  char v108;
  char v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;

  if (a8 == 0) {
    return result;
  }
  while (a7 > a10 && a8 > a10) {
    if (a7 == 0) {
      return result;
    }
    while (*(unsigned __int8*)(a4 + 4) <=
           (unsigned int)*(unsigned __int8*)(a2 + 4)) {
      a2 += 8;
      if (a2 - *result == 4096) {
        v12 = result[1];
        ++result;
        a2 = v12;
      }
      if (--a7 == 0) {
        return result;
      }
    }
    if (a7 >= a8) {
      if (a7 == 1) {
        v96 = *(_DWORD*)a2;
        *(_DWORD*)a2 = *(_DWORD*)a4;
        *(_DWORD*)a4 = v96;
        LOBYTE(v96) = *(_BYTE*)(a2 + 4);
        *(_BYTE*)(a2 + 4) = *(_BYTE*)(a4 + 4);
        *(_BYTE*)(a4 + 4) = v96;
        return result;
      }
      v21 = result;
      v22 = a2;
      v29 = a7 / 2;
      if ((unsigned __int64)(a7 + 1) < 3) {
      LABEL_31:
        if (a6 == (__int64*)a4) {
          goto LABEL_51;
        }
      }
      else {
        v30 = v29 + ((a2 - *result) >> 3);
        if (v30 >= 1) {
          v21 = &result[(unsigned __int64)v30 >> 9];
          v22 = *v21 + 8 * (v30 & 0x1FF);
          goto LABEL_31;
        }
        v42 = 511 - v30;
        v21 = &result[-(v42 >> 9)];
        v22 = *v21 + 8LL * (~(_WORD)v42 & 0x1FF);
        if (a6 == (__int64*)a4) {
        LABEL_51:
          v15 = 0;
          v13 = a3;
          v14 = a4;
          goto LABEL_52;
        }
      }
      v31 = (((__int64)a6 - *(_QWORD*)a5) >> 3) + ((a5 - (char*)a3) << 6);
      v32 = *a3;
      v33 = (a4 - *a3) >> 3;
      v34 = v31 - v33;
      if (v31 != v33) {
        v14 = a4;
        v13 = a3;
        do {
          v35 = v34 >> 1;
          v36 = v14;
          v37 = v13;
          if (v34 != 1) {
            v38 = v35 + ((v14 - v32) >> 3);
            if (v38 < 1) {
              v39 = 511 - v38;
              LOWORD(v38) = ~(511 - v38);
              v37 = &v13[-(v39 >> 9)];
            }
            else {
              v37 = &v13[(unsigned __int64)v38 >> 9];
            }
            v36 = *v37 + 8 * (v38 & 0x1FF);
          }
          if (*(unsigned __int8*)(v36 + 4) >
              (unsigned int)*(unsigned __int8*)(v22 + 4)) {
            v32 = *v37;
            v14 = v36 + 8;
            if (v36 + 8 - *v37 == 4096) {
              v40 = v37[1];
              ++v37;
              v32 = v40;
              v14 = v40;
            }
            v13 = v37;
            v35 = v34 + ~v35;
          }
          v34 = v35;
        } while (v35 != 0);
        if (v14 == a4) {
          v15 = 0;
        }
        else {
          v15 = (((char*)v13 - (char*)a3) << 6) - v33 + ((v14 - v32) >> 3);
        }
        goto LABEL_52;
      }
      goto LABEL_51;
    }
    v13 = a3;
    v14 = a4;
    v15 = a8 / 2;
    if ((unsigned __int64)(a8 + 1) < 3) {
      goto LABEL_14;
    }
    v16 = v15 + ((a4 - *a3) >> 3);
    if (v16 >= 1) {
      v13 = &a3[(unsigned __int64)v16 >> 9];
      v14 = *v13 + 8 * (v16 & 0x1FF);
    LABEL_14:
      if (a4 != a2) {
        goto LABEL_15;
      }
      goto LABEL_49;
    }
    v41 = 511 - v16;
    v13 = &a3[-(v41 >> 9)];
    v14 = *v13 + 8LL * (~(_WORD)v41 & 0x1FF);
    if (a4 != a2) {
    LABEL_15:
      v17 = ((a4 - *a3) >> 3) + (((char*)a3 - (char*)result) << 6);
      v18 = *result;
      v19 = (a2 - *result) >> 3;
      v20 = v17 - v19;
      if (v17 != v19) {
        v21 = result;
        v22 = a2;
        do {
          v23 = v20 >> 1;
          v24 = v22;
          v25 = v21;
          if (v20 != 1) {
            v26 = v23 + ((v22 - v18) >> 3);
            if (v26 < 1) {
              v27 = 511 - v26;
              LOWORD(v26) = ~(511 - v26);
              v25 = &v21[-(v27 >> 9)];
            }
            else {
              v25 = &v21[(unsigned __int64)v26 >> 9];
            }
            v24 = *v25 + 8 * (v26 & 0x1FF);
          }
          if (*(unsigned __int8*)(v14 + 4) <=
              (unsigned int)*(unsigned __int8*)(v24 + 4)) {
            v18 = *v25;
            v22 = v24 + 8;
            if (v24 + 8 - *v25 == 4096) {
              v28 = v25[1];
              ++v25;
              v18 = v28;
              v22 = v28;
            }
            v21 = v25;
            v23 = v20 + ~v23;
          }
          v20 = v23;
        } while (v23 != 0);
        if (v22 == a2) {
          v29 = 0;
        }
        else {
          v29 = ((v22 - v18) >> 3) - v19 + (((char*)v21 - (char*)result) << 6);
        }
        goto LABEL_52;
      }
    }
  LABEL_49:
    v29 = 0;
    v21 = result;
    v22 = a2;
  LABEL_52:
    v43 = v14;
    v44 = v13;
    if (v22 != a4) {
      v43 = v22;
      v44 = v21;
      if (a4 != v14) {
        v44 = v21;
        v43 = v22;
        v45 = a4;
        v46 = a3;
        while (1) {
          v47 = *(_DWORD*)v43;
          *(_DWORD*)v43 = *(_DWORD*)v45;
          *(_DWORD*)v45 = v47;
          LOBYTE(v47) = *(_BYTE*)(v43 + 4);
          *(_BYTE*)(v43 + 4) = *(_BYTE*)(v45 + 4);
          *(_BYTE*)(v45 + 4) = v47;
          v43 += 8;
          if (v43 - *v44 == 4096) {
            v48 = v44[1];
            ++v44;
            v43 = v48;
          }
          v45 += 8;
          if (v45 - *v46 == 4096) {
            v49 = v46[1];
            ++v46;
            v45 = v49;
          }
          if (v45 == v14) {
            break;
          }
          if (v43 == a4) {
            a4 = v45;
            a3 = v46;
          }
        }
        if (v43 != a4) {
          v50 = v44;
          v51 = v43;
          v52 = a4;
          v53 = a3;
          while (1) {
            v54 = *(_DWORD*)v51;
            *(_DWORD*)v51 = *(_DWORD*)v52;
            *(_DWORD*)v52 = v54;
            LOBYTE(v54) = *(_BYTE*)(v51 + 4);
            *(_BYTE*)(v51 + 4) = *(_BYTE*)(v52 + 4);
            *(_BYTE*)(v52 + 4) = v54;
            v51 += 8;
            if (v51 - *v50 == 4096) {
              v55 = v50[1];
              ++v50;
              v51 = v55;
            }
            v52 += 8;
            if (v52 - *v53 == 4096) {
              v56 = v53[1];
              ++v53;
              v52 = v56;
            }
            v57 = v51 == a4;
            if (v52 == v14) {
              if (v51 == a4) {
                break;
              }
              while (1) {
                v58 = *(_DWORD*)v51;
                *(_DWORD*)v51 = *(_DWORD*)a4;
                *(_DWORD*)a4 = v58;
                LOBYTE(v58) = *(_BYTE*)(v51 + 4);
                *(_BYTE*)(v51 + 4) = *(_BYTE*)(a4 + 4);
                *(_BYTE*)(a4 + 4) = v58;
                v51 += 8;
                if (v51 - *v50 == 4096) {
                  v59 = v50[1];
                  ++v50;
                  v51 = v59;
                }
                v53 = a3;
                v52 = a4 + 8;
                if (a4 + 8 - *a3 == 4096) {
                  v52 = a3[1];
                  v53 = a3 + 1;
                }
                v57 = v51 == a4;
                if (v52 != v14) {
                  break;
                }
                if (v51 == a4) {
                  goto LABEL_79;
                }
              }
            }
            if (v57) {
              a4 = v52;
              a3 = v53;
            }
          }
        }
      }
    }
  LABEL_79:
    v60 = a7 - v29;
    v61 = a8 - v15;
    if (v29 + v15 >= a8 - (v29 + v15) + a7) {
      v110 = a9;
      v111 = a10;
      v67 = a10;
      v68 = a9;
      v69 = result;
      v112 = v29;
      v70 = a2;
      v71 = v14;
      v72 = v21;
      v61 = v15;
      MapUnitInfoDetail_18305e0(v44, v43, v13, v71, a5, a6, v60, a8 - v15, v110,
                                v111);
      v60 = v112;
      result = v69;
      a9 = v68;
      a10 = v67;
      a2 = v70;
      a3 = v72;
      v14 = v22;
      a5 = (char*)v44;
      a6 = (__int64*)v43;
    }
    else {
      v62 = v22;
      v63 = a5;
      v64 = a6;
      v65 = v29;
      v66 = v13;
      MapUnitInfoDetail_18305e0(result, a2, v21, v62, v44, v43, v65, v15, a9,
                                a10);
      a3 = v66;
      a5 = v63;
      a6 = v64;
      result = v44;
      a2 = v43;
    }
    a7 = v60;
    a8 = v61;
    a4 = v14;
    if (v61 == 0) {
      return result;
    }
  }
  if (a7 > a8) {
    if ((__int64*)a4 == a6) {
      return result;
    }
    v73 = (_QWORD*)a9;
    v74 = (__int64*)a4;
    v75 = a3;
    do {
      v76 = *v74++;
      *v73 = v76;
      if ((char*)((char*)v74 - *v75) == (char*)GameRoutine_1000) {
        v77 = (__int64*)v75[1];
        ++v75;
        v74 = v77;
      }
      ++v73;
    } while (v74 != a6);
    while (2) {
      if (a4 == a2) {
        if ((_QWORD*)a9 != v73) {
          v97 = *(__int64**)a5;
          do {
            v98 = (__int64)a6;
            if (a6 == v97) {
              v98 = *((_QWORD*)a5 - 1) + 4096LL;
            }
            *(_DWORD*)(v98 - 8) = *((_DWORD*)v73 - 2);
            *(_BYTE*)(v98 - 4) = *((_BYTE*)v73 - 4);
            v97 = *(__int64**)a5;
            if (a6 == *(__int64**)a5) {
              v99 = *((__int64**)a5 - 1);
              a5 -= 8;
              v97 = v99;
              a6 = v99 + 512;
            }
            --v73;
            --a6;
          } while (v73 != (_QWORD*)a9);
        }
        return result;
      }
      if (*a3 == a4) {
        v80 = *(a3 - 1);
        v78 = (char*)v73 - 4;
        if (*((unsigned __int8*)v73 - 4) <=
            (unsigned int)*(unsigned __int8*)(v80 + 4092)) {
          goto LABEL_104;
        }
        v79 = v80 + 4096;
      }
      else {
        v78 = (char*)v73 - 4;
        v79 = a4;
        if (*((unsigned __int8*)v73 - 4) <=
            (unsigned int)*(unsigned __int8*)(a4 - 4)) {
        LABEL_104:
          v83 = (__int64)a6;
          if (a6 == *(__int64**)a5) {
            v83 = *((_QWORD*)a5 - 1) + 4096LL;
          }
          v84 = *((_DWORD*)v73-- - 2);
          *(_DWORD*)(v83 - 8) = v84;
          *(_BYTE*)(v83 - 4) = *v78;
          goto LABEL_107;
        }
      }
      v81 = (__int64)a6;
      if (a6 == *(__int64**)a5) {
        v81 = *((_QWORD*)a5 - 1) + 4096LL;
      }
      *(_DWORD*)(v81 - 8) = *(_DWORD*)(v79 - 8);
      *(_BYTE*)(v81 - 4) = *(_BYTE*)(v79 - 4);
      if (a4 == *a3) {
        v82 = *--a3;
        a4 = v82 + 4096;
      }
      a4 -= 8;
    LABEL_107:
      if (a6 == *(__int64**)a5) {
        v85 = *((_QWORD*)a5 - 1);
        a5 -= 8;
        a6 = (__int64*)(v85 + 4096);
      }
      --a6;
      if (v73 == (_QWORD*)a9) {
        return result;
      }
      continue;
    }
  }
  if (a2 == a4) {
    return result;
  }
  v86 = -a9;
  v87 = (_QWORD*)a9;
  v88 = (__int64*)a2;
  v89 = result;
  do {
    v90 = *v88++;
    *v87 = v90;
    if ((char*)((char*)v88 - *v89) == (char*)GameRoutine_1000) {
      v91 = (__int64*)v89[1];
      ++v89;
      v88 = v91;
    }
    ++v87;
    v86 -= 8;
  } while (v88 != (__int64*)a4);
  while ((__int64*)a4 != a6) {
    if (*(unsigned __int8*)(a4 + 4) <=
        (unsigned int)*(unsigned __int8*)(a9 + 4)) {
      *(_DWORD*)a2 = *(_DWORD*)a9;
      v94 = *(_BYTE*)(a9 + 4);
      a9 += 8;
      *(_BYTE*)(a2 + 4) = v94;
    }
    else {
      *(_DWORD*)a2 = *(_DWORD*)a4;
      v92 = *(_BYTE*)(a4 + 4);
      a4 += 8;
      *(_BYTE*)(a2 + 4) = v92;
      if (a4 - *a3 == 4096) {
        v93 = a3[1];
        ++a3;
        a4 = v93;
      }
    }
    a2 += 8;
    if (a2 - *result == 4096) {
      v95 = result[1];
      ++result;
      a2 = v95;
    }
    if (v87 == (_QWORD*)a9) {
      return result;
    }
  }
  v100 = *result;
  v101 = -v86;
  while (1) {
    v103 = (v101 - a9) >> 3;
    v104 = (v100 - a2 + 4096) >> 3;
    if (v103 >= v104) {
      v103 = v104;
    }
    if (v103 != 0) {
      v105 = 8 * v103 - 8;
      if ((~(_BYTE)v105 & 0x38) != 0) {
        v107 = ((unsigned __int8)((unsigned int)v105 >> 3) + 1) & 7;
        v106 = a9;
        do {
          --v107;
          *(_DWORD*)a2 = *(_DWORD*)v106;
          v108 = *(_BYTE*)(v106 + 4);
          v106 += 8;
          *(_BYTE*)(a2 + 4) = v108;
          a2 += 8;
        } while (v107 != 0);
      }
      else {
        v106 = a9;
      }
      a9 += 8 * v103;
      if (v105 >= 0x38) {
        do {
          *(_DWORD*)a2 = *(_DWORD*)v106;
          *(_BYTE*)(a2 + 4) = *(_BYTE*)(v106 + 4);
          *(_DWORD*)(a2 + 8) = *(_DWORD*)(v106 + 8);
          *(_BYTE*)(a2 + 12) = *(_BYTE*)(v106 + 12);
          *(_DWORD*)(a2 + 16) = *(_DWORD*)(v106 + 16);
          *(_BYTE*)(a2 + 20) = *(_BYTE*)(v106 + 20);
          *(_DWORD*)(a2 + 24) = *(_DWORD*)(v106 + 24);
          *(_BYTE*)(a2 + 28) = *(_BYTE*)(v106 + 28);
          *(_DWORD*)(a2 + 32) = *(_DWORD*)(v106 + 32);
          *(_BYTE*)(a2 + 36) = *(_BYTE*)(v106 + 36);
          *(_DWORD*)(a2 + 40) = *(_DWORD*)(v106 + 40);
          *(_BYTE*)(a2 + 44) = *(_BYTE*)(v106 + 44);
          *(_DWORD*)(a2 + 48) = *(_DWORD*)(v106 + 48);
          *(_BYTE*)(a2 + 52) = *(_BYTE*)(v106 + 52);
          *(_DWORD*)(a2 + 56) = *(_DWORD*)(v106 + 56);
          v109 = *(_BYTE*)(v106 + 60);
          v106 += 64;
          *(_BYTE*)(a2 + 60) = v109;
          a2 += 64;
        } while (v106 != a9);
      }
      if (v87 == (_QWORD*)a9) {
        break;
      }
    }
    v102 = result[1];
    ++result;
    v100 = v102;
    a2 = v102;
  }
  return result;
}

_QWORD* MapUnitInfoDetail_1831300(_QWORD* result, int* a2, _QWORD* a3,
                                  __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  int* v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64* v24;
  int* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  int* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  int* v36;

  if (a5 != 0) {
    if (a5 == 2) {
      if (a4 == *a3) {
        a4 = *(a3 - 1) + 4096LL;
      }
      if (*(unsigned __int8*)(a4 - 4) <=
          (unsigned int)*((unsigned __int8*)a2 + 4)) {
        *(_QWORD*)a6 = *(_QWORD*)a2;
        v6 = *(_QWORD*)(a4 - 8);
      }
      else {
        *(_QWORD*)a6 = *(_QWORD*)(a4 - 8);
        v6 = *(_QWORD*)a2;
      }
      *(_QWORD*)(a6 + 8) = v6;
    }
    else if (a5 == 1) {
      *(_QWORD*)a6 = *(_QWORD*)a2;
    }
    else if ((__int64)a5 > 8) {
      v15 = a5 >> 1;
      v18 = a4;
      v19 = (a5 >> 1) + (((__int64)a2 - *result) >> 3);
      if (v19 < 1) {
        v22 = 511 - v19;
        v20 = &result[-(v22 >> 9)];
        v21 = (int*)(*v20 + 8LL * (~(_WORD)v22 & 0x1FF));
      }
      else {
        v20 = &result[(unsigned __int64)v19 >> 9];
        v21 = (int*)(*v20 + 8 * (v19 & 0x1FF));
      }
      v23 = result;
      v24 = (__int64*)a2;
      GameRoutine_1830fa0(result, a2, v20, (__int64)v21, a5 >> 1, (int*)a6,
                          v15);
      result = GameRoutine_1830fa0(v20, v21, a3, v18, a5 - v15,
                                   (int*)(a6 + 8 * v15), a5 - v15);
      if (v24 == (__int64*)v21) {
        v26 = v21;
        v27 = (_QWORD*)a6;
      LABEL_45:
        while (v26 != (int*)v18) {
          v35 = *(_QWORD*)v26;
          v26 += 2;
          *v27 = v35;
          if ((char*)((char*)v26 - *v20) == (char*)GameRoutine_1000) {
            v36 = (int*)v20[1];
            ++v20;
            v26 = v36;
          }
          ++v27;
        }
      }
      else {
        v26 = v21;
        v27 = (_QWORD*)a6;
        v28 = v23;
        while (v26 != (int*)v18) {
          if (*((unsigned __int8*)v26 + 4) <=
              (unsigned int)*((unsigned __int8*)v24 + 4)) {
            v31 = *v24++;
            *v27 = v31;
            if ((char*)((char*)v24 - *v28) == (char*)GameRoutine_1000) {
              v32 = (__int64*)v28[1];
              ++v28;
              v24 = v32;
            }
          }
          else {
            v29 = *(_QWORD*)v26;
            v26 += 2;
            *v27 = v29;
            if ((char*)((char*)v26 - *v20) == (char*)GameRoutine_1000) {
              v30 = (int*)v20[1];
              ++v20;
              v26 = v30;
            }
          }
          ++v27;
          if (v24 == (__int64*)v21) {
            goto LABEL_45;
          }
        }
        while (v24 != (__int64*)v21) {
          v33 = *v24++;
          *v27 = v33;
          if ((char*)((char*)v24 - *v28) == (char*)GameRoutine_1000) {
            v34 = (__int64*)v28[1];
            ++v28;
            v24 = v34;
          }
          ++v27;
        }
      }
    }
    else if (a2 != (int*)a4) {
      v7 = 0;
      v8 = (_QWORD*)a6;
      *(_QWORD*)a6 = *(_QWORD*)a2;
      while (1) {
        a2 += 2;
        if ((char*)((char*)a2 - *result) == (char*)GameRoutine_1000) {
          v9 = (__int64*)result[1];
          ++result;
          a2 = (int*)v9;
        }
        if (a2 == (int*)a4) {
          break;
        }
        v10 = v8 + 1;
        if (*((unsigned __int8*)a2 + 4) <=
            (unsigned int)*((unsigned __int8*)v8 + 4)) {
          *v10 = *(_QWORD*)a2;
        }
        else {
          v8[1] = *v8;
          v11 = a6;
          if (v8 != (_QWORD*)a6) {
            v12 = v7;
            while (1) {
              v11 = a6 + v12;
              v13 = *(unsigned __int8*)(a6 + v12 - 4);
              if (*((unsigned __int8*)a2 + 4) <= v13) {
                break;
              }
              v14 = *(_DWORD*)(v11 - 8);
              v12 -= 8;
              *(_BYTE*)(v11 + 4) = v13;
              *(_DWORD*)v11 = v14;
              if (v12 == 0) {
                v11 = a6;
                break;
              }
            }
          }
          *(_DWORD*)v11 = *a2;
          *(_BYTE*)(v11 + 4) = *((_BYTE*)a2 + 4);
        }
        v7 += 8;
        v8 = v10;
      }
    }
  }
  return result;
}

__int64* MapUnitInfoDetail_1831600(__int64* result, __int64 a2, __int64* a3,
                                   __int64 a4, char* a5, __int64* a6,
                                   __int64 a7, __int64 a8, __int64 a9,
                                   __int64 a10)
{
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  __int64* v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  int v54;
  __int64 v55;
  __int64 v56;
  _BOOL4 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  __int64* v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  _QWORD* v73;
  __int64* v74;
  __int64* v75;
  __int64 v76;
  __int64* v77;
  _BYTE* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v87;
  __int64* v88;
  __int64* v89;
  __int64 v90;
  __int64* v91;
  char v92;
  __int64 v93;
  char v94;
  __int64 v95;
  int v96;
  __int64* v97;
  __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  char v108;
  char v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;

  if (a8 == 0) {
    return result;
  }
  while (a7 > a10 && a8 > a10) {
    if (a7 == 0) {
      return result;
    }
    while (*(unsigned __int8*)(a4 + 4) <=
           (unsigned int)*(unsigned __int8*)(a2 + 4)) {
      a2 += 8;
      if (a2 - *result == 4096) {
        v12 = result[1];
        ++result;
        a2 = v12;
      }
      if (--a7 == 0) {
        return result;
      }
    }
    if (a7 >= a8) {
      if (a7 == 1) {
        v96 = *(_DWORD*)a2;
        *(_DWORD*)a2 = *(_DWORD*)a4;
        *(_DWORD*)a4 = v96;
        LOBYTE(v96) = *(_BYTE*)(a2 + 4);
        *(_BYTE*)(a2 + 4) = *(_BYTE*)(a4 + 4);
        *(_BYTE*)(a4 + 4) = v96;
        return result;
      }
      v21 = result;
      v22 = a2;
      v29 = a7 / 2;
      if ((unsigned __int64)(a7 + 1) < 3) {
      LABEL_31:
        if (a6 == (__int64*)a4) {
          goto LABEL_51;
        }
      }
      else {
        v30 = v29 + ((a2 - *result) >> 3);
        if (v30 >= 1) {
          v21 = &result[(unsigned __int64)v30 >> 9];
          v22 = *v21 + 8 * (v30 & 0x1FF);
          goto LABEL_31;
        }
        v42 = 511 - v30;
        v21 = &result[-(v42 >> 9)];
        v22 = *v21 + 8LL * (~(_WORD)v42 & 0x1FF);
        if (a6 == (__int64*)a4) {
        LABEL_51:
          v15 = 0;
          v13 = a3;
          v14 = a4;
          goto LABEL_52;
        }
      }
      v31 = (((__int64)a6 - *(_QWORD*)a5) >> 3) + ((a5 - (char*)a3) << 6);
      v32 = *a3;
      v33 = (a4 - *a3) >> 3;
      v34 = v31 - v33;
      if (v31 != v33) {
        v14 = a4;
        v13 = a3;
        do {
          v35 = v34 >> 1;
          v36 = v14;
          v37 = v13;
          if (v34 != 1) {
            v38 = v35 + ((v14 - v32) >> 3);
            if (v38 < 1) {
              v39 = 511 - v38;
              LOWORD(v38) = ~(511 - v38);
              v37 = &v13[-(v39 >> 9)];
            }
            else {
              v37 = &v13[(unsigned __int64)v38 >> 9];
            }
            v36 = *v37 + 8 * (v38 & 0x1FF);
          }
          if (*(unsigned __int8*)(v36 + 4) >
              (unsigned int)*(unsigned __int8*)(v22 + 4)) {
            v32 = *v37;
            v14 = v36 + 8;
            if (v36 + 8 - *v37 == 4096) {
              v40 = v37[1];
              ++v37;
              v32 = v40;
              v14 = v40;
            }
            v13 = v37;
            v35 = v34 + ~v35;
          }
          v34 = v35;
        } while (v35 != 0);
        if (v14 == a4) {
          v15 = 0;
        }
        else {
          v15 = (((char*)v13 - (char*)a3) << 6) - v33 + ((v14 - v32) >> 3);
        }
        goto LABEL_52;
      }
      goto LABEL_51;
    }
    v13 = a3;
    v14 = a4;
    v15 = a8 / 2;
    if ((unsigned __int64)(a8 + 1) < 3) {
      goto LABEL_14;
    }
    v16 = v15 + ((a4 - *a3) >> 3);
    if (v16 >= 1) {
      v13 = &a3[(unsigned __int64)v16 >> 9];
      v14 = *v13 + 8 * (v16 & 0x1FF);
    LABEL_14:
      if (a4 != a2) {
        goto LABEL_15;
      }
      goto LABEL_49;
    }
    v41 = 511 - v16;
    v13 = &a3[-(v41 >> 9)];
    v14 = *v13 + 8LL * (~(_WORD)v41 & 0x1FF);
    if (a4 != a2) {
    LABEL_15:
      v17 = ((a4 - *a3) >> 3) + (((char*)a3 - (char*)result) << 6);
      v18 = *result;
      v19 = (a2 - *result) >> 3;
      v20 = v17 - v19;
      if (v17 != v19) {
        v21 = result;
        v22 = a2;
        do {
          v23 = v20 >> 1;
          v24 = v22;
          v25 = v21;
          if (v20 != 1) {
            v26 = v23 + ((v22 - v18) >> 3);
            if (v26 < 1) {
              v27 = 511 - v26;
              LOWORD(v26) = ~(511 - v26);
              v25 = &v21[-(v27 >> 9)];
            }
            else {
              v25 = &v21[(unsigned __int64)v26 >> 9];
            }
            v24 = *v25 + 8 * (v26 & 0x1FF);
          }
          if (*(unsigned __int8*)(v14 + 4) <=
              (unsigned int)*(unsigned __int8*)(v24 + 4)) {
            v18 = *v25;
            v22 = v24 + 8;
            if (v24 + 8 - *v25 == 4096) {
              v28 = v25[1];
              ++v25;
              v18 = v28;
              v22 = v28;
            }
            v21 = v25;
            v23 = v20 + ~v23;
          }
          v20 = v23;
        } while (v23 != 0);
        if (v22 == a2) {
          v29 = 0;
        }
        else {
          v29 = ((v22 - v18) >> 3) - v19 + (((char*)v21 - (char*)result) << 6);
        }
        goto LABEL_52;
      }
    }
  LABEL_49:
    v29 = 0;
    v21 = result;
    v22 = a2;
  LABEL_52:
    v43 = v14;
    v44 = v13;
    if (v22 != a4) {
      v43 = v22;
      v44 = v21;
      if (a4 != v14) {
        v44 = v21;
        v43 = v22;
        v45 = a4;
        v46 = a3;
        while (1) {
          v47 = *(_DWORD*)v43;
          *(_DWORD*)v43 = *(_DWORD*)v45;
          *(_DWORD*)v45 = v47;
          LOBYTE(v47) = *(_BYTE*)(v43 + 4);
          *(_BYTE*)(v43 + 4) = *(_BYTE*)(v45 + 4);
          *(_BYTE*)(v45 + 4) = v47;
          v43 += 8;
          if (v43 - *v44 == 4096) {
            v48 = v44[1];
            ++v44;
            v43 = v48;
          }
          v45 += 8;
          if (v45 - *v46 == 4096) {
            v49 = v46[1];
            ++v46;
            v45 = v49;
          }
          if (v45 == v14) {
            break;
          }
          if (v43 == a4) {
            a4 = v45;
            a3 = v46;
          }
        }
        if (v43 != a4) {
          v50 = v44;
          v51 = v43;
          v52 = a4;
          v53 = a3;
          while (1) {
            v54 = *(_DWORD*)v51;
            *(_DWORD*)v51 = *(_DWORD*)v52;
            *(_DWORD*)v52 = v54;
            LOBYTE(v54) = *(_BYTE*)(v51 + 4);
            *(_BYTE*)(v51 + 4) = *(_BYTE*)(v52 + 4);
            *(_BYTE*)(v52 + 4) = v54;
            v51 += 8;
            if (v51 - *v50 == 4096) {
              v55 = v50[1];
              ++v50;
              v51 = v55;
            }
            v52 += 8;
            if (v52 - *v53 == 4096) {
              v56 = v53[1];
              ++v53;
              v52 = v56;
            }
            v57 = v51 == a4;
            if (v52 == v14) {
              if (v51 == a4) {
                break;
              }
              while (1) {
                v58 = *(_DWORD*)v51;
                *(_DWORD*)v51 = *(_DWORD*)a4;
                *(_DWORD*)a4 = v58;
                LOBYTE(v58) = *(_BYTE*)(v51 + 4);
                *(_BYTE*)(v51 + 4) = *(_BYTE*)(a4 + 4);
                *(_BYTE*)(a4 + 4) = v58;
                v51 += 8;
                if (v51 - *v50 == 4096) {
                  v59 = v50[1];
                  ++v50;
                  v51 = v59;
                }
                v53 = a3;
                v52 = a4 + 8;
                if (a4 + 8 - *a3 == 4096) {
                  v52 = a3[1];
                  v53 = a3 + 1;
                }
                v57 = v51 == a4;
                if (v52 != v14) {
                  break;
                }
                if (v51 == a4) {
                  goto LABEL_79;
                }
              }
            }
            if (v57) {
              a4 = v52;
              a3 = v53;
            }
          }
        }
      }
    }
  LABEL_79:
    v60 = a7 - v29;
    v61 = a8 - v15;
    if (v29 + v15 >= a8 - (v29 + v15) + a7) {
      v110 = a9;
      v111 = a10;
      v67 = a10;
      v68 = a9;
      v69 = result;
      v112 = v29;
      v70 = a2;
      v71 = v14;
      v72 = v21;
      v61 = v15;
      MapUnitInfoDetail_1831600(v44, v43, v13, v71, a5, a6, v60, a8 - v15, v110,
                                v111);
      v60 = v112;
      result = v69;
      a9 = v68;
      a10 = v67;
      a2 = v70;
      a3 = v72;
      v14 = v22;
      a5 = (char*)v44;
      a6 = (__int64*)v43;
    }
    else {
      v62 = v22;
      v63 = a5;
      v64 = a6;
      v65 = v29;
      v66 = v13;
      MapUnitInfoDetail_1831600(result, a2, v21, v62, v44, v43, v65, v15, a9,
                                a10);
      a3 = v66;
      a5 = v63;
      a6 = v64;
      result = v44;
      a2 = v43;
    }
    a7 = v60;
    a8 = v61;
    a4 = v14;
    if (v61 == 0) {
      return result;
    }
  }
  if (a7 > a8) {
    if ((__int64*)a4 == a6) {
      return result;
    }
    v73 = (_QWORD*)a9;
    v74 = (__int64*)a4;
    v75 = a3;
    do {
      v76 = *v74++;
      *v73 = v76;
      if ((char*)((char*)v74 - *v75) == (char*)GameRoutine_1000) {
        v77 = (__int64*)v75[1];
        ++v75;
        v74 = v77;
      }
      ++v73;
    } while (v74 != a6);
    while (2) {
      if (a4 == a2) {
        if ((_QWORD*)a9 != v73) {
          v97 = *(__int64**)a5;
          do {
            v98 = (__int64)a6;
            if (a6 == v97) {
              v98 = *((_QWORD*)a5 - 1) + 4096LL;
            }
            *(_DWORD*)(v98 - 8) = *((_DWORD*)v73 - 2);
            *(_BYTE*)(v98 - 4) = *((_BYTE*)v73 - 4);
            v97 = *(__int64**)a5;
            if (a6 == *(__int64**)a5) {
              v99 = *((__int64**)a5 - 1);
              a5 -= 8;
              v97 = v99;
              a6 = v99 + 512;
            }
            --v73;
            --a6;
          } while (v73 != (_QWORD*)a9);
        }
        return result;
      }
      if (*a3 == a4) {
        v80 = *(a3 - 1);
        v78 = (char*)v73 - 4;
        if (*((unsigned __int8*)v73 - 4) <=
            (unsigned int)*(unsigned __int8*)(v80 + 4092)) {
          goto LABEL_104;
        }
        v79 = v80 + 4096;
      }
      else {
        v78 = (char*)v73 - 4;
        v79 = a4;
        if (*((unsigned __int8*)v73 - 4) <=
            (unsigned int)*(unsigned __int8*)(a4 - 4)) {
        LABEL_104:
          v83 = (__int64)a6;
          if (a6 == *(__int64**)a5) {
            v83 = *((_QWORD*)a5 - 1) + 4096LL;
          }
          v84 = *((_DWORD*)v73-- - 2);
          *(_DWORD*)(v83 - 8) = v84;
          *(_BYTE*)(v83 - 4) = *v78;
          goto LABEL_107;
        }
      }
      v81 = (__int64)a6;
      if (a6 == *(__int64**)a5) {
        v81 = *((_QWORD*)a5 - 1) + 4096LL;
      }
      *(_DWORD*)(v81 - 8) = *(_DWORD*)(v79 - 8);
      *(_BYTE*)(v81 - 4) = *(_BYTE*)(v79 - 4);
      if (a4 == *a3) {
        v82 = *--a3;
        a4 = v82 + 4096;
      }
      a4 -= 8;
    LABEL_107:
      if (a6 == *(__int64**)a5) {
        v85 = *((_QWORD*)a5 - 1);
        a5 -= 8;
        a6 = (__int64*)(v85 + 4096);
      }
      --a6;
      if (v73 == (_QWORD*)a9) {
        return result;
      }
      continue;
    }
  }
  if (a2 == a4) {
    return result;
  }
  v86 = -a9;
  v87 = (_QWORD*)a9;
  v88 = (__int64*)a2;
  v89 = result;
  do {
    v90 = *v88++;
    *v87 = v90;
    if ((char*)((char*)v88 - *v89) == (char*)GameRoutine_1000) {
      v91 = (__int64*)v89[1];
      ++v89;
      v88 = v91;
    }
    ++v87;
    v86 -= 8;
  } while (v88 != (__int64*)a4);
  while ((__int64*)a4 != a6) {
    if (*(unsigned __int8*)(a4 + 4) <=
        (unsigned int)*(unsigned __int8*)(a9 + 4)) {
      *(_DWORD*)a2 = *(_DWORD*)a9;
      v94 = *(_BYTE*)(a9 + 4);
      a9 += 8;
      *(_BYTE*)(a2 + 4) = v94;
    }
    else {
      *(_DWORD*)a2 = *(_DWORD*)a4;
      v92 = *(_BYTE*)(a4 + 4);
      a4 += 8;
      *(_BYTE*)(a2 + 4) = v92;
      if (a4 - *a3 == 4096) {
        v93 = a3[1];
        ++a3;
        a4 = v93;
      }
    }
    a2 += 8;
    if (a2 - *result == 4096) {
      v95 = result[1];
      ++result;
      a2 = v95;
    }
    if (v87 == (_QWORD*)a9) {
      return result;
    }
  }
  v100 = *result;
  v101 = -v86;
  while (1) {
    v103 = (v101 - a9) >> 3;
    v104 = (v100 - a2 + 4096) >> 3;
    if (v103 >= v104) {
      v103 = v104;
    }
    if (v103 != 0) {
      v105 = 8 * v103 - 8;
      if ((~(_BYTE)v105 & 0x38) != 0) {
        v107 = ((unsigned __int8)((unsigned int)v105 >> 3) + 1) & 7;
        v106 = a9;
        do {
          --v107;
          *(_DWORD*)a2 = *(_DWORD*)v106;
          v108 = *(_BYTE*)(v106 + 4);
          v106 += 8;
          *(_BYTE*)(a2 + 4) = v108;
          a2 += 8;
        } while (v107 != 0);
      }
      else {
        v106 = a9;
      }
      a9 += 8 * v103;
      if (v105 >= 0x38) {
        do {
          *(_DWORD*)a2 = *(_DWORD*)v106;
          *(_BYTE*)(a2 + 4) = *(_BYTE*)(v106 + 4);
          *(_DWORD*)(a2 + 8) = *(_DWORD*)(v106 + 8);
          *(_BYTE*)(a2 + 12) = *(_BYTE*)(v106 + 12);
          *(_DWORD*)(a2 + 16) = *(_DWORD*)(v106 + 16);
          *(_BYTE*)(a2 + 20) = *(_BYTE*)(v106 + 20);
          *(_DWORD*)(a2 + 24) = *(_DWORD*)(v106 + 24);
          *(_BYTE*)(a2 + 28) = *(_BYTE*)(v106 + 28);
          *(_DWORD*)(a2 + 32) = *(_DWORD*)(v106 + 32);
          *(_BYTE*)(a2 + 36) = *(_BYTE*)(v106 + 36);
          *(_DWORD*)(a2 + 40) = *(_DWORD*)(v106 + 40);
          *(_BYTE*)(a2 + 44) = *(_BYTE*)(v106 + 44);
          *(_DWORD*)(a2 + 48) = *(_DWORD*)(v106 + 48);
          *(_BYTE*)(a2 + 52) = *(_BYTE*)(v106 + 52);
          *(_DWORD*)(a2 + 56) = *(_DWORD*)(v106 + 56);
          v109 = *(_BYTE*)(v106 + 60);
          v106 += 64;
          *(_BYTE*)(a2 + 60) = v109;
          a2 += 64;
        } while (v106 != a9);
      }
      if (v87 == (_QWORD*)a9) {
        break;
      }
    }
    v102 = result[1];
    ++result;
    v100 = v102;
    a2 = v102;
  }
  return result;
}

__int64 game_map_MapUnitInfoDetail_SetupUnit_lambda5_Invoke(__int64 result,
                                                            unsigned int* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;

  v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 1064LL);
  v5 = *a2;
  v3 = *(_QWORD*)(v2 + 1744);
  if ((((unsigned __int64)v5 >> 5) & 0x7F) + 1 <=
          (*(_QWORD*)(v2 + 1752) - v3) >> 2 &&
      ((*(_DWORD*)(v3 + 4 * (((unsigned __int64)v5 >> 5) & 0x7F)) >> v5) & 1) !=
          0) {
    v4 = result;
    result = game_HasActiveSkill_843420(&v5, v2 + 1744);
    if ((result & 1) != 0) {
      **(_BYTE**)(v4 + 16) = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
