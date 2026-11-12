#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void TrainingArgs_1426750(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void VolunteerArgs_141b050(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_13f9200(PSEUDO_X8, int8x16_t*);
__attribute__((swiftcall)) void game_facility_140a320(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8, __int64);
__int64* game_9a28e0(int);
__int64 AssetTableFile_7e7620(__int64 result, __int64);
__int64 AssetTableFile_7e7b20(__int64 result, unsigned __int64*);
__int64 AssetTableFile_7e95e0(__int64, __int64, unsigned int);
__int64 CharacterAppearance_10735d0(__int64);
__int64 GameHr_1950380(__int64*, __int64);
__int64 GameHr_717fc0(unsigned __int64*, int);
__int64 GameHr_7e8000(__int64);
__int64 GameRoutine_6c3980(__int64 result, __int64);
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_8a1dc0(__int64**);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 Impl_1951600(__int64, __int64**, unsigned __int8);
__int64 Pane_58f8a0(__int64);
__int64 UnitHeroes_6d2b90(__int64, unsigned __int8*);
__int64 Util_1581060(__int64*, __int64, unsigned __int16*, char,
                     unsigned __int8);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_14a3920(__int64 result);
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_UnitActor_TryReload(_QWORD*);
__int64 game_Unit_ClearItems(__int64);
__int64 game_Unit_GetJob(__int64);
__int64 game_Unit_Unknown6c8630(__int64);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_anonymous_ConditionMap_Add_7ebae0(__int64 result);
__int64 game_facility_1873150(_QWORD*);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, const char*, char);
const char* game_HashString32(const char* result);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_21f4328;
extern _UNKNOWN game_g_random_mutex;
extern __int16 GameData_224ae48;
extern __int64* GameData_212c770[3];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d3c8[3];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212ddb8[4];
extern __int64* GameData_212e348;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212d690;
extern __int64 GameData_212dce8;
extern __int64 GameData_21c96d8;
extern __int64 GameData_21c99a8;
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9cf0;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
extern __int64 GameData_21d9d20;
extern __int64 GameData_21d9d30;
extern __int64 GameData_21d9d38;
extern __int64 GameData_21d9d48;
extern __int64 GameData_21d9d50;
extern __int64 GameData_21d9d60;
extern __int64 GameData_21d9d68;
extern __int64 GameData_21d9d70;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21f4018[];
extern __int64 GameData_2242728;
extern __int64 GameData_2242738;
extern __int64 GameData_226bb88;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_21d9d78;
extern int GameData_21d9d7c;
extern int GameData_21f4320;
int __cxa_guard_acquire(__int64);
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
unsigned __int8* AssetTableFile_7eb500(unsigned __int8* result);
void ConditionMap_7ea800(__int64*);
void ConditionMap_7ec000(__int64*);
void GameHr_6c2b50(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void GameRoutine_6e3b50(__int64, _QWORD*);
void TrickEntity_7d1480(__int64);
void Unit_6d1530(unsigned __int64, __int64, __int64, int);
void __cxa_guard_release(__int64);
void game_character_CharacterAppearance_Setup(__int64, __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_facility_1408010(__int64 a1);
void game_facility_140daf0(unsigned __int8* a1);
void game_facility_141bb90(__int64 a1);
void game_facility_14281e0(__int64 a1);
__int64 game_facility_1866c80(__int64 a1);
__attribute__((swiftcall)) void game_facility_1950100(PSEUDO_X8 x8_, __int64 a1,
                                                      int8x16_t* a2, __int64 a3,
                                                      unsigned __int8 a4);
__attribute__((swiftcall)) void game_facility_1950740(PSEUDO_X8 x8_, __int64 a1,
                                                      __int64 a2,
                                                      unsigned __int8 a3);

void game_facility_1408010(__int64 a1)
{
  int v2;
  const char* v3;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int64 v9;
  struct {
    __int64 v10[2];
    const char* v11;
  } v10_;

  game_facility_140a320((void*)(v10_.v10), a1 + 184);
  v2 = v10_.v10[0] & 1;
  if ((v10_.v10[0] & 1) != 0) {
    v3 = v10_.v11;
  }
  else {
    v3 = (char*)v10_.v10 + 1;
  }
  if (GameData_21ec7b8 == 0 && v3 != nullptr) {
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v5, v3, nullptr);
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = v5;
      *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v5;
    *(_QWORD*)(v5 + 24) = "talk::Seq";
    *(_QWORD*)(v5 + 32) = a1;
    *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 24;
    *(_QWORD*)(v5 + 80) = 1;
    *(_QWORD*)(v5 + 8) = &GameData_216de68;
    *(_QWORD*)(v5 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
        (*(_WORD*)(v5 + 136) & 0x100) == 0) {
      *(_WORD*)(v5 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v5 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v5 + 136) |= 2u;
    v2 = v10_.v10[0] & 1;
  }
  GameData_224ae48 = 258;
  if (v2 != 0 && v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v10_.v11);
  }
}

void game_facility_140daf0(unsigned __int8* a1)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  _QWORD* v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64** v8;
  __int64** j;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int8* v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  __int64* v29;
  _BYTE* v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  unsigned __int64 v44;
  __int64 v45;
  int v46;
  int* v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64** v53;
  __int64** i;
  _QWORD* v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  _QWORD* v63;
  int* v64;
  __int64 v65;
  __int64 v66;
  unsigned __int8* v67;
  _QWORD* v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  unsigned __int8* v72;
  __int64* v73;
  char v74;
  char v75;
  int* v76;
  __int64 v77;
  __int64 v78;
  _QWORD** v79;
  _QWORD** v80;
  _QWORD* v81;
  __int64* v82;
  __int64* v83;
  __int64** v84;
  __int64** v85;
  _QWORD* v86;
  __int64 v87;
  _QWORD* v88;
  __int64 v89;
  __int64* v90;
  unsigned __int64 v91[2];
  struct {
    __int64 v92;
    __int64 v93;
  } v92_;
  _QWORD** v94;
  _QWORD* v95;
  struct {
    __int64 v96;
    __int64 v97;
    __int64 v98;
    _BYTE* v99;
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
    char gap240_[8];
    __int64 v120;
    char gap256_[8];
    __int64 v121;
    char gap272_[64];
    __int64 v122;
    __int64 v123;
    char gap352_[8];
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
    char gap512_[16];
    __int64 v143;
    __int64 v144;
    char gap544_[16];
    __int64 vars0;
    __int64 vars8;
  } v96_;

  if (*((_QWORD*)a1 + 15) != 0) {
    v1 = *((_QWORD*)a1 + 16);
    *((_QWORD*)a1 + 15) = 0;
    *((_QWORD*)a1 + 16) = 0;
    if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v2 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
      std___1___shared_weak_count___release_weak(v1);
      a1 = v2;
    }
  }
  v3 = *a1;
  if (v3 > 1) {
    if (v3 == 2) {
      v96_.v143 = v96_.vars0;
      v96_.v144 = v96_.vars8;
      v63 = a1;
      v96_.v120 = 0;
      v96_.v121 = 0;
      v96_.v96 = 0;
      v96_.v97 = 0;
      v96_.v98 = 0;
      v96_.v99 = nullptr;
      v96_.v100 = 0;
      v96_.v101 = 0;
      v96_.v102 = 0;
      v96_.v103 = 0;
      v96_.v104 = 0;
      v96_.v105 = 0;
      v96_.v106 = 0;
      v96_.v107 = 0;
      LODWORD(v96_.v133) = 1065353216;
      v64 = (int*)GameData_21d9d18;
      v65 = GameData_21d9d20;
      v96_.v108 = 0;
      v96_.v109 = 0;
      v96_.v110 = 0;
      v96_.v111 = 0;
      v96_.v112 = 0;
      v96_.v113 = 0;
      v96_.v114 = 0;
      v96_.v115 = 0;
      v96_.v116 = 0;
      v96_.v117 = 0;
      v96_.v118 = 0;
      v96_.v119 = 0;
      v96_.v125 = 0;
      v96_.v126 = 0;
      v96_.v128 = 0;
      v96_.v129 = 0;
      v96_.v130 = 0;
      v96_.v131 = 0;
      v96_.v132 = 0;
      v96_.v134 = 0;
      v96_.v135 = 0;
      v96_.v136 = 0;
      v96_.v137 = 0;
      v96_.v138 = 0;
      v96_.v139 = 0;
      v96_.v140 = 0;
      v96_.v141 = 0;
      v96_.v142 = 0;
      if (GameData_21d9d18 != GameData_21d9d20) {
        do {
          v66 = *v64++;
          *(_QWORD*)(GameData_21d9d00 + 8 * v66) = 0;
        } while (v64 != (int*)v65);
        v64 = (int*)GameData_21d9d18;
      }
      GameData_21d9d20 = (__int64)v64;
      GameData_21d9d60 = 0;
      GameData_21d9d68 = 0;
      GameData_21d9d70 = 0;
      GameData_21d9d7c = 0;
      GameData_21d9d78 = 8;
      GameData_21d9d38 = GameData_21d9d30;
      GameData_21d9d50 = GameData_21d9d48;
      GameData_21d9cf0 = GameData_21d9ce8;
      v67 = *((unsigned __int8**)a1 + 5);
      if (*v67 != 0) {
        AssetTableFile_7eb500(v67);
      }
      v95 = *(_QWORD**)(v63[1] + 8LL);
      v94 = (_QWORD**)game_HashString((__int64)v95);
      AssetTableFile_7e7b20((__int64)&v96_.v96, (unsigned __int64*)&v94);
      GameHr_7e8000((__int64)&v96_.v96);
      v68 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
      v68[2] = 0;
      v69 = (__int64)(v68 + 3);
      v70 = v68;
      *v68 = GameData_212d3c8[0] + 2;
      v68[1] = 0;
      CharacterAppearance_10735d0((__int64)(v68 + 3));
      game_character_CharacterAppearance_Setup(v69, (__int64)&v96_.v96);
      v71 = v63[16];
      v63[15] = v69;
      v63[16] = v70;
      if (v71 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
        std___1___shared_weak_count___release_weak(v71);
      }
      goto LABEL_113;
    }
    if (v3 != 3) {
      return;
    }
    v96_.v143 = v96_.vars0;
    v96_.v144 = v96_.vars8;
    v72 = a1;
    v73 = game_9a28e0(40);
    v74 = GameHr_717fc0((unsigned __int64*)v73, 1);
    v75 = v74;
    v96_.v120 = 0;
    v96_.v121 = 0;
    v96_.v96 = 0;
    v96_.v97 = 0;
    v96_.v98 = 0;
    v96_.v99 = nullptr;
    v96_.v100 = 0;
    v96_.v101 = 0;
    v96_.v102 = 0;
    v96_.v103 = 0;
    v96_.v104 = 0;
    v96_.v105 = 0;
    v96_.v106 = 0;
    v96_.v107 = 0;
    LODWORD(v96_.v133) = 1065353216;
    v76 = (int*)GameData_21d9d18;
    v77 = GameData_21d9d20;
    v96_.v108 = 0;
    v96_.v109 = 0;
    v96_.v110 = 0;
    v96_.v111 = 0;
    v96_.v112 = 0;
    v96_.v113 = 0;
    v96_.v114 = 0;
    v96_.v115 = 0;
    v96_.v116 = 0;
    v96_.v117 = 0;
    v96_.v118 = 0;
    v96_.v119 = 0;
    v96_.v125 = 0;
    v96_.v126 = 0;
    v96_.v128 = 0;
    v96_.v129 = 0;
    v96_.v130 = 0;
    v96_.v131 = 0;
    v96_.v132 = 0;
    v96_.v134 = 0;
    v96_.v135 = 0;
    v96_.v136 = 0;
    v96_.v137 = 0;
    v96_.v138 = 0;
    v96_.v139 = 0;
    v96_.v140 = 0;
    v96_.v141 = 0;
    v96_.v142 = 0;
    if (GameData_21d9d18 != GameData_21d9d20) {
      do {
        v78 = *v76++;
        *(_QWORD*)(GameData_21d9d00 + 8 * v78) = 0;
      } while (v76 != (int*)v77);
      v76 = (int*)GameData_21d9d18;
    }
    GameData_21d9d20 = (__int64)v76;
    GameData_21d9d60 = 0;
    GameData_21d9d68 = 0;
    GameData_21d9d70 = 0;
    GameData_21d9d7c = 0;
    GameData_21d9d78 = 8;
    GameData_21d9d38 = GameData_21d9d30;
    GameData_21d9d50 = GameData_21d9d48;
    GameData_21d9cf0 = GameData_21d9ce8;
    v79 = *((_QWORD***)v72 + 7);
    v80 = *((_QWORD***)v72 + 8);
    while (v79 != v80) {
      v81 = *v79++;
      v95 = v81;
      v94 = (_QWORD**)game_HashString((__int64)v81);
      AssetTableFile_7e7b20((__int64)&v96_.v96, (unsigned __int64*)&v94);
    }
    v82 = *((__int64**)v72 + 3);
    v83 = GameData_212c770[0];
    if (v82 != nullptr) {
      ConditionMap_7ea800(v82);
      game_anonymous_ConditionMap_Add_7ebae0(*v83);
    }
    AssetTableFile_7e95e0((__int64)&v96_.v96, *((_QWORD*)v72 + 1),
                          *((_DWORD*)v72 + 4));
    v84 = *((__int64***)v72 + 11);
    v85 = *((__int64***)v72 + 12);
    while (v84 != v85) {
      if (*v84 != nullptr) {
        ConditionMap_7ec000(*v84);
        game_anonymous_ConditionMap_Add_7ebae0(*v83);
      }
      ++v84;
    }
    GameHr_7e8000((__int64)&v96_.v96);
    v86 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
    v86[2] = 0;
    v87 = (__int64)(v86 + 3);
    v88 = v86;
    *v86 = GameData_212d3c8[0] + 2;
    v86[1] = 0;
    CharacterAppearance_10735d0((__int64)(v86 + 3));
    game_character_CharacterAppearance_Setup(v87, (__int64)&v96_.v96);
    v89 = *((_QWORD*)v72 + 16);
    *((_QWORD*)v72 + 15) = v87;
    *((_QWORD*)v72 + 16) = v88;
    if (v89 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v89 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v89 + 16LL))(v89);
      std___1___shared_weak_count___release_weak(v89);
      if ((v75 & 1) == 0) {
        goto LABEL_113;
      }
    }
    else if ((v75 & 1) == 0) {
    LABEL_113:
      TrickEntity_7d1480((__int64)&v96_.v96);
      return;
    }
    v90 = game_9a28e0(40);
    game_VariableManager_SetFlag((__int64)v90, 0);
    goto LABEL_113;
  }
  if (*a1 != 0) {
    v96_.v141 = v96_.vars0;
    v96_.v142 = v96_.vars8;
    v14 = a1;
    v15 = (__int64*)fw_memory_g_heap_manager_ptr;
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         2224, 16, 0);
    GameHr_6c2b50(v16);
    v92_.v92 = v14[1];
    if (v92_.v92 != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4328,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21f4328) != 0) {
        GameData_21f4320 = 81;
        __cxa_guard_release((__int64)&GameData_21f4328);
      }
      LODWORD(v91[0]) = GameData_21f4320;
      v17 = game_UnitPool_Find_6ead60(&v92_.v92, (int*)v91);
      if (v17 != nullptr) {
        GameRoutine_6c3980(v16, (__int64)v17);
      LABEL_33:
        v19 = v14[3];
        if (*(_QWORD*)(v16 + 400) != v19) {
          *(_QWORD*)(v16 + 400) = v19;
          game_Unit_Unknown6c8630(v16);
        }
        v20 = game_Unit_GetJob(v16);
        v14[3] = v20;
        v21 = *(_QWORD*)(v20 + 112);
        if (v21 != 0) {
          v22 = (unsigned __int8*)v14[5];
          if (v22 != nullptr && *v22 != 0) {
            UnitHeroes_6d2b90(v16, v22);
          }
          else if (*(_BYTE*)(v16 + 1880) == 0 ||
                   ((v23 = *(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) +
                                      8LL * *(unsigned __int8*)(v16 + 1880))) !=
                            0
                        ? (v24 = *(_BYTE*)(v20 + 96) == 2)
                        : (v24 = false),
                    !v24 || *(unsigned __int8*)(v23 + 32) !=
                                *(unsigned __int8*)(v21 + 32))) {
            v25 = *(unsigned __int8*)(v21 + 32);
            WORD1(v92_.v92) = 0;
            HIDWORD(v92_.v92) = 0;
            v96_.v96 = 0;
            v96_.v97 = 0;
            v96_.v98 = 0;
            v96_.v99 = nullptr;
            v94 = &v95;
            v95 = nullptr;
            GameRoutine_930b90((__int64)&v92_.v92,
                               (__int64)&GameData_21f4018[8 * v25]);
            UnitHeroes_6d2b90(v16, (unsigned __int8*)&v92_.v92);
            LODWORD(v92_.v93) = 0;
            v92_.v92 = 0;
            if ((v96_.v97 & 1) != 0) {
              *v96_.v99 = 0;
              v96_.v98 = 0;
            }
            else {
              LOWORD(v96_.v97) = 0;
            }
            GameRoutine_6e3b50((__int64)&v94, v95);
            v95 = nullptr;
            v96_.v96 = 0;
            v94 = &v95;
            if ((v96_.v97 & 1) != 0) {
              v26 = v96_.v99;
              if (v96_.v99 != nullptr) {
                v27 = 128;
                if (*(_QWORD*)(*v15 + 200) == 0) {
                  v27 = 56;
                }
                nn_mem_StandardAllocator_Free(*v15 + v27, (__int64)v96_.v99);
                v26 = v95;
              }
            }
            else {
              v26 = nullptr;
            }
            GameRoutine_6e3b50((__int64)&v94, v26);
          }
        }
        v28 = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, 32, 16, 0);
        v29 = GameData_212ddb8[0];
        v28[2] = 0;
        v28[3] = 0;
        *v28 = v29 + 2;
        v28[1] = 0;
        game_Unit_ClearItems(v16);
        v30 = (_BYTE*)(v16 + 847);
        v31 = 2;
        v32 = GameData_212c878[0];
        v33 = *GameData_212c878[0];
        while (1) {
          if (*(_WORD*)(v30 - 19) != 0 && (*(v30 - 16) & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v33 + 64) +
                                             8LL * *(unsigned __int16*)(v30 -
                                                                        19)) +
                                  72LL) < 8u) {
            LODWORD(v31) = v31 - 2;
            goto LABEL_70;
          }
          if (*(_WORD*)(v30 - 11) != 0 && (*(v30 - 8) & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v33 + 64) +
                                             8LL * *(unsigned __int16*)(v30 -
                                                                        11)) +
                                  72LL) < 8u) {
            break;
          }
          if (*(_WORD*)(v30 - 3) != 0 && (*v30 & 1) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v33 + 64) +
                                             8LL * *(unsigned __int16*)(v30 -
                                                                        3)) +
                                  72LL) < 8u) {
            goto LABEL_70;
          }
          v31 += 3;
          v30 += 24;
          if (v31 == 32) {
            goto LABEL_74;
          }
        }
        LODWORD(v31) = v31 - 1;
      LABEL_70:
        v34 = 8LL * (unsigned int)v31;
        if ((*(_BYTE*)(v16 + 831 + v34) & 1) != 0) {
          *(_BYTE*)(v16 + 831 + v34) &= ~1u;
          v35 = *(_DWORD*)(v16 + 416);
          if ((v35 & 0x10000000) == 0) {
            *(_DWORD*)(v16 + 416) = v35 | 0x10000000;
            game_6c51e0(v16);
            GameRoutine_6c6da0(v16);
            game_6c6ec0(v16);
            *(_DWORD*)(v16 + 416) &= ~0x10000000u;
          }
          game_UnitActor_TryReload((_QWORD*)v16);
        }
      LABEL_74:
        v36 = v14[4];
        if (v36 == 0) {
          goto LABEL_84;
        }
        v37 = *(unsigned __int8*)(v36 + 72);
        if ((unsigned int)v37 > 0xC ||
            (_DWORD)v37 != 7 && *(char*)(v14[3] + v37 + 398) < 0) {
          goto LABEL_84;
        }
        v38 = *(unsigned __int16*)(v36 + 16);
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v32 + 64) + 8 * v38) + 73LL) ==
            17) {
          nn_os_LockMutex((__int64)&game_g_random_mutex);
          v39 = game_map_MapRandom_instance__ptr[0];
          v40 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v41 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v42 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v39 + 1) = v40;
          v43 = (v42 >> 8) ^ (v41 >> 19) ^ v42 ^ v41;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39) = v41;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39 + 4) = v43;
          nn_os_UnlockMutex((__int64)&game_g_random_mutex);
          v44 = (unsigned __int64)((16 * ((_WORD)v43 -
                                          1000 *
                                              (unsigned __int16)((v43 &
                                                                  0x7FFFFFFFu) /
                                                                 0x3E8)) +
                                    16) &
                                       0x3FF0 |
                                   1u)
                << 32;
          if (v28[1] == 0) {
          LABEL_82:
            v28[1] = v16;
            v28[2] = v44 | v38;
            v45 = *(_QWORD*)(v16 + 2208);
            *(_QWORD*)(v16 + 2208) = v28;
            v28[3] = v45;
            v46 = *(_DWORD*)(v16 + 416);
            if ((v46 & 0x10000000) == 0) {
              *(_DWORD*)(v16 + 416) = v46 | 0x10000000;
              game_6c51e0(v16);
              GameRoutine_6c6da0(v16);
              game_6c6ec0(v16);
              *(_DWORD*)(v16 + 416) &= ~0x10000000u;
            }
          }
        }
        else {
          v44 = 0x100000000LL;
          if (v28[1] == 0) {
            goto LABEL_82;
          }
        }
      LABEL_84:
        v96_.v117 = 0;
        v96_.v119 = 0;
        v92_.v92 = 0;
        v92_.v93 = 0;
        v94 = nullptr;
        v95 = nullptr;
        v96_.v96 = 0;
        v96_.v97 = 0;
        v96_.v98 = 0;
        v96_.v99 = nullptr;
        v96_.v100 = 0;
        v96_.v101 = 0;
        v96_.v102 = 0;
        v96_.v103 = 0;
        v96_.v104 = 0;
        v96_.v105 = 0;
        LODWORD(v96_.v129) = 1065353216;
        v47 = (int*)GameData_21d9d18;
        v48 = GameData_21d9d20;
        v96_.v106 = 0;
        v96_.v107 = 0;
        v96_.v108 = 0;
        v96_.v109 = 0;
        v96_.v110 = 0;
        v96_.v111 = 0;
        v96_.v112 = 0;
        v96_.v113 = 0;
        v96_.v114 = 0;
        v96_.v115 = 0;
        v96_.v122 = 0;
        v96_.v123 = 0;
        v96_.v124 = 0;
        v96_.v125 = 0;
        v96_.v126 = 0;
        v96_.v127 = 0;
        v96_.v128 = 0;
        v96_.v130 = 0;
        v96_.v131 = 0;
        v96_.v132 = 0;
        v96_.v133 = 0;
        v96_.v134 = 0;
        v96_.v135 = 0;
        v96_.v136 = 0;
        v96_.v137 = 0;
        v96_.v138 = 0;
        if (GameData_21d9d18 != GameData_21d9d20) {
          do {
            v49 = *v47++;
            *(_QWORD*)(GameData_21d9d00 + 8 * v49) = 0;
          } while (v47 != (int*)v48);
          v47 = (int*)GameData_21d9d18;
        }
        GameData_21d9d20 = (__int64)v47;
        GameData_21d9d60 = 0;
        GameData_21d9d68 = 0;
        GameData_21d9d70 = 0;
        GameData_21d9d7c = 0;
        GameData_21d9d50 = GameData_21d9d48;
        GameData_21d9cf0 = GameData_21d9ce8;
        GameData_21d9d38 = GameData_21d9d30;
        GameData_21d9d78 = 8;
        AssetTableFile_7e7620((__int64)&v92_.v92, v16);
        AssetTableFile_7e7b20((__int64)&v92_.v92,
                              (unsigned __int64*)&GameData_2242738);
        v50 = (__int64*)v14[7];
        v51 = (__int64*)v14[8];
        while (v50 != v51) {
          v52 = *v50++;
          v91[1] = v52;
          v91[0] = game_HashString(v52);
          AssetTableFile_7e7b20((__int64)&v92_.v92, v91);
        }
        v53 = (__int64**)v14[11];
        for (i = (__int64**)v14[12]; v53 != i; ++v53) {
          if (*v53 != nullptr) {
            ConditionMap_7ec000(*v53);
            game_anonymous_ConditionMap_Add_7ebae0(GameData_21c96d8);
          }
        }
        GameHr_7e8000((__int64)&v92_.v92);
        v55 = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, 11832, 16, 0);
        v55[2] = 0;
        v56 = (__int64)(v55 + 3);
        v57 = v55;
        *v55 = GameData_212d3c8[0] + 2;
        v55[1] = 0;
        CharacterAppearance_10735d0((__int64)(v55 + 3));
        game_character_CharacterAppearance_Setup(v56, (__int64)&v92_.v92);
        v58 = v14[16];
        v14[15] = v56;
        v14[16] = v57;
        if (v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
          std___1___shared_weak_count___release_weak(v58);
        }
        v59 = v28[1];
        if (v59 != 0 && *(_QWORD**)(v59 + 2208) == v28) {
          *(_QWORD*)(v59 + 2208) = v28[3];
          v60 = v28[1];
          v61 = *(_DWORD*)(v60 + 416);
          if ((v61 & 0x10000000) == 0) {
            v62 = v28[1];
            *(_DWORD*)(v60 + 416) = v61 | 0x10000000;
            game_6c51e0(v62);
            GameRoutine_6c6da0(v60);
            game_6c6ec0(v60);
            *(_DWORD*)(v60 + 416) &= ~0x10000000u;
          }
          v28[1] = 0;
        }
        TrickEntity_7d1480((__int64)&v92_.v92);
        (*(void (**)(_QWORD*))(*v28 + 8LL))(v28);
        (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
        return;
      }
      v18 = v14[1];
    }
    else {
      v18 = 0;
    }
    Unit_6d1530(v16, v18, 0, 0);
    goto LABEL_33;
  }
  v96_.v143 = v96_.vars0;
  v96_.v144 = v96_.vars8;
  v4 = a1;
  v96_.v120 = 0;
  v96_.v121 = 0;
  v96_.v96 = 0;
  v96_.v97 = 0;
  v96_.v98 = 0;
  v96_.v99 = nullptr;
  v96_.v100 = 0;
  v96_.v101 = 0;
  v96_.v102 = 0;
  v96_.v103 = 0;
  v96_.v104 = 0;
  v96_.v105 = 0;
  v96_.v106 = 0;
  v96_.v107 = 0;
  LODWORD(v96_.v133) = 1065353216;
  v5 = (int*)GameData_21d9d18;
  v6 = GameData_21d9d20;
  v96_.v108 = 0;
  v96_.v109 = 0;
  v96_.v110 = 0;
  v96_.v111 = 0;
  v96_.v112 = 0;
  v96_.v113 = 0;
  v96_.v114 = 0;
  v96_.v115 = 0;
  v96_.v116 = 0;
  v96_.v117 = 0;
  v96_.v118 = 0;
  v96_.v119 = 0;
  v96_.v125 = 0;
  v96_.v126 = 0;
  v96_.v128 = 0;
  v96_.v129 = 0;
  v96_.v130 = 0;
  v96_.v131 = 0;
  v96_.v132 = 0;
  v96_.v134 = 0;
  v96_.v135 = 0;
  v96_.v136 = 0;
  v96_.v137 = 0;
  v96_.v138 = 0;
  v96_.v139 = 0;
  v96_.v140 = 0;
  v96_.v141 = 0;
  v96_.v142 = 0;
  if (GameData_21d9d18 != GameData_21d9d20) {
    do {
      v7 = *v5++;
      *(_QWORD*)(GameData_21d9d00 + 8 * v7) = 0;
    } while (v5 != (int*)v6);
    v5 = (int*)GameData_21d9d18;
  }
  GameData_21d9d20 = (__int64)v5;
  GameData_21d9d60 = 0;
  GameData_21d9d68 = 0;
  GameData_21d9d70 = 0;
  GameData_21d9d7c = 0;
  GameData_21d9d78 = 8;
  GameData_21d9cf0 = GameData_21d9ce8;
  GameData_21d9d38 = GameData_21d9d30;
  GameData_21d9d50 = GameData_21d9d48;
  AssetTableFile_7e95e0((__int64)&v96_.v96, *((_QWORD*)a1 + 1),
                        *((_DWORD*)a1 + 4));
  AssetTableFile_7e7b20((__int64)&v96_.v96,
                        (unsigned __int64*)&GameData_2242728);
  v8 = (__int64**)v4[11];
  for (j = (__int64**)v4[12]; v8 != j; ++v8) {
    if (*v8 != nullptr) {
      ConditionMap_7ec000(*v8);
      game_anonymous_ConditionMap_Add_7ebae0(GameData_21c96d8);
    }
  }
  GameHr_7e8000((__int64)&v96_.v96);
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 11832, 16, 0);
  v10[2] = 0;
  v11 = (__int64)(v10 + 3);
  v12 = v10;
  *v10 = GameData_212d3c8[0] + 2;
  v10[1] = 0;
  CharacterAppearance_10735d0((__int64)(v10 + 3));
  game_character_CharacterAppearance_Setup(v11, (__int64)&v96_.v96);
  v13 = v4[16];
  v4[15] = v11;
  v4[16] = v12;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  TrickEntity_7d1480((__int64)&v96_.v96);
}

