#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_65f3d0(_QWORD, _QWORD);
__int64 GameRoutine_660f80(_QWORD);
__int64 GameRoutine_72ca20(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f939e0[])();
extern __int64 (*GameData_1f93b10[])();
extern __int64 (*game_map_Image_vtable[])();
extern __int64 GameData_21ca300;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c930;
extern int GameData_21cd160;
__int64 Image_Destructor(_QWORD* a1);
__int64 Image_Unknown6(__int64 result, __int64 a2);
__int64 Image_Unknown7(unsigned __int8* a1, __int64 a2, int a3);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74cd60(_QWORD);
__int64 GameRoutine_756f00(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a83a0(_QWORD);
__int64 MapUtil_756d50(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84cc00(_QWORD, _QWORD, _QWORD);
__int64 Unit_6c8a80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1f93d00[])();
extern __int64 (*GameData_1f93d80[])();
extern __int64 (*GameData_1f93e00[])();
extern __int64 (*GameData_1f93e80[])();
extern __int64 (*GameData_1f93f00[])();
extern __int64 (*GameData_1f93f80[])();
extern __int64 (*GameData_1f94010[])();
extern __int64 (*GameData_1f94090[])();
extern __int64 (*GameData_1f94190[])();
extern __int64 (*GameData_1f94210[])();
extern __int64 (*GameData_1f94290[])();
extern __int64 (*GameData_1f94310[])();
extern __int64 (*game_map_Image_RemoveScope_vtable[])();
extern __int64 GameData_21ca100;
extern __int64 GameData_21ca108;
extern __int64 GameData_21ca118;
extern __int64 GameData_21ca120;
extern __int64 GameData_21ca160;
extern __int64 GameData_21ca2f0;
extern __int64 GameData_21ca310;
extern __int64 game_map_g_hint_data;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD) __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_72dec0(void);
__int64 Image_729780_alt1(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6) __asm__("Image_729780");
__int64 Image_729f40_alt1(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6) __asm__("Image_729f40");
__int64 Image_72a260_alt1(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6) __asm__("Image_72a260");
__int64 Image_72b4a0_alt1(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                          __int64 a5, __int64 a6) __asm__("Image_72b4a0");
_QWORD* Image_72b6c0(_QWORD* a1);
_QWORD* Image_72bf60(_QWORD* result, __int64 a2, __int64 a3, __int64 a4);
_QWORD* Image_72c060(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4,
                     __int64 a5);
_QWORD* Image_72cbc0(_QWORD* result, __int64 a2, __int64 a3, __int64 a4);
__int64 game_map_Image_UnitMap_UpdateSupportSkill_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2,
                                                                 int* a3);
__int64 game_map_Image_UnitMap_UpdateSupportSkill_lambda1_Invoke(__int64 result,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3);
__int64 game_map_Image_UnitMap_UpdateSupportSkill_lambda2_Invoke_72fe80(
    __int64 a1, __int64* a2, int* a3);
__int64 game_map_Image_UnitMap_EachSupportSkill_lambda0_Invoke(__int64 a1,
                                                               __int64 a2,
                                                               __int64 a3,
                                                               __int64 a4);
__int64 game_map_Image_UnitMap_Add_lambda0_Invoke(__int64 result, _DWORD* a2,
                                                  _DWORD* a3);
__int64 game_map_Image_UnitMap_Remove_lambda0_Invoke(__int64 result, _DWORD* a2,
                                                     _DWORD* a3);
__int64 EscapeMenuItem_752b40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                              _QWORD, _QWORD);
__int64 GameRoutine_84edc0(_QWORD, _QWORD);
extern _DWORD GameData_1a82ec0[4];
extern __int64 (*GameData_1f94100[])();
_QWORD*
game_map_Image_UnitMap_UpdateSupportSkill_lambda2_Invoke_72fa00(__int64 a1,
                                                                _DWORD* a2);
__int64 MapUtil_756d50_alt1(int, int, __int64) __asm__("MapUtil_756d50");
__int64 Unit_6c8a80_alt1(__int64 result, int, int,
                         __int64) __asm__("Unit_6c8a80");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_UnitPool_GetFirst_alt1(int*) __asm__("game_UnitPool_GetFirst");
__int64 game_map_MapUtil_EachTerrain(__int64 result, unsigned int, unsigned int,
                                     __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
__int64 Image_729780(__int64 a1);
__int64 IDeploy_748f80(__int64, __int64, unsigned int, unsigned int, int,
                       unsigned int*);
void GameRoutine_74cd60_alt1(__int64*) __asm__("GameRoutine_74cd60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 Image_729f40(_QWORD* a1);
void Image_72a260(__int64 a1);
__int64 Image_72b4a0(__int64 a1);
__int64 game_map_Image_SightMap_CanSee_lambda0_Invoke(__int64 result,
                                                      _DWORD* a2, _DWORD* a3);

__int64 Image_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  *a1 = game_map_Image_vtable;
  a1[1] = GameData_1f939e0;
  v2 = a1[9];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[9] = 0;
  }
  v3 = a1[4];
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    a1[4] = 0;
  }
  v4 = a1[5];
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    a1[5] = 0;
  }
  v5 = a1[6];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
    a1[6] = 0;
  }
  v6 = a1[7];
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    a1[7] = 0;
  }
  v7 = a1[8];
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    a1[8] = 0;
  }
  v8 = a1[10];
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    a1[10] = 0;
  }
  v9 = a1[11];
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
    a1[11] = 0;
  }
  v10 = a1[20];
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    a1[20] = 0;
  }
  result = a1[19];
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    a1[19] = 0;
  }
  v12 = (_QWORD*)a1[14];
  v13 = (_QWORD*)a1[15];
  a1[18] = 0;
  v14 = fw_memory_g_heap_manager_ptr;
  v15 = v13 - v12;
  if (v15 >= 3) {
    do {
      if (*v12 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v16, *v12);
        v12 = (_QWORD*)a1[14];
        v13 = (_QWORD*)a1[15];
      }
      a1[14] = ++v12;
      v15 = v13 - v12;
    } while (v15 > 2);
  }
  if (v15 == 1) {
    v17 = 85;
  }
  else {
    if (v15 != 2) {
      goto LABEL_34;
    }
    v17 = 170;
  }
  a1[17] = v17;

