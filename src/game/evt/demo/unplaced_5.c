#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameRoutine_8693c0();
__int64 GameRoutine_8c9a60(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Register(__int64);
extern __int64 (*GameData_2012c80[])();
extern __int64 (*game_evt_demo_Seq_vtable[])();
extern __int64* GameData_212fc38[2];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212ca10[133];
extern __int64 GameData_2130f48;
extern __int64 GameData_2131678;
extern __int64 GameData_21f61c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char** msg_MessageManager_empty_text__ptr;
extern int GameData_21f61c8;
int strncmp(const char*, const char*, unsigned __int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_evt_demo_1148b60(__int64 a1, const char* a2, const char* a3,
                              __int64 a4, __int16* a5);

__int64 game_evt_demo_1148b60(__int64 a1, const char* a2, const char* a3,
                              __int64 a4, __int16* a5)
{
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  _QWORD* v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  _QWORD* v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  _BYTE* v69;
  _BYTE* v70;
  _BYTE* v71;
  _QWORD* v72;
  __int128 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v77;
  unsigned __int64 v78;
  _QWORD* v79;
  _QWORD* v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  int v85;
  char v86;
  const char* v87;
  int v88;
  int v89;
  int v90;
  const char** v91;
  __int64 result;
  int v93;
  __int64 v94;
  int v95;
  __int64 v96;
  int v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  int v102;
  int v103;

  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v10 = GameData_212c608[0];
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v10 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register(a1);
  v11 = GameData_212fc38[0];
  *(_WORD*)(a1 + 160) = 0;
  *(_WORD*)(a1 + 184) = 0;
  *(_DWORD*)(a1 + 208) = 0;
  *(_BYTE*)(a1 + 212) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_DWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *v11 = a1;
  *(_QWORD*)a1 = game_evt_demo_Seq_vtable;
  *(_QWORD*)(a1 + 152) = GameData_2012c80;
  v12 = fw_memory_g_heap_manager_ptr;
  v13 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  v14 = fw_memory_HeapManager_Allocate(v13, 296, 16, 0);
  *(_DWORD*)(v14 + 48) = 0x2000;
  v15 = GameData_2131678;
  *(_WORD*)(v14 + 108) = 256;
  *(_QWORD*)(v14 + 8) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_DWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_DWORD*)(v14 + 104) = 0;
  *(_DWORD*)(v14 + 112) = -1082130432;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_WORD*)(v14 + 80) = 0;
  *(_WORD*)(v14 + 116) = 0;
  *(_WORD*)(v14 + 136) = 0;
  *(_BYTE*)(v14 + 160) = 0;
  *(_BYTE*)(v14 + 288) = 0;
  *(_QWORD*)(v14 + 272) = 0;
  *(_QWORD*)(v14 + 280) = 0;
  *(_QWORD*)(v14 + 256) = 0;
  *(_QWORD*)(v14 + 264) = 0;
  *(_QWORD*)(v14 + 240) = 0;
  *(_QWORD*)(v14 + 248) = 0;
  *(_QWORD*)(v14 + 224) = 0;
  *(_QWORD*)(v14 + 232) = 0;
  *(_QWORD*)(v14 + 208) = 0;
  *(_QWORD*)(v14 + 216) = 0;
  *(_QWORD*)(v14 + 192) = 0;
  *(_QWORD*)(v14 + 200) = 0;
  *(_QWORD*)(v14 + 176) = 0;
  *(_QWORD*)(v14 + 184) = 0;
  *(_QWORD*)(v14 + 168) = 0;
  *(_QWORD*)(v14 + 120) = 0;
  *(_DWORD*)(v14 + 127) = 0;
  *(_DWORD*)(v14 + 292) = 2;
  *(_QWORD*)(a1 + 472) = 0;
  *(_DWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_QWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_DWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)v14 = v15 + 16;
  *(_QWORD*)(v14 + 24) = 0;
  *(_QWORD*)(a1 + 456) = v14 + 24;
  *(_QWORD*)(a1 + 464) = v14;
  *(_DWORD*)(a1 + 592) = 1065353216;
  *(_DWORD*)(a1 + 640) = 1065353216;
  *(_DWORD*)(a1 + 680) = 1065353216;
  *(_DWORD*)(a1 + 768) = 1065353216;
  GameRoutine_60a020(a1 + 184, a2);
  GameRoutine_60a020(a1 + 160, a3);
  if (*(_QWORD*)(a1 + 584) != 0) {
    v16 = *(_QWORD**)(a1 + 576);
    while (v16 != nullptr) {
      v18 = (__int64)v16;
      v16 = (_QWORD*)*v16;
      if ((*(_BYTE*)(v18 + 16) & 1) != 0 && *(_QWORD*)(v18 + 32) != 0) {
        v19 = v18;
        v20 = *(_QWORD*)(v18 + 32);
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v21, v20);
        v18 = v19;
      }
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
        v17 = 128;
      }
      else {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v17, v18);
    }
    v22 = *(_QWORD*)(a1 + 568);
    *(_QWORD*)(a1 + 576) = 0;
    if (v22 != 0) {
      v23 = (_QWORD*)(a1 + 560);
      v24 = v22 & 7;
      if (v22 >= 8) {
        v26 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        v25 = 0;
        do {
          *(_QWORD*)(*v23 + 8 * v25) = 0;
          *(_QWORD*)(*v23 + 8 * v25 + 8) = 0;
          *(_QWORD*)(*v23 + 8 * v25 + 16) = 0;
          *(_QWORD*)(*v23 + 8 * v25 + 24) = 0;
          *(_QWORD*)(*v23 + 8 * v25 + 32) = 0;
          *(_QWORD*)(*v23 + 8 * v25 + 40) = 0;
          *(_QWORD*)(*v23 + 8 * v25 + 48) = 0;
          v27 = *v23 + 8 * v25;
          v25 += 8;
          *(_QWORD*)(v27 + 56) = 0;
        } while (v26 != v25);
      }
      else {
        v25 = 0;
      }
      if (v24 != 0) {
        v28 = 8 * v25;
        do {
          --v24;
          *(_QWORD*)(*v23 + v28) = 0;
          v28 += 8;
        } while (v24 != 0);
      }
    }
    *(_QWORD*)(a1 + 584) = 0;
  }
  if (*(_QWORD*)(a1 + 632) != 0) {
    v29 = *(_QWORD**)(a1 + 624);
    while (v29 != nullptr) {
      v31 = (__int64)v29;
      v29 = (_QWORD*)*v29;
      if ((*(_BYTE*)(v31 + 16) & 1) != 0 && *(_QWORD*)(v31 + 32) != 0) {
        v32 = v31;
        v33 = *(_QWORD*)(v31 + 32);
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v34 = 128;
        }
        else {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v34, v33);
        v31 = v32;
      }
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
        v30 = 128;
      }
      else {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v30, v31);
    }
    v35 = *(_QWORD*)(a1 + 616);
    *(_QWORD*)(a1 + 624) = 0;
    if (v35 != 0) {
      v36 = (_QWORD*)(a1 + 608);
      v37 = v35 & 7;
      if (v35 >= 8) {
        v39 = v35 & 0xFFFFFFFFFFFFFFF8LL;
        v38 = 0;
        do {
          *(_QWORD*)(*v36 + 8 * v38) = 0;
          *(_QWORD*)(*v36 + 8 * v38 + 8) = 0;
          *(_QWORD*)(*v36 + 8 * v38 + 16) = 0;
          *(_QWORD*)(*v36 + 8 * v38 + 24) = 0;
          *(_QWORD*)(*v36 + 8 * v38 + 32) = 0;
          *(_QWORD*)(*v36 + 8 * v38 + 40) = 0;
          *(_QWORD*)(*v36 + 8 * v38 + 48) = 0;
          v40 = *v36 + 8 * v38;
          v38 += 8;
          *(_QWORD*)(v40 + 56) = 0;
        } while (v39 != v38);
      }
      else {
        v38 = 0;
      }
      if (v37 != 0) {
        v41 = 8 * v38;
        do {
          --v37;
          *(_QWORD*)(*v36 + v41) = 0;
          v41 += 8;
        } while (v37 != 0);
      }
    }
    *(_QWORD*)(a1 + 632) = 0;
  }
  if (*(_QWORD*)(a1 + 672) != 0) {
    v42 = *(_QWORD**)(a1 + 664);
    while (v42 != nullptr) {
      v44 = (__int64)v42;
      v42 = (_QWORD*)*v42;
      if ((*(_BYTE*)(v44 + 16) & 1) != 0 && *(_QWORD*)(v44 + 32) != 0) {
        v45 = v44;
        v46 = *(_QWORD*)(v44 + 32);
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v47, v46);
        v44 = v45;
      }
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
        v43 = 128;
      }
      else {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v43, v44);
    }
    v48 = *(_QWORD*)(a1 + 656);
    *(_QWORD*)(a1 + 664) = 0;
    if (v48 != 0) {
      v49 = (_QWORD*)(a1 + 648);
      v50 = v48 & 7;
      if (v48 >= 8) {
        v52 = v48 & 0xFFFFFFFFFFFFFFF8LL;
        v51 = 0;
        do {
          *(_QWORD*)(*v49 + 8 * v51) = 0;
          *(_QWORD*)(*v49 + 8 * v51 + 8) = 0;
          *(_QWORD*)(*v49 + 8 * v51 + 16) = 0;
          *(_QWORD*)(*v49 + 8 * v51 + 24) = 0;
          *(_QWORD*)(*v49 + 8 * v51 + 32) = 0;
          *(_QWORD*)(*v49 + 8 * v51 + 40) = 0;
          *(_QWORD*)(*v49 + 8 * v51 + 48) = 0;
          v53 = *v49 + 8 * v51;
          v51 += 8;
          *(_QWORD*)(v53 + 56) = 0;
        } while (v52 != v51);
      }
      else {
        v51 = 0;
      }
      if (v50 != 0) {
        v54 = 8 * v51;
        do {
          --v50;
          *(_QWORD*)(*v49 + v54) = 0;
          v54 += 8;
        } while (v50 != 0);
      }
    }
    *(_QWORD*)(a1 + 672) = 0;
  }
  v55 = *(_QWORD*)(a1 + 760);
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  if (v55 != 0) {
    v56 = *(_QWORD**)(a1 + 752);
    while (v56 != nullptr) {
      v58 = (__int64)v56;
      v56 = (_QWORD*)*v56;
      if ((*(_BYTE*)(v58 + 16) & 1) != 0 && *(_QWORD*)(v58 + 32) != 0) {
        v59 = v58;
        v60 = *(_QWORD*)(v58 + 32);
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v61 = 128;
        }
        else {
          v61 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v61, v60);
        v58 = v59;
      }
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
        v57 = 128;
      }
      else {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v57, v58);
    }
    v62 = *(_QWORD*)(a1 + 744);
    *(_QWORD*)(a1 + 752) = 0;
    if (v62 != 0) {
      v63 = (_QWORD*)(a1 + 736);
      v64 = v62 & 7;
      if (v62 >= 8) {
        v66 = v62 & 0xFFFFFFFFFFFFFFF8LL;
        v65 = 0;
        do {
          *(_QWORD*)(*v63 + 8 * v65) = 0;
          *(_QWORD*)(*v63 + 8 * v65 + 8) = 0;
          *(_QWORD*)(*v63 + 8 * v65 + 16) = 0;
          *(_QWORD*)(*v63 + 8 * v65 + 24) = 0;
          *(_QWORD*)(*v63 + 8 * v65 + 32) = 0;
          *(_QWORD*)(*v63 + 8 * v65 + 40) = 0;
          *(_QWORD*)(*v63 + 8 * v65 + 48) = 0;
          v67 = *v63 + 8 * v65;
          v65 += 8;
          *(_QWORD*)(v67 + 56) = 0;
        } while (v66 != v65);
      }
      else {
        v65 = 0;
      }
      if (v64 != 0) {
        v68 = 8 * v65;
        do {
          --v64;
          *(_QWORD*)(*v63 + v68) = 0;
          v68 += 8;
        } while (v64 != 0);
      }
    }
    *(_QWORD*)(a1 + 760) = 0;
  }
  *(_DWORD*)(a1 + 728) = 0;
  *(_WORD*)(a1 + 268) = 0;
  *(_BYTE*)(a1 + 270) = 0;
  *(_DWORD*)(a1 + 272) = 0;
  *(_BYTE*)(a1 + 776) = 1;
  if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
    v69 = *(_BYTE**)(a1 + 296);
    *(_QWORD*)(a1 + 288) = 0;
  }
  else {
    v69 = (_BYTE*)(a1 + 281);
    *(_BYTE*)(a1 + 280) = 0;
  }
  *v69 = 0;
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    v70 = *(_BYTE**)(a1 + 320);
    *(_QWORD*)(a1 + 312) = 0;
  }
  else {
    v70 = (_BYTE*)(a1 + 305);
    *(_BYTE*)(a1 + 304) = 0;
  }
  *v70 = 0;
  if ((*(_BYTE*)(a1 + 328) & 1) != 0) {
    v71 = *(_BYTE**)(a1 + 344);
    *(_QWORD*)(a1 + 336) = 0;
  }
  else {
    v71 = (_BYTE*)(a1 + 329);
    *(_BYTE*)(a1 + 328) = 0;
  }
  *v71 = 0;
  *(_QWORD*)(a1 + 432) = 0;
  v72 = (_QWORD*)(a1 + 472);
  v73 = *(_OWORD*)(a1 + 432);
  *(_DWORD*)(a1 + 448) = 0;
  *(_DWORD*)(a1 + 416) = 0;
  *(_OWORD*)(a1 + 432) = (unsigned __int64)v73;
  v74 = game_HashString(a4);
  if (v74 == 0) {
    goto LABEL_122;
  }
  v75 = *(_QWORD*)(*(_QWORD*)GameData_212ca10[0] + 96LL);
  if (v75 == 0 || *(_QWORD*)(*(_QWORD*)GameData_212ca10[0] + 112LL) == 0) {
    goto LABEL_122;
  }
  v77 = v75 - 1;
  if ((v75 & (v75 - 1)) != 0) {
    v78 = v74;
    if (v74 >= v75) {
      v78 = v74 % v75;
    }
  }
  else {
    v78 = v77 & v74;
  }
  v79 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)GameData_212ca10[0] + 88LL) + 8 * v78);
  if (v79 == nullptr || (v80 = (_QWORD*)*v79) == nullptr) {
  LABEL_122:
    v82 = 0;
    goto LABEL_123;
  }
  if ((v75 & v77) == 0) {
    while (1) {
      v83 = v80[1];
      if (v83 == v74) {
        if (v80[2] == v74) {
          goto LABEL_155;
        }
      }
      else if ((v83 & v77) != v78) {
        goto LABEL_122;
      }
      v80 = (_QWORD*)*v80;
      v82 = 0;
      if (v80 == nullptr) {
        goto LABEL_123;
      }
    }
  }
  while (1) {
    v81 = v80[1];
    if (v81 == v74) {
      break;
    }
    if (v81 >= v75) {
      v81 %= v75;
    }
    if (v81 != v78) {
      goto LABEL_122;
    }
  LABEL_112:
    v80 = (_QWORD*)*v80;
    if (v80 == nullptr) {
      goto LABEL_122;
    }
  }
  if (v80[2] != v74) {
    goto LABEL_112;
  }
