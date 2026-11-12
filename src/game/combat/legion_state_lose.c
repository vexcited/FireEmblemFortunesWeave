#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* CharacterDie_10ba960(_QWORD* result);
__int64 GameHr_e41cc0(__int64);
__int64 StateMachines_e32520(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_character_1084940(__int64 result, char, float);
__int64 game_combat_e414c0(__int64, float*);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
bool GameHr_e412a0(__int64, int);
char* GameRoutine_e37f80(__int64*, char*, char*);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fe4a48[])();
extern __int64 (*GameData_1fe4a98[])();
extern __int64* GameData_212d448[9];
extern __int64* GameData_212f368[9];
extern __int64* GameData_212f388[5];
extern __int64* GameData_212f398[3];
extern __int64* GameData_212f3a8;
extern __int64* GameData_212f3d0[5];
extern __int64* GameData_212f3d8[4];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
_QWORD* LegionStateLose_Unknown3(__int64 a1);

_QWORD* LegionStateLose_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  _QWORD* result;
  _QWORD* v8;
  __int64 v9;
  __int64* v10;
  char* v11;
  char* v12;
  _BYTE* v13;
  char* i;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  unsigned int v24;
  signed __int64 v25;
  float v26;
  unsigned __int64 v27;
  __int64 v28;
  _BYTE* v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  _QWORD* v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  char* v51;
  __int64 v52;
  int v53;
  __int64 v54;
  int v55;
  char v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  _DWORD* v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  char* v74;
  char* v75;
  __int64 v76;
  __int64* v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  bool v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64* v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  char* v92;
  __int64 v93;
  int v94;
  unsigned int v95;
  unsigned int v96;
  int v97;
  __int64 v98;
  _QWORD* v99;
  int v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  __int64* v104;
  __int64 v105;
  char* v106;
  __int64 v107;
  __int64 v108;
  __int64* v109;
  __int64 v110;
  char* v111;
  __int64 v112;
  __int64* v113;
  __int64 v114;
  char* v115;
  struct {
    __int64 v116;
    __int64 v117;
  } v116_;
  struct {
    __int64 v118;
    __int64 v119;
  } v118_;
  struct {
    __int64 v120;
    __int64 v121;
  } v120_;
  struct {
    __int64 v122;
    __int64 v123;
  } v122_;
  struct {
    __int64 v124;
    __int64 v125;
  } v124_;
  struct {
    __int64 v126;
    __int64 v127;
  } v126_;
  struct {
    __int64 v128;
    __int64 v129;
  } v128_;
  struct {
    _QWORD* v130;
    _QWORD* v131;
    _QWORD* v132;
  } v130_;
  struct {
    __int64 v133;
    __int64 v134;
  } v133_;

  nn_os_LockMutex((__int64)&game_g_random_mutex);
  v2 = game_map_MapRandom_instance__ptr[0];
  v3 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v5 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v2 + 1) = v3;
  v6 = (v5 >> 8) ^ (v4 >> 19) ^ v5 ^ v4;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2) = v4;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4) = v6;
  result = (_QWORD*)nn_os_UnlockMutex((__int64)&game_g_random_mutex);
  v8 = *(_QWORD**)(a1 + 8);
  v9 = v8[22];
  v10 = v8 + 17;
  v11 = (char*)v8[17];
  v12 = (char*)v8[18];
  if ((*(_BYTE*)(*(_QWORD*)(v9 + 56) + 340LL) & 0x1C) == 0) {
    v24 = (unsigned __int16)v6;
    v25 = v12 - v11;
    v26 = vcvts_n_f32_u32(v24, 0x10u);
    v27 = (unsigned __int64)(v12 - v11) >> 4;
    if ((*(_BYTE*)(*(_QWORD*)(*GameData_212d448[0] + 8) + 116LL) & 0x80) != 0 ||
        (*(_BYTE*)(v9 + 32) & 2) != 0 ||
        (v28 = *(_QWORD*)(v9 + 16)) != 0 &&
            (v29 = *(_BYTE**)(*(_QWORD*)(v28 + 392) + 40LL)) != nullptr &&
            *v29 != 0) {
      v30 = (__int64*)fw_memory_g_heap_manager_ptr;
      v31 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
      *(_QWORD*)(v31 + 16) = 0;
      v32 = GameData_212f3d8[0];
      *(_WORD*)(v31 + 32) = 0;
      *(_QWORD*)(v31 + 64) = v9;
      *(_DWORD*)(v31 + 72) = 0;
      *(_QWORD*)v31 = v32 + 2;
      *(_QWORD*)(v31 + 8) = 0;
      strcpy((char*)(v31 + 40), "\nDelay");
      v33 = GameData_212f368[0];
      *(float*)(v31 + 76) = v26;
      v122_.v123 = v31;
      *(_QWORD*)(v31 + 24) = v33 + 2;
      v34 = *v10;
      v122_.v122 = v31 + 24;
      if ((int)v27 <= 0) {
        v35 = (char*)v34;
      }
      else {
        v35 = (char*)(v34 + ((v25 + 0xFFFFFFFF0LL) & 0xFFFFFFFF0LL) + 16);
      }
      GameRoutine_e37f80(v10, v35, (char*)&v122_.v122);
      v36 = v122_.v123;
      if (v122_.v123 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v122_.v123 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
        std___1___shared_weak_count___release_weak(v36);
      }
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v37 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2);
      v38 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4);
      v39 = *(_DWORD*)v2 ^ (*(_DWORD*)v2 << 11);
      *(_DWORD*)v2 = *((_DWORD*)v2 + 1);
      *((_DWORD*)v2 + 1) = v37;
      v40 = (v39 >> 8) ^ (v38 >> 19) ^ v39 ^ v38;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2) = v38;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4) = v40;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v41 = GameData_212f3d0[0];
      v42 = GameData_212f388[0];
      if (vcvts_n_f32_u32((unsigned __int16)v40, 0x10u) >=
          0x1.0000000000000p-1f) {
        v63 = fw_memory_HeapManager_Allocate(*v30, 88, 16, 0);
        *(_QWORD*)(v63 + 8) = 0;
        *(_QWORD*)(v63 + 16) = 0;
        *(_WORD*)(v63 + 32) = 0;
        *(_QWORD*)v63 = GameData_1fe4a48;
        strcpy((char*)(v63 + 40), " WaitAnimComplate");
        *(_QWORD*)(v63 + 64) = v9;
        *(_QWORD*)(v63 + 72) = 0x3FC0000000000000LL;
        v64 = GameData_212f398[0];
        *(_BYTE*)(v63 + 80) = 1;
        *(_DWORD*)(v63 + 84) = 0;
        v118_.v119 = v63;
        *(_QWORD*)(v63 + 24) = v64 + 2;
        v65 = *v10;
        v118_.v118 = v63 + 24;
        if ((v27 & 0x80000000) == 0LL) {
          v66 = (char*)(v65 + (v25 & 0xFFFFFFFF0LL) + 16);
        }
        else {
          v66 = (char*)v65;
        }
        GameRoutine_e37f80(v10, v66, (char*)&v118_.v118);
        v52 = v118_.v119;
        if (v118_.v119 == 0) {
          goto LABEL_70;
        }
      }
      else {
        v43 = *(_QWORD*)(a1 + 8);
        v44 = (_QWORD*)fw_memory_HeapManager_Allocate(*v30, 8, 16, 0);
        v130_.v130 = v44;
        *v44 = 0xDDC747D82451873LL;
        v130_.v131 = v44 + 1;
        v130_.v132 = v44 + 1;
        v45 = StateMachines_e32520(v43, (__int64)&v130_.v130);
        v46 = 128;
        if (*(_QWORD*)(*v30 + 200) == 0) {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free(*v30 + v46, (__int64)v44);
        v47 = fw_memory_HeapManager_Allocate(*v30, 120, 16, 0);
        *(_QWORD*)(v47 + 8) = 0;
        *(_QWORD*)(v47 + 16) = 0;
        *(_WORD*)(v47 + 32) = 0;
        *(_QWORD*)(v47 + 64) = v9;
        *(_BYTE*)(v47 + 80) = 0;
        *(_BYTE*)(v47 + 84) = 0;
        *(_BYTE*)(v47 + 88) = 0;
        *(_BYTE*)(v47 + 92) = 0;
        *(_QWORD*)v47 = v41 + 2;
        *(_BYTE*)(v47 + 96) = 0;
        *(_BYTE*)(v47 + 100) = 0;
        *(_BYTE*)(v47 + 104) = 0;
        *(_QWORD*)(v47 + 108) = 0;
        *(_BYTE*)(v47 + 116) = 0;
        *(_DWORD*)(v47 + 72) = 0;
        *(_DWORD*)(v47 + 76) = v45;
        v120_.v121 = v47;
        *(_BYTE*)(v47 + 40) = 12;
        strcpy((char*)(v47 + 41), "Motion");
        *(_QWORD*)(v47 + 24) = v42 + 2;
        v48 = *v10;
        v49 = *v10 + (v25 & 0xFFFFFFFF0LL);
        v120_.v120 = v47 + 24;
        v50 = (char*)(v49 + 16);
        if ((v27 & 0x80000000) == 0LL) {
          v51 = v50;
        }
        else {
          v51 = (char*)v48;
        }
        GameRoutine_e37f80(v10, v51, (char*)&v120_.v120);
        v52 = v120_.v121;
        if (v120_.v121 == 0) {
        LABEL_70:
          v67 = *(_QWORD*)(a1 + 8);
          v68 = (_DWORD*)fw_memory_HeapManager_Allocate(*v30, 4, 16, 0);
          v130_.v130 = v68;
          *v68 = -1101902990;
          v130_.v131 = v68 + 1;
          v130_.v132 = v68 + 1;
          v69 = StateMachines_e32520(v67, (__int64)&v130_.v130);
          v70 = 128;
          if (*(_QWORD*)(*v30 + 200) == 0) {
            v70 = 56;
          }
          nn_mem_StandardAllocator_Free(*v30 + v70, (__int64)v68);
          v71 = fw_memory_HeapManager_Allocate(*v30, 120, 16, 0);
          *(_QWORD*)(v71 + 8) = 0;
          *(_QWORD*)(v71 + 16) = 0;
          *(_WORD*)(v71 + 32) = 0;
          *(_QWORD*)v71 = v41 + 2;
          *(_QWORD*)(v71 + 64) = v9;
          *(_BYTE*)(v71 + 80) = 0;
          *(_BYTE*)(v71 + 84) = 0;
          *(_BYTE*)(v71 + 88) = 0;
          *(_BYTE*)(v71 + 92) = 0;
          *(_BYTE*)(v71 + 96) = 0;
          *(_BYTE*)(v71 + 100) = 0;
          *(_BYTE*)(v71 + 104) = 0;
          *(_QWORD*)(v71 + 108) = 0;
          *(_BYTE*)(v71 + 116) = 0;
          *(_DWORD*)(v71 + 72) = 0;
          *(_DWORD*)(v71 + 76) = v69;
          v116_.v117 = v71;
          *(_BYTE*)(v71 + 40) = 12;
          strcpy((char*)(v71 + 41), "Motion");
          *(_QWORD*)(v71 + 24) = v42 + 2;
          v72 = *v10;
          v73 = *v10 + ((v25 + 16) & 0xFFFFFFFF0LL);
          v116_.v116 = v71 + 24;
          v74 = (char*)(v73 + 16);
          if ((int)v27 <= -2) {
            v75 = (char*)v72;
          }
          else {
            v75 = v74;
          }
          result = GameRoutine_e37f80(v10, v75, (char*)&v116_.v116);
          v76 = v116_.v117;
          if (v116_.v117 == 0) {
            return result;
          }
        LABEL_76:
          if (atomic_fetch_add((atomic_ullong* volatile)(v76 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
            return (_QWORD*)std___1___shared_weak_count___release_weak(v76);
          }
          return result;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
        std___1___shared_weak_count___release_weak(v52);
      }
      goto LABEL_70;
    }
    v87 = (__int64*)fw_memory_g_heap_manager_ptr;
    v88 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80, 16, 0);
    *(_QWORD*)(v88 + 16) = 0;
    v89 = GameData_212f3d8[0];
    *(_WORD*)(v88 + 32) = 0;
    *(_QWORD*)(v88 + 64) = v9;
    *(_DWORD*)(v88 + 72) = 0;
    *(_QWORD*)v88 = v89 + 2;
    *(_QWORD*)(v88 + 8) = 0;
    strcpy((char*)(v88 + 40), "\nDelay");
    v90 = GameData_212f368[0];
    *(float*)(v88 + 76) = v26 * 0x1.3333340000000p-2f;
    v133_.v134 = v88;
    *(_QWORD*)(v88 + 24) = v90 + 2;
    v91 = *v10;
    v133_.v133 = v88 + 24;
    if ((int)v27 <= 0) {
      v92 = (char*)v91;
    }
    else {
      v92 = (char*)(v91 + ((v25 + 0xFFFFFFFF0LL) & 0xFFFFFFFF0LL) + 16);
    }
    GameRoutine_e37f80(v10, v92, (char*)&v133_.v133);
    v93 = v133_.v134;
    if (v133_.v134 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v133_.v134 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93);
      std___1___shared_weak_count___release_weak(v93);
    }
    nn_os_LockMutex((__int64)&game_g_random_mutex);
    v94 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2);
    v95 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4);
    v96 = *(_DWORD*)v2 ^ (*(_DWORD*)v2 << 11);
    *(_DWORD*)v2 = *((_DWORD*)v2 + 1);
    *((_DWORD*)v2 + 1) = v94;
    v97 = (v96 >> 8) ^ (v95 >> 19) ^ v96 ^ v95;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2) = v95;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v2 + 4) = v97;
    nn_os_UnlockMutex((__int64)&game_g_random_mutex);
    if (vcvts_n_f32_u32((unsigned __int16)v97, 0x10u) >=
        0x1.6666660000000p-1f) {
      v108 = fw_memory_HeapManager_Allocate(*v87, 88, 16, 0);
      *(_QWORD*)(v108 + 8) = 0;
      *(_QWORD*)(v108 + 16) = 0;
      *(_WORD*)(v108 + 32) = 0;
      *(_QWORD*)v108 = GameData_1fe4a48;
      strcpy((char*)(v108 + 40), " WaitAnimComplate");
      *(_QWORD*)(v108 + 64) = v9;
      *(_QWORD*)(v108 + 72) = 0x3FC0000000000000LL;
      v109 = GameData_212f398[0];
      *(_BYTE*)(v108 + 80) = 1;
      *(_DWORD*)(v108 + 84) = 0;
      v126_.v127 = v108;
      *(_QWORD*)(v108 + 24) = v109 + 2;
      v110 = *v10;
      v126_.v126 = v108 + 24;
      if ((v27 & 0x80000000) == 0LL) {
        v111 = (char*)(v110 + (v25 & 0xFFFFFFFF0LL) + 16);
      }
      else {
        v111 = (char*)v110;
      }
      GameRoutine_e37f80(v10, v111, (char*)&v126_.v126);
      v107 = v126_.v127;
      if (v126_.v127 == 0) {
        goto LABEL_122;
      }
    }
    else {
      v98 = *(_QWORD*)(a1 + 8);
      v99 = (_QWORD*)fw_memory_HeapManager_Allocate(*v87, 8, 16, 0);
      v130_.v130 = v99;
      *v99 = 0xDDC747D82451873LL;
      v130_.v131 = v99 + 1;
      v130_.v132 = v99 + 1;
      v100 = StateMachines_e32520(v98, (__int64)&v130_.v130);
      v101 = 128;
      if (*(_QWORD*)(*v87 + 200) == 0) {
        v101 = 56;
      }
      nn_mem_StandardAllocator_Free(*v87 + v101, (__int64)v99);
      v102 = fw_memory_HeapManager_Allocate(*v87, 120, 16, 0);
      *(_QWORD*)(v102 + 16) = 0;
      v103 = GameData_212f3d0[0];
      *(_WORD*)(v102 + 32) = 0;
      *(_QWORD*)v102 = v103 + 2;
      *(_QWORD*)(v102 + 8) = 0;
      *(_BYTE*)(v102 + 40) = 12;
      strcpy((char*)(v102 + 41), "Motion");
      v104 = GameData_212f388[0];
      *(_QWORD*)(v102 + 64) = v9;
      *(_BYTE*)(v102 + 80) = 0;
      *(_BYTE*)(v102 + 84) = 0;
      *(_BYTE*)(v102 + 88) = 0;
      *(_BYTE*)(v102 + 92) = 0;
      *(_BYTE*)(v102 + 96) = 0;
      *(_BYTE*)(v102 + 100) = 0;
      *(_BYTE*)(v102 + 104) = 0;
      *(_QWORD*)(v102 + 108) = 0;
      *(_BYTE*)(v102 + 116) = 0;
      *(_DWORD*)(v102 + 72) = 0;
      *(_DWORD*)(v102 + 76) = v100;
      v128_.v129 = v102;
      *(_QWORD*)(v102 + 24) = v104 + 2;
      v105 = *v10;
      v128_.v128 = v102 + 24;
      if ((v27 & 0x80000000) == 0LL) {
        v106 = (char*)(v105 + (v25 & 0xFFFFFFFF0LL) + 16);
      }
      else {
        v106 = (char*)v105;
      }
      GameRoutine_e37f80(v10, v106, (char*)&v128_.v128);
      v107 = v128_.v129;
      if (v128_.v129 == 0) {
      LABEL_122:
        v112 = fw_memory_HeapManager_Allocate(*v87, 88, 16, 0);
        *(_QWORD*)(v112 + 8) = 0;
        *(_QWORD*)(v112 + 16) = 0;
        *(_WORD*)(v112 + 32) = 0;
        *(_QWORD*)v112 = GameData_1fe4a98;
        *(_QWORD*)(v112 + 64) = v9;
        *(_DWORD*)(v112 + 72) = 0;
        *(_BYTE*)(v112 + 40) = 8;
        strcpy((char*)(v112 + 41), "Lose");
        v113 = GameData_212f3a8;
        *(_QWORD*)(v112 + 76) = 0;
        *(_WORD*)(v112 + 84) = 0;
        v124_.v125 = v112;
        *(_QWORD*)(v112 + 24) = v113 + 2;
        v114 = *v10;
        v124_.v124 = v112 + 24;
        if ((int)v27 <= -2) {
          v115 = (char*)v114;
        }
        else {
          v115 = (char*)(v114 + ((v25 + 16) & 0xFFFFFFFF0LL) + 16);
        }
        result = GameRoutine_e37f80(v10, v115, (char*)&v124_.v124);
        v76 = v124_.v125;
        if (v124_.v125 == 0) {
          return result;
        }
        goto LABEL_76;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v107 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v107 + 16LL))(v107);
      std___1___shared_weak_count___release_weak(v107);
    }
    goto LABEL_122;
  }
  if (v11 != v12) {
    do {
      v13 = *(_BYTE**)v11;
      if (*(_BYTE*)(*(_QWORD*)v11 + 8LL) == 1) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)v13 + 32LL))(
            *(_QWORD*)v11);
        v13[8] = 0;
      }
      v11 += 16;
    } while (v11 != v12);
    v11 = (char*)v8[17];
    for (i = (char*)v8[18]; i != v11; i -= 16) {
      v15 = *((_QWORD*)i - 1);
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v15);
      }
    }
  }
  v8[18] = v11;
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL) + 110LL) != 1) {
    v53 = GameHr_e41cc0(*(_QWORD*)(v9 + 104));
    v54 = *(_QWORD*)(v9 + 104);
    v55 = v53;
    if (GameHr_e412a0(v54, v53)) {
      *(_DWORD*)(v54 + 48) = v55;
      v56 = *(_BYTE*)(v54 + 80);
      *(_DWORD*)(v54 + 52) = 0;
      *(_BYTE*)(v54 + 56) = 0;
      *(_DWORD*)(v54 + 60) = 0;
      *(_BYTE*)(v54 + 64) = 0;
      *(_DWORD*)(v54 + 68) = 0;
      *(_BYTE*)(v54 + 72) = 0;
      *(_DWORD*)(v54 + 76) = 0;
      if ((v56 & 1) == 0) {
        *(_BYTE*)(v54 + 80) = 1;
      }
      if ((*(_BYTE*)(v54 + 44) & 1) == 0 &&
          (game_combat_e414c0(v54, (float*)(v54 + 48)) & 1) != 0 &&
          (*(_BYTE*)(v54 + 80) & 1) != 0) {
        *(_BYTE*)(v54 + 80) = 0;
      }
    }
    v57 = *(_QWORD*)(v9 + 104);
    *(_BYTE*)(v57 + 44) = 1;
    v58 = *(_QWORD*)(v57 + 8);
    v59 = *(_QWORD*)(v58 + 136);
    v60 = *(_QWORD*)(v58 + 144);
    if (v60 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v60 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v59 != 0 && *(_DWORD*)(v59 + 64) == 0) {
      *(_DWORD*)(v59 + 64) = 1;
    }
    if (v60 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
      std___1___shared_weak_count___release_weak(v60);
      v61 = *(_QWORD*)(v9 + 48);
      if (v61 == 0) {
        goto LABEL_97;
      }
    }
    else {
      v61 = *(_QWORD*)(v9 + 48);
      if (v61 == 0) {
        goto LABEL_97;
      }
    }
    if (*(_QWORD*)(v61 + 8) != -1) {
      v62 = *(_QWORD**)(v9 + 56);
      return CharacterDie_10ba960(v62);
    }
  LABEL_97:
    v62 = nullptr;
    return CharacterDie_10ba960(v62);
  }
  v16 = *(_QWORD*)(v9 + 136);
  v17 = *(_QWORD*)(v9 + 144);
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                              memory_order_relaxed);
    v18 = *(__int64**)(v16 + 40);
    v19 = *((_DWORD*)v18 + 5);
    *((_DWORD*)v18 + 5) = v19 | 0x80;
    if (v19 != (v19 | 0x80)) {
      v20 = *v18;
      v21 = *(_QWORD*)(v20 + 8);
      if (v21 != 0) {
        v22 = *(_QWORD*)(v20 + 16);
        v23 = *(_QWORD*)(v21 + 8) == -1 || v22 == 0;
        if (!v23 && *(_QWORD*)(v21 + 8) != -1 &&
            (*(_BYTE*)(v20 + 61) & 1) == 0 && *(_DWORD*)(v20 + 64) != 1 &&
            (*(_BYTE*)(v22 + 342) & 1) != 0) {
          result = (_QWORD*)game_character_1084940(v22, 0, 0x0.0p+0f);
          *(_BYTE*)(*(_QWORD*)(v22 + 8) + 289LL) = 0;
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v17);
    }
  }
  else {
    v77 = *(__int64**)(v16 + 40);
    v78 = *((_DWORD*)v77 + 5);
    *((_DWORD*)v77 + 5) = v78 | 0x80;
    if (v78 != (v78 | 0x80)) {
      v79 = *v77;
      v80 = *(_QWORD*)(v79 + 8);
      if (v80 != 0) {
        v81 = *(_QWORD*)(v79 + 16);
        v82 = *(_QWORD*)(v80 + 8) == -1 || v81 == 0;
        if (!v82 && *(_QWORD*)(v80 + 8) != -1 &&
            (*(_BYTE*)(v79 + 61) & 1) == 0 && *(_DWORD*)(v79 + 64) != 1 &&
            (*(_BYTE*)(v81 + 342) & 1) != 0) {
          result = (_QWORD*)game_character_1084940(v81, 0, 0x0.0p+0f);
          *(_BYTE*)(*(_QWORD*)(v81 + 8) + 289LL) = 0;
        }
      }
    }
  }
  v83 = *(_QWORD*)(v9 + 104);
  *(_BYTE*)(v83 + 44) = 1;
  v84 = *(_QWORD*)(v83 + 8);
  v85 = *(_QWORD*)(v84 + 136);
  v86 = *(_QWORD*)(v84 + 144);
  if (v86 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v86 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v85 != 0 && *(_DWORD*)(v85 + 64) == 0) {
    *(_DWORD*)(v85 + 64) = 1;
    if (v86 == 0) {
      return result;
    }
  }
  else if (v86 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v86 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v86 + 16LL))(v86);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v86);
  }
  return result;
}

#pragma GCC visibility pop
