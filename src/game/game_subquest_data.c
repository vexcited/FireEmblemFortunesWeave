#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* GameRoutine_1258640(__int64*);
_QWORD* GameRoutine_1264da0(_QWORD* __return_ptr, _QWORD);
_QWORD* GameRoutine_89cb30(_QWORD* __return_ptr);
__int64 GameRoutine_1256660(_QWORD, _QWORD);
__int64 GameRoutine_12569c0(__int64, __int64, int);
__int64 GameRoutine_12571e0(__int64*);
__int64 GameRoutine_1257440(__int64);
__int64 GameRoutine_1257620(__int64 result, char);
__int64 GameRoutine_1257a20(__int64);
__int64 GameRoutine_1258420(_QWORD);
__int64 GameRoutine_125e1a0(_QWORD);
__int64 GameRoutine_1260d00(_QWORD, _QWORD);
__int64 GameRoutine_12645e0(_QWORD);
__int64 GameRoutine_1268100(_QWORD);
__int64 GameRoutine_1268280(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1269fa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1326a40(_QWORD);
__int64 GameRoutine_1332f00(_QWORD);
__int64 GameRoutine_17cc060(_QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657a50(void);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 GameRoutine_715440(_QWORD);
__int64 GameRoutine_82e7c0(_QWORD, _QWORD);
__int64 GameRoutine_8679c0(_QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_8b03f0(_QWORD);
__int64 GameRoutine_8f7120(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 GameRoutine_9bd480(_QWORD);
__int64 JobFile_676ef0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_ProcInst_Register(void);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 game_UnitItemList_Sort(_QWORD, _QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_util_Format(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64* GameRoutine_1255920(__int64* result, unsigned __int64*);
extern _UNKNOWN GameData_1ae67be;
extern _UNKNOWN GameData_1aed6ab;
extern _UNKNOWN GameData_1afaabd;
extern _UNKNOWN GameData_21701d0;
extern _UNKNOWN GameData_2170390;
extern _UNKNOWN GameData_2170710;
extern __int64 (*GameData_201df88[])();
extern __int64 (*GameData_201dfb8[])();
extern __int64 (*GameData_201e038[])();
extern __int64 (*game_GameSubquestData_ProcLearnSkill_vtable[])();
extern __int64 (*game_GameSubquestData_ProcRewardForSharedComp_vtable[])();
extern __int64 (*game_GameSubquestData_ProcReward_vtable[])();
extern __int64 GameData_1a8d218;
extern __int64 GameData_212c060;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_2130f48;
extern __int64 GameData_21ca050;
extern __int64 GameData_21ca310;
extern __int64 GameData_21eea40;
extern __int64 GameData_2240198;
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212cb58[92];
extern __int64* GameData_212d6d0;
extern int GameData_22401a0;
unsigned __int64** GameRoutine_1255aa0(unsigned __int64** result, __int64);
void __attribute__((noreturn)) GameRoutine_1265540(_QWORD);
void __attribute__((noreturn)) GameRoutine_1267840(void);
void __attribute__((noreturn)) GameRoutine_12680d0(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameSubquestData_Destructor(_QWORD* a1);
__int64 GameSubquestData_12598c0();
__int64* GameSubquestData_1259ce0(__int64* result);
__int64 GameSubquestData_1259ea0(__int64 result, __int64* a2, char a3);
__int64 GameSubquestData_125a000(__int64 result, __int64* a2, char a3);
__int64 GameSubquestData_125a1a0(__int64 result, __int64* a2, __int64 a3,
                                 char a4);
__int64 GameSubquestData_125a300(__int64 a1, __int64* a2, char a3);
bool GameSubquestData_125a520(__int64 a1, __int64 a2);
__int64 GameSubquestData_125a550(unsigned __int8* a1, unsigned __int8* a2);
__int64 GameSubquestData_125a640(__int64 a1, __int64* a2, char a3);
__int64 GameSubquestData_125a860(__int64 result, __int64* a2);
__int64 GameSubquestData_125a9c0(__int64 a1, __int64* a2);
__int64 GameSubquestData_125abc0(__int64 result, __int64* a2, char a3);
__int64 GameSubquestData_125ad40(__int64 a1, __int64* a2, char a3);
__int64 GameSubquestData_125af60(__int64 result, __int64* a2);
__int64 GameSubquestData_125b0c0(__int64 result, __int64* a2);
__int64 GameSubquestData_125b200(__int64 result, __int64* a2);
__int64 GameSubquestData_125b340(__int64 result, __int64* a2, __int64 a3);
__int64 GameSubquestData_125b4a0(__int64 a1, __int64* a2);
__int64 GameSubquestData_125b6a0(__int64 result, __int64* a2, char a3);
__int64 GameSubquestData_125b8e0(_QWORD* a1, __int64 a2);
__int64 GameSubquestData_125ba20(__int64 a1);
__int64 GameSubquestData_125ba80(__int64 result);
__int64 GameSubquestData_125bbc0(__int64 result);
__int64 GameSubquestData_125bca0(__int64 result, _BYTE* a2);
__int64 GameSubquestData_125c0c0(__int64 a1, __int64* a2);
void GameSubquestData_125c1a0(__int64 a1, __int64 a2, __int64** a3);
__int64 GameSubquestData_125c2c0(__int64 result, __int64 a2, __int64** a3,
                                 int a4);
__int64 GameSubquestData_125d1c0(__int64 a1, __int64 a2, __int64** a3);
__int64 GameSubquestData_125d3e0(__int64 a1);
__int64 GameSubquestData_125d600(__int64 a1);
__int64 GameSubquestData_125d800(__int64 a1, __int64 a2);
__int64 GameSubquestData_125da40(__int64 a1, __int64 a2, __int64 a3);
void GameSubquestData_125dfc0(__int64 a1, unsigned __int8* a2);
__int64 GameSubquestData_125e460(__int64 a1, __int64 a2);
__int64 GameSubquestData_125e760(__int64 a1, __int64 a2, __int64* a3);
__int64 GameSubquestData_125ea20();
__int64 GameSubquestData_125ec20(__int64 result, __int64 a2);
__int64 GameSubquestData_Unknown8(__int64 result, __int64 a2);
unsigned __int64** GameSubquestData_Unknown9(unsigned __int64** result,
                                             __int64 a2, int a3);
__int64 GameSubquestData_Unknown10(__int64 result, __int64 a2);
__int64 GameSubquestData_1260b40(__int64 result, __int64 a2);
unsigned __int64** GameSubquestData_Unknown11(unsigned __int64** result,
                                              __int64 a2, int a3);

__int64 GameSubquestData_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 i;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 result;
  _QWORD* v27;

  if (GameData_2240198 != 0 && (*(_WORD*)(GameData_2240198 + 136) & 1) == 0) {
    GameRoutine_657a50();
  }
  v2 = a1[179];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[180] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  for (i = 175; i != 5; i -= 17) {
    v7 = &a1[i];
    v8 = a1[i - 1];
    if (v8 != 0) {
      a1[i] = v8;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
    }
    v10 = *(v7 - 4);
    if (v10 != 0) {
      a1[i - 3] = v10;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v11 = 128;
      }
      else {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
    }
    v12 = &a1[i];
    v13 = a1[i - 7];
    if (v13 != 0) {
      *(v12 - 6) = v13;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
    }
    v15 = *(v12 - 10);
    if (v15 != 0) {
      a1[i - 9] = v15;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v16 = 128;
      }
      else {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16);
    }
    v17 = *(v7 - 13);
    if (v17 != 0) {
      a1[i - 12] = v17;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v18 = 128;
      }
      else {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18);
    }
  }
  v19 = (_QWORD*)a1[6];
  if (v19 != nullptr) {
    do {
      v20 = (_QWORD*)*v19;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v21 = 128;
      }
      else {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v21);
      v19 = v20;
    } while (v20 != nullptr);
  }
  v22 = a1[4];
  a1[4] = 0;
  if (v22 != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23);
  }
  v24 = a1[2];
  a1[2] = 0;
  if (v24 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v25);
  }
  a1[1] = GameData_212d6d0 + 2;
  v27 = a1 + 1;
  result = GameRoutine_876a40(&GameData_21eea40, &v27);
  *a1 = GameData_201df88;
  if (*(_QWORD**)GameData_212c7b0[0] == a1) {
    *(_QWORD*)GameData_212c7b0[0] = 0;
    GameData_22401a0 = 0;
  }
  return result;
}

__int64 GameSubquestData_12598c0()
{
  bool v0;
  bool v1;
  bool v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  unsigned __int8 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  bool v43;
  bool v44;
  bool v45;
  bool v46;
  bool v47;
  bool v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;

  v3 = (__int64*)GameRoutine_82e7c0(0, 1);
  v52 = *v3;
  if (*v3 != 0) {
    v48 = game_GameModeData_instance_ != 0 &&
          (v4 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v3)) != 0 &&
          *(_DWORD*)(v4 + 32) != 0;
  }
  v5 = (__int64*)GameRoutine_82e7c0(1, 1);
  v51 = *v5;
  if (*v5 != 0) {
    v47 = game_GameModeData_instance_ != 0 &&
          (v6 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v5)) != 0 &&
          *(_DWORD*)(v6 + 32) != 0;
  }
  v7 = (__int64*)GameRoutine_82e7c0(2, 1);
  v50 = *v7;
  if (*v7 != 0) {
    v46 = game_GameModeData_instance_ != 0 &&
          (v8 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v7)) != 0 &&
          *(_DWORD*)(v8 + 32) != 0;
  }
  v9 = (__int64*)GameRoutine_82e7c0(3, 1);
  v49 = *v9;
  if (*v9 != 0) {
    v45 = game_GameModeData_instance_ != 0 &&
          (v10 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v9)) != 0 &&
          *(_DWORD*)(v10 + 32) != 0;
  }
  v11 = (__int64*)GameRoutine_82e7c0(4, 1);
  v12 = *v11;
  if (*v11 != 0) {
    v44 = game_GameModeData_instance_ != 0 &&
          (v13 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v11)) != 0 &&
          *(_DWORD*)(v13 + 32) != 0;
  }
  v14 = (__int64*)GameRoutine_82e7c0(5, 1);
  v15 = *v14;
  if (*v14 != 0) {
    v43 = game_GameModeData_instance_ != 0 &&
          (v16 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v14)) != 0 &&
          *(_DWORD*)(v16 + 32) != 0;
  }
  v17 = (__int64*)GameRoutine_82e7c0(6, 1);
  v18 = *v17;
  if (*v17 != 0) {
    v0 = game_GameModeData_instance_ != 0 &&
         (v19 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), v17)) != 0 &&
         *(_DWORD*)(v19 + 32) != 0;
  }
  v20 = (__int64*)GameRoutine_82e7c0(7, 1);
  v21 = *v20;
  if (*v20 != 0) {
    v2 = game_GameModeData_instance_ != 0 &&
         (v22 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), v20)) != 0 &&
         *(_DWORD*)(v22 + 32) != 0;
  }
  v23 = (__int64*)GameRoutine_82e7c0(8, 1);
  v24 = *v23;
  if (*v23 != 0) {
    v1 = game_GameModeData_instance_ != 0 &&
         (v25 = game_GameVariableTable_Find(
              *(_QWORD*)(game_GameModeData_instance_ + 48), v23)) != 0 &&
         *(_DWORD*)(v25 + 32) != 0;
  }
  v26 = (__int64*)GameRoutine_82e7c0(9, 1);
  v28 = *v26;
  if (*v26 != 0) {
    v27 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v29 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v26);
      v27 = v29 != 0 && *(_DWORD*)(v29 + 32) != 0;
    }
  }
  if (v24 != 0 && v1) {
    v30 = 256;
  }
  else {
    v30 = 0;
  }
  if (v21 != 0 && v2) {
    v31 = 128;
  }
  else {
    v31 = 0;
  }
  if (v18 != 0 && v0) {
    v32 = 64;
  }
  else {
    v32 = 0;
  }
  v33 = v31 | v30;
  if (v15 != 0 && v43) {
    v34 = 32;
  }
  else {
    v34 = 0;
  }
  if (v12 != 0 && v44) {
    v35 = 16;
  }
  else {
    v35 = 0;
  }
  if (v49 != 0 && v45) {
    v36 = 8;
  }
  else {
    v36 = 0;
  }
  v37 = v35 | v34 | v32;
  if (v50 != 0 && v46) {
    v38 = 4;
  }
  else {
    v38 = 0;
  }
  if (v51 != 0 && v47) {
    v39 = 2;
  }
  else {
    v39 = 0;
  }
  v40 = v38 | v36;
  if (((v28 != 0) & v27) != 0) {
    v41 = 512;
  }
  else {
    v41 = 0;
  }
  return v39 | (v52 != 0 && v48) | v40 | v37 | v33 | (unsigned int)v41;
}

__int64* GameSubquestData_1259ce0(__int64* result)
{
  __int64* v1;
  unsigned int v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  bool v18;
  __int64 v19;

  v1 = result;
  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v2 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v3 = &result[17 * v2];
  v4 = v3[9];
  v5 = v3[10];
  result[182] = (result[180] - result[179]) >> 3;
  if (v4 != v5) {
    do {
      v6 = *(__int64**)v4;
      if (*(_BYTE*)(*(_QWORD*)v4 + 9LL) == 4) {
        v7 = *v6;
        v8 = *(unsigned __int8*)(*v6 + 113);
        if (v8 != 1) {
          v9 = v8 != 5 && (unsigned int)*(unsigned __int8*)(v7 + 112) - 5 >= 3;
          if (v9 && (*(_BYTE*)(v7 + 161) & 0x10) != 0) {
            result = GameRoutine_1255920(v1 + 179, (unsigned __int64*)v7);
          }
        }
      }
      v4 += 8;
    } while (v4 != v5);
    v10 = v1[180];
    v11 = v1[179];
    v12 = v1[182];
    v13 = (v10 - v11) >> 3;
    if (v12 != v13) {
      if (v13 < 129) {
        v17 = 0;
        return (__int64*)GameRoutine_1268280(v11, v10, (v10 - v11) >> 3, 0,
                                             v17);
      }
      else {
        v14 = (v10 - v11) >> 3;
        v15 = GameData_212c060;
        while (1) {
          v16 = GameRoutine_1a09d20(8 * v14, v15);
          if (v16 != 0) {
            break;
          }
          v17 = v14 >> 1;
          v18 = v14 > 1;
          v14 >>= 1;
          if (!v18) {
            return (__int64*)GameRoutine_1268280(v11, v10, (v10 - v11) >> 3, 0,
                                                 v17);
          }
        }
        GameRoutine_1268280(v11, v10, (v10 - v11) >> 3, v16, v14);
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        return (__int64*)nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
      }
    }
  }
  return result;
}

__int64 GameSubquestData_1259ea0(__int64 result, __int64* a2, char a3)
{
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  bool v22;
  int v23;

  v4 = result;
  if ((a3 & 1) != 0) {
    result = GameSubquestData_125bbc0(result);
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = v4 + 136LL * v5;
  v7 = *a2;
  v8 = a2[1] - *a2;
  v9 = *(_QWORD*)(v6 + 72);
  v10 = *(_QWORD*)(v6 + 80);
  v11 = (__int64*)(v6 + 72);
  v12 = (v8 >> 3) + ((v10 - v9) >> 3);
  if (v12 > (a2[2] - *a2) >> 3) {
    if (v12 >> 61 != 0) {
      GameRoutine_1265540(result);
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v12, 16, 0);
    v15 = v14 + v8;
    v16 = v14 + 8 * v12;
    v17 = v14 + v8 - 8 * (v8 >> 3);
    result = memcpy(v17, v7, v8);
    *a2 = v17;
    a2[1] = v15;
    a2[2] = v16;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18);
    }
  }
  v19 = *v11;
  v20 = v11[1];
  if (*v11 != v20) {
    do {
      v21 = *(unsigned __int8*)(*(_QWORD*)v19 + 9LL);
      v22 = v21 > 5;
      v23 = (1 << v21) & 0x31;
      if (v22 || v23 == 0) {
        result = GameRoutine_1256660(a2, v19);
      }
      v19 += 8;
    } while (v19 != v20);
  }
  return result;
}

__int64 GameSubquestData_125a000(__int64 result, __int64* a2, char a3)
{
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64** v19;
  __int64** v20;
  __int64 v21;
  int v22;
  bool v23;
  unsigned int v24;
  bool v25;
  int v26;

  v4 = result;
  if ((a3 & 1) != 0) {
    result = GameSubquestData_125bbc0(result);
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = v4 + 136LL * v5;
  v7 = *a2;
  v8 = a2[1] - *a2;
  v9 = *(_QWORD*)(v6 + 72);
  v10 = *(_QWORD*)(v6 + 80);
  v11 = v6 + 72;
  v12 = (v8 >> 3) + ((v10 - v9) >> 3);
  if (v12 > (a2[2] - *a2) >> 3) {
    if (v12 >> 61 != 0) {
      GameRoutine_1265540(result);
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v12, 16, 0);
    v15 = v14 + v8;
    v16 = v14 + 8 * v12;
    v17 = v14 + v8 - 8 * (v8 >> 3);
    result = memcpy(v17, v7, v8);
    *a2 = v17;
    a2[1] = v15;
    a2[2] = v16;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18);
    }
  }
  v19 = *(__int64***)v11;
  v20 = *(__int64***)(v11 + 8);
  if (*(__int64***)v11 != v20) {
    do {
      v21 = **v19;
      v22 = *(unsigned __int8*)(v21 + 113);
      if (v22 != 1) {
        v23 = v22 != 5 && (unsigned int)*(unsigned __int8*)(v21 + 112) - 5 >= 3;
        if (v23 && (*(_BYTE*)(v21 + 161) & 2) == 0 &&
            *(_QWORD*)(v21 + 272) == 0) {
          v24 = *((unsigned __int8*)*v19 + 9);
          v25 = v24 > 5;
          v26 = (1 << v24) & 0x31;
          if (v25 || v26 == 0) {
            result = GameRoutine_1256660(a2, v19);
          }
        }
      }
      ++v19;
    } while (v19 != v20);
  }
  return result;
}