LABEL_155:
  v82 = v80[3];
LABEL_123:
  *(_QWORD*)(a1 + 496) = v82;
  if (game_gmap_GmapClock_instance_ != 0) {
    v84 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v84 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v85 = *(_DWORD*)(v84 + 8);
  *v72 = *(_QWORD*)v84;
  v86 = *(_BYTE*)(a1 + 160);
  *(_DWORD*)(a1 + 480) = v85;
  if ((v86 & 1) != 0) {
    v87 = *(const char**)(a1 + 176);
  }
  else {
    v87 = (const char*)(a1 + 161);
  }
  if (strncmp(v87, "MID_SE_", 7u) == 0) {
    v96 = GameRoutine_8c9a60((__int64)v87);
    if (v96 != 0) {
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_147;
      }
      v97 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      if (v97 == 1) {
        v98 = 109;
        v99 = 108;
        v100 = 106;
      }
      else {
        if (v97 == 2) {
          v98 = 113;
          v99 = 112;
          v100 = 110;
          goto LABEL_149;
        }
      LABEL_147:
        v98 = 117;
        v99 = 116;
        v100 = 114;
      }
    LABEL_149:
      v101 = *(unsigned __int8*)(v96 + v98);
      v102 = *(unsigned __int8*)(v96 + v99);
      v103 = *(unsigned __int16*)(v96 + v100);
      if (v103 != 0) {
        *(_WORD*)v72 = v103;
      }
      if (v102 != 0) {
        *(_WORD*)(a1 + 474) = v102;
      }
      if (v101 != 0) {
        *(_WORD*)(a1 + 476) = v101;
      }
    }
  }
  v88 = *a5;
  if (v88 >= 1) {
    *(_WORD*)v72 = v88;
  }
  v89 = a5[1];
  if (v89 >= 1) {
    *(_WORD*)(a1 + 474) = v89;
  }
  v90 = a5[2];
  if (v90 >= 1) {
    *(_WORD*)(a1 + 476) = v90;
  }
  *(_QWORD*)(a1 + 484) = -1;
  v91 = (const char**)msg_MessageManager_empty_text__ptr;
  GameRoutine_60a020(a1 + 504, *msg_MessageManager_empty_text__ptr);
  GameRoutine_60a020(a1 + 528, *v91);
  *(_BYTE*)(a1 + 777) = 0;
  *(_WORD*)(a1 + 552) = 256;
  *(_QWORD*)(a1 + 696) = 3212836864LL;
  result = GameRoutine_8693c0();
  v93 = GameData_21f61c8++;
  if (v93 == 0) {
    result = (*(__int64 (**)(__int64*))GameData_21f61c0)(&GameData_21f61c0);
  }
  v94 = *(_QWORD*)GameData_2130f48;
  if (*(_QWORD*)GameData_2130f48 != 0) {
    v95 = *(_DWORD*)(v94 + 1736);
    *(_DWORD*)(v94 + 1736) = v95 + 1;
    if (v95 == 0) {
      return (**(__int64 (***)(__int64))(v94 + 1728))(v94 + 1728);
    }
  }
  return result;
}

#pragma GCC visibility pop
