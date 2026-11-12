#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameGlobalSkill_Destructor(_QWORD);
__int64 GameManager_a20000(void);
__int64 GameManager_a22fd0(void);
__int64 GameManager_a28c50(void);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_660280(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6616e0(_QWORD, _QWORD);
__int64 GameRoutine_6e0f00(__int64, __int64, char);
__int64 GameRoutine_7188e0(_QWORD);
__int64 GameRoutine_71bd40(_QWORD, _QWORD);
__int64 GameRoutine_71d2c0(_QWORD, _QWORD);
__int64 GameRoutine_71e140(_QWORD, _QWORD);
__int64 GameRoutine_71e3e0(_QWORD, _QWORD);
__int64 GameRoutine_821570(_QWORD);
__int64 GameRoutine_826320(_QWORD);
__int64 GameRoutine_82d390(_QWORD, _QWORD);
__int64 GameRoutine_82d4a0(_QWORD);
__int64 GameRoutine_86abe0(_QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_8aa110(_QWORD);
__int64 GameRoutine_8e2280(_QWORD, _QWORD);
__int64 GameRoutine_8e24a0(_QWORD, _QWORD);
__int64 GameRoutine_8eb020(_QWORD, _QWORD);
__int64 GameRoutine_8eb7a0(_QWORD, _QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 List_93b820(_QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fa8960[])();
extern __int64 (*GameData_1fa89f0[])();
extern __int64 (*GameData_1fa8a70[])();
extern __int64 (*game_anonymous_Impl_vtable[])();
extern __int64 GameData_212daf0[7];
extern __int64 GameData_212db08[4];
extern __int64 GameData_21eea40;
extern __int64 GameData_21f49b8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212d588[4];
extern __int64* GameData_212d6d0;
extern __int64* GameData_212d7e0[7];
extern __int64* GameData_212db68[4];
extern __int64* GameData_212db90[3];
extern __int64* GameData_212dd80[6];
extern __int64* GameData_212dda0[2];
extern __int64* GameData_212df70[4];
__int64 Impl_Destructor_6eb1e0(_QWORD* a1);
__int64 Impl_Unknown7_6eb5c0(__int64 result, __int64 a2);
__int64 Impl_DeletingDestructor_6fac90(_QWORD* a1);
__int64 Impl_Destructor_718a40(__int64 a1);
__int64 Impl_Unknown9_71b700(__int64 a1, __int64 a2);
__int64 Impl_Unknown10_71ba20(__int64 a1, __int64 a2);
__int64 Impl_DeletingDestructor_812220(_QWORD* a1);
__int64 Impl_Unknown4();
__int64 Impl_Unknown5_8122c0();
__int64 Impl_Unknown6();
__int64 Impl_Unknown7_812300();
_DWORD* Impl_Unknown9_812380(__int64 a1, __int64 a2);
__int64 Impl_Unknown10_8123a0(__int64 a1, __int64 a2);
__int64 Impl_Destructor_86a740(_QWORD* a1);
__int64 Impl_DeletingDestructor_86a7a0(_QWORD* a1);
__int64 Impl_Unknown5_86a840(__int64 result);
__int64 Impl_Unknown7_86a870(__int64 result, __int64 a2);
__int64 Impl_Unknown8_86aa40(__int64 result, __int64 a2);
__int64 Impl_Unknown5_8acbd0(__int64 result);
__int64 Impl_Unknown7_8acc60(__int64 result, __int64 a2);
_DWORD* Impl_Unknown8_8acce0(_DWORD* result, __int64 a2, int a3);
__int64 GameConst_7f8610(_QWORD);
__int64 GameRoutine_12274e0(_QWORD, _QWORD);
__int64 GameRoutine_65d6c0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
bool GameRoutine_876070(unsigned __int8*, __int64);
extern _UNKNOWN* GameData_1f9caf8;
extern _UNKNOWN* game_g_hero_ids;
extern __int64 (*GameData_1f933d8[])();
extern __int64 GameData_21c99c8;
extern __int64 GameData_22400f8;
extern char* GameData_1fa87c8[9];
extern int GameData_21d87f8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
__int64 game_anonymous_Impl_UpdateRoute(__int64 a1);
__int64 Impl_71d2c0(__int64 a1, __int64 a2);
__int64 Impl_71f220(__int64 result);
__int64 game_anonymous_Impl_UpdateRoute_closure_Invoke(__int64 a1,
                                                       unsigned __int8* a2);
__int64 game_anonymous_Impl_UpdatePart_closure_Invoke(__int64 a1, __int64* a2,
                                                      unsigned __int8* a3);
__int64 game_anonymous_Impl_UpdateChapter_closure_Invoke(__int64 a1,
                                                         __int64* a2,
                                                         unsigned __int8* a3);
__int64 Impl_Destructor(_QWORD* a1);
__int64 game_anonymous_Impl_OnSerialize_closure_Invoke(__int64 a1, int* a2);
__int64 game_anonymous_Impl_OnDeserialize_closure_Invoke(__int64 a1, int* a2);
__int64 game_anonymous_Impl_Reset_closure_Invoke(__int64 result, int* a2);
_QWORD* GameRoutine_1553350(_QWORD* result, _QWORD*);
__int64* game_9a3180();
__int64 GameRecord_99e460(__int64, __int64);
__int64 GameRecord_99e5e0(__int64, __int64);
__int64 GameReliance_8e2280(__int64, __int64);
__int64 GameReliance_8e24a0(_QWORD*, __int64*);
__int64 GameRoutine_65d530(__int64);
__int64 GameRoutine_65f240(__int64 result, __int64);
__int64 GameRoutine_682a20(__int64);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e9fa0(_QWORD);
__int64 GameRoutine_6ec020(_QWORD);
__int64 GameRoutine_716760(__int64);
__int64 GameRoutine_71bd40_alt1(unsigned __int8*,
                                __int64) __asm__("GameRoutine_71bd40");
__int64 GameRoutine_71de40(__int64);
__int64 GameRoutine_71dfc0(__int64);
__int64 GameRoutine_71e8e0(__int64*);
__int64 GameRoutine_71ed40(__int64*);
__int64 GameRoutine_8eb020_alt1(__int64, __int64) __asm__("GameRoutine_8eb020");
__int64 GameRoutine_8eb7a0_alt1(__int64, __int64) __asm__("GameRoutine_8eb7a0");
__int64 GameRoutine_90dd20(_DWORD*, unsigned __int64);
__int64 GameRoutine_90dea0(__int64, __int64*);
__int64 GameRoutine_973a90(_QWORD*);
__int64 GameRoutine_973f40(__int64, unsigned __int64);
__int64 GameRoutine_974180(__int64, __int64*);
__int64 GameVariable_829aa0(__int64, __int64);
__int64 Impl_71e140(__int64, __int64*);
__int64 Impl_71e3e0(__int64, __int64*);
__int64 Impl_71e5c0(__int64);
__int64 Impl_71e760(__int64);
__int64 LegionPool_937fe0(__int64, unsigned __int64);
__int64 LegionPool_938160(__int64, __int64);
__int64 RidePool_93d360(__int64, __int64);
__int64 RidePool_93d4a0(__int64, __int64);
__int64 TimelineFile_890a20(__int64*);
__int64 TransporterConst_89c4e0(__int64, __int64);
__int64 TransporterConst_89c760(__int64, __int64);
__int64 Unit_6e1e20(__int64, __int64, __int64, __int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_120faa0(_QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_GameVariable_Deserialize(__int64, __int64*, __int64);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString32_alt1(__int64 result) __asm__("game_HashString32");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_Unit_GetJob(_QWORD);
__int64 nn_oe_GetProgramTotalActiveTime(_QWORD);
__int64 nn_os_ConvertToTick(_QWORD);
__n128 GameRoutine_15547e0(_QWORD*);
__n128 GameRoutine_1557060(__int64***);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1f932c8[])();
extern __int64 (*GameData_1f93358[])();
extern __int64 (*GameData_1f9fac0[])();
extern __int64 (*GameData_204c528[])();
extern __int64 GameData_21ca310;
extern __int64 GameData_21d8818;
extern __int64 GameData_21d8820;
extern __int64 GameData_21d8830;
extern __int64 GameData_21d8838;
extern __int64 GameData_21eea58;
extern __int64 GameData_2258178;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_g_game_setting_ptr;
extern char* GameData_1fb11a0[5];
extern char GameData_1a9f09e;
extern int GameData_21d8810;
extern int GameData_21d8828;
unsigned __int64 GameRoutine_65f3d0(unsigned __int64 result, int*);
void GameRoutine_1556f00(__int64*);
void GameRoutine_821570_alt1() __asm__("GameRoutine_821570");
void __attribute__((noreturn)) GameRoutine_60a210();
__int64 Impl_Unknown8_6ebe00_alt1(__int64 a1,
                                  __int64 a2) __asm__("Impl_Unknown8_6ebe00");
__int64 Impl_Unknown7(__int64 a1, unsigned __int64 a2);
void Impl_Unknown8_71a540(__int64 a1, __int64 a2, int a3);
__int64 Impl_71f080(__int64 a1);
__int64 game_anonymous_Impl_Impl();
void Impl_1551900();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_15571e0(_QWORD, _QWORD, _QWORD);
__int64 game_8224a0(_QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_1aa24ea;
extern _UNKNOWN GameData_21a60e8;
extern __int64 GameData_21a60e0;
extern __int64 as_g_base_frame_counter;
__int64 game_anonymous_Impl_Impl_closure_Invoke(__int64 result, __int64 a2,
                                                __int64 a3);
extern _UNKNOWN GameData_1aed8c8;
__int64 Impl_71bd40(unsigned __int8* a1, __int64 a2);
_QWORD* GameRoutine_15547e0_alt1(_QWORD* result) __asm__("GameRoutine_15547e0");
__int64 GameRoutine_1557060_alt1(__int64 result) __asm__("GameRoutine_1557060");
__int64 GameRoutine_876a40_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_876a40");
__int64 GameVariable_826320(_QWORD*);
__int64 game_Unit_Destroy_Unit_alt1(__int64) __asm__("game_Unit_Destroy_Unit");
void GameGlobalSkill_Destructor_alt1(_QWORD*) __asm__(
    "GameGlobalSkill_Destructor");
void GameRoutine_7188e0_alt1(__int64*) __asm__("GameRoutine_7188e0");
void List_93b820_alt1(__int64*) __asm__("List_93b820");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64
GameRoutine_12274e0_alt1(__int64 result,
                         unsigned __int64*) __asm__("GameRoutine_12274e0");
__int64 GameRoutine_6c47b0_alt1(__int64, _BYTE*, char,
                                char) __asm__("GameRoutine_6c47b0");
__int64 GameRoutine_6e9fa0_alt1(__int64) __asm__("GameRoutine_6e9fa0");
__int64 GameRoutine_8aa110_alt1(__int64) __asm__("GameRoutine_8aa110");
__int64 Unit_6e1e20_alt1(__int64, __int64*, char,
                         unsigned int) __asm__("Unit_6e1e20");
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_Unit_GetJob_alt1(__int64) __asm__("game_Unit_GetJob");
void GameRoutine_6ec020_alt1(__int64*) __asm__("GameRoutine_6ec020");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void game_120faa0_alt1() __asm__("game_120faa0");
void Impl_Unknown8_6ebe00(__int64 a1, __int64 a2);

__int64 Impl_Destructor_6eb1e0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  char* v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 i;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v34;

  v1 = a1[6];
  *a1 = game_anonymous_Impl_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    do {
      v5 = a1[5];
      v6 = (char*)a1[2];
      v7 = v1 - 1;
      v8 = *(
          _QWORD**)(*(_QWORD*)&v6[8 * ((unsigned __int64)(v1 - 1 + v5) >> 9)] +
                    8 * ((v1 - 1 + v5) & 0x1FF));
      if (v8 != nullptr) {
        v9 = v8[69539];
        if (v9 != 0) {
          v8[69540] = v9;
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v9);
        }
        v11 = (_QWORD*)v8[69532];
        if (v11 != nullptr) {
          do {
            v12 = (_QWORD*)*v11;
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v13 = 128;
            }
            else {
              v13 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, v11);
            v11 = v12;
          } while (v12 != nullptr);
        }
        v14 = v8[69530];
        v8[69530] = 0;
        if (v14 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v15, v14);
        }
        v16 = (__int64)(v8 + 69222);
        for (i = -556000; i != 0; i += 2224) {
          game_Unit_Destroy_Unit_alt1(v16);
          v16 -= 2224;
        }
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18, v8);
        v19 = a1[6] + a1[5] - 1LL;
        *(_QWORD*)(*(_QWORD*)(a1[2] + 8 * (v19 >> 9)) + 8 * (v19 & 0x1FF)) = 0;
        v5 = a1[5];
        v1 = a1[6];
        v6 = (char*)a1[2];
        v7 = v1 - 1;
      }
      v4 = (char*)a1[3];
      v20 = v5 + v1;
      a1[6] = v7;
      if (v4 == v6) {
        v21 = 0;
      }
      else {
        v21 = ((v4 - v6) << 6) - 1;
      }
      if ((unsigned __int64)(v21 - v20 - 1023) <= 0xFFFFFFFFFFFFFBFFLL) {
        v22 = *((_QWORD*)v4 - 1);
        if (v22 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v23 = 128;
          }
          else {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v23, v22);
          v4 = (char*)a1[3];
          v7 = a1[6];
        }
        v4 -= 8;
        a1[3] = v4;
      }
      v1 = v7;
    } while (v7 != 0);
  }
  else {
    v4 = (char*)a1[3];
  }
  v24 = (char*)a1[2];
  a1[6] = 0;
  a1[7] = 0;
  v25 = (v4 - v24) >> 3;
  if (v25 >= 3) {
    do {
      if (*(_QWORD*)v24 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v26, *(_QWORD*)v24);
        v24 = (char*)a1[2];
        v4 = (char*)a1[3];
      }
      v24 += 8;
      a1[2] = v24;
      v25 = (v4 - v24) >> 3;
    } while (v25 > 2);
  }
  if (v25 == 1) {
    v27 = 256;
  }
  else {
    if (v25 != 2) {
      goto LABEL_50;
    }
    v27 = 512;
  }
  a1[5] = v27;
LABEL_50:
  if (v24 != v4) {
    do {
      if (*(_QWORD*)v24 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v28, *(_QWORD*)v24);
      }
      v24 += 8;
    } while (v24 != v4);
    v29 = a1[3];
    v30 = a1[2] - v29;
    if (v30 != 0) {
      a1[3] = v29 + ((v30 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v31 = a1[1];
  if (v31 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v32, v31);
  }
  v34 = a1;
  *a1 = GameData_212d6d0 + 2;
  return GameRoutine_876a40_alt1(&GameData_21eea40, &v34);
}

__int64 Impl_Unknown7_6eb5c0(__int64 result, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  char v10;
  __int64 v11;
  __int64 v12;
  void (**v13)(__int64, int*);
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 j;
  char v20;
  __int64 v21;
  __int64 v22;
  void (**v23)(__int64, int*);
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 k;
  char v30;
  __int64 v31;
  __int64 v32;
  void (**v33)(__int64, int*);
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  __int64 m;
  char v40;
  __int64 v41;
  __int64 v42;
  void (**v43)(__int64, int*);
  __int64 v44;
  __int64 v45;
  char v46;
  __int64 v47;
  __int64 v48;
  __int64 n;
  char v50;
  __int64 v51;
  __int64 v52;
  void (**v53)(__int64, int*);
  __int64 v54;
  __int64 v55;
  char v56;
  __int64 v57;
  __int64 v58;
  __int64 ii;
  char v60;
  __int64 v61;
  __int64 v62;
  void (**v63)(__int64, int*);
  __int64 v64;
  __int64 v65;
  char v66;
  __int64 v67;
  __int64 v68;
  __int64 jj;
  char v70;
  __int64 v71;
  __int64 v72;
  void (**v73)(__int64, int*);
  __int64 v74;
  __int64 v75;
  char v76;
  __int64 v77;
  __int64 v78;
  __int64 kk;
  char v80;
  __int64 v81;
  __int64 v82;
  void (**v83)(__int64, int*);
  __int64 v84;
  __int64 v85;
  char v86;
  __int64 v87;
  __int64 v88;
  __int64 mm;
  char v90;
  __int64 v91;
  __int64 v92;
  void (**v93)(__int64, int*);
  __int64 v94;
  __int64 v95;
  int v96;

  v2 = *(_QWORD*)(result + 56);
  v4 = (_QWORD*)(v2 + 552960);
  v5 = *(_QWORD*)(v2 + 556000);
  if (v5 != 0) {
    v6 = 0;
    do {
      v5 = *(_QWORD*)(v5 + 432);
      ++v6;
    } while (v5 != 0);
    v7 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v7 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = 0;
    v8 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v6;
    for (i = v4[380]; i != 0; i = *(_QWORD*)(i + 432)) {
      v13 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v13)(a2, &v96);
      v14 = *(_QWORD*)(i + 440);
      v10 = v14 != 0 && *(unsigned __int8*)(v14 + 16) < 4u;
      v11 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v11 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = 36;
      v12 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v12 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v10;
      GameRoutine_6e0f00(i, a2, v10);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v15 = v4[383];
  if (v15 != 0) {
    v16 = 0;
    do {
      v15 = *(_QWORD*)(v15 + 432);
      ++v16;
    } while (v15 != 0);
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = 1;
    v18 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v16;
    for (j = v4[383]; j != 0; j = *(_QWORD*)(j + 432)) {
      v23 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v23)(a2, &v96);
      v24 = *(_QWORD*)(j + 440);
      v20 = v24 != 0 && *(unsigned __int8*)(v24 + 16) < 4u;
      v21 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v21 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = 36;
      v22 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v22 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = v20;
      GameRoutine_6e0f00(j, a2, v20);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v25 = v4[386];
  if (v25 != 0) {
    v26 = 0;
    do {
      v25 = *(_QWORD*)(v25 + 432);
      ++v26;
    } while (v25 != 0);
    v27 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v27 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = 2;
    v28 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v28 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = v26;
    for (k = v4[386]; k != 0; k = *(_QWORD*)(k + 432)) {
      v33 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v33)(a2, &v96);
      v34 = *(_QWORD*)(k + 440);
      v30 = v34 != 0 && *(unsigned __int8*)(v34 + 16) < 4u;
      v31 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v31 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = 36;
      v32 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v32 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = v30;
      GameRoutine_6e0f00(k, a2, v30);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v35 = v4[389];
  if (v35 != 0) {
    v36 = 0;
    do {
      v35 = *(_QWORD*)(v35 + 432);
      ++v36;
    } while (v35 != 0);
    v37 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v37 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = 3;
    v38 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v38 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = v36;
    for (m = v4[389]; m != 0; m = *(_QWORD*)(m + 432)) {
      v43 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v43)(a2, &v96);
      v44 = *(_QWORD*)(m + 440);
      v40 = v44 != 0 && *(unsigned __int8*)(v44 + 16) < 4u;
      v41 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v41 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = 36;
      v42 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v42 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = v40;
      GameRoutine_6e0f00(m, a2, v40);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v45 = v4[392];
  if (v45 != 0) {
    v46 = 0;
    do {
      v45 = *(_QWORD*)(v45 + 432);
      ++v46;
    } while (v45 != 0);
    v47 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v47 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v47) = 4;
    v48 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v48 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v48) = v46;
    for (n = v4[392]; n != 0; n = *(_QWORD*)(n + 432)) {
      v53 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v53)(a2, &v96);
      v54 = *(_QWORD*)(n + 440);
      v50 = v54 != 0 && *(unsigned __int8*)(v54 + 16) < 4u;
      v51 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v51 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v51) = 36;
      v52 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v52 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v52) = v50;
      GameRoutine_6e0f00(n, a2, v50);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v55 = v4[395];
  if (v55 != 0) {
    v56 = 0;
    do {
      v55 = *(_QWORD*)(v55 + 432);
      ++v56;
    } while (v55 != 0);
    v57 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v57 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v57) = 5;
    v58 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v58 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v58) = v56;
    for (ii = v4[395]; ii != 0; ii = *(_QWORD*)(ii + 432)) {
      v63 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v63)(a2, &v96);
      v64 = *(_QWORD*)(ii + 440);
      v60 = v64 != 0 && *(unsigned __int8*)(v64 + 16) < 4u;
      v61 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v61 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v61) = 36;
      v62 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v62 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v62) = v60;
      GameRoutine_6e0f00(ii, a2, v60);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v65 = v4[398];
  if (v65 != 0) {
    v66 = 0;
    do {
      v65 = *(_QWORD*)(v65 + 432);
      ++v66;
    } while (v65 != 0);
    v67 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v67 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v67) = 6;
    v68 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v68 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v68) = v66;
    for (jj = v4[398]; jj != 0; jj = *(_QWORD*)(jj + 432)) {
      v73 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v73)(a2, &v96);
      v74 = *(_QWORD*)(jj + 440);
      v70 = v74 != 0 && *(unsigned __int8*)(v74 + 16) < 4u;
      v71 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v71 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v71) = 36;
      v72 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v72 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v72) = v70;
      GameRoutine_6e0f00(jj, a2, v70);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v75 = v4[401];
  if (v75 != 0) {
    v76 = 0;
    do {
      v75 = *(_QWORD*)(v75 + 432);
      ++v76;
    } while (v75 != 0);
    v77 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v77 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v77) = 7;
    v78 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v78 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v78) = v76;
    for (kk = v4[401]; kk != 0; kk = *(_QWORD*)(kk + 432)) {
      v83 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v83)(a2, &v96);
      v84 = *(_QWORD*)(kk + 440);
      v80 = v84 != 0 && *(unsigned __int8*)(v84 + 16) < 4u;
      v81 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v81 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v81) = 36;
      v82 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v82 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v82) = v80;
      GameRoutine_6e0f00(kk, a2, v80);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v85 = v4[404];
  if (v85 != 0) {
    v86 = 0;
    do {
      v85 = *(_QWORD*)(v85 + 432);
      ++v86;
    } while (v85 != 0);
    v87 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v87 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v87) = 8;
    v88 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v88 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v88) = v86;
    for (mm = v4[404]; mm != 0; mm = *(_QWORD*)(mm + 432)) {
      v93 = *(void (***)(__int64, int*))a2;
      v96 = 0;
      (*v93)(a2, &v96);
      v94 = *(_QWORD*)(mm + 440);
      v90 = v94 != 0 && *(unsigned __int8*)(v94 + 16) < 4u;
      v91 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v91 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v91) = 36;
      v92 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v92 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v92) = v90;
      GameRoutine_6e0f00(mm, a2, v90);
      result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
    }
  }
  v95 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v95 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v95) = -1;
  return result;
}

void Impl_Unknown8_6ebe00(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v9;
  char v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  char v21[4];
  _BYTE v22[4];
  int v23;
  int v24;

  GameRoutine_6e9fa0_alt1(*(_QWORD*)(a1 + 56));
  v3 = *(int*)(a2 + 20);
  v4 = *(_QWORD*)(a2 + 8);
  v5 = v3 + 1;
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v6 = *(unsigned __int8*)(v4 + v3);
  if (v6 != 255) {
    LODWORD(v7) = v3;
    v8 = game_g_shared_system_skills_ptr;
    while (1) {
      *(_DWORD*)(a2 + 20) = v7 + 2;
      v9 = *(unsigned __int8*)(v4 + v5);
      if (*(_BYTE*)(v4 + v5) != 0) {
        break;
      }
    LABEL_4:
      v7 = *(int*)(a2 + 20);
      v4 = *(_QWORD*)(a2 + 8);
      v5 = v7 + 1;
      *(_DWORD*)(a2 + 20) = v7 + 1;
      v6 = *(unsigned __int8*)(v4 + v7);
      if (v6 == 255) {
        goto LABEL_2;
      }
    }
    while (1) {
      v22[0] = v6;
      v11 = *(_QWORD*)(GameData_21ca310 + 56);
      v12 = *(_QWORD*)(v11 + 556216);
      if (v12 == 0) {
        goto LABEL_4;
      }
      v13 = 1;
      GameRoutine_6c47b0_alt1(*(_QWORD*)(v11 + 556216), v22, 1, 0);
      v14 = *(_QWORD*)a2;
      v23 = 0;
      (*(void (**)(__int64, int*))(v14 + 16))(a2, &v23);
      v15 = *(int*)(a2 + 20);
      v16 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v15 + 1;
      v17 = *(unsigned __int8*)(v16 + v15);
      if (v17 >= 0x19) {
        *(_DWORD*)(a2 + 20) = v15 + 2;
        v13 = *(_BYTE*)(v16 + v15 + 1) != 0;
      }
      Unit_6e1e20_alt1(v12, (__int64*)a2, v13, v17);
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
      v18 = *(_QWORD*)(v12 + 392);
      if (v18 == 0) {
        goto LABEL_16;
      }
      if (game_Unit_GetJob_alt1(v12) == 0) {
        break;
      }
    LABEL_9:
      if (--v9 == 0) {
        goto LABEL_4;
      }
    }
    v18 = *(_QWORD*)(v12 + 392);
  LABEL_16:
    v19 = game_GameModeData_instance_;
    v21[0] = 9;
    if (game_GameModeData_instance_ != 0) {
      v19 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v10 = true;
    if (v18 != v19 && (*(_BYTE*)(v12 + 418) & 8) == 0) {
      v24 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v8) & 0xFFF;
      if ((game_HasSkill_alt1((_QWORD*)(v12 + 1744), (unsigned int*)&v24) &
           1) != 0 &&
          v21[0] != 9) {
        v10 = false;
      }
    }
    GameRoutine_6c47b0_alt1(v12, v21, v10, 0);
    goto LABEL_9;
  }
LABEL_2:
  game_120faa0_alt1();
  GameRoutine_6ec020_alt1(*(__int64**)(a1 + 56));
}