void game_facility_141bb90(__int64 a1)
{
  int v2;
  const char* v3;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int64 v9;
  struct {
    __int64 v10[2];
    const char* v11;
  } v10_;

  VolunteerArgs_141b050((void*)(v10_.v10), a1 + 184);
  v2 = v10_.v10[0] & 1;
  if ((v10_.v10[0] & 1) != 0) {
    v3 = v10_.v11;
  }
  else {
    v3 = (char*)v10_.v10 + 1;
  }
  if (GameData_21ec7b8 == 0 && v3 != nullptr) {
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v5, v3, nullptr);
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = v5;
      *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v5;
    *(_QWORD*)(v5 + 24) = "talk::Seq";
    *(_QWORD*)(v5 + 32) = a1;
    *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 24;
    *(_QWORD*)(v5 + 80) = 1;
    *(_QWORD*)(v5 + 8) = &GameData_216de68;
    *(_QWORD*)(v5 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
        (*(_WORD*)(v5 + 136) & 0x100) == 0) {
      *(_WORD*)(v5 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v5 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v5 + 136) |= 2u;
    v2 = v10_.v10[0] & 1;
  }
  GameData_224ae48 = 259;
  if (v2 != 0 && v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v10_.v11);
  }
}

void game_facility_14281e0(__int64 a1)
{
  int v2;
  const char* v3;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int64 v9;
  struct {
    __int64 v10[2];
    const char* v11;
  } v10_;

  TrainingArgs_1426750((void*)(v10_.v10), a1 + 184);
  v2 = v10_.v10[0] & 1;
  if ((v10_.v10[0] & 1) != 0) {
    v3 = v10_.v11;
  }
  else {
    v3 = (char*)v10_.v10 + 1;
  }
  if (GameData_21ec7b8 == 0 && v3 != nullptr) {
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v5, v3, nullptr);
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = v5;
      *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v5;
    *(_QWORD*)(v5 + 24) = "talk::Seq";
    *(_QWORD*)(v5 + 32) = a1;
    *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 24;
    *(_QWORD*)(v5 + 80) = 1;
    *(_QWORD*)(v5 + 8) = &GameData_216de68;
    *(_QWORD*)(v5 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
        (*(_WORD*)(v5 + 136) & 0x100) == 0) {
      *(_WORD*)(v5 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v5 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v5 + 136) |= 2u;
    v2 = v10_.v10[0] & 1;
  }
  GameData_224ae48 = 260;
  if (v2 != 0 && v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v10_.v11);
  }
}