__int64 GameSubquestData_125a1a0(__int64 result, __int64* a2, __int64 a3,
                                 char a4)
{
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64** v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;

  v6 = result;
  if ((a4 & 1) != 0) {
    result = GameSubquestData_125bbc0(result);
  }
  if (a3 != 0) {
    v7 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v7 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    v8 = v6 + 136LL * v7;
    v9 = *a2;
    v10 = a2[1] - *a2;
    v11 = *(_QWORD*)(v8 + 72);
    v12 = *(_QWORD*)(v8 + 80);
    v13 = (__int64**)(v8 + 72);
    v14 = (v10 >> 3) + ((v12 - v11) >> 3);
    if (v14 > (a2[2] - *a2) >> 3) {
      if (v14 >> 61 != 0) {
        GameRoutine_1265540(result);
      }
      v15 = fw_memory_g_heap_manager_ptr;
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      v17 = v16 + v10;
      v18 = v16 + 8 * v14;
      v19 = v16 + v10 - 8 * (v10 >> 3);
      result = memcpy(v19, v9, v10);
      *a2 = v19;
      a2[1] = v17;
      a2[2] = v18;
      if (v9 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v20 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v20);
      }
    }
    v21 = *v13;
    v22 = v13[1];
    while (v21 != v22) {
      v23 = *v21;
      result = GameRoutine_12569c0(*v21, a3, 1);
      if ((result & 1) != 0 && *(_BYTE*)(v23 + 9) == 2) {
        result = GameRoutine_1256660(a2, v21);
      }
      ++v21;
    }
  }
  return result;
}

__int64 GameSubquestData_125a300(__int64 a1, __int64* a2, char a3)
{
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64** v19;
  __int64** v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  bool v31;
  __int64 v33;
  __int64 (*v34)();

  v4 = a1;
  if ((a3 & 1) != 0) {
    a1 = GameSubquestData_125bbc0(a1);
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = v4 + 136LL * v5;
  v7 = *a2;
  v8 = a2[1] - *a2;
  v9 = *(_QWORD*)(v6 + 72);
  v10 = *(_QWORD*)(v6 + 80);
  v11 = v6 + 72;
  v12 = (v8 >> 3) + ((v10 - v9) >> 3);
  if (v12 > (a2[2] - *a2) >> 3) {
    if (v12 >> 61 != 0) {
      GameRoutine_1265540(a1);
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v12, 16, 0);
    v15 = v14 + v8;
    v16 = v14 + 8 * v12;
    v17 = v14 + v8 - 8 * (v8 >> 3);
    memcpy(v17, v7, v8);
    *a2 = v17;
    a2[1] = v15;
    a2[2] = v16;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18);
    }
  }
  v19 = *(__int64***)v11;
  v20 = *(__int64***)(v11 + 8);
  while (v19 != v20) {
    v21 = **v19;
    v22 = *(unsigned __int8*)(v21 + 113);
    if (v22 != 1) {
      v23 = *(unsigned __int8*)(v21 + 112) - 5;
      if (v22 != 5 && v23 >= 3 &&
          (unsigned int)*((unsigned __int8*)*v19 + 9) - 2 <= 3) {
        GameRoutine_1256660(a2, v19);
      }
    }
    ++v19;
  }
  v26 = *a2;
  v25 = a2[1];
  v34 = GameSubquestData_125a520;
  if ((v25 - v26) >> 3 < 129) {
    v30 = 0;
    return GameRoutine_1269fa0(v26, v25, &v34, (v25 - v26) >> 3, 0, v30);
  }
  else {
    v27 = (v25 - v26) >> 3;
    v28 = GameData_212c060;
    while (1) {
      v29 = GameRoutine_1a09d20(8 * v27, v28);
      if (v29 != 0) {
        break;
      }
      v30 = v27 >> 1;
      v31 = v27 > 1;
      v27 >>= 1;
      if (!v31) {
        return GameRoutine_1269fa0(v26, v25, &v34, (v25 - v26) >> 3, 0, v30);
      }
    }
    GameRoutine_1269fa0(v26, v25, &v34, (v25 - v26) >> 3, v29, v27);
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
  }
}

bool GameSubquestData_125a520(__int64 a1, __int64 a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  _BOOL4 v6;

  v2 = *(unsigned __int8*)(a2 + 9);
  v3 = *(unsigned __int8*)(a1 + 9);
  v4 = v3 & 0xFE;
  v6 = (v2 & 0xFE) == 4 && v3 < v2;
  if (v4 == 4) {
    return v6;
  }
  else {
    return (v2 & 0xFE) == 4;
  }
}

__int64 GameSubquestData_125a550(unsigned __int8* a1, unsigned __int8* a2)
{
  unsigned int v2;
  unsigned int v3;
  int v4;
  unsigned int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;

  v2 = a1[9];
  v3 = a2[9];
  v4 = v3 & 0xFE;
  if ((v2 & 0xFE) == 4) {
    if (v4 != 4) {
      return 0;
    }
    if (v2 != v3) {
      return v2 < v3;
    }
  }
  else if (v4 == 4) {
    return 1;
  }
  if (*(_BYTE*)(*(_QWORD*)a1 + 113LL) == 1) {
    v6 = 1;
  }
  else {
    v7 = *(unsigned __int8*)(*(_QWORD*)a1 + 112LL);
    if (v7 == 7) {
      v8 = 4;
    }
    else {
      v8 = 0;
    }
    if (v7 == 6) {
      v9 = 3;
    }
    else {
      v9 = v8;
    }
    if (v7 == 5) {
      v6 = 2;
    }
    else {
      v6 = v9;
    }
  }
  if (*(_BYTE*)(*(_QWORD*)a2 + 113LL) == 1) {
    v10 = 1;
  }
  else {
    v11 = *(unsigned __int8*)(*(_QWORD*)a2 + 112LL);
    switch (v11) {
    case 5:
      v10 = 2;
      break;
    case 6:
      v10 = 3;
      break;
    case 7:
      v10 = 4;
      break;
    default:
      v10 = 0;
      break;
    }
  }
  return v6 < v10;
}

__int64 GameSubquestData_125a640(__int64 a1, __int64* a2, char a3)
{
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  bool v27;
  __int64 v29;
  bool (*v30)(__int64, __int64);

  v4 = a1;
  if ((a3 & 1) != 0) {
    a1 = GameSubquestData_125bbc0(a1);
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = v4 + 136LL * v5;
  v7 = *a2;
  v8 = a2[1] - *a2;
  v9 = *(_QWORD*)(v6 + 72);
  v10 = *(_QWORD*)(v6 + 80);
  v11 = (__int64*)(v6 + 72);
  v12 = (v8 >> 3) + ((v10 - v9) >> 3);
  if (v12 > (a2[2] - *a2) >> 3) {
    if (v12 >> 61 != 0) {
      GameRoutine_1265540(a1);
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v12, 16, 0);
    v15 = v14 + v8;
    v16 = v14 + 8 * v12;
    v17 = v14 + v8 - 8 * (v8 >> 3);
    memcpy(v17, v7, v8);
    *a2 = v17;
    a2[1] = v15;
    a2[2] = v16;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18);
    }
  }
  v19 = *v11;
  v20 = v11[1];
  while (v19 != v20) {
    if (*(_BYTE*)(**(_QWORD**)v19 + 113LL) == 1 &&
        (unsigned int)*(unsigned __int8*)(*(_QWORD*)v19 + 9LL) - 2 <= 3) {
      GameRoutine_1256660(a2, v19);
    }
    v19 += 8;
  }
  v22 = *a2;
  v21 = a2[1];
  v30 = GameSubquestData_125a520;
  if ((v21 - v22) >> 3 < 129) {
    v26 = 0;
    return GameRoutine_1269fa0(v22, v21, &v30, (v21 - v22) >> 3, 0, v26);
  }
  else {
    v23 = (v21 - v22) >> 3;
    v24 = GameData_212c060;
    while (1) {
      v25 = GameRoutine_1a09d20(8 * v23, v24);
      if (v25 != 0) {
        break;
      }
      v26 = v23 >> 1;
      v27 = v23 > 1;
      v23 >>= 1;
      if (!v27) {
        return GameRoutine_1269fa0(v22, v21, &v30, (v21 - v22) >> 3, 0, v26);
      }
    }
    GameRoutine_1269fa0(v22, v21, &v30, (v21 - v22) >> 3, v25, v23);
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
  }
}

__int64 GameSubquestData_125a860(__int64 result, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  bool v20;
  int v21;

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = result + 136LL * v3;
  v5 = *a2;
  v6 = a2[1] - *a2;
  v7 = *(_QWORD*)(v4 + 72);
  v8 = *(_QWORD*)(v4 + 80);
  v9 = (__int64*)(v4 + 72);
  v10 = (v6 >> 3) + ((v8 - v7) >> 3);
  if (v10 > (a2[2] - *a2) >> 3) {
    if (v10 >> 61 != 0) {
      GameRoutine_1265540(result);
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v10, 16, 0);
    v13 = v12 + v6;
    v14 = v12 + 8 * v10;
    v15 = v12 + v6 - 8 * (v6 >> 3);
    result = memcpy(v15, v5, v6);
    *a2 = v15;
    a2[1] = v13;
    a2[2] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
    }
  }
  v17 = *v9;
  v18 = v9[1];
  if (*v9 != v18) {
    do {
      if (*(_BYTE*)(**(_QWORD**)v17 + 112LL) == 5) {
        v19 = *(unsigned __int8*)(*(_QWORD*)v17 + 9LL);
        v20 = v19 > 5;
        v21 = (1 << v19) & 0x31;
        if (v20 || v21 == 0) {
          result = GameRoutine_1256660(a2, v17);
        }
      }
      v17 += 8;
    } while (v17 != v18);
  }
  return result;
}

__int64 GameSubquestData_125a9c0(__int64 a1, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  bool v25;
  __int64 v27;
  bool (*v28)(__int64, __int64);

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = a1 + 136LL * v3;
  v5 = *a2;
  v6 = a2[1] - *a2;
  v7 = *(_QWORD*)(v4 + 72);
  v8 = *(_QWORD*)(v4 + 80);
  v9 = (__int64*)(v4 + 72);
  v10 = (v6 >> 3) + ((v8 - v7) >> 3);
  if (v10 > (a2[2] - *a2) >> 3) {
    if (v10 >> 61 != 0) {
      GameRoutine_1265540(a1);
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v10, 16, 0);
    v13 = v12 + v6;
    v14 = v12 + 8 * v10;
    v15 = v12 + v6 - 8 * (v6 >> 3);
    memcpy(v15, v5, v6);
    *a2 = v15;
    a2[1] = v13;
    a2[2] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
    }
  }
  v17 = *v9;
  v18 = v9[1];
  while (v17 != v18) {
    if (*(_BYTE*)(**(_QWORD**)v17 + 112LL) == 5 &&
        (unsigned int)*(unsigned __int8*)(*(_QWORD*)v17 + 9LL) - 2 <= 3) {
      GameRoutine_1256660(a2, v17);
    }
    v17 += 8;
  }
  v20 = *a2;
  v19 = a2[1];
  v28 = GameSubquestData_125a520;
  if ((v19 - v20) >> 3 < 129) {
    v24 = 0;
    return GameRoutine_1269fa0(v20, v19, &v28, (v19 - v20) >> 3, 0, v24);
  }
  else {
    v21 = (v19 - v20) >> 3;
    v22 = GameData_212c060;
    while (1) {
      v23 = GameRoutine_1a09d20(8 * v21, v22);
      if (v23 != 0) {
        break;
      }
      v24 = v21 >> 1;
      v25 = v21 > 1;
      v21 >>= 1;
      if (!v25) {
        return GameRoutine_1269fa0(v20, v19, &v28, (v19 - v20) >> 3, 0, v24);
      }
    }
    GameRoutine_1269fa0(v20, v19, &v28, (v19 - v20) >> 3, v23, v21);
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
  }
}

__int64 GameSubquestData_125abc0(__int64 result, __int64* a2, char a3)
{
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  bool v22;
  int v23;

  v4 = result;
  if ((a3 & 1) != 0) {
    result = GameSubquestData_125bbc0(result);
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = v4 + 136LL * v5;
  v7 = *a2;
  v8 = a2[1] - *a2;
  v9 = *(_QWORD*)(v6 + 72);
  v10 = *(_QWORD*)(v6 + 80);
  v11 = (__int64*)(v6 + 72);
  v12 = (v8 >> 3) + ((v10 - v9) >> 3);
  if (v12 > (a2[2] - *a2) >> 3) {
    if (v12 >> 61 != 0) {
      GameRoutine_1265540(result);
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v12, 16, 0);
    v15 = v14 + v8;
    v16 = v14 + 8 * v12;
    v17 = v14 + v8 - 8 * (v8 >> 3);
    result = memcpy(v17, v7, v8);
    *a2 = v17;
    a2[1] = v15;
    a2[2] = v16;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18);
    }
  }
  v19 = *v11;
  v20 = v11[1];
  if (*v11 != v20) {
    do {
      if (*(_BYTE*)(**(_QWORD**)v19 + 112LL) == 6) {
        v21 = *(unsigned __int8*)(*(_QWORD*)v19 + 9LL);
        v22 = v21 > 5;
        v23 = (1 << v21) & 0x31;
        if (v22 || v23 == 0) {
          result = GameRoutine_1256660(a2, v19);
        }
      }
      v19 += 8;
    } while (v19 != v20);
  }
  return result;
}

__int64 GameSubquestData_125ad40(__int64 a1, __int64* a2, char a3)
{
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  bool v27;
  __int64 v29;
  bool (*v30)(__int64, __int64);

  v4 = a1;
  if ((a3 & 1) != 0) {
    a1 = GameSubquestData_125bbc0(a1);
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = v4 + 136LL * v5;
  v7 = *a2;
  v8 = a2[1] - *a2;
  v9 = *(_QWORD*)(v6 + 72);
  v10 = *(_QWORD*)(v6 + 80);
  v11 = (__int64*)(v6 + 72);
  v12 = (v8 >> 3) + ((v10 - v9) >> 3);
  if (v12 > (a2[2] - *a2) >> 3) {
    if (v12 >> 61 != 0) {
      GameRoutine_1265540(a1);
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v12, 16, 0);
    v15 = v14 + v8;
    v16 = v14 + 8 * v12;
    v17 = v14 + v8 - 8 * (v8 >> 3);
    memcpy(v17, v7, v8);
    *a2 = v17;
    a2[1] = v15;
    a2[2] = v16;
    if (v7 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18);
    }
  }
  v19 = *v11;
  v20 = v11[1];
  while (v19 != v20) {
    if (*(_BYTE*)(**(_QWORD**)v19 + 112LL) == 6 &&
        (unsigned int)*(unsigned __int8*)(*(_QWORD*)v19 + 9LL) - 2 <= 3) {
      GameRoutine_1256660(a2, v19);
    }
    v19 += 8;
  }
  v22 = *a2;
  v21 = a2[1];
  v30 = GameSubquestData_125a520;
  if ((v21 - v22) >> 3 < 129) {
    v26 = 0;
    return GameRoutine_1269fa0(v22, v21, &v30, (v21 - v22) >> 3, 0, v26);
  }
  else {
    v23 = (v21 - v22) >> 3;
    v24 = GameData_212c060;
    while (1) {
      v25 = GameRoutine_1a09d20(8 * v23, v24);
      if (v25 != 0) {
        break;
      }
      v26 = v23 >> 1;
      v27 = v23 > 1;
      v23 >>= 1;
      if (!v27) {
        return GameRoutine_1269fa0(v22, v21, &v30, (v21 - v22) >> 3, 0, v26);
      }
    }
    GameRoutine_1269fa0(v22, v21, &v30, (v21 - v22) >> 3, v25, v23);
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
  }
}

__int64 GameSubquestData_125af60(__int64 result, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  bool v20;
  int v21;

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = result + 136LL * v3;
  v5 = *a2;
  v6 = a2[1] - *a2;
  v7 = *(_QWORD*)(v4 + 72);
  v8 = *(_QWORD*)(v4 + 80);
  v9 = (__int64*)(v4 + 72);
  v10 = (v6 >> 3) + ((v8 - v7) >> 3);
  if (v10 > (a2[2] - *a2) >> 3) {
    if (v10 >> 61 != 0) {
      GameRoutine_1265540(result);
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v10, 16, 0);
    v13 = v12 + v6;
    v14 = v12 + 8 * v10;
    v15 = v12 + v6 - 8 * (v6 >> 3);
    result = memcpy(v15, v5, v6);
    *a2 = v15;
    a2[1] = v13;
    a2[2] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
    }
  }
  v17 = *v9;
  v18 = v9[1];
  if (*v9 != v18) {
    do {
      if (*(_BYTE*)(**(_QWORD**)v17 + 112LL) == 7) {
        v19 = *(unsigned __int8*)(*(_QWORD*)v17 + 9LL);
        v20 = v19 > 5;
        v21 = (1 << v19) & 0x31;
        if (v20 || v21 == 0) {
          result = GameRoutine_1256660(a2, v17);
        }
      }
      v17 += 8;
    } while (v17 != v18);
  }
  return result;
}

__int64 GameSubquestData_125b0c0(__int64 result, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = result + 136LL * v3;
  v5 = *a2;
  v6 = a2[1] - *a2;
  v7 = *(_QWORD*)(v4 + 72);
  v8 = *(_QWORD*)(v4 + 80);
  v9 = (__int64*)(v4 + 72);
  v10 = (v6 >> 3) + ((v8 - v7) >> 3);
  if (v10 > (a2[2] - *a2) >> 3) {
    if (v10 >> 61 != 0) {
      GameRoutine_1265540(result);
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v10, 16, 0);
    v13 = v12 + v6;
    v14 = v12 + 8 * v10;
    v15 = v12 + v6 - 8 * (v6 >> 3);
    result = memcpy(v15, v5, v6);
    *a2 = v15;
    a2[1] = v13;
    a2[2] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
    }
  }
  v17 = *v9;
  v18 = v9[1];
  while (v17 != v18) {
    if (*(_BYTE*)(**(_QWORD**)v17 + 112LL) == 7 &&
        *(_BYTE*)(*(_QWORD*)v17 + 9LL) == 1) {
      result = GameRoutine_1256660(a2, v17);
    }
    v17 += 8;
  }
  return result;
}

__int64 GameSubquestData_125b200(__int64 result, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = result + 136LL * v3;
  v5 = *a2;
  v6 = a2[1] - *a2;
  v7 = *(_QWORD*)(v4 + 72);
  v8 = *(_QWORD*)(v4 + 80);
  v9 = (__int64*)(v4 + 72);
  v10 = (v6 >> 3) + ((v8 - v7) >> 3);
  if (v10 > (a2[2] - *a2) >> 3) {
    if (v10 >> 61 != 0) {
      GameRoutine_1265540(result);
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v10, 16, 0);
    v13 = v12 + v6;
    v14 = v12 + 8 * v10;
    v15 = v12 + v6 - 8 * (v6 >> 3);
    result = memcpy(v15, v5, v6);
    *a2 = v15;
    a2[1] = v13;
    a2[2] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
    }
  }
  v17 = *v9;
  v18 = v9[1];
  while (v17 != v18) {
    if (*(_BYTE*)(**(_QWORD**)v17 + 112LL) == 7 &&
        *(_BYTE*)(*(_QWORD*)v17 + 9LL) == 3) {
      result = GameRoutine_1256660(a2, v17);
    }
    v17 += 8;
  }
  return result;
}