__int64 Impl_DeletingDestructor_6fac90(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v4;

  v4 = a1;
  *a1 = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v4);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 game_anonymous_Impl_UpdateRoute(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;

  v2 = game_HashString(*(&game_g_hero_ids + *(unsigned __int8*)(a1 + 15)));
  if (v2 == 0) {
    goto LABEL_25;
  }
  v3 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_25;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = v2;
    if (v2 >= v3) {
      v6 = v2 % v3;
    }
  }
  else {
    v6 = v5 & v2;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v6);
  if (v7 == nullptr || (v8 = (_QWORD*)*v7) == nullptr) {
  LABEL_25:
    v10 = 0;
    goto LABEL_26;
  }
  if ((v3 & v5) == 0) {
    while (1) {
      v11 = v8[1];
      if (v11 == v2) {
        if (v8[2] == v2) {
          goto LABEL_32;
        }
      }
      else if ((v11 & v5) != v6) {
        goto LABEL_25;
      }
      v8 = (_QWORD*)*v8;
      v10 = 0;
      if (v8 == nullptr) {
        goto LABEL_26;
      }
    }
  }
  while (1) {
    v9 = v8[1];
    if (v9 == v2) {
      break;
    }
    if (v9 >= v3) {
      v9 %= v3;
    }
    if (v9 != v6) {
      goto LABEL_25;
    }
  LABEL_15:
    v8 = (_QWORD*)*v8;
    if (v8 == nullptr) {
      goto LABEL_25;
    }
  }
  if (v8[2] != v2) {
    goto LABEL_15;
  }
LABEL_32:
  v10 = v8[3];
LABEL_26:
  *(_QWORD*)(a1 + 96) = v10;
  v14[0] = GameData_1f933d8;
  v14[1] = a1;
  v15 = v14;
  GameConst_7f8610(v14);
  if (v15 == v14) {
    v12 = 32;
  LABEL_30:
    (*(void (**)(__int64))(*v15 + v12))((__int64)v15);
  }
  else if (v15 != nullptr) {
    v12 = 40;
    goto LABEL_30;
  }
  return Impl_71f220(a1);
}

__int64 Impl_Destructor_718a40(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v45;

  v1 = *(__int64**)(a1 + 2784);
  v2 = *(__int64**)(a1 + 2792);
  *(_QWORD*)(a1 + 2816) = 0;
  *(_QWORD*)a1 = game_anonymous_Impl_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = v2 - v1;
  if (v5 >= 3) {
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v6, *v1);
        v1 = *(__int64**)(a1 + 2784);
        v2 = *(__int64**)(a1 + 2792);
      }
      *(_QWORD*)(a1 + 2784) = ++v1;
      v5 = v2 - v1;
    } while (v5 > 2);
  }
  if (v5 == 1) {
    v7 = 51;
  }
  else {
    if (v5 != 2) {
      goto LABEL_14;
    }
    v7 = 102;
  }
  *(_QWORD*)(a1 + 2808) = v7;
LABEL_14:
  if (v1 != v2) {
    do {
      if (*v1 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v8, *v1);
      }
      ++v1;
    } while (v1 != v2);
    v9 = *(_QWORD*)(a1 + 2792);
    v10 = *(_QWORD*)(a1 + 2784) - v9;
    if (v10 != 0) {
      *(_QWORD*)(a1 + 2792) = v9 + ((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v11 = *(_QWORD*)(a1 + 2776);
  if (v11 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v12, v11);
  }
  v13 = *(__int64**)(a1 + 2768);
  *(_QWORD*)(a1 + 2760) = GameData_212dda0[0] + 2;
  if (v13 != nullptr) {
    List_93b820_alt1(v13);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v14, (__int64)v13);
    *(_QWORD*)(a1 + 2768) = 0;
  }
  v15 = *(_QWORD*)(a1 + 2752);
  *(_QWORD*)(a1 + 2744) = GameData_212dd80[0] + 2;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
    *(_QWORD*)(a1 + 2752) = 0;
  }
  v16 = *(_QWORD*)(a1 + 2736);
  *(_QWORD*)(a1 + 2728) = GameData_212d7e0[0] + 2;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
    *(_QWORD*)(a1 + 2736) = 0;
  }
  v17 = *(__int64**)(a1 + 2664);
  v18 = *(__int64**)(a1 + 2672);
  *(_QWORD*)(a1 + 2696) = 0;
  v19 = v18 - v17;
  if (v19 >= 3) {
    do {
      if (*v17 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v20, *v17);
        v17 = *(__int64**)(a1 + 2664);
        v18 = *(__int64**)(a1 + 2672);
      }
      *(_QWORD*)(a1 + 2664) = ++v17;
      v19 = v18 - v17;
    } while (v19 > 2);
  }
  if (v19 == 1) {
    v21 = 2048;
  }
  else {
    if (v19 != 2) {
      goto LABEL_49;
    }
    v21 = 4096;
  }
  *(_QWORD*)(a1 + 2688) = v21;
LABEL_49:
  if (v17 != v18) {
    do {
      if (*v17 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v22, *v17);
      }
      ++v17;
    } while (v17 != v18);
    v23 = *(_QWORD*)(a1 + 2672);
    v24 = *(_QWORD*)(a1 + 2664) - v23;
    if (v24 != 0) {
      *(_QWORD*)(a1 + 2672) = v23 + ((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v25 = *(_QWORD*)(a1 + 2656);
  if (v25 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v26, v25);
  }
  GameRoutine_7188e0_alt1((__int64*)(a1 + 264));
  if ((*(_BYTE*)(a1 + 240) & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 256);
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v28, v27);
    }
  }
  v29 = *(_QWORD*)(a1 + 216);
  if (v29 != 0) {
    v30 = *(_QWORD*)(a1 + 224);
    if (v29 == v30) {
      goto LABEL_79;
    }
    v31 = *(_QWORD*)(a1 + 224);
    do {
      v32 = *(_BYTE*)(v31 - 24);
      v31 -= 24;
      if ((v32 & 1) != 0) {
        v33 = *(_QWORD*)(v30 - 8);
        if (v33 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v34 = 128;
          }
          else {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v34, v33);
        }
      }
      v30 = v31;
    } while (v31 != v29);
    v35 = *(_QWORD*)(a1 + 216);
    *(_QWORD*)(a1 + 224) = v29;
    v29 = v35;
    if (v35 != 0) {
    LABEL_79:
      v36 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v36, v29);
    }
  }
  GameGlobalSkill_Destructor_alt1((_QWORD*)(a1 + 184));
  v37 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)(a1 + 168) = GameData_212db08[0] + 16;
  if (v37 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 8LL))(v37);
    *(_QWORD*)(a1 + 176) = 0;
  }
  v38 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = GameData_212db90[0] + 2;
  if (v38 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 8LL))(v38);
    *(_QWORD*)(a1 + 160) = 0;
  }
  v39 = *(_QWORD*)(a1 + 144);
  *(_QWORD*)(a1 + 136) = GameData_212db68[0] + 2;
  if (v39 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 8LL))(v39);
    *(_QWORD*)(a1 + 144) = 0;
  }
  v40 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 120) = GameData_212daf0[0] + 16;
  if (v40 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
    *(_QWORD*)(a1 + 128) = 0;
  }
  v41 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 104) = GameData_212df70[0] + 2;
  *(_QWORD*)(a1 + 112) = 0;
  if (v41 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 8LL))(v41);
  }
  v42 = *(_QWORD**)(a1 + 48);
  *(_QWORD*)(a1 + 40) = GameData_212d588[0] + 2;
  if (v42 != nullptr) {
    GameVariable_826320(v42);
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v43, (__int64)v42);
    *(_QWORD*)(a1 + 48) = 0;
  }
  v45 = a1;
  *(_QWORD*)a1 = GameData_212d6d0 + 2;
  return GameRoutine_876a40_alt1(&GameData_21eea40, &v45);
}

__int64 Impl_Unknown7(__int64 a1, unsigned __int64 a2)
{
  __int64 v2;
  char v3;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  char v9;
  __int64 v10;
  char v11;
  __int64 v12;
  char v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
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
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  char* v92;
  char* v93;
  __int16 v94;
  char* v95;
  char* v96;
  signed __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  char* v101;
  unsigned __int64 v102;
  char* v103;
  __int64* v104;
  __int64 v105;
  unsigned __int64 v106;
  char* v107;
  __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64* v112;
  signed __int64 v113;
  _QWORD* v114;
  _BYTE* v115;
  __int64 v116;
  unsigned __int64 v117;
  _BYTE* v118;
  _BYTE* v119;
  _BYTE* v120;
  __int64 v121;
  char* v122;
  unsigned __int64 v123;
  __int64 v124;
  _BYTE* v125;
  char* v126;
  _BYTE* v127;
  unsigned __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  _BYTE* v132;
  char v133;
  char* v134;
  _BYTE* v135;
  char* v136;
  char v137;
  char* v138;
  char* v139;
  char v140;
  char* v141;
  char* v142;
  char v143;
  char* v144;
  char* v145;
  char v146;
  char* v147;
  char* v148;
  char v149;
  char* v150;
  char* v151;
  char v152;
  char* v153;
  char* v154;
  char v155;
  char* v156;
  char v157;
  char* v158;
  __int64 v159;
  unsigned __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  unsigned __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 (**v178)(unsigned __int64, _QWORD*);
  __int64 v179;
  __int64 v180;
  __int64 v181;
  int v182;
  __int64 (**v183)(unsigned __int64, _QWORD*);
  __int64 v184;
  _QWORD* v185;
  __int64 v186;
  __int64 v187;
  int v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  unsigned __int64 v195;
  __int64 v196;
  char* v197;
  __int64* v198;
  __int16 v199;
  char* v200;
  __int64 v201;
  __int64 v202;
  char* v203;
  __int64* v204;
  unsigned __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  int v209;
  __int64 (**v210)(unsigned __int64, _QWORD*);
  __int64 result;
  __int64 v212;
  unsigned int v213;
  unsigned int v214;
  unsigned int v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  unsigned int v220;
  unsigned int v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  unsigned __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  char* v229;
  unsigned __int64 v230;
  __int64 v231;
  unsigned __int64 v232;
  char* v233;
  __int64 v234;
  unsigned __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64* v238;
  signed __int64 v239;
  _QWORD* v240;
  _QWORD* v241;
  __int64 v242;
  _QWORD* v243;
  _QWORD* v244;
  _QWORD* v245;
  __int64 v246;
  char* v247;
  unsigned __int64 v248;
  __int64 v249;
  __int64 v250;
  char* v251;
  _QWORD* v252;
  __int64 v253;
  _QWORD* v254;
  __int64 v255;
  __int64* v256;
  __int64 v257;
  _QWORD* v258;
  __int64 v259;
  unsigned __int64 v260;
  __int64 v261;
  __int64 (**v262)(unsigned __int64, _QWORD*);
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  signed __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  unsigned __int64 v273;
  __int64 v274;
  __int64 v275;
  unsigned __int64 v276;
  unsigned __int64 v277;
  struct {
    _QWORD v278[4];
    _QWORD* v279;
  } v278_;

  v2 = *(int*)(a2 + 20);
  v3 = *(_BYTE*)(a1 + 12);
  v5 = a1;
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3;
  v6 = *(int*)(a2 + 20);
  v7 = *(_BYTE*)(a1 + 13);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v7;
  v8 = *(int*)(a2 + 20);
  v9 = *(_BYTE*)(a1 + 15);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v9;
  v10 = *(int*)(a2 + 20);
  v11 = *(_DWORD*)(a1 + 60);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v11;
  v12 = *(int*)(a2 + 20);
  v13 = *(_DWORD*)(a1 + 64);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v13;
  v14 = *(int*)(a2 + 20);
  v15 = *(_DWORD*)(a1 + 72);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = v15;
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE1(v15);
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = BYTE2(v15);
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = HIBYTE(v15);
  v19 = *(int*)(a2 + 20);
  v20 = *(_DWORD*)(a1 + 76);
  *(_DWORD*)(a2 + 20) = v19 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = v20;
  v21 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE1(v20);
  v22 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = BYTE2(v20);
  v23 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v23 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = HIBYTE(v20);
  v24 = *(int*)(a2 + 20);
  LOBYTE(v20) = *(_DWORD*)(a1 + 68);
  *(_DWORD*)(a2 + 20) = v24 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = v20;
  v25 = *(int*)(a2 + 20);
  v26 = *(_DWORD*)(a1 + 80);
  *(_DWORD*)(a2 + 20) = v25 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = v26;
  v27 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v27 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = BYTE1(v26);
  v28 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v28 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = BYTE2(v26);
  v29 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v29 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = HIBYTE(v26);
  v30 = *(int*)(a2 + 20);
  v31 = *(_DWORD*)(a1 + 84);
  *(_DWORD*)(a2 + 20) = v30 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = v31;
  v32 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v32 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = BYTE1(v31);
  v33 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v33 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = BYTE2(v31);
  v34 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v34 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v34) = HIBYTE(v31);
  v35 = *(int*)(a2 + 20);
  v36 = *(_DWORD*)(a1 + 88);
  *(_DWORD*)(a2 + 20) = v35 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = v36;
  v37 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v37 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = BYTE1(v36);
  v38 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v38 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = BYTE2(v36);
  v39 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v39 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39) = HIBYTE(v36);
  v40 = *(int*)(a2 + 20);
  v41 = *(_DWORD*)(a1 + 8);
  *(_DWORD*)(a2 + 20) = v40 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40) = v41;
  v42 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v42 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = BYTE1(v41);
  v43 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v43 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v43) = BYTE2(v41);
  v44 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v44 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v44) = HIBYTE(v41);
  v45 = *(int*)(a2 + 20);
  v46 = *(_DWORD*)(a1 + 2704);
  *(_DWORD*)(a2 + 20) = v45 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v45) = v46;
  v47 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v47 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v47) = BYTE1(v46);
  v48 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v48 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v48) = BYTE2(v46);
  v49 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v49 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v49) = HIBYTE(v46);
  v50 = *(int*)(a2 + 20);
  v51 = *(_DWORD*)(a1 + 2708);
  *(_DWORD*)(a2 + 20) = v50 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v50) = v51;
  v52 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v52 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v52) = BYTE1(v51);
  v53 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v53 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v53) = BYTE2(v51);
  v54 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v54 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v54) = HIBYTE(v51);
  v55 = *(int*)(a2 + 20);
  v56 = *(_DWORD*)(a1 + 2712);
  *(_DWORD*)(a2 + 20) = v55 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v55) = v56;
  v57 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v57 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v57) = BYTE1(v56);
  v58 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v58 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v58) = BYTE2(v56);
  v59 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v59 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v59) = HIBYTE(v56);
  v60 = *(int*)(a2 + 20);
  v61 = *(_DWORD*)(a1 + 2716);
  *(_DWORD*)(a2 + 20) = v60 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v60) = v61;
  v62 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v62 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v62) = BYTE1(v61);
  v63 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v63 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v63) = BYTE2(v61);
  v64 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v64 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v64) = HIBYTE(v61);
  v65 = *(int*)(a2 + 20);
  LOWORD(v61) = *(_WORD*)(a1 + 2720);
  *(_DWORD*)(a2 + 20) = v65 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v65) = v61;
  v66 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v66 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v66) = BYTE1(v61);
  v67 = *(int*)(a2 + 20);
  LOBYTE(v61) = *(_BYTE*)(a1 + 14);
  *(_DWORD*)(a2 + 20) = v67 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v67) = v61;
  GameRoutine_65f3d0(a2, *(int**)(a1 + 16));
  v68 = game_HashString_alt1(
      (__int64)GameData_1fb11a0[*(unsigned __int8*)(v5 + 56)]);
  v69 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v69 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v69) = v68;
  v70 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v70 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v70) = BYTE1(v68);
  v71 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v71 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v71) = BYTE2(v68);
  v72 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v72 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v72) = BYTE3(v68);
  v73 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v73 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v73) = BYTE4(v68);
  v74 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v74 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v74) = BYTE5(v68);
  v75 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v75 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v75) = BYTE6(v68);
  v76 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v76 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v76) = HIBYTE(v68);
  v77 = game_HashString_alt1(
      (__int64)GameData_1fb11a0[*(unsigned __int8*)(v5 + 57)]);
  v78 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v78 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v78) = v77;
  v79 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v79 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v79) = BYTE1(v77);
  v80 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v80 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v80) = BYTE2(v77);
  v81 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v81 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v81) = BYTE3(v77);
  v82 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v82 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v82) = BYTE4(v77);
  v83 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v83 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v83) = BYTE5(v77);
  v84 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v84 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v84) = BYTE6(v77);
  v85 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v85 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v85) = HIBYTE(v77);
  v86 = *(int*)(a2 + 20);
  v87 = *(_QWORD*)(v5 + 2696);
  *(_DWORD*)(a2 + 20) = v86 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v86) = v87;
  v88 = *(_QWORD*)(v5 + 2696);
  v89 = fw_memory_g_heap_manager_ptr;
  if (v88 != 0) {
    v90 = *(_QWORD*)(v5 + 2688);
    v91 = *(_QWORD*)(v5 + 2664);
    v271 = v5;
    v92 = (char*)(v91 + 8 * (v90 >> 12));
    if (*(_QWORD*)(v5 + 2672) == v91 ||
        (v93 = (char*)(*(_QWORD*)v92 + (*(_QWORD*)(v5 + 2688) & 0xFFFLL)),
         v94 = v90 + v88, v95 = (char*)(v91 + 8 * ((v90 + v88) >> 12)),
         v96 = (char*)(*(_QWORD*)v95 + (v94 & 0xFFF)), v93 == v96) ||
        (v97 = &v96[512 * (v95 - v92)] - &v93[*(_QWORD*)v95] + *(_QWORD*)v92) ==
            0) {
      v103 = nullptr;
      v104 = nullptr;
      v117 = 0;
    }
    else {
      v269 = v97;
      v98 = v97 + 1;
      if ((v98 & 0xFFF) != 0) {
        v99 = (v98 >> 12) + 1;
      }
      else {
        v99 = v98 >> 12;
      }
      v100 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 8 * v99,
                                            16, 0);
      v101 = (char*)(v100 + 8 * v99);
      v102 = v100;
      v103 = (char*)v100;
      v104 = (__int64*)v100;
      do {
        v105 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4096, 16, 0);
        if (v104 == (__int64*)v101) {
          if ((unsigned __int64)v103 <= v102) {
            v273 = v102;
            v275 = v105;
            if (v101 == (char*)v102) {
              v109 = 1;
            }
            else {
              v109 = (__int64)&v101[-v102] >> 2;
            }
            if (v109 >> 61 != 0) {
            LABEL_200:
              GameRoutine_60a210();
            }
            v110 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v109, 16, 0);
            v111 = v110;
            v112 = (__int64*)(v110 + 8 * (v109 >> 2));
            v113 = v101 - v103;
            v104 = v112;
            if (v101 != v103) {
              v104 = (__int64*)((char*)v112 + v113);
              v114 = (_QWORD*)(v110 + 8 * (v109 >> 2));
              do {
                v115 = *(_BYTE**)v103;
                v103 += 8;
                v113 -= 8LL;
                *v114++ = v115;
              } while (v113 != 0);
            }
            v101 = (char*)(v110 + 8 * v109);
            v116 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v116 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v116, v273);
            v105 = v275;
            v103 = (char*)v112;
            v102 = v111;
          }
          else {
            v106 = (((__int64)&v103[-v102] >> 3) + 1 +
                    ((unsigned __int64)(((__int64)&v103[-v102] >> 3) + 1) >>
                     63)) >>
                   1;
            v107 = &v103[-8 * v106];
            if (v101 != v103) {
              v108 = v105;
              memmove(&v103[-8 * v106], v103, v101 - v103);
              v105 = v108;
            }
            v104 = (__int64*)&v107[v101 - v103];
            v103 = v107;
          }
        }
        *v104++ = v105;
        --v99;
      } while (v99 != 0);
      if (v104 == (__int64*)v103) {
        v118 = nullptr;
        v119 = nullptr;
      }
      else {
        v118 = *(_BYTE**)v103;
        v119 = *(_BYTE**)v103;
      }
      v120 = *(_BYTE**)v103;
      v121 = (__int64)&v118[v269 - *(_QWORD*)v103];
      if (v121 < 1) {
        v123 = 4095 - v121;
        LOWORD(v121) = ~(4095 - v121);
        v122 = &v103[-8 * (v123 >> 12)];
      }
      else {
        v122 = &v103[8 * ((unsigned __int64)v121 >> 12)];
      }
      v124 = *(_QWORD*)v122 + (v121 & 0xFFF);
      if (v119 != (_BYTE*)v124) {
        v125 = nullptr;
        v126 = v103;
        do {
          v127 = v120 + 4096;
          v128 = (unsigned __int64)v119;
          v129 = (__int64)v125;
          if (v126 == v122) {
            v127 = (_BYTE*)v124;
          }
          v130 = v119 - v127;
          if (v130 != 0) {
            v131 = ((int)v127 - (int)v128) & 7LL;
            if (v131 != 0) {
              v132 = (_BYTE*)v128;
              do {
                v133 = *v93++;
                *v132++ = v133;
                if (&v93[-*(_QWORD*)v92] == (char*)((char*)0x1000LL)) {
                  v134 = *((char**)v92 + 1);
                  v92 += 8;
                  v93 = v134;
                }
                --v131;
              } while (v131 != 0);
            }
            else {
              v132 = (_BYTE*)v128;
            }
            if (v130 <= 0xFFFFFFFFFFFFFFF8LL) {
              do {
                v137 = *v93;
                v136 = v93 + 1;
                *v132 = v137;
                if (&v136[-*(_QWORD*)v92] == (char*)((char*)0x1000LL)) {
                  v138 = *((char**)v92 + 1);
                  v92 += 8;
                  v136 = v138;
                }
                v140 = *v136;
                v139 = v136 + 1;
                v132[1] = v140;
                if (&v139[-*(_QWORD*)v92] == (char*)((char*)0x1000LL)) {
                  v141 = *((char**)v92 + 1);
                  v92 += 8;
                  v139 = v141;
                }
                v143 = *v139;
                v142 = v139 + 1;
                v132[2] = v143;
                if (&v142[-*(_QWORD*)v92] == (char*)((char*)0x1000LL)) {
                  v144 = *((char**)v92 + 1);
                  v92 += 8;
                  v142 = v144;
                }
                v146 = *v142;
                v145 = v142 + 1;
                v132[3] = v146;
                if (&v145[-*(_QWORD*)v92] == (char*)((char*)0x1000LL)) {
                  v147 = *((char**)v92 + 1);
                  v92 += 8;
                  v145 = v147;
                }
                v149 = *v145;
                v148 = v145 + 1;
                v132[4] = v149;
                if (&v148[-*(_QWORD*)v92] == (char*)((char*)0x1000LL)) {
                  v150 = *((char**)v92 + 1);
                  v92 += 8;
                  v148 = v150;
                }
                v152 = *v148;
                v151 = v148 + 1;
                v132[5] = v152;
                if (&v151[-*(_QWORD*)v92] == (char*)((char*)0x1000LL)) {
                  v153 = *((char**)v92 + 1);
                  v92 += 8;
                  v151 = v153;
                }
                v155 = *v151;
                v154 = v151 + 1;
                v132[6] = v155;
                if (&v154[-*(_QWORD*)v92] == (char*)((char*)0x1000LL)) {
                  v156 = *((char**)v92 + 1);
                  v92 += 8;
                  v154 = v156;
                }
                v157 = *v154;
                v93 = v154 + 1;
                v132[7] = v157;
                if (&v93[-*(_QWORD*)v92] == (char*)((char*)0x1000LL)) {
                  v158 = *((char**)v92 + 1);
                  v92 += 8;
                  v93 = v158;
                }
                v132 += 8;
              } while (v132 != v127);
            }
          }
          else {
            v127 = (_BYTE*)v128;
          }
          v125 = &v127[v129 - v128];
          if (v126 == v122) {
            break;
          }
          v135 = *((_BYTE**)v126 + 1);
          v126 += 8;
          v120 = v135;
          v119 = v135;
        } while (v135 != (_BYTE*)v124);
        if (v125 != nullptr) {
          v159 = v128 - (_QWORD)v127 - v129 + 1;
          v160 = (unsigned __int64)&v127[v129 + ~v128];
          do {
            if (v104 == (__int64*)v103) {
              v161 = 0;
            }
            else {
              v161 = (((char*)v104 - v103) << 9) - 1;
            }
            v162 = game_HashString_alt1((__int64)GameData_1fb11a0[*(
                unsigned __int8*)(*(_QWORD*)&v103[8 * (v160 >> 12)] +
                                  (v160 & 0xFFF))]);
            v163 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v163 + 1;
            *(_BYTE*)(*(_QWORD*)(a2 + 8) + v163) = v162;
            v164 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v164 + 1;
            *(_BYTE*)(*(_QWORD*)(a2 + 8) + v164) = BYTE1(v162);
            v165 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v165 + 1;
            *(_BYTE*)(*(_QWORD*)(a2 + 8) + v165) = BYTE2(v162);
            v166 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v166 + 1;
            *(_BYTE*)(*(_QWORD*)(a2 + 8) + v166) = BYTE3(v162);
            v167 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v167 + 1;
            *(_BYTE*)(*(_QWORD*)(a2 + 8) + v167) = BYTE4(v162);
            v168 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v168 + 1;
            *(_BYTE*)(*(_QWORD*)(a2 + 8) + v168) = BYTE5(v162);
            v169 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v169 + 1;
            *(_BYTE*)(*(_QWORD*)(a2 + 8) + v169) = BYTE6(v162);
            v170 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v170 + 1;
            *(_BYTE*)(*(_QWORD*)(a2 + 8) + v170) = HIBYTE(v162);
            if ((unsigned __int64)(v161 + v159) >= 0x2000) {
              v172 = *--v104;
              v171 = v172;
              if (v172 != 0) {
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                  v173 = 128;
                }
                else {
                  v173 = 56;
                }
                nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v173,
                                              v171);
              }
            }
            ++v159;
            --v160;
          } while (v159 != 1);
        }
      }
      v117 = v102;
    }
    v5 = v271;
    v89 = fw_memory_g_heap_manager_ptr;
    if ((unsigned __int64)((char*)v104 - v103) >= 0x11) {
      v174 = (char*)v104 - v103;
      do {
        if (*(_QWORD*)v103 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v89 + 200LL) != 0) {
            v175 = 128;
          }
          else {
            v175 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v89 + v175, *(_QWORD*)v103);
        }
        v103 += 8;
        v174 -= 8LL;
      } while (v174 > 0x10);
    }
    for (; v103 != (char*)v104; v103 += 8) {
      if (*(_QWORD*)v103 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v89 + 200LL) != 0) {
          v176 = 128;
        }
        else {
          v176 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v89 + v176, *(_QWORD*)v103);
      }
    }
    if (v117 != 0) {
      v177 = 128;
      if (*(_QWORD*)(*(_QWORD*)v89 + 200LL) == 0) {
        v177 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v89 + v177, v117);
    }
  }
  v178 = *(__int64 (***)(unsigned __int64, _QWORD*))a2;
  LODWORD(v278_.v278[0]) = 0;
  v179 = *(_QWORD*)(v5 + 24);
  if (((*v178)(a2, v278_.v278) & 1) != 0) {
    v180 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v180 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v180) = 0;
    if (v179 != 0) {
      v181 = *(_QWORD*)(*(_QWORD*)(v179 + 24) + 40LL);
    }
    else {
      v181 = 0;
    }
    GameRoutine_65f240(a2, v181);
  }
  (*(void (**)(unsigned __int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  GameRoutine_65f3d0(a2, *(int**)(v5 + 32));
  GameVariable_829aa0(v5 + 40, a2);
  GameReliance_8e2280(*(_QWORD*)(v5 + 128), a2);
  v182 = game_HashString32_alt1((__int64)"GameSituation");
  v183 = *(__int64 (***)(unsigned __int64, _QWORD*))a2;
  LODWORD(v278_.v278[0]) = v182;
  if (((*v183)(a2, v278_.v278) & 1) != 0) {
    v184 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v184 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v184) = 3;
  }
  (*(void (**)(unsigned __int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  v278_.v279 = v278_.v278;
  v278_.v278[0] = GameData_1f932c8;
  v278_.v278[1] = v5;
  if (GameData_21eea58 != 0 && (*(_BYTE*)(GameData_21eea58 + 33) & 1) != 0) {
    v185 = v278_.v278;
  LABEL_113:
    v186 = 32;
    goto LABEL_114;
  }
  GameRoutine_8eb020_alt1(*(_QWORD*)(v5 + 176), a2);
  v185 = v278_.v279;
  if (v278_.v279 == v278_.v278) {
    goto LABEL_113;
  }
  if (v278_.v279 != nullptr) {
    v186 = 40;
  LABEL_114:
    (*(void (**)(__int64))(*v185 + v186))((__int64)v185);
  }
  GameRecord_99e460(*(_QWORD*)(v5 + 112), a2);
  v187 = *(int*)(a2 + 20);
  v188 = *(_DWORD*)(v5 + 92);
  *(_DWORD*)(a2 + 20) = v187 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v187) = v188;
  v189 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v189 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v189) = BYTE1(v188);
  v190 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v190 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v190) = BYTE2(v188);
  v191 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v191 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v191) = HIBYTE(v188);
  GameRoutine_90dd20(*(_DWORD**)(v5 + 160), a2);
  GameRoutine_973f40(v5 + 200, a2);
  v192 = *(int*)(a2 + 20);
  v193 = *(_QWORD*)(v5 + 304);
  *(_DWORD*)(a2 + 20) = v192 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v192) = v193;
  v194 = *(_QWORD*)(v5 + 304);
  if (v194 != 0) {
    v195 = *(_QWORD*)(v5 + 296);
    v196 = *(_QWORD*)(v5 + 272);
    v197 = (char*)(v196 + 8 * (v195 >> 9));
    if (*(_QWORD*)(v5 + 280) == v196 ||
        (v198 =
             (__int64*)(*(_QWORD*)v197 + 8 * (*(_QWORD*)(v5 + 296) & 0x1FFLL)),
         v199 = v195 + v194, v200 = (char*)(v196 + 8 * ((v195 + v194) >> 9)),
         v201 = *(_QWORD*)v200 + 8LL * (v199 & 0x1FF),
         v198 == (__int64*)v201) ||
        (v202 = ((8LL * (v199 & 0x1FF)) >> 3) + ((v200 - v197) << 6) -
                ((8 * (*(_QWORD*)(v5 + 296) & 0x1FFLL)) >> 3)) == 0) {
      v203 = nullptr;
      v204 = nullptr;
      v276 = 0;
    }
    else {
      v270 = ((v201 - *(_QWORD*)v200) >> 3) + ((v200 - v197) << 6) -
             ((8 * (*(_QWORD*)(v5 + 296) & 0x1FFLL)) >> 3);
      v272 = v5;
      v225 = v202 + 1;
      v226 = *(_QWORD*)v89;
      if ((v225 & 0x1FF) != 0) {
        v227 = (v225 >> 9) + 1;
      }
      else {
        v227 = v225 >> 9;
      }
      v228 = fw_memory_HeapManager_Allocate(v226, 8 * v227, 16, 0);
      v229 = (char*)(v228 + 8 * v227);
      v230 = v228;
      v203 = (char*)v228;
      v204 = (__int64*)v228;
      do {
        v231 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4096, 16, 0);
        if (v204 == (__int64*)v229) {
          if ((unsigned __int64)v203 <= v230) {
            v274 = v231;
            v277 = v230;
            if (v229 == (char*)v230) {
              v235 = 1;
            }
            else {
              v235 = (__int64)&v229[-v230] >> 2;
            }
            if (v235 >> 61 != 0) {
              goto LABEL_200;
            }
            v236 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v235, 16, 0);
            v237 = v236;
            v238 = (__int64*)(v236 + 8 * (v235 >> 2));
            v239 = v229 - v203;
            v204 = v238;
            if (v229 != v203) {
              v204 = (__int64*)((char*)v238 + v239);
              v240 = (_QWORD*)(v236 + 8 * (v235 >> 2));
              do {
                v241 = *(_QWORD**)v203;
                v203 += 8;
                v239 -= 8LL;
                *v240++ = v241;
              } while (v239 != 0);
            }
            v229 = (char*)(v236 + 8 * v235);
            v242 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v242 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v242, v277);
            v231 = v274;
            v203 = (char*)v238;
            v230 = v237;
          }
          else {
            v232 = (((__int64)&v203[-v230] >> 3) + 1 +
                    ((unsigned __int64)(((__int64)&v203[-v230] >> 3) + 1) >>
                     63)) >>
                   1;
            v233 = &v203[-8 * v232];
            if (v229 != v203) {
              v234 = v231;
              memmove(&v203[-8 * v232], v203, v229 - v203);
              v231 = v234;
            }
            v204 = (__int64*)&v233[v229 - v203];
            v203 = v233;
          }
        }
        *v204++ = v231;
        --v227;
      } while (v227 != 0);
      v276 = v230;
      if (v204 == (__int64*)v203) {
        v243 = nullptr;
        v244 = nullptr;
      }
      else {
        v243 = *(_QWORD**)v203;
        v244 = *(_QWORD**)v203;
      }
      v5 = v272;
      v89 = fw_memory_g_heap_manager_ptr;
      v245 = *(_QWORD**)v203;
      v246 = v270 + (((__int64)v243 - *(_QWORD*)v203) >> 3);
      if (v246 < 1) {
        v248 = 511 - v246;
        LOWORD(v246) = ~(511 - v246);
        v247 = &v203[-8 * (v248 >> 9)];
      }
      else {
        v247 = &v203[8 * ((unsigned __int64)v246 >> 9)];
      }
      v249 = *(_QWORD*)v247 + 8 * (v246 & 0x1FF);
      if (v244 != (_QWORD*)v249) {
        v250 = 0;
        v251 = v203;
        do {
          v252 = v245 + 512;
          v253 = v250;
          if (v251 == v247) {
            v252 = (_QWORD*)v249;
          }
          if (v244 == v252) {
            v252 = v244;
          }
          else {
            v254 = v244;
            do {
              v255 = *v198++;
              *v254++ = v255;
              if ((char*)((char*)v198 - *(_QWORD*)v197) ==
                  (char*)((char*)0x1000LL)) {
                v256 = *((__int64**)v197 + 1);
                v197 += 8;
                v198 = v256;
              }
            } while (v254 != v252);
          }
          v257 = v252 - v244;
          v250 = v257 + v253;
          if (v251 == v247) {
            break;
          }
          v258 = *((_QWORD**)v251 + 1);
          v251 += 8;
          v245 = v258;
          v244 = v258;
        } while (v258 != (_QWORD*)v249);
        if (v250 != 0) {
          v259 = 1 - (v253 + v257);
          v260 = v253 + v257 - 1;
          do {
            v261 = *(_QWORD*)(*(_QWORD*)&v203[8 * (v260 >> 9)] +
                              8 * (v260 & 0x1FF));
            v262 = *(__int64 (***)(unsigned __int64, _QWORD*))a2;
            LODWORD(v278_.v278[0]) = 0;
            if (((*v262)(a2, v278_.v278) & 1) != 0) {
              v263 = *(int*)(a2 + 20);
              *(_DWORD*)(a2 + 20) = v263 + 1;
              *(_BYTE*)(*(_QWORD*)(a2 + 8) + v263) = 0;
              if (v261 != 0) {
                v264 = *(_QWORD*)(*(_QWORD*)(v261 + 24) + 40LL);
              }
              else {
                v264 = 0;
              }
              GameRoutine_65f240(a2, v264);
            }
            if (v204 == (__int64*)v203) {
              v265 = 0;
            }
            else {
              v265 = (((char*)v204 - v203) << 6) - 1;
            }
            (*(void (**)(unsigned __int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
            if ((unsigned __int64)(v265 + v259) >= 0x400) {
              v267 = *--v204;
              v266 = v267;
              if (v267 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v89 + 200LL) != 0) {
                  v268 = 128;
                }
                else {
                  v268 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v89 + v268, v266);
              }
            }
            ++v259;
            --v260;
          } while (v259 != 1);
        }
      }
    }
    if ((unsigned __int64)((char*)v204 - v203) >= 0x11) {
      v205 = (char*)v204 - v203;
      do {
        if (*(_QWORD*)v203 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v89 + 200LL) != 0) {
            v206 = 128;
          }
          else {
            v206 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v89 + v206, *(_QWORD*)v203);
        }
        v203 += 8;
        v205 -= 8LL;
      } while (v205 > 0x10);
    }
    for (; v203 != (char*)v204; v203 += 8) {
      if (*(_QWORD*)v203 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v89 + 200LL) != 0) {
          v207 = 128;
        }
        else {
          v207 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v89 + v207, *(_QWORD*)v203);
      }
    }
    if (v276 != 0) {
      v208 = 128;
      if (*(_QWORD*)(*(_QWORD*)v89 + 200LL) == 0) {
        v208 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v89 + v208, v276);
    }
  }
  GameRoutine_682a20(a2);
  GameRoutine_71bd40_alt1((unsigned __int8*)(v5 + 328), a2);
  Impl_71d2c0(v5 + 404, a2);
  v209 = game_HashString32_alt1((__int64)"Storage");
  v210 = *(__int64 (***)(unsigned __int64, _QWORD*))a2;
  LODWORD(v278_.v278[0]) = v209;
  if (((*v210)(a2, v278_.v278) & 1) != 0) {
    TransporterConst_89c4e0(*(_QWORD*)(v5 + 2736), a2);
    LegionPool_937fe0(*(_QWORD*)(v5 + 2752), a2);
    RidePool_93d360(*(_QWORD*)(v5 + 2768), a2);
  }
  result =
      (*(__int64 (**)(unsigned __int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  v212 = *(int*)(a2 + 20);
  v213 = GameData_21d8810;
  *(_DWORD*)(a2 + 20) = v212 + 1;
  v214 = HIWORD(v213);
  v215 = HIBYTE(v213);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v212) = v213;
  v216 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v216 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v216) = BYTE1(v213);
  v217 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v217 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v217) = v214;
  v218 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v218 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v218) = v215;
  v219 = *(int*)(a2 + 20);
  LOWORD(v218) = GameData_21d8828;
  v220 = HIWORD(GameData_21d8828);
  v221 = HIBYTE(GameData_21d8828);
  *(_DWORD*)(a2 + 20) = v219 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v219) = v218;
  v222 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v222 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v222) = BYTE1(v218);
  v223 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v223 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v223) = v220;
  v224 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v224 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v224) = v221;
  return result;
}

