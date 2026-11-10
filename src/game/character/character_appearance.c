#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterModel_106fae0(__int64);
__int64 CharacterModel_106fdc0(__int64*);
__int64 CharacterModel_106fe40(__int64 result);
__int64 GameRoutine_1075d50(_QWORD, _QWORD);
__int64 GameRoutine_ad7390(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_JobContext_Drain(_QWORD);
__int64 fw_world_JobContext_Wait(_QWORD, _QWORD);
__int64 fw_world_JobQueue_Submit(_QWORD, _QWORD);
__int64 fw_world_SwapCallables(_QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2006540[])();
extern __int64 (*GameData_20065c0[])();
extern __int64 GameData_212e368[4];
extern __int64 GameData_21323e8[4];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c690;
extern char GameData_1a9f09e;
__int64 CharacterAppearance_10735d0(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6);
__int64 game_character_CharacterAppearance_LoadAsync(__int64 a1);
__int64 CharacterAppearance_1074940(__int64 a1);
__int64 CharacterAppearance_1074de0(__int64 a1);
__int64 game_character_CharacterAppearance_LoadAsync_lambda0_Invoke(
    __int64 result, __int64 a2, atomic_uint* a3);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60f930(void);
__int64 game_character_CharacterAppearance_Setup_lambda0_Invoke(__int64 result,
                                                                __int64* a2);

__int64 CharacterAppearance_10735d0(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6)
{
  __int64* v7;
  _DWORD* v8;
  int v9;
  int v10;
  __int64 result;

  v7 = GameData_212c690;
  *(_QWORD*)a1 = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 8) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 16) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 24) = &GameData_1a9f09e;
  *(_QWORD*)(a1 + 32) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 40) = 0x3F80000040200000LL;
  v8 = (_DWORD*)*v7;
  *(_DWORD*)(a1 + 56) = *v8;
  *(_DWORD*)(a1 + 60) = *v8;
  *(_DWORD*)(a1 + 64) = *v8;
  *(_DWORD*)(a1 + 68) = *v8;
  *(_DWORD*)(a1 + 72) = *v8;
  *(_DWORD*)(a1 + 76) = *v8;
  *(_DWORD*)(a1 + 80) = *v8;
  *(_DWORD*)(a1 + 84) = *v8;
  *(_DWORD*)(a1 + 88) = *v8;
  *(_DWORD*)(a1 + 92) = *v8;
  *(_DWORD*)(a1 + 96) = *v8;
  *(_DWORD*)(a1 + 100) = *v8;
  *(_DWORD*)(a1 + 104) = *v8;
  *(_DWORD*)(a1 + 108) = *v8;
  *(_DWORD*)(a1 + 112) = *v8;
  *(_DWORD*)(a1 + 116) = *v8;
  *(_DWORD*)(a1 + 120) = *v8;
  v9 = *v8;
  *(_QWORD*)(a1 + 136) = &GameData_1a9f09e;
  *(_DWORD*)(a1 + 124) = v9;
  *(_DWORD*)(a1 + 128) = 0;
  v10 = *v8;
  *(_QWORD*)(a1 + 152) = &GameData_1a9f09e;
  *(_DWORD*)(a1 + 144) = v10;
  LODWORD(v8) = *v8;
  *(_QWORD*)(a1 + 168) = -1;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 640) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 800) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 1032) = 0;
  *(_QWORD*)(a1 + 1024) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 1008) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 984) = 0;
  *(_QWORD*)(a1 + 976) = 0;
  *(_QWORD*)(a1 + 1104) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1072) = 0;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_QWORD*)(a1 + 1056) = 0;
  *(_QWORD*)(a1 + 1048) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  *(_QWORD*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_QWORD*)(a1 + 1152) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1120) = 0;
  *(_QWORD*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  *(_QWORD*)(a1 + 1232) = 0;
  *(_QWORD*)(a1 + 1224) = 0;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1208) = 0;
  *(_QWORD*)(a1 + 1200) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1320) = 0;
  *(_QWORD*)(a1 + 1312) = 0;
  *(_QWORD*)(a1 + 1304) = 0;
  *(_QWORD*)(a1 + 1296) = 0;
  *(_QWORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 1280) = 0;
  *(_QWORD*)(a1 + 1272) = 0;
  *(_QWORD*)(a1 + 1264) = 0;
  *(_QWORD*)(a1 + 11768) = 0;
  *(_QWORD*)(a1 + 11760) = 0;
  *(_QWORD*)(a1 + 11752) = 0;
  *(_QWORD*)(a1 + 11744) = 0;
  *(_QWORD*)(a1 + 11736) = 0;
  *(_QWORD*)(a1 + 11728) = 0;
  *(_QWORD*)(a1 + 11720) = 0;
  *(_QWORD*)(a1 + 11712) = 0;
  *(_DWORD*)(a1 + 11704) = 0;
  *(_QWORD*)(a1 + 11696) = 0;
  *(_QWORD*)(a1 + 11688) = 0;
  *(_QWORD*)(a1 + 11680) = 0;
  *(_QWORD*)(a1 + 11672) = 0;
  *(_QWORD*)(a1 + 11664) = 0;
  *(_QWORD*)(a1 + 11656) = 0;
  *(_QWORD*)(a1 + 11648) = 0;
  *(_QWORD*)(a1 + 11640) = 0;
  *(_QWORD*)(a1 + 11632) = 0;
  *(_DWORD*)(a1 + 160) = (_DWORD)v8;
  result = memset(a1 + 1336, 0, 10292, a4, a5, a6);
  *(_QWORD*)(a1 + 11784) = -1;
  *(_QWORD*)(a1 + 11792) = 0;
  *(_DWORD*)(a1 + 11800) = 0;
  *(_DWORD*)(a1 + 176) = 0;
  *(_DWORD*)(a1 + 11776) = 1065353216;
  *(_DWORD*)(a1 + 248) = 1;
  *(_DWORD*)(a1 + 320) = 2;
  *(_DWORD*)(a1 + 392) = 3;
  *(_DWORD*)(a1 + 464) = 4;
  *(_DWORD*)(a1 + 536) = 5;
  *(_DWORD*)(a1 + 608) = 6;
  *(_DWORD*)(a1 + 680) = 7;
  *(_DWORD*)(a1 + 752) = 8;
  *(_DWORD*)(a1 + 824) = 9;
  *(_DWORD*)(a1 + 896) = 10;
  *(_DWORD*)(a1 + 968) = 11;
  *(_DWORD*)(a1 + 1040) = 12;
  *(_DWORD*)(a1 + 1112) = 13;
  *(_DWORD*)(a1 + 1184) = 14;
  *(_DWORD*)(a1 + 1256) = 15;
  *(_DWORD*)(a1 + 1328) = 16;
  return result;
}

