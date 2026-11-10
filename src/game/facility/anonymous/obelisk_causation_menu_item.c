#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16477d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1647b80(_QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1a06060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_9db8a0(_QWORD, _QWORD);
__int64 GameRoutine_9dc200(void);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_1a89034;
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_21159e0[])();
extern __int64 (*GameData_2115a60[])();
extern __int64 (*GameData_2115ae0[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 GameData_21f8450;
extern __int64 GameData_21f8458;
extern __int64 GameData_21f8468;
extern __int64 GameData_21f84a0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e0a8[10];
extern __int64* GameData_212e348;
extern __int64* game_g_empty_item_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
__int64 ObeliskCausationMenuItem_Unknown2(__int64 a1);
__int64 ObeliskCausationMenuItem_Unknown25(__int64 a1);
__int64 ObeliskCausationMenuItem_Unknown58(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_9dc300(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 GameData_21f84b8;
__int64 ObeliskCausationMenuItem_PlayChangeSe(__int64 a1);
__int64 game_facility_anonymous_ObeliskCausationMenuItem_ACall_closure_Invoke(
    __int64 a1);

__int64 ObeliskCausationMenuItem_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD v4[4];
  int v5;
  int v6;
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

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 88) + 32LL);
  if (v1 == 0) {
    return 0;
  }
  v7 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v2 = *msg_MessageManager_instance__ptr[0];
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v4[0] = msg_TagSelector_vtable;
  v4[1] = 0xFFFF0001FFFF0000LL;
  v4[2] = 0xFFFF0004FFFF0002LL;
  v4[3] = 0xFFFF0006FFFF0005LL;
  v19 = 8;
  v5 = -65529;
  v6 = -65528;
  return GameRoutine_a4dbe0(v2, v1, 0, v4);
}

__int64 ObeliskCausationMenuItem_Unknown25(__int64 a1)
{
  unsigned int v1;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64*** v11;
  __int64** v12;
  unsigned __int64 v13;
  __int64* v14;
  unsigned int v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  _BYTE* v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64*** v37;
  __int64** v38;
  unsigned __int64 v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  const char* v43;
  __int64 v44;
  __int64 v45;
  char** v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  char* v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  void* v59;
  _BYTE* v60;
  char v61;
  __int16 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  char* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD v77[4];
  _QWORD* v78;
  _QWORD v79[4];
  _QWORD* v80;
  _QWORD v81[4];
  _QWORD* v82;
  _WORD v83[8];
  char* v84;
  _BYTE v85[24];
  unsigned __int64 v86;
  _BYTE* v87;
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
  _QWORD v101[4];
  _QWORD* v102;

  v1 = *(unsigned __int8*)(a1 + 96);
  v3 = (_QWORD*)(GameData_21f84a0 + 40LL * *(unsigned __int8*)(a1 + 96));
  if (*v3 != 0 && game_GameModeData_instance_ != 0 &&
      (v4 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v3)) != 0) {
    v5 = *(unsigned int*)(v4 + 32);
  }
  else {
    v5 = 0;
  }
  v6 = GameRoutine_9db8a0(v1, v5);
  if (v6 != 0) {
    if (*(_QWORD*)(*(_QWORD*)(v6 + 24) + 16LL) != 0) {
      goto LABEL_8;
    }
    goto LABEL_35;
  }
  if (GameData_21f8458 == 0 || GameData_21f8468 == 0) {
    goto LABEL_35;
  }
  v8 = *(unsigned __int8*)(a1 + 96);
  v9 = GameData_21f8458 - 1;
  if ((GameData_21f8458 & (GameData_21f8458 - 1)) != 0) {
    v10 = *(unsigned __int8*)(a1 + 96);
    if (GameData_21f8458 <= v8) {
      v10 = (unsigned int)v8 % (unsigned int)GameData_21f8458;
    }
  }
  else {
    v10 = ((_DWORD)GameData_21f8458 - 1) & (unsigned int)v8;
  }
  v11 = *(__int64****)(GameData_21f8450 + 8 * v10);
  if (v11 == nullptr) {
    goto LABEL_35;
  }
  v12 = *v11;
  if (v12 == nullptr) {
    goto LABEL_35;
  }
  if ((GameData_21f8458 & v9) == 0) {
    while (1) {
      v14 = v12[1];
      if (v14 == (__int64*)v8) {
        if (*((unsigned __int8*)v12 + 16) == (_DWORD)v8) {
          goto LABEL_34;
        }
      }
      else if (((unsigned __int64)v14 & v9) != v10) {
        goto LABEL_35;
      }
      v12 = (__int64**)*v12;
      if (v12 == nullptr) {
        goto LABEL_35;
      }
    }
  }
  while (1) {
    v13 = (unsigned __int64)v12[1];
    if (v13 == v8) {
      break;
    }
    if (v13 >= GameData_21f8458) {
      v13 %= (unsigned __int64)GameData_21f8458;
    }
    if (v13 != v10) {
      goto LABEL_35;
    }
  LABEL_23:
    v12 = (__int64**)*v12;
    if (v12 == nullptr) {
      goto LABEL_35;
    }
  }
  if (*((unsigned __int8*)v12 + 16) != (_DWORD)v8) {
    goto LABEL_23;
  }

LABEL_34:
  if (v12[3] != nullptr) {
  LABEL_8:
    if ((GameRoutine_9dc200() & 1) == 0) {
      return 1;
    }
  }

LABEL_35:
  v15 = *(unsigned __int8*)(a1 + 96);
  v16 = (_QWORD*)(GameData_21f84a0 + 40LL * *(unsigned __int8*)(a1 + 96));
  if (*v16 != 0 && game_GameModeData_instance_ != 0 &&
      (v17 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v16)) != 0) {
    v18 = *(unsigned int*)(v17 + 32);
  }
  else {
    v18 = 0;
  }
  v19 = GameRoutine_9db8a0(v15, v18);
  if (v19 != 0) {
    v20 = *(__int64**)(*(_QWORD*)(v19 + 24) + 16LL);
    if (v20 == nullptr) {
      return 1;
    }
    goto LABEL_42;
  }
  result = 1;
  if (GameData_21f8458 == 0 || GameData_21f8468 == 0) {
    return result;
  }
  v30 = *(unsigned __int8*)(a1 + 96);
  v31 = GameData_21f8458 - 1;
  if ((GameData_21f8458 & (GameData_21f8458 - 1)) != 0) {
    v32 = *(unsigned __int8*)(a1 + 96);
    if (GameData_21f8458 <= v30) {
      v32 = (unsigned int)v30 % (unsigned int)GameData_21f8458;
    }
  }
  else {
    v32 = ((_DWORD)GameData_21f8458 - 1) & (unsigned int)v30;
  }
  v37 = *(__int64****)(GameData_21f8450 + 8 * v32);
  if (v37 == nullptr) {
    return result;
  }
  v38 = *v37;
  if (v38 == nullptr) {
    return result;
  }
  if ((GameData_21f8458 & v31) == 0) {
    while (1) {
      v40 = v38[1];
      if (v40 == (__int64*)v30) {
        if (*((unsigned __int8*)v38 + 16) == (_DWORD)v30) {
          goto LABEL_147;
        }
      }
      else if (((unsigned __int64)v40 & v31) != v32) {
        return 1;
      }
      v38 = (__int64**)*v38;
      if (v38 == nullptr) {
        return result;
      }
    }
  }
  while (2) {
    v39 = (unsigned __int64)v38[1];
    if (v39 != v30) {
      if (v39 >= GameData_21f8458) {
        v39 %= (unsigned __int64)GameData_21f8458;
      }
      if (v39 != v32) {
        return 1;
      }
    }
    else if (*((unsigned __int8*)v38 + 16) == (_DWORD)v30) {
    LABEL_147:
      v20 = v38[3];
      if (v20 == nullptr) {
        return 1;
      }
    LABEL_42:
      v21 = *(_QWORD*)(a1 + 88);
      v83[0] = 0;
      if (v21 == 0) {
        goto LABEL_86;
      }
      v22 = (_BYTE*)v20[5];
      v23 = msg_MessageManager_instance__ptr[0];
      v24 = GameData_212e348;
      if (v22 == nullptr || *v22 == 0) {
        v33 = *(_QWORD*)(v21 + 32);
        v34 = *msg_MessageManager_instance__ptr[0];
        if (v33 != 0) {
          v88 = -1;
          v89 = -1;
          v90 = -1;
          v91 = -1;
          v92 = -1;
          v93 = -1;
          v94 = -1;
          v95 = -1;
          v96 = -1;
          v97 = -1;
          v98 = -1;
          v99 = -1;
          *(_QWORD*)v85 = GameData_212e348 + 2;
          *(_QWORD*)&v85[8] = 0xFFFF0001FFFF0000LL;
          *(_QWORD*)&v85[16] = 0xFFFF0004FFFF0002LL;
          v86 = 0xFFFF0006FFFF0005LL;
          v100 = 8;
          v87 = (_BYTE*)0xFFFF0008FFFF0007LL;
          v35 = GameRoutine_a4dbe0(v34, v33, 0, v85);
          v36 = *v23 + 14704;
          if (v35 != 0) {
          LABEL_75:
            GameRoutine_60a020(v36, v35);
            v41 = v24 + 2;
            v42 = *v23;
            v43 = "MID_CausationMenu_Confirm";
            goto LABEL_85;
          }
        }
        else {
          v36 = v34 + 14704;
        }
        v35 = (__int64)*msg_MessageManager_empty_text__ptr;
        goto LABEL_75;
      }
      v25 = *(_QWORD*)(v21 + 32);
      if (v25 != 0) {
        v26 = *msg_MessageManager_instance__ptr[0];
        v88 = -1;
        v89 = -1;
        v90 = -1;
        v91 = -1;
        v92 = -1;
        v93 = -1;
        v94 = -1;
        v95 = -1;
        v96 = -1;
        v97 = -1;
        v98 = -1;
        v99 = -1;
        *(_QWORD*)v85 = GameData_212e348 + 2;
        *(_QWORD*)&v85[8] = 0xFFFF0001FFFF0000LL;
        *(_QWORD*)&v85[16] = 0xFFFF0004FFFF0002LL;
        v86 = 0xFFFF0006FFFF0005LL;
        v100 = 8;
        v87 = (_BYTE*)0xFFFF0008FFFF0007LL;
        v27 = GameRoutine_a4dbe0(v26, v25, 0, v85);
        if (v20[5] == 0) {
          v28 = 0;
          goto LABEL_78;
        }
      }
      else {
        v27 = 0;
      }
      GameRoutine_a51e10(*v23 + 14704, 0, *((unsigned __int8*)v20 + 58), 0);
      v44 = v20[5];
      v45 = *v23;
      v88 = -1;
      v89 = -1;
      v90 = -1;
      v91 = -1;
      v92 = -1;
      v93 = -1;
      v94 = -1;
      v95 = -1;
      v96 = -1;
      v97 = -1;
      v98 = -1;
      v99 = -1;
      *(_QWORD*)v85 = v24 + 2;
      *(_QWORD*)&v85[8] = 0xFFFF0001FFFF0000LL;
      *(_QWORD*)&v85[16] = 0xFFFF0004FFFF0002LL;
      v86 = 0xFFFF0006FFFF0005LL;
      v100 = 8;
      v87 = (_BYTE*)0xFFFF0008FFFF0007LL;
      v28 = GameRoutine_a4dbe0(v45, v44, 0, v85);
    LABEL_78:
      v46 = msg_MessageManager_empty_text__ptr;
      if (v27 != 0) {
        v47 = v27;
      }
      else {
        v47 = (__int64)*msg_MessageManager_empty_text__ptr;
      }
      GameRoutine_60a020(*v23 + 14704, v47);
      if (v28 != 0) {
        v48 = v28;
      }
      else {
        v48 = (__int64)*v46;
      }
      GameRoutine_60a020(*v23 + 14728, v48);
      v41 = v24 + 2;
      v42 = *v23;
      v43 = "MID_CausationMenu_Confirm2";
    LABEL_85:
      v88 = -1;
      v89 = -1;
      v90 = -1;
      v91 = -1;
      v92 = -1;
      v93 = -1;
      v94 = -1;
      v95 = -1;
      v96 = -1;
      v97 = -1;
      v98 = -1;
      v99 = -1;
      *(_QWORD*)v85 = v41;
      *(_QWORD*)&v85[8] = 0xFFFF0001FFFF0000LL;
      *(_QWORD*)&v85[16] = 0xFFFF0004FFFF0002LL;
      v86 = 0xFFFF0006FFFF0005LL;
      v100 = 8;
      v87 = (_BYTE*)0xFFFF0008FFFF0007LL;
      v49 = GameRoutine_a4dbe0(v42, v43, 0, v85);
      GameRoutine_60a020(v83, v49);
    LABEL_86:
      v50 = *(_QWORD*)(a1 + 8);
      v51 = v77;
      v81[2] = v20;
      v82 = v81;
      v80 = v79;
      v78 = v77;
      v52 = *(_QWORD*)(v50 + 152);
      v79[0] = GameData_2115ae0;
      v77[0] = GameData_2115ae0;
      if (v52 != 0) {
        v53 = v52;
      }
      else {
        v53 = v50;
      }
      v81[0] = GameData_2115a60;
      v81[1] = a1;
      if (v53 != 0) {
        v54 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        if ((v83[0] & 1) != 0) {
          v55 = v84;
        }
        else {
          v55 = (char*)v83 + 1;
        }
        v56 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 1584, 16, 0);
        *(_QWORD*)v85 = v55;
        GameRoutine_1647b80(v56, v85);
        v57 = GameData_212e0a8[0];
        *(_WORD*)(v56 + 1496) = 0;
        *(_QWORD*)(v56 + 1520) = 0;
        *(_QWORD*)(v56 + 1528) = 0;
        *(_QWORD*)(v56 + 1536) = 0;
        *(_QWORD*)(v56 + 1544) = 0;
        *(_QWORD*)(v56 + 1552) = 0;
        *(_QWORD*)(v56 + 1560) = 0;
        *(_BYTE*)(v56 + 1568) = 0;
        *(_QWORD*)v56 = v57 + 2;
        *(_QWORD*)(v56 + 176) = v57 + 141;
        v58 = *(_QWORD*)(v53 + 40);
        if (v58 != 0) {
          *(_QWORD*)(v58 + 48) = v56;
          *(_QWORD*)(v56 + 56) = *(_QWORD*)(v53 + 40);
        }
        *(_QWORD*)(v53 + 40) = v56;
        *(_QWORD*)(v56 + 24) = &GameData_1a89034;
        *(_QWORD*)(v56 + 32) = v53;
        *(_DWORD*)(v56 + 140) = game_HashString32(&GameData_1a89034);
        *(_QWORD*)(v56 + 64) = 0;
        *(_QWORD*)(v56 + 72) = 24;
        *(_QWORD*)(v56 + 80) = 1;
        v59 = GameData_212c730;
        *(_QWORD*)(v56 + 8) = GameData_212c730;
        *(_QWORD*)(v56 + 16) = v59;
        (*(void (**)(__int64))(*(_QWORD*)v56 + 32LL))(v56);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v56 + 136LL))(v56) & 1) != 0 &&
            (*(_WORD*)(v56 + 136) & 0x100) == 0) {
          *(_WORD*)(v56 + 136) |= 0x100u;
        }
        v60 = *(_BYTE**)(v56 + 32);
        v61 = v60[138];
        if (v61 == 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)v60 + 64LL))(*(_QWORD*)(v56 + 32));
          v61 = v60[138];
        }
        v60[138] = v61 + 1;
        v102 = v101;
        v62 = *(_WORD*)(v56 + 136);
        v87 = v85;
        *(_WORD*)(v56 + 136) = v62 | 2;
        v101[0] = GameData_21159e0;
        *(_QWORD*)v85 = GameData_21159e0;
        GameRoutine_654050(v85, v56 + 1200);
        if (v87 == v85) {
          v63 = 32;
        LABEL_105:
          (*(void (**)(_BYTE*))(*(_QWORD*)v87 + v63))(v87);
        }
        else if (v87 != nullptr) {
          v63 = 40;
          goto LABEL_105;
        }
        if (v102 == v101) {
          v64 = 32;
        LABEL_110:
          (*(void (**)(_QWORD*))(*v102 + v64))(v102);
        }
        else if (v102 != nullptr) {
          v64 = 40;
          goto LABEL_110;
        }
        v65 = *v54;
        *(_BYTE*)(v56 + 1080) = 1;
        v66 = fw_memory_HeapManager_Allocate(v65, 192, 16, 0);
        GameRoutine_16477d0(v66, "MID_Sys_Yes", v81, v77);
        GameRoutine_16e0c00(v56, v66);
        v67 = fw_memory_HeapManager_Allocate(*v54, 192, 16, 0);
        GameRoutine_16477d0(v67, "MID_Sys_No", v79, v77);
        GameRoutine_16e0c00(v56, v67);
        if ((*(_BYTE*)(v56 + 1496) & 1) != 0) {
          *(_QWORD*)(v56 + 1504) = 20;
          v68 = *(char**)(v56 + 1512);
        }
        else {
          v68 = (char*)(v56 + 1497);
          *(_BYTE*)(v56 + 1496) = 40;
        }
        strcpy(v68, "MID_Shop_Consumption");
        v51 = v78;
        if (v78 != v77) {
          if (v78 != nullptr) {
            v69 = 40;
            goto LABEL_118;
          }
          goto LABEL_119;
        }
      }
      else {
        v56 = 0;
      }
      v69 = 32;
    LABEL_118:
      (*(void (**)(_QWORD*))(*v51 + v69))(v51);
    LABEL_119:
      if (v80 == v79) {
        v70 = 32;
      LABEL_123:
        (*(void (**)(_QWORD*))(*v80 + v70))(v80);
      }
      else if (v80 != nullptr) {
        v70 = 40;
        goto LABEL_123;
      }
      if (v82 == v81) {
        v71 = 32;
      LABEL_128:
        (*(void (**)(_QWORD*))(*v82 + v71))(v82);
      }
      else if (v82 != nullptr) {
        v71 = 40;
        goto LABEL_128;
      }
      v72 = *((unsigned __int16*)v20 + 30);
      *(_DWORD*)v85 = 3;
      *(_QWORD*)&v85[4] = *game_g_empty_item_ptr;
      if (*(_BYTE*)GameData_212ceb0 != 0) {
        v73 = *GameData_212ceb0;
      }
      else {
        v73 = 0;
      }
      *(_QWORD*)&v85[12] = v73;
      WORD1(v86) = 0;
      HIDWORD(v86) = 0;
      v90 = 0;
      v91 = 0;
      v92 = 0;
      v93 = 0;
      v88 = (__int64)&v89;
      v89 = 0;
      GameRoutine_930b90(&v86, GameData_212c8b0[0]);
      LODWORD(v94) = 0;
      HIDWORD(v94) = v72;
      LODWORD(v95) = 0;
      GameRoutine_1a06060(v56 + 1544, v85, 0);
      LODWORD(v87) = 0;
      v86 = 0;
      if ((v91 & 1) != 0) {
        *(_BYTE*)v93 = 0;
        v92 = 0;
      }
      else {
        LOWORD(v91) = 0;
      }
      GameRoutine_6e3b50(&v88, v89);
      v89 = 0;
      v90 = 0;
      v88 = (__int64)&v89;
      if ((v91 & 1) != 0) {
        v74 = v93;
        if (v93 != 0) {
          v75 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v75 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v75);
          v74 = v89;
        }
      }
      else {
        v74 = 0;
      }
      GameRoutine_6e3b50(&v88, v74);
      if ((v83[0] & 1) != 0 && v84 != nullptr) {
        v76 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v76);
      }
      return 12;
    }
    v38 = (__int64**)*v38;
    if (v38 == nullptr) {
      return result;
    }
    continue;
  }
}