void Impl_Unknown8_71a540(__int64 a1, __int64 a2, int a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
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
  bool v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  char v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  char v81;
  __int64 v82;
  int v83;
  char* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  char v94;
  char* v95;
  __int64 v96;
  unsigned __int64 v97;
  char v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  char* v103;
  __int64 v104;
  __int16 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64* v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  int v115;
  int v116;
  int v117;
  __int64 v118;
  __int64 v119;
  int v120;
  int v121;
  int v122;
  __int64 v123;
  __int64 v124;
  int v125;
  int v126;
  int v127;
  __int64 v128;
  __int64 v129;
  int v130;
  int v131;
  int v132;
  __int64 v133;
  __int64 v134;
  __int16 v135;
  __int64 v136;
  __int64 v137;
  int v138;
  int v139;
  int v140;
  char* v141;
  unsigned __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  int v150;
  __int64 v151;
  __int64 (***v152)();
  __int64 v153;
  __int64 v154;
  __int64 v155;
  int v156;
  int v157;
  int v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  int v171;
  __int64 v172;
  __int64* v173;
  char* v174;
  char* v175;
  __int64 v176;
  __int64 v177;
  unsigned __int64 v178;
  __int64 v179;
  __int64 v180;
  unsigned __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  unsigned __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  unsigned __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  int v197;
  __int64 v198;
  int v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  int v208;
  int v209;
  int v210;
  int v211;
  __int64 ProgramTotalActiveTimeEv;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  int v216;
  int v217;
  int v218;
  int v219;
  __int64 v220;
  __int64 v221;
  int v222;
  _QWORD v223[2];
  struct {
    __int64 (**v224)();
    char* v225;
    char* v226;
    __int64 v227;
    __int64* v228;
    __int64 v229;
  } v224_;

  GameRoutine_716760(a1);
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(a1 + 12) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6);
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(a1 + 13) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7);
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(a1 + 15) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_DWORD*)(a1 + 60) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v9);
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_DWORD*)(a1 + 64) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v10);
  v11 = *(int*)(a2 + 20);
  v12 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  v13 = *(unsigned __int8*)(v12 + v11);
  *(_DWORD*)(a2 + 20) = v11 + 2;
  v14 = v13 | (*(unsigned __int8*)(v12 + v11 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v11 + 3;
  v15 = *(unsigned __int8*)(v12 + v11 + 2);
  *(_DWORD*)(a2 + 20) = v11 + 4;
  *(_DWORD*)(a1 + 72) =
      v14 | (v15 << 16) | (*(unsigned __int8*)(v12 + v11 + 3) << 24);
  v16 = *(int*)(a2 + 20);
  v17 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  v18 = *(unsigned __int8*)(v17 + v16);
  *(_DWORD*)(a2 + 20) = v16 + 2;
  v19 = v18 | (*(unsigned __int8*)(v17 + v16 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v16 + 3;
  v20 = *(unsigned __int8*)(v17 + v16 + 2);
  *(_DWORD*)(a2 + 20) = v16 + 4;
  *(_DWORD*)(a1 + 76) =
      v19 | (v20 << 16) | (*(unsigned __int8*)(v17 + v16 + 3) << 24);
  v21 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_DWORD*)(a1 + 68) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v21);
  if (a3 <= 5) {
    if (a3 != 5 && a3 >= 2) {
      *(_DWORD*)(a2 + 20) += 4;
    }
    goto LABEL_9;
  }
  v22 = *(int*)(a2 + 20);
  v23 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  v24 = *(unsigned __int8*)(v23 + v22);
  *(_DWORD*)(a2 + 20) = v22 + 2;
  v25 = v24 | (*(unsigned __int8*)(v23 + v22 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v22 + 3;
  v26 = *(unsigned __int8*)(v23 + v22 + 2);
  *(_DWORD*)(a2 + 20) = v22 + 4;
  *(_DWORD*)(a1 + 80) =
      v25 | (v26 << 16) | (*(unsigned __int8*)(v23 + v22 + 3) << 24);
  if ((unsigned int)a3 < 0xC) {
    if (a3 != 6) {
      v136 = *(int*)(a2 + 20);
      v137 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v136 + 1;
      v138 = *(unsigned __int8*)(v137 + v136);
      *(_DWORD*)(a2 + 20) = v136 + 2;
      v139 = v138 | (*(unsigned __int8*)(v137 + v136 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v136 + 3;
      v140 = *(unsigned __int8*)(v137 + v136 + 2);
      *(_DWORD*)(a2 + 20) = v136 + 4;
      *(_DWORD*)(a1 + 8) =
          v139 | (v140 << 16) | (*(unsigned __int8*)(v137 + v136 + 3) << 24);
      goto LABEL_10;
    }
  LABEL_9:
    *(_DWORD*)(a1 + 8) = 0;
    goto LABEL_10;
  }
  v27 = *(int*)(a2 + 20);
  v28 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v27 + 1;
  v29 = *(unsigned __int8*)(v28 + v27);
  *(_DWORD*)(a2 + 20) = v27 + 2;
  v30 = v29 | (*(unsigned __int8*)(v28 + v27 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v27 + 3;
  v31 = *(unsigned __int8*)(v28 + v27 + 2);
  *(_DWORD*)(a2 + 20) = v27 + 4;
  *(_DWORD*)(a1 + 84) =
      v30 | (v31 << 16) | (*(unsigned __int8*)(v28 + v27 + 3) << 24);
  v32 = *(int*)(a2 + 20);
  v33 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v32 + 1;
  v34 = *(unsigned __int8*)(v33 + v32);
  *(_DWORD*)(a2 + 20) = v32 + 2;
  v35 = v34 | (*(unsigned __int8*)(v33 + v32 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v32 + 3;
  v36 = *(unsigned __int8*)(v33 + v32 + 2);
  *(_DWORD*)(a2 + 20) = v32 + 4;
  v37 = v35 | (v36 << 16) | (*(unsigned __int8*)(v33 + v32 + 3) << 24);
  if (a3 == 12) {
    *(_DWORD*)(a1 + 8) = v37;
    goto LABEL_10;
  }
  *(_DWORD*)(a1 + 88) = v37;
  v113 = *(int*)(a2 + 20);
  v114 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v113 + 1;
  v115 = *(unsigned __int8*)(v114 + v113);
  *(_DWORD*)(a2 + 20) = v113 + 2;
  v116 = v115 | (*(unsigned __int8*)(v114 + v113 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v113 + 3;
  v117 = *(unsigned __int8*)(v114 + v113 + 2);
  *(_DWORD*)(a2 + 20) = v113 + 4;
  *(_DWORD*)(a1 + 8) =
      v116 | (v117 << 16) | (*(unsigned __int8*)(v114 + v113 + 3) << 24);
  if ((unsigned int)a3 >= 0xE) {
    v118 = *(int*)(a2 + 20);
    v119 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v118 + 1;
    v120 = *(unsigned __int8*)(v119 + v118);
    *(_DWORD*)(a2 + 20) = v118 + 2;
    v121 = v120 | (*(unsigned __int8*)(v119 + v118 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v118 + 3;
    v122 = *(unsigned __int8*)(v119 + v118 + 2);
    *(_DWORD*)(a2 + 20) = v118 + 4;
    *(_DWORD*)(a1 + 2704) =
        v121 | (v122 << 16) | (*(unsigned __int8*)(v119 + v118 + 3) << 24);
    v123 = *(int*)(a2 + 20);
    v124 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v123 + 1;
    v125 = *(unsigned __int8*)(v124 + v123);
    *(_DWORD*)(a2 + 20) = v123 + 2;
    v126 = v125 | (*(unsigned __int8*)(v124 + v123 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v123 + 3;
    v127 = *(unsigned __int8*)(v124 + v123 + 2);
    *(_DWORD*)(a2 + 20) = v123 + 4;
    *(_DWORD*)(a1 + 2708) =
        v126 | (v127 << 16) | (*(unsigned __int8*)(v124 + v123 + 3) << 24);
    if ((unsigned int)a3 < 0x13) {
      if ((unsigned int)a3 < 0x11) {
        goto LABEL_10;
      }
    }
    else {
      v128 = *(int*)(a2 + 20);
      v129 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v128 + 1;
      v130 = *(unsigned __int8*)(v129 + v128);
      *(_DWORD*)(a2 + 20) = v128 + 2;
      v131 = v130 | (*(unsigned __int8*)(v129 + v128 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v128 + 3;
      v132 = *(unsigned __int8*)(v129 + v128 + 2);
      *(_DWORD*)(a2 + 20) = v128 + 4;
      *(_DWORD*)(a1 + 2712) =
          v131 | (v132 << 16) | (*(unsigned __int8*)(v129 + v128 + 3) << 24);
      if (a3 != 19) {
        *(_DWORD*)(a1 + 2716) = GameRoutine_65d530(a2);
        if ((unsigned int)a3 >= 0x17) {
          v133 = *(int*)(a2 + 20);
          v134 = *(_QWORD*)(a2 + 8);
          *(_DWORD*)(a2 + 20) = v133 + 1;
          v135 = *(unsigned __int8*)(v134 + v133);
          *(_DWORD*)(a2 + 20) = v133 + 2;
          *(_WORD*)(a1 + 2720) =
              v135 | (*(unsigned __int8*)(v134 + v133 + 1) << 8);
        }
      }
    }
    v221 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v221 + 1;
    *(_BYTE*)(a1 + 14) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v221);
  }
LABEL_10:
  *(_QWORD*)(a1 + 16) = GameRoutine_71de40(a2);
  v38 = *(int*)(a2 + 20);
  v39 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v38 + 1;
  v40 = *(unsigned __int8*)(v39 + v38);
  *(_DWORD*)(a2 + 20) = v38 + 2;
  v41 = *(unsigned __int8*)(v39 + v38 + 1);
  *(_DWORD*)(a2 + 20) = v38 + 3;
  v42 = *(unsigned __int8*)(v39 + v38 + 2);
  *(_DWORD*)(a2 + 20) = v38 + 4;
  v43 = *(unsigned __int8*)(v39 + v38 + 3);
  *(_DWORD*)(a2 + 20) = v38 + 5;
  v44 = *(unsigned __int8*)(v39 + v38 + 4);
  *(_DWORD*)(a2 + 20) = v38 + 6;
  v45 = *(unsigned __int8*)(v39 + v38 + 5);
  *(_DWORD*)(a2 + 20) = v38 + 7;
  v46 = *(unsigned __int8*)(v39 + v38 + 6);
  *(_DWORD*)(a2 + 20) = v38 + 8;
  v224_.v224 = (__int64 (**)(void))(
      v40 | (v41 << 8) | (v42 << 16) | (v43 << 24) | (v44 << 32) | (v45 << 40) |
      (v46 << 48) |
      ((unsigned __int64)*(unsigned __int8*)(v39 + v38 + 7) << 56));
  v224_.v225 = &GameData_1a9f09e;
  *(_BYTE*)(a1 + 56) = GameRoutine_973a90(&v224_.v224);
  v47 = *(int*)(a2 + 20);
  v48 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v47 + 1;
  v49 = *(unsigned __int8*)(v48 + v47);
  *(_DWORD*)(a2 + 20) = v47 + 2;
  v50 = *(unsigned __int8*)(v48 + v47 + 1);
  *(_DWORD*)(a2 + 20) = v47 + 3;
  v51 = *(unsigned __int8*)(v48 + v47 + 2);
  *(_DWORD*)(a2 + 20) = v47 + 4;
  v52 = *(unsigned __int8*)(v48 + v47 + 3);
  *(_DWORD*)(a2 + 20) = v47 + 5;
  v53 = *(unsigned __int8*)(v48 + v47 + 4);
  *(_DWORD*)(a2 + 20) = v47 + 6;
  v54 = *(unsigned __int8*)(v48 + v47 + 5);
  *(_DWORD*)(a2 + 20) = v47 + 7;
  v55 = *(unsigned __int8*)(v48 + v47 + 6);
  *(_DWORD*)(a2 + 20) = v47 + 8;
  v224_.v224 = (__int64 (**)(void))(
      v49 | (v50 << 8) | (v51 << 16) | (v52 << 24) | (v53 << 32) | (v54 << 40) |
      (v55 << 48) |
      ((unsigned __int64)*(unsigned __int8*)(v48 + v47 + 7) << 56));
  v224_.v225 = &GameData_1a9f09e;
  *(_BYTE*)(a1 + 57) = GameRoutine_973a90(&v224_.v224);
  if (a3 >= 11) {
    v56 = *(_QWORD*)(a1 + 2696);
    if (v56 != 0) {
      v57 = *(_QWORD*)(a1 + 2672);
      v58 = fw_memory_g_heap_manager_ptr;
      do {
        v59 = *(_QWORD*)(a1 + 2664);
        v60 = v57 - v59;
        v61 = v57 == v59;
        v62 = v56 - 1;
        v63 = v56 + *(_QWORD*)(a1 + 2688);
        *(_QWORD*)(a1 + 2696) = v62;
        v64 = (v60 << 9) - 1;
        if (v61) {
          v64 = 0;
        }
        if ((unsigned __int64)(v64 - v63 + 1) >= 0x2000) {
          v65 = *(_QWORD*)(v57 - 8);
          if (v65 != 0) {
            if (*(_QWORD*)(*(_QWORD*)v58 + 200LL) != 0) {
              v66 = 128;
            }
            else {
              v66 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v58 + v66, v65);
            v57 = *(_QWORD*)(a1 + 2672);
            v62 = *(_QWORD*)(a1 + 2696);
          }
          v57 -= 8;
          *(_QWORD*)(a1 + 2672) = v57;
        }
        v56 = v62;
      } while (v62 != 0);
    }
    v82 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v82 + 1;
    v83 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v82);
    v224_.v228 = nullptr;
    v224_.v229 = 0;
    v224_.v226 = nullptr;
    v224_.v227 = 0;
    v224_.v224 = nullptr;
    v224_.v225 = nullptr;
    if (v83 != 0) {
      do {
        v85 = *(int*)(a2 + 20);
        v86 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v85 + 1;
        v87 = *(unsigned __int8*)(v86 + v85);
        *(_DWORD*)(a2 + 20) = v85 + 2;
        v88 = *(unsigned __int8*)(v86 + v85 + 1);
        *(_DWORD*)(a2 + 20) = v85 + 3;
        v89 = *(unsigned __int8*)(v86 + v85 + 2);
        *(_DWORD*)(a2 + 20) = v85 + 4;
        v90 = *(unsigned __int8*)(v86 + v85 + 3);
        *(_DWORD*)(a2 + 20) = v85 + 5;
        v91 = *(unsigned __int8*)(v86 + v85 + 4);
        *(_DWORD*)(a2 + 20) = v85 + 6;
        v92 = *(unsigned __int8*)(v86 + v85 + 5);
        *(_DWORD*)(a2 + 20) = v85 + 7;
        v93 = *(unsigned __int8*)(v86 + v85 + 6);
        *(_DWORD*)(a2 + 20) = v85 + 8;
        v223[0] = v87 | (v88 << 8) | (v89 << 16) | (v90 << 24) | (v91 << 32) |
                  (v92 << 40) | (v93 << 48) |
                  ((unsigned __int64)*(unsigned __int8*)(v86 + v85 + 7) << 56);
        v223[1] = &GameData_1a9f09e;
        v94 = GameRoutine_973a90(v223);
        if (v94 != 0) {
          v95 = v224_.v225;
          v96 = ((v224_.v226 - v224_.v225) << 9) - 1;
          if (v224_.v226 == v224_.v225) {
            v96 = 0;
          }
          v97 = (unsigned __int64)v224_.v228 + v224_.v229;
          if ((__int64*)v96 == (__int64*)((char*)v224_.v228 + v224_.v229)) {
            v98 = v94;
            GameRoutine_71e8e0((__int64*)&v224_.v224);
            v95 = v224_.v225;
            v94 = v98;
            v97 = (unsigned __int64)v224_.v228 + v224_.v229;
          }
          *(_BYTE*)(*(_QWORD*)&v95[8 * (v97 >> 12)] + (v97 & 0xFFF)) = v94;
          ++v224_.v229;
        }
        --v83;
      } while (v83 != 0);
      v99 = v224_.v229;
      if (v224_.v229 != 0) {
        v100 = fw_memory_g_heap_manager_ptr;
        do {
          v101 = *(_QWORD*)(a1 + 2672);
          v102 = *(_QWORD*)(a1 + 2664);
          v103 = (char*)v224_.v228 + v99;
          if (v101 == v102) {
            v104 = 0;
          }
          else {
            v104 = ((v101 - v102) << 9) - 1;
          }
          v105 = (_WORD)v103 - 1;
          v106 =
              *(_QWORD*)&v224_.v225[8 * ((unsigned __int64)(v103 - 1) >> 12)];
          v107 = *(_QWORD*)(a1 + 2696) + *(_QWORD*)(a1 + 2688);
          if (v104 == v107) {
            GameRoutine_71e8e0((__int64*)(a1 + 2656));
            v102 = *(_QWORD*)(a1 + 2664);
            v107 = *(_QWORD*)(a1 + 2696) + *(_QWORD*)(a1 + 2688);
          }
          *(_BYTE*)(*(_QWORD*)(v102 + 8 * (v107 >> 12)) + (v107 & 0xFFF)) =
              *(_BYTE*)(v106 + (v105 & 0xFFF));
          v84 = v224_.v226;
          v109 = v224_.v228;
          v108 = v224_.v229;
          v110 = ((v224_.v226 - v224_.v225) << 9) - 1;
          if (v224_.v226 == v224_.v225) {
            v110 = 0;
          }
          ++*(_QWORD*)(a1 + 2696);
          v99 = v108 - 1;
          v224_.v229 = v108 - 1;
          if ((unsigned __int64)(v110 - ((_QWORD)v109 + v108) + 1) >= 0x2000) {
            v111 = *((_QWORD*)v84 - 1);
            if (v111 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v100 + 200LL) != 0) {
                v112 = 128;
              }
              else {
                v112 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v100 + v112, v111);
              v84 = v224_.v226;
              v99 = v224_.v229;
            }
            v84 -= 8;
            v224_.v226 = v84;
          }
        } while (v99 != 0);
      }
      else {
        v84 = v224_.v226;
      }
    }
    else {
      v84 = nullptr;
    }
    v141 = v224_.v225;
    v224_.v229 = 0;
    v142 = (v84 - v224_.v225) >> 3;
    if (v142 >= 3) {
      v143 = fw_memory_g_heap_manager_ptr;
      do {
        if (*(_QWORD*)v141 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v143 + 200LL) != 0) {
            v144 = 128;
          }
          else {
            v144 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v143 + v144, *(_QWORD*)v141);
          v141 = v224_.v225;
          v84 = v224_.v226;
        }
        v141 += 8;
        v224_.v225 = v141;
        v142 = (v84 - v141) >> 3;
      } while (v142 > 2);
    }
    if (v142 == 1) {
      v145 = 2048;
    }
    else {
      if (v142 != 2) {
      LABEL_77:
        if (v141 != v84) {
          v146 = fw_memory_g_heap_manager_ptr;
          do {
            if (*(_QWORD*)v141 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v146 + 200LL) != 0) {
                v147 = 128;
              }
              else {
                v147 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v146 + v147,
                                            *(_QWORD*)v141);
            }
            v141 += 8;
          } while (v141 != v84);
          if (v224_.v225 != v224_.v226) {
            v224_.v226 += (v224_.v225 - v224_.v226 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
        }
        if (v224_.v224 != nullptr) {
          v148 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v148 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v148, v224_.v224);
        }
      LABEL_91:
        *(_QWORD*)(a1 + 24) = TimelineFile_890a20((__int64*)a2);
        if (a3 < 3) {
          goto LABEL_93;
        }
        goto LABEL_92;
      }
      v145 = 4096;
    }
    v224_.v228 = (__int64*)v145;
    goto LABEL_77;
  }
  if (a3 < 8) {
    goto LABEL_91;
  }
  v67 = *(int*)(a2 + 20);
  v68 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v67 + 1;
  v69 = *(unsigned __int8*)(v68 + v67);
  *(_DWORD*)(a2 + 20) = v67 + 2;
  v70 = *(unsigned __int8*)(v68 + v67 + 1);
  *(_DWORD*)(a2 + 20) = v67 + 3;
  v71 = *(unsigned __int8*)(v68 + v67 + 2);
  *(_DWORD*)(a2 + 20) = v67 + 4;
  v72 = *(unsigned __int8*)(v68 + v67 + 3);
  *(_DWORD*)(a2 + 20) = v67 + 5;
  v73 = *(unsigned __int8*)(v68 + v67 + 4);
  *(_DWORD*)(a2 + 20) = v67 + 6;
  v74 = *(unsigned __int8*)(v68 + v67 + 5);
  *(_DWORD*)(a2 + 20) = v67 + 7;
  v75 = *(unsigned __int8*)(v68 + v67 + 6);
  *(_DWORD*)(a2 + 20) = v67 + 8;
  v224_.v224 = (__int64 (**)(void))(
      v69 | (v70 << 8) | (v71 << 16) | (v72 << 24) | (v73 << 32) | (v74 << 40) |
      (v75 << 48) |
      ((unsigned __int64)*(unsigned __int8*)(v68 + v67 + 7) << 56));
  v224_.v225 = &GameData_1a9f09e;
  v76 = GameRoutine_973a90(&v224_.v224);
  if (v76 != 0) {
    v77 = *(_QWORD*)(a1 + 2672);
    v78 = *(_QWORD*)(a1 + 2664);
    v79 = ((v77 - v78) << 9) - 1;
    if (v77 == v78) {
      v79 = 0;
    }
    v80 = *(_QWORD*)(a1 + 2696) + *(_QWORD*)(a1 + 2688);
    if (v79 == v80) {
      v81 = v76;
      GameRoutine_71e8e0((__int64*)(a1 + 2656));
      v78 = *(_QWORD*)(a1 + 2664);
      v76 = v81;
      v80 = *(_QWORD*)(a1 + 2696) + *(_QWORD*)(a1 + 2688);
    }
    *(_BYTE*)(*(_QWORD*)(v78 + 8 * (v80 >> 12)) + (v80 & 0xFFF)) = v76;
    ++*(_QWORD*)(a1 + 2696);
  }
  *(_QWORD*)(a1 + 24) = TimelineFile_890a20((__int64*)a2);
LABEL_92:
  *(_QWORD*)(a1 + 32) = GameRoutine_71dfc0(a2);
LABEL_93:
  v224_.v224 = GameData_1f9fac0;
  v224_.v228 = (__int64*)&v224_.v224;
  game_GameVariable_Deserialize(a1 + 40, (__int64*)a2, (__int64)&v224_.v224);
  if (v224_.v228 == (__int64*)&v224_.v224) {
    v149 = 32;
  }
  else {
    if (v224_.v228 == nullptr) {
      goto LABEL_98;
    }
    v149 = 40;
  }
  (*(void (**)(__int64))(*v224_.v228 + v149))((__int64)v224_.v228);
LABEL_98:
  game_9a3180();
  GameReliance_8e24a0(*(_QWORD**)(a1 + 128), (__int64*)a2);
  v150 = game_HashString32_alt1((__int64)"GameSituation");
  v151 = *(_QWORD*)a2;
  LODWORD(v224_.v224) = v150;
  if (((*(__int64 (**)(__int64, __int64 (***)(void)))(v151 + 16))(a2,
                                                                  &v224_.v224) &
       1) != 0) {
    ++*(_DWORD*)(a2 + 20);
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
  v224_.v228 = (__int64*)&v224_.v224;
  v224_.v224 = GameData_1f93358;
  v224_.v225 = (char*)a1;
  if (GameData_21eea58 != 0 && (*(_BYTE*)(GameData_21eea58 + 33) & 1) != 0) {
    v152 = &v224_.v224;
  LABEL_106:
    v153 = 4;
    goto LABEL_107;
  }
  GameRoutine_8eb7a0_alt1(*(_QWORD*)(a1 + 176), a2);
  v152 = (__int64 (***)(void))v224_.v228;
  if (v224_.v228 == (__int64*)&v224_.v224) {
    goto LABEL_106;
  }
  if (v224_.v228 != nullptr) {
    v153 = 5;
  LABEL_107:
    ((__int64 (*)(__int64))(*v152)[v153])((__int64)v152);
  }
  if (a3 >= 4) {
    GameRecord_99e5e0(*(_QWORD*)(a1 + 112), a2);
  }
  v154 = *(int*)(a2 + 20);
  v155 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v154 + 1;
  v156 = *(unsigned __int8*)(v155 + v154);
  *(_DWORD*)(a2 + 20) = v154 + 2;
  v157 = v156 | (*(unsigned __int8*)(v155 + v154 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v154 + 3;
  v158 = *(unsigned __int8*)(v155 + v154 + 2);
  *(_DWORD*)(a2 + 20) = v154 + 4;
  v159 = *(_QWORD*)(a1 + 160);
  *(_DWORD*)(a1 + 92) =
      v157 | (v158 << 16) | (*(unsigned __int8*)(v155 + v154 + 3) << 24);
  GameRoutine_90dea0(v159, (__int64*)a2);
  GameRoutine_974180(a1 + 200, (__int64*)a2);
  if (a3 < 1) {
    goto LABEL_186;
  }
  v160 = *(_QWORD*)(a1 + 304);
  v161 = fw_memory_g_heap_manager_ptr;
  if (v160 != 0) {
    v162 = *(_QWORD*)(a1 + 280);
    do {
      v163 = *(_QWORD*)(a1 + 272);
      v164 = v162 - v163;
      v61 = v162 == v163;
      v165 = v160 - 1;
      v166 = v160 + *(_QWORD*)(a1 + 296);
      *(_QWORD*)(a1 + 304) = v165;
      v167 = (v164 << 6) - 1;
      if (v61) {
        v167 = 0;
      }
      if ((unsigned __int64)(v167 - v166 + 1) >= 0x400) {
        v168 = *(_QWORD*)(v162 - 8);
        if (v168 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v161 + 200LL) != 0) {
            v169 = 128;
          }
          else {
            v169 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v161 + v169, v168);
          v162 = *(_QWORD*)(a1 + 280);
          v165 = *(_QWORD*)(a1 + 304);
        }
        v162 -= 8;
        *(_QWORD*)(a1 + 280) = v162;
      }
      v160 = v165;
    } while (v165 != 0);
  }
  v170 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v170 + 1;
  v171 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v170);
  v224_.v228 = nullptr;
  v224_.v229 = 0;
  v224_.v226 = nullptr;
  v224_.v227 = 0;
  v224_.v224 = nullptr;
  v224_.v225 = nullptr;
  if (v171 != 0) {
    v172 = 0;
    v173 = nullptr;
    v174 = nullptr;
    v175 = nullptr;
    do {
      v176 = TimelineFile_890a20((__int64*)a2);
      if (v176 != 0) {
        if (v175 == v174) {
          v177 = 0;
        }
        else {
          v177 = ((v175 - v174) << 6) - 1;
        }
        v178 = (unsigned __int64)v173 + v172;
        if ((__int64*)v177 == (__int64*)((char*)v173 + v172)) {
          v179 = v176;
          GameRoutine_71ed40((__int64*)&v224_.v224);
          v176 = v179;
          v173 = v224_.v228;
          v172 = v224_.v229;
          v174 = v224_.v225;
          v175 = v224_.v226;
          v178 = (unsigned __int64)v224_.v228 + v224_.v229;
        }
        ++v172;
        *(_QWORD*)(*(_QWORD*)&v174[8 * (v178 >> 9)] + 8 * (v178 & 0x1FF)) =
            v176;
        v224_.v229 = v172;
      }
      --v171;
    } while (v171 != 0);
    if (v172 != 0) {
      v222 = a3;
      v180 = 1 - ((_QWORD)v173 + v172);
      v181 = (unsigned __int64)v173 + v172 - 1;
      do {
        v182 = *(_QWORD*)(a1 + 272);
        v183 = *(_QWORD*)(a1 + 280);
        v184 = *(_QWORD*)&v174[8 * (v181 >> 9)];
        v185 = ((v183 - v182) << 6) - 1;
        if (v183 == v182) {
          v185 = 0;
        }
        v186 = *(_QWORD*)(a1 + 304) + *(_QWORD*)(a1 + 296);
        if (v185 == v186) {
          GameRoutine_71ed40((__int64*)(a1 + 264));
          v182 = *(_QWORD*)(a1 + 272);
          v186 = *(_QWORD*)(a1 + 304) + *(_QWORD*)(a1 + 296);
        }
        *(_QWORD*)(*(_QWORD*)(v182 + 8 * (v186 >> 9)) + 8 * (v186 & 0x1FF)) =
            *(_QWORD*)(v184 + 8 * (v181 & 0x1FF));
        ++*(_QWORD*)(a1 + 304);
        if (v175 == v174) {
          v187 = 0;
        }
        else {
          v187 = ((v175 - v174) << 6) - 1;
        }
        if ((unsigned __int64)(v187 + v180) >= 0x400) {
          v189 = *((_QWORD*)v175 - 1);
          v175 -= 8;
          v188 = v189;
          if (v189 != 0) {
            v190 = 128;
            if (*(_QWORD*)(*(_QWORD*)v161 + 200LL) == 0) {
              v190 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v161 + v190, v188);
          }
        }
        --v172;
        ++v180;
        --v181;
      } while (v172 != 0);
      a3 = v222;
      v224_.v226 = v175;
    }
  }
  else {
    v174 = nullptr;
    v175 = nullptr;
  }
  v224_.v229 = 0;
  v191 = (v175 - v174) >> 3;
  if (v191 >= 3) {
    v192 = v175 - v174 - 8;
    do {
      if (*(_QWORD*)v174 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v161 + 200LL) != 0) {
          v193 = 128;
        }
        else {
          v193 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v161 + v193, *(_QWORD*)v174);
      }
      v174 += 8;
      v191 = v192 >> 3;
      v192 -= 8;
    } while (v191 > 2);
    v224_.v225 = v174;
  }
  if (v191 == 1) {
    v194 = 256;
  }
  else {
    if (v191 != 2) {
      goto LABEL_164;
    }
    v194 = 512;
  }
  v224_.v228 = (__int64*)v194;
LABEL_164:
  while (v174 != v175) {
    if (*(_QWORD*)v174 != 0) {
      if (*(_QWORD*)(*(_QWORD*)v161 + 200LL) != 0) {
        v195 = 128;
      }
      else {
        v195 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v161 + v195, *(_QWORD*)v174);
    }
    v174 += 8;
  }
  if (v224_.v224 != nullptr) {
    v196 = 128;
    if (*(_QWORD*)(*(_QWORD*)v161 + 200LL) == 0) {
      v196 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v161 + v196, v224_.v224);
  }
  if (a3 >= 9) {
    v197 = game_HashString32_alt1((__int64)"CheckPerson");
    v198 = *(_QWORD*)a2;
    LODWORD(v224_.v224) = v197;
    (*(void (**)(__int64, __int64 (***)(void)))(v198 + 16))(a2, &v224_.v224);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
    if (a3 != 9) {
      Impl_71e140(a1 + 328, (__int64*)a2);
      if ((unsigned int)a3 < 0x10) {
        if (a3 != 15) {
          goto LABEL_186;
        }
      }
      else {
        Impl_71e3e0(a1 + 404, (__int64*)a2);
      }
      v203 = game_HashString32_alt1((__int64)"Storage");
      v204 = *(_QWORD*)a2;
      LODWORD(v224_.v224) = v203;
      if (((*(__int64 (**)(__int64, __int64 (***)(void)))(v204 + 16))(
               a2, &v224_.v224) &
           1) != 0) {
        TransporterConst_89c760(*(_QWORD*)(a1 + 2736), a2);
        LegionPool_938160(*(_QWORD*)(a1 + 2752), a2);
        RidePool_93d4a0(*(_QWORD*)(a1 + 2768), a2);
      }
      v205 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
      if ((unsigned int)a3 >= 0x15) {
        v206 = *(int*)(a2 + 20);
        v207 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v206 + 1;
        v208 = *(unsigned __int8*)(v207 + v206);
        *(_DWORD*)(a2 + 20) = v206 + 2;
        v209 = v208 | (*(unsigned __int8*)(v207 + v206 + 1) << 8);
        *(_DWORD*)(a2 + 20) = v206 + 3;
        v210 = *(unsigned __int8*)(v207 + v206 + 2);
        *(_DWORD*)(a2 + 20) = v206 + 4;
        v211 = *(unsigned __int8*)(v207 + v206 + 3);
        ProgramTotalActiveTimeEv = nn_oe_GetProgramTotalActiveTime(v205);
        GameData_21d8818 = nn_os_ConvertToTick(ProgramTotalActiveTimeEv);
        GameData_21d8820 = 0;
        LOWORD(GameData_21d8810) = v209;
        BYTE2(GameData_21d8810) = v210;
        HIBYTE(GameData_21d8810) = v211;
        v213 = nn_os_ConvertToTick(
            1000000000LL * (unsigned int)(60 * v210 + 3600 * v209 + v211));
        GameData_21d8820 = v213;
        if (a3 != 21) {
          v214 = *(int*)(a2 + 20);
          v215 = *(_QWORD*)(a2 + 8);
          *(_DWORD*)(a2 + 20) = v214 + 1;
          v216 = *(unsigned __int8*)(v215 + v214);
          *(_DWORD*)(a2 + 20) = v214 + 2;
          v217 = v216 | (*(unsigned __int8*)(v215 + v214 + 1) << 8);
          *(_DWORD*)(a2 + 20) = v214 + 3;
          v218 = *(unsigned __int8*)(v215 + v214 + 2);
          *(_DWORD*)(a2 + 20) = v214 + 4;
          v219 = *(unsigned __int8*)(v215 + v214 + 3);
          v220 = nn_oe_GetProgramTotalActiveTime(v213);
          GameData_21d8830 = nn_os_ConvertToTick(v220);
          GameData_21d8838 = 0;
          LOWORD(GameData_21d8828) = v217;
          BYTE2(GameData_21d8828) = v218;
          HIBYTE(GameData_21d8828) = v219;
          GameData_21d8838 = nn_os_ConvertToTick(
              1000000000LL * (unsigned int)(60 * v218 + 3600 * v217 + v219));
        }
      }
    }
  }
LABEL_186:
  Impl_71e5c0(a1);
  Impl_71e760(a1);
  GameRoutine_821570_alt1();
}

__int64 Impl_Unknown9_71b700(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  __int64 result;
  int v29;
  __int64 v30;

  v30 = game_GetHero(9);
  v29 = 241;
  v4 = game_UnitPool_Find_6ead60(&v30, &v29);
  if (v4 != 0 && *(_BYTE*)(v4 + 2136) != 0) {
    v5 = *(_QWORD*)(a1 + 176);
    if (v5 + 112 != v4 + 2104) {
      v6 = *(unsigned __int8*)(v4 + 2112);
      if ((*(_BYTE*)(v5 + 120) & 1) != 0) {
        v9 = (v6 & 1) == 0;
        v10 = v6 >> 1;
        v11 = v4;
        if (v9) {
          v12 = v4 + 2113;
        }
        else {
          v12 = *(_QWORD*)(v4 + 2128);
        }
        if (v9) {
          v13 = v10;
        }
        else {
          v13 = *(_QWORD*)(v4 + 2120);
        }
        GameRoutine_64dde0(v5 + 120, v12, v13);
      }
      else {
        if ((v6 & 1) == 0) {
          v7 = *(_QWORD*)(v4 + 2112);
          v8 = *(_QWORD*)(v4 + 2128);
          *(_QWORD*)(v5 + 128) = *(_QWORD*)(v4 + 2120);
          *(_QWORD*)(v5 + 136) = v8;
          *(_QWORD*)(v5 + 120) = v7;
          goto LABEL_16;
        }
        v11 = v4;
        GameRoutine_64df20(v5 + 120, *(_QWORD*)(v4 + 2128),
                           *(_QWORD*)(v4 + 2120));
      }
      v4 = v11;
    }
  LABEL_16:
    *(_BYTE*)(v5 + 144) = *(_BYTE*)(v4 + 2136);
    *(_BYTE*)(v5 + 145) = *(_BYTE*)(v4 + 2137);
    *(_BYTE*)(v5 + 146) = *(_BYTE*)(v4 + 2138);
    *(_BYTE*)(v5 + 147) = *(_BYTE*)(v4 + 2139);
    *(_BYTE*)(v5 + 148) = *(_BYTE*)(v4 + 2140);
  }
  GameRoutine_82d390(a1 + 40, a2);
  GameRoutine_8e2280(*(_QWORD*)(a1 + 128), a2);
  GameRoutine_8eb020(*(_QWORD*)(a1 + 176), a2);
  GameRoutine_71bd40(a1 + 328, a2);
  GameRoutine_71d2c0(a1 + 404, a2);
  v14 = game_HashString32("GameMode");
  v15 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v14);
  GameRoutine_6616e0(v15, &v30);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + (int)(*(_DWORD*)(a2 + 20))++) =
      *(_BYTE*)(a1 + 12);
  v16 = game_HashString32("Difficulty");
  v17 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v16);
  GameRoutine_6616e0(v17, &v30);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + (int)(*(_DWORD*)(a2 + 20))++) =
      *(_BYTE*)(a1 + 13);
  v18 = game_HashString32("Causation");
  v19 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v18);
  GameRoutine_6616e0(v19, &v30);
  *(_DWORD*)(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20)) = *(_DWORD*)(a1 + 80);
  *(_DWORD*)(a2 + 20) += 4;
  v20 = game_HashString32("Shareline");
  v21 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v20);
  GameRoutine_6616e0(v21, &v30);
  *(_DWORD*)(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20)) = *(_DWORD*)(a1 + 2708);
  *(_DWORD*)(a2 + 20) += 4;
  v22 = game_HashString32("RideSerial");
  v23 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v22);
  GameRoutine_6616e0(v23, &v30);
  *(_DWORD*)(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20)) = *(_DWORD*)(a1 + 2712);
  *(_DWORD*)(a2 + 20) += 4;
  v24 = game_HashString32("SaveCount");
  v25 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v24);
  GameRoutine_6616e0(v25, &v30);
  *(_DWORD*)(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20)) = *(_DWORD*)(a1 + 2716);
  *(_DWORD*)(a2 + 20) += 4;
  v26 = game_HashString32("MakeCount");
  v27 = *(_QWORD*)(a2 + 120);
  v30 = __PAIR64__(*(_DWORD*)(a2 + 20), v26);
  result = GameRoutine_6616e0(v27, &v30);
  *(_WORD*)(*(_QWORD*)(a2 + 8) + *(int*)(a2 + 20)) = *(_WORD*)(a1 + 2720);
  *(_DWORD*)(a2 + 20) += 2;
  return result;
}