LABEL_34:
  if (v12 != v13) {
    do {
      if (*v12 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v18, *v12);
      }
      ++v12;
    } while (v12 != v13);
    v19 = a1[15];
    v20 = a1[14] - v19;
    if (v20 != 0) {
      a1[15] = v19 + ((v20 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v21 = a1[13];
  if (v21 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v22 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v22, v21);
  }
  *a1 = GameData_1f93b10;
  if ((_QWORD*)GameData_21ca300 == a1) {
    GameData_21ca300 = 0;
    GameData_21cd160 = 0;
  }
  return result;
}

__int64 Image_729780(__int64 a1)
{
  int v2;
  int v3;
  __int64* v4;
  char v5;
  char* v6;
  char v7;
  char v8;
  char v9;
  char v10;
  __int64 v11;
  unsigned __int8* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 result;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  int v49;
  unsigned int v50;
  unsigned int v51;
  int v52;
  int v53;
  unsigned int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;

  if (HIDWORD(game_map_g_hint_data) * (int)game_map_g_hint_data < 1) {
    return 0;
  }
  if (GameData_21ca108 - GameData_21ca100 != 2048 ||
      GameData_21ca120 - GameData_21ca118 != 2048) {
    return 0;
  }
  LOBYTE(v2) = GameData_21ca160;
  if (GameData_21ca160 != 0) {
    v2 = *(_DWORD*)(GameData_21ca160 + 24);
  }
  *(_BYTE*)(a1 + 16) = v2;
  LOBYTE(v3) = GameData_21ca160;
  if (GameData_21ca160 != 0) {
    v3 = *(_DWORD*)(GameData_21ca160 + 28);
  }
  *(_BYTE*)(a1 + 17) = v3;
  if (GameData_21ca160 != 0) {
    v4 = (__int64*)(GameData_21ca160 + 32);
  }
  else {
    v4 = &game_map_g_hint_data;
  }
  v5 = *(_BYTE*)v4;
  *(_BYTE*)(a1 + 18) = v5;
  v6 = (char*)&game_map_g_hint_data + 4;
  v7 = v2 + v5;
  v8 = v5 - 2;
  if (GameData_21ca160 != 0) {
    v6 = (char*)(GameData_21ca160 + 36);
  }
  v9 = *v6;
  *(_BYTE*)(a1 + 20) = v2;
  *(_BYTE*)(a1 + 22) = v7 - 1;
  *(_BYTE*)(a1 + 21) = v3;
  *(_BYTE*)(a1 + 26) = v8;
  *(_BYTE*)(a1 + 24) = v2 + 1;
  *(_BYTE*)(a1 + 28) = v2 + 1;
  *(_BYTE*)(a1 + 30) = v8 + v2;
  v10 = v3 + v9;
  *(_BYTE*)(a1 + 19) = v9;
  v9 -= 2;
  *(_BYTE*)(a1 + 27) = v9;
  *(_BYTE*)(a1 + 31) = v9 + v3;
  v11 = *(_QWORD*)(a1 + 32);
  *(_BYTE*)(a1 + 23) = v10 - 1;
  *(_BYTE*)(a1 + 25) = v3 + 1;
  *(_BYTE*)(a1 + 29) = v3 + 1;
  memset_alt1(v11 + 8, 0, 0x800u);
  memset_alt1(*(_QWORD*)(a1 + 40) + 8LL, 0, 0x800u);
  v12 = (unsigned __int8*)GameData_21ca300;
  v13 = *(unsigned __int8*)(GameData_21ca300 + 21);
  v14 = *(unsigned __int8*)(GameData_21ca300 + 23);
  v15 = *(unsigned __int8*)(GameData_21ca300 + 20);
  v16 = *(unsigned __int8*)(GameData_21ca300 + 22);
  if ((unsigned int)v13 <= (unsigned int)v14 &&
      (unsigned int)v15 <= (unsigned int)v16) {
    v18 = v16 + 1;
    v19 = 32 * v13;
    v20 = v16 - v15;
    v21 = 32 * v13 + v15;
    v22 = (v13 << 6) | 0xE;
    do {
      v24 = v15;
      if ((((_BYTE)v18 - (_BYTE)v15) & 7) != 0) {
        v25 = ((_BYTE)v18 - (_BYTE)v15) & 7;
        v26 = v21;
        v27 = -v15;
        do {
          v28 = 2 * v26;
          v29 = v26 >= 0x400;
          v30 = (unsigned int)v26;
          --v27;
          ++v26;
          if (v29) {
            v30 = 0;
          }
          --v25;
          *(_WORD*)(*(_QWORD*)(a1 + 32) + 2 * v30 + 8) =
              *(_WORD*)(GameData_21ca100 + v28);
          *(_WORD*)(*(_QWORD*)(a1 + 40) + 2 * v30 + 8) =
              *(_WORD*)(GameData_21ca118 + v28);
        } while (v25 != 0);
        v24 = -v27;
      }
      if (v20 >= 7) {
        do {
          v31 = v19 + v24;
          v32 = (unsigned int)(v19 + v24);
          if ((unsigned __int64)(v19 + v24) >= 0x400) {
            v32 = 0;
          }
          *(_WORD*)(*(_QWORD*)(a1 + 32) + 2 * v32 + 8) =
              *(_WORD*)(GameData_21ca100 + v22 + 2 * v24 - 14);
          *(_WORD*)(*(_QWORD*)(a1 + 40) + 2 * v32 + 8) =
              *(_WORD*)(GameData_21ca118 + v22 + 2 * v24 - 14);
          if ((unsigned __int64)(v31 + 1) >= 0x400) {
            v33 = 0;
          }
          else {
            v33 = (unsigned int)(v31 + 1);
          }
          *(_WORD*)(*(_QWORD*)(a1 + 32) + 2 * v33 + 8) =
              *(_WORD*)(GameData_21ca100 + v22 + 2 * v24 - 12);
          *(_WORD*)(*(_QWORD*)(a1 + 40) + 2 * v33 + 8) =
              *(_WORD*)(GameData_21ca118 + v22 + 2 * v24 - 12);
          if ((unsigned __int64)(v31 + 2) >= 0x400) {
            v34 = 0;
          }
          else {
            v34 = (unsigned int)(v31 + 2);
          }
          *(_WORD*)(*(_QWORD*)(a1 + 32) + 2 * v34 + 8) =
              *(_WORD*)(GameData_21ca100 + v22 + 2 * v24 - 10);
          *(_WORD*)(*(_QWORD*)(a1 + 40) + 2 * v34 + 8) =
              *(_WORD*)(GameData_21ca118 + v22 + 2 * v24 - 10);
          if ((unsigned __int64)(v31 + 3) >= 0x400) {
            v35 = 0;
          }
          else {
            v35 = (unsigned int)(v31 + 3);
          }
          *(_WORD*)(*(_QWORD*)(a1 + 32) + 2 * v35 + 8) =
              *(_WORD*)(GameData_21ca100 + v22 + 2 * v24 - 8);
          *(_WORD*)(*(_QWORD*)(a1 + 40) + 2 * v35 + 8) =
              *(_WORD*)(GameData_21ca118 + v22 + 2 * v24 - 8);
          if ((unsigned __int64)(v31 + 4) >= 0x400) {
            v36 = 0;
          }
          else {
            v36 = (unsigned int)(v31 + 4);
          }
          *(_WORD*)(*(_QWORD*)(a1 + 32) + 2 * v36 + 8) =
              *(_WORD*)(GameData_21ca100 + v22 + 2 * v24 - 6);
          *(_WORD*)(*(_QWORD*)(a1 + 40) + 2 * v36 + 8) =
              *(_WORD*)(GameData_21ca118 + v22 + 2 * v24 - 6);
          if ((unsigned __int64)(v31 + 5) >= 0x400) {
            v37 = 0;
          }
          else {
            v37 = (unsigned int)(v31 + 5);
          }
          *(_WORD*)(*(_QWORD*)(a1 + 32) + 2 * v37 + 8) =
              *(_WORD*)(GameData_21ca100 + v22 + 2 * v24 - 4);
          v38 = v31 + 6;
          v39 = v31 + 7;
          if (v38 >= 0x400) {
            v38 = 0;
          }
          else {
            v38 = (unsigned int)v38;
          }
          *(_WORD*)(*(_QWORD*)(a1 + 40) + 2 * v37 + 8) =
              *(_WORD*)(GameData_21ca118 + v22 + 2 * v24 - 4);
          v40 = 2 * v24;
          *(_WORD*)(*(_QWORD*)(a1 + 32) + 2 * v38 + 8) =
              *(_WORD*)(GameData_21ca100 + v22 + 2 * v24 - 2);
          v41 = *(_QWORD*)(a1 + 40) + 2 * v38;
          v42 = GameData_21ca118 + v22 + 2 * v24;
          v24 += 8;
          *(_WORD*)(v41 + 8) = *(_WORD*)(v42 - 2);
          if (v39 >= 0x400) {
            v39 = 0;
          }
          else {
            v39 = (unsigned int)v39;
          }
          *(_WORD*)(*(_QWORD*)(a1 + 32) + 2 * v39 + 8) =
              *(_WORD*)(GameData_21ca100 + v22 + v40);
          *(_WORD*)(*(_QWORD*)(a1 + 40) + 2 * v39 + 8) =
              *(_WORD*)(GameData_21ca118 + v22 + v40);
        } while (v18 != v24);
      }
      v21 += 32LL;
      v22 += 64;
      v19 += 32;
      v23 = v13++ == v14;
    } while (!v23);
    v12 = (unsigned __int8*)GameData_21ca300;
  }
  memcpy_alt1(*(_QWORD*)(a1 + 56) + 8LL, *(_QWORD*)(a1 + 32) + 8LL, 0x800u);
  memcpy_alt1(*(_QWORD*)(a1 + 64) + 8LL, *(_QWORD*)(a1 + 40) + 8LL, 0x800u);
  memset_alt1(*(_QWORD*)(a1 + 48) + 8LL, 0, 0x800u);
  memset_alt1(*(_QWORD*)(a1 + 72) + 8LL, 0, 0x800u);
  v44 = v12[21];
  v45 = v12[23];
  result = 1;
  if (v44 <= v45) {
    v46 = v12[20];
    v47 = v12[22];
    if (v46 <= v47) {
      v48 = v47 + 1;
      v49 = 32 * v44;
      v50 = v47 - v46;
      v51 = 32 * v44 + v46;
      do {
        v52 = v46;
        if ((((_BYTE)v48 - (_BYTE)v46) & 3) != 0) {
          v53 = ((_BYTE)v48 - (_BYTE)v46) & 3;
          v54 = v51;
          v55 = -v46;
          do {
            if (v54 >= 0x400) {
              v56 = 0;
            }
            else {
              v56 = v54;
            }
            v57 = 2LL * (unsigned int)v56;
            if (*(_WORD*)(*(_QWORD*)(a1 + 48) + v57 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(a1 + 72) + 2 * v56 + 8) =
                  *(_WORD*)(*(_QWORD*)(a1 + 48) + v57 + 8);
            }
            else {
              v58 = *(_QWORD*)(a1 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(a1 + 40) + v57 + 8) != 0) {
                *(_WORD*)(v58 + 2 * v56) =
                    *(_WORD*)(*(_QWORD*)(a1 + 40) + v57 + 8);
              }
              else {
                *(_WORD*)(v58 + 2 * v56) =
                    *(_WORD*)(*(_QWORD*)(a1 + 32) + v57 + 8);
              }
            }
            --v55;
            ++v54;
            --v53;
          } while (v53 != 0);
          v52 = -v55;
        }
        if (v50 >= 3) {
          do {
            LODWORD(v59) = v49 + v52;
            if ((unsigned int)(v49 + v52) >= 0x400) {
              v59 = 0;
            }
            else {
              v59 = (unsigned int)v59;
            }
            v60 = 2LL * (unsigned int)v59;
            if (*(_WORD*)(*(_QWORD*)(a1 + 48) + v60 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(a1 + 72) + 2 * v59 + 8) =
                  *(_WORD*)(*(_QWORD*)(a1 + 48) + v60 + 8);
            }
            else {
              v61 = *(_QWORD*)(a1 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(a1 + 40) + v60 + 8) != 0) {
                *(_WORD*)(v61 + 2 * v59) =
                    *(_WORD*)(*(_QWORD*)(a1 + 40) + v60 + 8);
              }
              else {
                *(_WORD*)(v61 + 2 * v59) =
                    *(_WORD*)(*(_QWORD*)(a1 + 32) + v60 + 8);
              }
            }
            if ((unsigned int)(v49 + v52 + 1) < 0x400) {
              v62 = (unsigned int)(v49 + v52 + 1);
            }
            else {
              v62 = 0;
            }
            v63 = 2LL * (unsigned int)v62;
            if (*(_WORD*)(*(_QWORD*)(a1 + 48) + v63 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(a1 + 72) + 2 * v62 + 8) =
                  *(_WORD*)(*(_QWORD*)(a1 + 48) + v63 + 8);
            }
            else {
              v64 = *(_QWORD*)(a1 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(a1 + 40) + v63 + 8) != 0) {
                *(_WORD*)(v64 + 2 * v62) =
                    *(_WORD*)(*(_QWORD*)(a1 + 40) + v63 + 8);
              }
              else {
                *(_WORD*)(v64 + 2 * v62) =
                    *(_WORD*)(*(_QWORD*)(a1 + 32) + v63 + 8);
              }
            }
            LODWORD(v65) = v49 + v52 + 2;
            if ((unsigned int)v65 >= 0x400) {
              v65 = 0;
            }
            else {
              v65 = (unsigned int)v65;
            }
            v66 = 2LL * (unsigned int)v65;
            if (*(_WORD*)(*(_QWORD*)(a1 + 48) + v66 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(a1 + 72) + 2 * v65 + 8) =
                  *(_WORD*)(*(_QWORD*)(a1 + 48) + v66 + 8);
            }
            else {
              v67 = *(_QWORD*)(a1 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(a1 + 40) + v66 + 8) != 0) {
                *(_WORD*)(v67 + 2 * v65) =
                    *(_WORD*)(*(_QWORD*)(a1 + 40) + v66 + 8);
              }
              else {
                *(_WORD*)(v67 + 2 * v65) =
                    *(_WORD*)(*(_QWORD*)(a1 + 32) + v66 + 8);
              }
            }
            LODWORD(v68) = v49 + v52 + 3;
            if ((unsigned int)v68 >= 0x400) {
              v68 = 0;
            }
            else {
              v68 = (unsigned int)v68;
            }
            v69 = 2LL * (unsigned int)v68;
            if (*(_WORD*)(*(_QWORD*)(a1 + 48) + v69 + 8) != 0) {
              *(_WORD*)(*(_QWORD*)(a1 + 72) + 2 * v68 + 8) =
                  *(_WORD*)(*(_QWORD*)(a1 + 48) + v69 + 8);
            }
            else {
              v70 = *(_QWORD*)(a1 + 72) + 8LL;
              if (*(_WORD*)(*(_QWORD*)(a1 + 40) + v69 + 8) != 0) {
                *(_WORD*)(v70 + 2 * v68) =
                    *(_WORD*)(*(_QWORD*)(a1 + 40) + v69 + 8);
              }
              else {
                *(_WORD*)(v70 + 2 * v68) =
                    *(_WORD*)(*(_QWORD*)(a1 + 32) + v69 + 8);
              }
            }
            v52 += 4;
          } while (v48 != v52);
        }
        v51 += 32;
        v49 += 32;
        v23 = v44++ == v45;
      } while (!v23);
      return 1;
    }
  }
  return result;
}

__int64 Image_729f40(_QWORD* a1)
{
  __int64 result;
  unsigned int v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int16 v29;
  __int64 v30;

  result = memset_alt1(a1[9] + 8LL, 0, 0x800u);
  v3 = *(unsigned __int8*)(GameData_21ca300 + 20);
  v4 = *(unsigned __int8*)(GameData_21ca300 + 21);
  v5 = *(unsigned __int8*)(GameData_21ca300 + 22);
  v6 = *(unsigned __int8*)(GameData_21ca300 + 23);
  if (v4 <= v6 && v3 <= v5) {
    v8 = v5 + 1;
    v9 = 32 * v4;
    v10 = v5 - v3;
    v11 = 32 * v4 + v3;
    do {
      v13 = v3;
      if ((((_BYTE)v8 - (_BYTE)v3) & 3) != 0) {
        v14 = ((_BYTE)v8 - (_BYTE)v3) & 3;
        LODWORD(result) = v11;
        v15 = -v3;
        do {
          if ((unsigned int)result >= 0x400) {
            v16 = 0;
          }
          else {
            v16 = (unsigned int)result;
          }
          v17 = 2LL * (unsigned int)v16;
          if (*(_WORD*)(a1[6] + v17 + 8) != 0) {
            *(_WORD*)(a1[9] + 2 * v16 + 8) = *(_WORD*)(a1[6] + v17 + 8);
          }
          else {
            v18 = a1[9] + 8LL;
            if (*(_WORD*)(a1[5] + v17 + 8) != 0) {
              *(_WORD*)(v18 + 2 * v16) = *(_WORD*)(a1[5] + v17 + 8);
            }
            else {
              *(_WORD*)(v18 + 2 * v16) = *(_WORD*)(a1[4] + v17 + 8);
            }
          }
          --v15;
          result = (unsigned int)(result + 1);
          --v14;
        } while (v14 != 0);
        v13 = -v15;
      }
      if (v10 >= 3) {
        do {
          LODWORD(v19) = v9 + v13;
          if ((unsigned int)(v9 + v13) >= 0x400) {
            v19 = 0;
          }
          else {
            v19 = (unsigned int)v19;
          }
          v20 = 2LL * (unsigned int)v19;
          if (*(_WORD*)(a1[6] + v20 + 8) != 0) {
            *(_WORD*)(a1[9] + 2 * v19 + 8) = *(_WORD*)(a1[6] + v20 + 8);
          }
          else {
            v21 = a1[9] + 8LL;
            if (*(_WORD*)(a1[5] + v20 + 8) != 0) {
              *(_WORD*)(v21 + 2 * v19) = *(_WORD*)(a1[5] + v20 + 8);
            }
            else {
              *(_WORD*)(v21 + 2 * v19) = *(_WORD*)(a1[4] + v20 + 8);
            }
          }
          if ((unsigned int)(v9 + v13 + 1) < 0x400) {
            v22 = (unsigned int)(v9 + v13 + 1);
          }
          else {
            v22 = 0;
          }
          v23 = 2LL * (unsigned int)v22;
          if (*(_WORD*)(a1[6] + v23 + 8) != 0) {
            *(_WORD*)(a1[9] + 2 * v22 + 8) = *(_WORD*)(a1[6] + v23 + 8);
          }
          else {
            v24 = a1[9] + 8LL;
            if (*(_WORD*)(a1[5] + v23 + 8) != 0) {
              *(_WORD*)(v24 + 2 * v22) = *(_WORD*)(a1[5] + v23 + 8);
            }
            else {
              *(_WORD*)(v24 + 2 * v22) = *(_WORD*)(a1[4] + v23 + 8);
            }
          }
          LODWORD(v25) = v9 + v13 + 2;
          if ((unsigned int)v25 >= 0x400) {
            v25 = 0;
          }
          else {
            v25 = (unsigned int)v25;
          }
          v26 = 2LL * (unsigned int)v25;
          if (*(_WORD*)(a1[6] + v26 + 8) != 0) {
            *(_WORD*)(a1[9] + 2 * v25 + 8) = *(_WORD*)(a1[6] + v26 + 8);
          }
          else {
            v27 = a1[9] + 8LL;
            if (*(_WORD*)(a1[5] + v26 + 8) != 0) {
              *(_WORD*)(v27 + 2 * v25) = *(_WORD*)(a1[5] + v26 + 8);
            }
            else {
              *(_WORD*)(v27 + 2 * v25) = *(_WORD*)(a1[4] + v26 + 8);
            }
          }
          LODWORD(v28) = v9 + v13 + 3;
          if ((unsigned int)v28 >= 0x400) {
            v28 = 0;
          }
          else {
            v28 = (unsigned int)v28;
          }
          result = 2LL * (unsigned int)v28;
          v29 = *(_WORD*)(a1[6] + result + 8);
          if (v29 != 0) {
            result = a1[9];
            *(_WORD*)(result + 2 * v28 + 8) = v29;
          }
          else {
            v30 = a1[9] + 8LL;
            if (*(_WORD*)(a1[5] + result + 8) != 0) {
              *(_WORD*)(v30 + 2 * v28) = *(_WORD*)(a1[5] + result + 8);
            }
            else {
              result = *(unsigned __int16*)(a1[4] + result + 8);
              *(_WORD*)(v30 + 2 * v28) = result;
            }
          }
          v13 += 4;
        } while (v8 != v13);
      }
      v11 += 32;
      v9 += 32;
    } while (v4++ != v6);
  }
  return result;
}