__int64 GameSubquestData_125b340(__int64 result, __int64* a2, __int64 a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64** v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  _BYTE* v21;

  if (a3 != 0) {
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    v6 = result + 136LL * v5;
    v7 = *a2;
    v8 = a2[1] - *a2;
    v9 = *(_QWORD*)(v6 + 72);
    v10 = *(_QWORD*)(v6 + 80);
    v11 = (__int64**)(v6 + 72);
    v12 = (v8 >> 3) + ((v10 - v9) >> 3);
    if (v12 > (a2[2] - *a2) >> 3) {
      if (v12 >> 61 != 0) {
        GameRoutine_1265540(result);
      }
      v13 = fw_memory_g_heap_manager_ptr;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      v15 = v14 + v8;
      v16 = v14 + 8 * v12;
      v17 = v14 + v8 - 8 * (v8 >> 3);
      result = memcpy(v17, v7, v8);
      *a2 = v17;
      a2[1] = v15;
      a2[2] = v16;
      if (v7 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v18 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18);
      }
    }
    v19 = *v11;
    v20 = v11[1];
    while (v19 != v20) {
      v21 = (_BYTE*)*v19;
      result = GameRoutine_12569c0(*v19, a3, 1);
      if ((result & 1) != 0 && *(_BYTE*)(*(_QWORD*)v21 + 112LL) == 7 &&
          v21[9] == 2) {
        result = GameRoutine_1256660(a2, v19);
      }
      ++v19;
    }
  }
  return result;
}

__int64 GameSubquestData_125b4a0(__int64 a1, __int64* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  bool v25;
  __int64 v27;
  bool (*v28)(__int64, __int64);

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = a1 + 136LL * v3;
  v5 = *a2;
  v6 = a2[1] - *a2;
  v7 = *(_QWORD*)(v4 + 72);
  v8 = *(_QWORD*)(v4 + 80);
  v9 = (__int64*)(v4 + 72);
  v10 = (v6 >> 3) + ((v8 - v7) >> 3);
  if (v10 > (a2[2] - *a2) >> 3) {
    if (v10 >> 61 != 0) {
      GameRoutine_1265540(a1);
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v10, 16, 0);
    v13 = v12 + v6;
    v14 = v12 + 8 * v10;
    v15 = v12 + v6 - 8 * (v6 >> 3);
    memcpy(v15, v5, v6);
    *a2 = v15;
    a2[1] = v13;
    a2[2] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
    }
  }
  v17 = *v9;
  v18 = v9[1];
  while (v17 != v18) {
    if (*(_BYTE*)(**(_QWORD**)v17 + 112LL) == 7 &&
        (unsigned int)*(unsigned __int8*)(*(_QWORD*)v17 + 9LL) - 2 <= 3) {
      GameRoutine_1256660(a2, v17);
    }
    v17 += 8;
  }
  v20 = *a2;
  v19 = a2[1];
  v28 = GameSubquestData_125a520;
  if ((v19 - v20) >> 3 < 129) {
    v24 = 0;
    return GameRoutine_1269fa0(v20, v19, &v28, (v19 - v20) >> 3, 0, v24);
  }
  else {
    v21 = (v19 - v20) >> 3;
    v22 = GameData_212c060;
    while (1) {
      v23 = GameRoutine_1a09d20(8 * v21, v22);
      if (v23 != 0) {
        break;
      }
      v24 = v21 >> 1;
      v25 = v21 > 1;
      v21 >>= 1;
      if (!v25) {
        return GameRoutine_1269fa0(v20, v19, &v28, (v19 - v20) >> 3, 0, v24);
      }
    }
    GameRoutine_1269fa0(v20, v19, &v28, (v19 - v20) >> 3, v23, v21);
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v27 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
  }
}

__int64 GameSubquestData_125b6a0(__int64 result, __int64* a2, char a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64** v19;
  __int64** v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 (*v32)(unsigned __int8*, unsigned __int8*);

  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0 ||
      (unsigned int)(*(_DWORD*)(game_GameModeData_instance_ + 60) - 1) >= 2) {
    if ((a3 & 1) != 0) {
      v5 = result;
      GameSubquestData_125bbc0(result);
      v4 = game_GameModeData_instance_;
      result = v5;
    }
    if (v4 != 0) {
      LODWORD(v4) = *(unsigned __int8*)(v4 + 15);
    }
    v6 = result + 136LL * (unsigned int)v4;
    v7 = *a2;
    v8 = a2[1] - *a2;
    v9 = *(_QWORD*)(v6 + 72);
    v10 = *(_QWORD*)(v6 + 80);
    v11 = v6 + 72;
    v12 = (v8 >> 3) + ((v10 - v9) >> 3);
    if (v12 > (a2[2] - *a2) >> 3) {
      if (v12 >> 61 != 0) {
        GameRoutine_1265540(result);
      }
      v13 = fw_memory_g_heap_manager_ptr;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      v15 = v14 + v8;
      v16 = v14 + 8 * v12;
      v17 = v14 + v8 - 8 * (v8 >> 3);
      memcpy(v17, v7, v8);
      *a2 = v17;
      a2[1] = v15;
      a2[2] = v16;
      if (v7 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18);
      }
    }
    v19 = *(__int64***)v11;
    v20 = *(__int64***)(v11 + 8);
    while (v19 != v20) {
      v21 = **v19;
      v22 = *(unsigned __int8*)(v21 + 113);
      if (v22 == 1 || ((v23 = *(unsigned __int8*)(v21 + 112) - 5, v22 != 5)
                           ? (v24 = v23 > 2)
                           : (v24 = false),
                       !v24)) {
        if ((unsigned int)*((unsigned __int8*)*v19 + 9) - 2 <= 3) {
          GameRoutine_1256660(a2, v19);
        }
      }
      ++v19;
    }
    v26 = *a2;
    v25 = a2[1];
    v32 = GameSubquestData_125a550;
    if ((v25 - v26) >> 3 < 129) {
      v30 = 0;
      return GameRoutine_1269fa0(v26, v25, &v32, (v25 - v26) >> 3, 0, v30);
    }
    else {
      v27 = (v25 - v26) >> 3;
      v28 = GameData_212c060;
      while (1) {
        v29 = GameRoutine_1a09d20(8 * v27, v28);
        if (v29 != 0) {
          break;
        }
        v30 = v27 >> 1;
        v24 = v27 > 1;
        v27 >>= 1;
        if (!v24) {
          return GameRoutine_1269fa0(v26, v25, &v32, (v25 - v26) >> 3, 0, v30);
        }
      }
      GameRoutine_1269fa0(v26, v25, &v32, (v25 - v26) >> 3, v29, v27);
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
    }
  }
  return result;
}

__int64 GameSubquestData_125b8e0(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  _BYTE v13[512];

  nn_util_SNPrintf(v13, 512, "%s_%d", a2);
  v3 = game_HashString(v13);
  v4 = a1[5];
  if (v4 != 0 && a1[7] != 0) {
    v6 = v4 - 1;
    if ((v4 & (v4 - 1)) != 0) {
      v7 = v3;
      if (v3 >= v4) {
        v7 = v3 % v4;
      }
    }
    else {
      v7 = v6 & v3;
    }
    v8 = *(_QWORD**)(a1[4] + 8 * v7);
    if (v8 != nullptr) {
      v9 = (_QWORD*)*v8;
      if (v9 != nullptr) {
        if ((v4 & v6) == 0) {
          while (1) {
            v11 = v9[1];
            if (v3 == v11) {
              if (v9[2] == v3) {
                return v9[3];
              }
            }
            else if ((v11 & v6) != v7) {
              return 0;
            }
            v9 = (_QWORD*)*v9;
            if (v9 == nullptr) {
              return 0;
            }
          }
        }
        do {
          v10 = v9[1];
          if (v3 == v10) {
            if (v9[2] == v3) {
              return v9[3];
            }
          }
          else {
            if (v10 >= v4) {
              v10 %= v4;
            }
            if (v10 != v7) {
              return 0;
            }
          }
          v9 = (_QWORD*)*v9;
        } while (v9 != nullptr);
      }
    }
  }
  return 0;
}

__int64 GameSubquestData_125ba20(__int64 a1)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = a1 + 136LL * v1;
  v3 = *(_QWORD*)(v2 + 72);
  v4 = *(_QWORD*)(v2 + 80);
  while (v3 != v4) {
    if (*(_BYTE*)(**(_QWORD**)v3 + 112LL) == 5 &&
        *(_BYTE*)(*(_QWORD*)v3 + 9LL) != 4) {
      return 0;
    }
    v3 += 8;
  }
  return 1;
}

__int64 GameSubquestData_125ba80(__int64 result)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64 v7;
  int v8;
  bool v9;
  int v10;
  __int64 v11;
  unsigned __int8* v12;
  int v13;
  unsigned __int64* v14;
  unsigned __int64* v15;
  unsigned __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64* v20;
  unsigned __int64* v21;
  unsigned __int64 v22;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = result + 136LL * v1;
  v4 = *(__int64***)(v2 + 72);
  v5 = *(__int64***)(v2 + 80);
  v3 = v2 + 72;
  while (v4 != v5) {
    v6 = *v4;
    v7 = **v4;
    v8 = *(unsigned __int8*)(v7 + 113);
    if (v8 != 1) {
      v9 = v8 != 5 && (unsigned int)*(unsigned __int8*)(v7 + 112) - 5 >= 3;
      if (v9 && (*(_BYTE*)(v7 + 161) & 0x10) != 0) {
        v10 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v10 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
        }
        v11 = *(unsigned __int16*)(v7 + 168);
        if (*(_WORD*)(v7 + 168) != 0) {
          v12 = *(unsigned __int8**)(v7 + 176);
          while (1) {
            v13 = *v12++;
            if (v13 == v10) {
              break;
            }
            if (--v11 == 0) {
              goto LABEL_4;
            }
          }
        }
        else {
        LABEL_4:
          if (*((_BYTE*)v6 + 9) == 0) {
            result = GameRoutine_1257440(**v4);
            if ((result & 1) != 0) {
              v14 = *(_QWORD*)(v7 + 192) != 0 ? *(unsigned __int64**)(v7 + 192)
                                              : (unsigned __int64*)v7;
              v15 = *(unsigned __int64**)(v3 + 96);
              v16 = *(unsigned __int64**)(v3 + 104);
              if (v16 != v15) {
                v17 = *v14;
                v18 = v16 - v15;
                do {
                  v19 = v18 >> 1;
                  v20 = &v15[v18 >> 1];
                  v22 = *v20;
                  v21 = v20 + 1;
                  v18 += ~(v18 >> 1);
                  if (v22 < v17) {
                    v15 = v21;
                  }
                  else {
                    v18 = v19;
                  }
                } while (v18 != 0);
                if (v15 != v16 && v17 >= *v15) {
                  result = (__int64)GameRoutine_1258640(v6);
                }
              }
            }
          }
        }
      }
    }
    ++v4;
  }
  return result;
}

__int64 GameSubquestData_125bbc0(__int64 result)
{
  unsigned int v1;
  __int64 v2;
  __int64* v3;
  __int64* i;
  char v5;
  _BYTE* v6;
  __int64 v7;
  int v8;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = result + 136LL * v1;
  v3 = *(__int64**)(v2 + 72);
  for (i = *(__int64**)(v2 + 80); v3 != i; ++v3) {
    v6 = (_BYTE*)*v3;
    if ((*(_BYTE*)(*v3 + 9) & 0xFE) == 2) {
      v7 = *(_QWORD*)v6;
      v8 = *(unsigned __int8*)(*(_QWORD*)v6 + 112LL);
      if (*(_BYTE*)(*(_QWORD*)v6 + 112LL) == 0 || v8 == 6) {
        result = GameRoutine_1257a20(*v3);
        if ((result & 1) != 0) {
          v5 = 3;
        }
        else {
          v5 = 2;
        }
      }
      else {
        if (v8 != 7 || *(_BYTE*)(v7 + 113) != 3) {
          continue;
        }
        if (*(_BYTE*)(v7 + 368) == 0) {
          continue;
        }
        result = GameRoutine_715440(result);
        if ((int)result < *(unsigned __int8*)(*(_QWORD*)v6 + 424LL)) {
          continue;
        }
        if (*(_BYTE*)(*(_QWORD*)v6 + 368LL) != 0) {
          result = GameRoutine_1257a20((__int64)v6);
          if ((result & 1) == 0) {
            continue;
          }
        }
        v5 = 3;
      }
      v6[9] = v5;
    }
  }
  return result;
}

__int64 GameSubquestData_125bca0(__int64 result, _BYTE* a2)
{
  unsigned int v3;
  __int64 v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64 v8;
  _BYTE* v9;

  if (a2 != nullptr && *a2 != 0) {
    v3 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    v4 = result + 136LL * v3;
    v5 = *(__int64***)(v4 + 72);
    v6 = *(__int64***)(v4 + 80);
    while (v5 != v6) {
      v7 = *v5;
      v8 = **v5;
      v9 = *(_BYTE**)(v8 + 272);
      if (v9 != nullptr) {
        result = strcmp(*(_QWORD*)(v8 + 272), a2);
        if ((_DWORD)result == 0) {
          if (*v9 == 77 && v9[1] == 73 && v9[2] == 68 && v9[3] == 95 &&
              v9[4] == 69 && v9[5] == 86 && *((_BYTE*)v7 + 9) == 0) {
            return GameRoutine_1257620((__int64)v7, 0);
          }
          return result;
        }
      }
      ++v5;
    }
  }
  return result;
}

__int64 GameSubquestData_125c0c0(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v4;
  _BYTE* v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  result = GameRoutine_1258420(a2);
  if ((result & 1) != 0) {
    v4 = *a2;
    if (*((_BYTE*)a2 + 9) == 3) {
      v5 = *(_BYTE**)(v4 + 8);
      if (v5 != nullptr) {
        v6 = strchr(*(_QWORD*)(v4 + 8), 95);
        if (v6 != 0) {
          v7 = (_BYTE*)(v6 + 1);
        }
        else {
          v7 = v5;
        }
        if (*v7 == 62) {
          v5 = v7 + 1;
        }
        else if (v6 != 0) {
          v5 = (_BYTE*)(v6 + 1);
        }
      }
      result = GameData_2241720;
      if (GameData_2241720 != 0) {
        result = GameRoutine_17cc060(GameData_2241720, v5);
        v4 = *a2;
      }
    }
    if (*(_WORD*)(v4 + 304) != 0) {
      v8 = 8LL * *(unsigned __int16*)(v4 + 304);
      v9 = 0;
      do {
        v11 = *(_QWORD*)(*(_QWORD*)(v4 + 312) + v9);
        v10 = game_HashString(v11);
        result = game_VariableManager_SetFlag(&v10, 1);
        v9 += 8;
      } while (v8 != v9);
    }
  }
  return result;
}

void GameSubquestData_125c1a0(__int64 a1, __int64 a2, __int64** a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;
  __int64 v17;

  if (a3[1] != *a3) {
    v16 = v3;
    v17 = v4;
    v6 = GameRoutine_9bd480(a2);
    if (v6 != 0) {
      v8 = *a3;
      v7 = a3[1];
      if (v8 != v7) {
        v9 = v6;
        do {
          v11 = *v8;
          v15 = v14;
          v14[0] = GameData_201dfb8;
          v14[1] = v11;
          game_ProcList_Call_9bcfa0(v9, v14);
          if (v15 == v14) {
            v12 = 32;
          }
          else {
            if (v15 == nullptr) {
              goto LABEL_13;
            }
            v12 = 40;
          }
          (*(void (**)(void))(*v15 + v12))();
        LABEL_13:
          v13 = *v8;
          v15 = v14;
          v14[0] = GameData_201e038;
          v14[1] = v13;
          game_ProcList_Call_9bcfa0(v9, v14);
          if (v15 == v14) {
            v10 = 32;
          }
          else {
            if (v15 == nullptr) {
              goto LABEL_7;
            }
            v10 = 40;
          }
          (*(void (**)(void))(*v15 + v10))();
        LABEL_7:
          ++v8;
        } while (v8 != v7);
      }
    }
  }
}