__int64 Impl_Unknown10_71ba20(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  int v22;
  _BOOL4 v23;
  _BOOL4 v24;
  __int64 v25;
  __int64 v26;
  int v28;
  __int64 v29;

  GameRoutine_82d4a0(a1 + 40);
  GameRoutine_8e24a0(*(_QWORD*)(a1 + 128), a2);
  GameRoutine_8eb7a0(*(_QWORD*)(a1 + 176), a2);
  GameRoutine_71e140(a1 + 328, a2);
  GameRoutine_71e3e0(a1 + 404, a2);
  LODWORD(v29) = game_HashString32("GameMode");
  GameRoutine_660280(a2, &v29, a1 + 12, 1);
  LODWORD(v29) = game_HashString32("Difficulty");
  GameRoutine_660280(a2, &v29, a1 + 13, 1);
  LODWORD(v29) = game_HashString32("Causation");
  GameRoutine_660280(a2, &v29, a1 + 80, 4);
  LODWORD(v29) = game_HashString32("Shareline");
  GameRoutine_660280(a2, &v29, a1 + 2708, 4);
  LODWORD(v29) = game_HashString32("RideSerial");
  GameRoutine_660280(a2, &v29, a1 + 2712, 4);
  LODWORD(v29) = game_HashString32("SaveCount");
  GameRoutine_660280(a2, &v29, a1 + 2716, 4);
  LODWORD(v29) = game_HashString32("MakeCount");
  GameRoutine_660280(a2, &v29, a1 + 2720, 2);
  v29 = game_GetHero(9);
  v28 = 241;
  v4 = game_UnitPool_Find_6ead60(&v29, &v28);
  if (v4 == 0 || *(_BYTE*)(v4 + 2136) == 0) {
    return GameRoutine_821570(v4);
  }
  v5 = *(_QWORD*)(a1 + 176);
  if (*(_BYTE*)(v5 + 144) != 0) {
    if (v4 + 2104 != v5 + 112) {
      v6 = *(unsigned __int8*)(v5 + 120);
      if ((*(_BYTE*)(v4 + 2112) & 1) != 0) {
        v9 = (v6 & 1) == 0;
        v10 = v6 >> 1;
        v11 = v4;
        v12 = v4 + 2112;
        if (v9) {
          v13 = v5 + 121;
        }
        else {
          v13 = *(_QWORD*)(v5 + 136);
        }
        if (v9) {
          v14 = v10;
        }
        else {
          v14 = *(_QWORD*)(v5 + 128);
        }
        GameRoutine_64dde0(v12, v13, v14);
      }
      else {
        if ((v6 & 1) == 0) {
          v7 = *(_QWORD*)(v5 + 120);
          v8 = *(_QWORD*)(v5 + 136);
          *(_QWORD*)(v4 + 2120) = *(_QWORD*)(v5 + 128);
          *(_QWORD*)(v4 + 2128) = v8;
          *(_QWORD*)(v4 + 2112) = v7;
          goto LABEL_17;
        }
        v11 = v4;
        GameRoutine_64df20(v4 + 2112, *(_QWORD*)(v5 + 136),
                           *(_QWORD*)(v5 + 128));
      }
      v4 = v11;
    }
  LABEL_17:
    *(_BYTE*)(v4 + 2136) = *(_BYTE*)(v5 + 144);
    *(_BYTE*)(v4 + 2137) = *(_BYTE*)(v5 + 145);
    *(_BYTE*)(v4 + 2138) = *(_BYTE*)(v5 + 146);
    *(_BYTE*)(v4 + 2139) = *(_BYTE*)(v5 + 147);
    *(_BYTE*)(v4 + 2140) = *(_BYTE*)(v5 + 148);
  }
  v15 = game_GetHero(9);
  if (v15 == 0) {
    goto LABEL_28;
  }
  for (i = v15; i != 0; i = *(_QWORD*)(i + 624)) {
    v17 = i;
  }
  if (*(_BYTE*)(v17 + 441) != 3) {
    goto LABEL_28;
  }
  v18 = *(_QWORD*)(v15 + 624);
  if (v18 == 0) {
    v18 = v15;
  }
  v29 = v18;
  v28 = 241;
  v19 = game_UnitPool_Find_6ead60(&v29, &v28);
  if (v19 == 0) {
    v21 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    if (*(_BYTE*)(v21 + 144) != 0) {
      v20 = (__int64*)(v21 + 112);
      goto LABEL_29;
    }
  LABEL_28:
    v20 = &GameData_21f49b8;
    goto LABEL_29;
  }
  v20 = (__int64*)(v19 + 2104);

LABEL_29:
  v22 = *((unsigned __int8*)v20 + 32);
  v23 = v22 == 1;
  v24 = v22 != 1 && v22 == 2;
  v25 = GameRoutine_9a28e0(7);
  game_VariableManager_SetFlag(v25, v23);
  v26 = GameRoutine_9a28e0(8);
  v4 = game_VariableManager_SetFlag(v26, v24);
  return GameRoutine_821570(v4);
}