void Image_72a260(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;
  bool v9;
  __int64 v10;
  __int64* v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  __int64* v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v43;
  unsigned int v44;
  int v45;
  unsigned int v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  __int64 v58;
  __int64* v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  unsigned int v63;
  unsigned int v64;
  unsigned int v65;
  unsigned int v67;
  unsigned int v68;
  int v69;
  unsigned int v70;
  int v71;
  unsigned int v72;
  unsigned int v73;
  unsigned int v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  __int64 v83;
  __int64* v84;
  unsigned int v85;
  unsigned int v86;
  unsigned int v87;
  unsigned int v88;
  unsigned int v89;
  unsigned int v90;
  unsigned int v92;
  unsigned int v93;
  int v94;
  unsigned int v95;
  int v96;
  unsigned int v97;
  unsigned int v98;
  unsigned int v99;
  unsigned int v100;
  unsigned int v101;
  unsigned int v102;
  unsigned int v103;
  unsigned int v104;
  unsigned int v105;
  unsigned int v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  unsigned int v119;

  v1 = a1 + 8;
  memset_alt1(a1 + 8, 0, 0x400u);
  v2 = (_QWORD*)GameData_21ca2f0;
  if (GameData_21ca2f0 != 0) {
    v3 = *(_QWORD*)(GameData_21ca2f0 + 10752);
    v4 = *(_QWORD*)(GameData_21ca2f0 + 10744);
    v5 = ((v3 - v4) << 6) - 1;
    if (v3 == v4) {
      v5 = 0;
    }
    v6 = *(_QWORD*)(GameData_21ca2f0 + 10776) +
         *(_QWORD*)(GameData_21ca2f0 + 10768);
    if (v5 == v6) {
      GameRoutine_74cd60_alt1((__int64*)(GameData_21ca2f0 + 10736));
      v4 = v2[1343];
      v6 = v2[1347] + v2[1346];
    }
    *(_QWORD*)(*(_QWORD*)(v4 + 8 * (v6 >> 9)) + 8 * (v6 & 0x1FF)) = v2[1];
    v2[1] = v2 + 337;
    ++v2[1347];
    v7 = *(_QWORD*)(GameData_21ca310 + 56);
    v8 = *(unsigned __int8*)(v7 + 556016);
    v9 = *(_BYTE*)(v7 + 556016) == 0 || v8 == 3;
    if (!v9) {
      v10 = *(_QWORD*)(v7 + 556000);
      if (v10 != 0) {
        v11 = GameData_212ce98[0];
        do {
          if ((*(_WORD*)(v10 + 416) & 0x1C08) == 0) {
            v12 = *(char*)(v10 + 584);
            v13 = *(char*)(v10 + 585);
            v119 = 370413570;
            IDeploy_748f80((__int64)v2, v10, v12, v13, -1, &v119);
            v14 = *(unsigned __int8*)(*v11 + 28);
            v15 = *(unsigned __int8*)(*v11 + 29);
            v16 = *(unsigned __int8*)(*v11 + 30);
            v17 = *(unsigned __int8*)(*v11 + 31);
            if (v15 <= v17 && v14 <= v16) {
              v19 = v16 + 1;
              v20 = v16 - v14;
              v21 = 32 * v15;
              do {
                v22 = v14;
                if ((((_BYTE)v19 - (_BYTE)v14) & 3) != 0) {
                  v23 = ((_BYTE)v19 - (_BYTE)v14) & 3;
                  v22 = v14;
                  do {
                    v25 = v21 + v22;
                    if (((*(_DWORD*)(v2[1] + 4LL * ((v21 + v22) >> 5) + 2120) >>
                          v22) &
                         1) != 0) {
                      if (v25 >= 0x400) {
                        v25 = 0;
                      }
                      if ((*(_BYTE*)(v10 + 417) & 0x20) != 0) {
                        LOBYTE(v24) = 3;
                      }
                      else {
                        v24 = *(unsigned __int8*)(v1 + v25);
                        if (v24 <= 1) {
                          LOBYTE(v24) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v25) = v24;
                    }
                    ++v22;
                    --v23;
                  } while (v23 != 0);
                }
                if (v20 >= 3) {
                  do {
                    v27 = v21 + v22;
                    if (((*(_DWORD*)(v2[1] + 4LL * ((v21 + v22) >> 5) + 2120) >>
                          v22) &
                         1) != 0) {
                      if (v27 >= 0x400) {
                        v27 = 0;
                      }
                      if ((*(_BYTE*)(v10 + 417) & 0x20) != 0) {
                        LOBYTE(v28) = 3;
                      }
                      else {
                        v28 = *(unsigned __int8*)(v1 + v27);
                        if (v28 <= 1) {
                          LOBYTE(v28) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v27) = v28;
                    }
                    v29 = v22 + 1 + v21;
                    if (((*(_DWORD*)(v2[1] + 4LL * (v29 >> 5) + 2120) >>
                          (v22 + 1)) &
                         1) != 0) {
                      if (v29 >= 0x400) {
                        v29 = 0;
                      }
                      if ((*(_BYTE*)(v10 + 417) & 0x20) != 0) {
                        LOBYTE(v30) = 3;
                      }
                      else {
                        v30 = *(unsigned __int8*)(v1 + v29);
                        if (v30 <= 1) {
                          LOBYTE(v30) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v29) = v30;
                    }
                    v31 = v22 + 2 + v21;
                    if (((*(_DWORD*)(v2[1] + 4LL * (v31 >> 5) + 2120) >>
                          (v22 + 2)) &
                         1) != 0) {
                      if (v31 >= 0x400) {
                        v31 = 0;
                      }
                      if ((*(_BYTE*)(v10 + 417) & 0x20) != 0) {
                        LOBYTE(v32) = 3;
                      }
                      else {
                        v32 = *(unsigned __int8*)(v1 + v31);
                        if (v32 <= 1) {
                          LOBYTE(v32) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v31) = v32;
                    }
                    v33 = v22 + 3 + v21;
                    if (((*(_DWORD*)(v2[1] + 4LL * (v33 >> 5) + 2120) >>
                          (v22 + 3)) &
                         1) != 0) {
                      if (v33 >= 0x400) {
                        v33 = 0;
                      }
                      if ((*(_BYTE*)(v10 + 417) & 0x20) != 0) {
                        LOBYTE(v26) = 3;
                      }
                      else {
                        v26 = *(unsigned __int8*)(v1 + v33);
                        if (v26 <= 1) {
                          LOBYTE(v26) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v33) = v26;
                    }
                    v22 += 4;
                  } while (v19 != v22);
                }
                v21 += 32;
                v9 = v15++ == v17;
              } while (!v9);
            }
          }
          v10 = *(_QWORD*)(v10 + 432);
        } while (v10 != 0);
        v7 = *(_QWORD*)(GameData_21ca310 + 56);
        v8 = *(unsigned __int8*)(v7 + 556016);
      }
    }
    if (v8 != 1) {
      v34 = *(_QWORD*)(v7 + 556024);
      if (v34 != 0) {
        v35 = GameData_212ce98[0];
        do {
          if ((*(_WORD*)(v34 + 416) & 0x1C08) == 0) {
            v36 = *(char*)(v34 + 584);
            v37 = *(char*)(v34 + 585);
            v119 = 370413570;
            IDeploy_748f80((__int64)v2, v34, v36, v37, -1, &v119);
            v38 = *(unsigned __int8*)(*v35 + 28);
            v39 = *(unsigned __int8*)(*v35 + 29);
            v40 = *(unsigned __int8*)(*v35 + 30);
            v41 = *(unsigned __int8*)(*v35 + 31);
            if (v39 <= v41 && v38 <= v40) {
              v43 = v40 + 1;
              v44 = v40 - v38;
              v45 = 32 * v39;
              do {
                v46 = v38;
                if ((((_BYTE)v43 - (_BYTE)v38) & 3) != 0) {
                  v47 = ((_BYTE)v43 - (_BYTE)v38) & 3;
                  v46 = v38;
                  do {
                    v49 = v45 + v46;
                    if (((*(_DWORD*)(v2[1] + 4LL * ((v45 + v46) >> 5) + 2120) >>
                          v46) &
                         1) != 0) {
                      if (v49 >= 0x400) {
                        v49 = 0;
                      }
                      if ((*(_BYTE*)(v34 + 417) & 0x20) != 0) {
                        LOBYTE(v48) = 3;
                      }
                      else {
                        v48 = *(unsigned __int8*)(v1 + v49);
                        if (v48 <= 1) {
                          LOBYTE(v48) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v49) = v48;
                    }
                    ++v46;
                    --v47;
                  } while (v47 != 0);
                }
                if (v44 >= 3) {
                  do {
                    v51 = v45 + v46;
                    if (((*(_DWORD*)(v2[1] + 4LL * ((v45 + v46) >> 5) + 2120) >>
                          v46) &
                         1) != 0) {
                      if (v51 >= 0x400) {
                        v51 = 0;
                      }
                      if ((*(_BYTE*)(v34 + 417) & 0x20) != 0) {
                        LOBYTE(v52) = 3;
                      }
                      else {
                        v52 = *(unsigned __int8*)(v1 + v51);
                        if (v52 <= 1) {
                          LOBYTE(v52) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v51) = v52;
                    }
                    v53 = v46 + 1 + v45;
                    if (((*(_DWORD*)(v2[1] + 4LL * (v53 >> 5) + 2120) >>
                          (v46 + 1)) &
                         1) != 0) {
                      if (v53 >= 0x400) {
                        v53 = 0;
                      }
                      if ((*(_BYTE*)(v34 + 417) & 0x20) != 0) {
                        LOBYTE(v54) = 3;
                      }
                      else {
                        v54 = *(unsigned __int8*)(v1 + v53);
                        if (v54 <= 1) {
                          LOBYTE(v54) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v53) = v54;
                    }
                    v55 = v46 + 2 + v45;
                    if (((*(_DWORD*)(v2[1] + 4LL * (v55 >> 5) + 2120) >>
                          (v46 + 2)) &
                         1) != 0) {
                      if (v55 >= 0x400) {
                        v55 = 0;
                      }
                      if ((*(_BYTE*)(v34 + 417) & 0x20) != 0) {
                        LOBYTE(v56) = 3;
                      }
                      else {
                        v56 = *(unsigned __int8*)(v1 + v55);
                        if (v56 <= 1) {
                          LOBYTE(v56) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v55) = v56;
                    }
                    v57 = v46 + 3 + v45;
                    if (((*(_DWORD*)(v2[1] + 4LL * (v57 >> 5) + 2120) >>
                          (v46 + 3)) &
                         1) != 0) {
                      if (v57 >= 0x400) {
                        v57 = 0;
                      }
                      if ((*(_BYTE*)(v34 + 417) & 0x20) != 0) {
                        LOBYTE(v50) = 3;
                      }
                      else {
                        v50 = *(unsigned __int8*)(v1 + v57);
                        if (v50 <= 1) {
                          LOBYTE(v50) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v57) = v50;
                    }
                    v46 += 4;
                  } while (v43 != v46);
                }
                v45 += 32;
                v9 = v39++ == v41;
              } while (!v9);
            }
          }
          v34 = *(_QWORD*)(v34 + 432);
        } while (v34 != 0);
        v7 = *(_QWORD*)(GameData_21ca310 + 56);
        v8 = *(unsigned __int8*)(v7 + 556016);
      }
      if (v8 == 2) {
        goto LABEL_187;
      }
    }
    v58 = *(_QWORD*)(v7 + 556048);
    if (v58 != 0) {
      v59 = GameData_212ce98[0];
      do {
        if ((*(_WORD*)(v58 + 416) & 0x1C08) == 0) {
          v60 = *(char*)(v58 + 584);
          v61 = *(char*)(v58 + 585);
          v119 = 370413570;
          IDeploy_748f80((__int64)v2, v58, v60, v61, -1, &v119);
          v62 = *(unsigned __int8*)(*v59 + 28);
          v63 = *(unsigned __int8*)(*v59 + 29);
          v64 = *(unsigned __int8*)(*v59 + 30);
          v65 = *(unsigned __int8*)(*v59 + 31);
          if (v63 <= v65 && v62 <= v64) {
            v67 = v64 + 1;
            v68 = v64 - v62;
            v69 = 32 * v63;
            do {
              v70 = v62;
              if ((((_BYTE)v67 - (_BYTE)v62) & 3) != 0) {
                v71 = ((_BYTE)v67 - (_BYTE)v62) & 3;
                v70 = v62;
                do {
                  v73 = v69 + v70;
                  if (((*(_DWORD*)(v2[1] + 4LL * ((v69 + v70) >> 5) + 2120) >>
                        v70) &
                       1) != 0) {
                    if (v73 >= 0x400) {
                      v73 = 0;
                    }
                    if ((*(_BYTE*)(v58 + 417) & 0x20) != 0) {
                      LOBYTE(v72) = 3;
                    }
                    else {
                      v72 = *(unsigned __int8*)(v1 + v73);
                      if (v72 <= 1) {
                        LOBYTE(v72) = 1;
                      }
                    }
                    *(_BYTE*)(v1 + v73) = v72;
                  }
                  ++v70;
                  --v71;
                } while (v71 != 0);
              }
              if (v68 >= 3) {
                do {
                  v75 = v69 + v70;
                  if (((*(_DWORD*)(v2[1] + 4LL * ((v69 + v70) >> 5) + 2120) >>
                        v70) &
                       1) != 0) {
                    if (v75 >= 0x400) {
                      v75 = 0;
                    }
                    if ((*(_BYTE*)(v58 + 417) & 0x20) != 0) {
                      LOBYTE(v76) = 3;
                    }
                    else {
                      v76 = *(unsigned __int8*)(v1 + v75);
                      if (v76 <= 1) {
                        LOBYTE(v76) = 1;
                      }
                    }
                    *(_BYTE*)(v1 + v75) = v76;
                  }
                  v77 = v70 + 1 + v69;
                  if (((*(_DWORD*)(v2[1] + 4LL * (v77 >> 5) + 2120) >>
                        (v70 + 1)) &
                       1) != 0) {
                    if (v77 >= 0x400) {
                      v77 = 0;
                    }
                    if ((*(_BYTE*)(v58 + 417) & 0x20) != 0) {
                      LOBYTE(v78) = 3;
                    }
                    else {
                      v78 = *(unsigned __int8*)(v1 + v77);
                      if (v78 <= 1) {
                        LOBYTE(v78) = 1;
                      }
                    }
                    *(_BYTE*)(v1 + v77) = v78;
                  }
                  v79 = v70 + 2 + v69;
                  if (((*(_DWORD*)(v2[1] + 4LL * (v79 >> 5) + 2120) >>
                        (v70 + 2)) &
                       1) != 0) {
                    if (v79 >= 0x400) {
                      v79 = 0;
                    }
                    if ((*(_BYTE*)(v58 + 417) & 0x20) != 0) {
                      LOBYTE(v80) = 3;
                    }
                    else {
                      v80 = *(unsigned __int8*)(v1 + v79);
                      if (v80 <= 1) {
                        LOBYTE(v80) = 1;
                      }
                    }
                    *(_BYTE*)(v1 + v79) = v80;
                  }
                  v81 = v70 + 3 + v69;
                  if (((*(_DWORD*)(v2[1] + 4LL * (v81 >> 5) + 2120) >>
                        (v70 + 3)) &
                       1) != 0) {
                    if (v81 >= 0x400) {
                      v81 = 0;
                    }
                    if ((*(_BYTE*)(v58 + 417) & 0x20) != 0) {
                      LOBYTE(v74) = 3;
                    }
                    else {
                      v74 = *(unsigned __int8*)(v1 + v81);
                      if (v74 <= 1) {
                        LOBYTE(v74) = 1;
                      }
                    }
                    *(_BYTE*)(v1 + v81) = v74;
                  }
                  v70 += 4;
                } while (v67 != v70);
              }
              v69 += 32;
              v9 = v63++ == v65;
            } while (!v9);
          }
        }
        v58 = *(_QWORD*)(v58 + 432);
      } while (v58 != 0);
      v7 = *(_QWORD*)(GameData_21ca310 + 56);
      v8 = *(unsigned __int8*)(v7 + 556016);
    }
    if (v8 != 0 && v8 != 3) {
    LABEL_187:
      v83 = *(_QWORD*)(v7 + 556072);
      if (v83 != 0) {
        v84 = GameData_212ce98[0];
        do {
          if ((*(_WORD*)(v83 + 416) & 0x1C08) == 0) {
            v85 = *(char*)(v83 + 584);
            v86 = *(char*)(v83 + 585);
            v119 = 370413570;
            IDeploy_748f80((__int64)v2, v83, v85, v86, -1, &v119);
            v87 = *(unsigned __int8*)(*v84 + 28);
            v88 = *(unsigned __int8*)(*v84 + 29);
            v89 = *(unsigned __int8*)(*v84 + 30);
            v90 = *(unsigned __int8*)(*v84 + 31);
            if (v88 <= v90 && v87 <= v89) {
              v92 = v89 + 1;
              v93 = v89 - v87;
              v94 = 32 * v88;
              do {
                v95 = v87;
                if ((((_BYTE)v92 - (_BYTE)v87) & 3) != 0) {
                  v96 = ((_BYTE)v92 - (_BYTE)v87) & 3;
                  v95 = v87;
                  do {
                    v98 = v94 + v95;
                    if (((*(_DWORD*)(v2[1] + 4LL * ((v94 + v95) >> 5) + 2120) >>
                          v95) &
                         1) != 0) {
                      if (v98 >= 0x400) {
                        v98 = 0;
                      }
                      if ((*(_BYTE*)(v83 + 417) & 0x20) != 0) {
                        LOBYTE(v97) = 3;
                      }
                      else {
                        v97 = *(unsigned __int8*)(v1 + v98);
                        if (v97 <= 1) {
                          LOBYTE(v97) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v98) = v97;
                    }
                    ++v95;
                    --v96;
                  } while (v96 != 0);
                }
                if (v93 >= 3) {
                  do {
                    v100 = v94 + v95;
                    if (((*(_DWORD*)(v2[1] + 4LL * ((v94 + v95) >> 5) + 2120) >>
                          v95) &
                         1) != 0) {
                      if (v100 >= 0x400) {
                        v100 = 0;
                      }
                      if ((*(_BYTE*)(v83 + 417) & 0x20) != 0) {
                        LOBYTE(v101) = 3;
                      }
                      else {
                        v101 = *(unsigned __int8*)(v1 + v100);
                        if (v101 <= 1) {
                          LOBYTE(v101) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v100) = v101;
                    }
                    v102 = v95 + 1 + v94;
                    if (((*(_DWORD*)(v2[1] + 4LL * (v102 >> 5) + 2120) >>
                          (v95 + 1)) &
                         1) != 0) {
                      if (v102 >= 0x400) {
                        v102 = 0;
                      }
                      if ((*(_BYTE*)(v83 + 417) & 0x20) != 0) {
                        LOBYTE(v103) = 3;
                      }
                      else {
                        v103 = *(unsigned __int8*)(v1 + v102);
                        if (v103 <= 1) {
                          LOBYTE(v103) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v102) = v103;
                    }
                    v104 = v95 + 2 + v94;
                    if (((*(_DWORD*)(v2[1] + 4LL * (v104 >> 5) + 2120) >>
                          (v95 + 2)) &
                         1) != 0) {
                      if (v104 >= 0x400) {
                        v104 = 0;
                      }
                      if ((*(_BYTE*)(v83 + 417) & 0x20) != 0) {
                        LOBYTE(v105) = 3;
                      }
                      else {
                        v105 = *(unsigned __int8*)(v1 + v104);
                        if (v105 <= 1) {
                          LOBYTE(v105) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v104) = v105;
                    }
                    v106 = v95 + 3 + v94;
                    if (((*(_DWORD*)(v2[1] + 4LL * (v106 >> 5) + 2120) >>
                          (v95 + 3)) &
                         1) != 0) {
                      if (v106 >= 0x400) {
                        v106 = 0;
                      }
                      if ((*(_BYTE*)(v83 + 417) & 0x20) != 0) {
                        LOBYTE(v99) = 3;
                      }
                      else {
                        v99 = *(unsigned __int8*)(v1 + v106);
                        if (v99 <= 1) {
                          LOBYTE(v99) = 1;
                        }
                      }
                      *(_BYTE*)(v1 + v106) = v99;
                    }
                    v95 += 4;
                  } while (v92 != v95);
                }
                v94 += 32;
                v9 = v88++ == v90;
              } while (!v9);
            }
          }
          v83 = *(_QWORD*)(v83 + 432);
        } while (v83 != 0);
      }
    }
    v107 = v2[1347];
    v108 = v2[1346];
    v109 = v2[1343];
    v110 = v2[1344];
    v9 = v110 == v109;
    v111 = v107 - 1 + v108;
    v112 = v111 >> 9;
    v113 = v111 & 0x1FF;
    v114 = ((v110 - v109) << 6) - 1;
    v115 = *(_QWORD*)(v109 + 8 * v112);
    if (v9) {
      v114 = 0;
    }
    v116 = *(_QWORD*)(v115 + 8 * v113);
    v2[1347] = v107 - 1;
    v2[1] = v116;
    if ((unsigned __int64)(v114 - (v107 + v108) + 1) >= 0x400) {
      v117 = *(_QWORD*)(v110 - 8);
      if (v117 != 0) {
        v118 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v118 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v118, v117);
        v110 = v2[1344];
      }
      v2[1344] = v110 - 8;
    }
  }
}

__int64 Image_72b4a0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  char* v8;
  _QWORD* v9;
  char* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;
  int v19;
  int v20;

  memset_alt1(a1 + 8, 0, 0x400u);
  LODWORD(v17_.v17[0]) = 15;
  result = game_UnitPool_GetFirst_alt1((int*)v17_.v17);
  if (result != 0) {
    v3 = *(_QWORD*)(result + 432);
    if (v3 == 0) {
      v3 = *(_QWORD*)(result + 440);
      if (v3 != 0) {
        v4 = *(unsigned __int8*)(v3 + 16);
        if (v4 <= 8) {
          v16 = 24LL * *(unsigned __int8*)(v3 + 16) + 556024;
          do {
            if (v4 <= 2) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v16);
              if (v3 != 0) {
                goto LABEL_8;
              }
            }
            ++v4;
            v16 += 24;
          } while (v4 != 9);
        }
        v3 = 0;
        goto LABEL_8;
      }
    }
    while (1) {
    LABEL_8:
      v5 = v3;
      if ((*(_WORD*)(result + 417) & 0x4004) != 0) {
        goto LABEL_17;
      }
      v6 = *(char*)(result + 585);
      v7 = *(char*)(result + 584);
      v8 = *(char**)(result + 600);
      v9 = v17_.v17;
      v10 = *(char**)(result + 608);
      v17_.v17[0] = GameData_1f94210;
      v17_.v17[1] = a1;
      v17_.v17[2] = result;
      v17_.v18 = v17_.v17;
      if (v8 == v10) {
        goto LABEL_15;
      }
      do {
        v11 = *v8 + v7;
        v19 = v8[1] + v6;
        v20 = v11;
        if (v17_.v18 == nullptr) {
          GameRoutine_60a310_alt2();
        }
        result = (*(__int64 (**)(_QWORD*, int*, int*))(*v17_.v18 + 48LL))(
            v17_.v18, &v20, &v19);
        v8 += 4;
      } while (v8 != v10);
      v9 = v17_.v18;
      if (v17_.v18 == v17_.v17) {
      LABEL_15:
        v12 = 32;
      }
      else {
        if (v17_.v18 == nullptr) {
          goto LABEL_17;
        }
        v12 = 40;
      }
      result = (*(__int64 (**)(_QWORD*))(*v9 + v12))(v9);
    LABEL_17:
      if (v5 == 0) {
        return result;
      }
      v3 = *(_QWORD*)(v5 + 432);
      result = v5;
      if (v3 == 0) {
        v13 = *(_QWORD*)(v5 + 440);
        result = v5;
        if (v13 != 0) {
          v14 = *(unsigned __int8*)(v13 + 16);
          v3 = 0;
          result = v5;
          if (v14 <= 8) {
            v15 = 24LL * (unsigned int)v14 + 556024;
            while (1) {
              if (v14 <= 2) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v15);
                if (v3 != 0) {
                  break;
                }
              }
              ++v14;
              v15 += 24;
              if (v14 == 9) {
                v3 = 0;
                result = v5;
                goto LABEL_8;
              }
            }
            result = v5;
          }
        }
      }
    }
  }
  return result;
}

_QWORD* Image_72b6c0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* i;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* result;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 (**v38)();
  __int64* v39;
  __int64 (**v40)();
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 (**v51)();
  __int64 (**v52)();
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  _QWORD v84[4];
  _QWORD* v85;
  __int64 v86;
  __int64 v87;
  _QWORD v88[2];
  __int64* v89;
  _QWORD* v90;
  _QWORD* v91;
  char v92;

  LODWORD(v88[0]) = 15;
  v2 = game_UnitPool_GetFirst(v88);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 432);
    v4 = v2;
    if (v3 == 0) {
      v3 = *(_QWORD*)(v2 + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 <= 8) {
          v82 = 24LL * *(unsigned __int8*)(v3 + 16) + 556024;
          while (1) {
            if (v5 <= 2) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v82);
              if (v3 != 0) {
                break;
              }
            }
            ++v5;
            v82 += 24;
            if (v5 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v3 = 0;
        }
      }
    }
    v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
    LABEL_8:
      v7 = v3;
      v8 = *(_QWORD*)(v4 + 1680);
      if (*(_QWORD*)(v4 + 1688) == v8) {
        v9 = 0;
      }
      else {
        v8 = ((__int64 (*)(void))GameRoutine_7a83a0)();
        v9 = v8;
      }
      v10 = a1[130];
      v11 = a1[131];
      if (v10 >= v11) {
        v13 = a1[129];
        v14 = v10 - v13;
        v15 = (__int64)(v10 - v13) >> 4;
        v16 = v15 + 1;
        if ((unsigned __int64)(v15 + 1) >> 60 != 0) {
          GameRoutine_72dec0();
        }
        v17 = v11 - v13;
        if (v17 >> 3 > v16) {
          v16 = v17 >> 3;
        }
        v18 = (unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF0LL
                  ? 0xFFFFFFFFFFFFFFFLL
                  : v16;
        if (v18 != 0) {
          if (v18 >> 60 != 0) {
            GameRoutine_60a210(v8);
          }
          v19 = fw_memory_HeapManager_Allocate(*v6, 16 * v18, 16, 0);
        }
        else {
          v19 = 0;
        }
        v20 = v19 + v14;
        v21 = v19 + 16 * v18;
        *(_QWORD*)v20 = v4;
        v22 = v19 + v14 - 16 * v15;
        *(_DWORD*)(v20 + 8) = v9;
        v12 = v19 + v14 + 16;
        memcpy(v22, v13, v14);
        a1[129] = v22;
        a1[130] = v12;
        a1[131] = v21;
        if (v13 != 0) {
          v23 = 128;
          if (*(_QWORD*)(*v6 + 200LL) == 0) {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v23, v13);
        }
      }
      else {
        *(_QWORD*)v10 = v4;
        *(_DWORD*)(v10 + 8) = v9;
        v12 = v10 + 16;
      }
      a1[130] = v12;
      if (v7 == 0) {
        break;
      }
      v3 = *(_QWORD*)(v7 + 432);
      v4 = v7;
      if (v3 == 0) {
        v24 = *(_QWORD*)(v7 + 440);
        v4 = v7;
        if (v24 != 0) {
          v25 = *(unsigned __int8*)(v24 + 16);
          v3 = 0;
          v4 = v7;
          if (v25 <= 8) {
            v26 = 24LL * (unsigned int)v25 + 556024;
            while (1) {
              if (v25 <= 2) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v26);
                if (v3 != 0) {
                  break;
                }
              }
              ++v25;
              v26 += 24;
              if (v25 == 9) {
                v3 = 0;
                v4 = v7;
                goto LABEL_8;
              }
            }
            v4 = v7;
          }
        }
      }
    }
  }
  else {
    v12 = a1[130];
  }
  for (i = (__int64*)a1[129]; i != (__int64*)v12; i += 2) {
    v28 = *i;
    v29 = *(_QWORD*)(*i + 1680);
    if ((int)((unsigned __int64)(*(_QWORD*)(*i + 1688) - v29) >> 2) >= 1) {
      v30 = *(_QWORD*)(v28 + 1648);
      *(_DWORD*)(v28 + 1672) = 0;
      *(_QWORD*)(v28 + 1688) = v29;
      *(_QWORD*)(v28 + 1728) = 0;
      *(_QWORD*)(v28 + 1736) = 0;
      *(_QWORD*)(v28 + 1656) = v30;
    }
  }
  result = v84;
  v84[0] = GameData_1f93f80;
  v85 = v84;
  if (*GameData_212ce90[0] == 0) {
    goto LABEL_88;
  }
  v87 = *(_QWORD*)(*GameData_212ce98[0] + 160) + 8LL;
  LODWORD(v88[0]) = 15;
  v32 = game_UnitPool_GetFirst(v88);
  v86 = v32;
  if (v32 != 0) {
    v36 = *(_QWORD*)(v32 + 432);
    if (v36 == 0) {
      v36 = *(_QWORD*)(v32 + 440);
      if (v36 != 0) {
        v37 = *(unsigned __int8*)(v36 + 16);
        if (v37 <= 8) {
          v83 = 24LL * *(unsigned __int8*)(v36 + 16) + 556024;
          while (1) {
            if (v37 <= 2) {
              v36 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v83);
              if (v36 != 0) {
                break;
              }
            }
            ++v37;
            v83 += 24;
            if (v37 == 9) {
              goto LABEL_47;
            }
          }
        }
        else {
        LABEL_47:
          v36 = 0;
        }
      }
    }
    v38 = GameData_1f94310;
    v39 = GameData_212c880[0];
    v40 = GameData_1f93d00;
    while (1) {
    LABEL_50:
      v41 = v36;
      v42 = (unsigned int)*(char*)(v32 + 584);
      v43 = (unsigned int)*(char*)(v32 + 585);
      v92 = 0;
      v89 = (__int64*)&v92;
      v91 = v88;
      v88[0] = v38;
      v88[1] = v87;
      Unit_6c8a80(v32, v42, v43, v88);
      if (v91 == v88) {
        v44 = 32;
      }
      else {
        if (v91 == nullptr) {
          goto LABEL_55;
        }
        v44 = 40;
      }
      (*(void (**)(_QWORD*))(*v91 + v44))(v91);
    LABEL_55:
      if (v92 != 1) {
        goto LABEL_76;
      }
      v45 = v86;
      v46 = v88;
      v88[0] = v40;
      v88[1] = &v86;
      v89 = &v87;
      v90 = v84;
      v91 = v88;
      if ((*(_BYTE*)(v86 + 1829) & 0x40) == 0) {
        v47 = 32;
      LABEL_69:
        (*(void (**)(_QWORD*))(*v46 + v47))(v46);
        goto LABEL_70;
      }
      v48 = *(_QWORD*)(v86 + 1784);
      v49 = *(_QWORD*)(v86 + 1776);
      if ((int)((unsigned __int64)(v48 - v49) >> 2) < 1) {
        v46 = v88;
        v47 = 32;
        goto LABEL_69;
      }
      v50 = *v39;
      v51 = v40;
      v52 = v38;
      v53 = 0;
      v54 = 0;
      do {
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v50 + 64) +
                                 8LL * (*(_DWORD*)(v49 + v53) & 0xFFF)) +
                      115LL) == 14) {
          v55 = v91;
          if (v91 == nullptr) {
          LABEL_137:
            GameRoutine_60a310(v55, v33, v34, v35);
          }
          (*(void (**)(_QWORD*, __int64))(*v91 + 48LL))(v91, v49 + v53);
          v50 = *v39;
          v48 = *(_QWORD*)(v45 + 1784);
          v49 = *(_QWORD*)(v45 + 1776);
        }
        ++v54;
        v53 += 4;
      } while (v54 < (int)((unsigned __int64)(v48 - v49) >> 2));
      v46 = v91;
      if (v91 == v88) {
        v47 = 32;
        v38 = v52;
        v40 = v51;
        goto LABEL_69;
      }
      v38 = v52;
      v40 = v51;
      if (v91 != nullptr) {
        v47 = 40;
        goto LABEL_69;
      }
    LABEL_70:
      v56 = v88;
      v89 = v84;
      v88[0] = GameData_1f93d80;
      v88[1] = &v86;
      v91 = v88;
      if (v86 == 0 ||
          (GameRoutine_756f00(v86, (unsigned int)*(char*)(v86 + 584),
                              (unsigned int)*(char*)(v86 + 585), v88),
           v56 = v91, v91 == v88)) {
        v57 = 32;
      }
      else {
        if (v91 == nullptr) {
          goto LABEL_76;
        }
        v57 = 40;
      }
      (*(void (**)(_QWORD*))(*v56 + v57))(v56);
    LABEL_76:
      v86 = v41;
      if (v41 == 0) {
        break;
      }
      v36 = *(_QWORD*)(v41 + 432);
      v32 = v41;
      if (v36 == 0) {
        v58 = *(_QWORD*)(v41 + 440);
        v32 = v41;
        if (v58 != 0) {
          v59 = *(unsigned __int8*)(v58 + 16);
          v36 = 0;
          v32 = v41;
          if (v59 <= 8) {
            v60 = 24LL * (unsigned int)v59 + 556024;
            while (1) {
              if (v59 <= 2) {
                v36 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v60);
                if (v36 != 0) {
                  break;
                }
              }
              ++v59;
              v60 += 24;
              if (v59 == 9) {
                v36 = 0;
                v32 = v41;
                goto LABEL_50;
              }
            }
            v32 = v41;
          }
        }
      }
    }
  }
  result = v85;
  if (v85 == v84) {
  LABEL_88:
    v61 = 32;
  }
  else {
    if (v85 == nullptr) {
      goto LABEL_90;
    }
    v61 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v61))(result);