__int64 GameSubquestData_125c2c0(__int64 result, __int64 a2, __int64** a3,
                                 int a4)
{
  __int64* v4;
  __int64* v5;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  _BYTE* v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  char v14;
  signed __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64* v18;
  __int64 v19;
  int v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  unsigned int v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  signed __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  char* v40;
  __int64 v41;
  __int64 v42;
  _BYTE* v43;
  __int64 v44;
  _BYTE* v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  int v61;
  unsigned __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  float v79;
  __int64 v80;
  _BYTE* v81;
  char v82;
  char* v83;
  _QWORD** v84;
  __int64* v85;
  __int64 v86;
  int v87;
  unsigned int v88;
  _QWORD* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64* v106;
  __int64 v107;
  __int64* i;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  char v113;
  char* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  _QWORD* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  int v122;
  float v123;
  __int64 v124;
  _BYTE* v125;
  char v126;
  char* v127;
  __int64* v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64* v134;
  unsigned __int64 v135;
  char* v137;
  unsigned __int64 v138;
  char* v139;
  char* v140;
  char* v141;
  _QWORD v142[2];
  __int64 v143;
  __int64 v144;

  v5 = *a3;
  v4 = a3[1];
  if (*a3 == v4) {
    return result;
  }
  v141 = nullptr;
  v7 = nullptr;
  v8 = 0;
  v139 = nullptr;
  v140 = nullptr;
  v138 = 0;
  v9 = GameData_2130f48;
  while (2) {
    v10 = (_BYTE*)*v5;
    v11 = *(unsigned __int8*)(*v5 + 9);
    if (v11 < 2) {
      if ((v10[11] & 1) == 0) {
        if ((unsigned int)*(unsigned __int8*)(*(_QWORD*)v10 + 112LL) - 1 <= 2) {
          v10[11] |= 1u;
        }
        goto LABEL_28;
      }
      goto LABEL_4;
    }
    if (v11 != 2) {
      goto LABEL_4;
    }
    v12 = *(_QWORD*)v10;
    v13 = *(unsigned __int8*)(*(_QWORD*)v10 + 112LL);
    if (v13 <= 3) {
      if (*(unsigned __int8*)(*(_QWORD*)v10 + 112LL) > 1u) {
        if (v13 != 2) {
          if (v13 != 3) {
            goto LABEL_4;
          }
        LABEL_24:
          if ((*(_BYTE*)(v12 + 161) & 8) != 0) {
            LOBYTE(v11) = 4;
          }
          else {
            LOBYTE(v11) = 3;
          }
          v10[9] = v11;
          goto LABEL_28;
        }
      LABEL_67:
        v10[9] = 3;
      LABEL_68:
        v35 = *(_QWORD*)v10;
        if (*(_BYTE*)(*(_QWORD*)v10 + 112LL) != 5) {
          goto LABEL_86;
        }
        if ((unsigned __int64)v141 < v8) {
          *(_QWORD*)v141 = v10;
          v141 += 8;
        LABEL_85:
          v35 = *(_QWORD*)v10;
        LABEL_86:
          v43 = *(_BYTE**)(v35 + 8);
          if (v43 != nullptr) {
            v44 = strchr(*(_QWORD*)(v35 + 8), 95);
            if (v44 != 0) {
              v45 = (_BYTE*)(v44 + 1);
            }
            else {
              v45 = v43;
            }
            if (*v45 == 62) {
              v43 = v45 + 1;
            }
            else if (v44 != 0) {
              v43 = (_BYTE*)(v44 + 1);
            }
          }
          result = *(_QWORD*)v9;
          if (*(_QWORD*)v9 != 0) {
            result = GameRoutine_17cc060(result, v43);
          }
          if ((a4 & 1) != 0 && game_GameModeData_instance_ != 0 &&
              *(_BYTE*)(game_GameModeData_instance_ + 56) == 6 &&
              *(_QWORD*)GameData_212dbb8[0] != 0 &&
              *(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 10LL) == 1) {
            v46 = *(_QWORD*)v10;
            v47 = *(unsigned __int8*)(*(_QWORD*)v10 + 112LL);
            if (*(_BYTE*)(*(_QWORD*)v10 + 112LL) == 0 || v47 == 6 ||
                v47 == 7 && *(_BYTE*)(v46 + 113) == 3 &&
                    *(_BYTE*)(v46 + 368) != 0) {
              v48 = *(unsigned __int16*)(v46 + 320);
              if (*(_WORD*)(v46 + 320) != 0) {
                v49 = (__int64*)(*(_QWORD*)(v46 + 328) + 8LL);
                while (1) {
                  v51 = *v49;
                  v49 += 2;
                  v50 = v51;
                  if (v51 == 0) {
                    break;
                  }
                  v52 = *(unsigned __int8*)(v50 + 73);
                  if (v52 != 20 && v52 != 13) {
                    break;
                  }
                  if (--v48 == 0) {
                    v54 = *(_QWORD*)(v46 + 344);
                    if (v54 != 0) {
                      v55 = *(unsigned __int16*)(v54 + 40);
                      if (*(_WORD*)(v54 + 40) != 0) {
                        goto LABEL_122;
                      }
                    }
                  LABEL_130:
                    if (*(_QWORD*)v9 != 0) {
                      *(_BYTE*)(*(_QWORD*)v9 + 1688LL) = 1;
                    }
                    goto LABEL_4;
                  }
                }
              }
              else {
                v54 = *(_QWORD*)(v46 + 344);
                if (v54 != 0) {
                  v55 = *(unsigned __int16*)(v54 + 40);
                  if (*(_WORD*)(v54 + 40) != 0) {
                  LABEL_122:
                    v56 = *(_QWORD*)(v54 + 48);
                    v57 = v55;
                    v58 = (__int64*)(v56 + 8);
                    while (1) {
                      v60 = *v58;
                      v58 += 2;
                      v59 = v60;
                      if (v60 == 0) {
                        break;
                      }
                      v61 = *(unsigned __int8*)(v59 + 73);
                      if (v61 != 20 && v61 != 13) {
                        break;
                      }
                      if (--v57 == 0) {
                        goto LABEL_130;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_4;
        }
        v36 = v141 - v7;
        v37 = (v141 - v7) >> 3;
        v38 = v37 + 1;
        if ((unsigned __int64)(v37 + 1) >> 61 == 0) {
          if ((__int64)(v8 - (_QWORD)v7) >> 2 > v38) {
            v38 = (__int64)(v8 - (_QWORD)v7) >> 2;
          }
          if (v8 - (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF8LL) {
            v39 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v39 = v38;
          }
          if (v39 == 0) {
            v40 = v7;
            v41 = 0;
          LABEL_81:
            v8 = v41 + 8 * v39;
            v7 = (char*)(v41 + v36 - 8 * v37);
            *(_QWORD*)(v41 + v36) = v10;
            v141 = (char*)(v41 + v36 + 8);
            memcpy(v7, v40, v36);
            if (v40 != nullptr) {
              v42 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v42 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v42);
            }
            goto LABEL_85;
          }
          if (v39 >> 61 == 0) {
            v40 = v7;
            v41 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v39, 16, 0);
            goto LABEL_81;
          }
        LABEL_278:
          GameRoutine_60a210(result);
        }
        goto LABEL_277;
      }
      if (*(_BYTE*)(*(_QWORD*)v10 + 112LL) != 0) {
        goto LABEL_24;
      }
    LABEL_17:
      result = GameRoutine_1257a20(*v5);
      if ((result & 1) != 0) {
        v14 = 3;
      }
      else {
        v14 = 2;
      }
      v10[9] = v14;
      if ((result & 1) == 0) {
        goto LABEL_4;
      }
      goto LABEL_68;
    }
    if (v13 - 4 < 2) {
      goto LABEL_67;
    }
    if (v13 != 7) {
      if (v13 != 6) {
        goto LABEL_4;
      }
      goto LABEL_17;
    }
    v24 = *(unsigned __int8*)(v12 + 113);
    if (v24 != 4) {
      if (v24 == 3) {
        result = GameRoutine_715440(result);
        if ((int)result < *(unsigned __int8*)(*(_QWORD*)v10 + 424LL) ||
            *(_BYTE*)(*(_QWORD*)v10 + 368LL) != 0 &&
                ((result = GameRoutine_1257a20((__int64)v10)) & 1) == 0) {
          v11 = (unsigned __int8)v10[9];
          if (v11 != 3) {
            goto LABEL_28;
          }
        }
        else {
          v10[9] = 3;
        }
        goto LABEL_4;
      }
      if (v24 != 2) {
        goto LABEL_4;
      }
      v10[9] = 4;
    LABEL_30:
      if ((unsigned __int64)v139 < v138) {
        *(_QWORD*)v139 = v10;
        v139 += 8;
        goto LABEL_4;
      }
      v15 = v139 - v140;
      v16 = (v139 - v140) >> 3;
      v17 = v16 + 1;
      if ((unsigned __int64)(v16 + 1) >> 61 == 0) {
        v18 = v4;
        v19 = v9;
        v20 = a4;
        v21 = v8;
        v137 = v7;
        if ((__int64)(v138 - (_QWORD)v140) >> 2 > v17) {
          v17 = (__int64)(v138 - (_QWORD)v140) >> 2;
        }
        if (v138 - (unsigned __int64)v140 >= 0x7FFFFFFFFFFFFFF8LL) {
          v22 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v17;
        }
        if (v22 != 0) {
          if (v22 >> 61 != 0) {
            goto LABEL_278;
          }
          v23 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
        }
        else {
          v23 = 0;
        }
        v25 = v23 + v15 - 8 * v16;
        *(_QWORD*)(v23 + v15) = v10;
        v138 = v23 + 8 * v22;
        v139 = (char*)(v23 + v15 + 8);
        result = memcpy(v25, v140, v15);
        if (v140 != nullptr) {
          v26 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v26 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
        }
        v140 = (char*)v25;
        v7 = v137;
        v8 = v21;
        a4 = v20;
        v9 = v19;
        v4 = v18;
        goto LABEL_4;
      }
    LABEL_277:
      GameRoutine_1267840();
    }
    v27 = *(unsigned __int16*)(v12 + 128);
    if (*(_WORD*)(v12 + 128) == 0) {
      goto LABEL_67;
    }
    v28 = 8;
    v134 = v4;
    v135 = v8;
    while (1) {
      result = game_gmap_SpotMgr_FindSpot(
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v10 + 136LL) + v28));
      if (result == 0) {
        goto LABEL_56;
      }
      result = GameRoutine_1326a40(result);
      if (result == 0) {
        goto LABEL_56;
      }
      v29 = v9;
      v30 = a4;
      v31 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        v33 = v7;
        v32 = 0;
        v34 = *(_QWORD*)(result + 8);
        if (v34 == 0) {
          goto LABEL_64;
        }
      LABEL_63:
        strchr(v34, 95);
        goto LABEL_64;
      }
      v32 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v33 = v7;
      v34 = *(_QWORD*)(result + 8);
      if (v34 != 0) {
        goto LABEL_63;
      }
    LABEL_64:
      v144 = game_util_Format(&GameData_1afaabd, v32);
      v143 = game_HashString(v144);
      result = game_GameVariableTable_Find(*(_QWORD*)(v31 + 48), &v143);
      if (result == 0) {
        break;
      }
      v7 = v33;
      a4 = v30;
      v9 = v29;
      v4 = v134;
      v8 = v135;
      if (*(_DWORD*)(result + 32) == 0) {
        goto LABEL_133;
      }
    LABEL_56:
      --v27;
      v28 += 16;
      if (v27 == 0) {
        goto LABEL_67;
      }
    }
    v7 = v33;
    a4 = v30;
    v9 = v29;
    v4 = v134;
    v8 = v135;
  LABEL_133:
    v11 = (unsigned __int8)v10[9];
    if (v11 != 2) {
    LABEL_28:
      if ((unsigned __int8)v11 == 3) {
        goto LABEL_68;
      }
      if ((unsigned __int8)v11 == 4) {
        goto LABEL_30;
      }
    }
  LABEL_4:
    if (++v5 != v4) {
      continue;
    }
    break;
  }
  if (v141 != v7) {
    result = GameRoutine_682bc0(v142, &GameData_1aed6ab);
    if (v142[0] != 0) {
      v63 = v8;
      v64 = *(_QWORD**)(GameData_21ca310 + 56);
      if (v64 != nullptr) {
        v65 = 250;
        while (1) {
          v66 = v64[55];
          if (v66 != 0 && *(_BYTE*)(v66 + 16) != 9 && v64[49] == v142[0]) {
            break;
          }
          v67 = v64[333];
          if (v67 != 0 && *(_BYTE*)(v67 + 16) != 9 && v64[327] == v142[0]) {
            v64 += 278;
            break;
          }
          v68 = v64[611];
          if (v68 != 0 && *(_BYTE*)(v68 + 16) != 9 && v64[605] == v142[0]) {
            v71 = 4448;
            goto LABEL_243;
          }
          v69 = v64[889];
          if (v69 != 0 && *(_BYTE*)(v69 + 16) != 9 && v64[883] == v142[0]) {
            v71 = 6672;
            goto LABEL_243;
          }
          v70 = v64[1167];
          if (v70 != 0 && *(_BYTE*)(v70 + 16) != 9 && v64[1161] == v142[0]) {
            v71 = 8896;
          LABEL_243:
            v64 = (_QWORD*)((char*)v64 + v71);
            break;
          }
          v64 += 1390;
          v65 -= 5;
          if (v65 == 0) {
            goto LABEL_267;
          }
        }
        v113 = 0;
        v114 = v7;
        do {
          v115 = *(_QWORD*)v114;
          v114 += 8;
          v113 |= *(_QWORD*)(*(_QWORD*)v115 + 544LL) != 0;
        } while (v114 != v141);
        if ((v113 & 1) != 0) {
          if (a2 != 0) {
            v116 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
            v117 = GameData_212c608[0];
            *(_QWORD*)(v116 + 88) = 0;
            *(_QWORD*)(v116 + 96) = 0;
            *(_QWORD*)(v116 + 104) = 0;
            *(_QWORD*)(v116 + 112) = 0;
            *(_QWORD*)(v116 + 120) = 0;
            *(_QWORD*)(v116 + 128) = 0;
            *(_WORD*)(v116 + 136) = 0;
            *(_QWORD*)(v116 + 16) = 0;
            *(_QWORD*)(v116 + 24) = "NULL";
            *(_QWORD*)(v116 + 32) = 0;
            v118 = (_QWORD*)(v116 + 32);
            *(_QWORD*)(v116 + 138) = 0;
            *(_QWORD*)(v116 + 144) = 0;
            *(_QWORD*)(v116 + 40) = 0;
            *(_QWORD*)(v116 + 48) = 0;
            *(_QWORD*)(v116 + 56) = 0;
            *(_QWORD*)(v116 + 64) = 0;
            *(_QWORD*)(v116 + 72) = 0;
            *(_QWORD*)(v116 + 80) = 0;
            *(_QWORD*)v116 = v117 + 16;
            *(_QWORD*)(v116 + 8) = 0;
            v119 = game_ProcInst_Register();
            *(_QWORD*)v116 = game_GameSubquestData_ProcLearnSkill_vtable;
            v120 = *(_QWORD*)v7;
            *(_QWORD*)(v116 + 168) = v141;
            *(_QWORD*)(v116 + 176) = v63;
            *(_DWORD*)(v116 + 184) = 0;
            *(_QWORD*)(v116 + 192) = v64;
            *(_BYTE*)(v116 + 200) = 0;
            *(_QWORD*)(v116 + 152) = v120;
            *(_QWORD*)(v116 + 160) = v7;
            GameRoutine_8679c0(v119);
            v121 = game_ProcGameSkipView_instance_;
            if (game_ProcGameSkipView_instance_ != 0) {
              v122 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
              if ((v122 & 0x10) == 0) {
                v123 = *(float*)(game_ProcGameSkipView_instance_ + 224);
                *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
                    v122 & 0xFFFFFFE2 | 1;
                if (v123 > 0.0) {
                  *(_DWORD*)(v121 + 224) = 0;
                }
              }
            }
            v124 = *(_QWORD*)(a2 + 40);
            v72 = v140;
            if (v124 != 0) {
              *(_QWORD*)(v124 + 48) = v116;
              *(_QWORD*)(v116 + 56) = *(_QWORD*)(a2 + 40);
            }
            *(_QWORD*)(a2 + 40) = v116;
            *(_QWORD*)(v116 + 24) = "ProcLearnSkill";
            *(_QWORD*)(v116 + 32) = a2;
            *(_DWORD*)(v116 + 140) = game_HashString32("ProcLearnSkill");
            *(_QWORD*)(v116 + 64) = 0;
            *(_QWORD*)(v116 + 72) = 24;
            *(_QWORD*)(v116 + 80) = 1;
            *(_QWORD*)(v116 + 8) = &GameData_21701d0;
            *(_QWORD*)(v116 + 16) = &GameData_21701d0;
            (*(void (**)(__int64))(*(_QWORD*)v116 + 32LL))(v116);
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v116 + 136LL))(v116);
            if ((result & 1) != 0 && (*(_WORD*)(v116 + 136) & 0x100) == 0) {
              *(_WORD*)(v116 + 136) |= 0x100u;
            }
            v125 = (_BYTE*)*v118;
            v126 = *(_BYTE*)(*v118 + 138LL);
            if (v126 == 0) {
              result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v125 + 64LL))(*v118);
              v126 = v125[138];
            }
            v7 = nullptr;
            v125[138] = v126 + 1;
            *(_WORD*)(v116 + 136) |= 2u;
            goto LABEL_268;
          }
          v127 = v7;
          do {
            v128 = *(__int64**)v127;
            result = GameRoutine_1260d00(*(_QWORD*)v127, v64);
            v129 = *v128;
            if (*(_BYTE*)(*v128 + 112) == 5 && *(_WORD*)(v129 + 552) != 0) {
              v130 = 8LL * *(unsigned __int16*)(v129 + 552);
              v131 = 0;
              do {
                v144 = *(_QWORD*)(*(_QWORD*)(v129 + 560) + v131);
                v143 = game_HashString(v144);
                result = game_VariableManager_SetFlag(&v143, 1);
                v131 += 8;
              } while (v130 != v131);
            }
            v127 += 8;
          } while (v127 != v141);
        }
      }
    }
  LABEL_267:
    v72 = v140;
    goto LABEL_268;
  }
  v72 = v140;
  if (v139 == v140) {
    goto LABEL_268;
  }
  if (a2 != 0) {
    v73 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         288, 16, 0);
    v74 = GameData_212c608[0];
    *(_QWORD*)(v73 + 88) = 0;
    *(_QWORD*)(v73 + 96) = 0;
    *(_QWORD*)(v73 + 104) = 0;
    *(_QWORD*)(v73 + 112) = 0;
    *(_QWORD*)(v73 + 120) = 0;
    *(_QWORD*)(v73 + 128) = 0;
    *(_WORD*)(v73 + 136) = 0;
    *(_QWORD*)(v73 + 32) = 0;
    *(_QWORD*)(v73 + 16) = 0;
    *(_QWORD*)(v73 + 24) = "NULL";
    *(_QWORD*)(v73 + 138) = 0;
    *(_QWORD*)(v73 + 144) = 0;
    *(_QWORD*)(v73 + 40) = 0;
    *(_QWORD*)(v73 + 48) = 0;
    *(_QWORD*)(v73 + 56) = 0;
    *(_QWORD*)(v73 + 64) = 0;
    *(_QWORD*)(v73 + 72) = 0;
    *(_QWORD*)(v73 + 80) = 0;
    *(_QWORD*)v73 = v74 + 16;
    *(_QWORD*)(v73 + 8) = 0;
    v75 = game_ProcInst_Register();
    *(_QWORD*)v73 = game_GameSubquestData_ProcReward_vtable;
    v76 = *(_QWORD*)v140;
    *(_DWORD*)(v73 + 184) = 0;
    *(_QWORD*)(v73 + 192) = 0;
    *(_QWORD*)(v73 + 200) = 0;
    *(_QWORD*)(v73 + 208) = 0;
    *(_QWORD*)(v73 + 256) = 0;
    *(_QWORD*)(v73 + 152) = v76;
    *(_QWORD*)(v73 + 160) = v140;
    *(_QWORD*)(v73 + 168) = v139;
    *(_QWORD*)(v73 + 176) = v138;
    *(_BYTE*)(v73 + 272) = 5;
    GameRoutine_8679c0(v75);
    v77 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v78 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v78 & 0x10) == 0) {
        v79 = *(float*)(game_ProcGameSkipView_instance_ + 224);
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
            v78 & 0xFFFFFFE2 | 1;
        if (v79 > 0.0) {
          *(_DWORD*)(v77 + 224) = 0;
        }
      }
    }
    v80 = *(_QWORD*)(a2 + 40);
    if (v80 != 0) {
      *(_QWORD*)(v80 + 48) = v73;
      *(_QWORD*)(v73 + 56) = *(_QWORD*)(a2 + 40);
    }
    *(_QWORD*)(a2 + 40) = v73;
    *(_QWORD*)(v73 + 24) = "ProcReward";
    *(_QWORD*)(v73 + 32) = a2;
    *(_DWORD*)(v73 + 140) = game_HashString32("ProcReward");
    *(_QWORD*)(v73 + 64) = 0;
    *(_QWORD*)(v73 + 72) = 24;
    *(_QWORD*)(v73 + 80) = 1;
    *(_QWORD*)(v73 + 8) = &GameData_2170390;
    *(_QWORD*)(v73 + 16) = &GameData_2170390;
    (*(void (**)(__int64))(*(_QWORD*)v73 + 32LL))(v73);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v73 + 136LL))(v73);
    if ((result & 1) != 0 && (*(_WORD*)(v73 + 136) & 0x100) == 0) {
      *(_WORD*)(v73 + 136) |= 0x100u;
    }
    v81 = *(_BYTE**)(v73 + 32);
    v82 = v81[138];
    if (v82 == 0) {
      result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v81 + 64LL))(v81);
      v82 = v81[138];
    }
    v81[138] = v82 + 1;
    *(_WORD*)(v73 + 136) |= 2u;
  }
  else {
    if (v140 != v139) {
      v83 = v140;
      v84 = (_QWORD**)GameData_212c7b0[0];
      do {
        v85 = *(__int64**)v83;
        GameRoutine_12645e0(*(_QWORD*)v83);
        v86 = *v85;
        if (*(_WORD*)(*v85 + 428) != 0) {
          GameRoutine_8b03f0(0);
          v86 = *v85;
        }
        v87 = *(unsigned __int8*)(v86 + 112);
        v88 = *(unsigned __int8*)(v86 + 113) - 3;
        if (v87 == 7 && v88 <= 1) {
          GameRoutine_682bc0(v142, &GameData_1a8d218);
          if (v142[0] != 0) {
            v90 = *(_QWORD**)(GameData_21ca310 + 56);
            if (v90 != nullptr) {
              v91 = 250;
              while (1) {
                v92 = v90[55];
                if (v92 != 0 && *(_BYTE*)(v92 + 16) != 9 &&
                    v90[49] == v142[0]) {
                  break;
                }
                v93 = v90[333];
                if (v93 != 0 && *(_BYTE*)(v93 + 16) != 9 &&
                    v90[327] == v142[0]) {
                  v90 += 278;
                  break;
                }
                v94 = v90[611];
                if (v94 != 0 && *(_BYTE*)(v94 + 16) != 9 &&
                    v90[605] == v142[0]) {
                  v102 = 4448;
                  goto LABEL_222;
                }
                v95 = v90[889];
                if (v95 != 0 && *(_BYTE*)(v95 + 16) != 9 &&
                    v90[883] == v142[0]) {
                  v102 = 6672;
                  goto LABEL_222;
                }
                v96 = v90[1167];
                if (v96 != 0 && *(_BYTE*)(v96 + 16) != 9 &&
                    v90[1161] == v142[0]) {
                  v102 = 8896;
                  goto LABEL_222;
                }
                v97 = v90[1445];
                if (v97 != 0 && *(_BYTE*)(v97 + 16) != 9 &&
                    v90[1439] == v142[0]) {
                  v102 = 11120;
                  goto LABEL_222;
                }
                v98 = v90[1723];
                if (v98 != 0 && *(_BYTE*)(v98 + 16) != 9 &&
                    v90[1717] == v142[0]) {
                  v102 = 13344;
                  goto LABEL_222;
                }
                v99 = v90[2001];
                if (v99 != 0 && *(_BYTE*)(v99 + 16) != 9 &&
                    v90[1995] == v142[0]) {
                  v102 = 15568;
                  goto LABEL_222;
                }
                v100 = v90[2279];
                if (v100 != 0 && *(_BYTE*)(v100 + 16) != 9 &&
                    v90[2273] == v142[0]) {
                  v102 = 17792;
                  goto LABEL_222;
                }
                v101 = v90[2557];
                if (v101 != 0 && *(_BYTE*)(v101 + 16) != 9 &&
                    v90[2551] == v142[0]) {
                  v102 = 20016;
                LABEL_222:
                  v90 = (_QWORD*)((char*)v90 + v102);
                  break;
                }
                v90 += 2780;
                v91 -= 10;
                if (v91 == 0) {
                  goto LABEL_228;
                }
              }
              if (*(_QWORD*)(*v85 + 544) != 0) {
                GameRoutine_1260d00(v85, v90);
                v103 = *v85;
                if (*(_BYTE*)(*v85 + 112) == 5 && *(_WORD*)(v103 + 552) != 0) {
                  v104 = 8LL * *(unsigned __int16*)(v103 + 552);
                  v105 = 0;
                  do {
                    v144 = *(_QWORD*)(*(_QWORD*)(v103 + 560) + v105);
                    v143 = game_HashString(v144);
                    game_VariableManager_SetFlag(&v143, 1);
                    v105 += 8;
                  } while (v104 != v105);
                }
              }
            }
          }
        }
      LABEL_228:
        result = (__int64)GameRoutine_1264da0(&v143, v85);
        v107 = v143;
        v106 = (__int64*)v144;
        for (i = (__int64*)v143; i != v106;
             result = game_VariableManager_SetFlag(v142, 1)) {
          v109 = *i++;
          v142[1] = v109;
          v142[0] = game_HashString(v109);
        }
        if (v107 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v110 = 128;
          }
          else {
            v110 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v110);
        }
        v111 = *v85;
        v72 = v140;
        v112 = *(_QWORD*)(v111 + 208);
        if (v112 != 0) {
          result = GameSubquestData_125b8e0(*v84, *(_QWORD*)(v112 + 8));
          if (result != 0 && (*(_BYTE*)(result + 9) & 0xFE) == 2) {
            *(_WORD*)(result + 9) = 261;
          }
        }
        v83 += 8;
      } while (v83 != v139);
    }
  LABEL_268:
    if (v72 != nullptr) {
      v132 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v132 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v132);
    }
  }
  if (v7 != nullptr) {
    v133 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v133 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v133);
  }
  return result;
}