__int64 game_facility_1866c80(__int64 a1)
{
  char v2;
  __int64** v3;
  __int64* v4;
  __int64* v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 (*v14)(_QWORD);
  __int64 v15;
  _QWORD* v16;
  _BOOL4 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  char v32;
  int v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  unsigned __int16* v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  atomic_ullong* v48;
  __int64* v49;
  __int64 result;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  struct {
    __int64* v59;
    __int64 v60;
    unsigned __int64 v61;
    unsigned __int64 v62;
    int v63;
    int v64;
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
  } v59_;

  v2 = game_facility_1873150((_QWORD*)a1);
  v3 = *(__int64***)(a1 + 120);
  v5 = *v3;
  v4 = v3[1];
  if (v4 == *v3) {
    v17 = false;
    v18 = *(_QWORD*)(a1 + 56);
    if (v18 == 0) {
      goto LABEL_28;
    }
  }
  else {
    v6 = 1;
    v7 = 0;
    do {
      v8 = *v5;
      v9 = *(_QWORD*)(*v5 + 24);
      v10 = *(_QWORD*)(v9 + 48);
      v11 = *(_QWORD*)(v9 + 56);
      if (v11 == v10) {
      LABEL_6:
        if (*(_BYTE*)(v8 + 107) != 0) {
          v7 += *(unsigned __int8*)(v8 + 107);
        }
        else {
          v6 = 0;
        }
      }
      else {
        while (1) {
          if (*(_QWORD*)v10 != 0) {
            v12 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v13 = game_GameVariableTable_Find(
                  *(_QWORD**)(game_GameModeData_instance_ + 48),
                  (unsigned __int64*)v10);
              if (v13 != 0) {
                v14 = *(__int64 (**)(_QWORD))(v13 + 72);
                v15 = *(_QWORD*)(v13 + 80);
                v16 = (_QWORD*)(v13 + (v15 >> 1));
                if ((v15 & 1) != 0) {
                  v14 = *(__int64 (**)(_QWORD))((char*)v14 + *v16);
                }
                v2 = v14(v16);
              }
              else {
                v2 = 1;
              }
            }
            if (*(_BYTE*)(v10 + 16) != ((v12 == 0) | v2 & 1)) {
              break;
            }
          }
          v10 += 24;
          if (v10 == v11) {
            goto LABEL_6;
          }
        }
      }
      ++v5;
    } while (v5 != v4);
    v17 = v7 * v6 > 0;
    v18 = *(_QWORD*)(a1 + 56);
    if (v18 == 0) {
    LABEL_28:
      v20 = ui_LayoutAccessor_empty__ptr[0];
      if (!v17) {
        goto LABEL_29;
      }
    LABEL_24:
      v21 = GameRoutine_8a1dc0(*(__int64***)(a1 + 120));
      v22 = ui_LayoutAccessor_FindPane(v20, (__int64)"T_StockNum");
      if (v22 != 0) {
        v23 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d690, 0);
        if (v23 != 0) {
          GameRoutine_156c910(v23, "%d", 1, v21);
        }
      }
      goto LABEL_32;
    }
  }
  v19 = std___1___shared_weak_count_lock(v18);
  if (v19 == 0) {
    goto LABEL_28;
  }
  v20 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v20 == nullptr) {
      goto LABEL_28;
    }
  }
  else {
    v24 = v19;
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v24);
    if (v20 == nullptr) {
      goto LABEL_28;
    }
  }
  if (v17) {
    goto LABEL_24;
  }