LABEL_90:
  v62 = (_QWORD*)a1[129];
  v63 = (_QWORD*)a1[130];
  if (v62 == v63) {
    goto LABEL_99;
  }
  do {
    v65 = *v62;
    v66 = (__int64*)v62[1];
    v91 = v88;
    v67 = (unsigned int)*(char*)(v65 + 584);
    v68 = (unsigned int)*(char*)(v65 + 585);
    v88[0] = GameData_1f94010;
    v88[1] = v65;
    v89 = v66;
    Unit_6c8a80(v65, v67, v68, v88);
    result = v91;
    if (v91 == v88) {
      v64 = 32;
    LABEL_93:
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*v91 + v64))(v91);
      goto LABEL_94;
    }
    if (v91 != nullptr) {
      v64 = 40;
      goto LABEL_93;
    }
  LABEL_94:
    v62 += 2;
  } while (v62 != v63);
  v62 = (_QWORD*)a1[129];
  v63 = (_QWORD*)a1[130];
LABEL_99:
  if (v62 == v63) {
    goto LABEL_116;
  }
  v69 = GameData_212c880[0];
  while (2) {
    v71 = *v62;
    v70 = (__int64*)v62[1];
    v91 = v88;
    v89 = v70;
    LOBYTE(v70) = *(_BYTE*)(v71 + 1733);
    v88[0] = GameData_1f94090;
    v88[1] = v71;
    if (((unsigned __int8)v70 & 0x40) == 0 ||
        (v72 = *(_QWORD*)(v71 + 1688), v73 = *(_QWORD*)(v71 + 1680),
         (int)((unsigned __int64)(v72 - v73) >> 2) < 1)) {
      result = v88;
    LABEL_109:
      v77 = 32;
      goto LABEL_110;
    }
    v74 = *v69;
    v75 = 0;
    v76 = 0;
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v74 + 64) +
                               8LL * (*(_DWORD*)(v73 + v75) & 0xFFF)) +
                    115LL) == 14) {
        v55 = v91;
        if (v91 == nullptr) {
          goto LABEL_137;
        }
        (*(void (**)(_QWORD*, __int64))(*v91 + 48LL))(v91, v73 + v75);
        v74 = *v69;
        v72 = *(_QWORD*)(v71 + 1688);
        v73 = *(_QWORD*)(v71 + 1680);
      }
      ++v76;
      v75 += 4;
    } while (v76 < (int)((unsigned __int64)(v72 - v73) >> 2));
    result = v91;
    if (v91 == v88) {
      goto LABEL_109;
    }
    if (v91 != nullptr) {
      v77 = 40;
    LABEL_110:
      result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v77))(result);
    }
    v62 += 2;
    if (v62 != v63) {
      continue;
    }
    break;
  }
  v62 = (_QWORD*)a1[129];
  v63 = (_QWORD*)a1[130];