__int64 Impl_71bd40(unsigned __int8* a1, __int64 a2)
{
  int v4;
  __int64 (**v5)(__int64, int*);
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
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
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
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
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
  __int64 v71;
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
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
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
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
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
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
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
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
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
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
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
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
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
  __int64 v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
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
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  int v243;

  v4 = game_HashString32_alt1((__int64)"SequenceTime");
  v5 = *(__int64 (***)(__int64, int*))a2;
  v243 = v4;
  if (((*v5)(a2, &v243) & 1) != 0) {
    v6 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v6 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = 0;
    v7 = game_HashString_alt1((__int64)GameData_1fb11a0[*a1]);
    v8 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v7;
    v9 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = BYTE1(v7);
    v10 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE2(v7);
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE3(v7);
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE4(v7);
    v13 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE5(v7);
    v14 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE6(v7);
    v15 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = HIBYTE(v7);
    v16 = *(int*)(a2 + 20);
    LOWORD(v8) = *((_WORD*)a1 + 1);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = v8;
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = BYTE1(v8);
    v18 = *(int*)(a2 + 20);
    LOBYTE(v8) = a1[4];
    *(_DWORD*)(a2 + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v8;
    v19 = *(int*)(a2 + 20);
    LOBYTE(v8) = a1[5];
    *(_DWORD*)(a2 + 20) = v19 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = v8;
    v20 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = 17;
    v21 = game_HashString_alt1((__int64)"NONE");
    v22 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v22 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = v21;
    v23 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v23 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = BYTE1(v21);
    v24 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v24 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = BYTE2(v21);
    v25 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v25 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = BYTE3(v21);
    v26 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v26 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = BYTE4(v21);
    v27 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v27 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = BYTE5(v21);
    v28 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v28 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = BYTE6(v21);
    v29 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v29 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = HIBYTE(v21);
    v30 = *(int*)(a2 + 20);
    LOWORD(v22) = *((_WORD*)a1 + 3);
    *(_DWORD*)(a2 + 20) = v30 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = v22;
    v31 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v31 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = BYTE1(v22);
    v32 = *(int*)(a2 + 20);
    LOBYTE(v22) = a1[8];
    *(_DWORD*)(a2 + 20) = v32 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = v22;
    v33 = *(int*)(a2 + 20);
    LOBYTE(v22) = a1[9];
    *(_DWORD*)(a2 + 20) = v33 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = v22;
    v34 = game_HashString_alt1((__int64)"TITLE");
    v35 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v35 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = v34;
    v36 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v36 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v36) = BYTE1(v34);
    v37 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v37 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = BYTE2(v34);
    v38 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v38 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = BYTE3(v34);
    v39 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v39 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39) = BYTE4(v34);
    v40 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v40 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40) = BYTE5(v34);
    v41 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v41 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = BYTE6(v34);
    v42 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v42 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = HIBYTE(v34);
    v43 = *(int*)(a2 + 20);
    LOWORD(v35) = *((_WORD*)a1 + 5);
    *(_DWORD*)(a2 + 20) = v43 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v43) = v35;
    v44 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v44 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v44) = BYTE1(v35);
    v45 = *(int*)(a2 + 20);
    LOBYTE(v35) = a1[12];
    *(_DWORD*)(a2 + 20) = v45 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v45) = v35;
    v46 = *(int*)(a2 + 20);
    LOBYTE(v35) = a1[13];
    *(_DWORD*)(a2 + 20) = v46 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v46) = v35;
    v47 = game_HashString_alt1((__int64)"MAP");
    v48 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v48 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v48) = v47;
    v49 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v49 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v49) = BYTE1(v47);
    v50 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v50 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v50) = BYTE2(v47);
    v51 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v51 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v51) = BYTE3(v47);
    v52 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v52 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v52) = BYTE4(v47);
    v53 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v53 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v53) = BYTE5(v47);
    v54 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v54 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v54) = BYTE6(v47);
    v55 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v55 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v55) = HIBYTE(v47);
    v56 = *(int*)(a2 + 20);
    LOWORD(v48) = *((_WORD*)a1 + 7);
    *(_DWORD*)(a2 + 20) = v56 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v56) = v48;
    v57 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v57 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v57) = BYTE1(v48);
    v58 = *(int*)(a2 + 20);
    LOBYTE(v48) = a1[16];
    *(_DWORD*)(a2 + 20) = v58 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v58) = v48;
    v59 = *(int*)(a2 + 20);
    LOBYTE(v48) = a1[17];
    *(_DWORD*)(a2 + 20) = v59 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v59) = v48;
    v60 = game_HashString_alt1((__int64)"UNUSED");
    v61 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v61 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v61) = v60;
    v62 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v62 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v62) = BYTE1(v60);
    v63 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v63 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v63) = BYTE2(v60);
    v64 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v64 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v64) = BYTE3(v60);
    v65 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v65 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v65) = BYTE4(v60);
    v66 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v66 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v66) = BYTE5(v60);
    v67 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v67 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v67) = BYTE6(v60);
    v68 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v68 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v68) = HIBYTE(v60);
    v69 = *(int*)(a2 + 20);
    LOWORD(v61) = *((_WORD*)a1 + 9);
    *(_DWORD*)(a2 + 20) = v69 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v69) = v61;
    v70 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v70 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v70) = BYTE1(v61);
    v71 = *(int*)(a2 + 20);
    LOBYTE(v61) = a1[20];
    *(_DWORD*)(a2 + 20) = v71 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v71) = v61;
    v72 = *(int*)(a2 + 20);
    LOBYTE(v61) = a1[21];
    *(_DWORD*)(a2 + 20) = v72 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v72) = v61;
    v73 = game_HashString_alt1((__int64)"GMAP");
    v74 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v74 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v74) = v73;
    v75 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v75 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v75) = BYTE1(v73);
    v76 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v76 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v76) = BYTE2(v73);
    v77 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v77 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v77) = BYTE3(v73);
    v78 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v78 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v78) = BYTE4(v73);
    v79 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v79 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v79) = BYTE5(v73);
    v80 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v80 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v80) = BYTE6(v73);
    v81 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v81 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v81) = HIBYTE(v73);
    v82 = *(int*)(a2 + 20);
    LOWORD(v74) = *((_WORD*)a1 + 11);
    *(_DWORD*)(a2 + 20) = v82 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v82) = v74;
    v83 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v83 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v83) = BYTE1(v74);
    v84 = *(int*)(a2 + 20);
    LOBYTE(v74) = a1[24];
    *(_DWORD*)(a2 + 20) = v84 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v84) = v74;
    v85 = *(int*)(a2 + 20);
    LOBYTE(v74) = a1[25];
    *(_DWORD*)(a2 + 20) = v85 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v85) = v74;
    v86 = game_HashString_alt1((__int64)&GameData_1aed8c8);
    v87 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v87 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v87) = v86;
    v88 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v88 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v88) = BYTE1(v86);
    v89 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v89 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v89) = BYTE2(v86);
    v90 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v90 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v90) = BYTE3(v86);
    v91 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v91 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v91) = BYTE4(v86);
    v92 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v92 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v92) = BYTE5(v86);
    v93 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v93 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v93) = BYTE6(v86);
    v94 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v94 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v94) = HIBYTE(v86);
    v95 = *(int*)(a2 + 20);
    LOWORD(v87) = *((_WORD*)a1 + 13);
    *(_DWORD*)(a2 + 20) = v95 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v95) = v87;
    v96 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v96 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v96) = BYTE1(v87);
    v97 = *(int*)(a2 + 20);
    LOBYTE(v87) = a1[28];
    *(_DWORD*)(a2 + 20) = v97 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v97) = v87;
    v98 = *(int*)(a2 + 20);
    LOBYTE(v87) = a1[29];
    *(_DWORD*)(a2 + 20) = v98 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v98) = v87;
    v99 = game_HashString_alt1((__int64)"DUNGEON");
    v100 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v100 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v100) = v99;
    v101 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v101 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v101) = BYTE1(v99);
    v102 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v102 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v102) = BYTE2(v99);
    v103 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v103 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v103) = BYTE3(v99);
    v104 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v104 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v104) = BYTE4(v99);
    v105 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v105 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v105) = BYTE5(v99);
    v106 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v106 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v106) = BYTE6(v99);
    v107 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v107 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v107) = HIBYTE(v99);
    v108 = *(int*)(a2 + 20);
    LOWORD(v100) = *((_WORD*)a1 + 15);
    *(_DWORD*)(a2 + 20) = v108 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v108) = v100;
    v109 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v109 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v109) = BYTE1(v100);
    v110 = *(int*)(a2 + 20);
    LOBYTE(v100) = a1[32];
    *(_DWORD*)(a2 + 20) = v110 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v110) = v100;
    v111 = *(int*)(a2 + 20);
    LOBYTE(v100) = a1[33];
    *(_DWORD*)(a2 + 20) = v111 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v111) = v100;
    v112 = game_HashString_alt1((__int64)"CMDBTL");
    v113 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v113 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v113) = v112;
    v114 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v114 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v114) = BYTE1(v112);
    v115 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v115 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v115) = BYTE2(v112);
    v116 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v116 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v116) = BYTE3(v112);
    v117 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v117 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v117) = BYTE4(v112);
    v118 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v118 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v118) = BYTE5(v112);
    v119 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v119 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v119) = BYTE6(v112);
    v120 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v120 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v120) = HIBYTE(v112);
    v121 = *(int*)(a2 + 20);
    LOWORD(v113) = *((_WORD*)a1 + 17);
    *(_DWORD*)(a2 + 20) = v121 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v121) = v113;
    v122 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v122 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v122) = BYTE1(v113);
    v123 = *(int*)(a2 + 20);
    LOBYTE(v113) = a1[36];
    *(_DWORD*)(a2 + 20) = v123 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v123) = v113;
    v124 = *(int*)(a2 + 20);
    LOBYTE(v113) = a1[37];
    *(_DWORD*)(a2 + 20) = v124 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v124) = v113;
    v125 = game_HashString_alt1((__int64)"TIMELINE");
    v126 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v126 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v126) = v125;
    v127 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v127 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v127) = BYTE1(v125);
    v128 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v128 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v128) = BYTE2(v125);
    v129 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v129 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v129) = BYTE3(v125);
    v130 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v130 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v130) = BYTE4(v125);
    v131 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v131 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v131) = BYTE5(v125);
    v132 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v132 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v132) = BYTE6(v125);
    v133 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v133 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v133) = HIBYTE(v125);
    v134 = *(int*)(a2 + 20);
    LOWORD(v126) = *((_WORD*)a1 + 19);
    *(_DWORD*)(a2 + 20) = v134 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v134) = v126;
    v135 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v135 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v135) = BYTE1(v126);
    v136 = *(int*)(a2 + 20);
    LOBYTE(v126) = a1[40];
    *(_DWORD*)(a2 + 20) = v136 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v136) = v126;
    v137 = *(int*)(a2 + 20);
    LOBYTE(v126) = a1[41];
    *(_DWORD*)(a2 + 20) = v137 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v137) = v126;
    v138 = game_HashString_alt1((__int64)"DEMO");
    v139 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v139 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v139) = v138;
    v140 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v140 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v140) = BYTE1(v138);
    v141 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v141 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v141) = BYTE2(v138);
    v142 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v142 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v142) = BYTE3(v138);
    v143 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v143 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v143) = BYTE4(v138);
    v144 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v144 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v144) = BYTE5(v138);
    v145 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v145 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v145) = BYTE6(v138);
    v146 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v146 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v146) = HIBYTE(v138);
    v147 = *(int*)(a2 + 20);
    LOWORD(v139) = *((_WORD*)a1 + 21);
    *(_DWORD*)(a2 + 20) = v147 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v147) = v139;
    v148 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v148 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v148) = BYTE1(v139);
    v149 = *(int*)(a2 + 20);
    LOBYTE(v139) = a1[44];
    *(_DWORD*)(a2 + 20) = v149 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v149) = v139;
    v150 = *(int*)(a2 + 20);
    LOBYTE(v139) = a1[45];
    *(_DWORD*)(a2 + 20) = v150 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v150) = v139;
    v151 = game_HashString_alt1((__int64)"MOVIE");
    v152 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v152 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v152) = v151;
    v153 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v153 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v153) = BYTE1(v151);
    v154 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v154 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v154) = BYTE2(v151);
    v155 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v155 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v155) = BYTE3(v151);
    v156 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v156 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v156) = BYTE4(v151);
    v157 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v157 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v157) = BYTE5(v151);
    v158 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v158 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v158) = BYTE6(v151);
    v159 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v159 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v159) = HIBYTE(v151);
    v160 = *(int*)(a2 + 20);
    LOWORD(v152) = *((_WORD*)a1 + 23);
    *(_DWORD*)(a2 + 20) = v160 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v160) = v152;
    v161 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v161 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v161) = BYTE1(v152);
    v162 = *(int*)(a2 + 20);
    LOBYTE(v152) = a1[48];
    *(_DWORD*)(a2 + 20) = v162 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v162) = v152;
    v163 = *(int*)(a2 + 20);
    LOBYTE(v152) = a1[49];
    *(_DWORD*)(a2 + 20) = v163 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v163) = v152;
    v164 = game_HashString_alt1((__int64)"CHAPTER");
    v165 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v165 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v165) = v164;
    v166 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v166 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v166) = BYTE1(v164);
    v167 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v167 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v167) = BYTE2(v164);
    v168 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v168 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v168) = BYTE3(v164);
    v169 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v169 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v169) = BYTE4(v164);
    v170 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v170 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v170) = BYTE5(v164);
    v171 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v171 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v171) = BYTE6(v164);
    v172 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v172 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v172) = HIBYTE(v164);
    v173 = *(int*)(a2 + 20);
    LOWORD(v165) = *((_WORD*)a1 + 25);
    *(_DWORD*)(a2 + 20) = v173 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v173) = v165;
    v174 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v174 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v174) = BYTE1(v165);
    v175 = *(int*)(a2 + 20);
    LOBYTE(v165) = a1[52];
    *(_DWORD*)(a2 + 20) = v175 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v175) = v165;
    v176 = *(int*)(a2 + 20);
    LOBYTE(v165) = a1[53];
    *(_DWORD*)(a2 + 20) = v176 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v176) = v165;
    v177 = game_HashString_alt1((__int64)"AUTOSAVE");
    v178 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v178 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v178) = v177;
    v179 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v179 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v179) = BYTE1(v177);
    v180 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v180 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v180) = BYTE2(v177);
    v181 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v181 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v181) = BYTE3(v177);
    v182 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v182 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v182) = BYTE4(v177);
    v183 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v183 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v183) = BYTE5(v177);
    v184 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v184 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v184) = BYTE6(v177);
    v185 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v185 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v185) = HIBYTE(v177);
    v186 = *(int*)(a2 + 20);
    LOWORD(v178) = *((_WORD*)a1 + 27);
    *(_DWORD*)(a2 + 20) = v186 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v186) = v178;
    v187 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v187 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v187) = BYTE1(v178);
    v188 = *(int*)(a2 + 20);
    LOBYTE(v178) = a1[56];
    *(_DWORD*)(a2 + 20) = v188 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v188) = v178;
    v189 = *(int*)(a2 + 20);
    LOBYTE(v178) = a1[57];
    *(_DWORD*)(a2 + 20) = v189 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v189) = v178;
    v190 = game_HashString_alt1((__int64)"MAP_COMPLETE");
    v191 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v191 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v191) = v190;
    v192 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v192 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v192) = BYTE1(v190);
    v193 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v193 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v193) = BYTE2(v190);
    v194 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v194 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v194) = BYTE3(v190);
    v195 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v195 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v195) = BYTE4(v190);
    v196 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v196 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v196) = BYTE5(v190);
    v197 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v197 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v197) = BYTE6(v190);
    v198 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v198 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v198) = HIBYTE(v190);
    v199 = *(int*)(a2 + 20);
    LOWORD(v191) = *((_WORD*)a1 + 29);
    *(_DWORD*)(a2 + 20) = v199 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v199) = v191;
    v200 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v200 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v200) = BYTE1(v191);
    v201 = *(int*)(a2 + 20);
    LOBYTE(v191) = a1[60];
    *(_DWORD*)(a2 + 20) = v201 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v201) = v191;
    v202 = *(int*)(a2 + 20);
    LOBYTE(v191) = a1[61];
    *(_DWORD*)(a2 + 20) = v202 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v202) = v191;
    v203 = game_HashString_alt1((__int64)"CMDBTL_COMPLETE");
    v204 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v204 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v204) = v203;
    v205 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v205 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v205) = BYTE1(v203);
    v206 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v206 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v206) = BYTE2(v203);
    v207 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v207 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v207) = BYTE3(v203);
    v208 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v208 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v208) = BYTE4(v203);
    v209 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v209 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v209) = BYTE5(v203);
    v210 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v210 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v210) = BYTE6(v203);
    v211 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v211 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v211) = HIBYTE(v203);
    v212 = *(int*)(a2 + 20);
    LOWORD(v204) = *((_WORD*)a1 + 31);
    *(_DWORD*)(a2 + 20) = v212 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v212) = v204;
    v213 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v213 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v213) = BYTE1(v204);
    v214 = *(int*)(a2 + 20);
    LOBYTE(v204) = a1[64];
    *(_DWORD*)(a2 + 20) = v214 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v214) = v204;
    v215 = *(int*)(a2 + 20);
    LOBYTE(v204) = a1[65];
    *(_DWORD*)(a2 + 20) = v215 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v215) = v204;
    v216 = game_HashString_alt1((__int64)"MAKE");
    v217 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v217 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v217) = v216;
    v218 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v218 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v218) = BYTE1(v216);
    v219 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v219 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v219) = BYTE2(v216);
    v220 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v220 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v220) = BYTE3(v216);
    v221 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v221 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v221) = BYTE4(v216);
    v222 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v222 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v222) = BYTE5(v216);
    v223 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v223 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v223) = BYTE6(v216);
    v224 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v224 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v224) = HIBYTE(v216);
    v225 = *(int*)(a2 + 20);
    LOWORD(v217) = *((_WORD*)a1 + 33);
    *(_DWORD*)(a2 + 20) = v225 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v225) = v217;
    v226 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v226 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v226) = BYTE1(v217);
    v227 = *(int*)(a2 + 20);
    LOBYTE(v217) = a1[68];
    *(_DWORD*)(a2 + 20) = v227 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v227) = v217;
    v228 = *(int*)(a2 + 20);
    LOBYTE(v217) = a1[69];
    *(_DWORD*)(a2 + 20) = v228 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v228) = v217;
    v229 = game_HashString_alt1((__int64)"MAKE_COMPLETE");
    v230 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v230 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v230) = v229;
    v231 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v231 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v231) = BYTE1(v229);
    v232 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v232 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v232) = BYTE2(v229);
    v233 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v233 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v233) = BYTE3(v229);
    v234 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v234 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v234) = BYTE4(v229);
    v235 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v235 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v235) = BYTE5(v229);
    v236 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v236 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v236) = BYTE6(v229);
    v237 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v237 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v237) = HIBYTE(v229);
    v238 = *(int*)(a2 + 20);
    LOWORD(v230) = *((_WORD*)a1 + 35);
    *(_DWORD*)(a2 + 20) = v238 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v238) = v230;
    v239 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v239 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v239) = BYTE1(v230);
    v240 = *(int*)(a2 + 20);
    LOBYTE(v230) = a1[72];
    *(_DWORD*)(a2 + 20) = v240 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v240) = v230;
    v241 = *(int*)(a2 + 20);
    LOBYTE(v230) = a1[73];
    *(_DWORD*)(a2 + 20) = v241 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v241) = v230;
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 Impl_71d2c0(__int64 a1, __int64 a2)
{
  int v4;
  __int64 (**v5)(__int64, int*);
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
  char* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  int v27;
  int v29;

  v4 = game_HashString32("SectionTime");
  v5 = *(__int64 (***)(__int64, int*))a2;
  v29 = v4;
  if (((*v5)(a2, &v29) & 1) != 0) {
    v6 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v6 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = 0;
    v7 = *(int*)(a2 + 20);
    LODWORD(v6) = *(_DWORD*)a1;
    *(_DWORD*)(a2 + 20) = v7 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v6;
    v8 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = BYTE1(v6);
    v9 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = BYTE2(v6);
    v10 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE3(v6);
    v11 = *(int*)(a2 + 20);
    LOWORD(v6) = *(_WORD*)(a1 + 4);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = v6;
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE1(v6);
    v13 = *(int*)(a2 + 20);
    LOBYTE(v6) = *(_BYTE*)(a1 + 6);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = v6;
    v14 = *(int*)(a2 + 20);
    LOBYTE(v6) = *(_BYTE*)(a1 + 7);
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = v6;
    v15 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = 48;
    v16 = *(int*)(a2 + 20);
    v17 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(v17 + v16) = 2;
    v18 = (char*)(a1 + 11);
    v19 = 560;
    do {
      v27 = (unsigned __int8)*(v18 - 1);
      if (((3600 * *(unsigned __int16*)(v18 - 3) + 60 * v27) |
           (unsigned __int8)*v18) != 0) {
        v20 = *(int*)(a2 + 20);
        *(_DWORD*)(a2 + 20) = v20 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = v27 | 0x80;
        v21 = *(int*)(a2 + 20);
        v22 = *v18;
        *(_DWORD*)(a2 + 20) = v21 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v22;
        v23 = *(int*)(a2 + 20);
        v24 = *(unsigned __int16*)(v18 - 3);
        *(_DWORD*)(a2 + 20) = v23 + 1;
        *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = v24;
        v25 = v24 >> 8;
      }
      else {
        LOBYTE(v25) = 0;
      }
      v26 = *(int*)(a2 + 20);
      --v19;
      v18 += 4;
      *(_DWORD*)(a2 + 20) = v26 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = v25;
    } while (v19 != 0);
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 Impl_71f080(__int64 a1)
{
  int v1;
  int v2;
  __int64 v3;
  __int64 result;
  _QWORD* v5;
  __int64* v6;
  __int64* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 (*v13)(_QWORD);
  __int64 v14;
  _QWORD* v15;
  __int64 v16;

  v1 = *(unsigned __int8*)(a1 + 88);
  v2 = *(unsigned __int8*)(a1 + 89);
  v3 = a1;
  while (*(unsigned __int8*)(v3 + 88) == v1 &&
         *(unsigned __int8*)(v3 + 89) == v2) {
    result = *(_QWORD*)(v3 + 136);
    if (result != 0 &&
        (*(_BYTE*)(result + 275) != 0 ||
         game_GameModeData_instance_ != 0 &&
             *(int*)(game_GameModeData_instance_ + 68) >= 1) &&
        (v1 == 3 || *(_BYTE*)(v3 + 32) == 0)) {
      return result;
    }
    if (*(_BYTE*)(v3 + 33) != 3) {
      goto LABEL_2;
    }
    v5 = *(_QWORD**)(v3 + 24);
    v7 = (__int64*)v5[38];
    v6 = (__int64*)v5[39];
    if (v6 == v7) {
      goto LABEL_27;
    }
    v8 = 0;
    do {
      v9 = *v7;
      v10 = v7[1];
      if (v10 == *v7) {
      LABEL_12:
        ++v8;
      }
      else {
        while (1) {
          if (*(_QWORD*)v9 != 0) {
            v11 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v12 = game_GameVariableTable_Find_alt1(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)v9);
              if (v12 != 0) {
                v13 = *(__int64 (**)(_QWORD))(v12 + 72);
                v14 = *(_QWORD*)(v12 + 80);
                v15 = (_QWORD*)(v12 + (v14 >> 1));
                if ((v14 & 1) != 0) {
                  v13 = *(__int64 (**)(_QWORD))((char*)v13 + *v15);
                }
                LOBYTE(result) = v13(v15);
              }
              else {
                LOBYTE(result) = 1;
              }
            }
            if (*(_BYTE*)(v9 + 16) != ((v11 == 0) | result & 1)) {
              break;
            }
          }
          v9 += 24;
          if (v9 == v10) {
            goto LABEL_12;
          }
        }
      }
      v7 += 6;
    } while (v7 != v6);
    if (v8 != 0) {
      v5 = *(_QWORD**)(v3 + 24);
    LABEL_27:
      v16 = v5[3];
      if (v16 != 0) {
        result = Impl_71f080(v16);
        if (result != 0) {
          return result;
        }
      }
    }
  LABEL_2:
    v3 = *(_QWORD*)(*(_QWORD*)(v3 + 24) + 16LL);
    if (v3 == 0) {
      return 0;
    }
  }
  return 0;
}