LABEL_29:
  v59_.v65 = -1;
  v59_.v66 = -1;
  v59_.v67 = -1;
  v59_.v68 = -1;
  v25 = *msg_MessageManager_instance__ptr[0];
  v59_.v69 = -1;
  v59_.v70 = -1;
  v59_.v71 = -1;
  v59_.v72 = -1;
  v59_.v73 = -1;
  v59_.v74 = -1;
  v59_.v75 = -1;
  v59_.v76 = -1;
  v59_.v59 = GameData_212e348 + 2;
  v59_.v60 = 0xFFFF0001FFFF0000LL;
  v59_.v61 = 0xFFFF0004FFFF0002LL;
  v59_.v62 = 0xFFFF0006FFFF0005LL;
  v59_.v77 = 8;
  v59_.v63 = -65529;
  v59_.v64 = -65528;
  v26 = GameRoutine_a4dbe0(v25, "MID_Sys_unlimited", 0);
  if (v26 != nullptr) {
    v27 = (__int64)v26;
    v28 = ui_LayoutAccessor_FindTextBox(v20, (__int64)"T_StockNum");
    if (v28 != 0) {
      GameRoutine_156c5d0(v28, v27, 0);
    }
  }
LABEL_32:
  v29 = *(_QWORD*)(a1 + 56);
  if (v29 == 0) {
    goto LABEL_36;
  }
  v30 = std___1___shared_weak_count_lock(v29);
  if (v30 == 0) {
    goto LABEL_36;
  }
  v31 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v56 = v30;
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak(v56);
    if (v31 != nullptr) {
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  if (v31 == nullptr) {
  LABEL_36:
    v31 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_37:
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  v33 = GameRoutine_8a1dc0(*(__int64***)(a1 + 120));
  v34 = 64;
  if ((v32 & 1) != 0) {
    v34 = 60;
  }
  v35 = 72;
  if ((v32 & 1) != 0) {
    v35 = 36;
  }
  if (v33 != 0) {
    v34 = v35;
  }
  v36 = *(_DWORD*)((char*)GameData_212da30 + v34);
  v37 = ui_LayoutAccessor_FindTextBox(v31, (__int64)"T_StockNum");
  if (v37 != 0) {
    v38 = Pane_58f8a0(v37);
    if (v38 != 0) {
      *(_DWORD*)(v38 + 12) = v36;
    }
  }
  v39 = *(_QWORD*)(a1 + 56);
  if (v39 == 0) {
    goto LABEL_50;
  }
  v40 = std___1___shared_weak_count_lock(v39);
  if (v40 == 0) {
    goto LABEL_50;
  }
  v41 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v41 != nullptr) {
      goto LABEL_51;
    }
    goto LABEL_50;
  }
  v57 = v40;
  (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
  std___1___shared_weak_count___release_weak(v57);
  if (v41 == nullptr) {
  LABEL_50:
    v41 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_51:
  v42 = *(_QWORD*)(a1 + 104);
  v43 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  v44 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  Util_1581060(v41, v42, v43, v44 & 1, 1u);
  v45 = *(_QWORD*)(a1 + 56);
  if (v45 == 0) {
    goto LABEL_55;
  }
  v46 = std___1___shared_weak_count_lock(v45);
  if (v46 == 0) {
    goto LABEL_55;
  }
  v47 = v46;
  v48 = (atomic_ullong*)(v46 + 8);
  v49 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v48, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v49 != nullptr) {
      goto LABEL_56;
    }
    goto LABEL_55;
  }
  v58 = v49;
  (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
  std___1___shared_weak_count___release_weak(v47);
  v49 = v58;
  if (v58 == nullptr) {
  LABEL_55:
    v49 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_56:
  LayoutAccessor_1560070((void*)(&v59_.v59), v49, "L_Icon");
  result = v59_.v60;
  if (v59_.v60 == 0) {
    return result;
  }
  v51 = std___1___shared_weak_count_lock(v59_.v60);
  v52 = (__int64)v59_.v59;
  result = v59_.v60;
  if (v59_.v60 != 0) {
    result = std___1___shared_weak_count___release_weak(v59_.v60);
  }
  if (v51 != 0 && v52 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 16), 1u,
                              memory_order_relaxed);
    v53 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
    v54 = std___1___shared_weak_count_lock(v51);
    if (v54 != 0) {
      v55 = v54;
      ui_LayoutAccessor_SetPaneVisible(v52, (__int64)"IconLock",
                                       (*(_BYTE*)(v53 + 3) & 0x10) != 0);
      if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
        std___1___shared_weak_count___release_weak(v55);
      }
    }
    result = std___1___shared_weak_count___release_weak(v51);
  }
  else if (v51 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
    return std___1___shared_weak_count___release_weak(v51);
  }
  return result;
}

