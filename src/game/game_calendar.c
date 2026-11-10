#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_12dd7e0(int);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_12db540(_QWORD, _QWORD);
__int64 GameRoutine_12dd380(__int64, int, int, int, char);
__int64 GameRoutine_12e1990(_QWORD, _QWORD);
__int64 GameRoutine_16477d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ad210(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_660f80(_QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_88cee0(void);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 TransporterConst_89cc80(_QWORD);
__int64 Tutorial_f9a740(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_ProcInst_Register(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
bool GameRoutine_12da4a0(unsigned __int8*);
bool GameRoutine_12dda00(__int64, __int64***);
extern _UNKNOWN GameData_1a92577;
extern _UNKNOWN GameData_1a95031;
extern _UNKNOWN GameData_21c6868;
extern __int64 (*GameData_20238a8[])();
extern __int64 (*GameData_2023928[])();
extern __int64 (*GameData_20239a8[])();
extern __int64 (*GameData_2023c98[])();
extern __int64 (*game_GameCalendar_ProcCalendarWatcher_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c6c0[2];
extern __int64 GameData_212c6c8;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21c9650;
extern __int64 GameData_21c9700;
extern __int64 GameData_21eea40;
extern __int64 GameData_2240bc8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212d6d0;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern char** msg_MessageManager_empty_text__ptr;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_2240ee0;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(_QWORD);
__int64 GameCalendar_Destructor(_QWORD* a1);
__int64 GameCalendar_12db310(__int64 a1, __int64 a2);
__int64 GameCalendar_Unknown6(__int64 result);
__int64 GameCalendar_Unknown5(__int64 result);
__int64 GameCalendar_Unknown8(__int64 result, __int64 a2);
__int64 GameCalendar_Unknown9(__int64 a1, __int64 a2, int a3);
_QWORD* GameCalendar_12e0c20(_QWORD* result);
__int64 GameCalendar_12e0d40(__int64 result);
__int64 GameCalendar_12e0da0(__int64 result);
__int64 game_GameCalendar_ProcNotifyBirthday_Notify(__int64 a1);
__int64 game_GameCalendar_ProcNotifyBirthday_Notify_closure_Invoke(__int64 a1);
__int64 game_GameCalendar_ProcNotify_Notify_closure0_Invoke(__int64 a1,
                                                            __int64* a2);

__int64 GameCalendar_Destructor(_QWORD* a1)
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
  __int64 result;
  _QWORD* v37;

  if (GameData_2240bc8 != 0 && (*(_WORD*)(GameData_2240bc8 + 136) & 1) == 0) {
    ProcInst_657a50(GameData_2240bc8, 1);
  }
  v2 = a1[28];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = a1[29];
    if (v2 == v4) {
      goto LABEL_23;
    }
    v5 = a1[29];
    do {
      v9 = *(_QWORD*)(v5 - 24);
      v5 -= 24;
      v8 = v9;
      if (v9 != 0) {
        v10 = *(_QWORD*)(v4 - 16);
        if (v8 == v10) {
          goto LABEL_8;
        }
        do {
          v11 = *(_QWORD*)(v10 - 24);
          if (v11 != 0) {
            *(_QWORD*)(v10 - 16) = v11;
            if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
              v12 = 128;
            }
            else {
              v12 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
          }
          v10 -= 32;
        } while (v10 != v8);
        v6 = *(_QWORD*)(v4 - 24);
        *(_QWORD*)(v4 - 16) = v8;
        if (v6 != 0) {
        LABEL_8:
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
        }
      }
      v4 = v5;
    } while (v2 != v5);
    v13 = a1[28];
    a1[29] = v2;
    if (v13 != 0) {
    LABEL_23:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
    }
  }
  v15 = a1[23];
  if (v15 != 0) {
    v16 = *(_QWORD*)v3;
    a1[24] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17);
  }
  v18 = a1[20];
  if (v18 != 0) {
    v19 = *(_QWORD*)v3;
    a1[21] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(v19 + v20);
  }
  v21 = a1[17];
  if (v21 != 0) {
    v22 = *(_QWORD*)v3;
    a1[18] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(v22 + v23);
  }
  v24 = a1[14];
  if (v24 != 0) {
    v25 = *(_QWORD*)v3;
    a1[15] = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(v25 + v26);
  }
  v27 = a1[8];
  if (v27 != 0) {
    v28 = *(_QWORD*)v3;
    a1[9] = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(v28 + v29);
  }
  v30 = a1[5];
  if (v30 != 0) {
    v31 = *(_QWORD*)v3;
    a1[6] = v30;
    v32 = 128;
    if (*(_QWORD*)(v31 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(v31 + v32);
  }
  v33 = a1[2];
  if (v33 != 0) {
    v34 = *(_QWORD*)v3;
    a1[3] = v33;
    v35 = 128;
    if (*(_QWORD*)(v34 + 200) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(v34 + v35);
  }
  a1[1] = GameData_212d6d0 + 2;
  v37 = a1 + 1;
  result = GameRoutine_876a40(&GameData_21eea40, &v37);
  *a1 = GameData_2023c98;
  if (*(_QWORD**)GameData_212c6c0[0] == a1) {
    *(_QWORD*)GameData_212c6c0[0] = 0;
    GameData_2240ee0 = 0;
  }
  return result;
}

__int64 GameCalendar_12db310(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  int v8;
  __int64 v9;

  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
  v4 = GameData_212c608[0];
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = "NULL";
  *(_QWORD*)(v3 + 138) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)v3 = v4 + 16;
  *(_QWORD*)(v3 + 8) = 0;
  result = game_ProcInst_Register(v3, v5);
  *(_DWORD*)(v3 + 160) = 0;
  GameData_2240bc8 = v3;
  *(_QWORD*)v3 = game_GameCalendar_ProcCalendarWatcher_vtable;
  *(_QWORD*)(v3 + 152) = 0;
  if (*(_QWORD*)GameData_212c6c8 != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v7 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v7 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v8 = *(_DWORD*)(v7 + 8);
    *(_QWORD*)(v3 + 152) = *(_QWORD*)v7;
    *(_DWORD*)(v3 + 160) = v8;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21c6868);
    if ((_DWORD)result != 0) {
      GameData_21c67a8 = 3;
      GameData_21c67d0 = 0;
      GameData_21c67d8 = 0;
      GameData_21c67e0 = 0;
      GameData_21c67b0 = 0;
      GameData_21c67b8 = 0;
      GameData_21c67c0 = 0;
      GameData_21c67c8 = 0;
      GameData_21c6808 = 0;
      GameData_21c6810 = 0;
      GameData_21c6818 = 0;
      GameData_21c6820 = 0;
      GameData_21c6828 = 0;
      GameData_21c6850 = 0;
      GameData_21c6858 = 0;
      GameData_21c6860 = 0;
      GameData_21c6848 = 0;
      GameData_21c6838 = 0;
      GameData_21c6840 = 0;
      GameData_21c6830 = 0;
      GameData_21c67e8 = 14;
      GameData_21c67f0 = 0;
      GameData_21c67f8 = 16;
      GameData_21c6800 = 1;
      result = __cxa_guard_release(&GameData_21c6868);
    }
  }
  if (a2 != 0) {
    v9 = *(_QWORD*)(a2 + 40);
    if (v9 != 0) {
      *(_QWORD*)(v9 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a2 + 40);
    }
    *(_QWORD*)(a2 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "ProcCalendarWatcher";
    *(_QWORD*)(v3 + 32) = a2;
    *(_DWORD*)(v3 + 140) = game_HashString32("ProcCalendarWatcher");
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    *(_QWORD*)(v3 + 8) = &GameData_21c67a8;
    *(_QWORD*)(v3 + 16) = &GameData_21c67a8;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3);
    if ((result & 1) != 0 && (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v3 + 136) & 1) == 0) {
    return ProcInst_657a50(v3, 1);
  }
  return result;
}

__int64 GameCalendar_Unknown6(__int64 result)
{
  *(_DWORD*)(result + 88) = 0;
  *(_BYTE*)(result + 92) = 0;
  *(_DWORD*)(result + 94) = 0;
  *(_BYTE*)(result + 98) = 0;
  *(_DWORD*)(result + 100) = 0;
  *(_BYTE*)(result + 104) = 0;
  *(_QWORD*)(result + 208) = 0;
  *(_DWORD*)(result + 216) = 0;
  *(_WORD*)(result + 106) = 255;
  *(_QWORD*)(result + 24) = *(_QWORD*)(result + 16);
  *(_QWORD*)(result + 48) = *(_QWORD*)(result + 40);
  *(_QWORD*)(result + 72) = *(_QWORD*)(result + 64);
  *(_QWORD*)(result + 120) = *(_QWORD*)(result + 112);
  *(_QWORD*)(result + 144) = *(_QWORD*)(result + 136);
  *(_QWORD*)(result + 168) = *(_QWORD*)(result + 160);
  *(_QWORD*)(result + 192) = *(_QWORD*)(result + 184);
  return result;
}

__int64 GameCalendar_Unknown5(__int64 result)
{
  *(_DWORD*)(result + 80) = 0;
  *(_BYTE*)(result + 84) = 0;
  *(_DWORD*)(result + 86) = 0;
  *(_BYTE*)(result + 90) = 0;
  *(_DWORD*)(result + 92) = 0;
  *(_BYTE*)(result + 96) = 0;
  *(_QWORD*)(result + 200) = 0;
  *(_DWORD*)(result + 208) = 0;
  *(_WORD*)(result + 98) = 255;
  *(_QWORD*)(result + 16) = *(_QWORD*)(result + 8);
  *(_QWORD*)(result + 40) = *(_QWORD*)(result + 32);
  *(_QWORD*)(result + 64) = *(_QWORD*)(result + 56);
  *(_QWORD*)(result + 112) = *(_QWORD*)(result + 104);
  *(_QWORD*)(result + 136) = *(_QWORD*)(result + 128);
  *(_QWORD*)(result + 160) = *(_QWORD*)(result + 152);
  *(_QWORD*)(result + 184) = *(_QWORD*)(result + 176);
  return result;
}

__int64 GameCalendar_Unknown8(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int16 v6;
  bool v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  char v14;
  __int64 v15;
  char v16;
  __int16 v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  char v24;
  __int64 v25;
  char v26;
  __int16 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  char v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  char v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64* v55;
  char v56;
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
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  __int64* v82;
  __int64* v83;
  char v84;
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
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  int v107;
  __int64 v108;
  __int64 v109;
  __int64* v110;
  __int64* v111;
  char v112;
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
  unsigned __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  int v134;
  __int64 v135;
  __int16 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64* v142;
  __int64* v143;
  char v144;
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
  unsigned __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  int v167;
  __int64 v168;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  v5 = result;
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(v3 + v2) = 0;
  v6 = *(_WORD*)(result + 88);
  v7 = v6 == 0 || *(_BYTE*)(result + 90) == 0;
  if (v7 || *(_BYTE*)(result + 91) == 0) {
    v9 = 0;
  }
  else {
    v8 = *(int*)(a2 + 20);
    v9 = 1;
    *(_DWORD*)(a2 + 20) = v8 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v6;
    v10 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v10 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = HIBYTE(v6);
    v11 = *(int*)(a2 + 20);
    v12 = *(_BYTE*)(result + 90);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = v12;
    v13 = *(int*)(a2 + 20);
    v14 = *(_BYTE*)(result + 91);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = v14;
    v15 = *(int*)(a2 + 20);
    v16 = *(_BYTE*)(result + 92);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v16;
  }
  v17 = *(_WORD*)(result + 94);
  v18 = v17 == 0 || *(_BYTE*)(result + 96) == 0;
  if (!v18 && *(_BYTE*)(result + 97) != 0) {
    v19 = *(int*)(a2 + 20);
    ++v9;
    *(_DWORD*)(a2 + 20) = v19 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = v17;
    v20 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = HIBYTE(v17);
    v21 = *(int*)(a2 + 20);
    v22 = *(_BYTE*)(result + 96);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = v22;
    v23 = *(int*)(a2 + 20);
    v24 = *(_BYTE*)(result + 97);
    *(_DWORD*)(a2 + 20) = v23 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = v24;
    v25 = *(int*)(a2 + 20);
    v26 = *(_BYTE*)(result + 98);
    *(_DWORD*)(a2 + 20) = v25 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = v26;
  }
  v27 = *(_WORD*)(result + 100);
  v28 = v27 == 0 || *(_BYTE*)(result + 102) == 0;
  if (!v28 && *(_BYTE*)(result + 103) != 0) {
    v29 = *(int*)(a2 + 20);
    ++v9;
    *(_DWORD*)(a2 + 20) = v29 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = v27;
    v30 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v30 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = HIBYTE(v27);
    v31 = *(int*)(a2 + 20);
    v32 = *(_BYTE*)(result + 102);
    *(_DWORD*)(a2 + 20) = v31 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = v32;
    v33 = *(int*)(a2 + 20);
    v34 = *(_BYTE*)(result + 103);
    *(_DWORD*)(a2 + 20) = v33 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = v34;
    v35 = *(int*)(a2 + 20);
    v36 = *(_BYTE*)(result + 104);
    *(_DWORD*)(a2 + 20) = v35 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = v36;
  }
  v37 = *(_QWORD*)(a2 + 32);
  v38 = *(_QWORD*)(a2 + 40);
  v39 = ((v38 - v37) << 7) - 1;
  if (v38 == v37) {
    v39 = 0;
  }
  v40 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v39 == v40) {
    result = GameRoutine_660f80(a2 + 24);
    v37 = *(_QWORD*)(a2 + 32);
    v40 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v37 + 8 * (v40 >> 10)) + 4 * (v40 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v9;
  v42 = *(_QWORD*)(a2 + 56);
  v41 = *(_QWORD*)(a2 + 64);
  v44 = *(_QWORD*)(a2 + 32);
  v43 = *(_QWORD*)(a2 + 40);
  v45 = v41 - 1;
  v7 = v43 == v44;
  v46 = v41 + v42;
  v47 = ((v43 - v44) << 7) - 1;
  v48 = *(_QWORD*)(v44 + 8 * ((unsigned __int64)(v45 + v42) >> 10));
  if (v7) {
    v47 = 0;
  }
  v49 = *(_DWORD*)(v48 + 4 * ((v45 + v42) & 0x3FF));
  *(_QWORD*)(a2 + 64) = v45;
  *(_DWORD*)(a2 + 20) = v49;
  if ((unsigned __int64)(v47 - v46 + 1) >= 0x800) {
    if (*(_QWORD*)(v43 - 8) != 0) {
      v50 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v50 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v50);
      v43 = *(_QWORD*)(a2 + 40);
      v49 = *(_DWORD*)(a2 + 20);
    }
    *(_QWORD*)(a2 + 40) = v43 - 8;
  }
  v51 = *(_BYTE*)(v5 + 107);
  *(_DWORD*)(a2 + 20) = v49 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v49) = v51;
  v52 = *(int*)(a2 + 20);
  v53 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v52 + 1;
  *(_BYTE*)(v53 + v52) = 0;
  v54 = *(__int64**)(v5 + 112);
  v55 = *(__int64**)(v5 + 120);
  if (v54 == v55) {
    v56 = 0;
  }
  else {
    v56 = 0;
    do {
      v57 = *(int*)(a2 + 20);
      v58 = *v54++;
      ++v56;
      *(_DWORD*)(a2 + 20) = v57 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v57) = v58;
      v59 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v59 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v59) = BYTE1(v58);
      v60 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v60 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v60) = BYTE2(v58);
      v61 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v61 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v61) = BYTE3(v58);
      v62 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v62 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v62) = BYTE4(v58);
      v63 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v63 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v63) = BYTE5(v58);
      v64 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v64 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v64) = BYTE6(v58);
      v65 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v65 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v65) = HIBYTE(v58);
    } while (v54 != v55);
  }
  v66 = *(_QWORD*)(a2 + 32);
  v67 = *(_QWORD*)(a2 + 40);
  v68 = ((v67 - v66) << 7) - 1;
  if (v67 == v66) {
    v68 = 0;
  }
  v69 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v68 == v69) {
    result = GameRoutine_660f80(a2 + 24);
    v66 = *(_QWORD*)(a2 + 32);
    v69 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v66 + 8 * (v69 >> 10)) + 4 * (v69 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v52 + 1;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v52) = v56;
  v71 = *(_QWORD*)(a2 + 56);
  v70 = *(_QWORD*)(a2 + 64);
  v73 = *(_QWORD*)(a2 + 32);
  v72 = *(_QWORD*)(a2 + 40);
  v7 = v72 == v73;
  v74 = v70 - 1 + v71;
  v75 = v74 >> 10;
  v76 = v74 & 0x3FF;
  v77 = ((v72 - v73) << 7) - 1;
  v78 = *(_QWORD*)(v73 + 8 * v75);
  if (v7) {
    v77 = 0;
  }
  v79 = *(_DWORD*)(v78 + 4 * v76);
  *(_QWORD*)(a2 + 64) = v70 - 1;
  *(_DWORD*)(a2 + 20) = v79;
  if ((unsigned __int64)(v77 - (v70 + v71) + 1) >= 0x800) {
    if (*(_QWORD*)(v72 - 8) != 0) {
      v80 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v80 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v80);
      v72 = *(_QWORD*)(a2 + 40);
      v79 = *(_DWORD*)(a2 + 20);
    }
    *(_QWORD*)(a2 + 40) = v72 - 8;
  }
  v81 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v79 + 1;
  *(_BYTE*)(v81 + v79) = 0;
  v82 = *(__int64**)(v5 + 136);
  v83 = *(__int64**)(v5 + 144);
  if (v82 == v83) {
    v84 = 0;
  }
  else {
    v84 = 0;
    do {
      v85 = *(int*)(a2 + 20);
      v86 = *v82++;
      ++v84;
      *(_DWORD*)(a2 + 20) = v85 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v85) = v86;
      v87 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v87 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v87) = BYTE1(v86);
      v88 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v88 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v88) = BYTE2(v86);
      v89 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v89 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v89) = BYTE3(v86);
      v90 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v90 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v90) = BYTE4(v86);
      v91 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v91 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v91) = BYTE5(v86);
      v92 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v92 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v92) = BYTE6(v86);
      v93 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v93 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v93) = HIBYTE(v86);
    } while (v82 != v83);
  }
  v94 = *(_QWORD*)(a2 + 32);
  v95 = *(_QWORD*)(a2 + 40);
  v96 = ((v95 - v94) << 7) - 1;
  if (v95 == v94) {
    v96 = 0;
  }
  v97 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v96 == v97) {
    result = GameRoutine_660f80(a2 + 24);
    v94 = *(_QWORD*)(a2 + 32);
    v97 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v94 + 8 * (v97 >> 10)) + 4 * (v97 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v79 + 1;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v79) = v84;
  v99 = *(_QWORD*)(a2 + 56);
  v98 = *(_QWORD*)(a2 + 64);
  v101 = *(_QWORD*)(a2 + 32);
  v100 = *(_QWORD*)(a2 + 40);
  v7 = v100 == v101;
  v102 = v98 - 1 + v99;
  v103 = v102 >> 10;
  v104 = v102 & 0x3FF;
  v105 = ((v100 - v101) << 7) - 1;
  v106 = *(_QWORD*)(v101 + 8 * v103);
  if (v7) {
    v105 = 0;
  }
  v107 = *(_DWORD*)(v106 + 4 * v104);
  *(_QWORD*)(a2 + 64) = v98 - 1;
  *(_DWORD*)(a2 + 20) = v107;
  if ((unsigned __int64)(v105 - (v98 + v99) + 1) >= 0x800) {
    if (*(_QWORD*)(v100 - 8) != 0) {
      v108 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v108 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v108);
      v100 = *(_QWORD*)(a2 + 40);
      v107 = *(_DWORD*)(a2 + 20);
    }
    *(_QWORD*)(a2 + 40) = v100 - 8;
  }
  v109 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v107 + 1;
  *(_BYTE*)(v109 + v107) = 0;
  v110 = *(__int64**)(v5 + 160);
  v111 = *(__int64**)(v5 + 168);
  if (v110 == v111) {
    v112 = 0;
  }
  else {
    v112 = 0;
    do {
      v113 = *(int*)(a2 + 20);
      v114 = *v110++;
      ++v112;
      *(_DWORD*)(a2 + 20) = v113 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v113) = v114;
      v115 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v115 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v115) = BYTE1(v114);
      v116 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v116 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v116) = BYTE2(v114);
      v117 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v117 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v117) = BYTE3(v114);
      v118 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v118 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v118) = BYTE4(v114);
      v119 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v119 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v119) = BYTE5(v114);
      v120 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v120 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v120) = BYTE6(v114);
      v121 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v121 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v121) = HIBYTE(v114);
    } while (v110 != v111);
  }
  v122 = *(_QWORD*)(a2 + 32);
  v123 = *(_QWORD*)(a2 + 40);
  v124 = ((v123 - v122) << 7) - 1;
  if (v123 == v122) {
    v124 = 0;
  }
  v125 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v124 == v125) {
    result = GameRoutine_660f80(a2 + 24);
    v122 = *(_QWORD*)(a2 + 32);
    v125 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v122 + 8 * (v125 >> 10)) + 4 * (v125 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v107 + 1;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v107) = v112;
  v127 = *(_QWORD*)(a2 + 56);
  v126 = *(_QWORD*)(a2 + 64);
  v129 = *(_QWORD*)(a2 + 32);
  v128 = *(_QWORD*)(a2 + 40);
  v130 = v126 - 1;
  v7 = v128 == v129;
  v131 = v126 + v127;
  v132 = ((v128 - v129) << 7) - 1;
  v133 = *(_QWORD*)(v129 + 8 * ((unsigned __int64)(v130 + v127) >> 10));
  if (v7) {
    v132 = 0;
  }
  v134 = *(_DWORD*)(v133 + 4 * ((v130 + v127) & 0x3FF));
  *(_QWORD*)(a2 + 64) = v130;
  *(_DWORD*)(a2 + 20) = v134;
  if ((unsigned __int64)(v132 - v131 + 1) >= 0x800) {
    if (*(_QWORD*)(v128 - 8) != 0) {
      v135 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v135 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v135);
      v128 = *(_QWORD*)(a2 + 40);
      v134 = *(_DWORD*)(a2 + 20);
    }
    *(_QWORD*)(a2 + 40) = v128 - 8;
  }
  v136 = *(_WORD*)(v5 + 208);
  *(_DWORD*)(a2 + 20) = v134 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v134) = v136;
  v137 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v137 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v137) = HIBYTE(v136);
  v138 = *(int*)(a2 + 20);
  LOBYTE(v136) = *(_BYTE*)(v5 + 210);
  *(_DWORD*)(a2 + 20) = v138 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v138) = v136;
  v139 = *(int*)(a2 + 20);
  LOBYTE(v136) = *(_BYTE*)(v5 + 211);
  *(_DWORD*)(a2 + 20) = v139 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v139) = v136;
  v140 = *(int*)(a2 + 20);
  v141 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v140 + 1;
  *(_BYTE*)(v141 + v140) = 0;
  v142 = *(__int64**)(v5 + 184);
  v143 = *(__int64**)(v5 + 192);
  if (v142 == v143) {
    v144 = 0;
  }
  else {
    v144 = 0;
    do {
      v145 = *(int*)(a2 + 20);
      v146 = *v142++;
      ++v144;
      *(_DWORD*)(a2 + 20) = v145 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v145) = v146;
      v147 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v147 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v147) = BYTE1(v146);
      v148 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v148 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v148) = BYTE2(v146);
      v149 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v149 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v149) = BYTE3(v146);
      v150 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v150 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v150) = BYTE4(v146);
      v151 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v151 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v151) = BYTE5(v146);
      v152 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v152 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v152) = BYTE6(v146);
      v153 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v153 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v153) = HIBYTE(v146);
    } while (v142 != v143);
  }
  v154 = *(_QWORD*)(a2 + 32);
  v155 = *(_QWORD*)(a2 + 40);
  v156 = ((v155 - v154) << 7) - 1;
  if (v155 == v154) {
    v156 = 0;
  }
  v157 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  if (v156 == v157) {
    result = GameRoutine_660f80(a2 + 24);
    v154 = *(_QWORD*)(a2 + 32);
    v157 = *(_QWORD*)(a2 + 64) + *(_QWORD*)(a2 + 56);
  }
  *(_DWORD*)(*(_QWORD*)(v154 + 8 * (v157 >> 10)) + 4 * (v157 & 0x3FF)) =
      *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v140 + 1;
  ++*(_QWORD*)(a2 + 64);
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v140) = v144;
  v159 = *(_QWORD*)(a2 + 56);
  v158 = *(_QWORD*)(a2 + 64);
  v161 = *(_QWORD*)(a2 + 32);
  v160 = *(_QWORD*)(a2 + 40);
  v7 = v160 == v161;
  v162 = v158 - 1 + v159;
  v163 = v162 >> 10;
  v164 = v162 & 0x3FF;
  v165 = ((v160 - v161) << 7) - 1;
  v166 = *(_QWORD*)(v161 + 8 * v163);
  if (v7) {
    v165 = 0;
  }
  v167 = *(_DWORD*)(v166 + 4 * v164);
  *(_QWORD*)(a2 + 64) = v158 - 1;
  *(_DWORD*)(a2 + 20) = v167;
  if ((unsigned __int64)(v165 - (v158 + v159) + 1) >= 0x800) {
    if (*(_QWORD*)(v160 - 8) != 0) {
      v168 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v168 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v168);
      v160 = *(_QWORD*)(a2 + 40);
    }
    *(_QWORD*)(a2 + 40) = v160 - 8;
  }
  return result;
}

