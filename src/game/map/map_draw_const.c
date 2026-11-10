#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10027c0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212d020[5];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ce98[2];
extern char GameData_221fe88;
extern char GameData_221fe8c;
extern char GameData_221fe90;
extern char GameData_221fe94;
extern char GameData_221fe98;
extern char GameData_221fe9c;
extern char GameData_221fea0;
extern char GameData_221fea4;
extern char GameData_221fea8;
extern char GameData_221feac;
extern char GameData_221feb0;
extern char GameData_221feb4;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_fccb90(void);
__int64 MapDrawConst_fcbcc0(__int64 a1, int a2, unsigned __int8 a3,
                            unsigned __int8 a4, __int64 a5, char a6);
void MapDrawConst_fcc360(__int64 a1, __int64 a2);
_QWORD* MapDrawConst_fcc660(_QWORD* result, __int64 a2);
bool game_map_MapDrawConst_AddCellPlaneMask_lambda0_Invoke(__int64 a1,
                                                           unsigned __int8* a2,
                                                           unsigned __int8* a3);

__int64 MapDrawConst_fcbcc0(__int64 a1, int a2, unsigned __int8 a3,
                            unsigned __int8 a4, __int64 a5, char a6)
{
  char v9;
  char v10;
  float v11;
  __int64 v12;
  char v13;
  char v14;
  char v15;
  __int64* v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  _BYTE* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v34;
  char v35;
  char v36;
  char v37;
  char v38;
  char v39;
  char v40;
  _DWORD v41[8];
  _BYTE v42[2];
  __int16 v43;
  int v44;
  int v45;

  v43 = 0;
  v42[0] = a3;
  v42[1] = a4;
  v9 = a3 - GameData_221fe88;
  v10 = a4 + GameData_221fe90;
  v11 = *(float*)(*(_QWORD*)GameData_212d020[0] + 4400LL);
  v12 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL);
  v13 = a4 + GameData_221fe8c;
  v41[0] = (unsigned __int8)(a3 - GameData_221fe88) |
           ((unsigned __int8)(a4 + GameData_221fe8c) << 8);
  v41[1] = a3 | ((unsigned __int8)(a4 + GameData_221fe90) << 8);
  v14 = a3 + GameData_221fe94;
  v15 = a4 + GameData_221fe98;
  v41[2] = (unsigned __int8)(a3 + GameData_221fe94) |
           ((unsigned __int8)(a4 + GameData_221fe98) << 8);
  v41[3] = (unsigned __int8)(a3 - GameData_221fe9c) | (a4 << 8);
  v41[4] = (unsigned __int8)(a3 + GameData_221fea0) | (a4 << 8);
  v41[5] = (unsigned __int8)(a3 - GameData_221fea4) |
           ((unsigned __int8)(a4 - GameData_221fea8) << 8);
  v41[6] = a3 | ((unsigned __int8)(a4 - GameData_221feac) << 8);
  v41[7] = (unsigned __int8)(a3 + GameData_221feb0) |
           ((unsigned __int8)(a4 - GameData_221feb4) << 8);
  v16 = GameData_212ce98[0];
  if ((a6 & 1) != 0 && v11 < 0.4f) {
    v17 = 0;
    v18 = 0;
    v19 = v12 + 56LL * a2;
    v20 = (char*)v41 + 1;
    do {
      v21 = GameRoutine_10027c0(v19 + 16, v42);
      v22 = (char)*(v20 - 1);
      if (*(unsigned __int8*)(*v16 + 26) <=
              (unsigned int)(unsigned __int8)(*(v20 - 1) -
                                              *(_BYTE*)(*v16 + 24)) ||
          *(unsigned __int8*)(*v16 + 27) <=
              (unsigned int)(unsigned __int8)(*v20 - *(_BYTE*)(*v16 + 25)) ||
          v21 != 0 && (*(_BYTE*)(v21 + v17 + 76) & 1) != 0 ||
          (v23 = *(_QWORD*)(a5 + 32)) != 0 &&
              (v44 = (char)*v20, v45 = v22,
               ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v23 + 48LL))(
                    v23, &v45, &v44) &
                1) == 0)) {
        v18 |= 1 << v17;
      }
      v20 += 4;
      ++v17;
    } while (v17 != 8);
  }
  else {
    v34 = a3 - GameData_221fe9c;
    v35 = a3 + GameData_221fea0;
    v36 = a4 - GameData_221fea8;
    v37 = a3 - GameData_221fea4;
    v24 = v12 + 56LL * a2;
    v38 = a4 - GameData_221feac;
    v39 = a4 - GameData_221feb4;
    v40 = a3 + GameData_221feb0;
    GameRoutine_10027c0(v24 + 16, v42);
    v18 = true;
    if (*(unsigned __int8*)(*v16 + 26) >
            (unsigned int)(unsigned __int8)(v9 - *(_BYTE*)(*v16 + 24)) &&
        *(unsigned __int8*)(*v16 + 27) >
            (unsigned int)(unsigned __int8)(v13 - *(_BYTE*)(*v16 + 25))) {
      v25 = *(_QWORD*)(a5 + 32);
      if (v25 == 0 || (v44 = v13, v45 = v9,
                       ((*(__int64 (**)(__int64, int*, int*))(
                            *(_QWORD*)v25 + 48LL))(v25, &v45, &v44) &
                        1) != 0)) {
        v18 = false;
      }
    }
    GameRoutine_10027c0(v24 + 16, v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(v10 - *(_BYTE*)(*v16 + 25)) ||
        (v26 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = v10, v45 = (char)a3,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v26 + 48LL))(
                  v26, &v45, &v44) &
              1) == 0)) {
      v18 |= 2u;
    }
    GameRoutine_10027c0(v24 + 16, v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(v14 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(v15 - *(_BYTE*)(*v16 + 25)) ||
        (v27 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = v15, v45 = v14,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v27 + 48LL))(
                  v27, &v45, &v44) &
              1) == 0)) {
      v18 |= 4u;
    }
    GameRoutine_10027c0(v24 + 16, v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(v34 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(a4 - *(_BYTE*)(*v16 + 25)) ||
        (v28 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = (char)a4, v45 = v34,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v28 + 48LL))(
                  v28, &v45, &v44) &
              1) == 0)) {
      v18 |= 8u;
    }
    GameRoutine_10027c0(v24 + 16, v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(v35 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(a4 - *(_BYTE*)(*v16 + 25)) ||
        (v29 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = (char)a4, v45 = v35,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v29 + 48LL))(
                  v29, &v45, &v44) &
              1) == 0)) {
      v18 |= 0x10u;
    }
    GameRoutine_10027c0(v24 + 16, v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(v37 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(v36 - *(_BYTE*)(*v16 + 25)) ||
        (v30 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = v36, v45 = v37,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v30 + 48LL))(
                  v30, &v45, &v44) &
              1) == 0)) {
      v18 |= 0x20u;
    }
    GameRoutine_10027c0(v24 + 16, v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(v38 - *(_BYTE*)(*v16 + 25)) ||
        (v31 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = v38, v45 = (char)a3,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v31 + 48LL))(
                  v31, &v45, &v44) &
              1) == 0)) {
      v18 |= 0x40u;
    }
    GameRoutine_10027c0(v24 + 16, v42);
    if (*(unsigned __int8*)(*v16 + 26) <=
            (unsigned int)(unsigned __int8)(v40 - *(_BYTE*)(*v16 + 24)) ||
        *(unsigned __int8*)(*v16 + 27) <=
            (unsigned int)(unsigned __int8)(v39 - *(_BYTE*)(*v16 + 25)) ||
        (v32 = *(_QWORD*)(a5 + 32)) != 0 &&
            (v44 = v39, v45 = v40,
             ((*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v32 + 48LL))(
                  v32, &v45, &v44) &
              1) == 0)) {
      v18 |= 0x80u;
    }
  }
  return v18;
}