__attribute__((swiftcall)) void game_facility_1950100(PSEUDO_X8 x8_, __int64 a1,
                                                      int8x16_t* a2, __int64 a3,
                                                      unsigned __int8 a4)
{

#pragma clang fp contract(off)
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  float32x4_t v15;
  unsigned int i;
  float32x4_t* v17;
  float j;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  float v22;
  __int128 v23;
  __int64 v24;
  float32x4_t v25;
  struct {
    __int64 v26[2];
    __int64 v27;
  } v26_;

  if ((*(_BYTE*)a1 & 1) != 0) {
    fw_text_String_CopyTerminated(v26_.v26, *(_QWORD*)(a1 + 16),
                                  *(_QWORD*)(a1 + 8));
  }
  else {
    v9 = *(_QWORD*)(a1 + 8);
    v26_.v26[0] = *(_QWORD*)a1;
    v26_.v26[1] = v9;
    v26_.v27 = *(_QWORD*)(a1 + 16);
  }
  GameHr_1950380(a5, (__int64)v26_.v26);
  if ((v26_.v26[0] & 1) != 0 && v26_.v27 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v26_.v27);
  }
  v11 = *(_QWORD*)*a5;
  if (v11 != 0 && *(_DWORD*)(v11 + 16) == *(_DWORD*)(*a5 + 8)) {
    if (GameData_226bb88 != 0) {
      Impl_1951600(GameData_226bb88, (__int64**)a5, a4);
    }
    if (LANES128(a2[1]).n128_u8[0] == 1) {
      game_13f9200((void*)(&v25), a2);
      v12 = *a5;
      v13 = *(_QWORD*)*a5;
      if (v13 != 0 && *(_DWORD*)(v13 + 16) == *(_DWORD*)(v12 + 8)) {
        v14 = *(_DWORD*)(v13 + 36);
        if (v14 != 0) {
          v15 = v25;
          for (i = 0; i < v14; ++i) {
            if ((int)v14 > (int)i) {
              v17 = *(float32x4_t**)(v13 + 40 + 8LL * (int)i);
              if (v17 != nullptr) {
                v17[1] = v15;
                LANES128(v17[8]).n128_u8[0] = 1;
                v14 = *(_DWORD*)(v13 + 36);
              }
            }
          }
        }
      }
      game_14a3920(v12);
    }
    if (*(_BYTE*)(a3 + 4) == 1) {
      for (j = *(float*)a3 + *(float*)(*(_QWORD*)GameData_212dce8 + 128LL);
           j < -0x1.6800000000000p+7f; j = j + 0x1.6800000000000p+8f)
        ;
      for (; j >= 0x1.6800000000000p+7f; j = j + -0x1.6800000000000p+8f)
        ;
      v19 = *(_QWORD*)*a5;
      if (v19 != 0 && *(_DWORD*)(v19 + 16) == *(_DWORD*)(*a5 + 8)) {
        v20 = *(_DWORD*)(v19 + 36);
        if (v20 != 0) {
          v21 = 0;
          v22 = j * 0x1.1df46a0000000p-6f;
          LODWORD(v23) = 0;
          *((_QWORD*)&v23 + 1) = 0;
          *((float*)&v23 + 1) = v22;
          do {
            if ((int)v20 > (int)v21) {
              v24 = *(_QWORD*)(v19 + 40 + 8LL * (int)v21);
              if (v24 != 0) {
                *(_OWORD*)(v24 + 48) = v23;
                *(_BYTE*)(v24 + 128) = 1;
                v20 = *(_DWORD*)(v19 + 36);
              }
            }
            ++v21;
          } while (v21 < v20);
        }
      }
    }
  }
}