LABEL_116:
  if (v62 != v63) {
    do {
      v78 = *(_QWORD*)(*v62 + 1680LL);
      if (*(_QWORD*)(*v62 + 1688LL) == v78) {
        result = nullptr;
      }
      else {
        result = (_QWORD*)GameRoutine_7a83a0(v78);
      }
      if ((_DWORD)result != *((_DWORD*)v62 + 2)) {
        v79 = *v62;
        v80 = *(_DWORD*)(*v62 + 416LL);
        if ((v80 & 0x10000000) == 0) {
          v81 = *v62;
          *(_DWORD*)(v79 + 416) = v80 | 0x10000000;
          GameRoutine_6c51e0(v81);
          GameRoutine_6c6da0(v79);
          result = (_QWORD*)GameRoutine_6c6ec0(v79);
          *(_DWORD*)(v79 + 416) &= ~0x10000000u;
        }
      }
      v62 += 2;
    } while (v62 != v63);
    v62 = (_QWORD*)a1[129];
  }
  a1[130] = v62;
  return result;
}

_QWORD* Image_72bf60(_QWORD* result, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  int v5;
  char* v6;
  char* v7;
  int v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  int v12;
  int v13;

  if (a2 == 0) {
    return result;
  }
  v4 = a4;
  v5 = a3;
  if ((a3 & 0x80000000) != 0) {
    v5 = *(char*)(a2 + 584);
    if ((a4 & 0x80000000) == 0) {
      goto LABEL_4;
    }
  LABEL_12:
    v4 = *(char*)(a2 + 585);
    goto LABEL_4;
  }
  if ((a4 & 0x80000000) != 0) {
    goto LABEL_12;
  }
LABEL_4:
  if ((*(_WORD*)(a2 + 417) & 0x4004) != 0) {
    return result;
  }
  v6 = *(char**)(a2 + 600);
  v7 = *(char**)(a2 + 608);
  v10[2] = a2;
  v10[0] = GameData_1f94210;
  v10[1] = result;
  result = v10;
  v11 = v10;
  if (v6 == v7) {
    goto LABEL_13;
  }
  do {
    v8 = v5 + *v6;
    v12 = v4 + v6[1];
    v13 = v8;
    if (v11 == nullptr) {
      GameRoutine_60a310(0, a2, a3, a4);
    }
    (*(void (**)(_QWORD*, int*, int*))(*v11 + 48LL))(v11, &v13, &v12);
    v6 += 4;
  } while (v6 != v7);
  result = v11;
  if (v11 == v10) {
  LABEL_13:
    v9 = 32;
  }
  else {
    if (v11 == nullptr) {
      return result;
    }
    v9 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v9))(
      result, a2, a3);
}