__int64 GameCalendar_Unknown9(__int64 a1, __int64 a2, int a3)
{
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64* v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  unsigned __int64* v62;
  __int64 v63;
  char* v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  char* v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  int v77;
  __int64 v78;
  __int64 v79;
  __int16 v80;
  __int16 v81;
  char v82;
  __int64 v83;
  __int64 v84;
  int v85;
  _QWORD* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  unsigned __int64 v98;
  unsigned __int64* v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int16 v110;
  char v111;
  char v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  unsigned __int64* v125;
  __int64 v126;
  char* v127;
  __int64 v128;
  unsigned __int64 v129;
  __int64 v130;
  unsigned __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  char* v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  int v138;
  __int64* v139;

  if (game_GameModeData_instance_ != 0) {
    v6 = *(_QWORD*)(game_GameModeData_instance_ + 24);
  }
  else {
    v6 = 0;
  }
  result = GameRoutine_12db540(a1, v6);
  v8 = *(int*)(a2 + 20);
  v9 = *(_QWORD*)(a2 + 8);
  v10 = v8 + 1;
  *(_DWORD*)(a2 + 20) = v8 + 1;
  v11 = *(unsigned __int8*)(v9 + v8);
  if (*(_BYTE*)(v9 + v8) != 0) {
    do {
      v12 = *(int*)(a2 + 20);
      v13 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v12 + 1;
      v14 = *(unsigned __int8*)(v13 + v12);
      *(_DWORD*)(a2 + 20) = v12 + 2;
      v15 = v14 | (*(unsigned __int8*)(v13 + v12 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v12 + 3;
      v16 = *(unsigned __int8*)(v13 + v12 + 2);
      *(_DWORD*)(a2 + 20) = v12 + 4;
      v17 = *(unsigned __int8*)(v13 + v12 + 3);
      *(_DWORD*)(a2 + 20) = v12 + 5;
      result =
          GameRoutine_12dd380(a1, v15, v16, v17, *(_BYTE*)(v13 + v12 + 4) != 0);
      --v11;
    } while (v11 != 0);
    v10 = *(_DWORD*)(a2 + 20);
    v9 = *(_QWORD*)(a2 + 8);
  }
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(a1 + 107) = *(_BYTE*)(v9 + v10);
  *(_QWORD*)(a1 + 120) = *(_QWORD*)(a1 + 112);
  if (a3 <= 1) {
    *(_QWORD*)(a1 + 144) = *(_QWORD*)(a1 + 136);
    *(_QWORD*)(a1 + 168) = *(_QWORD*)(a1 + 160);
    goto LABEL_73;
  }
  v18 = *(int*)(a2 + 20);
  v138 = a3;
  *(_DWORD*)(a2 + 20) = v18 + 1;
  v19 = *(_QWORD*)(a2 + 8);
  v20 = *(unsigned __int8*)(v19 + v18);
  if (*(_BYTE*)(v19 + v18) != 0) {
    v21 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v23 = *(int*)(a2 + 20);
      v24 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v23 + 1;
      v25 = *(unsigned __int8*)(v24 + v23);
      *(_DWORD*)(a2 + 20) = v23 + 2;
      v26 = v25 | ((unsigned __int64)*(unsigned __int8*)(v24 + v23 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v23 + 3;
      v27 = v26 | ((unsigned __int64)*(unsigned __int8*)(v24 + v23 + 2) << 16);
      *(_DWORD*)(a2 + 20) = v23 + 4;
      v28 = v27 | ((unsigned __int64)*(unsigned __int8*)(v24 + v23 + 3) << 24);
      *(_DWORD*)(a2 + 20) = v23 + 5;
      v29 = v28 | ((unsigned __int64)*(unsigned __int8*)(v24 + v23 + 4) << 32);
      *(_DWORD*)(a2 + 20) = v23 + 6;
      v30 = v29 | ((unsigned __int64)*(unsigned __int8*)(v24 + v23 + 5) << 40);
      *(_DWORD*)(a2 + 20) = v23 + 7;
      v31 = *(unsigned __int8*)(v24 + v23 + 6);
      *(_DWORD*)(a2 + 20) = v23 + 8;
      v32 = v30 | (v31 << 48) |
            ((unsigned __int64)*(unsigned __int8*)(v24 + v23 + 7) << 56);
      v34 = *(unsigned __int64**)(a1 + 120);
      v33 = *(_QWORD*)(a1 + 128);
      if ((unsigned __int64)v34 < v33) {
        *v34 = v32;
        v22 = (__int64)(v34 + 1);
      }
      else {
        v35 = *(_QWORD*)(a1 + 112);
        v36 = (char*)v34 - v35;
        v37 = ((__int64)v34 - v35) >> 3;
        v38 = v37 + 1;
        if ((unsigned __int64)(v37 + 1) >> 61 != 0) {
        LABEL_97:
          GameRoutine_65c760(result);
        }
        v39 = v33 - v35;
        if (v39 >> 2 > v38) {
          v38 = v39 >> 2;
        }
        if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
          v40 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v40 = v38;
        }
        if (v40 != 0) {
          if (v40 >> 61 != 0) {
          LABEL_98:
            GameRoutine_60a210(result);
          }
          v41 = fw_memory_HeapManager_Allocate(*v21, 8 * v40, 16, 0);
        }
        else {
          v41 = 0;
        }
        v42 = v41 + 8 * v40;
        v43 = (char*)v34 - v35;
        v44 = (__int64)&v36[v41 + -8 * v37];
        *(_QWORD*)&v36[v41] = v32;
        v22 = (__int64)&v36[v41 + 8];
        result = memcpy(v44, v35, v43);
        *(_QWORD*)(a1 + 112) = v44;
        *(_QWORD*)(a1 + 120) = v22;
        *(_QWORD*)(a1 + 128) = v42;
        if (v35 != 0) {
          v45 = 128;
          if (*(_QWORD*)(*v21 + 200LL) == 0) {
            v45 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v21 + v45);
        }
      }
      --v20;
      *(_QWORD*)(a1 + 120) = v22;
    } while (v20 != 0);
  }
  *(_QWORD*)(a1 + 144) = *(_QWORD*)(a1 + 136);
  if (v138 < 6) {
  LABEL_48:
    v139 = (__int64*)(a1 + 160);
    *(_QWORD*)(a1 + 168) = *(_QWORD*)(a1 + 160);
    v74 = (__int64*)(a1 + 168);
    if (v138 != 2) {
      goto LABEL_51;
    }
  LABEL_73:
    if ((int)(-373475417 * ((*(_QWORD*)(a1 + 24) - *(_QWORD*)(a1 + 16)) >> 4)) <
        1) {
      v110 = 0;
      v111 = 0;
      v112 = 0;
    }
    else {
      v109 = game_gmap_GmapClock_kDefaultTime_ptr;
      if (game_gmap_GmapClock_instance_ != 0) {
        v109 = game_gmap_GmapClock_instance_ + 8;
      }
      v110 = *(_WORD*)v109;
      v111 = *(_BYTE*)(v109 + 2);
      v112 = *(_BYTE*)(v109 + 4);
    }
    *(_WORD*)(a1 + 208) = v110;
    v137 = *(_QWORD*)(a1 + 184);
    *(_BYTE*)(a1 + 210) = v111;
    *(_BYTE*)(a1 + 211) = v112;
    *(_QWORD*)(a1 + 192) = v137;
    return result;
  }
  v46 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v46 + 1;
  v47 = *(_QWORD*)(a2 + 8);
  v48 = *(unsigned __int8*)(v47 + v46);
  if (*(_BYTE*)(v47 + v46) != 0) {
    v49 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v51 = *(int*)(a2 + 20);
      v52 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v51 + 1;
      v53 = *(unsigned __int8*)(v52 + v51);
      *(_DWORD*)(a2 + 20) = v51 + 2;
      v54 = v53 | ((unsigned __int64)*(unsigned __int8*)(v52 + v51 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v51 + 3;
      v55 = v54 | ((unsigned __int64)*(unsigned __int8*)(v52 + v51 + 2) << 16);
      *(_DWORD*)(a2 + 20) = v51 + 4;
      v56 = v55 | ((unsigned __int64)*(unsigned __int8*)(v52 + v51 + 3) << 24);
      *(_DWORD*)(a2 + 20) = v51 + 5;
      v57 = v56 | ((unsigned __int64)*(unsigned __int8*)(v52 + v51 + 4) << 32);
      *(_DWORD*)(a2 + 20) = v51 + 6;
      v58 = v57 | ((unsigned __int64)*(unsigned __int8*)(v52 + v51 + 5) << 40);
      *(_DWORD*)(a2 + 20) = v51 + 7;
      v59 = *(unsigned __int8*)(v52 + v51 + 6);
      *(_DWORD*)(a2 + 20) = v51 + 8;
      v60 = v58 | (v59 << 48) |
            ((unsigned __int64)*(unsigned __int8*)(v52 + v51 + 7) << 56);
      v62 = *(unsigned __int64**)(a1 + 144);
      v61 = *(_QWORD*)(a1 + 152);
      if ((unsigned __int64)v62 < v61) {
        *v62 = v60;
        v50 = (__int64)(v62 + 1);
      }
      else {
        v63 = *(_QWORD*)(a1 + 136);
        v64 = (char*)v62 - v63;
        v65 = ((__int64)v62 - v63) >> 3;
        v66 = v65 + 1;
        if ((unsigned __int64)(v65 + 1) >> 61 != 0) {
          goto LABEL_97;
        }
        v67 = v61 - v63;
        if (v67 >> 2 > v66) {
          v66 = v67 >> 2;
        }
        if ((unsigned __int64)v67 >= 0x7FFFFFFFFFFFFFF8LL) {
          v68 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v68 = v66;
        }
        if (v68 != 0) {
          if (v68 >> 61 != 0) {
            goto LABEL_98;
          }
          v69 = fw_memory_HeapManager_Allocate(*v49, 8 * v68, 16, 0);
        }
        else {
          v69 = 0;
        }
        v70 = v69 + 8 * v68;
        v71 = (char*)v62 - v63;
        v72 = (__int64)&v64[v69 + -8 * v65];
        *(_QWORD*)&v64[v69] = v60;
        v50 = (__int64)&v64[v69 + 8];
        result = memcpy(v72, v63, v71);
        *(_QWORD*)(a1 + 136) = v72;
        *(_QWORD*)(a1 + 144) = v50;
        *(_QWORD*)(a1 + 152) = v70;
        if (v63 != 0) {
          v73 = 128;
          if (*(_QWORD*)(*v49 + 200LL) == 0) {
            v73 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v49 + v73);
        }
      }
      --v48;
      *(_QWORD*)(a1 + 144) = v50;
      if (v48 == 0) {
        goto LABEL_48;
      }
    }
  }
  v139 = (__int64*)(a1 + 160);
  *(_QWORD*)(a1 + 168) = *(_QWORD*)(a1 + 160);
  v74 = (__int64*)(a1 + 168);
LABEL_51:
  v75 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v75 + 1;
  v76 = *(_QWORD*)(a2 + 8);
  v77 = *(unsigned __int8*)(v76 + v75);
  if (*(_BYTE*)(v76 + v75) != 0) {
    do {
      v88 = *(int*)(a2 + 20);
      v89 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v88 + 1;
      v90 = *(unsigned __int8*)(v89 + v88);
      *(_DWORD*)(a2 + 20) = v88 + 2;
      v91 = v90 | ((unsigned __int64)*(unsigned __int8*)(v89 + v88 + 1) << 8);
      *(_DWORD*)(a2 + 20) = v88 + 3;
      v92 = v91 | ((unsigned __int64)*(unsigned __int8*)(v89 + v88 + 2) << 16);
      *(_DWORD*)(a2 + 20) = v88 + 4;
      v93 = v92 | ((unsigned __int64)*(unsigned __int8*)(v89 + v88 + 3) << 24);
      *(_DWORD*)(a2 + 20) = v88 + 5;
      v94 = v93 | ((unsigned __int64)*(unsigned __int8*)(v89 + v88 + 4) << 32);
      *(_DWORD*)(a2 + 20) = v88 + 6;
      v95 = v94 | ((unsigned __int64)*(unsigned __int8*)(v89 + v88 + 5) << 40);
      *(_DWORD*)(a2 + 20) = v88 + 7;
      v96 = *(unsigned __int8*)(v89 + v88 + 6);
      *(_DWORD*)(a2 + 20) = v88 + 8;
      v97 = v95 | (v96 << 48) |
            ((unsigned __int64)*(unsigned __int8*)(v89 + v88 + 7) << 56);
      v99 = *(unsigned __int64**)(a1 + 168);
      v98 = *(_QWORD*)(a1 + 176);
      if ((unsigned __int64)v99 < v98) {
        *v99 = v97;
        v87 = (__int64)(v99 + 1);
      }
      else {
        v100 = *v139;
        v101 = (__int64)v99 - *v139;
        v102 = (v101 >> 3) + 1;
        if (v102 >> 61 != 0) {
          goto LABEL_97;
        }
        v103 = v98 - v100;
        if (v103 >> 2 > v102) {
          v102 = v103 >> 2;
        }
        if ((unsigned __int64)v103 >= 0x7FFFFFFFFFFFFFF8LL) {
          v104 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v104 = v102;
        }
        if (v104 != 0) {
          if (v104 >> 61 != 0) {
            goto LABEL_98;
          }
          v105 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v104, 16, 0);
        }
        else {
          v105 = 0;
        }
        v106 = v105 + 8 * v104;
        v107 = v105 + v101 - 8 * (v101 >> 3);
        *(_QWORD*)(v105 + v101) = v97;
        v87 = v105 + v101 + 8;
        result = memcpy(v107, v100, v101);
        *(_QWORD*)(a1 + 160) = v107;
        *(_QWORD*)(a1 + 168) = v87;
        *(_QWORD*)(a1 + 176) = v106;
        if (v100 != 0) {
          v108 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v108 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v108);
        }
      }
      --v77;
      *v74 = v87;
    } while (v77 != 0);
  }
  if (v138 <= 3) {
    goto LABEL_73;
  }
  v78 = *(int*)(a2 + 20);
  v79 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v78 + 1;
  v80 = *(unsigned __int8*)(v79 + v78);
  *(_DWORD*)(a2 + 20) = v78 + 2;
  v81 = v80 | (*(unsigned __int8*)(v79 + v78 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v78 + 3;
  v82 = *(_BYTE*)(v79 + v78 + 2);
  *(_DWORD*)(a2 + 20) = v78 + 4;
  LOBYTE(v78) = *(_BYTE*)(v79 + v78 + 3);
  *(_WORD*)(a1 + 208) = v81;
  *(_BYTE*)(a1 + 210) = v82;
  *(_BYTE*)(a1 + 211) = v78;
  *(_QWORD*)(a1 + 192) = *(_QWORD*)(a1 + 184);
  if (v138 != 4) {
    v83 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v83 + 1;
    v84 = *(_QWORD*)(a2 + 8);
    v85 = *(unsigned __int8*)(v84 + v83);
    if (*(_BYTE*)(v84 + v83) != 0) {
      v86 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      do {
        v114 = *(int*)(a2 + 20);
        v115 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v114 + 1;
        v116 = *(unsigned __int8*)(v115 + v114);
        *(_DWORD*)(a2 + 20) = v114 + 2;
        v117 = v116 |
               ((unsigned __int64)*(unsigned __int8*)(v115 + v114 + 1) << 8);
        *(_DWORD*)(a2 + 20) = v114 + 3;
        v118 = v117 |
               ((unsigned __int64)*(unsigned __int8*)(v115 + v114 + 2) << 16);
        *(_DWORD*)(a2 + 20) = v114 + 4;
        v119 = v118 |
               ((unsigned __int64)*(unsigned __int8*)(v115 + v114 + 3) << 24);
        *(_DWORD*)(a2 + 20) = v114 + 5;
        v120 = v119 |
               ((unsigned __int64)*(unsigned __int8*)(v115 + v114 + 4) << 32);
        *(_DWORD*)(a2 + 20) = v114 + 6;
        v121 = v120 |
               ((unsigned __int64)*(unsigned __int8*)(v115 + v114 + 5) << 40);
        *(_DWORD*)(a2 + 20) = v114 + 7;
        v122 = *(unsigned __int8*)(v115 + v114 + 6);
        *(_DWORD*)(a2 + 20) = v114 + 8;
        v123 = v121 | (v122 << 48) |
               ((unsigned __int64)*(unsigned __int8*)(v115 + v114 + 7) << 56);
        v125 = *(unsigned __int64**)(a1 + 192);
        v124 = *(_QWORD*)(a1 + 200);
        if ((unsigned __int64)v125 < v124) {
          *v125 = v123;
          v113 = (__int64)(v125 + 1);
        }
        else {
          v126 = *(_QWORD*)(a1 + 184);
          v127 = (char*)v125 - v126;
          v128 = ((__int64)v125 - v126) >> 3;
          v129 = v128 + 1;
          if ((unsigned __int64)(v128 + 1) >> 61 != 0) {
            goto LABEL_97;
          }
          v130 = v124 - v126;
          if (v130 >> 2 > v129) {
            v129 = v130 >> 2;
          }
          if ((unsigned __int64)v130 >= 0x7FFFFFFFFFFFFFF8LL) {
            v131 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v131 = v129;
          }
          if (v131 != 0) {
            if (v131 >> 61 != 0) {
              goto LABEL_98;
            }
            v132 = fw_memory_HeapManager_Allocate(*v86, 8 * v131, 16, 0);
          }
          else {
            v132 = 0;
          }
          v133 = v132 + 8 * v131;
          v134 = (char*)v125 - v126;
          v135 = (__int64)&v127[v132 + -8 * v128];
          *(_QWORD*)&v127[v132] = v123;
          v113 = (__int64)&v127[v132 + 8];
          result = memcpy(v135, v126, v134);
          *(_QWORD*)(a1 + 184) = v135;
          *(_QWORD*)(a1 + 192) = v113;
          *(_QWORD*)(a1 + 200) = v133;
          if (v126 != 0) {
            v136 = 128;
            if (*(_QWORD*)(*v86 + 200LL) == 0) {
              v136 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*v86 + v136);
          }
        }
        --v85;
        *(_QWORD*)(a1 + 192) = v113;
      } while (v85 != 0);
    }
  }
  return result;
}

_QWORD* GameCalendar_12e0c20(_QWORD* result)
{
  int v1;
  _QWORD* v2;
  unsigned __int64 v3;
  bool v4;
  int v6;
  void* v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[2];

  v1 = *(unsigned __int8*)(result[19] + 16LL * *((int*)result + 44));
  if (v1 == 5) {
    v7 = &GameData_1a92577;
    return (_QWORD*)Tutorial_f9a740(result, v7);
  }
  if (v1 == 6) {
    v2 = result;
    v3 = 0xD37A6F4DE9BD37A7LL *
         ((__int64)(*(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 24LL) -
                    *(_QWORD*)(*(_QWORD*)GameData_212c6c0[0] + 16LL)) >>
          4);
    v4 = v3 < 2 || (int)v3 < -1;
    if (v4 || GameData_21c9700 == 0) {
      v6 = 0;
    }
    else {
      v10[1] = &GameData_1a95031;
      v10[0] = game_HashString(&GameData_1a95031);
      v8 = SpotMgr_132ffa0(v10);
      if (game_GameModeData_instance_ != 0) {
        v9 = *(_QWORD*)(game_GameModeData_instance_ + 24);
        if (v9 != 0) {
          v9 = GameRoutine_88cee0();
          if (v9 != 0) {
            v9 = game_gmap_SpotMgr_FindSpot(v9);
          }
        }
      }
      else {
        v9 = 0;
      }
      v6 = v8 == v9 ? 1 : 2;
    }
    result = GameRoutine_12dd7e0(v6);
    if (result != nullptr) {
      v7 = (void*)result[1];
      result = v2;
      return (_QWORD*)Tutorial_f9a740(result, v7);
    }
  }
  return result;
}

__int64 GameCalendar_12e0d40(__int64 result)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(int*)(result + 176) + 1LL;
  v3 = *(_QWORD*)(result + 152);
  v2 = *(_QWORD*)(result + 160);
  *(_DWORD*)(result + 176) = v1;
  v4 = v2 - v3;
  v5 = *(_QWORD*)(result + 8);
  if (v1 < v4 >> 4 && v5 != 0) {
    while (1) {
      if (*(_BYTE*)v5 == 2) {
        if (*(_DWORD*)(v5 + 32) == 0) {
          *(_QWORD*)(result + 16) = v5;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v5 == 0) {
        return result;
      }
      v5 += 64;
    }
  }
  return result;
}

__int64 GameCalendar_12e0da0(__int64 result)
{
  unsigned __int8* v1;
  unsigned __int8* v2;
  unsigned int v3;
  _QWORD* v4;
  char* v5;
  char* v6;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  _QWORD* v12;
  unsigned __int8** v13;
  unsigned __int8** v14;
  _QWORD* v15;
  char* v16;
  char* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  _QWORD* v23;
  __int64*** v24;
  __int64*** v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int8* v42;
  unsigned int v43;
  __int64* v44;
  _BYTE* v45;
  char* v46;
  char* v47;
  __int64 v48;
  char* v49;
  unsigned __int64 v50;
  __int64 v51;
  char* v52;
  bool v53;
  unsigned __int64 v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  char* v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  char* v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  char* v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  char* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned __int8* v90;

  v2 = *(unsigned __int8**)(result + 152);
  v1 = *(unsigned __int8**)(result + 160);
  v90 = v1;
  while (v2 != v1) {
    v3 = *v2;
    if (v3 > 3) {
      if (*v2 > 5u) {
        if (v3 == 6) {
          *(_BYTE*)(GameData_21c9650 + 107) |= 2u;
          goto LABEL_3;
        }
        if (v3 != 7) {
          goto LABEL_3;
        }
        v12 = (_QWORD*)GameData_21c9650;
        v13 = *(unsigned __int8***)(GameData_21c9650 + 64);
        v14 = *(unsigned __int8***)(GameData_21c9650 + 72);
        while (1) {
          if (v13 == v14) {
            goto LABEL_3;
          }
          v42 = *v13;
          result = GameRoutine_12da4a0(*v13);
          if ((result & 1) == 0) {
            goto LABEL_68;
          }
          v43 = *v42;
          if (v43 > 0xC ||
              ((1 << v43) & 0x1F9E) == 0 && (v43 != 5 || (v42[1] & 1) != 0)) {
            goto LABEL_68;
          }
          v44 = *((__int64**)v42 + 1);
          if (v44 == nullptr) {
            goto LABEL_68;
          }
          v45 = (_BYTE*)v44[36];
          if (v45 == nullptr || *v45 == 0) {
            goto LABEL_68;
          }
          v46 = (char*)v12[23];
          v47 = (char*)v12[24];
          v48 = *v44;
          v49 = v46;
          if (v46 == v47) {
            goto LABEL_95;
          }
          v50 = v47 - v46 - 8;
          v49 = (char*)v12[23];
          if ((~(_BYTE)v50 & 0x18) != 0) {
            break;
          }
        LABEL_81:
          if (v50 < 0x18) {
            goto LABEL_96;
          }
          v49 += 16;
          while (1) {
            if (*((_QWORD*)v49 - 2) == v48) {
              if (v49 - 16 == v47) {
                goto LABEL_96;
              }
              goto LABEL_68;
            }
            if (*((_QWORD*)v49 - 1) == v48) {
              v49 -= 8;
              goto LABEL_95;
            }
            if (*(_QWORD*)v49 == v48) {
              goto LABEL_95;
            }
            if (*((_QWORD*)v49 + 1) == v48) {
              break;
            }
            v52 = v49 + 16;
            v49 += 32;
            if (v52 == v47) {
              goto LABEL_96;
            }
          }
          if (v49 + 8 != v47) {
            goto LABEL_68;
          }
        LABEL_96:
          v53 = v43 - 1 >= 0xC;
          v54 = v12[25];
          if (v53) {
            v55 = 0;
          }
          else {
            v55 = v48;
          }
          if ((unsigned __int64)v47 < v54) {
            *(_QWORD*)v47 = v55;
            v41 = (__int64)(v47 + 8);
            goto LABEL_67;
          }
          v56 = (char*)(v47 - v46);
          v57 = (v47 - v46) >> 3;
          v58 = v57 + 1;
          if ((unsigned __int64)(v57 + 1) >> 61 != 0) {
            goto LABEL_163;
          }
          v59 = v54 - (_QWORD)v46;
          if (v59 >> 2 > v58) {
            v58 = v59 >> 2;
          }
          if ((unsigned __int64)v59 >= 0x7FFFFFFFFFFFFFF8LL) {
            v60 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v60 = v58;
          }
          if (v60 != 0) {
            if (v60 >> 61 != 0) {
              goto LABEL_164;
            }
            v61 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v60, 16, 0);
          }
          else {
            v61 = 0;
          }
          v62 = v61 + 8 * v60;
          v63 = (char*)(v47 - v46);
          v64 = (__int64)&v56[v61 + -8 * v57];
          *(_QWORD*)&v56[v61] = v55;
          v41 = (__int64)&v56[v61 + 8];
          result = memcpy(v64, v46, v63);
          v12[23] = v64;
          v12[24] = v41;
          v12[25] = v62;
          if (v46 != nullptr) {
            v65 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v65 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v65);
          }
        LABEL_67:
          v12[24] = v41;
        LABEL_68:
          ++v13;
        }
        v51 = ((unsigned __int8)((unsigned int)v50 >> 3) + 1) & 3;
        v49 = (char*)v12[23];
        while (*(_QWORD*)v49 != v48) {
          v49 += 8;
          if (--v51 == 0) {
            goto LABEL_81;
          }
        }
      LABEL_95:
        if (v49 == v47) {
          goto LABEL_96;
        }
        goto LABEL_68;
      }
      if (v3 != 4) {
        if (v3 == 5) {
          *(_DWORD*)(GameData_21c9650 + 208) =
              *(_DWORD*)(*((_QWORD*)v2 + 1) + 4LL);
        }
        goto LABEL_3;
      }
      v15 = (_QWORD*)GameData_21c9650;
      v16 = *(char**)(GameData_21c9650 + 160);
      v17 = *(char**)(GameData_21c9650 + 168);
      v18 = ***((_QWORD***)v2 + 1);
      v19 = v16;
      if (v16 == v17) {
      LABEL_121:
        if (v19 != v17) {
          goto LABEL_3;
        }
      }
      else {
        v20 = v17 - v16 - 8;
        v19 = *(char**)(GameData_21c9650 + 160);
        if ((~(_BYTE)v20 & 0x18) != 0) {
          v21 = ((unsigned __int8)((unsigned int)v20 >> 3) + 1) & 3;
          v19 = *(char**)(GameData_21c9650 + 160);
          while (*(_QWORD*)v19 != v18) {
            v19 += 8;
            if (--v21 == 0) {
              goto LABEL_36;
            }
          }
          goto LABEL_121;
        }
      LABEL_36:
        if (v20 >= 0x18) {
          v19 += 16;
          while (*((_QWORD*)v19 - 2) != v18) {
            if (*((_QWORD*)v19 - 1) == v18) {
              v19 -= 8;
              goto LABEL_121;
            }
            if (*(_QWORD*)v19 == v18) {
              goto LABEL_121;
            }
            if (*((_QWORD*)v19 + 1) == v18) {
              if (v19 + 8 != v17) {
                goto LABEL_3;
              }
              goto LABEL_122;
            }
            v22 = v19 + 16;
            v19 += 32;
            if (v22 == v17) {
              goto LABEL_122;
            }
          }
          if (v19 - 16 != v17) {
            goto LABEL_3;
          }
        }
      }
    LABEL_122:
      v66 = *(_QWORD*)(GameData_21c9650 + 176);
      if ((unsigned __int64)v17 < v66) {
        *(_QWORD*)v17 = v18;
        v15[21] = v17 + 8;
        goto LABEL_3;
      }
      v67 = (char*)(v17 - v16);
      v68 = (v17 - v16) >> 3;
      v69 = v68 + 1;
      if ((unsigned __int64)(v68 + 1) >> 61 == 0) {
        v70 = v66 - (_QWORD)v16;
        if (v70 >> 2 > v69) {
          v69 = v70 >> 2;
        }
        if ((unsigned __int64)v70 >= 0x7FFFFFFFFFFFFFF8LL) {
          v71 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v71 = v69;
        }
        if (v71 != 0) {
          if (v71 >> 61 != 0) {
            goto LABEL_164;
          }
          v72 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v71, 16, 0);
        }
        else {
          v72 = 0;
        }
        v73 = v72 + 8 * v71;
        v74 = (char*)(v17 - v16);
        v75 = (__int64)&v67[v72 + -8 * v68];
        *(_QWORD*)&v67[v72] = v18;
        v76 = (__int64)&v67[v72 + 8];
        result = memcpy(v75, v16, v74);
        v15[20] = v75;
        v15[21] = v76;
        v15[22] = v73;
        if (v16 != nullptr) {
          v77 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v77 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v77);
        }
        v15[21] = v76;
        goto LABEL_3;
      }
    LABEL_163:
      GameRoutine_65c760(result);
    }
    if (*v2 <= 1u) {
      if (*v2 != 0) {
        *(_BYTE*)(GameData_21c9650 + 107) |= 1u;
      }
      else {
        *(_BYTE*)(*((_QWORD*)v2 + 1) + 4LL) = 1;
      }
      goto LABEL_3;
    }
    if (v3 == 2) {
      v23 = (_QWORD*)GameData_21c9650;
      v24 = *(__int64****)(GameData_21c9650 + 40);
      v25 = *(__int64****)(GameData_21c9650 + 48);
      while (1) {
        if (v24 == v25) {
          goto LABEL_3;
        }
        result = GameRoutine_12dda00((__int64)v23, v24);
        if ((result & 1) != 0) {
          v27 = ***v24;
          v29 = (__int64*)v23[15];
          v28 = v23[16];
          if ((unsigned __int64)v29 < v28) {
            *v29 = v27;
            v26 = (__int64)(v29 + 1);
          }
          else {
            v30 = v23[14];
            v31 = (char*)v29 - v30;
            v32 = ((__int64)v29 - v30) >> 3;
            v33 = v32 + 1;
            if ((unsigned __int64)(v32 + 1) >> 61 != 0) {
              goto LABEL_163;
            }
            v34 = v28 - v30;
            if (v34 >> 2 > v33) {
              v33 = v34 >> 2;
            }
            if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
              v35 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v35 = v33;
            }
            if (v35 != 0) {
              if (v35 >> 61 != 0) {
                goto LABEL_164;
              }
              v36 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v35, 16, 0);
            }
            else {
              v36 = 0;
            }
            v37 = v36 + 8 * v35;
            v38 = (char*)v29 - v30;
            v39 = (__int64)&v31[v36 + -8 * v32];
            *(_QWORD*)&v31[v36] = v27;
            v26 = (__int64)&v31[v36 + 8];
            result = memcpy(v39, v30, v38);
            v23[14] = v39;
            v23[15] = v26;
            v23[16] = v37;
            if (v30 != 0) {
              v40 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v40 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
            }
          }
          v23[15] = v26;
        }
        ++v24;
      }
    }
    if (v3 != 3) {
      goto LABEL_3;
    }
    v4 = (_QWORD*)GameData_21c9650;
    v5 = *(char**)(GameData_21c9650 + 136);
    v6 = *(char**)(GameData_21c9650 + 144);
    v7 = ****((_QWORD****)v2 + 1);
    v8 = v5;
    if (v5 == v6) {
      goto LABEL_140;
    }
    v9 = v6 - v5 - 8;
    v8 = *(char**)(GameData_21c9650 + 136);
    if ((~(_BYTE)v9 & 0x18) != 0) {
      v10 = ((unsigned __int8)((unsigned int)v9 >> 3) + 1) & 3;
      v8 = *(char**)(GameData_21c9650 + 136);
      while (*(_QWORD*)v8 != v7) {
        v8 += 8;
        if (--v10 == 0) {
          goto LABEL_20;
        }
      }
    LABEL_140:
      if (v8 == v6) {
        goto LABEL_141;
      }
      goto LABEL_3;
    }
  LABEL_20:
    if (v9 < 0x18) {
      goto LABEL_141;
    }
    v8 += 16;
    while (1) {
      if (*((_QWORD*)v8 - 2) == v7) {
        if (v8 - 16 == v6) {
          goto LABEL_141;
        }
        goto LABEL_3;
      }
      if (*((_QWORD*)v8 - 1) == v7) {
        v8 -= 8;
        goto LABEL_140;
      }
      if (*(_QWORD*)v8 == v7) {
        goto LABEL_140;
      }
      if (*((_QWORD*)v8 + 1) == v7) {
        break;
      }
      v11 = v8 + 16;
      v8 += 32;
      if (v11 == v6) {
        goto LABEL_141;
      }
    }
    if (v8 + 8 != v6) {
      goto LABEL_3;
    }
  LABEL_141:
    v78 = *(_QWORD*)(GameData_21c9650 + 152);
    if ((unsigned __int64)v6 < v78) {
      *(_QWORD*)v6 = v7;
      v4[18] = v6 + 8;
      goto LABEL_3;
    }
    v79 = (char*)(v6 - v5);
    v80 = (v6 - v5) >> 3;
    v81 = v80 + 1;
    if ((unsigned __int64)(v80 + 1) >> 61 != 0) {
      goto LABEL_163;
    }
    v82 = v78 - (_QWORD)v5;
    if (v82 >> 2 > v81) {
      v81 = v82 >> 2;
    }
    if ((unsigned __int64)v82 >= 0x7FFFFFFFFFFFFFF8LL) {
      v83 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v83 = v81;
    }
    if (v83 != 0) {
      if (v83 >> 61 == 0) {
        v84 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v83, 16, 0);
        goto LABEL_153;
      }
    LABEL_164:
      GameRoutine_60a210(result);
    }
    v84 = 0;
  LABEL_153:
    v85 = v84 + 8 * v83;
    v86 = (char*)(v6 - v5);
    v87 = (__int64)&v79[v84 + -8 * v80];
    *(_QWORD*)&v79[v84] = v7;
    v88 = (__int64)&v79[v84 + 8];
    result = memcpy(v87, v5, v86);
    v4[17] = v87;
    v4[18] = v88;
    v4[19] = v85;
    if (v5 != nullptr) {
      v89 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v89 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v89);
    }
    v4[18] = v88;
  LABEL_3:
    v1 = v90;
    v2 += 16;
  }
  return result;
}