__int64 Impl_71f220(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  int v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;

  v1 = 14 * *(_DWORD*)(result + 60) + 56 * *(unsigned __int8*)(result + 15) +
       *(_DWORD*)(result + 64);
  v2 = v1 & ~(v1 >> 31);
  if (v2 >= 560) {
    v2 = 560;
  }
  v3 = *(int*)(result + 404);
  if ((_DWORD)v3 != v2) {
    v4 = *(unsigned __int16*)(result + 408);
    v5 = *(unsigned __int8*)(result + 410);
    v6 = *(unsigned __int8*)(result + 411);
    v7 = result + 412;
    v8 = GameData_21d87f8;
    if (3600 * v4 + 60 * v5 + v6 >=
        (unsigned int)(HIBYTE(GameData_21d87f8) +
                       3600 * (unsigned __int16)GameData_21d87f8 +
                       60 * BYTE2(GameData_21d87f8))) {
      v11 = *(_DWORD*)(v7 + 4 * v3);
    }
    else {
      v9 = HIBYTE(GameData_21d87f8) - v6 +
           3600 * ((unsigned __int16)GameData_21d87f8 - v4) +
           60 * (BYTE2(GameData_21d87f8) - v5);
      if ((int)v9 < 1) {
        v10 = 0;
      }
      else {
        v10 =
            ((v9 / 0x3C -
              60 *
                  ((unsigned int)((143165577 * (unsigned __int64)(v9 / 0x3C)) >>
                                  32) >>
                   1))
             << 16) |
            ((v9 % 0x3C) << 24) | (unsigned __int16)(v9 / 0xE10);
      }
      v12 = HIBYTE(*(_DWORD*)(v7 + 4 * v3)) + HIBYTE(v10) +
            3600 * ((unsigned __int16)*(_DWORD*)(v7 + 4 * v3) +
                    (unsigned __int16)v10) +
            60 * ((unsigned __int8)BYTE2(*(_DWORD*)(v7 + 4 * v3)) + BYTE2(v10));
      if (v12 > 0xE0FF1EF) {
        v11 = 0xFFFF;
      }
      else {
        v11 = ((v12 / 0xE10) | ((v12 % 0x3C) << 24)) +
              ((v12 / 0x3C -
                60 * ((unsigned int)((143165577 *
                                      (unsigned __int64)(v12 / 0x3C)) >>
                                     32) >>
                      1))
               << 16);
      }
    }
    *(_DWORD*)(v7 + 4 * v3) = v11;
    *(_DWORD*)(result + 408) = v8;
    *(_DWORD*)(result + 404) = v2;
  }
  return result;
}

__int64 game_anonymous_Impl_UpdateRoute_closure_Invoke(__int64 a1,
                                                       unsigned __int8* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  bool v6;
  __int64 v7;
  int v8;
  __int64 result;
  unsigned __int64* v10;
  unsigned __int64 i;
  unsigned __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  unsigned __int64* v16;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v14_.v15 = (__int64)*(&GameData_1f9caf8 + *a2);
  v4 = game_HashString_alt1(v14_.v15);
  v5 = *(unsigned __int8*)(v3 + 15);
  v14_.v14 = v4;
  v6 = v2 == v5;
  v7 = *(_QWORD*)(v3 + 48);
  v8 = v6;
  result = game_GameVariableTable_Find_alt1(*(_QWORD**)(v3 + 48),
                                            (unsigned __int64*)&v14_.v14);
  if (result != 0) {
    v10 = (unsigned __int64*)result;
    if (*(_DWORD*)(result + 32) != v8) {
      *(_DWORD*)(result + 32) = v8;
      if ((*(_BYTE*)(v7 + 3932768) & 0xAE) == 0) {
        result = GameData_22400f8;
        if (GameData_22400f8 != 0) {
          result = GameRoutine_12274e0_alt1(GameData_22400f8, v10);
        }
      }
      v12 = v10[11];
      for (i = v10[12]; v12 != i; v12 += 48LL) {
        v16 = v10;
        v13 = *(_QWORD*)(v12 + 32);
        if (v13 == 0) {
          GameRoutine_60a310_alt1();
        }
        result = (*(__int64 (**)(__int64, unsigned __int64**))(
            *(_QWORD*)v13 + 48LL))(v13, &v16);
      }
    }
  }
  return result;
}

__int64 game_anonymous_Impl_UpdatePart_closure_Invoke(__int64 a1, __int64* a2,
                                                      unsigned __int8* a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  unsigned __int64* v8;
  unsigned __int64 i;
  unsigned __int64 v10;
  __int64 v11;
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;
  unsigned __int64* v14;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a3;
  v12_.v13 = *a2;
  v5 = game_HashString_alt1(v12_.v13);
  v6 = *(_QWORD*)(v3 + 48);
  v12_.v12 = v5;
  result = game_GameVariableTable_Find_alt1((_QWORD*)v6,
                                            (unsigned __int64*)&v12_.v12);
  if (result != 0) {
    v8 = (unsigned __int64*)result;
    if (*(_DWORD*)(result + 32) != v4) {
      *(_DWORD*)(result + 32) = v4;
      if ((*(_BYTE*)(v6 + 3932768) & 0xAE) == 0) {
        result = GameData_22400f8;
        if (GameData_22400f8 != 0) {
          result = GameRoutine_12274e0_alt1(GameData_22400f8, v8);
        }
      }
      v10 = v8[11];
      for (i = v8[12]; v10 != i; v10 += 48LL) {
        v14 = v8;
        v11 = *(_QWORD*)(v10 + 32);
        if (v11 == 0) {
          GameRoutine_60a310_alt1();
        }
        result = (*(__int64 (**)(__int64, unsigned __int64**))(
            *(_QWORD*)v11 + 48LL))(v11, &v14);
      }
    }
  }
  return result;
}

__int64 game_anonymous_Impl_UpdateChapter_closure_Invoke(__int64 a1,
                                                         __int64* a2,
                                                         unsigned __int8* a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  unsigned __int64* v8;
  unsigned __int64 i;
  unsigned __int64 v10;
  __int64 v11;
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;
  unsigned __int64* v14;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a3;
  v12_.v13 = *a2;
  v5 = game_HashString_alt1(v12_.v13);
  v6 = *(_QWORD*)(v3 + 48);
  v12_.v12 = v5;
  result = game_GameVariableTable_Find_alt1((_QWORD*)v6,
                                            (unsigned __int64*)&v12_.v12);
  if (result != 0) {
    v8 = (unsigned __int64*)result;
    if (*(_DWORD*)(result + 32) != v4) {
      *(_DWORD*)(result + 32) = v4;
      if ((*(_BYTE*)(v6 + 3932768) & 0xAE) == 0) {
        result = GameData_22400f8;
        if (GameData_22400f8 != 0) {
          result = GameRoutine_12274e0_alt1(GameData_22400f8, v8);
        }
      }
      v10 = v8[11];
      for (i = v8[12]; v10 != i; v10 += 48LL) {
        v14 = v8;
        v11 = *(_QWORD*)(v10 + 32);
        if (v11 == 0) {
          GameRoutine_60a310_alt1();
        }
        result = (*(__int64 (**)(__int64, unsigned __int64**))(
            *(_QWORD*)v11 + 48LL))(v11, &v14);
      }
    }
  }
  return result;
}

__int64 Impl_DeletingDestructor_812220(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v4;

  v4 = a1;
  *a1 = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v4);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 Impl_Unknown4()
{
  if (game_sound_g_game_sound != 0) {
    return 7;
  }
  else {
    return 0;
  }
}

__int64 Impl_Unknown5_8122c0()
{
  __int64 result;

  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    return GameManager_a20000();
  }
  return result;
}

__int64 Impl_Unknown6()
{
  __int64 result;

  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    return GameManager_a28c50();
  }
  return result;
}

__int64 Impl_Unknown7_812300()
{
  __int64 result;

  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    return GameManager_a22fd0();
  }
  return result;
}

_DWORD* Impl_Unknown9_812380(__int64 a1, __int64 a2)
{
  _DWORD* result;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;

  result = (_DWORD*)game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    v3 = *(int*)(a2 + 20);
    v4 = *(_DWORD*)(game_sound_g_game_sound + 2548);
    *(_DWORD*)(a2 + 20) = v3 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v3) = v4;
    v5 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v5 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = BYTE1(v4);
    v6 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v6 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = BYTE2(v4);
    v7 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v7 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = HIBYTE(v4);
    v8 = *(int*)(a2 + 20);
    v9 = result[638];
    *(_DWORD*)(a2 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v9;
    v10 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE1(v9);
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE2(v9);
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = HIBYTE(v9);
    v13 = *(int*)(a2 + 20);
    v14 = result[639];
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = v14;
    v15 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE1(v14);
    v16 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE2(v14);
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = HIBYTE(v14);
    v18 = *(int*)(a2 + 20);
    v19 = result[640];
    *(_DWORD*)(a2 + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v19;
    v20 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE1(v19);
    v21 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE2(v19);
    v22 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v22 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = HIBYTE(v19);
    v23 = *(int*)(a2 + 20);
    v24 = result[641];
    *(_DWORD*)(a2 + 20) = v23 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = v24;
    v25 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v25 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = BYTE1(v24);
    v26 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v26 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = BYTE2(v24);
    v27 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v27 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = HIBYTE(v24);
    v28 = *(int*)(a2 + 20);
    v29 = result[642];
    *(_DWORD*)(a2 + 20) = v28 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = v29;
    v30 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v30 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = BYTE1(v29);
    v31 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v31 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = BYTE2(v29);
    v32 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v32 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = HIBYTE(v29);
    v33 = *(int*)(a2 + 20);
    v34 = result[643];
    *(_DWORD*)(a2 + 20) = v33 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = v34;
    v35 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v35 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = BYTE1(v34);
    v36 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v36 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v36) = BYTE2(v34);
    v37 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v37 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = HIBYTE(v34);
    v38 = *(int*)(a2 + 20);
    v39 = result[644];
    *(_DWORD*)(a2 + 20) = v38 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = v39;
    v40 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v40 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40) = BYTE1(v39);
    v41 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v41 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = BYTE2(v39);
    v42 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v42 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = HIBYTE(v39);
  }
  return result;
}

__int64 Impl_Unknown10_8123a0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  int v42;

  result = game_sound_g_game_sound;
  if (game_sound_g_game_sound != 0) {
    *(_QWORD*)(game_sound_g_game_sound + 2564) = 0;
    *(_QWORD*)(result + 2572) = 0;
    *(_QWORD*)(result + 2548) = 0;
    *(_QWORD*)(result + 2556) = 0;
    v3 = *(int*)(a2 + 20);
    v4 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v3 + 1;
    v5 = *(unsigned __int8*)(v4 + v3);
    *(_DWORD*)(a2 + 20) = v3 + 2;
    v6 = v5 | (*(unsigned __int8*)(v4 + v3 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v3 + 3;
    v7 = *(unsigned __int8*)(v4 + v3 + 2);
    *(_DWORD*)(a2 + 20) = v3 + 4;
    *(_DWORD*)(result + 2548) =
        v6 | (v7 << 16) | (*(unsigned __int8*)(v4 + v3 + 3) << 24);
    v8 = *(int*)(a2 + 20);
    v9 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v8 + 1;
    v10 = *(unsigned __int8*)(v9 + v8);
    *(_DWORD*)(a2 + 20) = v8 + 2;
    v11 = v10 | (*(unsigned __int8*)(v9 + v8 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v8 + 3;
    v12 = *(unsigned __int8*)(v9 + v8 + 2);
    *(_DWORD*)(a2 + 20) = v8 + 4;
    *(_DWORD*)(result + 2552) =
        v11 | (v12 << 16) | (*(unsigned __int8*)(v9 + v8 + 3) << 24);
    v13 = *(int*)(a2 + 20);
    v14 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    v15 = *(unsigned __int8*)(v14 + v13);
    *(_DWORD*)(a2 + 20) = v13 + 2;
    v16 = v15 | (*(unsigned __int8*)(v14 + v13 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v13 + 3;
    v17 = *(unsigned __int8*)(v14 + v13 + 2);
    *(_DWORD*)(a2 + 20) = v13 + 4;
    *(_DWORD*)(result + 2556) =
        v16 | (v17 << 16) | (*(unsigned __int8*)(v14 + v13 + 3) << 24);
    v18 = *(int*)(a2 + 20);
    v19 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v18 + 1;
    v20 = *(unsigned __int8*)(v19 + v18);
    *(_DWORD*)(a2 + 20) = v18 + 2;
    v21 = v20 | (*(unsigned __int8*)(v19 + v18 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v18 + 3;
    v22 = *(unsigned __int8*)(v19 + v18 + 2);
    *(_DWORD*)(a2 + 20) = v18 + 4;
    *(_DWORD*)(result + 2560) =
        v21 | (v22 << 16) | (*(unsigned __int8*)(v19 + v18 + 3) << 24);
    v23 = *(int*)(a2 + 20);
    v24 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v23 + 1;
    v25 = *(unsigned __int8*)(v24 + v23);
    *(_DWORD*)(a2 + 20) = v23 + 2;
    v26 = v25 | (*(unsigned __int8*)(v24 + v23 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v23 + 3;
    v27 = *(unsigned __int8*)(v24 + v23 + 2);
    *(_DWORD*)(a2 + 20) = v23 + 4;
    *(_DWORD*)(result + 2564) =
        v26 | (v27 << 16) | (*(unsigned __int8*)(v24 + v23 + 3) << 24);
    v28 = *(int*)(a2 + 20);
    v29 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v28 + 1;
    v30 = *(unsigned __int8*)(v29 + v28);
    *(_DWORD*)(a2 + 20) = v28 + 2;
    v31 = v30 | (*(unsigned __int8*)(v29 + v28 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v28 + 3;
    v32 = *(unsigned __int8*)(v29 + v28 + 2);
    *(_DWORD*)(a2 + 20) = v28 + 4;
    *(_DWORD*)(result + 2568) =
        v31 | (v32 << 16) | (*(unsigned __int8*)(v29 + v28 + 3) << 24);
    v33 = *(int*)(a2 + 20);
    v34 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v33 + 1;
    v35 = *(unsigned __int8*)(v34 + v33);
    *(_DWORD*)(a2 + 20) = v33 + 2;
    v36 = v35 | (*(unsigned __int8*)(v34 + v33 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v33 + 3;
    v37 = *(unsigned __int8*)(v34 + v33 + 2);
    *(_DWORD*)(a2 + 20) = v33 + 4;
    *(_DWORD*)(result + 2572) =
        v36 | (v37 << 16) | (*(unsigned __int8*)(v34 + v33 + 3) << 24);
    v38 = *(int*)(a2 + 20);
    v39 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v38 + 1;
    v40 = *(unsigned __int8*)(v39 + v38);
    *(_DWORD*)(a2 + 20) = v38 + 2;
    v41 = v40 | (*(unsigned __int8*)(v39 + v38 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v38 + 3;
    v42 = *(unsigned __int8*)(v39 + v38 + 2);
    *(_DWORD*)(a2 + 20) = v38 + 4;
    *(_DWORD*)(result + 2576) =
        v41 | (v42 << 16) | (*(unsigned __int8*)(v39 + v38 + 3) << 24);
  }
  return result;
}

__int64 Impl_Destructor_86a740(_QWORD* a1)
{
  _QWORD* v3;

  *a1 = game_anonymous_Impl_vtable;
  GameRoutine_86abe0(a1 + 7);
  v3 = a1;
  *a1 = GameData_212d6d0 + 2;
  return GameRoutine_876a40(&GameData_21eea40, &v3);
}

__int64 Impl_DeletingDestructor_86a7a0(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v4;

  *a1 = game_anonymous_Impl_vtable;
  GameRoutine_86abe0(a1 + 7);
  v4 = a1;
  *a1 = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v4);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 Impl_Unknown5_86a840(__int64 result)
{
  *(_DWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 Impl_Unknown7_86a870(__int64 result, __int64 a2)
{
  __int64 v2;
  __int16 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int16 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v2 = *(int*)(a2 + 20);
  v3 = *(_WORD*)(result + 8);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3;
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = HIBYTE(v3);
  v5 = *(int*)(a2 + 20);
  LOBYTE(v3) = *(_BYTE*)(result + 10);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v3;
  v6 = *(int*)(a2 + 20);
  LOBYTE(v3) = *(_BYTE*)(result + 12);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v3;
  v7 = *(int*)(a2 + 20);
  LOBYTE(v3) = *(_BYTE*)(result + 14);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v3;
  v8 = *(int*)(a2 + 20);
  LOBYTE(v3) = *(_BYTE*)(result + 16);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v3;
  v9 = *(int*)(a2 + 20);
  LOBYTE(v3) = *(_BYTE*)(result + 18);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v3;
  v10 = *(int*)(a2 + 20);
  v11 = *(_WORD*)(result + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v11;
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = HIBYTE(v11);
  v13 = *(int*)(a2 + 20);
  LOBYTE(v11) = *(_BYTE*)(result + 22);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = v11;
  v14 = *(int*)(a2 + 20);
  LOBYTE(v11) = *(_BYTE*)(result + 24);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = v11;
  v15 = *(int*)(a2 + 20);
  LOBYTE(v11) = *(_BYTE*)(result + 26);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v11;
  v16 = *(int*)(a2 + 20);
  LOBYTE(v11) = *(_BYTE*)(result + 28);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = v11;
  v17 = *(int*)(a2 + 20);
  LOBYTE(v11) = *(_BYTE*)(result + 30);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = v11;
  v18 = *(int*)(a2 + 20);
  v19 = *(_DWORD*)(result + 44);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = v19;
  v20 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE1(v19);
  v21 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE2(v19);
  v22 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = HIBYTE(v19);
  v23 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v23 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = 0;
  return result;
}

__int64 Impl_Unknown8_86aa40(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int16 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int16 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  int v22;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  v4 = *(unsigned __int8*)(v3 + v2);
  *(_DWORD*)(a2 + 20) = v2 + 2;
  *(_WORD*)(result + 8) = v4 | (*(unsigned __int8*)(v3 + v2 + 1) << 8);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_WORD*)(result + 10) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v5);
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_WORD*)(result + 12) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v6);
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_WORD*)(result + 14) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v7);
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_WORD*)(result + 16) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v8);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_WORD*)(result + 18) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v9);
  v10 = *(int*)(a2 + 20);
  v11 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  v12 = *(unsigned __int8*)(v11 + v10);
  *(_DWORD*)(a2 + 20) = v10 + 2;
  *(_WORD*)(result + 20) = v12 | (*(unsigned __int8*)(v11 + v10 + 1) << 8);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_WORD*)(result + 22) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v13);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_WORD*)(result + 24) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v14);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_WORD*)(result + 26) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v15);
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_WORD*)(result + 28) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v16);
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_WORD*)(result + 30) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v17);
  v18 = *(int*)(a2 + 20);
  v19 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  v20 = *(unsigned __int8*)(v19 + v18);
  *(_DWORD*)(a2 + 20) = v18 + 2;
  v21 = v20 | (*(unsigned __int8*)(v19 + v18 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v18 + 3;
  v22 = *(unsigned __int8*)(v19 + v18 + 2);
  *(_DWORD*)(a2 + 20) = v18 + 4;
  *(_DWORD*)(result + 44) =
      v21 | (v22 << 16) | (*(unsigned __int8*)(v19 + v18 + 3) << 24);
  ++*(_DWORD*)(a2 + 20);
  return result;
}

__int64 Impl_Destructor(_QWORD* a1)
{
  _QWORD* v3;

  *a1 = game_anonymous_Impl_vtable;
  GameRoutine_65d6c0(a1 + 417);
  GameRoutine_65d6c0(a1 + 401);
  GameRoutine_65d6c0(a1 + 385);
  GameRoutine_65d6c0(a1 + 355);
  GameRoutine_65d6c0(a1 + 339);
  GameRoutine_65d6c0(a1 + 309);
  GameRoutine_65d6c0(a1 + 293);
  GameRoutine_65d6c0(a1 + 263);
  GameRoutine_65d6c0(a1 + 247);
  GameRoutine_65d6c0(a1 + 217);
  GameRoutine_65d6c0(a1 + 201);
  GameRoutine_65d6c0(a1 + 171);
  GameRoutine_65d6c0(a1 + 155);
  GameRoutine_65d6c0(a1 + 125);
  GameRoutine_65d6c0(a1 + 109);
  GameRoutine_65d6c0(a1 + 79);
  GameRoutine_65d6c0(a1 + 63);
  GameRoutine_65d6c0(a1 + 33);
  GameRoutine_65d6c0(a1 + 17);
  v3 = a1;
  *a1 = GameData_212d6d0 + 2;
  return GameRoutine_876a40(&GameData_21eea40, &v3);
}

__int64 Impl_Unknown5_8acbd0(__int64 result)
{
  __int64 v3;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;

  if (*(_DWORD*)(result + 12) == 0) {
    v4_.v4[0] = GameData_1fa8a70;
    v4_.v4[1] = result;
    v4_.v5 = v4_.v4;
    GameRoutine_8aa110_alt1((__int64)v4_.v4);
    result = (__int64)v4_.v5;
    if (v4_.v5 == v4_.v4) {
      v3 = 32;
    }
    else {
      if (v4_.v5 == nullptr) {
        return result;
      }
      v3 = 40;
    }
    return (*(__int64 (**)(__int64))(*v4_.v5 + v3))((__int64)v4_.v5);
  }
  return result;
}

__int64 Impl_Unknown7_8acc60(__int64 result, __int64 a2)
{
  __int64 v4;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;

  if (*(_DWORD*)(result + 12) == 0) {
    v5_.v5[2] = a2;
    v5_.v5[0] = GameData_1fa8960;
    v5_.v5[1] = result;
    v5_.v6 = v5_.v5;
    GameRoutine_8aa110_alt1((__int64)v5_.v5);
    result = (__int64)v5_.v6;
    if (v5_.v6 == v5_.v5) {
      v4 = 32;
    }
    else {
      if (v5_.v6 == nullptr) {
        return result;
      }
      v4 = 40;
    }
    return (*(__int64 (**)(__int64))(*v5_.v6 + v4))((__int64)v5_.v6);
  }
  return result;
}

_DWORD* Impl_Unknown8_8acce0(_DWORD* result, __int64 a2, int a3)
{
  _DWORD* v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  if (result[3] == 0) {
    v7 = result;
    result =
        (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 32LL))(result);
    if (a3 == (_DWORD)result) {
      v9_.v9[2] = a2;
      v9_.v9[0] = GameData_1fa89f0;
      v9_.v9[1] = v7;
      v9_.v10 = v9_.v9;
      GameRoutine_8aa110_alt1((__int64)v9_.v9);
      result = v9_.v10;
      if (v9_.v10 == v9_.v9) {
        v8 = 32;
      }
      else {
        if (v9_.v10 == nullptr) {
          return result;
        }
        v8 = 40;
      }
      return (_DWORD*)(*(__int64 (**)(__int64))(*v9_.v10 + v8))(
          (__int64)v9_.v10);
    }
  }
  return result;
}