__int64 ObeliskCausationMenuItem_PlayChangeSe(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  const char* v3;
  __int64 v5;
  _BYTE v6[200];

  v1 = (_QWORD*)(GameData_21f84b8 + 40LL * *(unsigned __int8*)(a1 + 96));
  if (*v1 != 0 && game_GameModeData_instance_ != 0 &&
      (v2 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v1)) != 0 &&
      *(_BYTE*)(v2 + 32) == 1) {
    snd_Fade_Fade_10c830(v6, 0.0f);
    v3 = "SE_SYS_Switch_Off";
  }
  else {
    snd_Fade_Fade_10c830(v6, 0.0f);
    v3 = "SE_SYS_Switch_On";
  }
  snd_play_ff2d0((void*)(&v5), v3, v3, v6, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v6);
}

__int64 ObeliskCausationMenuItem_Unknown58(__int64 a1)
{
  unsigned int v1;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64*** v12;
  __int64** v13;
  unsigned __int64 v14;
  __int64* v15;
  unsigned int v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64*** v29;
  __int64** v30;
  unsigned __int64 v31;
  __int64* v32;

  v1 = *(unsigned __int8*)(a1 + 96);
  v3 = (_QWORD*)(GameData_21f84a0 + 40LL * *(unsigned __int8*)(a1 + 96));
  if (*v3 != 0 && game_GameModeData_instance_ != 0 &&
      (v4 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v3)) != 0) {
    v5 = *(unsigned int*)(v4 + 32);
  }
  else {
    v5 = 0;
  }
  v6 = GameRoutine_9db8a0(v1, v5);
  if (v6 != 0) {
    if (*(_QWORD*)(*(_QWORD*)(v6 + 24) + 16LL) == 0) {
      goto LABEL_35;
    }
    goto LABEL_8;
  }
  if (GameData_21f8458 == 0 || GameData_21f8468 == 0) {
    goto LABEL_35;
  }
  v9 = *(unsigned __int8*)(a1 + 96);
  v10 = GameData_21f8458 - 1;
  if ((GameData_21f8458 & (GameData_21f8458 - 1)) != 0) {
    v11 = *(unsigned __int8*)(a1 + 96);
    if (GameData_21f8458 <= v9) {
      v11 = (unsigned int)v9 % (unsigned int)GameData_21f8458;
    }
  }
  else {
    v11 = ((_DWORD)GameData_21f8458 - 1) & (unsigned int)v9;
  }
  v12 = *(__int64****)(GameData_21f8450 + 8 * v11);
  if (v12 == nullptr) {
    goto LABEL_35;
  }
  v13 = *v12;
  if (v13 == nullptr) {
    goto LABEL_35;
  }
  if ((GameData_21f8458 & v10) == 0) {
    while (1) {
      v15 = v13[1];
      if (v15 == (__int64*)v9) {
        if (*((unsigned __int8*)v13 + 16) == (_DWORD)v9) {
          goto LABEL_34;
        }
      }
      else if (((unsigned __int64)v15 & v10) != v11) {
        goto LABEL_35;
      }
      v13 = (__int64**)*v13;
      if (v13 == nullptr) {
        goto LABEL_35;
      }
    }
  }
  while (1) {
    v14 = (unsigned __int64)v13[1];
    if (v14 == v9) {
      break;
    }
    if (v14 >= GameData_21f8458) {
      v14 %= (unsigned __int64)GameData_21f8458;
    }
    if (v14 != v11) {
      goto LABEL_35;
    }
  LABEL_23:
    v13 = (__int64**)*v13;
    if (v13 == nullptr) {
      goto LABEL_35;
    }
  }
  if (*((unsigned __int8*)v13 + 16) != (_DWORD)v9) {
    goto LABEL_23;
  }