__attribute__((swiftcall)) void

game_facility_1950740(PSEUDO_X8 x8_, __int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    int8x16_t v10;
    char v11;
  } v10_;
  struct {
    __int64 v12[2];
    __int64 v13;
  } v12_;
  struct {
    int8x16_t v14;
    int v15;
    char gap84_[4];
    char v16;
    char gap89_[15];
    __int64 v17;
  } v14_;
  struct {
    int v18;
    char v19;
  } v18_;

  game_facility_140d160((void*)((__int128*)&v14_.v14), a2);
  if ((*(_BYTE*)a1 & 1) != 0) {
    fw_text_String_CopyTerminated(v12_.v12, *(_QWORD*)(a1 + 16),
                                  *(_QWORD*)(a1 + 8));
  }
  else {
    v7 = *(_QWORD*)(a1 + 8);
    v12_.v12[0] = *(_QWORD*)a1;
    v12_.v12[1] = v7;
    v12_.v13 = *(_QWORD*)(a1 + 16);
  }
  v10_.v11 = 1;
  v18_.v19 = 1;
  v10_.v10 = v14_.v14;
  v18_.v18 = v14_.v15;
  game_facility_1950100((void*)(a4), (__int64)v12_.v12, &v10_.v10,
                        (__int64)&v18_.v18, a3);
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v12_.v13);
  }
  if ((v14_.v16 & 1) != 0 && v14_.v17 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  v14_.v17);
  }
}

#pragma GCC visibility pop