_QWORD* Image_72c060(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4,
                     __int64 a5)
{
  unsigned int v6;
  unsigned int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  _QWORD* result;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 (**v18)();
  __int64* v19;
  __int64* v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 (***v26)();
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 (**v30)();
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 (**v34)();
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 i;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  unsigned int v49;
  struct {
    _QWORD v50[4];
    _QWORD* v51;
  } v50_;
  __int64 v52;
  __int64 v53;
  _BYTE v54[4];
  unsigned int v55;
  unsigned int v56;
  __int64 v57;
  struct {
    _QWORD v58[2];
    char* v59;
    char gap136_[8];
    _QWORD* v60;
  } v58_;
  char v61;

  v57 = a2;
  v55 = a4;
  v56 = a3;
  v6 = a4;
  v7 = a3;
  v50_.v50[0] = GameData_1f94190;
  v50_.v50[1] = a5;
  v50_.v51 = v50_.v50;
  v8 = GameData_212ce98[0];
  if (*GameData_212ce90[0] == 0) {
    result = v50_.v50;
  LABEL_54:
    v39 = 32;
    goto LABEL_55;
  }
  v9 = a2;
  v54[0] = *(_BYTE*)(*GameData_212ce90[0] + 24);
  if (a2 != 0) {
    v10 = *(_QWORD*)(a2 + 440);
    if (v10 != 0) {
      v11 = *(_BYTE*)(v10 + 16);
    }
    else {
      v11 = 9;
    }
    v54[0] = v11;
  }
  v53 = *(_QWORD*)(*GameData_212ce98[0] + 160) + 8LL;
  LODWORD(v58_.v58[0]) = 15;
  v13 = game_UnitPool_GetFirst_alt1((int*)v58_.v58);
  v52 = v13;
  v14 = v6;
  v15 = v7;
  if (v13 != 0) {
    v16 = *(_QWORD*)(v13 + 432);
    if (v16 == 0) {
      v16 = *(_QWORD*)(v13 + 440);
      if (v16 != 0) {
        v17 = *(unsigned __int8*)(v16 + 16);
        if (v17 <= 8) {
          v46 = 24LL * *(unsigned __int8*)(v16 + 16) + 556024;
          while (1) {
            if (v17 <= 2) {
              v16 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v46);
              if (v16 != 0) {
                break;
              }
            }
            ++v17;
            v46 += 24;
            if (v17 == 9) {
              goto LABEL_12;
            }
          }
        }
        else {
        LABEL_12:
          v16 = 0;
        }
      }
    }
    v47 = v9;
    v48 = v7;
    v49 = v6;
    v18 = GameData_1f94310;
    v19 = (__int64*)fw_memory_g_heap_manager_ptr;
    v20 = GameData_212c880[0];
    while (1) {
    LABEL_15:
      v21 = v16;
      v22 = *(char*)(v13 + 584);
      v23 = *(char*)(v13 + 585);
      v61 = 0;
      v58_.v59 = &v61;
      v58_.v60 = v58_.v58;
      v58_.v58[0] = v18;
      v58_.v58[1] = v53;
      Unit_6c8a80_alt1(v13, v22, v23, (__int64)v58_.v58);
      if (v58_.v60 == v58_.v58) {
        v24 = 32;
      }
      else {
        if (v58_.v60 == nullptr) {
          goto LABEL_20;
        }
        v24 = 40;
      }
      (*(void (**)(__int64))(*v58_.v60 + v24))((__int64)v58_.v60);
    LABEL_20:
      if (v61 == 1) {
        v25 = v52;
        v26 = (__int64 (***)(void))fw_memory_HeapManager_Allocate_alt1(*v19, 56,
                                                                       16, 0);
        v26[2] = (__int64 (**)(void))v54;
        *v26 = GameData_1f93e00;
        v26[1] = (__int64 (**)(void))&v52;
        v26[3] = (__int64 (**)(void))&v56;
        v26[4] = (__int64 (**)(void))&v55;
        v26[5] = (__int64 (**)(void))&v53;
        v26[6] = (__int64 (**)(void))v50_.v50;
        if ((*(_BYTE*)(v25 + 1829) & 0x40) != 0 &&
            (v27 = *(_QWORD*)(v25 + 1784), v28 = *(_QWORD*)(v25 + 1776),
             (int)((unsigned __int64)(v27 - v28) >> 2) >= 1)) {
          v29 = *v20;
          v30 = v18;
          v31 = v19;
          v32 = 0;
          v33 = 0;
          do {
            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v29 + 64) +
                                     8LL * (*(_DWORD*)(v28 + v32) & 0xFFF)) +
                          115LL) == 14) {
              ((void (*)(__int64 (***)(void), __int64))(*v26)[6])(v26,
                                                                  v28 + v32);
              v29 = *v20;
              v27 = *(_QWORD*)(v25 + 1784);
              v28 = *(_QWORD*)(v25 + 1776);
            }
            ++v33;
            v32 += 4;
          } while (v33 < (int)((unsigned __int64)(v27 - v28) >> 2));
          v34 = *v26;
          v19 = v31;
          v18 = v30;
        }
        else {
          v34 = GameData_1f93e00;
        }
        ((void (*)(__int64 (***)(void)))v34[5])(v26);
      }
      v52 = v21;
      if (v21 == 0) {
        v14 = v55;
        v15 = v56;
        v7 = v48;
        v6 = v49;
        v8 = GameData_212ce98[0];
        v9 = v47;
        break;
      }
      v16 = *(_QWORD*)(v21 + 432);
      v13 = v21;
      if (v16 == 0) {
        v35 = *(_QWORD*)(v21 + 440);
        v13 = v21;
        if (v35 != 0) {
          v36 = *(unsigned __int8*)(v35 + 16);
          v16 = 0;
          v13 = v21;
          if (v36 <= 8) {
            v37 = 24LL * (unsigned int)v36 + 556024;
            while (1) {
              if (v36 <= 2) {
                v16 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v37);
                if (v16 != 0) {
                  break;
                }
              }
              ++v36;
              v37 += 24;
              if (v36 == 9) {
                v16 = 0;
                v13 = v21;
                goto LABEL_15;
              }
            }
            v13 = v21;
          }
        }
      }
    }
  }
  if (*(unsigned __int8*)(*v8 + 18) >
          (unsigned int)(unsigned __int8)(v15 - *(_BYTE*)(*v8 + 16)) &&
      *(unsigned __int8*)(*v8 + 19) >
          (unsigned int)(unsigned __int8)(v14 - *(_BYTE*)(*v8 + 17)) &&
      ((*(_DWORD*)(v53 + 4LL * ((int)(v15 + 32 * v14) >> 5)) >> v15) & 1) !=
          0) {
    if (v9 != 0) {
      v58_.v58[0] = GameData_1f93e80;
      v58_.v58[1] = &v57;
      v58_.v60 = v58_.v58;
      v58_.v59 = (char*)v50_.v50;
      game_map_MapUtil_EachTerrain(v9, v15, v14, (__int64)v58_.v58);
    }
    else {
      v58_.v58[0] = GameData_1f93f00;
      v58_.v58[1] = v54;
      v58_.v60 = v58_.v58;
      v58_.v59 = (char*)v50_.v50;
      MapUtil_756d50_alt1(v15, v14, (__int64)v58_.v58);
    }
    if (v58_.v60 == v58_.v58) {
      v38 = 32;
    }
    else {
      if (v58_.v60 == nullptr) {
        goto LABEL_51;
      }
      v38 = 40;
    }
    (*(void (**)(__int64))(*v58_.v60 + v38))((__int64)v58_.v60);
  }
LABEL_51:
  result = v50_.v51;
  if (v50_.v51 == v50_.v50) {
    goto LABEL_54;
  }
  if (v50_.v51 != nullptr) {
    v39 = 40;
  LABEL_55:
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v39))((__int64)result);
  }
  v40 = v7 + 32 * v6;
  if (v40 >= 0x400) {
    v40 = 0;
  }
  v41 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(*v8 + 72) + 2LL * v40 +
                                              8));
  if (v41 != 0) {
    v42 = *(_QWORD*)(v41 + 24);
    v43 = *(_QWORD*)(v42 + 128);
    for (i = *(_QWORD*)(v42 + 136); v43 != i; v43 += 4) {
      v45 = *(_QWORD*)(a5 + 32);
      if (v45 == 0) {
        GameRoutine_60a310_alt2();
      }
      result = (_QWORD*)(*(__int64 (**)(__int64, __int64))(*(_QWORD*)v45 +
                                                           48LL))(v45, v43);
    }
  }
  return result;
}

__int64 Image_Unknown6(__int64 result, __int64 a2)
{
  __int64 v2;
  char v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  _QWORD* v14;
  int v15;
  unsigned int v16;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  bool v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  unsigned int v47;

  v2 = *(int*)(a2 + 20);
  v3 = *(_BYTE*)(result + 18);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3;
  v4 = *(int*)(a2 + 20);
  v5 = *(_BYTE*)(result + 19);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v5;
  v6 = *(int*)(a2 + 20);
  v7 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(v7 + v6) = 0;
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = 0;
  v9 = *(unsigned __int8*)(GameData_21ca300 + 20);
  v10 = *(unsigned __int8*)(GameData_21ca300 + 21);
  v11 = *(unsigned __int8*)(GameData_21ca300 + 22);
  if (v10 <= *(unsigned __int8*)(GameData_21ca300 + 23) && v9 <= v11) {
    v46 = *(unsigned __int8*)(GameData_21ca300 + 23);
    v44 = v6 + 1;
    v14 = (_QWORD*)result;
    v15 = 0;
    v16 = v11 + 1;
    v17 = 32 * v10;
    v45 = v6;
    v18 = GameData_212c930;
    v47 = *(unsigned __int8*)(GameData_21ca300 + 20);
    while (1) {
      if (v17 + v9 >= 0x400) {
        v19 = 0;
      }
      else {
        v19 = v17 + v9;
      }
      if (*(unsigned __int16*)(v14[7] + 2LL * (unsigned int)v19 + 8) !=
          *(unsigned __int16*)(v14[4] + 2LL * (unsigned int)v19 + 8)) {
        v20 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v20 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = 0;
        v21 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v21 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v9;
        v22 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v22 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = v10;
        result = GameRoutine_65f3d0(
            a2, *(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                           8LL * *(unsigned __int16*)(v14[4] + 2 * v19 + 8)));
        ++v15;
      }
      if (*(unsigned __int16*)(v14[8] + 2 * v19 + 8) !=
          *(unsigned __int16*)(v14[5] + 2 * v19 + 8)) {
        v23 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v23 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = 1;
        v24 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v24 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = v9;
        v25 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v25 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = v10;
        result = GameRoutine_65f3d0(
            a2, *(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                           8LL * *(unsigned __int16*)(v14[5] + 2 * v19 + 8)));
        ++v15;
      }
      if (v16 == ++v9) {
        v9 = v47;
        v17 += 32;
        v26 = v10++ == v46;
        if (v26) {
          break;
        }
      }
    }
    if (v15 > 0) {
      v27 = *(_QWORD*)(a2 + 32);
      v28 = *(_QWORD*)(a2 + 40);
      v29 = ((v28 - v27) << 7) - 1;
      if (v28 == v27) {
        v29 = 0;
      }
      v30 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
      if (v29 == v30) {
        result = GameRoutine_660f80(a2 + 24);
        v27 = *(_QWORD*)(a2 + 32);
        v30 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
      }
      *(_DWORD*)(*(_QWORD*)(v27 + 8 * (v30 >> 10)) + 4 * (v30 & 0x3FF)) =
          *(_DWORD*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v44;
      ++*(_QWORD*)(a2 + 64);
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v45) = v15;
      v31 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v31 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = BYTE1(v15);
      v33 = *(_QWORD*)(a2 + 56);
      v32 = *(_QWORD*)(a2 + 64);
      v35 = *(_QWORD*)(a2 + 32);
      v34 = *(_QWORD*)(a2 + 40);
      v26 = v34 == v35;
      v36 = v32 - 1 + v33;
      v37 = v36 >> 10;
      v38 = v36 & 0x3FF;
      v39 = ((v34 - v35) << 7) - 1;
      v40 = *(_QWORD*)(v35 + 8 * v37);
      if (v26) {
        v39 = 0;
      }
      v41 = *(_DWORD*)(v40 + 4 * v38);
      *(_QWORD*)(a2 + 64) = v32 - 1;
      *(_DWORD*)(a2 + 20) = v41;
      if ((unsigned __int64)(v39 - (v32 + v33) + 1) >= 0x800) {
        v42 = *(_QWORD*)(v34 - 8);
        if (v42 != 0) {
          v43 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v43 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v42);
          v34 = *(_QWORD*)(a2 + 40);
        }
        *(_QWORD*)(a2 + 40) = v34 - 8;
      }
    }
  }
  return result;
}