LABEL_34:
  if (v13[3] == nullptr) {
  LABEL_35:
    v16 = *(unsigned __int8*)(a1 + 96);
    v17 = (_QWORD*)(GameData_21f84a0 + 40LL * *(unsigned __int8*)(a1 + 96));
    if (*v17 != 0 && game_GameModeData_instance_ != 0 &&
        (v18 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v17)) != 0) {
      v19 = *(unsigned int*)(v18 + 32);
    }
    else {
      v19 = 0;
    }
    if (GameRoutine_9db8a0(v16, v19) == 0) {
      return 1;
    }
    v20 = *(unsigned __int8*)(a1 + 96);
    v21 = (_QWORD*)(GameData_21f84a0 + 40LL * *(unsigned __int8*)(a1 + 96));
    if (*v21 != 0 && game_GameModeData_instance_ != 0 &&
        (v22 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v21)) != 0) {
      v23 = *(unsigned int*)(v22 + 32);
    }
    else {
      v23 = 0;
    }
    v24 = GameRoutine_9db8a0(v20, v23);
    if (v24 != 0) {
      v25 = *(__int64**)(*(_QWORD*)(v24 + 24) + 16LL);
      return v25 != nullptr;
    }
    v25 = nullptr;
    if (GameData_21f8458 != 0 && GameData_21f8468 != 0) {
      v26 = *(unsigned __int8*)(a1 + 96);
      v27 = GameData_21f8458 - 1;
      if ((GameData_21f8458 & (GameData_21f8458 - 1)) != 0) {
        v28 = *(unsigned __int8*)(a1 + 96);
        if (GameData_21f8458 <= v26) {
          v28 = (unsigned int)v26 % (unsigned int)GameData_21f8458;
        }
      }
      else {
        v28 = ((_DWORD)GameData_21f8458 - 1) & (unsigned int)v26;
      }
      v29 = *(__int64****)(GameData_21f8450 + 8 * v28);
      if (v29 == nullptr || (v30 = *v29) == nullptr) {
      LABEL_72:
        v25 = nullptr;
        return v25 != nullptr;
      }
      if ((GameData_21f8458 & v27) == 0) {
        while (1) {
          v32 = v30[1];
          if (v32 == (__int64*)v26) {
            if (*((unsigned __int8*)v30 + 16) == (_DWORD)v26) {
              goto LABEL_73;
            }
          }
          else if (((unsigned __int64)v32 & v27) != v28) {
            goto LABEL_72;
          }
          v30 = (__int64**)*v30;
          v25 = nullptr;
          if (v30 == nullptr) {
            return v25 != nullptr;
          }
        }
      }
      do {
        v31 = (unsigned __int64)v30[1];
        if (v31 == v26) {
          if (*((unsigned __int8*)v30 + 16) == (_DWORD)v26) {
          LABEL_73:
            v25 = v30[3];
            return v25 != nullptr;
          }
        }
        else {
          if (v31 >= GameData_21f8458) {
            v31 %= (unsigned __int64)GameData_21f8458;
          }
          if (v31 != v28) {
            goto LABEL_72;
          }
        }
        v30 = (__int64**)*v30;
        v25 = nullptr;
      } while (v30 != nullptr);
    }
    return v25 != nullptr;
  }

LABEL_8:
  if ((GameRoutine_9dc200() & 1) != 0) {
    goto LABEL_35;
  }
  return 0;
}

__int64 game_facility_anonymous_ObeliskCausationMenuItem_ACall_closure_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 v4;
  _BYTE v5[200];

  v1 = *(_QWORD*)(a1 + 8);
  snd_Fade_Fade_10c830(v5, 0.0f);
  snd_play_ff2d0((void*)(&v4), "SE_SYS_Decide_M", "SE_SYS_Decide_M", v5, 0,
                 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v5);
  if ((GameRoutine_9dc300(*(_QWORD*)(a1 + 16)) & 1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 96LL))(v1);
  }
  return 2;
}

#pragma GCC visibility pop