void MapDrawConst_fcc360(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  __int64 v16;

  LODWORD(v16) = 15;
  v3 = game_UnitPool_GetFirst(&v16);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v3 + 432);
    v5 = v3;
    if (v4 == 0) {
      v4 = *(_QWORD*)(v3 + 440);
      if (v4 != 0) {
        v6 = *(unsigned __int8*)(v4 + 16);
        if (v6 <= 8) {
          v14 = 24LL * *(unsigned __int8*)(v4 + 16) + 556024;
          while (1) {
            if (v6 <= 2) {
              v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v14);
              if (v4 != 0) {
                break;
              }
            }
            ++v6;
            v14 += 24;
            if (v6 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v4 = 0;
        }
      }
    }
    while (1) {
    LABEL_8:
      v7 = v4;
      if ((*(_BYTE*)(v5 + 417) & 0x1C) == 0) {
        v9 = (*(float (**)(__int64))(*(_QWORD*)(v5 + 152) + 16LL))(v5 + 152);
        if (v9 > 0.0) {
          v10 = *(_QWORD*)(a2 + 32);
          v16 = v5;
          v15 = v9;
          if (v10 == 0) {
            GameRoutine_60a310(0, v8);
          }
          (*(void (**)(__int64, __int64*, float*))(*(_QWORD*)v10 + 48LL))(
              v10, &v16, &v15);
        }
      }
      if (v7 == 0) {
        break;
      }
      v4 = *(_QWORD*)(v7 + 432);
      v5 = v7;
      if (v4 == 0) {
        v11 = *(_QWORD*)(v7 + 440);
        v5 = v7;
        if (v11 != 0) {
          v12 = *(unsigned __int8*)(v11 + 16);
          v4 = 0;
          v5 = v7;
          if (v12 <= 8) {
            v13 = 24LL * (unsigned int)v12 + 556024;
            while (1) {
              if (v12 <= 2) {
                v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v13);
                if (v4 != 0) {
                  break;
                }
              }
              ++v12;
              v13 += 24;
              if (v12 == 9) {
                v4 = 0;
                v5 = v7;
                goto LABEL_8;
              }
            }
            v5 = v7;
          }
        }
      }
    }
  }
}