__int64 game_character_CharacterAppearance_LoadAsync(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 v25;
  __int64 result;
  _QWORD v27[2];
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  _QWORD v31[4];
  _QWORD* v32;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 816, 16, 0);
  v3[4] = 0;
  v3[10] = 0;
  v3[16] = 0;
  v3[22] = 0;
  v3[28] = 0;
  v3[34] = 0;
  v3[40] = 0;
  v3[46] = 0;
  v3[52] = 0;
  v29 = v3 + 102;
  v30 = v3 + 102;
  v3[58] = 0;
  v3[64] = 0;
  v3[70] = 0;
  v3[76] = 0;
  v3[82] = 0;
  v3[88] = 0;
  v3[94] = 0;
  v3[100] = 0;
  v28 = v3;
  v4 = (_QWORD*)GameData_21323e8[0];
  v5 = *(_QWORD*)GameData_21323e8[0];
  v27[0] = a1;
  v27[1] = &v28;
  fw_world_JobContext_Drain(v5);
  v6 = *v4;
  v7 = *v4 + 32LL;
  do {
    v8 = *(_DWORD*)(v6 + 8);
    v9 = (v8 + 1) & 0xFFFFFF;
    if (v8 + 1 <= 0) {
      v9 = -(-(v8 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v6 + 8) = v9;
    v10 = atomic_load((unsigned __int64*)(v7 + 32LL * (v8 & 0x3F)));
    if (v10 != 0) {
      v8 = -1;
    }
  } while (v8 < 0);
  v11 = v8 | 0xC0000000;
  v12 = (unsigned __int64*)(v7 + 32LL * (v8 & 0x3F));
  nn_os_ClearLightEvent(v12 + 1);
  v13 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, 80, 16, 0);
  v13[2] = 0;
  v14 = v13;
  v15 = GameData_212e368[0];
  v13[8] = 0;
  *v13 = v15 + 16;
  v13[1] = 0;
  v16 = v12[3];
  v12[3] = (unsigned __int64)v14;
  if (v16 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  atomic_store(v11, v12);
  v14[1] = v6;
  *((_DWORD*)v14 + 4) = v11;
  v31[0] = GameData_2006540;
  v31[1] = 17;
  v32 = v31;
  v31[2] = v27;
  fw_world_SwapCallables(v31, v14 + 4);
  if (v32 == v31) {
    v17 = 32;
    goto LABEL_13;
  }
  if (v32 != nullptr) {
    v17 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v32 + v17))((__int64)v32);
  }
  fw_world_JobQueue_Submit(*(_QWORD*)(v6 + 16), v11);
  fw_world_JobContext_Wait(*v4, v11);
  v18 = v28;
  v19 = v29;
  if (v28 == v29) {
    if (v28 == nullptr) {
      goto LABEL_33;
    }
  }
  else {
    do {
      v20 = v18[4];
      if (v20 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 48LL))(v20);
      }
      v18 += 6;
    } while (v18 != v19);
    v18 = v28;
    if (v28 == nullptr) {
      goto LABEL_33;
    }
  }
  v21 = v29;
  if (v18 == v29) {
  LABEL_30:
    v25 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v25);
    goto LABEL_33;
  }
  do {
    v23 = (_QWORD*)*(v21 - 2);
    v24 = v21 - 6;
    if (v21 - 6 == v23) {
      v22 = 32;
    LABEL_24:
      (*(void (**)(__int64))(*v23 + v22))((__int64)v23);
      goto LABEL_25;
    }
    if (v23 != nullptr) {
      v22 = 40;
      goto LABEL_24;
    }
  LABEL_25:
    v21 = v24;
  } while (v24 != v18);
  v29 = v18;
  if (v28 != nullptr) {
    goto LABEL_30;
  }