__int64 GameSubquestData_125d1c0(__int64 a1, __int64 a2, __int64** a3)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  signed __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;

  v23 = nullptr;
  v4 = *a3;
  v3 = a3[1];
  v5 = (char*)v3 - (char*)*a3;
  v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v3 == *a3) {
    v9 = nullptr;
  }
  else {
    v21 = a2;
    if (v5 < 0) {
    LABEL_30:
      GameRoutine_1265540(a1);
    }
    v7 = (_QWORD*)a1;
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5, 16, 0);
    v9 = (__int64*)(v8 + v5);
    v10 = (__int64*)v8;
    v5 = v8;
    do {
      a1 = GameSubquestData_125b8e0(v7, *v4);
      if (a1 != 0) {
        if (v10 < v9) {
          *v10++ = a1;
        }
        else {
          v11 = (signed __int64)v10 - v5;
          v12 = ((__int64)v10 - v5) >> 3;
          v13 = v12 + 1;
          if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
            goto LABEL_30;
          }
          if (((__int64)v9 - v5) >> 2 > v13) {
            v13 = ((__int64)v9 - v5) >> 2;
          }
          if ((unsigned __int64)v9 - v5 >= 0x7FFFFFFFFFFFFFF8LL) {
            v14 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v14 = v13;
          }
          if (v14 != 0) {
            if (v14 >> 61 != 0) {
              GameRoutine_60a210(a1);
            }
            v15 = a1;
            v16 = fw_memory_HeapManager_Allocate(*v6, 8 * v14, 16, 0);
            a1 = v15;
          }
          else {
            v16 = 0;
          }
          v9 = (__int64*)(v16 + 8 * v14);
          v17 = v16 + v11 - 8 * v12;
          *(_QWORD*)(v16 + v11) = a1;
          v10 = (__int64*)(v16 + v11 + 8);
          a1 = memcpy(v17, v5, v11);
          if (v5 != 0) {
            v18 = 128;
            if (*(_QWORD*)(*v6 + 200LL) == 0) {
              v18 = 56;
            }
            a1 = nn_mem_StandardAllocator_Free(*v6 + v18);
          }
          v5 = v17;
        }
      }
      ++v4;
    } while (v4 != v3);
    a2 = v21;
    v23 = v10;
  }
  v24 = v9;
  v22 = (__int64*)v5;
  result = GameSubquestData_125c2c0(a1, a2, &v22, 0);
  if (v5 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*v6 + 200LL) == 0) {
      v20 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v6 + v20);
  }
  return result;
}

__int64 GameSubquestData_125d3e0(__int64 a1)
{
  unsigned int v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  unsigned __int64 v7;
  char* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  int v12;
  bool v13;
  signed __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  bool v19;
  signed __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 result;
  __int64 v24;
  __int64* v25;
  char* v26;
  unsigned __int64 v27;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = a1 + 136LL * v1;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      64, 16, 0);
  v5 = *(__int64**)(v3 + 72);
  v6 = *(__int64**)(v3 + 80);
  v7 = v4 + 64;
  v8 = (char*)v4;
  v26 = (char*)v4;
  if (v5 == v6) {
    v9 = (__int64*)v4;
  }
  else {
    v9 = (__int64*)v4;
    do {
      v10 = (__int64*)*v5;
      if ((*(_BYTE*)(*v5 + 9) & 0xFE) != 4) {
        v11 = *v10;
        v12 = *(unsigned __int8*)(*v10 + 112);
        v13 = *(_BYTE*)(*v10 + 112) == 0 || v12 == 6;
        if (v13 ||
            (v12 == 7 ? (v19 = *(_BYTE*)(v11 + 113) == 3) : (v19 = false),
             v19 && *(_BYTE*)(v11 + 368) != 0)) {
          if ((unsigned __int64)v8 < v7) {
            *(_QWORD*)v8 = v10;
            v8 += 8;
          }
          else {
            v14 = v8 - (char*)v9;
            v15 = (v8 - (char*)v9) >> 3;
            v16 = v15 + 1;
            if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
              GameRoutine_1265540(v4);
            }
            if ((__int64)(v7 - (_QWORD)v9) >> 2 > v16) {
              v16 = (__int64)(v7 - (_QWORD)v9) >> 2;
            }
            if (v7 - (unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
              v17 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v17 = v16;
            }
            if (v17 != 0) {
              if (v17 >> 61 != 0) {
                GameRoutine_60a210(v4);
              }
              v18 = fw_memory_HeapManager_Allocate(*v2, 8 * v17, 16, 0);
            }
            else {
              v18 = 0;
            }
            v7 = v18 + 8 * v17;
            v20 = v8 - (char*)v9;
            v21 = v18 + v14 - 8 * v15;
            *(_QWORD*)(v18 + v14) = v10;
            v8 = (char*)(v18 + v14 + 8);
            v4 = memcpy(v21, v9, v20);
            if (v9 != nullptr) {
              v22 = 128;
              if (*(_QWORD*)(*v2 + 200LL) == 0) {
                v22 = 56;
              }
              v4 = nn_mem_StandardAllocator_Free(*v2 + v22);
            }
            v9 = (__int64*)v21;
          }
        }
      }
      ++v5;
    } while (v5 != v6);
    v26 = v8;
  }
  v27 = v7;
  v25 = v9;
  result = GameSubquestData_125c2c0(v4, 0, &v25, 1);
  if (v9 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v24 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v2 + v24);
  }
  return result;
}

__int64 GameSubquestData_125d600(__int64 a1)
{
  unsigned int v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  unsigned __int64 v7;
  char* v8;
  __int64* v9;
  __int64 v10;
  signed __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  signed __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64* v22;
  char* v23;
  unsigned __int64 v24;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = a1 + 136LL * v1;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      64, 16, 0);
  v5 = *(__int64**)(v3 + 72);
  v6 = *(__int64**)(v3 + 80);
  v7 = v4 + 64;
  v8 = (char*)v4;
  v23 = (char*)v4;
  if (v5 == v6) {
    v9 = (__int64*)v4;
  }
  else {
    v9 = (__int64*)v4;
    do {
      v10 = *v5;
      if ((*(_BYTE*)(*v5 + 9) & 0xFE) != 4 &&
          *(_BYTE*)(*(_QWORD*)v10 + 112LL) == 7 &&
          *(_BYTE*)(*(_QWORD*)v10 + 113LL) == 3) {
        if ((unsigned __int64)v8 < v7) {
          *(_QWORD*)v8 = v10;
          v8 += 8;
        }
        else {
          v12 = v8 - (char*)v9;
          v13 = (v8 - (char*)v9) >> 3;
          v14 = v13 + 1;
          if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
            GameRoutine_1265540(v4);
          }
          if ((__int64)(v7 - (_QWORD)v9) >> 2 > v14) {
            v14 = (__int64)(v7 - (_QWORD)v9) >> 2;
          }
          if (v7 - (unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v15 = v14;
          }
          if (v15 != 0) {
            if (v15 >> 61 != 0) {
              GameRoutine_60a210(v4);
            }
            v16 = fw_memory_HeapManager_Allocate(*v2, 8 * v15, 16, 0);
          }
          else {
            v16 = 0;
          }
          v7 = v16 + 8 * v15;
          v17 = v8 - (char*)v9;
          v18 = v16 + v12 - 8 * v13;
          *(_QWORD*)(v16 + v12) = v10;
          v8 = (char*)(v16 + v12 + 8);
          v4 = memcpy(v18, v9, v17);
          if (v9 != nullptr) {
            v19 = 128;
            if (*(_QWORD*)(*v2 + 200LL) == 0) {
              v19 = 56;
            }
            v4 = nn_mem_StandardAllocator_Free(*v2 + v19);
          }
          v9 = (__int64*)v18;
        }
      }
      ++v5;
    } while (v5 != v6);
    v23 = v8;
  }
  v24 = v7;
  v22 = v9;
  result = GameSubquestData_125c2c0(v4, 0, &v22, 0);
  if (v9 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v21 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v2 + v21);
  }
  return result;
}

__int64 GameSubquestData_125d800(__int64 a1, __int64 a2)
{
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64** v6;
  __int64** v7;
  unsigned __int64 v8;
  char* v9;
  __int64* v10;
  __int64* v11;
  unsigned int v12;
  bool v13;
  int v14;
  signed __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  signed __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 result;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  char* v28;
  unsigned __int64 v29;

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v4 = a1 + 136LL * v3;
  v5 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 32, 16, 0);
  v6 = *(__int64***)(v4 + 72);
  v7 = *(__int64***)(v4 + 80);
  v8 = v5 + 32;
  v9 = (char*)v5;
  v28 = (char*)v5;
  if (v6 == v7) {
    v10 = (__int64*)v5;
  }
  else {
    v26 = a2;
    v10 = (__int64*)v5;
    do {
      v11 = *v6;
      v12 = *((unsigned __int8*)*v6 + 9);
      v13 = v12 > 5;
      v14 = (1 << v12) & 0x31;
      if (v13 || v14 == 0) {
        v5 = GameRoutine_12571e0(*v6);
        if ((v5 & 1) != 0) {
          if ((unsigned __int64)v9 < v8) {
            *(_QWORD*)v9 = v11;
            v9 += 8;
          }
          else {
            v16 = v9 - (char*)v10;
            v17 = (v9 - (char*)v10) >> 3;
            v18 = v17 + 1;
            if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
              GameRoutine_1265540(v5);
            }
            if ((__int64)(v8 - (_QWORD)v10) >> 2 > v18) {
              v18 = (__int64)(v8 - (_QWORD)v10) >> 2;
            }
            if (v8 - (unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
              v19 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v19 = v18;
            }
            if (v19 != 0) {
              if (v19 >> 61 != 0) {
                GameRoutine_60a210(v5);
              }
              v20 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
            }
            else {
              v20 = 0;
            }
            v8 = v20 + 8 * v19;
            v21 = v9 - (char*)v10;
            v22 = v20 + v16 - 8 * v17;
            *(_QWORD*)(v20 + v16) = v11;
            v9 = (char*)(v20 + v16 + 8);
            v5 = memcpy(v22, v10, v21);
            if (v10 != nullptr) {
              v23 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v23 = 56;
              }
              v5 = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
            }
            v10 = (__int64*)v22;
          }
        }
      }
      ++v6;
    } while (v6 != v7);
    a2 = v26;
    v28 = v9;
  }
  v29 = v8;
  v27 = v10;
  result = GameSubquestData_125c2c0(v5, a2, &v27, 0);
  if (v10 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
  }
  return result;
}

__int64 GameSubquestData_125da40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  unsigned __int64 v10;
  char* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  int v15;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  signed __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  signed __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 result;
  __int64 v29;
  __int64* v30;
  char* v31;
  unsigned __int64 v32;

  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = a1 + 136LL * v5;
  v7 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 64, 16, 0);
  v8 = *(__int64**)(v6 + 72);
  v9 = *(__int64**)(v6 + 80);
  v10 = v7 + 64;
  v11 = (char*)v7;
  v31 = (char*)v7;
  if (v8 == v9) {
    v12 = (__int64*)v7;
  }
  else {
    v12 = (__int64*)v7;
    do {
      v13 = (__int64*)*v8;
      if ((*(_BYTE*)(*v8 + 9) & 0xFE) != 4) {
        v14 = *v13;
        if (*(_BYTE*)(*v13 + 112) == 7) {
          v15 = *(unsigned __int8*)(v14 + 113);
          if (v15 == 4 || v15 == 2) {
            v17 = *(unsigned __int16*)(v14 + 128);
            if (*(_WORD*)(v14 + 128) != 0) {
              v18 = (__int64*)(*(_QWORD*)(v14 + 136) + 8LL);
              while (1) {
                v19 = *v18;
                v18 += 2;
                v7 = game_gmap_SpotMgr_FindSpot(v19);
                if (a3 == v7) {
                  break;
                }
                if (--v17 == 0) {
                  goto LABEL_6;
                }
              }
              if ((unsigned __int64)v11 < v10) {
                *(_QWORD*)v11 = v13;
                v11 += 8;
              }
              else {
                v20 = v11 - (char*)v12;
                v21 = (v11 - (char*)v12) >> 3;
                v22 = v21 + 1;
                if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
                  GameRoutine_1265540(v7);
                }
                if ((__int64)(v10 - (_QWORD)v12) >> 2 > v22) {
                  v22 = (__int64)(v10 - (_QWORD)v12) >> 2;
                }
                if (v10 - (unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v23 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v23 = v22;
                }
                if (v23 != 0) {
                  if (v23 >> 61 != 0) {
                    GameRoutine_60a210(v7);
                  }
                  v24 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
                }
                else {
                  v24 = 0;
                }
                v10 = v24 + 8 * v23;
                v25 = v11 - (char*)v12;
                v26 = v24 + v20 - 8 * v21;
                *(_QWORD*)(v24 + v20) = v13;
                v11 = (char*)(v24 + v20 + 8);
                v7 = memcpy(v26, v12, v25);
                if (v12 != nullptr) {
                  v27 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v27 = 56;
                  }
                  v7 = nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
                }
                v12 = (__int64*)v26;
              }
            }
          }
        }
      }
    LABEL_6:
      ++v8;
    } while (v8 != v9);
    v31 = v11;
  }
  v32 = v10;
  v30 = v12;
  result = GameSubquestData_125c2c0(v7, a2, &v30, 0);
  if (v12 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
  }
  return result;
}