__int64 game_GameCalendar_ProcNotifyBirthday_Notify(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  unsigned int v6;
  int v7;
  __int64 v8;
  __int16* v9;
  _BOOL4 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v29[4];
  _QWORD* v30;
  _QWORD v31[4];
  _QWORD* v32;
  _QWORD v33[4];
  _QWORD* v34;
  _QWORD v35[2];
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
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

  v2 = **(_QWORD**)(a1 + 152);
  v3 = TransporterConst_89cc80(19);
  if (v2 != 0 && *(_QWORD*)(v2 + 272) != 0) {
    v4 = *(_QWORD*)(v2 + 24);
    if (*(_QWORD*)(v4 + 1472) == 0 || game_GameModeData_instance_ == 0) {
      v6 = 0;
    }
    else {
      v7 = v3;
      v8 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v4 + 1472);
      v6 = v8 != 0 ? *(_DWORD*)(v8 + 32) : 0;
      v3 = v7;
    }
    v9 = (__int16*)(game_gmap_GmapClock_instance_ != 0
                        ? game_gmap_GmapClock_instance_ + 8
                        : game_gmap_GmapClock_kDefaultTime_ptr);
    v10 = v6 <= 10000 * *v9 + 100 * v9[1] + v9[2];
    if (v3 >= 1 && v10) {
      v11 = GameRoutine_67ed20(v2);
      v33[0] = GameData_20238a8;
      v33[1] = a1;
      v32 = v31;
      v30 = v29;
      v34 = v33;
      v31[0] = GameData_2023928;
      v29[0] = GameData_20239a8;
      v12 = msg_MessageManager_instance__ptr[0];
      if (v11 != 0) {
        v13 = v11;
      }
      else {
        v13 = (__int64)*msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v13);
      v14 = *v12;
      v39 = -1;
      v40 = -1;
      v41 = -1;
      v42 = -1;
      v43 = -1;
      v44 = -1;
      v45 = -1;
      v46 = -1;
      v47 = -1;
      v48 = -1;
      v49 = -1;
      v50 = -1;
      v35[0] = GameData_212e348 + 2;
      v35[1] = 0xFFFF0001FFFF0000LL;
      v36 = 0xFFFF0004FFFF0002LL;
      v37 = 0xFFFF0006FFFF0005LL;
      v51 = 8;
      v38 = (_QWORD*)0xFFFF0008FFFF0007LL;
      v35[0] =
          GameRoutine_a4dbe0(v14, "MID_Reminder_BirthSend_Confirm", 0, v35);
      v15 = GameRoutine_12e1990(a1, v35);
      v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v17 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
      GameRoutine_16477d0(v17, "MID_Sys_Yes", v33, v29);
      BasicMenuCursor_16e0c00(v15, v17);
      v18 = fw_memory_HeapManager_Allocate(*v16, 192, 16, 0);
      GameRoutine_16477d0(v18, "MID_Sys_No", v31, v29);
      BasicMenuCursor_16e0c00(v15, v18);
      if (v30 == v29) {
        v19 = 32;
      }
      else {
        if (v30 == nullptr) {
          goto LABEL_32;
        }
        v19 = 40;
      }
      (*(void (**)(_QWORD*))(*v30 + v19))(v30);
    LABEL_32:
      if (v32 == v31) {
        v26 = 32;
      }
      else {
        if (v32 == nullptr) {
          goto LABEL_37;
        }
        v26 = 40;
      }
      (*(void (**)(_QWORD*))(*v32 + v26))(v32);
    LABEL_37:
      v24 = v34;
      if (v34 == v33) {
      LABEL_38:
        v25 = 32;
        goto LABEL_39;
      }
    LABEL_28:
      if (v24 != nullptr) {
        v25 = 40;
      LABEL_39:
        (*(void (**)(_QWORD*))(*v24 + v25))(v24);
      }
      v27 = GameRoutine_67ed20(v2);
      return GameRoutine_16ad210(v15, v2, 6, v27);
    }
  }
  v20 = GameRoutine_67ed20(v2);
  v21 = msg_MessageManager_instance__ptr[0];
  if (v20 != 0) {
    v22 = v20;
  }
  else {
    v22 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v22);
  v23 = *v21;
  v39 = -1;
  v40 = -1;
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v47 = -1;
  v48 = -1;
  v49 = -1;
  v50 = -1;
  v35[0] = GameData_212e348 + 2;
  v35[1] = 0xFFFF0001FFFF0000LL;
  v36 = 0xFFFF0004FFFF0002LL;
  v37 = 0xFFFF0006FFFF0005LL;
  v51 = 8;
  v38 = (_QWORD*)0xFFFF0008FFFF0007LL;
  v35[0] = GameRoutine_a4dbe0(v23, "MID_Reminder_BirthSend_NotPresent_Message",
                              0, v35);
  v15 = GameRoutine_12e1990(a1, v35);
  v38 = nullptr;
  GameRoutine_6680e0(v35, v15 + 1248);
  v24 = v38;
  if (v38 == v35) {
    goto LABEL_38;
  }
  goto LABEL_28;
}