__int64 game_anonymous_Impl_OnSerialize_closure_Invoke(__int64 a1, int* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 (**v6)(__int64, int*);
  __int64 v7;
  int v8;
  __int64 (**v9)(__int64, int*);
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 (**v16)(__int64, int*);
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v23;
  int v24;
  int v25;

  v2 = *a2;
  v4 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v5 = game_HashString32(GameData_1fa87c8[v2]);
  v6 = *(__int64 (***)(__int64, int*))v3;
  v25 = v5;
  if (((*v6)(v3, &v25) & 1) != 0) {
    v7 = v4 + 368LL * (int)v2;
    v8 = game_HashString32("Header");
    v9 = *(__int64 (***)(__int64, int*))v3;
    v24 = v8;
    if (((*v9)(v3, &v24) & 1) != 0) {
      v10 = *(int*)(v3 + 20);
      v11 = *(unsigned int*)(v7 + 156);
      *(_DWORD*)(v3 + 20) = v10 + 1;
      *(_BYTE*)(*(_QWORD*)(v3 + 8) + v10) = v11;
      v12 = *(int*)(v3 + 20);
      *(_DWORD*)(v3 + 20) = v12 + 1;
      *(_BYTE*)(*(_QWORD*)(v3 + 8) + v12) = BYTE1(v11);
      v13 = *(int*)(v3 + 20);
      *(_DWORD*)(v3 + 20) = v13 + 1;
      *(_BYTE*)(*(_QWORD*)(v3 + 8) + v13) = BYTE2(v11);
      v14 = *(int*)(v3 + 20);
      *(_DWORD*)(v3 + 20) = v14 + 1;
      *(_BYTE*)(*(_QWORD*)(v3 + 8) + v14) = BYTE3(v11);
      if ((int)v11 >= 1) {
        memmove(*(_QWORD*)(v3 + 8) + *(int*)(v3 + 20), *(_QWORD*)(v7 + 144),
                v11);
        *(_DWORD*)(v3 + 20) += v11;
      }
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v3 + 8LL))(v3, 0);
    v15 = game_HashString32("Data");
    v16 = *(__int64 (***)(__int64, int*))v3;
    v23 = v15;
    if (((*v16)(v3, &v23) & 1) != 0) {
      v17 = *(int*)(v3 + 20);
      v18 = *(unsigned int*)(v7 + 284);
      *(_DWORD*)(v3 + 20) = v17 + 1;
      *(_BYTE*)(*(_QWORD*)(v3 + 8) + v17) = v18;
      v19 = *(int*)(v3 + 20);
      *(_DWORD*)(v3 + 20) = v19 + 1;
      *(_BYTE*)(*(_QWORD*)(v3 + 8) + v19) = BYTE1(v18);
      v20 = *(int*)(v3 + 20);
      *(_DWORD*)(v3 + 20) = v20 + 1;
      *(_BYTE*)(*(_QWORD*)(v3 + 8) + v20) = BYTE2(v18);
      v21 = *(int*)(v3 + 20);
      *(_DWORD*)(v3 + 20) = v21 + 1;
      *(_BYTE*)(*(_QWORD*)(v3 + 8) + v21) = BYTE3(v18);
      if ((int)v18 >= 1) {
        memmove(*(_QWORD*)(v3 + 8) + *(int*)(v3 + 20), *(_QWORD*)(v7 + 272),
                v18);
        *(_DWORD*)(v3 + 20) += v18;
      }
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v3 + 8LL))(v3, 0);
  }
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v3 + 8LL))(v3, 0);
}

__int64 game_anonymous_Impl_OnDeserialize_closure_Invoke(__int64 a1, int* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  int v31;
  int v32;
  int v33;

  v2 = *(__int64**)(a1 + 16);
  v3 = *a2;
  v4 = *(_QWORD*)(a1 + 8) + 368LL * (int)v3;
  *(_WORD*)(v4 + 24) = 0;
  v5 = v4 + 24;
  *(_QWORD*)(v5 + 4) = 0x10000000000LL;
  *(_BYTE*)(v5 + 12) = 0;
  *(_QWORD*)(v5 + 14) = 0;
  *(_QWORD*)(v5 + 22) = 0;
  *(_QWORD*)(v5 + 30) = 0;
  *(_DWORD*)(v5 + 37) = 0;
  *(_QWORD*)(v5 + 42) = 0;
  *(_DWORD*)(v5 + 50) = 0;
  *(_DWORD*)(v5 + 72) = 0;
  *(_BYTE*)(v5 + 76) = 0;
  *(_DWORD*)(v5 + 78) = 0;
  *(_DWORD*)(v5 + 84) = 0;
  *(_WORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_BYTE*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 63) = 0;
  *(_DWORD*)(v5 + 132) = 0;
  *(_DWORD*)(v5 + 260) = 0;
  v6 = game_HashString32(GameData_1fa87c8[v3]);
  v7 = *v2;
  v33 = v6;
  if (((*(__int64 (**)(__int64*, int*))(v7 + 16))(v2, &v33) & 1) != 0) {
    v8 = game_HashString32("Header");
    v9 = *v2;
    v32 = v8;
    if (((*(__int64 (**)(__int64*, int*))(v9 + 16))(v2, &v32) & 1) != 0) {
      v10 = *((int*)v2 + 5);
      v11 = v2[1];
      v12 = v10 + 2;
      *((_DWORD*)v2 + 5) = v10 + 1;
      v13 = *(unsigned __int8*)(v11 + v10);
      *((_DWORD*)v2 + 5) = v10 + 2;
      v14 = v13 | (*(unsigned __int8*)(v11 + v10 + 1) << 8);
      v15 = v10 + 3;
      v16 = v10 + 4;
      *((_DWORD*)v2 + 5) = v15;
      v17 = *(unsigned __int8*)(v11 + v12);
      *((_DWORD*)v2 + 5) = v16;
      v18 = v14 | (v17 << 16) | (*(unsigned __int8*)(v11 + v15) << 24);
      if (v18 >= 1) {
        memmove(*(_QWORD*)(v5 + 120), v11 + v16,
                v14 | (v17 << 16) | (*(unsigned __int8*)(v11 + v15) << 24));
        *((_DWORD*)v2 + 5) += v18;
      }
      *(_DWORD*)(v5 + 132) = v18;
    }
    (*(void (**)(__int64*, _QWORD))(*v2 + 24))(v2, 0);
    v19 = game_HashString32("Data");
    v20 = *v2;
    v31 = v19;
    if (((*(__int64 (**)(__int64*, int*))(v20 + 16))(v2, &v31) & 1) != 0) {
      v21 = *((int*)v2 + 5);
      v22 = v2[1];
      v23 = v21 + 2;
      *((_DWORD*)v2 + 5) = v21 + 1;
      v24 = *(unsigned __int8*)(v22 + v21);
      *((_DWORD*)v2 + 5) = v21 + 2;
      v25 = v24 | (*(unsigned __int8*)(v22 + v21 + 1) << 8);
      v26 = v21 + 3;
      v27 = v21 + 4;
      *((_DWORD*)v2 + 5) = v26;
      v28 = *(unsigned __int8*)(v22 + v23);
      *((_DWORD*)v2 + 5) = v27;
      v29 = v25 | (v28 << 16) | (*(unsigned __int8*)(v22 + v26) << 24);
      if (v29 >= 1) {
        memmove(*(_QWORD*)(v5 + 248), v22 + v27,
                v25 | (v28 << 16) | (*(unsigned __int8*)(v22 + v26) << 24));
        *((_DWORD*)v2 + 5) += v29;
      }
      *(_DWORD*)(v5 + 260) = v29;
    }
    (*(void (**)(__int64*, _QWORD))(*v2 + 24))(v2, 0);
    GameRoutine_876070((unsigned __int8*)v5, v5 + 112);
  }
  return (*(__int64 (**)(__int64*, _QWORD))(*v2 + 24))(v2, 0);
}

__int64 game_anonymous_Impl_Reset_closure_Invoke(__int64 result, int* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 8) + 368LL * *a2;
  *(_WORD*)(v2 + 24) = 0;
  *(_QWORD*)(v2 + 28) = 0x10000000000LL;
  *(_BYTE*)(v2 + 36) = 0;
  *(_QWORD*)(v2 + 38) = 0;
  *(_QWORD*)(v2 + 46) = 0;
  *(_QWORD*)(v2 + 54) = 0;
  *(_DWORD*)(v2 + 61) = 0;
  *(_QWORD*)(v2 + 66) = 0;
  *(_DWORD*)(v2 + 74) = 0;
  *(_DWORD*)(v2 + 96) = 0;
  *(_BYTE*)(v2 + 100) = 0;
  *(_DWORD*)(v2 + 102) = 0;
  *(_DWORD*)(v2 + 108) = 0;
  *(_WORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_BYTE*)(v2 + 128) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 87) = 0;
  *(_DWORD*)(v2 + 156) = 0;
  *(_DWORD*)(v2 + 284) = 0;
  return result;
}

__int64 game_anonymous_Impl_Impl()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  _BYTE* v10;
  char v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;

  v0 = (__int64*)fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      608, 16, 0);
  *(_QWORD*)(v1 + 32) = 0;
  *(_QWORD*)(v1 + 80) = 0;
  *(_QWORD*)(v1 + 128) = 0;
  *(_QWORD*)(v1 + 144) = 0;
  *(_QWORD*)(v1 + 152) = 0;
  *(_QWORD*)(v1 + 160) = 0;
  *(_QWORD*)(v1 + 168) = 0;
  *(_QWORD*)(v1 + 176) = 0;
  *(_QWORD*)(v1 + 184) = 0;
  *(_QWORD*)(v1 + 528) = 0;
  *(_QWORD*)(v1 + 520) = 0;
  *(_QWORD*)(v1 + 504) = 0;
  *(_QWORD*)(v1 + 512) = 0;
  *(_DWORD*)(v1 + 296) = 990057071;
  *(_DWORD*)(v1 + 396) = 990057071;
  *(_QWORD*)(v1 + 488) = 0;
  *(_QWORD*)(v1 + 496) = 0;
  *(_QWORD*)(v1 + 472) = 0;
  *(_QWORD*)(v1 + 480) = 0;
  *(_QWORD*)(v1 + 456) = 0;
  *(_QWORD*)(v1 + 464) = 0;
  *(_QWORD*)(v1 + 440) = 0;
  *(_QWORD*)(v1 + 448) = 0;
  *(_QWORD*)(v1 + 424) = 0;
  *(_QWORD*)(v1 + 432) = 0;
  *(_QWORD*)(v1 + 408) = 0;
  *(_QWORD*)(v1 + 416) = 0;
  *(_QWORD*)(v1 + 400) = 0;
  *(_BYTE*)(v1 + 556) = 0;
  *(_QWORD*)(v1 + 560) = 0;
  *(_WORD*)(v1 + 598) = 0;
  *(_QWORD*)(v1 + 240) = 0x3B449BA63B03126FLL;
  *(_QWORD*)(v1 + 248) = 0;
  *(_QWORD*)(v1 + 256) = 0;
  *(_QWORD*)(v1 + 264) = 0x3B449BA63B03126FLL;
  *(_QWORD*)(v1 + 272) = 0x3B03126F00000000LL;
  *(_QWORD*)(v1 + 280) = 998445679;
  *(_QWORD*)(v1 + 288) = 0x3B03126F3B03126FLL;
  *(_QWORD*)(v1 + 208) = 0x3B03126F3B03126FLL;
  *(_QWORD*)(v1 + 216) = 0x3B03126F3B03126FLL;
  *(_QWORD*)(v1 + 224) = 0x3B03126F3B03126FLL;
  *(_QWORD*)(v1 + 232) = 0x3B03126F3B03126FLL;
  *(_QWORD*)(v1 + 192) = 0;
  *(_QWORD*)(v1 + 200) = 0x3B03126F3B03126FLL;
  *(_QWORD*)(v1 + 380) = 998445679;
  *(_QWORD*)(v1 + 388) = 0x3B03126F3B03126FLL;
  *(_QWORD*)(v1 + 348) = 0;
  *(_QWORD*)(v1 + 356) = 0;
  *(_QWORD*)(v1 + 364) = 0x3B449BA63B03126FLL;
  *(_QWORD*)(v1 + 372) = 0x3B03126F00000000LL;
  *(_QWORD*)(v1 + 316) = 0x3B03126F3B03126FLL;
  *(_QWORD*)(v1 + 324) = 0x3B03126F3B03126FLL;
  *(_QWORD*)(v1 + 332) = 0x3B03126F3B03126FLL;
  *(_QWORD*)(v1 + 340) = 0x3B449BA63B03126FLL;
  *(_QWORD*)(v1 + 300) = 0x3B03126F3B03126FLL;
  *(_QWORD*)(v1 + 308) = 0x3B03126F3B03126FLL;
  v2 = *v0;
  *(_DWORD*)(v1 + 536) = 1176256512;
  *(_QWORD*)(v1 + 540) = 0;
  *(_QWORD*)(v1 + 548) = 0;
  *(_QWORD*)(v1 + 568) = 0x41F0000041900000LL;
  *(_DWORD*)(v1 + 576) = 1106247680;
  *(_QWORD*)(v1 + 580) = 0;
  *(_QWORD*)(v1 + 586) = 0;
  *(_DWORD*)(v1 + 594) = 65537;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(v2, 8, 16, 0);
  v4 = (__int64*)fw_memory_HeapManager_Allocate(*v0, 24, 16, 0);
  GameRoutine_1556f00(v4);
  *v3 = v4;
  v5 = game_g_game_setting_ptr;
  *(_QWORD*)(v1 + 144) = v3;
  v12_.v12[0] = GameData_204c528;
  v12_.v12[1] = v1;
  v12_.v13 = v12_.v12;
  v6 = *(_BYTE**)v5;
  v14_.v15 = v14_.v14;
  v14_.v14[0] = GameData_204c528;
  v14_.v14[1] = v1;
  GameRoutine_1553350(v14_.v14, (_QWORD*)v6 + 28);
  if (v14_.v15 == v14_.v14) {
    v7 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_6;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v7))((__int64)v14_.v15);
LABEL_6:
  result = (__int64)v12_.v13;
  if (v12_.v13 == v12_.v12) {
    v9 = 32;
  }
  else {
    if (v12_.v13 == nullptr) {
      goto LABEL_11;
    }
    v9 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v12_.v13 + v9))((__int64)v12_.v13);
LABEL_11:
  GameData_2258178 = v1;
  v10 = *(_BYTE**)v5;
  v11 = *(_BYTE*)(*(_QWORD*)v5 + 940LL);
  *(_BYTE*)(*(_QWORD*)v5 + 941LL) = 0;
  if ((v11 & 1) == 0) {
    v10[940] = 1;
  }
  v10[901] = 0;
  v10[805] = 1;
  return result;
}

void Impl_1551900()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;

  v0 = (_QWORD*)GameData_2258178;
  v1 = game_g_game_setting_ptr;
  if (GameData_2258178 == 0) {
    goto LABEL_33;
  }
  v2 = *(_QWORD*)game_g_game_setting_ptr;
  v16_.v17 = nullptr;
  GameRoutine_1553350(v16_.v16, (_QWORD*)(v2 + 224));
  if (v16_.v17 == v16_.v16) {
    v3 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_7;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v16_.v17 + v3))((__int64)v16_.v17);
LABEL_7:
  GameRoutine_15547e0_alt1(v0 + 19);
  v4 = (__int64*)v0[18];
  v0[18] = 0;
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != nullptr) {
    v6 = *v4;
    if (*v4 != 0) {
      GameRoutine_1557060_alt1(*v4);
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7, v6);
      *v4 = 0;
    }
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8, v4);
  }
  v9 = (_QWORD*)v0[16];
  if (v9 == v0 + 12) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_20;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
LABEL_20:
  v11 = (_QWORD*)v0[10];
  if (v11 == v0 + 6) {
    v12 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_25;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
LABEL_25:
  v13 = (_QWORD*)v0[4];
  if (v13 == v0) {
    v14 = 32;
    goto LABEL_29;
  }
  if (v13 != nullptr) {
    v14 = 40;
  LABEL_29:
    (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
  }
  v15 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v15 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v15, v0);
  GameData_2258178 = 0;
LABEL_33:
  *(_BYTE*)(*(_QWORD*)v1 + 941LL) = 1;
}