LABEL_33:
  result = *(_QWORD*)(a1 + 11608);
  if (result != 0) {
    return CharacterModel_106fae0(result);
  }
  return result;
}

__int64 CharacterAppearance_1074940(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  char v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 result;
  char v64;
  unsigned __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64* v73;
  __int64 v74;

  v1 = *(unsigned __int8*)(a1 + 184);
  if ((v1 & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 192);
  }
  else {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 232);
    if (v3 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v3 + 165) != 1) {
      return 0;
    }
    v4 = a1;
    v5 = GameRoutine_ad7390(*(_QWORD*)(a1 + 232));
    a1 = v4;
    if ((v5 & 1) == 0) {
      return 0;
    }
  }
  v6 = *(unsigned __int8*)(a1 + 256);
  v7 = (v6 & 1) != 0 ? *(_QWORD*)(a1 + 264) : v6 >> 1;
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 304);
    if (v8 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v8 + 165) != 1) {
      return 0;
    }
    v9 = a1;
    v10 = GameRoutine_ad7390(*(_QWORD*)(a1 + 304));
    a1 = v9;
    if ((v10 & 1) == 0) {
      return 0;
    }
  }
  v11 = *(unsigned __int8*)(a1 + 328);
  v12 = (v11 & 1) != 0 ? *(_QWORD*)(a1 + 336) : v11 >> 1;
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 376);
    if (v13 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v13 + 165) != 1) {
      return 0;
    }
    v14 = a1;
    v15 = GameRoutine_ad7390(*(_QWORD*)(a1 + 376));
    a1 = v14;
    if ((v15 & 1) == 0) {
      return 0;
    }
  }
  v16 = *(unsigned __int8*)(a1 + 400);
  v17 = (v16 & 1) != 0 ? *(_QWORD*)(a1 + 408) : v16 >> 1;
  if (v17 != 0) {
    v18 = *(_QWORD*)(a1 + 448);
    if (v18 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v18 + 165) != 1) {
      return 0;
    }
    v19 = a1;
    v20 = GameRoutine_ad7390(*(_QWORD*)(a1 + 448));
    a1 = v19;
    if ((v20 & 1) == 0) {
      return 0;
    }
  }
  v21 = *(unsigned __int8*)(a1 + 472);
  v22 = (v21 & 1) != 0 ? *(_QWORD*)(a1 + 480) : v21 >> 1;
  if (v22 != 0) {
    v23 = *(_QWORD*)(a1 + 520);
    if (v23 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v23 + 165) != 1) {
      return 0;
    }
    v24 = a1;
    v25 = GameRoutine_ad7390(*(_QWORD*)(a1 + 520));
    a1 = v24;
    if ((v25 & 1) == 0) {
      return 0;
    }
  }
  v26 = *(unsigned __int8*)(a1 + 544);
  v27 = (v26 & 1) != 0 ? *(_QWORD*)(a1 + 552) : v26 >> 1;
  if (v27 != 0) {
    v28 = *(_QWORD*)(a1 + 592);
    if (v28 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v28 + 165) != 1) {
      return 0;
    }
    v29 = a1;
    v30 = GameRoutine_ad7390(*(_QWORD*)(a1 + 592));
    a1 = v29;
    if ((v30 & 1) == 0) {
      return 0;
    }
  }
  v31 = *(unsigned __int8*)(a1 + 616);
  v32 = (v31 & 1) != 0 ? *(_QWORD*)(a1 + 624) : v31 >> 1;
  if (v32 != 0) {
    v33 = *(_QWORD*)(a1 + 664);
    if (v33 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v33 + 165) != 1) {
      return 0;
    }
    v34 = a1;
    v35 = GameRoutine_ad7390(*(_QWORD*)(a1 + 664));
    a1 = v34;
    if ((v35 & 1) == 0) {
      return 0;
    }
  }
  v36 = *(unsigned __int8*)(a1 + 688);
  v37 = (v36 & 1) != 0 ? *(_QWORD*)(a1 + 696) : v36 >> 1;
  if (v37 != 0) {
    v38 = *(_QWORD*)(a1 + 736);
    if (v38 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v38 + 165) != 1) {
      return 0;
    }
    v39 = a1;
    v40 = GameRoutine_ad7390(*(_QWORD*)(a1 + 736));
    a1 = v39;
    if ((v40 & 1) == 0) {
      return 0;
    }
  }
  v41 = *(unsigned __int8*)(a1 + 760);
  v42 = (v41 & 1) != 0 ? *(_QWORD*)(a1 + 768) : v41 >> 1;
  if (v42 != 0) {
    v43 = *(_QWORD*)(a1 + 808);
    if (v43 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v43 + 165) != 1) {
      return 0;
    }
    v44 = a1;
    v45 = GameRoutine_ad7390(*(_QWORD*)(a1 + 808));
    a1 = v44;
    if ((v45 & 1) == 0) {
      return 0;
    }
  }
  v46 = *(unsigned __int8*)(a1 + 832);
  v47 = (v46 & 1) != 0 ? *(_QWORD*)(a1 + 840) : v46 >> 1;
  if (v47 != 0) {
    v48 = *(_QWORD*)(a1 + 880);
    if (v48 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v48 + 165) != 1) {
      return 0;
    }
    v49 = a1;
    v50 = GameRoutine_ad7390(*(_QWORD*)(a1 + 880));
    a1 = v49;
    if ((v50 & 1) == 0) {
      return 0;
    }
  }
  v51 = *(unsigned __int8*)(a1 + 904);
  v52 = (v51 & 1) != 0 ? *(_QWORD*)(a1 + 912) : v51 >> 1;
  if (v52 != 0) {
    v53 = *(_QWORD*)(a1 + 952);
    if (v53 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v53 + 165) != 1) {
      return 0;
    }
    v54 = a1;
    v55 = GameRoutine_ad7390(*(_QWORD*)(a1 + 952));
    a1 = v54;
    if ((v55 & 1) == 0) {
      return 0;
    }
  }
  v56 = *(unsigned __int8*)(a1 + 976);
  v57 = (v56 & 1) != 0 ? *(_QWORD*)(a1 + 984) : v56 >> 1;
  if (v57 != 0) {
    v58 = *(_QWORD*)(a1 + 1024);
    if (v58 == 0) {
      return 0;
    }
    if (*(_BYTE*)(v58 + 165) != 1) {
      return 0;
    }
    v59 = a1;
    v60 = GameRoutine_ad7390(*(_QWORD*)(a1 + 1024));
    a1 = v59;
    if ((v60 & 1) == 0) {
      return 0;
    }
  }
  v61 = *(unsigned __int8*)(a1 + 1048);
  v74 = a1;
  v62 = (v61 & 1) != 0 ? *(_QWORD*)(a1 + 1056) : v61 >> 1;
  if (v62 != 0) {
    result = *(_QWORD*)(a1 + 1096);
    if (result == 0) {
      return result;
    }
    if (*(_BYTE*)(result + 165) != 1) {
      return 0;
    }
    v64 = GameRoutine_ad7390(result);
    a1 = v74;
    if ((v64 & 1) == 0) {
      return 0;
    }
  }
  v65 = *(unsigned __int8*)(a1 + 1120);
  v66 = (v65 & 1) != 0 ? *(_QWORD*)(a1 + 1128) : v65 >> 1;
  if (v66 != 0) {
    result = *(_QWORD*)(v74 + 1168);
    if (result == 0) {
      return result;
    }
    if (*(_BYTE*)(result + 165) != 1 || (GameRoutine_ad7390(result) & 1) == 0) {
      return 0;
    }
  }
  v67 = *(unsigned __int8*)(v74 + 1192);
  v68 = *(_QWORD*)(v74 + 1200);
  if ((v67 & 1) == 0) {
    v68 = v67 >> 1;
  }
  if (v68 != 0) {
    result = *(_QWORD*)(v74 + 1240);
    if (result == 0) {
      return result;
    }
    if (*(_BYTE*)(result + 165) != 1 || (GameRoutine_ad7390(result) & 1) == 0) {
      return 0;
    }
  }
  v69 = *(unsigned __int8*)(v74 + 1264);
  v70 = *(_QWORD*)(v74 + 1272);
  if ((v69 & 1) == 0) {
    v70 = v69 >> 1;
  }
  if (v70 != 0) {
    result = *(_QWORD*)(v74 + 1312);
    if (result == 0) {
      return result;
    }
    if (*(_BYTE*)(result + 165) != 1 || (GameRoutine_ad7390(result) & 1) == 0) {
      return 0;
    }
  }
  v71 = *(unsigned __int8*)(v74 + 1336);
  v72 = *(_QWORD*)(v74 + 1344);
  if ((v71 & 1) == 0) {
    v72 = v71 >> 1;
  }
  if (v72 != 0) {
    result = *(_QWORD*)(v74 + 1384);
    if (result == 0) {
      return result;
    }
    if (*(_BYTE*)(result + 165) != 1 || (GameRoutine_ad7390(result) & 1) == 0) {
      return 0;
    }
  }
  v73 = *(__int64**)(v74 + 11608);
  return v73 == nullptr || (CharacterModel_106fdc0(v73) & 1) != 0;
}