_QWORD* MapDrawConst_fcc660(_QWORD* result, __int64 a2)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;

  v3 = result[1];
  v2 = result[2];
  v5 = result;
  if (v3 >= v2) {
    v7 = *result;
    v8 = v3 - *result;
    v9 = 1 - 0x5555555555555555LL * (v8 >> 4);
    if (v9 > 0x555555555555555LL) {
      GameRoutine_fccb90();
    }
    v10 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v2 - v7) >> 4);
    if (2 * v10 > v9) {
      v9 = 2 * v10;
    }
    if (v10 >= 0x2AAAAAAAAAAAAAALL) {
      v11 = 0x555555555555555LL;
    }
    else {
      v11 = v9;
    }
    if (v11 > 0x555555555555555LL) {
      GameRoutine_60a210(result);
    }
    v12 = 3 * v11;
    v13 = fw_memory_g_heap_manager_ptr;
    result = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v11, 16, 0);
    v14 = (char*)result + v8;
    *(_DWORD*)v14 = *(_DWORD*)a2;
    v15 = *(_QWORD*)(a2 + 24);
    *((_QWORD*)v14 + 2) = *(_QWORD*)(a2 + 16);
    *((_QWORD*)v14 + 3) = v15;
    v16 = *(_QWORD*)(a2 + 32);
    v17 = *(_QWORD*)(a2 + 40);
    v6 = (__int64)result + v8 + 48;
    *((_QWORD*)v14 + 4) = v16;
    *((_QWORD*)v14 + 5) = v17;
    if (v7 != v3) {
      v18 = v7;
      v19 = result;
      do {
        *(_DWORD*)v19 = *(_DWORD*)v18;
        v19[3] = *(_QWORD*)(v18 + 24);
        v19[2] = *(_QWORD*)(v18 + 16);
        v19[5] = *(_QWORD*)(v18 + 40);
        v20 = *(_QWORD*)(v18 + 32);
        v18 += 48;
        v19[4] = v20;
        v19 += 6;
      } while (v18 != v3);
    }
    *v5 = result;
    v5[1] = v6;
    v5[2] = &result[2 * v12];
    if (v7 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v21 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v21);
    }
  }
  else {
    *(_DWORD*)v3 = *(_DWORD*)a2;
    *(_QWORD*)(v3 + 24) = *(_QWORD*)(a2 + 24);
    *(_QWORD*)(v3 + 16) = *(_QWORD*)(a2 + 16);
    *(_QWORD*)(v3 + 40) = *(_QWORD*)(a2 + 40);
    v6 = v3 + 48;
    *(_QWORD*)(v3 + 32) = *(_QWORD*)(a2 + 32);
  }
  v5[1] = v6;
  return result;
}

bool game_map_MapDrawConst_AddCellPlaneMask_lambda0_Invoke(__int64 a1,
                                                           unsigned __int8* a2,
                                                           unsigned __int8* a3)
{
  unsigned __int8** v3;
  unsigned __int8* v4;
  unsigned __int8* v5;

  v3 = *(unsigned __int8***)(a1 + 8);
  v4 = *v3;
  v5 = v3[1];
  if (v4 != v5) {
    while (*v4 != *a2 || v4[1] != *a3) {
      v4 += 4;
      if (v4 == v5) {
        v4 = v5;
        return v4 != v5;
      }
    }
  }
  return v4 != v5;
}

#pragma GCC visibility pop