__int64 Image_Unknown7(unsigned __int8* a1, __int64 a2, int a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  bool v13;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  _QWORD* v21;

  result = (*(__int64 (**)(unsigned __int8*))(*(_QWORD*)a1 + 40LL))(a1);
  if (a3 == (_DWORD)result) {
    v7 = *(int*)(a2 + 20);
    v8 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v7 + 1;
    v9 = *(unsigned __int8*)(v8 + v7);
    *(_DWORD*)(a2 + 20) = v7 + 2;
    v10 = *(unsigned __int8*)(v8 + v7 + 1);
    *(_DWORD*)(a2 + 20) = v7 + 3;
    v11 = *(unsigned __int8*)(v8 + v7 + 2);
    *(_DWORD*)(a2 + 20) = v7 + 4;
    v12 = v11 | (*(unsigned __int8*)(v8 + v7 + 3) << 8);
    v13 = a1[18] == v9 && a1[19] == v10;
    if (v13 && v12 != 0) {
      do {
        v15 = *(int*)(a2 + 20);
        v16 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v15 + 1;
        v17 = *(unsigned __int8*)(v16 + v15);
        *(_DWORD*)(a2 + 20) = v15 + 2;
        v18 = *(unsigned __int8*)(v16 + v15 + 1);
        *(_DWORD*)(a2 + 20) = v15 + 3;
        v19 = *(unsigned __int8*)(v16 + v15 + 2);
        result = GameRoutine_72ca20(a2);
        if (result != 0) {
          v20 = v18 + 32 * v19;
          v21 = a1 + 32;
          if (v20 >= 0x400) {
            v20 = 0;
          }
          if (v17 != 0) {
            v21 = a1 + 40;
          }
          *(_WORD*)(*v21 + 2LL * v20 + 8) = *(_WORD*)(result + 16);
        }
        --v12;
      } while (v12 != 0);
    }
  }
  return result;
}

_QWORD* Image_72cbc0(_QWORD* result, __int64 a2, __int64 a3, __int64 a4)
{
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  char* v13;
  char* v14;
  int v15;
  __int64 v16;
  _QWORD v17[4];
  _QWORD* v18;
  int v19;
  int v20;

  *result = game_map_Image_RemoveScope_vtable;
  result[1] = a2;
  if (a2 != 0) {
    v4 = *(char*)(a2 + 584);
    v5 = *(char*)(a2 + 585);
    LODWORD(v6) = v4 + 32 * v5;
    if ((unsigned int)v6 >= 0x400) {
      v6 = 0;
    }
    else {
      v6 = (unsigned int)v6;
    }
    v7 = *(_QWORD*)(GameData_21ca300 + 96);
    v8 = v7 + v6;
    v9 = *(unsigned __int8*)(v8 + 8);
    if (*(_BYTE*)(v8 + 8) == 0 || ((v10 = *(_QWORD*)(GameData_21ca310 + 56) +
                                          2224LL * *(unsigned __int8*)(v8 + 8),
                                    v11 = v10 - 2224, v9 <= 0xFA)
                                       ? (v12 = v10 == 2224)
                                       : (v12 = true),
                                   v12 || *(_QWORD*)(v10 - 1832) == 0)) {
      v11 = 0;
    }
    if (v11 == a2) {
      v13 = *(char**)(a2 + 600);
      v14 = *(char**)(a2 + 608);
      result = v17;
      v17[2] = a2;
      v17[0] = GameData_1f94290;
      v17[1] = v7;
      v18 = v17;
      if (v13 == v14) {
        goto LABEL_19;
      }
      do {
        v15 = *v13 + v4;
        v19 = v13[1] + v5;
        v20 = v15;
        if (v18 == nullptr) {
          GameRoutine_60a310(0, a2, a3, a4);
        }
        (*(void (**)(_QWORD*, int*, int*))(*v18 + 48LL))(v18, &v20, &v19);
        v13 += 4;
      } while (v13 != v14);
      result = v18;
      if (v18 == v17) {
      LABEL_19:
        v16 = 32;
      }
      else {
        if (v18 == nullptr) {
          return result;
        }
        v16 = 40;
      }
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(
          *result + v16))(result, a2, a3);
    }
  }
  return result;
}

__int64 game_map_Image_UnitMap_UpdateSupportSkill_lambda0_Invoke(__int64 a1,
                                                                 __int64* a2,
                                                                 int* a3)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;

  v3 = *a2;
  v25 = *a3;
  result = UnitSkillList_84cc00(v3 + 1648, &v25, 1);
  if ((result & 1) != 0) {
    v5 = *(_QWORD*)(v3 + 1688);
    v6 = *(_QWORD*)(v3 + 1680);
    *(_QWORD*)(v3 + 1736) = 0;
    v7 = v5 - v6;
    *(_QWORD*)(v3 + 1728) = 0;
    if ((int)((unsigned __int64)(v5 - v6) >> 2) >= 1) {
      v8 = (int)(v7 >> 2);
      if (v8 <= 1) {
        v9 = 1;
      }
      else {
        v9 = (int)(v7 >> 2);
      }
      v10 = *GameData_212c880[0];
      if (v8 >= 2) {
        v16 = (int*)(v6 + 4);
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        do {
          v15 += 2;
          v17 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + 8LL * (*(v16 - 1) & 0xFFF));
          v18 = v14 | (1 << *(_BYTE*)(v17 + 104));
          *(_WORD*)(v3 + 1728) = v18;
          v19 = (1LL << *(_BYTE*)(v17 + 250)) | v13;
          *(_QWORD*)(v3 + 1736) = v19;
          v20 = (1 << *(_BYTE*)(v17 + 115)) | v12;
          *(_DWORD*)(v3 + 1732) = v20;
          v21 = *(unsigned __int16*)(*(_QWORD*)(v17 + 24) + 1064LL) | v11;
          *(_WORD*)(v3 + 1730) = v21;
          v22 = *v16;
          v16 += 2;
          v23 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + 8LL * (v22 & 0xFFF));
          v14 = v18 | (1 << *(_BYTE*)(v23 + 104));
          *(_WORD*)(v3 + 1728) = v14;
          v13 = (1LL << *(_BYTE*)(v23 + 250)) | v19;
          *(_QWORD*)(v3 + 1736) = v13;
          v12 = (1 << *(_BYTE*)(v23 + 115)) | v20;
          *(_DWORD*)(v3 + 1732) = v12;
          result = *(unsigned __int16*)(*(_QWORD*)(v23 + 24) + 1064LL);
          v11 = result | v21;
          *(_WORD*)(v3 + 1730) = v11;
        } while ((v9 & 0x7FFFFFFFFFFFFFFELL) != v15);
      }
      else {
        LOWORD(v11) = 0;
        v12 = 0;
        v13 = 0;
        LOWORD(v14) = 0;
        v15 = 0;
      }
      if ((v9 & 1) != 0) {
        v24 = *(_QWORD*)(*(_QWORD*)(v10 + 64) +
                         8LL * (*(_DWORD*)(v6 + 4 * v15) & 0xFFF));
        *(_WORD*)(v3 + 1728) = v14 | (1 << *(_BYTE*)(v24 + 104));
        *(_QWORD*)(v3 + 1736) = (1LL << *(_BYTE*)(v24 + 250)) | v13;
        *(_DWORD*)(v3 + 1732) = (1 << *(_BYTE*)(v24 + 115)) | v12;
        *(_WORD*)(v3 + 1730) = *(_WORD*)(*(_QWORD*)(v24 + 24) + 1064LL) | v11;
      }
    }
  }
  return result;
}

__int64 game_map_Image_UnitMap_UpdateSupportSkill_lambda1_Invoke(__int64 result,
                                                                 _DWORD* a2,
                                                                 _DWORD* a3)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  _DWORD* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  int* v41;
  int v42;
  __int64 v43;

  v3 = *a2 + 32 * *a3;
  if (v3 >= 0x400) {
    v3 = 0;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                  8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                        72) +
                                             2LL * v3 + 8));
  if (v4 != 0) {
    v5 = *(_QWORD*)(v4 + 24);
    v6 = *(_QWORD*)(v5 + 128);
    v7 = *(_QWORD*)(v5 + 136);
    if (v6 != v7) {
      v8 = result;
      v9 = GameData_212c880[0];
      while (1) {
        v10 = *(_QWORD*)(v8 + 8);
        result = UnitSkillList_84cc00(v10 + 1648, v6, 1);
        if ((result & 1) != 0) {
          v11 = *(_QWORD*)(v10 + 1688);
          v12 = *(_QWORD*)(v10 + 1680);
          *(_QWORD*)(v10 + 1736) = 0;
          v13 = v11 - v12;
          *(_QWORD*)(v10 + 1728) = 0;
          if ((int)((unsigned __int64)(v11 - v12) >> 2) < 1) {
            goto LABEL_6;
          }
          v14 = *v9;
          v15 = (int)(v13 >> 2);
          v16 = v15 <= 1 ? 1LL : (int)(v13 >> 2);
          if (v15 >= 4) {
            break;
          }
          v17 = 0;
          v18 = 0;
          v19 = 0;
          v20 = 0;
          v21 = 0;
          v22 = v16 & 3;
          if (v22 != 0) {
            goto LABEL_18;
          }
        }
      LABEL_6:
        v6 += 4;
        if (v6 == v7) {
          return result;
        }
      }
      v23 = (_DWORD*)(v12 + 8);
      v24 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      v20 = 0;
      do {
        v24 -= 4;
        v25 = *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8LL * (*(v23 - 2) & 0xFFF));
        v26 = v20 | (1 << *(_BYTE*)(v25 + 104));
        *(_WORD*)(v10 + 1728) = v26;
        v27 = (1LL << *(_BYTE*)(v25 + 250)) | v19;
        *(_QWORD*)(v10 + 1736) = v27;
        v28 = (1 << *(_BYTE*)(v25 + 115)) | v18;
        *(_DWORD*)(v10 + 1732) = v28;
        v29 = *(unsigned __int16*)(*(_QWORD*)(v25 + 24) + 1064LL) | v17;
        *(_WORD*)(v10 + 1730) = v29;
        v30 = *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8LL * (*(v23 - 1) & 0xFFF));
        v31 = v26 | (1 << *(_BYTE*)(v30 + 104));
        *(_WORD*)(v10 + 1728) = v31;
        v32 = (1LL << *(_BYTE*)(v30 + 250)) | v27;
        *(_QWORD*)(v10 + 1736) = v32;
        v33 = (1 << *(_BYTE*)(v30 + 115)) | v28;
        *(_DWORD*)(v10 + 1732) = v33;
        v34 = *(unsigned __int16*)(*(_QWORD*)(v30 + 24) + 1064LL) | v29;
        *(_WORD*)(v10 + 1730) = v34;
        v35 = *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8LL * (*v23 & 0xFFF));
        v36 = v31 | (1 << *(_BYTE*)(v35 + 104));
        *(_WORD*)(v10 + 1728) = v36;
        v37 = (1LL << *(_BYTE*)(v35 + 250)) | v32;
        *(_QWORD*)(v10 + 1736) = v37;
        v38 = (1 << *(_BYTE*)(v35 + 115)) | v33;
        *(_DWORD*)(v10 + 1732) = v38;
        v39 = *(unsigned __int16*)(*(_QWORD*)(v35 + 24) + 1064LL) | v34;
        *(_WORD*)(v10 + 1730) = v39;
        LOWORD(v35) = v23[1];
        v23 += 4;
        v40 = *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8 * (v35 & 0xFFF));
        v20 = v36 | (1 << *(_BYTE*)(v40 + 104));
        *(_WORD*)(v10 + 1728) = v20;
        v19 = (1LL << *(_BYTE*)(v40 + 250)) | v37;
        *(_QWORD*)(v10 + 1736) = v19;
        result = (unsigned int)(1 << *(_BYTE*)(v40 + 115));
        v18 = result | v38;
        *(_DWORD*)(v10 + 1732) = v18;
        v17 = *(unsigned __int16*)(*(_QWORD*)(v40 + 24) + 1064LL) | v39;
        *(_WORD*)(v10 + 1730) = v17;
      } while (-(__int64)(v16 & 0xFFFFFFFFFFFFFFFCLL) != v24);
      v21 = -v24;
      v22 = v16 & 3;
      if (v22 == 0) {
        goto LABEL_6;
      }
    LABEL_18:
      v41 = (int*)(v12 + 4 * v21);
      do {
        v42 = *v41++;
        --v22;
        v43 = *(_QWORD*)(*(_QWORD*)(v14 + 64) + 8LL * (v42 & 0xFFF));
        v20 |= 1 << *(_BYTE*)(v43 + 104);
        *(_WORD*)(v10 + 1728) = v20;
        v19 |= 1LL << *(_BYTE*)(v43 + 250);
        *(_QWORD*)(v10 + 1736) = v19;
        v18 |= 1 << *(_BYTE*)(v43 + 115);
        *(_DWORD*)(v10 + 1732) = v18;
        v17 |= *(unsigned __int16*)(*(_QWORD*)(v43 + 24) + 1064LL);
        *(_WORD*)(v10 + 1730) = v17;
      } while (v22 != 0);
      goto LABEL_6;
    }
  }
  return result;
}