__int64 CharacterAppearance_1074de0(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 result;

  v1 = *(unsigned __int8*)(a1 + 184);
  if ((v1 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 192);
  }
  else {
    v3 = v1 >> 1;
  }
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 240);
    *(_QWORD*)(a1 + 232) = 0;
    *(_QWORD*)(a1 + 240) = 0;
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  v5 = *(unsigned __int8*)(a1 + 256);
  if ((v5 & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 264);
  }
  else {
    v6 = v5 >> 1;
  }
  if (v6 != 0) {
    v7 = *(_QWORD*)(a1 + 312);
    *(_QWORD*)(a1 + 304) = 0;
    *(_QWORD*)(a1 + 312) = 0;
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  v8 = *(unsigned __int8*)(a1 + 328);
  if ((v8 & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 336);
  }
  else {
    v9 = v8 >> 1;
  }
  if (v9 != 0) {
    v10 = *(_QWORD*)(a1 + 384);
    *(_QWORD*)(a1 + 376) = 0;
    *(_QWORD*)(a1 + 384) = 0;
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  v11 = *(unsigned __int8*)(a1 + 400);
  if ((v11 & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 408);
  }
  else {
    v12 = v11 >> 1;
  }
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 456);
    *(_QWORD*)(a1 + 448) = 0;
    *(_QWORD*)(a1 + 456) = 0;
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
    }
  }
  v14 = *(unsigned __int8*)(a1 + 472);
  if ((v14 & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 480);
  }
  else {
    v15 = v14 >> 1;
  }
  if (v15 != 0) {
    v16 = *(_QWORD*)(a1 + 528);
    *(_QWORD*)(a1 + 520) = 0;
    *(_QWORD*)(a1 + 528) = 0;
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
    }
  }
  v17 = *(unsigned __int8*)(a1 + 544);
  if ((v17 & 1) != 0) {
    v18 = *(_QWORD*)(a1 + 552);
  }
  else {
    v18 = v17 >> 1;
  }
  if (v18 != 0) {
    v19 = *(_QWORD*)(a1 + 600);
    *(_QWORD*)(a1 + 592) = 0;
    *(_QWORD*)(a1 + 600) = 0;
    if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak(v19);
    }
  }
  v20 = *(unsigned __int8*)(a1 + 616);
  if ((v20 & 1) != 0) {
    v21 = *(_QWORD*)(a1 + 624);
  }
  else {
    v21 = v20 >> 1;
  }
  if (v21 != 0) {
    v22 = *(_QWORD*)(a1 + 672);
    *(_QWORD*)(a1 + 664) = 0;
    *(_QWORD*)(a1 + 672) = 0;
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
  }
  v23 = *(unsigned __int8*)(a1 + 688);
  if ((v23 & 1) != 0) {
    v24 = *(_QWORD*)(a1 + 696);
  }
  else {
    v24 = v23 >> 1;
  }
  if (v24 != 0) {
    v25 = *(_QWORD*)(a1 + 744);
    *(_QWORD*)(a1 + 736) = 0;
    *(_QWORD*)(a1 + 744) = 0;
    if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
    }
  }
  v26 = *(unsigned __int8*)(a1 + 760);
  if ((v26 & 1) != 0) {
    v27 = *(_QWORD*)(a1 + 768);
  }
  else {
    v27 = v26 >> 1;
  }
  if (v27 != 0) {
    v28 = *(_QWORD*)(a1 + 816);
    *(_QWORD*)(a1 + 808) = 0;
    *(_QWORD*)(a1 + 816) = 0;
    if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
      std___1___shared_weak_count___release_weak(v28);
    }
  }
  v29 = *(unsigned __int8*)(a1 + 832);
  if ((v29 & 1) != 0) {
    v30 = *(_QWORD*)(a1 + 840);
  }
  else {
    v30 = v29 >> 1;
  }
  if (v30 != 0) {
    v31 = *(_QWORD*)(a1 + 888);
    *(_QWORD*)(a1 + 880) = 0;
    *(_QWORD*)(a1 + 888) = 0;
    if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak(v31);
    }
  }
  v32 = *(unsigned __int8*)(a1 + 904);
  if ((v32 & 1) != 0) {
    v33 = *(_QWORD*)(a1 + 912);
  }
  else {
    v33 = v32 >> 1;
  }
  if (v33 != 0) {
    v34 = *(_QWORD*)(a1 + 960);
    *(_QWORD*)(a1 + 952) = 0;
    *(_QWORD*)(a1 + 960) = 0;
    if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      std___1___shared_weak_count___release_weak(v34);
    }
  }
  v35 = *(unsigned __int8*)(a1 + 976);
  if ((v35 & 1) != 0) {
    v36 = *(_QWORD*)(a1 + 984);
  }
  else {
    v36 = v35 >> 1;
  }
  if (v36 != 0) {
    v37 = *(_QWORD*)(a1 + 1032);
    *(_QWORD*)(a1 + 1024) = 0;
    *(_QWORD*)(a1 + 1032) = 0;
    if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
      std___1___shared_weak_count___release_weak(v37);
    }
  }
  v38 = *(unsigned __int8*)(a1 + 1048);
  if ((v38 & 1) != 0) {
    v39 = *(_QWORD*)(a1 + 1056);
  }
  else {
    v39 = v38 >> 1;
  }
  if (v39 != 0) {
    v40 = *(_QWORD*)(a1 + 1104);
    *(_QWORD*)(a1 + 1096) = 0;
    *(_QWORD*)(a1 + 1104) = 0;
    if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
      std___1___shared_weak_count___release_weak(v40);
    }
  }
  v41 = *(unsigned __int8*)(a1 + 1120);
  if ((v41 & 1) != 0) {
    v42 = *(_QWORD*)(a1 + 1128);
  }
  else {
    v42 = v41 >> 1;
  }
  if (v42 != 0) {
    v43 = *(_QWORD*)(a1 + 1176);
    *(_QWORD*)(a1 + 1168) = 0;
    *(_QWORD*)(a1 + 1176) = 0;
    if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak(v43);
    }
  }
  v44 = *(unsigned __int8*)(a1 + 1192);
  if ((v44 & 1) != 0) {
    v45 = *(_QWORD*)(a1 + 1200);
  }
  else {
    v45 = v44 >> 1;
  }
  if (v45 != 0) {
    v46 = *(_QWORD*)(a1 + 1248);
    *(_QWORD*)(a1 + 1240) = 0;
    *(_QWORD*)(a1 + 1248) = 0;
    if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
      std___1___shared_weak_count___release_weak(v46);
    }
  }
  v47 = *(unsigned __int8*)(a1 + 1264);
  if ((v47 & 1) != 0) {
    v48 = *(_QWORD*)(a1 + 1272);
  }
  else {
    v48 = v47 >> 1;
  }
  if (v48 != 0) {
    v49 = *(_QWORD*)(a1 + 1320);
    *(_QWORD*)(a1 + 1312) = 0;
    *(_QWORD*)(a1 + 1320) = 0;
    if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
      std___1___shared_weak_count___release_weak(v49);
    }
  }
  v50 = *(unsigned __int8*)(a1 + 1336);
  if ((v50 & 1) != 0) {
    v51 = *(_QWORD*)(a1 + 1344);
  }
  else {
    v51 = v50 >> 1;
  }
  if (v51 == 0 ||
      (v52 = *(_QWORD*)(a1 + 1392), *(_QWORD*)(a1 + 1384) = 0,
       *(_QWORD*)(a1 + 1392) = 0, v52 == 0) ||
      atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    result = *(_QWORD*)(a1 + 11608);
    if (result == 0) {
      return result;
    }
    return CharacterModel_106fe40(result);
  }
  (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
  std___1___shared_weak_count___release_weak(v52);
  result = *(_QWORD*)(a1 + 11608);
  if (result != 0) {
    return CharacterModel_106fe40(result);
  }
  return result;
}