void GameSubquestData_125dfc0(__int64 a1, unsigned __int8* a2)
{
  unsigned int v2;
  _QWORD* v4;
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

  v2 = a2[9];
  if (v2 > 2) {
    goto LABEL_33;
  }
  if (*(_BYTE*)(*(_QWORD*)a2 + 112LL) == 5) {
    GameRoutine_682bc0(&v15, &GameData_1aed6ab);
    if (v15 != 0) {
      v4 = *(_QWORD**)(GameData_21ca310 + 56);
      if (v4 != nullptr) {
        v5 = 250;
        while (1) {
          v6 = v4[55];
          if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 && v4[49] == v15) {
            goto LABEL_28;
          }
          v7 = v4[333];
          if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && v4[327] == v15) {
            v4 += 278;
            goto LABEL_28;
          }
          v8 = v4[611];
          if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && v4[605] == v15) {
            break;
          }
          v9 = v4[889];
          if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && v4[883] == v15) {
            v11 = 6672;
            goto LABEL_27;
          }
          v10 = v4[1167];
          if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && v4[1161] == v15) {
            v11 = 8896;
          LABEL_27:
            v4 = (_QWORD*)((char*)v4 + v11);
            goto LABEL_28;
          }
          v4 += 1390;
          v5 -= 5;
          if (v5 == 0) {
            goto LABEL_23;
          }
        }
        v11 = 4448;
        goto LABEL_27;
      }
    }
    else {
    LABEL_23:
      v4 = nullptr;
    }
  LABEL_28:
    GameRoutine_1260d00(a2, v4);
    v12 = *(_QWORD*)a2;
    if (*(_BYTE*)(*(_QWORD*)a2 + 112LL) == 5 && *(_WORD*)(v12 + 552) != 0) {
      v13 = 8LL * *(unsigned __int16*)(v12 + 552);
      v14 = 0;
      do {
        v17 = *(_QWORD*)(*(_QWORD*)(v12 + 560) + v14);
        v16 = game_HashString(v17);
        game_VariableManager_SetFlag(&v16, 1);
        v14 += 8;
      } while (v13 != v14);
    }
    v2 = a2[9];
  LABEL_33:
    if (v2 > 3) {
      return;
    }
  }
  a2[9] = 4;
  GameRoutine_125e1a0(a2);
}

__int64 GameSubquestData_125e460(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned int v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  char* v9;
  char* v10;
  unsigned __int64 v11;
  _QWORD* v12;
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
  int v26;
  float v27;
  __int64 v28;
  __int64 v29;

  result = GameRoutine_9a28e0(15);
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), result);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      v5 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
      }
      v6 = a1 + 136LL * v5;
      v7 = *(__int64**)(v6 + 72);
      v8 = *(__int64**)(v6 + 80);
      if (v7 != v8) {
        v29 = a2;
        v9 = nullptr;
        v10 = nullptr;
        v11 = 0;
        v12 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        do {
          v13 = *v7;
          if ((*(_BYTE*)(*v7 + 11) & 6) == 2) {
            if ((unsigned __int64)v10 < v11) {
              *(_QWORD*)v10 = v13;
              v10 += 8;
            }
            else {
              v14 = (char*)(v10 - v9);
              v15 = (v10 - v9) >> 3;
              v16 = v15 + 1;
              if ((unsigned __int64)(v15 + 1) >> 61 != 0) {
                GameRoutine_1265540(result);
              }
              if ((__int64)(v11 - (_QWORD)v9) >> 2 > v16) {
                v16 = (__int64)(v11 - (_QWORD)v9) >> 2;
              }
              if (v11 - (unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
                v17 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v17 = v16;
              }
              if (v17 != 0) {
                if (v17 >> 61 != 0) {
                  GameRoutine_60a210(result);
                }
                v18 = fw_memory_HeapManager_Allocate(*v12, 8 * v17, 16, 0);
              }
              else {
                v18 = 0;
              }
              v11 = v18 + 8 * v17;
              v19 = (char*)(v10 - v9);
              v20 = (__int64)&v14[v18 + -8 * v15];
              *(_QWORD*)&v14[v18] = v13;
              v10 = &v14[v18 + 8];
              result = memcpy(v20, v9, v19);
              if (v9 != nullptr) {
                v21 = 128;
                if (*(_QWORD*)(*v12 + 200LL) == 0) {
                  v21 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*v12 + v21);
              }
              v9 = (char*)v20;
            }
          }
          ++v7;
        } while (v7 != v8);
        if (v10 == v9) {
          if (v10 != nullptr) {
            v28 = 128;
            if (*(_QWORD*)(*v12 + 200LL) == 0) {
              v28 = 56;
            }
            return nn_mem_StandardAllocator_Free(*v12 + v28);
          }
        }
        else {
          v22 = fw_memory_HeapManager_Allocate(*v12, 256, 16, 0);
          v23 = GameData_212c608[0];
          *(_QWORD*)(v22 + 96) = 0;
          *(_QWORD*)(v22 + 104) = 0;
          *(_QWORD*)(v22 + 112) = 0;
          *(_QWORD*)(v22 + 120) = 0;
          *(_QWORD*)(v22 + 128) = 0;
          *(_WORD*)(v22 + 136) = 0;
          *(_QWORD*)(v22 + 16) = 0;
          *(_QWORD*)(v22 + 24) = "NULL";
          *(_QWORD*)(v22 + 138) = 0;
          *(_QWORD*)(v22 + 144) = 0;
          *(_QWORD*)(v22 + 32) = 0;
          *(_QWORD*)(v22 + 40) = 0;
          *(_QWORD*)(v22 + 48) = 0;
          *(_QWORD*)(v22 + 56) = 0;
          *(_QWORD*)(v22 + 64) = 0;
          *(_QWORD*)(v22 + 72) = 0;
          *(_QWORD*)(v22 + 80) = 0;
          *(_QWORD*)(v22 + 88) = 0;
          *(_QWORD*)v22 = v23 + 16;
          *(_QWORD*)(v22 + 8) = 0;
          v24 = game_ProcInst_Register();
          *(_QWORD*)(v22 + 152) = v9;
          *(_QWORD*)(v22 + 160) = v10;
          *(_QWORD*)(v22 + 168) = v11;
          *(_QWORD*)(v22 + 176) = 0;
          *(_QWORD*)(v22 + 184) = 0;
          *(_QWORD*)(v22 + 192) = 0;
          *(_QWORD*)(v22 + 200) = 0;
          *(_QWORD*)(v22 + 208) = 0;
          *(_QWORD*)(v22 + 216) = 0;
          *(_QWORD*)(v22 + 224) = 0;
          *(_QWORD*)(v22 + 232) = 0;
          *(_QWORD*)(v22 + 240) = 0;
          *(_QWORD*)(v22 + 248) = 0;
          *(_QWORD*)v22 = game_GameSubquestData_ProcRewardForSharedComp_vtable;
          GameRoutine_8679c0(v24);
          v25 = game_ProcGameSkipView_instance_;
          if (game_ProcGameSkipView_instance_ != 0) {
            v26 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
            if ((v26 & 0x10) == 0) {
              v27 = *(float*)(game_ProcGameSkipView_instance_ + 224);
              *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
                  v26 & 0xFFFFFFE2 | 1;
              if (v27 > 0.0) {
                *(_DWORD*)(v25 + 224) = 0;
              }
            }
          }
          return GameRoutine_657850(v22, &GameData_2170710,
                                    "ProcRewardForSharedComp", 1, v29);
        }
      }
    }
  }
  return result;
}

__int64 GameSubquestData_125e760(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  char v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* v43;

  v3 = a2;
  if (a3 != nullptr) {
    a3[1] = *a3;
    v5 = *(unsigned __int16*)(*(_QWORD*)a2 + 128LL);
    if (*(_WORD*)(*(_QWORD*)a2 + 128LL) != 0) {
      v6 = 8;
      v7 = 0;
      v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      do {
        v10 = game_gmap_SpotMgr_FindSpot(
            *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 136LL) + v6));
        if (v10 != 0) {
          v11 = v10;
          if (*(_BYTE*)(v10 + 176) != 3 || *(_BYTE*)(v10 + 112) != 0) {
            v13 = *(_QWORD*)(v10 + 120);
            v14 = (_QWORD*)fw_memory_HeapManager_Allocate(*v8, 8, 16, 0);
            v41 = v14;
            *v14 = v13;
            v42 = v14 + 1;
            v43 = v14 + 1;
            v15 = GameRoutine_1332f00(&v41);
            if (v41 != nullptr) {
              v16 = *v8;
              v42 = v41;
              if (*(_QWORD*)(v16 + 200) != 0) {
                v17 = 128;
              }
              else {
                v17 = 56;
              }
              v15 = nn_mem_StandardAllocator_Free(v16 + v17);
            }
            v19 = (__int64*)a3[1];
            v18 = a3[2];
            if ((unsigned __int64)v19 < v18) {
              *v19 = v11;
              v9 = (__int64)(v19 + 1);
            }
            else {
              v20 = *a3;
              v21 = v8;
              v22 = (__int64)v19 - *a3;
              v23 = (v22 >> 3) + 1;
              if (v23 >> 61 != 0) {
                GameRoutine_12680d0(v15);
              }
              v24 = v18 - v20;
              if (v24 >> 2 > v23) {
                v23 = v24 >> 2;
              }
              if ((unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
                v25 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v25 = v23;
              }
              if (v25 != 0) {
                if (v25 >> 61 != 0) {
                  GameRoutine_60a210(v15);
                }
                v26 = fw_memory_HeapManager_Allocate(*v21, 8 * v25, 16, 0);
              }
              else {
                v26 = 0;
              }
              v27 = v26 + 8 * v25;
              v28 = v26 + v22 - 8 * (v22 >> 3);
              *(_QWORD*)(v26 + v22) = v11;
              v9 = v26 + v22 + 8;
              memcpy(v28, v20, v22);
              *a3 = v28;
              a3[1] = v9;
              a3[2] = v27;
              if (v20 != 0) {
                v8 = v21;
                if (*(_QWORD*)(*v21 + 200LL) != 0) {
                  v29 = 128;
                }
                else {
                  v29 = 56;
                }
                nn_mem_StandardAllocator_Free(*v21 + v29);
                v3 = a2;
              }
              else {
                v8 = v21;
                v3 = a2;
              }
            }
            v7 = 1;
            a3[1] = v9;
          }
        }
        --v5;
        v6 += 16;
      } while (v5 != 0);
      return v7 & 1;
    }
  LABEL_48:
    v7 = 0;
    return v7 & 1;
  }
  v30 = *(unsigned __int16*)(*(_QWORD*)a2 + 128LL);
  if (*(_WORD*)(*(_QWORD*)a2 + 128LL) == 0) {
    goto LABEL_48;
  }
  v31 = 8;
  v7 = 0;
  v32 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  do {
    v33 = game_gmap_SpotMgr_FindSpot(
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v3 + 136LL) + v31));
    if (v33 != 0 && (*(_BYTE*)(v33 + 176) != 3 || *(_BYTE*)(v33 + 112) != 0)) {
      v35 = *(_QWORD*)(v33 + 120);
      v36 = (_QWORD*)fw_memory_HeapManager_Allocate(*v32, 8, 16, 0);
      v41 = v36;
      *v36 = v35;
      v42 = v36 + 1;
      v43 = v36 + 1;
      GameRoutine_1332f00(&v41);
      if (v41 != nullptr) {
        v37 = *v32;
        v42 = v41;
        if (*(_QWORD*)(v37 + 200) != 0) {
          v38 = 128;
        }
        else {
          v38 = 56;
        }
        nn_mem_StandardAllocator_Free(v37 + v38);
      }
      v7 = 1;
    }
    --v30;
    v31 += 16;
  } while (v30 != 0);
  return v7 & 1;
}

__int64 GameSubquestData_125ea20()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;

  v0 = game_HashString(&GameData_1ae67be);
  if (v0 == 0) {
    return 0;
  }
  v1 = *(_QWORD*)(GameData_21ca050 + 96);
  if (v1 == 0 || *(_QWORD*)(GameData_21ca050 + 112) == 0) {
    return 0;
  }
  v3 = v1 - 1;
  if ((v1 & (v1 - 1)) != 0) {
    v4 = v0;
    if (v0 >= v1) {
      v4 = v0 % v1;
    }
  }
  else {
    v4 = v3 & v0;
  }
  v5 = *(_QWORD**)(*(_QWORD*)(GameData_21ca050 + 88) + 8 * v4);
  if (v5 == nullptr) {
    return 0;
  }
  v6 = (_QWORD*)*v5;
  if (v6 == nullptr) {
    return 0;
  }
  if ((v1 & v3) == 0) {
    while (1) {
      v9 = v6[1];
      if (v9 == v0) {
        if (v6[2] == v0) {
          goto LABEL_26;
        }
      }
      else if ((v9 & v3) != v4) {
        return 0;
      }
      v6 = (_QWORD*)*v6;
      v8 = 0;
      if (v6 == nullptr) {
        return v8;
      }
    }
  }
  while (1) {
    v7 = v6[1];
    if (v7 == v0) {
      break;
    }
    if (v7 >= v1) {
      v7 %= v1;
    }
    if (v7 != v4) {
      return 0;
    }
  LABEL_15:
    v6 = (_QWORD*)*v6;
    if (v6 == nullptr) {
      return 0;
    }
  }
  if (v6[2] != v0) {
    goto LABEL_15;
  }

LABEL_26:
  v10 = v6[3];
  if (v10 == 0) {
    return 0;
  }
  v11 = *(__int64***)(v10 + 40);
  v12 = *v11;
  v13 = v11[1];
  if (*v11 == v13) {
    return 0;
  }
  v14 = 0x7FFFFFFF;
  v15 = 0;
  do {
    v16 = *v12;
    if (*(_WORD*)(*v12 + 40) != 0) {
      v17 = 8LL * *(unsigned __int16*)(*v12 + 40);
      v18 = 0;
      while (1) {
        v19 = *(_QWORD*)(v16 + 48);
        v23 = *(_QWORD*)(v19 + v18);
        v22 = game_HashString(v23);
        if ((game_GameModeData_instance_ == 0 ||
             (v20 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), &v22)) == 0 ||
             *(_DWORD*)(v20 + 32) == 0) &&
            v14 > *(unsigned __int8*)(v16 + 32)) {
          break;
        }
        v18 += 8;
        if (v17 == v18) {
          goto LABEL_30;
        }
      }
      v15 = *(_QWORD*)(v19 + v18);
      v14 = *(unsigned __int8*)(v16 + 32);
    }
  LABEL_30:
    ++v12;
  } while (v12 != v13);
  v22 = v15;
  if (v15 == 0) {
    return 0;
  }
  return JobFile_676ef0(&v22);
}

__int64 GameSubquestData_125ec20(__int64 result, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  char v8;
  int v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[2];
  _QWORD* v18;
  __int64 v19;
  int v20;

  v18 = nullptr;
  v19 = 0;
  v17[0] = 0;
  v17[1] = 0;
  v20 = 1065353216;
  if (result != a2) {
    v3 = result;
    v4 = game_TransporterConst_List_instance__ptr[0];
    do {
      result = *(unsigned int*)(v3 + 8);
      if ((result & 0x80000000) == 0) {
        if (*(_QWORD*)v3 != 0) {
          v5 = *(_QWORD*)v3 + 8 * result;
          if (*(_WORD*)(v5 + 828) != 0) {
            *(_QWORD*)(v5 + 828) = 0;
            result = GameRoutine_8f7120(v17, v3, v3);
          }
        }
        else if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 8LL) +
                           12LL * (unsigned int)result + 4) != 0) {
          result = (__int64)GameRoutine_89cb30(&v16);
        }
      }
      v3 += 16;
    } while (v3 != a2);
    v6 = v18;
    if (v18 != nullptr) {
      do {
        v7 = v6[2];
        v8 = game_UnitItemList_Sort(v7 + 828, 0, 6);
        result = game_UnitItemList_Sort(v7 + 828, 6, 24);
        if ((v8 & 1) != 0 || (result & 1) != 0) {
          v9 = *(_DWORD*)(v7 + 416);
          if ((v9 & 0x10000000) == 0) {
            *(_DWORD*)(v7 + 416) = v9 | 0x10000000;
            GameRoutine_6c51e0(v7);
            GameRoutine_6c6da0(v7);
            result = GameRoutine_6c6ec0(v7);
            *(_DWORD*)(v7 + 416) &= ~0x10000000u;
          }
        }
        v6 = (_QWORD*)*v6;
      } while (v6 != nullptr);
      v10 = v18;
      if (v18 != nullptr) {
        v11 = fw_memory_g_heap_manager_ptr;
        do {
          v12 = (_QWORD*)*v10;
          if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
            v13 = 128;
          }
          else {
            v13 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v13);
          v10 = v12;
        } while (v12 != nullptr);
      }
    }
    v14 = v17[0];
    v17[0] = 0;
    if (v14 != 0) {
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
    }
  }
  return result;
}