__int64 game_anonymous_Impl_Impl_closure_Invoke(__int64 result, __int64 a2,
                                                __int64 a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  unsigned int v15;
  char* v16;
  char v17;
  __int64 v18;
  char v19;
  int v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  float* v45;
  float v46;
  float v47;
  float v48;
  __int64 v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  int v59;
  float v60;
  float v61;
  __int64 v62;
  float v63;
  __int64 v64;
  float v65;
  float v66;
  float v67;
  float v68;
  int v69;
  float* v70;
  __int64 v71;
  bool v72;
  int v73;
  int v74;
  _BOOL4 v75;
  _BOOL4 v76;
  char v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  float v85;
  float v86;
  int v87;
  __int64 v88;
  float* v89;
  __int64 v90;
  int v91;
  int v92;
  bool v93;
  _BOOL4 v94;
  char v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  float v102;
  float v103;
  int v104;
  __int64 v105;
  _BYTE* v106;
  int v107;
  __int64 v108;
  int v109;
  int v110;
  int v111;
  int v112;
  float v113;
  _QWORD v114[2];
  __int64 v115;

  v3 = *(_QWORD*)(result + 8);
  v6 = GameData_2258178;
  v7 = game_g_game_setting_ptr;
  if (GameData_2258178 != 0) {
    v8 = game_8224a0(38);
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_23;
    }
    v9 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v8);
    if (v9 == 0) {
      goto LABEL_23;
    }
    v10 = *(_QWORD*)v7;
    if (*(_DWORD*)(v9 + 32) != 1) {
      goto LABEL_24;
    }
    v11 = *(_DWORD*)(v10 + 944);
    v12 = *(_DWORD*)(v10 + 952);
    if (((v11 & 0x28000000) == 0 || (v12 & 0x50000000) == 0) &&
        ((v11 & 0x50000000) == 0 || (v12 & 0x28000000) == 0)) {
      goto LABEL_24;
    }
    if (*(_BYTE*)(v10 + 807) != 1) {
      goto LABEL_24;
    }
    if ((*(_BYTE*)(v10 + 804) & 1) != 0) {
      goto LABEL_16;
    }
    if (*(_BYTE*)(v10 + 940) != 1) {
      v15 = 1;
      *(_BYTE*)(v10 + 940) = 1;
      goto LABEL_22;
    }
    if (*(_BYTE*)(v10 + 805) == 1 && (*(_BYTE*)(v10 + 806) & 1) != 0) {
    LABEL_16:
      v15 = 0;
    }
    else {
      v15 = 1;
    }
  LABEL_22:
    *(_BYTE*)(v10 + 805) = v15;
    *(_BYTE*)(v10 + 804) = v15;
    v114[1] = &GameData_1aa24ea;
    v114[0] = game_HashString(&GameData_1aa24ea);
    game_VariableManager_SetFlag(v114, v15);
  LABEL_23:
    v10 = *(_QWORD*)v7;
  LABEL_24:
    if (*(_BYTE*)(v10 + 807) != 1) {
      goto LABEL_31;
    }
    if ((*(_BYTE*)(v10 + 804) & 1) != 0) {
      if (*(_BYTE*)(v6 + 599) != 0) {
        goto LABEL_37;
      }
      v16 = (char*)(v6 + 599);
      goto LABEL_34;
    }
    if (*(_BYTE*)(v10 + 940) == 1 && *(_BYTE*)(v10 + 805) == 1) {
      v17 = *(_BYTE*)(v10 + 806);
    }
    else {
    LABEL_31:
      v17 = 0;
    }
    if (*(_BYTE*)(v6 + 599) == (v17 & 1)) {
      goto LABEL_37;
    }
    v16 = (char*)(v6 + 599);
    if ((v17 & 1) == 0) {
      v18 = *(_QWORD*)(v6 + 80);
      v19 = 0;
      if (v18 == 0) {
        goto LABEL_36;
      }
      goto LABEL_35;
    }
  LABEL_34:
    v18 = *(_QWORD*)(v6 + 32);
    v19 = 1;
    if (v18 == 0) {
    LABEL_36:
      *v16 = v19;
      v10 = *(_QWORD*)v7;
    LABEL_37:
      v20 = *(_DWORD*)(v6 + 588);
      *(_DWORD*)(v6 + 588) = 0;
      *(_BYTE*)(v6 + 598) = 0;
      if ((*(_BYTE*)(v10 + 807) != 1 ||
           (*(_BYTE*)(v10 + 804) & 1) == 0 &&
               (*(_BYTE*)(v10 + 940) != 1 || (*(_BYTE*)(v10 + 805) & 1) == 0 ||
                (*(_BYTE*)(v10 + 806) & 1) == 0)) &&
          (*(_BYTE*)(v10 + 903) != 1 ||
           (*(_BYTE*)(v10 + 900) & 1) == 0 &&
               (*(_BYTE*)(v10 + 940) != 1 || (*(_BYTE*)(v10 + 901) & 1) == 0 ||
                (*(_BYTE*)(v10 + 902) & 1) == 0))) {
        v31 = *(_DWORD*)(v6 + 572);
        *(_QWORD*)(v6 + 580) = 0;
        *(_DWORD*)(v6 + 576) = v31;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                  memory_order_acquire) &
             1) == 0 &&
            (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
          GameData_21a60e0 = 0;
          __cxa_guard_release(&GameData_21a60e8);
        }
        v32 = GameData_21a60e0;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                  memory_order_acquire) &
             1) == 0) {
          v115 = v32;
          v107 = __cxa_guard_acquire(&GameData_21a60e8);
          v32 = v115;
          if (v107 != 0) {
            GameData_21a60e0 = 0;
            __cxa_guard_release(&GameData_21a60e8);
            v32 = v115;
          }
        }
        v33 = GameData_21a60e0;
        v34 = *(_QWORD*)v7;
        *(_QWORD*)(v6 + 520) = v32;
        *(_QWORD*)(v6 + 528) = v33;
        goto LABEL_190;
      }
      v21 =
          (float)(*(float*)(v6 + 564) * 0x1.1df46a0000000p-6f) +
          (float)(roundf((float)(*(float*)(v6 + 564) * 0x1.1df46a0000000p-6f) *
                         0x1.45f3060000000p-3f) *
                  -0x1.921fb60000000p+2f);
      if (v21 < -0x1.921fb60000000p+0f) {
        v22 = -1.0f;
      }
      else {
        v22 = 1.0f;
      }
      v23 = -0x1.921fb60000000p+1f - v21;
      if (v21 >= -0x1.921fb60000000p+0f) {
        v23 = v21;
      }
      if (v21 > 0x1.921fb60000000p+0f) {
        v24 = -1.0f;
      }
      else {
        v24 = v22;
      }
      if (v21 > 0x1.921fb60000000p+0f) {
        v23 = 0x1.921fb60000000p+1f - v21;
      }
      v25 = v23 * v23;
      if (v21 <= 0x1.921fb60000000p+0f) {
        if (v21 >= -0x1.921fb60000000p+0f) {
        LABEL_59:
          v27 =
              v24 *
              (float)((float)((float)-(
                                  float)(*(float*)((char*)((__int128*)0x10LL) +
                                                   (_QWORD)GameData_212c188) -
                                         (float)((float)(*(float*)((char*)((
                                                                       _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                       GameData_212c188 +
                                                                   4) +
                                                         (float)((float)-(
                                                                     float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c188) -
                                                                            (float)((float)(*((float*)
                                                                                                  GameData_212c188 +
                                                                                              1) -
                                                                                            (float)(*(float*)
                                                                                                        GameData_212c188 *
                                                                                                    v25)) *
                                                                                    v25)) *
                                                                 v25)) *
                                                 v25)) *
                              v25) +
                      1.0f);
          v28 =
              v21 *
              (float)((float)((float)-(
                                  float)(*(float*)((char*)((__int128*)0x10LL) +
                                                   (_QWORD)GameData_212c190) -
                                         (float)((float)(*(float*)((char*)((
                                                                       _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                       GameData_212c190 +
                                                                   4) +
                                                         (float)((float)-(
                                                                     float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c190) -
                                                                            (float)((float)(*((float*)
                                                                                                  GameData_212c190 +
                                                                                              1) -
                                                                                            (float)(*(float*)
                                                                                                        GameData_212c190 *
                                                                                                    (float)(v21 *
                                                                                                            v21))) *
                                                                                    (float)(v21 *
                                                                                            v21))) *
                                                                 (float)(v21 *
                                                                         v21))) *
                                                 (float)(v21 * v21))) *
                              (float)(v21 * v21)) +
                      1.0f);
          if (*(_BYTE*)(v10 + 807) == 0 ||
              (*(_BYTE*)(v10 + 804) & 1) == 0 &&
                  (*(_BYTE*)(v10 + 940) != 1 || *(_BYTE*)(v10 + 805) != 1 ||
                   *(_BYTE*)(v10 + 806) != 1)) {
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                      memory_order_acquire) &
                 1) == 0) {
              v112 = v20;
              v108 = v10;
              *(float*)&v115 = v27;
              v113 = v28;
              v109 = __cxa_guard_acquire(&GameData_21a60e8);
              v28 = v113;
              v27 = *(float*)&v115;
              v20 = v112;
              v10 = v108;
              if (v109 != 0) {
                GameData_21a60e0 = 0;
                __cxa_guard_release(&GameData_21a60e8);
                v28 = v113;
                v27 = *(float*)&v115;
                v20 = v112;
                v10 = v108;
              }
            }
            v35 = *((float*)&GameData_21a60e0 + 1);
            v34 = *(_QWORD*)v7;
            *(_DWORD*)(v6 + 520) = GameData_21a60e0;
            v36 = v35;
          LABEL_84:
            *(float*)(v6 + 524) = v36;
            if (*(_BYTE*)(v34 + 903) != 1 ||
                (*(_BYTE*)(v34 + 900) & 1) == 0 &&
                    (*(_BYTE*)(v34 + 940) != 1 || *(_BYTE*)(v34 + 901) != 1 ||
                     *(_BYTE*)(v34 + 902) != 1)) {
              if ((atomic_load_explicit(
                       (atomic_uchar* volatile)&GameData_21a60e8,
                       memory_order_acquire) &
                   1) == 0) {
                v110 = v20;
                v111 = __cxa_guard_acquire(&GameData_21a60e8);
                v20 = v110;
                if (v111 != 0) {
                  GameData_21a60e0 = 0;
                  __cxa_guard_release(&GameData_21a60e8);
                  v20 = v110;
                }
              }
              v34 = *(_QWORD*)v7;
              v40 = *((float*)&GameData_21a60e0 + 1);
              *(_DWORD*)(v6 + 528) = GameData_21a60e0;
            LABEL_109:
              *(float*)(v6 + 532) = v40;
              if (*(_BYTE*)(v34 + 807) == 1 &&
                  ((*(_BYTE*)(v34 + 804) & 1) != 0 ||
                   *(_BYTE*)(v34 + 940) == 1 && *(_BYTE*)(v34 + 805) == 1 &&
                       *(_BYTE*)(v34 + 806) == 1)) {
                v42 = *(_QWORD*)(v6 + 520);
              }
              else {
                LODWORD(v42) = 0;
                if (*(_BYTE*)(v34 + 903) == 1 &&
                    ((*(_BYTE*)(v34 + 900) & 1) != 0 ||
                     *(_BYTE*)(v34 + 940) == 1 && *(_BYTE*)(v34 + 901) == 1 &&
                         *(_BYTE*)(v34 + 902) == 1)) {
                  v42 = *(_QWORD*)(v6 + 528);
                }
              }
              v43 = *(_QWORD*)(v6 + 192);
              if (v43 != 0) {
                v44 =
                    *(int*)(*(_QWORD*)(*(_QWORD*)(v6 + 160) +
                                       8 * ((unsigned __int64)(v43 +
                                                               *(_QWORD*)(v6 +
                                                                          184) -
                                                               1) >>
                                            10)) +
                            4 * ((v43 + *(_QWORD*)(v6 + 184) - 1) & 0x3FF));
              }
              else {
                v44 = 0;
              }
              v45 = (float*)(v6 + 300);
              v46 = *(float*)&v42 * *(float*)(v6 + 300 + 4 * v44);
              if (*(_BYTE*)(v34 + 807) != 0 &&
                  ((*(_BYTE*)(v34 + 804) & 1) != 0 ||
                   *(_BYTE*)(v34 + 940) == 1 && *(_BYTE*)(v34 + 805) == 1 &&
                       *(_BYTE*)(v34 + 806) == 1)) {
                v47 = *(float*)(v6 + 524);
              }
              else {
                v47 = 0.0f;
                if (*(_BYTE*)(v34 + 903) == 1 &&
                    ((*(_BYTE*)(v34 + 900) & 1) != 0 ||
                     *(_BYTE*)(v34 + 940) == 1 && *(_BYTE*)(v34 + 901) == 1 &&
                         *(_BYTE*)(v34 + 902) == 1)) {
                  v47 = v40;
                }
              }
              v48 = fabsf(v46);
              if (v43 != 0) {
                v49 =
                    *(int*)(*(_QWORD*)(*(_QWORD*)(v6 + 160) +
                                       8 * ((unsigned __int64)(v43 +
                                                               *(_QWORD*)(v6 +
                                                                          184) -
                                                               1) >>
                                            10)) +
                            4 * ((v43 + *(_QWORD*)(v6 + 184) - 1) & 0x3FF));
                v50 = v47 * v45[v49];
                v51 = fabsf(v50);
                if (((unsigned int)(v49 - 2) < 9 ||
                     (unsigned int)v49 <= 0x18 &&
                         ((1 << v49) & 0x1900000) != 0) &&
                    *(_BYTE*)(v6 + 593) == 1 && *(float*)(v6 + 576) == 0.0f) {
                  if (v20 > 2) {
                    if (v20 == 3) {
                      if (*(_BYTE*)(v34 + 807) != 0 &&
                          ((*(_BYTE*)(v34 + 804) & 1) != 0 ||
                           *(_BYTE*)(v34 + 940) == 1 &&
                               *(_BYTE*)(v34 + 805) == 1 &&
                               *(_BYTE*)(v34 + 806) == 1)) {
                        v64 = *(_QWORD*)(v6 + 520);
                      }
                      else {
                        LODWORD(v64) = 0;
                        if (*(_BYTE*)(v34 + 903) == 1 &&
                            ((*(_BYTE*)(v34 + 900) & 1) != 0 ||
                             *(_BYTE*)(v34 + 940) == 1 &&
                                 *(_BYTE*)(v34 + 901) == 1 &&
                                 *(_BYTE*)(v34 + 902) == 1)) {
                          v64 = *(_QWORD*)(v6 + 528);
                        }
                      }
                      if (*(float*)&v64 < (float)-*(float*)(v6 + 560)) {
                        *(_DWORD*)(v6 + 588) = 3;
                        goto LABEL_190;
                      }
                    }
                    else if (v20 == 4) {
                      if (*(_BYTE*)(v34 + 807) != 0 &&
                          ((*(_BYTE*)(v34 + 804) & 1) != 0 ||
                           *(_BYTE*)(v34 + 940) == 1 &&
                               *(_BYTE*)(v34 + 805) == 1 &&
                               *(_BYTE*)(v34 + 806) == 1)) {
                        v62 = *(_QWORD*)(v6 + 520);
                      }
                      else {
                        LODWORD(v62) = 0;
                        if (*(_BYTE*)(v34 + 903) == 1 &&
                            ((*(_BYTE*)(v34 + 900) & 1) != 0 ||
                             *(_BYTE*)(v34 + 940) == 1 &&
                                 *(_BYTE*)(v34 + 901) == 1 &&
                                 *(_BYTE*)(v34 + 902) == 1)) {
                          v62 = *(_QWORD*)(v6 + 528);
                        }
                      }
                      if (*(float*)&v62 > *(float*)(v6 + 560)) {
                        *(_DWORD*)(v6 + 588) = 4;
                        goto LABEL_190;
                      }
                    }
                  }
                  else if (v20 == 1) {
                    if (*(_BYTE*)(v34 + 807) != 0 &&
                        ((*(_BYTE*)(v34 + 804) & 1) != 0 ||
                         *(_BYTE*)(v34 + 940) == 1 &&
                             *(_BYTE*)(v34 + 805) == 1 &&
                             *(_BYTE*)(v34 + 806) == 1)) {
                      v63 = *(float*)(v6 + 524);
                    }
                    else {
                      v63 = 0.0f;
                      if (*(_BYTE*)(v34 + 903) == 1 &&
                          ((*(_BYTE*)(v34 + 900) & 1) != 0 ||
                           *(_BYTE*)(v34 + 940) == 1 &&
                               *(_BYTE*)(v34 + 901) == 1 &&
                               *(_BYTE*)(v34 + 902) == 1)) {
                        v63 = v40;
                      }
                    }
                    if (v63 < (float)-*(float*)(v6 + 560)) {
                      *(_DWORD*)(v6 + 588) = 1;
                      goto LABEL_190;
                    }
                  }
                  else if (v20 == 2) {
                    if (*(_BYTE*)(v34 + 807) != 0 &&
                        ((*(_BYTE*)(v34 + 804) & 1) != 0 ||
                         *(_BYTE*)(v34 + 940) == 1 &&
                             *(_BYTE*)(v34 + 805) == 1 &&
                             *(_BYTE*)(v34 + 806) == 1)) {
                      v52 = *(float*)(v6 + 524);
                    }
                    else {
                      v52 = 0.0f;
                      if (*(_BYTE*)(v34 + 903) == 1 &&
                          ((*(_BYTE*)(v34 + 900) & 1) != 0 ||
                           *(_BYTE*)(v34 + 940) == 1 &&
                               *(_BYTE*)(v34 + 901) == 1 &&
                               *(_BYTE*)(v34 + 902) == 1)) {
                        v52 = v40;
                      }
                    }
                    if (v52 > *(float*)(v6 + 560)) {
                      *(_DWORD*)(v6 + 588) = 2;
                      goto LABEL_190;
                    }
                  }
                }
              }
              else {
                v50 = v47 * *v45;
                v51 = fabsf(v50);
              }
              v53 = *(float*)(v6 + 560);
              if (v48 <= v53 && v51 <= v53) {
                v54 = *(float*)(v6 + 576);
                v55 = *(float*)(as_g_base_frame_counter + 104);
                *(_QWORD*)(v6 + 580) = 0;
                *(float*)(v6 + 576) = v55 + v54;
              LABEL_190:
                v70 = (float*)(v6 + 400);
                v71 = -5;
                while (1) {
                  if (*(_BYTE*)(v34 + 807) != 1) {
                  LABEL_205:
                    v76 = false;
                    v75 = false;
                    v73 = 1 << (v71 + 5);
                  LABEL_206:
                    v79 = ~v73;
                    v77 = 0;
                    v78 = *(_DWORD*)(v6 + 444) & ~v73;
                    goto LABEL_207;
                  }
                  if (*(_BYTE*)(v34 + 804) == 1) {
                    break;
                  }
                  if (*(_BYTE*)(v34 + 940) != 1 || *(_BYTE*)(v34 + 805) != 1) {
                    goto LABEL_205;
                  }
                  v73 = 1 << (v71 + 5);
                  if (*(_BYTE*)(v34 + 806) == 1) {
                    v75 = (*(_DWORD*)(v34 + 760) & v73) != 0;
                    if ((*(_BYTE*)(v34 + 806) & 1) == 0) {
                      goto LABEL_203;
                    }
                  }
                  else {
                    v75 = false;
                    if ((*(_BYTE*)(v34 + 806) & 1) == 0) {
                    LABEL_203:
                      v76 = *(_BYTE*)(v34 + 806) == 1 &&
                            (*(_DWORD*)(v34 + 768) & v73) != 0;
                      goto LABEL_206;
                    }
                  }
                  v74 = *(_DWORD*)(v34 + 764) & v73;
                  if ((*(_BYTE*)(v34 + 806) & 1) != 0) {
                    goto LABEL_197;
                  }
                  v76 = false;
                  if (v74 == 0) {
                    goto LABEL_206;
                  }
                LABEL_198:
                  v77 = 1;
                  v78 = *(_DWORD*)(v6 + 444) | v73;
                  v79 = ~v73;
                LABEL_207:
                  v80 = *(_DWORD*)(v6 + 440);
                  v81 = *(_DWORD*)(v6 + 448);
                  *(_DWORD*)(v6 + 444) = v78;
                  v82 = v81 & v79;
                  *(_DWORD*)(v6 + 440) = v80 & v79;
                  v83 = *(_DWORD*)(v6 + 452);
                  *(_DWORD*)(v6 + 448) = v82;
                  v84 = v83 & v79;
                  *(_DWORD*)(v6 + 452) = v84;
                  if (v75) {
                    v85 = *v70;
                    if (*v70 >= 10.0f) {
                      v86 = v70[5];
                      if (v86 >= 4.0f) {
                        *(_DWORD*)(v6 + 444) = v78 | v73;
                        v86 = v70[5] + -4.0f;
                        v85 = *v70;
                        v70[5] = v86;
                      }
                      v70[5] = v86 + *(float*)(as_g_base_frame_counter + 104);
                    }
                    if (v85 >= *(float*)(v6 + 568)) {
                      *(_DWORD*)(v6 + 440) |= v73;
                    }
                    if ((v77 & 1) == 0) {
                      *v70 = *(float*)(as_g_base_frame_counter + 104) + *v70;
                    }
                  }
                  else {
                    if (v76) {
                      if ((float)(*v70 +
                                  *(float*)(as_g_base_frame_counter + 104)) >=
                          *(float*)(v6 + 568)) {
                        *(_DWORD*)(v6 + 452) = v84 | v73;
                        *(_DWORD*)(v6 + 456) &= v79;
                      }
                      else {
                        v87 = *(_DWORD*)(v6 + 456);
                        if ((v87 & v73) != 0) {
                          *(_DWORD*)(v6 + 456) = v87 & v79;
                          v88 = *(_QWORD*)v7;
                          if (*(_BYTE*)(*(_QWORD*)v7 + 807LL) == 1 &&
                              ((*(_BYTE*)(v88 + 804) & 1) != 0 ||
                               *(_BYTE*)(v88 + 940) == 1 &&
                                   *(_BYTE*)(v88 + 805) == 1 &&
                                   *(_BYTE*)(v88 + 806) == 1)) {
                            *(_DWORD*)(v88 + 768) &= v79;
                          }
                        }
                        else {
                          *(_DWORD*)(v6 + 448) = v82 | v73;
                        }
                      }
                    }
                    *v70 = 0.0f;
                    v70[5] = 0.0f;
                  }
                  v72 = __CFADD__(v71++, 1);
                  ++v70;
                  if (v72) {
                    v89 = (float*)(v6 + 460);
                    v90 = -5;
                    while (1) {
                      if (*(_BYTE*)(v34 + 903) != 1) {
                      LABEL_247:
                        v94 = false;
                        v93 = false;
                        v91 = 1 << (v90 + 5);
                      LABEL_248:
                        v97 = ~v91;
                        v95 = 0;
                        v96 = *(_DWORD*)(v6 + 504) & ~v91;
                        goto LABEL_249;
                      }
                      if (*(_BYTE*)(v34 + 900) == 1) {
                        break;
                      }
                      if (*(_BYTE*)(v34 + 940) != 1 ||
                          *(_BYTE*)(v34 + 901) != 1) {
                        goto LABEL_247;
                      }
                      v91 = 1 << (v90 + 5);
                      if (*(_BYTE*)(v34 + 902) == 1) {
                        v93 = (*(_DWORD*)(v34 + 856) & v91) != 0;
                        if ((*(_BYTE*)(v34 + 902) & 1) == 0) {
                          goto LABEL_245;
                        }
                      }
                      else {
                        v93 = false;
                        if ((*(_BYTE*)(v34 + 902) & 1) == 0) {
                        LABEL_245:
                          v94 = *(_BYTE*)(v34 + 902) == 1 &&
                                (*(_DWORD*)(v34 + 864) & v91) != 0;
                          goto LABEL_248;
                        }
                      }
                      v92 = *(_DWORD*)(v34 + 860) & v91;
                      if ((*(_BYTE*)(v34 + 902) & 1) != 0) {
                        goto LABEL_239;
                      }
                      v94 = false;
                      if (v92 == 0) {
                        goto LABEL_248;
                      }
                    LABEL_240:
                      v95 = 1;
                      v96 = *(_DWORD*)(v6 + 504) | v91;
                      v97 = ~v91;
                    LABEL_249:
                      v98 = *(_DWORD*)(v6 + 500);
                      v99 = *(_DWORD*)(v6 + 508);
                      *(_DWORD*)(v6 + 504) = v96;
                      v100 = v99 & v97;
                      *(_DWORD*)(v6 + 500) = v98 & v97;
                      v101 = *(_DWORD*)(v6 + 512);
                      *(_DWORD*)(v6 + 508) = v100;
                      result = v101 & (unsigned int)v97;
                      *(_DWORD*)(v6 + 512) = result;
                      if (v93) {
                        v102 = *v89;
                        if (*v89 >= 10.0f) {
                          v103 = v89[5];
                          if (v103 >= 4.0f) {
                            *(_DWORD*)(v6 + 504) = v96 | v91;
                            v103 = v89[5] + -4.0f;
                            v102 = *v89;
                            v89[5] = v103;
                          }
                          v89[5] =
                              v103 + *(float*)(as_g_base_frame_counter + 104);
                        }
                        if (v102 >= *(float*)(v6 + 568)) {
                          *(_DWORD*)(v6 + 500) |= v91;
                        }
                        if ((v95 & 1) == 0) {
                          *v89 =
                              *(float*)(as_g_base_frame_counter + 104) + *v89;
                        }
                      }
                      else {
                        if (v94) {
                          if ((float)(*v89 + *(float*)(as_g_base_frame_counter +
                                                       104)) >=
                              *(float*)(v6 + 568)) {
                            *(_DWORD*)(v6 + 512) = result | v91;
                            *(_DWORD*)(v6 + 516) &= v97;
                          }
                          else {
                            v104 = *(_DWORD*)(v6 + 516);
                            if ((v104 & v91) != 0) {
                              *(_DWORD*)(v6 + 516) = v104 & v97;
                              v105 = *(_QWORD*)v7;
                              if (*(_BYTE*)(*(_QWORD*)v7 + 903LL) == 1 &&
                                  ((*(_BYTE*)(v105 + 900) & 1) != 0 ||
                                   *(_BYTE*)(v105 + 940) == 1 &&
                                       *(_BYTE*)(v105 + 901) == 1 &&
                                       *(_BYTE*)(v105 + 902) == 1)) {
                                *(_DWORD*)(v105 + 864) &= v97;
                              }
                            }
                            else {
                              *(_DWORD*)(v6 + 508) = v100 | v91;
                            }
                          }
                        }
                        *v89 = 0.0f;
                        v89[5] = 0.0f;
                      }
                      v72 = __CFADD__(v90++, 1);
                      ++v89;
                      if (v72) {
                        goto LABEL_274;
                      }
                    }
                    v91 = 1 << (v90 + 5);
                    v92 = *(_DWORD*)(v34 + 860) & v91;
                    v93 = (*(_DWORD*)(v34 + 856) & v91) != 0;
                  LABEL_239:
                    v94 = (*(_DWORD*)(v34 + 864) & v91) != 0;
                    if (v92 == 0) {
                      goto LABEL_248;
                    }
                    goto LABEL_240;
                  }
                }
                v73 = 1 << (v71 + 5);
                v74 = *(_DWORD*)(v34 + 764) & v73;
                v75 = (*(_DWORD*)(v34 + 760) & v73) != 0;
              LABEL_197:
                v76 = (*(_DWORD*)(v34 + 768) & v73) != 0;
                if (v74 == 0) {
                  goto LABEL_206;
                }
                goto LABEL_198;
              }
              v56 = *(float*)(v6 + 576);
              v57 = *(float*)(v6 + 572);
              v58 = *(float*)(v6 + 580);
              v59 = *(unsigned __int8*)(v6 + 597);
              if (v56 >= v57 && *(_BYTE*)(v6 + 597) != 0) {
                v60 = *(float*)(v6 + 584);
              }
              else {
                if ((float)(v46 * v58) < 0.0f) {
                  if (v58 <= 0.0f) {
                    v61 = 1.0f;
                  }
                  else {
                    v61 = -1.0f;
                  }
                  v58 = v58 + v61;
                }
                v60 = *(float*)(v6 + 584);
                if ((float)(v50 * v60) < 0.0f) {
                  if (v60 <= 0.0f) {
                    v65 = 1.0f;
                  }
                  else {
                    v65 = -1.0f;
                  }
                  v60 = v60 + v65;
                }
              }
              v66 = v46 + v58;
              v67 = v50 + v60;
              *(float*)(v6 + 580) = v66;
              v68 = 1.0f;
              *(float*)(v6 + 584) = v67;
              if (v56 >= v57 && v59 != 0) {
                v68 = 0x1.eb851e0000000p-6f;
                if (v53 < 0x1.eb851e0000000p-6f) {
                  v68 = v53;
                  if (v53 <= 0.0f) {
                    goto LABEL_190;
                  }
                }
              }
              if (fabsf(v66) <= fabsf(v67)) {
                if (v67 >= v68) {
                  v69 = 2;
                }
                else {
                  if (v67 > (float)-v68) {
                    goto LABEL_190;
                  }
                  v69 = 1;
                }
              }
              else if (v66 >= v68) {
                v69 = 4;
              }
              else {
                if (v66 > (float)-v68) {
                  goto LABEL_190;
                }
                v69 = 3;
              }
              *(_DWORD*)(v6 + 588) = v69;
              *(_DWORD*)(v6 + 584) = 0;
              *(_QWORD*)(v6 + 576) = 0;
              *(_BYTE*)(v6 + 598) = v56 >= v57;
              goto LABEL_190;
            }
            v37 = 0.0f;
            v38 = 0.0f;
            v39 = 0.0f;
            if (*(_BYTE*)(v10 + 903) == 1) {
              if (*(_BYTE*)(v10 + 900) == 1) {
                v38 = (float)*(int*)(v10 + 868);
              LABEL_89:
                v39 = (float)*(int*)(v10 + 872);
                goto LABEL_99;
              }
              if (*(_BYTE*)(v10 + 940) == 1 && *(_BYTE*)(v10 + 901) == 1 &&
                  *(_BYTE*)(v10 + 902) == 1) {
                v38 = (float)*(int*)(v10 + 868);
                goto LABEL_89;
              }
            }
          LABEL_99:
            *(float*)(v6 + 528) =
                (float)(v39 * (float)-v28) + (float)(v27 * v38);
            if (*(_BYTE*)(v10 + 903) == 1) {
              if (*(_BYTE*)(v10 + 900) == 1) {
                v37 = (float)*(int*)(v10 + 868);
              LABEL_102:
                v41 = (float)*(int*)(v10 + 872);
              LABEL_108:
                v40 = (float)(v27 * v41) + (float)(v28 * v37);
                goto LABEL_109;
              }
              if (*(_BYTE*)(v10 + 940) == 1) {
                v41 = 0.0f;
                if (*(_BYTE*)(v10 + 901) != 1 || *(_BYTE*)(v10 + 902) != 1) {
                  goto LABEL_108;
                }
                v37 = (float)*(int*)(v10 + 868);
                goto LABEL_102;
              }
            }
            v41 = 0.0f;
            goto LABEL_108;
          }
          v29 = 0.0f;
          *(float*)(v6 + 520) = (float)(v28 * (float)*(int*)(v10 + 776)) +
                                (float)(v27 * (float)*(int*)(v10 + 772));
          if (*(_BYTE*)(v10 + 807) == 1) {
            if (*(_BYTE*)(v10 + 804) == 1) {
              v29 = (float)*(int*)(v10 + 772);
            LABEL_64:
              v30 = (float)*(int*)(v10 + 776);
            LABEL_83:
              v34 = v10;
              v36 = (float)(v27 * v30) + (float)((float)-v28 * v29);
              goto LABEL_84;
            }
            if (*(_BYTE*)(v10 + 940) == 1) {
              v30 = 0.0f;
              if (*(_BYTE*)(v10 + 805) != 1 || *(_BYTE*)(v10 + 806) != 1) {
                goto LABEL_83;
              }
              v29 = (float)*(int*)(v10 + 772);
              goto LABEL_64;
            }
          }
          v30 = 0.0f;
          goto LABEL_83;
        }
        v26 = -0x1.921fb60000000p+1f;
      }
      else {
        v26 = 0x1.921fb60000000p+1f;
      }
      v21 = v26 - v21;
      goto LABEL_59;
    }
  LABEL_35:
    (*(void (**)(__int64))(*(_QWORD*)v18 + 48LL))(v18);
    goto LABEL_36;
  }
LABEL_274:
  v106 = *(_BYTE**)v7;
  if (*(_BYTE*)(*(_QWORD*)v7 + 807LL) == 1 &&
          ((v106[804] & 1) != 0 ||
           v106[940] == 1 && (v106[805] & 1) != 0 && (v106[806] & 1) != 0) ||
      v106[903] == 1 &&
          ((v106[900] & 1) != 0 ||
           v106[940] == 1 && (v106[901] & 1) != 0 && v106[902] == 1)) {
    return game_15571e0(**(_QWORD**)(v3 + 144), a2, a3);
  }
  return result;
}

#pragma GCC visibility pop