__int64 game_character_CharacterAppearance_Setup_lambda0_Invoke(__int64 result,
                                                                __int64* a2)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  long double v18;
  __int64 v19;

  v2 = *(_QWORD**)(result + 8);
  v3 = *a2;
  v4 = (_QWORD*)v2[1458];
  v5 = v2[1459];
  if ((unsigned __int64)v4 >= v5) {
    v7 = v2[1457];
    v8 = (char*)v4 - v7;
    v9 = ((__int64)v4 - v7) >> 3;
    v10 = v9 + 1;
    if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
      GameRoutine_60f930();
    }
    v11 = v5 - v7;
    v12 = fw_memory_g_heap_manager_ptr;
    if (v11 >> 2 > v10) {
      v10 = v11 >> 2;
    }
    if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
      v13 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
    }
    else {
      v14 = 0;
    }
    v15 = v14 + 8 * v13;
    v16 = (char*)v4 - v7;
    v17 = (__int64)&v8[v14 + -8 * v9];
    *(_QWORD*)&v8[v14] = v3;
    v6 = (__int64)&v8[v14 + 8];
    result = memcpy(v17, v7, v16);
    v2[1457] = v17;
    v2[1458] = v6;
    v2[1459] = v15;
    if (v7 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v19 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v19, v18);
    }
  }
  else {
    *v4 = v3;
    v6 = (__int64)(v4 + 1);
  }
  v2[1458] = v6;
  return result;
}