__int64 GameSubquestData_Unknown8(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  __int64 v16;
  char v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  unsigned int* v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* i;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64* j;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64* k;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  __int64* m;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  int v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64* v112;
  __int64* n;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  int v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64* v133;
  __int64* ii;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  int v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64* v154;
  __int64* jj;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  int v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64* v175;
  __int64* kk;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  int v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  unsigned __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64* v196;
  __int64* mm;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  int v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  unsigned __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64* v217;
  __int64* nn;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  int v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  unsigned __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64* v238;
  __int64* i1;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  int v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;

  v3 = *(_QWORD*)(a2 + 8);
  v2 = a2 + 8;
  v4 = *(_DWORD*)(result + 24);
  v5 = (int*)(v2 + 12);
  v6 = *(int*)(v2 + 12);
  *(_DWORD*)(v2 + 12) = v6 + 1;
  *(_BYTE*)(v3 + v6) = v4;
  v7 = *(int*)(v2 + 12);
  *(_DWORD*)(v2 + 12) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v7) = BYTE1(v4);
  v8 = *(int*)(v2 + 12);
  *(_DWORD*)(v2 + 12) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v8) = BYTE2(v4);
  v9 = *(int*)(v2 + 12);
  *(_DWORD*)(v2 + 12) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v9) = HIBYTE(v4);
  if (*(_DWORD*)(result + 24) != 0) {
    v10 = 0;
    v11 = 0;
    do {
      v21 = *(_QWORD*)(result + 16);
      v22 = *(unsigned int**)(v21 + v10);
      v23 = *v5;
      if (v22 != nullptr) {
        v24 = *v22;
        *v5 = v23 + 1;
        *(_BYTE*)(*(_QWORD*)v2 + v23) = v24;
        v25 = *v5;
        *v5 = v25 + 1;
        *(_BYTE*)(*(_QWORD*)v2 + v25) = BYTE1(v24);
        v26 = HIWORD(v24);
        LODWORD(v22) = HIBYTE(v24);
        v27 = *v5;
        *v5 = v27 + 1;
        *(_BYTE*)(*(_QWORD*)v2 + v27) = v26;
      }
      else {
        *v5 = v23 + 1;
        *(_BYTE*)(*(_QWORD*)v2 + v23) = 0;
        v12 = *v5;
        *v5 = v12 + 1;
        *(_BYTE*)(*(_QWORD*)v2 + v12) = 0;
        v13 = *v5;
        *v5 = v13 + 1;
        *(_BYTE*)(*(_QWORD*)v2 + v13) = 0;
      }
      v14 = *v5;
      v15 = (_BYTE*)(v21 + v10);
      ++v11;
      v10 += 16;
      *v5 = v14 + 1;
      *(_BYTE*)(*(_QWORD*)v2 + v14) = (_BYTE)v22;
      v16 = *v5;
      v17 = v15[8];
      *v5 = v16 + 1;
      *(_BYTE*)(*(_QWORD*)v2 + v16) = v17;
      v18 = *v5;
      v19 = v15[9];
      *v5 = v18 + 1;
      *(_BYTE*)(*(_QWORD*)v2 + v18) = v19;
      v20 = *v5;
      LOBYTE(v15) = v15[11];
      *v5 = v20 + 1;
      *(_BYTE*)(*(_QWORD*)v2 + v20) = (_BYTE)v15;
    } while (v11 < *(unsigned int*)(result + 24));
  }
  v28 = *v5;
  v29 = *(_QWORD*)(result + 1440) - *(_QWORD*)(result + 1432);
  *v5 = v28 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v28) = v29 >> 3;
  v30 = *v5;
  *v5 = v30 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v30) = v29 >> 11;
  v31 = *v5;
  *v5 = v31 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v31) = v29 >> 19;
  v32 = *v5;
  *v5 = v32 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v32) = v29 >> 27;
  v33 = *(__int64**)(result + 1432);
  for (i = *(__int64**)(result + 1440); v33 != i;
       *(_BYTE*)(*(_QWORD*)v2 + v43) = HIBYTE(v36)) {
    v35 = *v5;
    v36 = *v33++;
    *v5 = v35 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v35) = v36;
    v37 = *v5;
    *v5 = v37 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v37) = BYTE1(v36);
    v38 = *v5;
    *v5 = v38 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v38) = BYTE2(v36);
    v39 = *v5;
    *v5 = v39 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v39) = BYTE3(v36);
    v40 = *v5;
    *v5 = v40 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v40) = BYTE4(v36);
    v41 = *v5;
    *v5 = v41 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v41) = BYTE5(v36);
    v42 = *v5;
    *v5 = v42 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v42) = BYTE6(v36);
    v43 = *v5;
    *v5 = v43 + 1;
  }
  v44 = *v5;
  v45 = *(_QWORD*)(result + 176) - *(_QWORD*)(result + 168);
  *v5 = v44 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v44) = v45 >> 3;
  v46 = *v5;
  *v5 = v46 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v46) = v45 >> 11;
  v47 = *v5;
  *v5 = v47 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v47) = v45 >> 19;
  v48 = *v5;
  *v5 = v48 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v48) = v45 >> 27;
  v49 = *(__int64**)(result + 168);
  for (j = *(__int64**)(result + 176); v49 != j;
       *(_BYTE*)(*(_QWORD*)v2 + v59) = HIBYTE(v52)) {
    v51 = *v5;
    v52 = *v49++;
    *v5 = v51 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v51) = v52;
    v53 = *v5;
    *v5 = v53 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v53) = BYTE1(v52);
    v54 = *v5;
    *v5 = v54 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v54) = BYTE2(v52);
    v55 = *v5;
    *v5 = v55 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v55) = BYTE3(v52);
    v56 = *v5;
    *v5 = v56 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v56) = BYTE4(v52);
    v57 = *v5;
    *v5 = v57 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v57) = BYTE5(v52);
    v58 = *v5;
    *v5 = v58 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v58) = BYTE6(v52);
    v59 = *v5;
    *v5 = v59 + 1;
  }
  v60 = *v5;
  v61 = *(_DWORD*)(result + 200);
  *v5 = v60 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v60) = v61;
  v62 = *v5;
  *v5 = v62 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v62) = BYTE1(v61);
  v63 = *v5;
  *v5 = v63 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v63) = BYTE2(v61);
  v64 = *v5;
  *v5 = v64 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v64) = HIBYTE(v61);
  v65 = *v5;
  v66 = *(_QWORD*)(result + 312) - *(_QWORD*)(result + 304);
  *v5 = v65 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v65) = v66 >> 3;
  v67 = *v5;
  *v5 = v67 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v67) = v66 >> 11;
  v68 = *v5;
  *v5 = v68 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v68) = v66 >> 19;
  v69 = *v5;
  *v5 = v69 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v69) = v66 >> 27;
  v70 = *(__int64**)(result + 304);
  for (k = *(__int64**)(result + 312); v70 != k;
       *(_BYTE*)(*(_QWORD*)v2 + v80) = HIBYTE(v73)) {
    v72 = *v5;
    v73 = *v70++;
    *v5 = v72 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v72) = v73;
    v74 = *v5;
    *v5 = v74 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v74) = BYTE1(v73);
    v75 = *v5;
    *v5 = v75 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v75) = BYTE2(v73);
    v76 = *v5;
    *v5 = v76 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v76) = BYTE3(v73);
    v77 = *v5;
    *v5 = v77 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v77) = BYTE4(v73);
    v78 = *v5;
    *v5 = v78 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v78) = BYTE5(v73);
    v79 = *v5;
    *v5 = v79 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v79) = BYTE6(v73);
    v80 = *v5;
    *v5 = v80 + 1;
  }
  v81 = *v5;
  v82 = *(_DWORD*)(result + 336);
  *v5 = v81 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v81) = v82;
  v83 = *v5;
  *v5 = v83 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v83) = BYTE1(v82);
  v84 = *v5;
  *v5 = v84 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v84) = BYTE2(v82);
  v85 = *v5;
  *v5 = v85 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v85) = HIBYTE(v82);
  v86 = *v5;
  v87 = *(_QWORD*)(result + 448) - *(_QWORD*)(result + 440);
  *v5 = v86 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v86) = v87 >> 3;
  v88 = *v5;
  *v5 = v88 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v88) = v87 >> 11;
  v89 = *v5;
  *v5 = v89 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v89) = v87 >> 19;
  v90 = *v5;
  *v5 = v90 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v90) = v87 >> 27;
  v91 = *(__int64**)(result + 440);
  for (m = *(__int64**)(result + 448); v91 != m;
       *(_BYTE*)(*(_QWORD*)v2 + v101) = HIBYTE(v94)) {
    v93 = *v5;
    v94 = *v91++;
    *v5 = v93 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v93) = v94;
    v95 = *v5;
    *v5 = v95 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v95) = BYTE1(v94);
    v96 = *v5;
    *v5 = v96 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v96) = BYTE2(v94);
    v97 = *v5;
    *v5 = v97 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v97) = BYTE3(v94);
    v98 = *v5;
    *v5 = v98 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v98) = BYTE4(v94);
    v99 = *v5;
    *v5 = v99 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v99) = BYTE5(v94);
    v100 = *v5;
    *v5 = v100 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v100) = BYTE6(v94);
    v101 = *v5;
    *v5 = v101 + 1;
  }
  v102 = *v5;
  v103 = *(_DWORD*)(result + 472);
  *v5 = v102 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v102) = v103;
  v104 = *v5;
  *v5 = v104 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v104) = BYTE1(v103);
  v105 = *v5;
  *v5 = v105 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v105) = BYTE2(v103);
  v106 = *v5;
  *v5 = v106 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v106) = HIBYTE(v103);
  v107 = *v5;
  v108 = *(_QWORD*)(result + 584) - *(_QWORD*)(result + 576);
  *v5 = v107 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v107) = v108 >> 3;
  v109 = *v5;
  *v5 = v109 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v109) = v108 >> 11;
  v110 = *v5;
  *v5 = v110 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v110) = v108 >> 19;
  v111 = *v5;
  *v5 = v111 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v111) = v108 >> 27;
  v112 = *(__int64**)(result + 576);
  for (n = *(__int64**)(result + 584); v112 != n;
       *(_BYTE*)(*(_QWORD*)v2 + v122) = HIBYTE(v115)) {
    v114 = *v5;
    v115 = *v112++;
    *v5 = v114 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v114) = v115;
    v116 = *v5;
    *v5 = v116 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v116) = BYTE1(v115);
    v117 = *v5;
    *v5 = v117 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v117) = BYTE2(v115);
    v118 = *v5;
    *v5 = v118 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v118) = BYTE3(v115);
    v119 = *v5;
    *v5 = v119 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v119) = BYTE4(v115);
    v120 = *v5;
    *v5 = v120 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v120) = BYTE5(v115);
    v121 = *v5;
    *v5 = v121 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v121) = BYTE6(v115);
    v122 = *v5;
    *v5 = v122 + 1;
  }
  v123 = *v5;
  v124 = *(_DWORD*)(result + 608);
  *v5 = v123 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v123) = v124;
  v125 = *v5;
  *v5 = v125 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v125) = BYTE1(v124);
  v126 = *v5;
  *v5 = v126 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v126) = BYTE2(v124);
  v127 = *v5;
  *v5 = v127 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v127) = HIBYTE(v124);
  v128 = *v5;
  v129 = *(_QWORD*)(result + 720) - *(_QWORD*)(result + 712);
  *v5 = v128 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v128) = v129 >> 3;
  v130 = *v5;
  *v5 = v130 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v130) = v129 >> 11;
  v131 = *v5;
  *v5 = v131 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v131) = v129 >> 19;
  v132 = *v5;
  *v5 = v132 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v132) = v129 >> 27;
  v133 = *(__int64**)(result + 712);
  for (ii = *(__int64**)(result + 720); v133 != ii;
       *(_BYTE*)(*(_QWORD*)v2 + v143) = HIBYTE(v136)) {
    v135 = *v5;
    v136 = *v133++;
    *v5 = v135 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v135) = v136;
    v137 = *v5;
    *v5 = v137 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v137) = BYTE1(v136);
    v138 = *v5;
    *v5 = v138 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v138) = BYTE2(v136);
    v139 = *v5;
    *v5 = v139 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v139) = BYTE3(v136);
    v140 = *v5;
    *v5 = v140 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v140) = BYTE4(v136);
    v141 = *v5;
    *v5 = v141 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v141) = BYTE5(v136);
    v142 = *v5;
    *v5 = v142 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v142) = BYTE6(v136);
    v143 = *v5;
    *v5 = v143 + 1;
  }
  v144 = *v5;
  v145 = *(_DWORD*)(result + 744);
  *v5 = v144 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v144) = v145;
  v146 = *v5;
  *v5 = v146 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v146) = BYTE1(v145);
  v147 = *v5;
  *v5 = v147 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v147) = BYTE2(v145);
  v148 = *v5;
  *v5 = v148 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v148) = HIBYTE(v145);
  v149 = *v5;
  v150 = *(_QWORD*)(result + 856) - *(_QWORD*)(result + 848);
  *v5 = v149 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v149) = v150 >> 3;
  v151 = *v5;
  *v5 = v151 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v151) = v150 >> 11;
  v152 = *v5;
  *v5 = v152 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v152) = v150 >> 19;
  v153 = *v5;
  *v5 = v153 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v153) = v150 >> 27;
  v154 = *(__int64**)(result + 848);
  for (jj = *(__int64**)(result + 856); v154 != jj;
       *(_BYTE*)(*(_QWORD*)v2 + v164) = HIBYTE(v157)) {
    v156 = *v5;
    v157 = *v154++;
    *v5 = v156 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v156) = v157;
    v158 = *v5;
    *v5 = v158 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v158) = BYTE1(v157);
    v159 = *v5;
    *v5 = v159 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v159) = BYTE2(v157);
    v160 = *v5;
    *v5 = v160 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v160) = BYTE3(v157);
    v161 = *v5;
    *v5 = v161 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v161) = BYTE4(v157);
    v162 = *v5;
    *v5 = v162 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v162) = BYTE5(v157);
    v163 = *v5;
    *v5 = v163 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v163) = BYTE6(v157);
    v164 = *v5;
    *v5 = v164 + 1;
  }
  v165 = *v5;
  v166 = *(_DWORD*)(result + 880);
  *v5 = v165 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v165) = v166;
  v167 = *v5;
  *v5 = v167 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v167) = BYTE1(v166);
  v168 = *v5;
  *v5 = v168 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v168) = BYTE2(v166);
  v169 = *v5;
  *v5 = v169 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v169) = HIBYTE(v166);
  v170 = *v5;
  v171 = *(_QWORD*)(result + 992) - *(_QWORD*)(result + 984);
  *v5 = v170 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v170) = v171 >> 3;
  v172 = *v5;
  *v5 = v172 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v172) = v171 >> 11;
  v173 = *v5;
  *v5 = v173 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v173) = v171 >> 19;
  v174 = *v5;
  *v5 = v174 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v174) = v171 >> 27;
  v175 = *(__int64**)(result + 984);
  for (kk = *(__int64**)(result + 992); v175 != kk;
       *(_BYTE*)(*(_QWORD*)v2 + v185) = HIBYTE(v178)) {
    v177 = *v5;
    v178 = *v175++;
    *v5 = v177 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v177) = v178;
    v179 = *v5;
    *v5 = v179 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v179) = BYTE1(v178);
    v180 = *v5;
    *v5 = v180 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v180) = BYTE2(v178);
    v181 = *v5;
    *v5 = v181 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v181) = BYTE3(v178);
    v182 = *v5;
    *v5 = v182 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v182) = BYTE4(v178);
    v183 = *v5;
    *v5 = v183 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v183) = BYTE5(v178);
    v184 = *v5;
    *v5 = v184 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v184) = BYTE6(v178);
    v185 = *v5;
    *v5 = v185 + 1;
  }
  v186 = *v5;
  v187 = *(_DWORD*)(result + 1016);
  *v5 = v186 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v186) = v187;
  v188 = *v5;
  *v5 = v188 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v188) = BYTE1(v187);
  v189 = *v5;
  *v5 = v189 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v189) = BYTE2(v187);
  v190 = *v5;
  *v5 = v190 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v190) = HIBYTE(v187);
  v191 = *v5;
  v192 = *(_QWORD*)(result + 1128) - *(_QWORD*)(result + 1120);
  *v5 = v191 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v191) = v192 >> 3;
  v193 = *v5;
  *v5 = v193 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v193) = v192 >> 11;
  v194 = *v5;
  *v5 = v194 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v194) = v192 >> 19;
  v195 = *v5;
  *v5 = v195 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v195) = v192 >> 27;
  v196 = *(__int64**)(result + 1120);
  for (mm = *(__int64**)(result + 1128); v196 != mm;
       *(_BYTE*)(*(_QWORD*)v2 + v206) = HIBYTE(v199)) {
    v198 = *v5;
    v199 = *v196++;
    *v5 = v198 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v198) = v199;
    v200 = *v5;
    *v5 = v200 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v200) = BYTE1(v199);
    v201 = *v5;
    *v5 = v201 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v201) = BYTE2(v199);
    v202 = *v5;
    *v5 = v202 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v202) = BYTE3(v199);
    v203 = *v5;
    *v5 = v203 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v203) = BYTE4(v199);
    v204 = *v5;
    *v5 = v204 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v204) = BYTE5(v199);
    v205 = *v5;
    *v5 = v205 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v205) = BYTE6(v199);
    v206 = *v5;
    *v5 = v206 + 1;
  }
  v207 = *v5;
  v208 = *(_DWORD*)(result + 1152);
  *v5 = v207 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v207) = v208;
  v209 = *v5;
  *v5 = v209 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v209) = BYTE1(v208);
  v210 = *v5;
  *v5 = v210 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v210) = BYTE2(v208);
  v211 = *v5;
  *v5 = v211 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v211) = HIBYTE(v208);
  v212 = *v5;
  v213 = *(_QWORD*)(result + 1264) - *(_QWORD*)(result + 1256);
  *v5 = v212 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v212) = v213 >> 3;
  v214 = *v5;
  *v5 = v214 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v214) = v213 >> 11;
  v215 = *v5;
  *v5 = v215 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v215) = v213 >> 19;
  v216 = *v5;
  *v5 = v216 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v216) = v213 >> 27;
  v217 = *(__int64**)(result + 1256);
  for (nn = *(__int64**)(result + 1264); v217 != nn;
       *(_BYTE*)(*(_QWORD*)v2 + v227) = HIBYTE(v220)) {
    v219 = *v5;
    v220 = *v217++;
    *v5 = v219 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v219) = v220;
    v221 = *v5;
    *v5 = v221 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v221) = BYTE1(v220);
    v222 = *v5;
    *v5 = v222 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v222) = BYTE2(v220);
    v223 = *v5;
    *v5 = v223 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v223) = BYTE3(v220);
    v224 = *v5;
    *v5 = v224 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v224) = BYTE4(v220);
    v225 = *v5;
    *v5 = v225 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v225) = BYTE5(v220);
    v226 = *v5;
    *v5 = v226 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v226) = BYTE6(v220);
    v227 = *v5;
    *v5 = v227 + 1;
  }
  v228 = *v5;
  v229 = *(_DWORD*)(result + 1288);
  *v5 = v228 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v228) = v229;
  v230 = *v5;
  *v5 = v230 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v230) = BYTE1(v229);
  v231 = *v5;
  *v5 = v231 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v231) = BYTE2(v229);
  v232 = *v5;
  *v5 = v232 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v232) = HIBYTE(v229);
  v233 = *v5;
  v234 = *(_QWORD*)(result + 1400) - *(_QWORD*)(result + 1392);
  *v5 = v233 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v233) = v234 >> 3;
  v235 = *v5;
  *v5 = v235 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v235) = v234 >> 11;
  v236 = *v5;
  *v5 = v236 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v236) = v234 >> 19;
  v237 = *v5;
  *v5 = v237 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v237) = v234 >> 27;
  v238 = *(__int64**)(result + 1392);
  for (i1 = *(__int64**)(result + 1400); v238 != i1;
       *(_BYTE*)(*(_QWORD*)v2 + v248) = HIBYTE(v241)) {
    v240 = *v5;
    v241 = *v238++;
    *v5 = v240 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v240) = v241;
    v242 = *v5;
    *v5 = v242 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v242) = BYTE1(v241);
    v243 = *v5;
    *v5 = v243 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v243) = BYTE2(v241);
    v244 = *v5;
    *v5 = v244 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v244) = BYTE3(v241);
    v245 = *v5;
    *v5 = v245 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v245) = BYTE4(v241);
    v246 = *v5;
    *v5 = v246 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v246) = BYTE5(v241);
    v247 = *v5;
    *v5 = v247 + 1;
    *(_BYTE*)(*(_QWORD*)v2 + v247) = BYTE6(v241);
    v248 = *v5;
    *v5 = v248 + 1;
  }
  v249 = *v5;
  v250 = *(_DWORD*)(result + 1424);
  *v5 = v249 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v249) = v250;
  v251 = *v5;
  *v5 = v251 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v251) = BYTE1(v250);
  v252 = *v5;
  *v5 = v252 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v252) = BYTE2(v250);
  v253 = *v5;
  *v5 = v253 + 1;
  *(_BYTE*)(*(_QWORD*)v2 + v253) = HIBYTE(v250);
  return result;
}

