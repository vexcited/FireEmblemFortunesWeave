#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1392960(_QWORD);
__int64 GameRoutine_1393690(_QWORD);
__int64 GameRoutine_1396e30(_QWORD);
__int64 GameRoutine_139abb0(_QWORD);
__int64 GameRoutine_139b8b0(_QWORD);
__int64 GameRoutine_139c590(_QWORD);
__int64 GameRoutine_139d270(_QWORD);
__int64 GameRoutine_139df50(_QWORD);
__int64 GameRoutine_139f4f0(_QWORD);
__int64 GameRoutine_13a01d0(_QWORD);
__int64 GameRoutine_13a1410(_QWORD);
__int64 GameRoutine_13ad560(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13ba7e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13bd800(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13bff60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13c2f80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13c5fc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13c8fe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13cd1e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13d0220(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13d2de0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13d7000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2131080;
extern _DWORD* GameData_2131098;
extern _DWORD* GameData_21310e8;
extern _DWORD* GameData_2131148;
extern _DWORD* GameData_2131160;
extern _DWORD* GameData_2131178;
extern _DWORD* GameData_2131190;
extern _DWORD* GameData_21311a0;
extern _DWORD* GameData_21311b8;
extern _DWORD* GameData_21311c8;
extern _DWORD* GameData_21311e0;
extern _UNKNOWN GameData_1a8addf;
extern _UNKNOWN GameData_1a8adf6;
extern _UNKNOWN GameData_1a8ec39;
extern _UNKNOWN GameData_1a926b9;
extern _UNKNOWN GameData_1a9a3bc;
extern _UNKNOWN GameData_1ac47d4;
extern _UNKNOWN GameData_1ac865a;
extern _UNKNOWN GameData_1ac8668;
extern _UNKNOWN GameData_1acc7a7;
extern _UNKNOWN GameData_1ae3682;
extern _UNKNOWN GameData_1afe3ee;
extern __int64 GameData_212dd28;
extern __int64 GameData_2130fd0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2130fb0;
extern __int64* GameData_2130ff8[10];
extern __int64* GameData_2131018[6];
extern __int64* GameData_2131020[5];
extern __int64* GameData_2131028[4];
extern __int64* GameData_2131030[3];
extern __int64* GameData_2131038[2];
extern __int64* GameData_2131040;
extern __int64* GameData_2131050[6];
extern __int64* GameData_2131058[5];
extern __int64* GameData_2131060[4];
extern __int64* GameData_2131068[3];
extern __int64* GameData_2131070[2];
extern __int64* GameData_2131078;
extern __int64* GameData_2131088[2];
extern __int64* GameData_2131090;
extern __int64* GameData_21310e0;
extern __int64* GameData_2131138[2];
extern __int64* GameData_2131140;
extern __int64* GameData_2131150[2];
extern __int64* GameData_2131158;
extern __int64* GameData_2131168[2];
extern __int64* GameData_2131170;
extern __int64* GameData_2131180[2];
extern __int64* GameData_2131188;
extern __int64* GameData_2131198;
extern __int64* GameData_21311a8[2];
extern __int64* GameData_21311b0;
extern __int64* GameData_21311c0;
extern __int64* GameData_21311d0[2];
extern __int64* GameData_21311d8;
__int64 CommonGroup_Unknown4();

__int64 CommonGroup_Unknown4()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  _QWORD* v15;
  __int64* v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64* v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64* v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64* v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  __int64* v53;
  __int64* v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64* v60;
  __int64* v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64* v67;
  __int64* v68;
  __int64* v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  _QWORD* v81;
  __int64* v82;
  __int64* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v87;
  __int64* v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;

  v0 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      264, 16, 0);
  v2 = (_QWORD*)v1;
  v3 = (_QWORD*)GameData_212dd28;
  if (*(_QWORD*)GameData_212dd28 == 0) {
    *(_QWORD*)GameData_212dd28 = v1;
    *GameData_21310e8 = 1;
  }
  *(_QWORD*)(v1 + 104) = 0;
  *(_QWORD*)(v1 + 112) = 0;
  *(_QWORD*)(v1 + 88) = 0;
  *(_QWORD*)(v1 + 96) = 0;
  *(_QWORD*)(v1 + 72) = 0;
  *(_QWORD*)(v1 + 80) = 0;
  *(_QWORD*)(v1 + 56) = 0;
  *(_QWORD*)(v1 + 64) = 0;
  *(_QWORD*)(v1 + 40) = 0;
  *(_QWORD*)(v1 + 48) = 0;
  *(_QWORD*)(v1 + 24) = 0;
  *(_QWORD*)(v1 + 32) = 0;
  *(_QWORD*)(v1 + 16) = 0;
  *(_DWORD*)(v1 + 120) = 1065353216;
  *(_QWORD*)(v1 + 128) = 0;
  *(_QWORD*)(v1 + 136) = 0;
  *(_QWORD*)(v1 + 144) = 0;
  *(_QWORD*)(v1 + 152) = 0;
  *(_DWORD*)(v1 + 160) = 1065353216;
  *(_QWORD*)(v1 + 168) = 0;
  *(_QWORD*)(v1 + 176) = 0;
  *(_QWORD*)(v1 + 184) = 0;
  *(_QWORD*)(v1 + 192) = 0;
  *(_DWORD*)(v1 + 200) = 1065353216;
  *(_QWORD*)(v1 + 208) = 0;
  *(_QWORD*)(v1 + 216) = 0;
  *(_QWORD*)(v1 + 224) = 0;
  *(_QWORD*)(v1 + 232) = 0;
  *(_QWORD*)(v1 + 240) = 0;
  *(_QWORD*)(v1 + 248) = 0;
  *(_BYTE*)(v1 + 256) = 0;
  v4 = GameData_21310e0 + 2;
  *(_QWORD*)(v1 + 8) = GameData_21310e0 + 8;
  *(_QWORD*)v1 = v4;
  GameRoutine_13ad560(v1 + 8, "GameData/FacilityScene.bin", &GameData_1a8ec39,
                      1);
  v5 = GameData_2130ff8[0];
  *v3 = v2;
  *v2 = v5 + 2;
  v2[1] = v5 + 8;
  GameRoutine_1396e30(v2);
  if (*v3 != 0) {
    v6 = *v3 + 8LL;
  }
  else {
    v6 = 0;
  }
  v7 = fw_memory_HeapManager_Allocate(*v0, 264, 16, 0);
  v8 = (_QWORD*)v7;
  v9 = GameData_2131090;
  if (*GameData_2131090 == 0) {
    *GameData_2131090 = v7;
    *GameData_2131098 = 1;
  }
  *(_QWORD*)(v7 + 104) = 0;
  *(_QWORD*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 88) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_QWORD*)(v7 + 72) = 0;
  *(_QWORD*)(v7 + 80) = 0;
  *(_QWORD*)(v7 + 56) = 0;
  *(_QWORD*)(v7 + 64) = 0;
  *(_QWORD*)(v7 + 40) = 0;
  *(_QWORD*)(v7 + 48) = 0;
  *(_QWORD*)(v7 + 24) = 0;
  *(_QWORD*)(v7 + 32) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_DWORD*)(v7 + 120) = 1065353216;
  *(_QWORD*)(v7 + 128) = 0;
  *(_QWORD*)(v7 + 136) = 0;
  *(_QWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 152) = 0;
  *(_DWORD*)(v7 + 160) = 1065353216;
  *(_QWORD*)(v7 + 168) = 0;
  *(_QWORD*)(v7 + 176) = 0;
  *(_QWORD*)(v7 + 184) = 0;
  *(_QWORD*)(v7 + 192) = 0;
  *(_DWORD*)(v7 + 200) = 1065353216;
  *(_QWORD*)(v7 + 208) = 0;
  *(_QWORD*)(v7 + 216) = 0;
  *(_QWORD*)(v7 + 224) = 0;
  *(_QWORD*)(v7 + 232) = 0;
  *(_QWORD*)(v7 + 240) = 0;
  *(_QWORD*)(v7 + 248) = 0;
  *(_BYTE*)(v7 + 256) = 0;
  v10 = GameData_2131088[0] + 2;
  *(_QWORD*)(v7 + 8) = GameData_2131088[0] + 8;
  *(_QWORD*)v7 = v10;
  GameRoutine_13d0220(v7 + 8, "GameData/FacilityScene.bin", &GameData_1a9a3bc,
                      1);
  v11 = GameData_2131058[0];
  *v9 = (__int64)v8;
  *v8 = v11 + 2;
  v8[1] = v11 + 10;
  GameRoutine_1393690(v8);
  if (*v9 != 0) {
    v12 = *v9 + 8;
  }
  else {
    v12 = 0;
  }
  v13 = (__int64*)fw_memory_HeapManager_Allocate(*v0, 16, 16, 0);
  *v13 = v6;
  v13[1] = v12;
  v14 = fw_memory_HeapManager_Allocate(*v0, 264, 16, 0);
  v15 = (_QWORD*)v14;
  v16 = GameData_2131140;
  if (*GameData_2131140 == 0) {
    *GameData_2131140 = v14;
    *GameData_2131148 = 1;
  }
  *(_QWORD*)(v14 + 104) = 0;
  *(_QWORD*)(v14 + 112) = 0;
  *(_QWORD*)(v14 + 88) = 0;
  *(_QWORD*)(v14 + 96) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_QWORD*)(v14 + 80) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_QWORD*)(v14 + 48) = 0;
  *(_QWORD*)(v14 + 24) = 0;
  *(_QWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_DWORD*)(v14 + 120) = 1065353216;
  *(_QWORD*)(v14 + 128) = 0;
  *(_QWORD*)(v14 + 136) = 0;
  *(_QWORD*)(v14 + 144) = 0;
  *(_QWORD*)(v14 + 152) = 0;
  *(_DWORD*)(v14 + 160) = 1065353216;
  *(_QWORD*)(v14 + 168) = 0;
  *(_QWORD*)(v14 + 176) = 0;
  *(_QWORD*)(v14 + 184) = 0;
  *(_QWORD*)(v14 + 192) = 0;
  *(_DWORD*)(v14 + 200) = 1065353216;
  *(_QWORD*)(v14 + 208) = 0;
  *(_QWORD*)(v14 + 216) = 0;
  *(_QWORD*)(v14 + 224) = 0;
  *(_QWORD*)(v14 + 232) = 0;
  *(_QWORD*)(v14 + 240) = 0;
  *(_QWORD*)(v14 + 248) = 0;
  *(_BYTE*)(v14 + 256) = 0;
  v17 = GameData_2131138[0] + 2;
  *(_QWORD*)(v14 + 8) = GameData_2131138[0] + 8;
  *(_QWORD*)v14 = v17;
  GameRoutine_13ba7e0(v14 + 8, "GameData/FacilityScene.bin", &GameData_1a926b9,
                      1);
  v18 = GameData_2131018[0];
  *v16 = (__int64)v15;
  *v15 = v18 + 2;
  v15[1] = v18 + 8;
  GameRoutine_139abb0(v15);
  if (*v16 != 0) {
    v19 = *v16 + 8;
  }
  else {
    v19 = 0;
  }
  v20 = (__int64*)fw_memory_HeapManager_Allocate(*v0, 32, 16, 0);
  v21 = v13[1];
  v22 = v20;
  *v20 = *v13;
  v23 = *v0;
  v20[1] = v21;
  v20[2] = v19;
  v24 = 128;
  if (*(_QWORD*)(v23 + 200) == 0) {
    v24 = 56;
  }
  nn_mem_StandardAllocator_Free(v23 + v24);
  v25 = fw_memory_HeapManager_Allocate(*v0, 264, 16, 0);
  v26 = (_QWORD*)v25;
  v27 = GameData_2131078;
  if (*GameData_2131078 == 0) {
    *GameData_2131078 = v25;
    *GameData_2131080 = 1;
  }
  *(_QWORD*)(v25 + 104) = 0;
  *(_QWORD*)(v25 + 112) = 0;
  *(_QWORD*)(v25 + 88) = 0;
  *(_QWORD*)(v25 + 96) = 0;
  *(_QWORD*)(v25 + 72) = 0;
  *(_QWORD*)(v25 + 80) = 0;
  *(_QWORD*)(v25 + 56) = 0;
  *(_QWORD*)(v25 + 64) = 0;
  *(_QWORD*)(v25 + 40) = 0;
  *(_QWORD*)(v25 + 48) = 0;
  *(_QWORD*)(v25 + 24) = 0;
  *(_QWORD*)(v25 + 32) = 0;
  *(_QWORD*)(v25 + 16) = 0;
  *(_DWORD*)(v25 + 120) = 1065353216;
  *(_QWORD*)(v25 + 128) = 0;
  *(_QWORD*)(v25 + 136) = 0;
  *(_QWORD*)(v25 + 144) = 0;
  *(_QWORD*)(v25 + 152) = 0;
  *(_DWORD*)(v25 + 160) = 1065353216;
  *(_QWORD*)(v25 + 168) = 0;
  *(_QWORD*)(v25 + 176) = 0;
  *(_QWORD*)(v25 + 184) = 0;
  *(_QWORD*)(v25 + 192) = 0;
  *(_DWORD*)(v25 + 200) = 1065353216;
  *(_QWORD*)(v25 + 208) = 0;
  *(_QWORD*)(v25 + 216) = 0;
  *(_QWORD*)(v25 + 224) = 0;
  *(_QWORD*)(v25 + 232) = 0;
  *(_QWORD*)(v25 + 240) = 0;
  *(_QWORD*)(v25 + 248) = 0;
  *(_BYTE*)(v25 + 256) = 0;
  v28 = GameData_2131070[0] + 2;
  *(_QWORD*)(v25 + 8) = GameData_2131070[0] + 8;
  *(_QWORD*)v25 = v28;
  GameRoutine_13bd800(v25 + 8, "GameData/FacilityScene.bin", &GameData_1a8addf,
                      1);
  v29 = GameData_2131020[0];
  *v27 = (__int64)v26;
  *v26 = v29 + 2;
  v26[1] = v29 + 10;
  GameRoutine_1392960(v26);
  v30 = *v0;
  if (*v27 != 0) {
    v31 = *v27 + 8;
  }
  else {
    v31 = 0;
  }
  v22[3] = v31;
  v32 = fw_memory_HeapManager_Allocate(v30, 264, 16, 0);
  v33 = (_QWORD*)v32;
  v34 = GameData_2131158;
  if (*GameData_2131158 == 0) {
    *GameData_2131158 = v32;
    *GameData_2131160 = 1;
  }
  *(_QWORD*)(v32 + 104) = 0;
  *(_QWORD*)(v32 + 112) = 0;
  *(_QWORD*)(v32 + 88) = 0;
  *(_QWORD*)(v32 + 96) = 0;
  *(_QWORD*)(v32 + 72) = 0;
  *(_QWORD*)(v32 + 80) = 0;
  *(_QWORD*)(v32 + 56) = 0;
  *(_QWORD*)(v32 + 64) = 0;
  *(_QWORD*)(v32 + 40) = 0;
  *(_QWORD*)(v32 + 48) = 0;
  *(_QWORD*)(v32 + 24) = 0;
  *(_QWORD*)(v32 + 32) = 0;
  *(_QWORD*)(v32 + 16) = 0;
  *(_DWORD*)(v32 + 120) = 1065353216;
  *(_QWORD*)(v32 + 128) = 0;
  *(_QWORD*)(v32 + 136) = 0;
  *(_QWORD*)(v32 + 144) = 0;
  *(_QWORD*)(v32 + 152) = 0;
  *(_DWORD*)(v32 + 160) = 1065353216;
  *(_QWORD*)(v32 + 168) = 0;
  *(_QWORD*)(v32 + 176) = 0;
  *(_QWORD*)(v32 + 184) = 0;
  *(_QWORD*)(v32 + 192) = 0;
  *(_DWORD*)(v32 + 200) = 1065353216;
  *(_QWORD*)(v32 + 208) = 0;
  *(_QWORD*)(v32 + 216) = 0;
  *(_QWORD*)(v32 + 224) = 0;
  *(_QWORD*)(v32 + 232) = 0;
  *(_QWORD*)(v32 + 240) = 0;
  *(_QWORD*)(v32 + 248) = 0;
  *(_BYTE*)(v32 + 256) = 0;
  v35 = GameData_2131150[0] + 2;
  *(_QWORD*)(v32 + 8) = GameData_2131150[0] + 8;
  *(_QWORD*)v32 = v35;
  GameRoutine_13bff60(v32 + 8, "GameData/FacilityScene.bin", &GameData_1ac47d4,
                      1);
  v36 = GameData_2131028[0];
  *v34 = (__int64)v33;
  *v33 = v36 + 2;
  v33[1] = v36 + 8;
  GameRoutine_139b8b0(v33);
  if (*v34 != 0) {
    v37 = *v34 + 8;
  }
  else {
    v37 = 0;
  }
  v38 = (__int64*)fw_memory_HeapManager_Allocate(*v0, 64, 16, 0);
  v39 = v22[1];
  v40 = v38;
  *v38 = *v22;
  v38[1] = v39;
  v41 = v22[3];
  v38[2] = v22[2];
  v42 = *v0;
  v38[3] = v41;
  v38[4] = v37;
  v43 = 128;
  if (*(_QWORD*)(v42 + 200) == 0) {
    v43 = 56;
  }
  nn_mem_StandardAllocator_Free(v42 + v43);
  v44 = fw_memory_HeapManager_Allocate(*v0, 264, 16, 0);
  v45 = (_QWORD*)v44;
  v46 = GameData_2131170;
  if (*GameData_2131170 == 0) {
    *GameData_2131170 = v44;
    *GameData_2131178 = 1;
  }
  *(_QWORD*)(v44 + 104) = 0;
  *(_QWORD*)(v44 + 112) = 0;
  *(_QWORD*)(v44 + 88) = 0;
  *(_QWORD*)(v44 + 96) = 0;
  *(_QWORD*)(v44 + 72) = 0;
  *(_QWORD*)(v44 + 80) = 0;
  *(_QWORD*)(v44 + 56) = 0;
  *(_QWORD*)(v44 + 64) = 0;
  *(_QWORD*)(v44 + 40) = 0;
  *(_QWORD*)(v44 + 48) = 0;
  *(_QWORD*)(v44 + 24) = 0;
  *(_QWORD*)(v44 + 32) = 0;
  *(_QWORD*)(v44 + 16) = 0;
  *(_DWORD*)(v44 + 120) = 1065353216;
  *(_QWORD*)(v44 + 128) = 0;
  *(_QWORD*)(v44 + 136) = 0;
  *(_QWORD*)(v44 + 144) = 0;
  *(_QWORD*)(v44 + 152) = 0;
  *(_DWORD*)(v44 + 160) = 1065353216;
  *(_QWORD*)(v44 + 168) = 0;
  *(_QWORD*)(v44 + 176) = 0;
  *(_QWORD*)(v44 + 184) = 0;
  *(_QWORD*)(v44 + 192) = 0;
  *(_DWORD*)(v44 + 200) = 1065353216;
  *(_QWORD*)(v44 + 208) = 0;
  *(_QWORD*)(v44 + 216) = 0;
  *(_QWORD*)(v44 + 224) = 0;
  *(_QWORD*)(v44 + 232) = 0;
  *(_QWORD*)(v44 + 240) = 0;
  *(_QWORD*)(v44 + 248) = 0;
  *(_BYTE*)(v44 + 256) = 0;
  v47 = GameData_2131168[0] + 2;
  *(_QWORD*)(v44 + 8) = GameData_2131168[0] + 8;
  *(_QWORD*)v44 = v47;
  GameRoutine_13c2f80(v44 + 8, "GameData/FacilityScene.bin", &GameData_1ae3682,
                      1);
  v48 = GameData_2131030[0];
  *v46 = (__int64)v45;
  *v45 = v48 + 2;
  v45[1] = v48 + 8;
  GameRoutine_139c590(v45);
  v49 = *v0;
  if (*v46 != 0) {
    v50 = *v46 + 8;
  }
  else {
    v50 = 0;
  }
  v40[5] = v50;
  v51 = fw_memory_HeapManager_Allocate(v49, 264, 16, 0);
  v52 = (_QWORD*)v51;
  v53 = GameData_2131188;
  if (*GameData_2131188 == 0) {
    *GameData_2131188 = v51;
    *GameData_2131190 = 1;
  }
  *(_QWORD*)(v51 + 104) = 0;
  *(_QWORD*)(v51 + 112) = 0;
  *(_QWORD*)(v51 + 88) = 0;
  *(_QWORD*)(v51 + 96) = 0;
  *(_QWORD*)(v51 + 72) = 0;
  *(_QWORD*)(v51 + 80) = 0;
  *(_QWORD*)(v51 + 56) = 0;
  *(_QWORD*)(v51 + 64) = 0;
  *(_QWORD*)(v51 + 40) = 0;
  *(_QWORD*)(v51 + 48) = 0;
  *(_QWORD*)(v51 + 24) = 0;
  *(_QWORD*)(v51 + 32) = 0;
  *(_QWORD*)(v51 + 16) = 0;
  *(_DWORD*)(v51 + 120) = 1065353216;
  *(_QWORD*)(v51 + 128) = 0;
  *(_QWORD*)(v51 + 136) = 0;
  *(_QWORD*)(v51 + 144) = 0;
  *(_QWORD*)(v51 + 152) = 0;
  *(_DWORD*)(v51 + 160) = 1065353216;
  *(_QWORD*)(v51 + 168) = 0;
  *(_QWORD*)(v51 + 176) = 0;
  *(_QWORD*)(v51 + 184) = 0;
  *(_QWORD*)(v51 + 192) = 0;
  *(_DWORD*)(v51 + 200) = 1065353216;
  *(_QWORD*)(v51 + 208) = 0;
  *(_QWORD*)(v51 + 216) = 0;
  *(_QWORD*)(v51 + 224) = 0;
  *(_QWORD*)(v51 + 232) = 0;
  *(_QWORD*)(v51 + 240) = 0;
  *(_QWORD*)(v51 + 248) = 0;
  *(_BYTE*)(v51 + 256) = 0;
  v54 = GameData_2131180[0] + 2;
  *(_QWORD*)(v51 + 8) = GameData_2131180[0] + 8;
  *(_QWORD*)v51 = v54;
  GameRoutine_13c5fc0(v51 + 8, "GameData/FacilityScene.bin", &GameData_1a8adf6,
                      1);
  v55 = GameData_2131038[0];
  *v53 = (__int64)v52;
  *v52 = v55 + 2;
  v52[1] = v55 + 8;
  GameRoutine_139d270(v52);
  v56 = *v0;
  if (*v53 != 0) {
    v57 = *v53 + 8;
  }
  else {
    v57 = 0;
  }
  v40[6] = v57;
  v58 = fw_memory_HeapManager_Allocate(v56, 264, 16, 0);
  v59 = (_QWORD*)v58;
  v60 = GameData_2130fb0;
  if (*GameData_2130fb0 == 0) {
    *GameData_2130fb0 = v58;
    *GameData_21311a0 = 1;
  }
  *(_QWORD*)(v58 + 104) = 0;
  *(_QWORD*)(v58 + 112) = 0;
  *(_QWORD*)(v58 + 88) = 0;
  *(_QWORD*)(v58 + 96) = 0;
  *(_QWORD*)(v58 + 72) = 0;
  *(_QWORD*)(v58 + 80) = 0;
  *(_QWORD*)(v58 + 56) = 0;
  *(_QWORD*)(v58 + 64) = 0;
  *(_QWORD*)(v58 + 40) = 0;
  *(_QWORD*)(v58 + 48) = 0;
  *(_QWORD*)(v58 + 24) = 0;
  *(_QWORD*)(v58 + 32) = 0;
  *(_QWORD*)(v58 + 16) = 0;
  *(_DWORD*)(v58 + 120) = 1065353216;
  *(_QWORD*)(v58 + 128) = 0;
  *(_QWORD*)(v58 + 136) = 0;
  *(_QWORD*)(v58 + 144) = 0;
  *(_QWORD*)(v58 + 152) = 0;
  *(_DWORD*)(v58 + 160) = 1065353216;
  *(_QWORD*)(v58 + 168) = 0;
  *(_QWORD*)(v58 + 176) = 0;
  *(_QWORD*)(v58 + 184) = 0;
  *(_QWORD*)(v58 + 192) = 0;
  *(_DWORD*)(v58 + 200) = 1065353216;
  *(_QWORD*)(v58 + 208) = 0;
  *(_QWORD*)(v58 + 216) = 0;
  *(_QWORD*)(v58 + 224) = 0;
  *(_QWORD*)(v58 + 232) = 0;
  *(_QWORD*)(v58 + 240) = 0;
  *(_QWORD*)(v58 + 248) = 0;
  *(_BYTE*)(v58 + 256) = 0;
  v61 = GameData_2131198 + 2;
  *(_QWORD*)(v58 + 8) = GameData_2131198 + 8;
  *(_QWORD*)v58 = v61;
  GameRoutine_13c8fe0(v58 + 8, "GameData/FacilityScene.bin", &GameData_1ac865a,
                      1);
  v62 = GameData_2131040;
  *v60 = (__int64)v59;
  *v59 = v62 + 2;
  v59[1] = v62 + 8;
  GameRoutine_139df50(v59);
  v63 = *v0;
  if (*v60 != 0) {
    v64 = *v60 + 8;
  }
  else {
    v64 = 0;
  }
  v40[7] = v64;
  v65 = fw_memory_HeapManager_Allocate(v63, 264, 16, 0);
  v66 = (_QWORD*)v65;
  v67 = GameData_21311b0;
  if (*GameData_21311b0 == 0) {
    *GameData_21311b0 = v65;
    *GameData_21311b8 = 1;
  }
  *(_QWORD*)(v65 + 104) = 0;
  *(_QWORD*)(v65 + 112) = 0;
  *(_QWORD*)(v65 + 88) = 0;
  *(_QWORD*)(v65 + 96) = 0;
  *(_QWORD*)(v65 + 72) = 0;
  *(_QWORD*)(v65 + 80) = 0;
  *(_QWORD*)(v65 + 56) = 0;
  *(_QWORD*)(v65 + 64) = 0;
  *(_QWORD*)(v65 + 40) = 0;
  *(_QWORD*)(v65 + 48) = 0;
  *(_QWORD*)(v65 + 24) = 0;
  *(_QWORD*)(v65 + 32) = 0;
  *(_QWORD*)(v65 + 16) = 0;
  *(_DWORD*)(v65 + 120) = 1065353216;
  *(_QWORD*)(v65 + 128) = 0;
  *(_QWORD*)(v65 + 136) = 0;
  *(_QWORD*)(v65 + 144) = 0;
  *(_QWORD*)(v65 + 152) = 0;
  *(_DWORD*)(v65 + 160) = 1065353216;
  *(_QWORD*)(v65 + 168) = 0;
  *(_QWORD*)(v65 + 176) = 0;
  *(_QWORD*)(v65 + 184) = 0;
  *(_QWORD*)(v65 + 192) = 0;
  *(_DWORD*)(v65 + 200) = 1065353216;
  *(_QWORD*)(v65 + 208) = 0;
  *(_QWORD*)(v65 + 216) = 0;
  *(_QWORD*)(v65 + 224) = 0;
  *(_QWORD*)(v65 + 232) = 0;
  *(_QWORD*)(v65 + 240) = 0;
  *(_QWORD*)(v65 + 248) = 0;
  *(_BYTE*)(v65 + 256) = 0;
  v68 = GameData_21311a8[0] + 2;
  *(_QWORD*)(v65 + 8) = GameData_21311a8[0] + 8;
  *(_QWORD*)v65 = v68;
  GameRoutine_13cd1e0(v65 + 8, "GameData/FacilityScene.bin", &GameData_1acc7a7,
                      1);
  v69 = GameData_2131050[0];
  *v67 = (__int64)v66;
  *v66 = v69 + 2;
  v66[1] = v69 + 8;
  GameRoutine_139f4f0(v66);
  if (*v67 != 0) {
    v70 = *v67 + 8;
  }
  else {
    v70 = 0;
  }
  v71 = (__int64*)fw_memory_HeapManager_Allocate(*v0, 128, 16, 0);
  v72 = v40[6];
  v73 = v71;
  v71[7] = v40[7];
  v71[8] = v70;
  v74 = v40[4];
  v71[5] = v40[5];
  v71[6] = v72;
  v75 = v40[1];
  *v71 = *v40;
  v71[1] = v75;
  v76 = v40[3];
  v71[2] = v40[2];
  v77 = *v0;
  v71[3] = v76;
  v71[4] = v74;
  v78 = 56;
  if (*(_QWORD*)(v77 + 200) != 0) {
    v78 = 128;
  }
  nn_mem_StandardAllocator_Free(v77 + v78);
  v79 = fw_memory_HeapManager_Allocate(*v0, 264, 16, 0);
  v80 = (_QWORD*)v79;
  v81 = (_QWORD*)GameData_2130fd0;
  if (*(_QWORD*)GameData_2130fd0 == 0) {
    *(_QWORD*)GameData_2130fd0 = v79;
    *GameData_21311c8 = 1;
  }
  *(_QWORD*)(v79 + 104) = 0;
  *(_QWORD*)(v79 + 112) = 0;
  *(_QWORD*)(v79 + 88) = 0;
  *(_QWORD*)(v79 + 96) = 0;
  *(_QWORD*)(v79 + 72) = 0;
  *(_QWORD*)(v79 + 80) = 0;
  *(_QWORD*)(v79 + 56) = 0;
  *(_QWORD*)(v79 + 64) = 0;
  *(_QWORD*)(v79 + 40) = 0;
  *(_QWORD*)(v79 + 48) = 0;
  *(_QWORD*)(v79 + 24) = 0;
  *(_QWORD*)(v79 + 32) = 0;
  *(_QWORD*)(v79 + 16) = 0;
  *(_DWORD*)(v79 + 120) = 1065353216;
  *(_QWORD*)(v79 + 128) = 0;
  *(_QWORD*)(v79 + 136) = 0;
  *(_QWORD*)(v79 + 144) = 0;
  *(_QWORD*)(v79 + 152) = 0;
  *(_DWORD*)(v79 + 160) = 1065353216;
  *(_QWORD*)(v79 + 168) = 0;
  *(_QWORD*)(v79 + 176) = 0;
  *(_QWORD*)(v79 + 184) = 0;
  *(_QWORD*)(v79 + 192) = 0;
  *(_DWORD*)(v79 + 200) = 1065353216;
  *(_QWORD*)(v79 + 208) = 0;
  *(_QWORD*)(v79 + 216) = 0;
  *(_QWORD*)(v79 + 224) = 0;
  *(_QWORD*)(v79 + 232) = 0;
  *(_QWORD*)(v79 + 240) = 0;
  *(_QWORD*)(v79 + 248) = 0;
  *(_BYTE*)(v79 + 256) = 0;
  v82 = GameData_21311c0 + 2;
  *(_QWORD*)(v79 + 8) = GameData_21311c0 + 8;
  *(_QWORD*)v79 = v82;
  GameRoutine_13d2de0(v79 + 8, "GameData/FacilityScene.bin", &GameData_1afe3ee,
                      1);
  v83 = GameData_2131060[0];
  *v81 = v80;
  *v80 = v83 + 2;
  v80[1] = v83 + 8;
  GameRoutine_13a01d0(v80);
  v84 = *v0;
  if (*v81 != 0) {
    v85 = *v81 + 8LL;
  }
  else {
    v85 = 0;
  }
  v73[9] = v85;
  v86 = fw_memory_HeapManager_Allocate(v84, 264, 16, 0);
  v87 = (_QWORD*)v86;
  v88 = GameData_21311d8;
  if (*GameData_21311d8 == 0) {
    *GameData_21311d8 = v86;
    *GameData_21311e0 = 1;
  }
  *(_QWORD*)(v86 + 104) = 0;
  *(_QWORD*)(v86 + 112) = 0;
  *(_QWORD*)(v86 + 88) = 0;
  *(_QWORD*)(v86 + 96) = 0;
  *(_QWORD*)(v86 + 72) = 0;
  *(_QWORD*)(v86 + 80) = 0;
  *(_QWORD*)(v86 + 56) = 0;
  *(_QWORD*)(v86 + 64) = 0;
  *(_QWORD*)(v86 + 40) = 0;
  *(_QWORD*)(v86 + 48) = 0;
  *(_QWORD*)(v86 + 24) = 0;
  *(_QWORD*)(v86 + 32) = 0;
  *(_QWORD*)(v86 + 16) = 0;
  *(_DWORD*)(v86 + 120) = 1065353216;
  *(_QWORD*)(v86 + 128) = 0;
  *(_QWORD*)(v86 + 136) = 0;
  *(_QWORD*)(v86 + 144) = 0;
  *(_QWORD*)(v86 + 152) = 0;
  *(_DWORD*)(v86 + 160) = 1065353216;
  *(_QWORD*)(v86 + 168) = 0;
  *(_QWORD*)(v86 + 176) = 0;
  *(_QWORD*)(v86 + 184) = 0;
  *(_QWORD*)(v86 + 192) = 0;
  *(_DWORD*)(v86 + 200) = 1065353216;
  *(_QWORD*)(v86 + 208) = 0;
  *(_QWORD*)(v86 + 216) = 0;
  *(_QWORD*)(v86 + 224) = 0;
  *(_QWORD*)(v86 + 232) = 0;
  *(_QWORD*)(v86 + 240) = 0;
  *(_QWORD*)(v86 + 248) = 0;
  *(_BYTE*)(v86 + 256) = 0;
  v89 = GameData_21311d0[0] + 2;
  *(_QWORD*)(v86 + 8) = GameData_21311d0[0] + 8;
  *(_QWORD*)v86 = v89;
  GameRoutine_13d7000(v86 + 8, "GameData/FacilityScene.bin", &GameData_1ac8668,
                      1);
  v90 = GameData_2131068[0];
  *v88 = (__int64)v87;
  *v87 = v90 + 2;
  v87[1] = v90 + 8;
  GameRoutine_13a1410(v87);
  v91 = *v73;
  if (*v88 != 0) {
    v92 = *v88 + 8;
  }
  else {
    v92 = 0;
  }
  v73[10] = v92;
  (*(void (**)(__int64))(*(_QWORD*)v91 + 16LL))(v91);
  (*(void (**)(__int64))(*(_QWORD*)v73[1] + 16LL))(v73[1]);
  (*(void (**)(__int64))(*(_QWORD*)v73[2] + 16LL))(v73[2]);
  (*(void (**)(__int64))(*(_QWORD*)v73[3] + 16LL))(v73[3]);
  (*(void (**)(__int64))(*(_QWORD*)v73[4] + 16LL))(v73[4]);
  (*(void (**)(__int64))(*(_QWORD*)v73[5] + 16LL))(v73[5]);
  (*(void (**)(__int64))(*(_QWORD*)v73[6] + 16LL))(v73[6]);
  (*(void (**)(__int64))(*(_QWORD*)v73[7] + 16LL))(v73[7]);
  (*(void (**)(__int64))(*(_QWORD*)v73[8] + 16LL))(v73[8]);
  (*(void (**)(__int64))(*(_QWORD*)v73[9] + 16LL))(v73[9]);
  (*(void (**)(__int64))(*(_QWORD*)v73[10] + 16LL))(v73[10]);
  v93 = 128;
  if (*(_QWORD*)(*v0 + 200LL) == 0) {
    v93 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v0 + v93);
}

#pragma GCC visibility pop