__int64 game_GameCalendar_ProcNotifyBirthday_Notify_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 8);
  if (v2 == 0) {
    return 2;
  }
  while (*(_BYTE*)v2 != 2) {
    if (*(_BYTE*)v2 == 0) {
      return 2;
    }
  LABEL_4:
    v2 += 64;
  }
  if (*(_DWORD*)(v2 + 32) != 0) {
    goto LABEL_4;
  }
  *(_QWORD*)(v1 + 16) = v2;
  *(_WORD*)(v1 + 136) &= ~0x80u;
  return 2;
}

__int64 game_GameCalendar_ProcNotify_Notify_closure0_Invoke(__int64 a1,
                                                            __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  _BYTE v5[32];
  _BYTE* v6;
  const char* v7;

  v2 = *a2;
  v7 = "MID_Reminder_MiddleDay_Caution";
  result = game_menu_Dialog__CreateBind_game_menu_Dialog(v2, &v7);
  if (result != 0) {
    v6 = nullptr;
    GameRoutine_6680e0(v5, result + 1248);
    result = (__int64)v6;
    if (v6 == v5) {
      v4 = 32;
    }
    else {
      if (v6 == nullptr) {
        return result;
      }
      v4 = 40;
    }
    return (*(__int64 (**)(void))(*(_QWORD*)v6 + v4))();
  }
  return result;
}

#pragma GCC visibility pop