unsigned __int64** GameSubquestData_Unknown9(unsigned __int64** result,
                                             __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64** v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v22;
  __int64 v23;
  __int64** v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  char v30;
  unsigned __int8* v31;
  int v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  char v36;
  int v37;
  char v38;
  unsigned __int8* v39;
  int v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  char v44;
  int v45;
  bool v46;
  unsigned __int8* v47;
  bool v48;
  int v49;
  bool v50;
  __int64 v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  int v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 v62;
  int v63;
  int v64;
  int v65;
  __int64 v66;
  __int64 v67;
  int v68;
  int v69;
  int v70;
  __int64 v71;
  __int64 v72;
  int v73;
  int v74;
  int v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  __int64 v81;
  __int64 v82;
  int v83;
  int v84;
  int v85;
  __int64 v86;
  __int64 v87;
  int v88;
  int v89;
  int v90;
  __int64 v91;
  __int64 v92;
  int v93;
  int v94;
  int v95;
  __int64 v96;
  __int64 v97;
  int v98;
  int v99;
  int v100;

  v3 = *(int*)(a2 + 20);
  v4 = *(_QWORD*)(a2 + 8);
  v7 = result;
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v8 = *(unsigned __int8*)(v4 + v3);
  *(_DWORD*)(a2 + 20) = v3 + 2;
  v9 = v8 | (*(unsigned __int8*)(v4 + v3 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v3 + 3;
  v10 = *(unsigned __int8*)(v4 + v3 + 2);
  *(_DWORD*)(a2 + 20) = v3 + 4;
  v11 = v9 | (v10 << 16) | (*(unsigned __int8*)(v4 + v3 + 3) << 24);
  if (v11 != 0) {
    if (a3 < 3) {
      if (a3 > 0) {
        do {
          result = (unsigned __int64**)GameRoutine_1268100(a2);
          v34 = *(int*)(a2 + 20);
          v35 = *(_QWORD*)(a2 + 8);
          *(_DWORD*)(a2 + 20) = v34 + 1;
          *(_DWORD*)(a2 + 20) = v34 + 2;
          v36 = *(_BYTE*)(v35 + v34 + 1);
          *(_DWORD*)(a2 + 20) = v34 + 3;
          v37 = *(unsigned __int8*)(v35 + v34 + 2);
          if ((unsigned int)a3 <= 1) {
            v38 = v37 != 0;
          }
          else {
            v38 = v37;
          }
          if (result != nullptr) {
            result = (unsigned __int64**)GameSubquestData_125b8e0(
                v7, (__int64)result[1]);
            if (result != nullptr) {
              v39 = (unsigned __int8*)*result;
              *((_BYTE*)result + 9) = v36;
              *((_BYTE*)result + 11) = v38;
              if ((v38 & 1) != 0) {
                *((_BYTE*)result + 11) = v38 & 0xFE;
                if ((unsigned int)v39[112] - 1 >= 3) {
                  v38 &= ~1u;
                }
                *((_BYTE*)result + 11) = v38;
              }
              v40 = v39[113];
              if (v40 == 1 ||
                  (v40 != 5 ? (v41 = (unsigned int)v39[112] - 5 >= 3)
                            : (v41 = false),
                   !v41 || (v39[161] & 0x10) == 0)) {
                *((_BYTE*)result + 11) = v38 & 0xF9;
              }
            }
          }
          --v11;
        } while (v11 != 0);
      }
      else {
        do {
          result = (unsigned __int64**)GameRoutine_1268100(a2);
          v42 = *(int*)(a2 + 20);
          v43 = *(_QWORD*)(a2 + 8);
          *(_DWORD*)(a2 + 20) = v42 + 1;
          v44 = *(_BYTE*)(v43 + v42);
          *(_DWORD*)(a2 + 20) = v42 + 2;
          v45 = *(unsigned __int8*)(v43 + v42 + 1);
          v46 = *(_BYTE*)(v43 + v42 + 1) != 0;
          if (result != nullptr) {
            result = (unsigned __int64**)GameSubquestData_125b8e0(
                v7, (__int64)result[1]);
            if (result != nullptr) {
              v47 = (unsigned __int8*)*result;
              *((_BYTE*)result + 9) = v44;
              *((_BYTE*)result + 11) = v46;
              if (v45 != 0) {
                *((_BYTE*)result + 11) = 0;
                v48 = (unsigned int)v47[112] - 1 < 3 && v46;
                *((_BYTE*)result + 11) = v48;
              }
              else {
                v48 = false;
              }
              v49 = v47[113];
              if (v49 == 1 ||
                  (v49 != 5 ? (v50 = (unsigned int)v47[112] - 5 >= 3)
                            : (v50 = false),
                   !v50 || (v47[161] & 0x10) == 0)) {
                *((_BYTE*)result + 11) = v48;
              }
            }
          }
          --v11;
        } while (v11 != 0);
      }
    }
    else {
      v12 = 0;
      v13 = GameData_212cb58[0];
      do {
        v14 = *(int*)(a2 + 20);
        v15 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v14 + 1;
        v16 = *(unsigned __int8*)(v15 + v14);
        *(_DWORD*)(a2 + 20) = v14 + 2;
        v17 = v16 | (*(unsigned __int8*)(v15 + v14 + 1) << 8);
        *(_DWORD*)(a2 + 20) = v14 + 3;
        v18 = v17 | (*(unsigned __int8*)(v15 + v14 + 2) << 16);
        *(_DWORD*)(a2 + 20) = v14 + 4;
        v19 = v18 | (*(unsigned __int8*)(v15 + v14 + 3) << 24);
        if ((_DWORD)v19 != 0) {
          v20 = *(_QWORD*)(*v13 + 136);
          if (v20 != 0 && *(_QWORD*)(*v13 + 152) != 0) {
            v22 = v20 - 1;
            if ((v20 & (v20 - 1)) != 0) {
              v23 = v18 | (*(unsigned __int8*)(v15 + v14 + 3) << 24);
              if (v20 <= v19) {
                v23 = (unsigned int)v19 % (unsigned int)v20;
              }
            }
            else {
              v23 = ((_DWORD)v20 - 1) & (unsigned int)v19;
            }
            v24 = *(__int64***)(*(_QWORD*)(*v13 + 128) + 8 * v23);
            if (v24 != nullptr) {
              v25 = *v24;
              if (v25 != nullptr) {
                if ((v20 & v22) == 0) {
                  while (1) {
                    v28 = v25[1];
                    if (v28 == v19) {
                      if (*((_DWORD*)v25 + 4) == (_DWORD)v19) {
                        goto LABEL_45;
                      }
                    }
                    else if ((v28 & v22) != v23) {
                      goto LABEL_30;
                    }
                    v25 = (__int64*)*v25;
                    v27 = 0;
                    if (v25 == nullptr) {
                      goto LABEL_31;
                    }
                  }
                }
                do {
                  v26 = v25[1];
                  if (v26 == v19) {
                    if (*((_DWORD*)v25 + 4) == (_DWORD)v19) {
                    LABEL_45:
                      v27 = v25[3];
                      goto LABEL_31;
                    }
                  }
                  else {
                    if (v26 >= v20) {
                      v26 %= v20;
                    }
                    if (v26 != v23) {
                      break;
                    }
                  }
                  v25 = (__int64*)*v25;
                } while (v25 != nullptr);
              }
            }
          }
        }
      LABEL_30:
        v27 = 0;
      LABEL_31:
        *(_DWORD*)(a2 + 20) = v14 + 5;
        *(_DWORD*)(a2 + 20) = v14 + 6;
        v29 = *(_BYTE*)(v15 + v14 + 5);
        *(_DWORD*)(a2 + 20) = v14 + 7;
        if (v27 != 0) {
          v30 = *(_BYTE*)(v15 + v14 + 6);
          result = (unsigned __int64**)GameSubquestData_125b8e0(
              v7, *(_QWORD*)(v27 + 8));
          if (result != nullptr) {
            v31 = (unsigned __int8*)*result;
            *((_BYTE*)result + 9) = v29;
            *((_BYTE*)result + 11) = v30;
            if ((v30 & 1) != 0) {
              *((_BYTE*)result + 11) = v30 & 0xFE;
              if ((unsigned int)v31[112] - 1 >= 3) {
                v30 &= ~1u;
              }
              *((_BYTE*)result + 11) = v30;
            }
            v32 = v31[113];
            if (v32 == 1 || (v32 != 5 ? (v33 = (unsigned int)v31[112] - 5 >= 3)
                                      : (v33 = false),
                             !v33 || (v31[161] & 0x10) == 0)) {
              *((_BYTE*)result + 11) = v30 & 0xF9;
            }
          }
        }
        ++v12;
      } while (v12 != v11);
    }
  }
  if (a3 > 1) {
    GameRoutine_1255aa0(v7 + 179, a2);
    GameRoutine_1255aa0(v7 + 21, a2);
    if ((unsigned int)a3 < 4) {
      GameRoutine_1255aa0(v7 + 38, a2);
      GameRoutine_1255aa0(v7 + 55, a2);
      GameRoutine_1255aa0(v7 + 72, a2);
      GameRoutine_1255aa0(v7 + 89, a2);
      GameRoutine_1255aa0(v7 + 106, a2);
      GameRoutine_1255aa0(v7 + 123, a2);
      GameRoutine_1255aa0(v7 + 140, a2);
      GameRoutine_1255aa0(v7 + 157, a2);
      return GameRoutine_1255aa0(v7 + 174, a2);
    }
    else {
      v51 = *(int*)(a2 + 20);
      v52 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v51 + 1;
      v53 = *(unsigned __int8*)(v52 + v51);
      *(_DWORD*)(a2 + 20) = v51 + 2;
      v54 = v53 | (*(unsigned __int8*)(v52 + v51 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v51 + 3;
      v55 = *(unsigned __int8*)(v52 + v51 + 2);
      *(_DWORD*)(a2 + 20) = v51 + 4;
      *((_DWORD*)v7 + 50) =
          v54 | (v55 << 16) | (*(unsigned __int8*)(v52 + v51 + 3) << 24);
      GameRoutine_1255aa0(v7 + 38, a2);
      v56 = *(int*)(a2 + 20);
      v57 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v56 + 1;
      v58 = *(unsigned __int8*)(v57 + v56);
      *(_DWORD*)(a2 + 20) = v56 + 2;
      v59 = v58 | (*(unsigned __int8*)(v57 + v56 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v56 + 3;
      v60 = *(unsigned __int8*)(v57 + v56 + 2);
      *(_DWORD*)(a2 + 20) = v56 + 4;
      *((_DWORD*)v7 + 84) =
          v59 | (v60 << 16) | (*(unsigned __int8*)(v57 + v56 + 3) << 24);
      GameRoutine_1255aa0(v7 + 55, a2);
      v61 = *(int*)(a2 + 20);
      v62 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v61 + 1;
      v63 = *(unsigned __int8*)(v62 + v61);
      *(_DWORD*)(a2 + 20) = v61 + 2;
      v64 = v63 | (*(unsigned __int8*)(v62 + v61 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v61 + 3;
      v65 = *(unsigned __int8*)(v62 + v61 + 2);
      *(_DWORD*)(a2 + 20) = v61 + 4;
      *((_DWORD*)v7 + 118) =
          v64 | (v65 << 16) | (*(unsigned __int8*)(v62 + v61 + 3) << 24);
      GameRoutine_1255aa0(v7 + 72, a2);
      v66 = *(int*)(a2 + 20);
      v67 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v66 + 1;
      v68 = *(unsigned __int8*)(v67 + v66);
      *(_DWORD*)(a2 + 20) = v66 + 2;
      v69 = v68 | (*(unsigned __int8*)(v67 + v66 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v66 + 3;
      v70 = *(unsigned __int8*)(v67 + v66 + 2);
      *(_DWORD*)(a2 + 20) = v66 + 4;
      *((_DWORD*)v7 + 152) =
          v69 | (v70 << 16) | (*(unsigned __int8*)(v67 + v66 + 3) << 24);
      GameRoutine_1255aa0(v7 + 89, a2);
      v71 = *(int*)(a2 + 20);
      v72 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v71 + 1;
      v73 = *(unsigned __int8*)(v72 + v71);
      *(_DWORD*)(a2 + 20) = v71 + 2;
      v74 = v73 | (*(unsigned __int8*)(v72 + v71 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v71 + 3;
      v75 = *(unsigned __int8*)(v72 + v71 + 2);
      *(_DWORD*)(a2 + 20) = v71 + 4;
      *((_DWORD*)v7 + 186) =
          v74 | (v75 << 16) | (*(unsigned __int8*)(v72 + v71 + 3) << 24);
      GameRoutine_1255aa0(v7 + 106, a2);
      v76 = *(int*)(a2 + 20);
      v77 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v76 + 1;
      v78 = *(unsigned __int8*)(v77 + v76);
      *(_DWORD*)(a2 + 20) = v76 + 2;
      v79 = v78 | (*(unsigned __int8*)(v77 + v76 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v76 + 3;
      v80 = *(unsigned __int8*)(v77 + v76 + 2);
      *(_DWORD*)(a2 + 20) = v76 + 4;
      *((_DWORD*)v7 + 220) =
          v79 | (v80 << 16) | (*(unsigned __int8*)(v77 + v76 + 3) << 24);
      GameRoutine_1255aa0(v7 + 123, a2);
      v81 = *(int*)(a2 + 20);
      v82 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v81 + 1;
      v83 = *(unsigned __int8*)(v82 + v81);
      *(_DWORD*)(a2 + 20) = v81 + 2;
      v84 = v83 | (*(unsigned __int8*)(v82 + v81 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v81 + 3;
      v85 = *(unsigned __int8*)(v82 + v81 + 2);
      *(_DWORD*)(a2 + 20) = v81 + 4;
      *((_DWORD*)v7 + 254) =
          v84 | (v85 << 16) | (*(unsigned __int8*)(v82 + v81 + 3) << 24);
      GameRoutine_1255aa0(v7 + 140, a2);
      v86 = *(int*)(a2 + 20);
      v87 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v86 + 1;
      v88 = *(unsigned __int8*)(v87 + v86);
      *(_DWORD*)(a2 + 20) = v86 + 2;
      v89 = v88 | (*(unsigned __int8*)(v87 + v86 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v86 + 3;
      v90 = *(unsigned __int8*)(v87 + v86 + 2);
      *(_DWORD*)(a2 + 20) = v86 + 4;
      *((_DWORD*)v7 + 288) =
          v89 | (v90 << 16) | (*(unsigned __int8*)(v87 + v86 + 3) << 24);
      GameRoutine_1255aa0(v7 + 157, a2);
      v91 = *(int*)(a2 + 20);
      v92 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v91 + 1;
      v93 = *(unsigned __int8*)(v92 + v91);
      *(_DWORD*)(a2 + 20) = v91 + 2;
      v94 = v93 | (*(unsigned __int8*)(v92 + v91 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v91 + 3;
      v95 = *(unsigned __int8*)(v92 + v91 + 2);
      *(_DWORD*)(a2 + 20) = v91 + 4;
      *((_DWORD*)v7 + 322) =
          v94 | (v95 << 16) | (*(unsigned __int8*)(v92 + v91 + 3) << 24);
      result = GameRoutine_1255aa0(v7 + 174, a2);
      v96 = *(int*)(a2 + 20);
      v97 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v96 + 1;
      v98 = *(unsigned __int8*)(v97 + v96);
      *(_DWORD*)(a2 + 20) = v96 + 2;
      v99 = v98 | (*(unsigned __int8*)(v97 + v96 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v96 + 3;
      v100 = *(unsigned __int8*)(v97 + v96 + 2);
      *(_DWORD*)(a2 + 20) = v96 + 4;
      *((_DWORD*)v7 + 356) =
          v99 | (v100 << 16) | (*(unsigned __int8*)(v97 + v96 + 3) << 24);
    }
  }
  return result;
}

__int64 GameSubquestData_Unknown10(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(result + 1440) - *(_QWORD*)(result + 1432);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3 >> 3;
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v3 >> 11;
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v3 >> 19;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v3 >> 27;
  v7 = *(__int64**)(result + 1432);
  for (i = *(__int64**)(result + 1440); v7 != i;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = HIBYTE(v10)) {
    v9 = *(int*)(a2 + 20);
    v10 = *v7++;
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v10;
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE1(v10);
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE2(v10);
    v13 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE3(v10);
    v14 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE4(v10);
    v15 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE5(v10);
    v16 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE6(v10);
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
  }
  return result;
}

__int64 GameSubquestData_1260b40(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(result + 1432) - *(_QWORD*)(result + 1424);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3 >> 3;
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v3 >> 11;
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v3 >> 19;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v3 >> 27;
  v7 = *(__int64**)(result + 1424);
  for (i = *(__int64**)(result + 1432); v7 != i;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = HIBYTE(v10)) {
    v9 = *(int*)(a2 + 20);
    v10 = *v7++;
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v10;
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE1(v10);
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE2(v10);
    v13 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE3(v10);
    v14 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE4(v10);
    v15 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE5(v10);
    v16 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE6(v10);
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
  }
  return result;
}

unsigned __int64** GameSubquestData_Unknown11(unsigned __int64** result,
                                              __int64 a2, int a3)
{
  if (a3 >= 2) {
    result[180] = result[179];
    return GameRoutine_1255aa0(result + 179, a2);
  }
  return result;
}

#pragma GCC visibility pop