__int64 game_character_CharacterAppearance_LoadAsync_lambda0_Invoke(
    __int64 result, __int64 a2, atomic_uint* a3)
{
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  signed int v9;
  signed int add;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  atomic_uint* v26;
  _QWORD v27[4];
  _QWORD* v28;
  __int64 v29;
  __int64 v30;

  v5 = *(_DWORD*)(result + 8);
  if (v5 >= 1) {
    v29 = v3;
    v30 = v4;
    v6 = result;
    v26 = a3;
    v7 = v5 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                       *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                      2) &
                     0xFFFFFFFE) +
                    2);
    if (v7 <= 1) {
      v8 = 1;
    }
    else {
      v8 = v7;
    }
    while (1) {
      add = atomic_fetch_add(a3, v8);
      v9 = *(_DWORD*)(v6 + 8);
      if (v9 > add) {
        break;
      }
    LABEL_6:
      if (v8 >> 1 <= 1) {
        v8 = 1;
      }
      else {
        v8 >>= 1;
      }
      if (add >= v9) {
        return result;
      }
    }
    v11 = add;
    if (v9 >= (int)(add + v8)) {
      v9 = add + v8;
    }
    v12 = v9;
    v13 = 48LL * add;
    v14 = 72LL * add;
    while (1) {
      v15 = *(__int64**)(v6 + 16);
      v16 = *v15;
      v17 = *v15 + v14;
      v18 = *(unsigned __int8*)(v17 + 184);
      if ((v18 & 1) != 0) {
        v19 = *(_QWORD*)(v17 + 192);
      }
      else {
        v19 = v18 >> 1;
      }
      if (v19 == 0) {
        goto LABEL_15;
      }
      v28 = nullptr;
      v20 = GameRoutine_1075d50(v17 + 176, v27);
      if (v28 == v27) {
        v21 = 32;
      }
      else {
        if (v28 == nullptr) {
          goto LABEL_25;
        }
        v21 = 40;
      }
      (*(void (**)(void))(*v28 + v21))();
    LABEL_25:
      if ((v20 & 1) != 0) {
        v27[0] = GameData_20065c0;
        v27[1] = v14 + v16 + 176;
        v22 = v27;
      }
      else {
        v22 = nullptr;
      }
      v28 = v22;
      v23 = *(_QWORD*)v15[1] + v13;
      result = *(_QWORD*)(v23 + 32);
      *(_QWORD*)(v23 + 32) = 0;
      if (v23 == result) {
        v24 = 32;
      }
      else {
        if (result == 0) {
          goto LABEL_33;
        }
        v24 = 40;
      }
      result = (*(__int64 (**)(void))(*(_QWORD*)result + v24))();
    LABEL_33:
      if (v28 != nullptr) {
        if (v28 != v27) {
          *(_QWORD*)(v23 + 32) = v28;
          goto LABEL_15;
        }
        *(_QWORD*)(v23 + 32) = v23;
        (*(void (**)(_QWORD*, __int64))(*v28 + 24LL))(v28, v23);
      }
      else {
        *(_QWORD*)(v23 + 32) = 0;
      }
      result = (__int64)v28;
      if (v28 == v27) {
        v25 = 32;
        goto LABEL_41;
      }
      if (v28 != nullptr) {
        v25 = 40;
      LABEL_41:
        result = (*(__int64 (**)(void))(*v28 + v25))();
      }
    LABEL_15:
      ++v11;
      v13 += 48;
      v14 += 72;
      if (v11 >= v12) {
        v9 = *(_DWORD*)(v6 + 8);
        a3 = v26;
        add = v11;
        goto LABEL_6;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