_QWORD*

game_map_Image_UnitMap_UpdateSupportSkill_lambda2_Invoke_72fa00(__int64 a1,
                                                                _DWORD* a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  int v11;
  __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  int v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 i;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;
  __int64 v34;
  unsigned int v35;
  _DWORD* v36;
  __int64 v37;
  _QWORD v38[4];
  _QWORD* v39;
  unsigned int v40;
  _QWORD v41[4];
  _QWORD* v42;
  char v43;

  v2 = *(_QWORD*)(a1 + 8);
  result = v38;
  v38[0] = GameData_1f94100;
  v39 = v38;
  if (v2 == 0) {
  LABEL_49:
    v34 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v34))((__int64)result);
  }
  v5 = *(_QWORD*)(*GameData_212ce98[0] + 160);
  v6 = GameData_212c880[0];
  v7 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v8 = *(_QWORD*)(v7 + 8LL * (*a2 & 0xFFF));
  v9 = *(unsigned __int8*)(v8 + 278);
  v10 = *(unsigned __int8*)(v8 + 279);
  if ((*a2 & 0xFFF) != 0) {
    v11 = GameRoutine_84edc0(v2 + 1744, *(_QWORD*)(v8 + 24) + 224LL);
    v7 = *(_QWORD*)(*v6 + 64);
    v12 = *a2 & 0xFFF;
  }
  else {
    v12 = 0;
    v11 = 0;
  }
  v13 = *(_QWORD*)(v7 + 8 * v12);
  v36 = a2;
  if (v13 != 0) {
    v14 = *(unsigned __int8*)(v13 + 106);
    if (v14 == 1) {
      v13 = *(_QWORD*)(v2 + 440);
      if (v13 == 0) {
        goto LABEL_16;
      }
      v13 = *(unsigned __int8*)(v13 + 16);
      if (v13 <= 3) {
        LODWORD(v13) = GameData_1a82ec0[v13];
        goto LABEL_16;
      }
    }
    else if (v14 == 2) {
      v15 = *(_QWORD*)(v2 + 440);
      if (v15 != 0) {
        v16 = *(_BYTE*)(v15 + 16);
      }
      else {
        v16 = 9;
      }
      LODWORD(v13) = 1 << v16;
      goto LABEL_16;
    }
    LODWORD(v13) = 0;
  }
LABEL_16:
  v40 = v13;
  v17 = game_UnitPool_GetFirst(&v40);
  if (v17 != 0) {
    v18 = v17;
    v37 = v5 + 8;
    v19 = *(_QWORD*)(v17 + 432);
    if (v19 == 0) {
      v19 = *(_QWORD*)(v17 + 440);
      if (v19 != 0) {
        v20 = *(unsigned __int8*)(v19 + 16);
        if (v20 <= 8) {
          while (1) {
            v35 = v20 + 1;
            if (((v40 >> v20) & 2) != 0) {
              v19 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                               24LL * (unsigned __int8)(v20 + 1) + 556000);
              if (v19 != 0) {
                break;
              }
            }
            v20 = v35;
            if (v35 == 9) {
              goto LABEL_20;
            }
          }
        }
        else {
        LABEL_20:
          v19 = 0;
        }
      }
    }
    v21 = v11 + v10;
    while (1) {
    LABEL_23:
      v22 = v19;
      v23 = *(char*)(v18 + 584);
      v24 = *(char*)(v18 + 585);
      v25 = EscapeMenuItem_752b40(
          (unsigned int)*(char*)(v2 + 584), (unsigned int)*(char*)(v2 + 585),
          *(unsigned int*)(v2 + 592), *(unsigned int*)(v2 + 592), v23, v24,
          *(unsigned int*)(v18 + 592), *(unsigned int*)(v18 + 592));
      if (v25 < v9 || (int)v25 > v21) {
        goto LABEL_37;
      }
      v43 = 0;
      v42 = v41;
      v41[0] = GameData_1f94310;
      v41[1] = v37;
      v41[2] = &v43;
      Unit_6c8a80(v18, v23, v24, v41);
      if (v42 == v41) {
        break;
      }
      if (v42 != nullptr) {
        v27 = 40;
      LABEL_32:
        (*(void (**)(__int64))(*v42 + v27))((__int64)v42);
      }
      if (v43 == 1) {
        v28 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                    8LL * (*v36 & 0xFFF)) +
                         24LL);
        v29 = *(_QWORD*)(v28 + 448);
        for (i = *(_QWORD*)(v28 + 456); v29 != i; v29 += 4) {
          v41[0] = v18;
          if (v39 == nullptr) {
            GameRoutine_60a310_alt1(0);
          }
          (*(void (**)(_QWORD*, _QWORD*, __int64))(*v39 + 48LL))(v39, v41, v29);
        }
      }
    LABEL_37:
      if (v22 == 0) {
        goto LABEL_46;
      }
      v19 = *(_QWORD*)(v22 + 432);
      v18 = v22;
      if (v19 == 0) {
        v31 = *(_QWORD*)(v22 + 440);
        v18 = v22;
        if (v31 != 0) {
          v32 = *(unsigned __int8*)(v31 + 16);
          v19 = 0;
          v18 = v22;
          if (v32 <= 8) {
            while (1) {
              v33 = v32 + 1;
              if (((v40 >> v32) & 2) != 0) {
                v19 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                 24LL * (unsigned __int8)(v32 + 1) + 556000);
                if (v19 != 0) {
                  break;
                }
              }
              ++v32;
              if (v33 == 9) {
                v19 = 0;
                v18 = v22;
                goto LABEL_23;
              }
            }
            v18 = v22;
          }
        }
      }
    }
    v27 = 32;
    goto LABEL_32;
  }
LABEL_46:
  result = v39;
  if (v39 == v38) {
    goto LABEL_49;
  }
  if (v39 == nullptr) {
    return result;
  }
  v34 = 40;
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v34))((__int64)result);
}

__int64 game_map_Image_UnitMap_UpdateSupportSkill_lambda2_Invoke_72fe80(
    __int64 a1, __int64* a2, int* a3)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;

  v3 = *a2;
  v25 = *a3;
  result = UnitSkillList_84cc00(v3 + 1648, &v25, 1);
  if ((result & 1) != 0) {
    v5 = *(_QWORD*)(v3 + 1688);
    v6 = *(_QWORD*)(v3 + 1680);
    *(_QWORD*)(v3 + 1736) = 0;
    v7 = v5 - v6;
    *(_QWORD*)(v3 + 1728) = 0;
    if ((int)((unsigned __int64)(v5 - v6) >> 2) >= 1) {
      v8 = (int)(v7 >> 2);
      if (v8 <= 1) {
        v9 = 1;
      }
      else {
        v9 = (int)(v7 >> 2);
      }
      v10 = *GameData_212c880[0];
      if (v8 >= 2) {
        v16 = (int*)(v6 + 4);
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        do {
          v15 += 2;
          v17 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + 8LL * (*(v16 - 1) & 0xFFF));
          v18 = v14 | (1 << *(_BYTE*)(v17 + 104));
          *(_WORD*)(v3 + 1728) = v18;
          v19 = (1LL << *(_BYTE*)(v17 + 250)) | v13;
          *(_QWORD*)(v3 + 1736) = v19;
          v20 = (1 << *(_BYTE*)(v17 + 115)) | v12;
          *(_DWORD*)(v3 + 1732) = v20;
          v21 = *(unsigned __int16*)(*(_QWORD*)(v17 + 24) + 1064LL) | v11;
          *(_WORD*)(v3 + 1730) = v21;
          v22 = *v16;
          v16 += 2;
          v23 = *(_QWORD*)(*(_QWORD*)(v10 + 64) + 8LL * (v22 & 0xFFF));
          v14 = v18 | (1 << *(_BYTE*)(v23 + 104));
          *(_WORD*)(v3 + 1728) = v14;
          v13 = (1LL << *(_BYTE*)(v23 + 250)) | v19;
          *(_QWORD*)(v3 + 1736) = v13;
          v12 = (1 << *(_BYTE*)(v23 + 115)) | v20;
          *(_DWORD*)(v3 + 1732) = v12;
          result = *(unsigned __int16*)(*(_QWORD*)(v23 + 24) + 1064LL);
          v11 = result | v21;
          *(_WORD*)(v3 + 1730) = v11;
        } while ((v9 & 0x7FFFFFFFFFFFFFFELL) != v15);
      }
      else {
        LOWORD(v11) = 0;
        v12 = 0;
        v13 = 0;
        LOWORD(v14) = 0;
        v15 = 0;
      }
      if ((v9 & 1) != 0) {
        v24 = *(_QWORD*)(*(_QWORD*)(v10 + 64) +
                         8LL * (*(_DWORD*)(v6 + 4 * v15) & 0xFFF));
        *(_WORD*)(v3 + 1728) = v14 | (1 << *(_BYTE*)(v24 + 104));
        *(_QWORD*)(v3 + 1736) = (1LL << *(_BYTE*)(v24 + 250)) | v13;
        *(_DWORD*)(v3 + 1732) = (1 << *(_BYTE*)(v24 + 115)) | v12;
        *(_WORD*)(v3 + 1730) = *(_WORD*)(*(_QWORD*)(v24 + 24) + 1064LL) | v11;
      }
    }
  }
  return result;
}

__int64 game_map_Image_UnitMap_EachSupportSkill_lambda0_Invoke(__int64 a1,
                                                               __int64 a2,
                                                               __int64 a3,
                                                               __int64 a4)
{
  __int64 v4;

  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  if (v4 == 0) {
    GameRoutine_60a310((unsigned __int8)v4, a2, a3, a4);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
}

__int64 game_map_Image_UnitMap_Add_lambda0_Invoke(__int64 result, _DWORD* a2,
                                                  _DWORD* a3)
{
  __int64 v3;

  if (*(unsigned __int8*)(*GameData_212ce98[0] + 18) >
          (unsigned int)(unsigned __int8)(*a2 - *(_BYTE*)(*GameData_212ce98[0] +
                                                          16)) &&
      *(unsigned __int8*)(*GameData_212ce98[0] + 19) >
          (unsigned int)(unsigned __int8)(*a3 - *(_BYTE*)(*GameData_212ce98[0] +
                                                          17))) {
    LODWORD(v3) = *a2 + 32 * *a3;
    if ((unsigned int)v3 >= 0x400) {
      v3 = 0;
    }
    else {
      v3 = (unsigned int)v3;
    }
    *(_BYTE*)(*(_QWORD*)(result + 8) + v3 + 8) =
        *(_BYTE*)(*(_QWORD*)(result + 16) + 490LL);
  }
  return result;
}

__int64 game_map_Image_UnitMap_Remove_lambda0_Invoke(__int64 result, _DWORD* a2,
                                                     _DWORD* a3)
{
  unsigned int v3;
  __int64 v4;

  if (*(unsigned __int8*)(*GameData_212ce98[0] + 18) >
          (unsigned int)(unsigned __int8)(*a2 - *(_BYTE*)(*GameData_212ce98[0] +
                                                          16)) &&
      *(unsigned __int8*)(*GameData_212ce98[0] + 19) >
          (unsigned int)(unsigned __int8)(*a3 - *(_BYTE*)(*GameData_212ce98[0] +
                                                          17))) {
    v3 = *a2 + 32 * *a3;
    if (v3 >= 0x400) {
      v3 = 0;
    }
    v4 = *(_QWORD*)(result + 8) + 8LL;
    if (*(_WORD*)(*(_QWORD*)(result + 16) + 490LL) ==
        *(unsigned __int8*)(v4 + v3)) {
      *(_BYTE*)(v4 + v3) = 0;
    }
  }
  return result;
}

__int64 game_map_Image_SightMap_CanSee_lambda0_Invoke(__int64 result,
                                                      _DWORD* a2, _DWORD* a3)
{
  if (((*(_DWORD*)(*(_QWORD*)(result + 8) +
                   4LL * ((*(int*)a2 + 32 * *(int*)a3) >> 5)) >>
        *(_DWORD*)a2) &
       1) != 0) {
    **(_BYTE**)(result + 16) = 1;
  }
  return result;
}

#pragma GCC visibility pop
