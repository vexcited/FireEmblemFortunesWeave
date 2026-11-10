#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void gfxa_SceneBuffers_SceneBuffers_lambda0_Invoke(__int64 a1, _WORD* a2);
void gfxa_SceneBuffers_SceneBuffers_lambda1_Invoke(__int64 a1, _WORD* a2);
void gfxa_SceneBuffers_SceneBuffers_lambda2_Invoke(__int64 a1, __int64 a2);
_QWORD* GameRoutine_604020(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_53c20(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, __int64, __int64,
                                                   unsigned __int64, __int64,
                                                   __int64, __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 Model_a636e0(__int64*, __int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_615760(__int64, __int64);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1fc16a0;
extern __int128 GameData_1a83290;
extern __int64 (*GameData_1fc1520[])();
extern __int64 (*GameData_1fc15a0[])();
extern __int64 (*GameData_1fc1620[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 gfxa_SceneBuffers_SceneBuffers(__int64* a1, __int64 a2);

__int64 gfxa_SceneBuffers_SceneBuffers(__int64* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  __int64* v5;
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int32x4_t* v15;
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
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  int32x4_t v35;
  int32x4_t v36;
  int32x4_t v37;
  int32x4_t v38;
  int32x4_t v39;
  int32x4_t v40;
  int32x4_t v41;
  float32x4_t* v42;
  __int64 v43;
  __int64 v44;
  int32x4_t v45;
  int32x4_t v46;
  int32x4_t v47;
  int32x4_t v48;
  int32x4_t v49;
  int32x4_t v50;
  int32x4_t v51;
  __int64 v52;
  __int64 v53;
  int32x4_t v54;
  int32x4_t v55;
  int32x4_t v56;
  int32x4_t v57;
  int32x4_t v58;
  int32x4_t v59;
  int32x4_t v60;
  __int64 v61;
  __int64 v62;
  int32x4_t v63;
  int32x4_t v64;
  int32x4_t v65;
  int32x4_t v66;
  int32x4_t v67;
  int32x4_t v68;
  int32x4_t v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  _QWORD* v81;
  __int64 v82;
  __int64 v83;
  __int64 v87;
  __int64 v88;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  _QWORD* v99;
  __int64 v100;
  __int64 result;
  float32x4_t v102;
  struct {
    _QWORD v103[2];
    int v104;
    int v105;
    __int16 v106;
    char v107;
    char gap59_[5];
    _QWORD* v108;
    __int64 v109;
  } v103_;
  struct {
    __int64 v110;
    int v111;
  } v110_;
  struct {
    __int64 v112;
    int v113;
  } v112_;
  struct {
    __int64 v114;
    int v115;
  } v114_;
  struct {
    __int64 v116;
    int v117;
  } v116_;
  struct {
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
  } v118_;
  float32x4x4_t v122;
  float32x4x4_t v123;
  float32x4x4_t v124;
  float32x4x4_t v125;
  float32x4x4_t v126;
  float32x4x4_t v127;
  float32x4x4_t v128;
  float32x4x4_t v129;
  float32x4x4_t v130;
  float32x4x4_t v131;
  float32x4x4_t v132;
  float32x4x4_t v133;
  float32x4x4_t v134;
  float32x4x4_t v135;
  float32x4x4_t v136;
  float32x4x4_t v137;

  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[13] = 0;
  *((_DWORD*)a1 + 28) = 0;
  a1[15] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[18] = 0;
  a1[20] = 0;
  *((_DWORD*)a1 + 42) = 0;
  a1[22] = 0;
  a1[23] = 0;
  a1[24] = 0;
  a1[25] = 0;
  a1[27] = 0;
  *((_DWORD*)a1 + 56) = 0;
  *((_DWORD*)a1 + 70) = 0;
  a1[33] = 0;
  a1[34] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[29] = 0;
  a1[30] = 0;
  *((_DWORD*)a1 + 84) = 0;
  a1[40] = 0;
  a1[41] = 0;
  a1[38] = 0;
  a1[39] = 0;
  a1[36] = 0;
  a1[37] = 0;
  *((_DWORD*)a1 + 98) = 0;
  a1[47] = 0;
  a1[48] = 0;
  a1[45] = 0;
  a1[46] = 0;
  a1[43] = 0;
  a1[44] = 0;
  *((_DWORD*)a1 + 14) = 0;
  a1[6] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[1] = 0;
  a1[2] = 0;
  *a1 = a2;
  *((_DWORD*)a1 + 112) = 0;
  a1[54] = 0;
  a1[55] = 0;
  a1[52] = 0;
  a1[53] = 0;
  a1[50] = 0;
  a1[51] = 0;
  a1[60] = 0;
  a1[61] = 0;
  a1[58] = 0;
  a1[59] = 0;
  a1[57] = 0;
  *((_DWORD*)a1 + 124) = -1;
  a1[63] = 0;
  *((_DWORD*)a1 + 128) = -1;
  a1[65] = 0;
  *((_DWORD*)a1 + 132) = -1;
  a1[67] = 0;
  *((_DWORD*)a1 + 136) = -1;
  a1[12] = 0;
  v4 = a1 + 12;
  a1[19] = 0;
  a1[26] = 0;
  v5 = a1 + 26;
  a1[5] = 0;
  v6 = a1 + 5;
  GameRoutine_604020(a1 + 69);
  a1[84] = -1;
  GameRoutine_604020(a1 + 85);
  a1[100] = -1;
  GameRoutine_604020(a1 + 101);
  a1[116] = -1;
  v7 = GameData_212c2b0;
  v8 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 8);
  a1[124] =
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 16);
  v9 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v7);
  a1[125] = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v7 + 8);
  v10 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v7);
  a1[126] = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  v11 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  a1[127] = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v7);
  v12 = v7[1];
  a1[120] = *v7;
  v13 = *v7;
  a1[121] = v7[1];
  a1[122] = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  v14 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  a1[123] = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 8);
  v15 = (int32x4_t*)GameData_212c2a0;
  a1[140] = v9;
  a1[139] = v8;
  v16 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v7);
  a1[138] = v14;
  a1[137] = v12;
  a1[136] = v13;
  a1[142] = v11;
  a1[141] = v10;
  a1[117] = 0;
  *((_DWORD*)a1 + 236) = 0;
  a1[157] = 0;
  a1[156] = 0;
  a1[155] = 0;
  a1[154] = 0;
  a1[153] = 0;
  a1[152] = 0;
  v18 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v15);
  v17 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v15);
  v19 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v15);
  a1[143] = v16;
  a1[135] = v17;
  v21 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v15);
  v20 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v15);
  a1[151] = v19;
  v22 = *a1;
  a1[150] = v18;
  a1[134] = v20;
  v24 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v15);
  v23 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v15 + 8);
  a1[149] = v21;
  a1[133] = v23;
  a1[148] = v24;
  v25 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v15 + 8);
  a1[132] = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v15 + 16);
  v26 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v15);
  v27 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v15 + 8);
  a1[147] = v25;
  a1[131] = v27;
  v28 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15);
  v29 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15 + 8);
  a1[146] = v26;
  a1[130] = v29;
  v30 = LANES128(*(v15)).n128_u64[0];
  v31 = LANES128(*(v15)).n128_u64[1];
  a1[145] = v28;
  a1[129] = v31;
  v32 = LANES128(*(v15)).n128_u64[0];
  a1[144] = v30;
  a1[128] = v32;
  DecalObject_a91100(v6, *(_QWORD*)(v22 + 312),
                     *(_QWORD*)(*(_QWORD*)(v22 + 552) + 16LL), 464);
  v33 = *v6;
  v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 56LL))(v33);
  v35 = v15[1];
  v36 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15);
  v37 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15 + 16);
  v38 = vzip1q_s32(*v15, v36);
  v39 = vzip2q_s32(*v15, v36);
  v40 = vzip1q_s32(v35, v37);
  *(int32x4_t*)v34 = vzip1q_s32(v38, v40);
  *(int32x4_t*)(v34 + 16) = vzip2q_s32(v38, v40);
  *(int32x4_t*)(v34 + 32) = vzip1q_s32(v39, vzip2q_s32(v35, v37));
  v122.val[0] = *(float32x4_t*)v7;
  v122.val[1] = *((float32x4_t*)v7 + 1);
  v122.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v122.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  v130.val[0] = *(float32x4_t*)v7;
  v130.val[1] = v122.val[1];
  vst4q_f32((float*)(v34 + 48), v122);
  v122.val[0] = *(float32x4_t*)v7;
  v122.val[1] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  v130.val[2] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 16);
  v122.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v122.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  v130.val[3] =
      *(float32x4_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  vst4q_f32((float*)(v34 + 112), v122);
  v122.val[0] = *(float32x4_t*)v7;
  v122.val[1] = *((float32x4_t*)v7 + 1);
  v122.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v122.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)(v34 + 224), v122);
  v122.val[0] = *v15;
  v122.val[1] = v15[1];
  v122.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15);
  v122.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15 + 16);
  vst4q_f32((float*)(v34 + 288), v130);
  v41 = vzip1q_s32(v122.val[0], v122.val[2]);
  v122.val[0] = vzip2q_s32(v122.val[0], v122.val[2]);
  v122.val[2] = vzip1q_s32(v122.val[1], v122.val[3]);
  *(int32x4_t*)(v34 + 176) = vzip1q_s32(v41, v122.val[2]);
  *(int32x4_t*)(v34 + 192) = vzip2q_s32(v41, v122.val[2]);
  *(int32x4_t*)(v34 + 208) =
      vzip1q_s32(v122.val[0], vzip2q_s32(v122.val[1], v122.val[3]));
  v42 = (float32x4_t*)GameData_212c540;
  *(_DWORD*)(v34 + 388) = 0;
  *(_QWORD*)(v34 + 392) = 1065353216;
  *(_QWORD*)(v34 + 448) = 0x3F8000003F800000LL;
  *(_QWORD*)(v34 + 456) = 0x3F8000003F800000LL;
  v122.val[0] = *v42;
  *(_DWORD*)(v34 + 360) = LANES128(*(v42)).n128_u64[1];
  *(_QWORD*)(v34 + 352) = LANES128(v122.val[0]).n128_u64[0];
  *(_QWORD*)(v34 + 364) = 0;
  *(_QWORD*)(v34 + 372) = 0;
  *(_QWORD*)(v34 + 380) = 0;
  (*(void (**)(__int64))(*(_QWORD*)v33 + 64LL))(v33);
  v43 = a1[6];
  v44 = (*(__int64 (**)(__int64))(*(_QWORD*)v43 + 56LL))(v43);
  v45 = v15[1];
  v46 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15);
  v47 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15 + 16);
  v48 = vzip1q_s32(*v15, v46);
  v49 = vzip2q_s32(*v15, v46);
  v50 = vzip1q_s32(v45, v47);
  *(_DWORD*)(v44 + 388) = 0;
  *(_QWORD*)(v44 + 392) = 1065353216;
  *(_QWORD*)(v44 + 448) = 0x3F8000003F800000LL;
  *(_QWORD*)(v44 + 456) = 0x3F8000003F800000LL;
  *(int32x4_t*)v44 = vzip1q_s32(v48, v50);
  *(int32x4_t*)(v44 + 16) = vzip2q_s32(v48, v50);
  *(int32x4_t*)(v44 + 32) = vzip1q_s32(v49, vzip2q_s32(v45, v47));
  v123.val[0] = *(float32x4_t*)v7;
  v123.val[1] = *((float32x4_t*)v7 + 1);
  v123.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v123.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  v131.val[0] = *(float32x4_t*)v7;
  v131.val[1] = v123.val[1];
  vst4q_f32((float*)(v44 + 48), v123);
  v123.val[0] = *(float32x4_t*)v7;
  v123.val[1] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  v131.val[2] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 16);
  v123.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v123.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  v131.val[3] =
      *(float32x4_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  vst4q_f32((float*)(v44 + 112), v123);
  v123.val[0] = *(float32x4_t*)v7;
  v123.val[1] = *((float32x4_t*)v7 + 1);
  v123.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v123.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)(v44 + 224), v123);
  v123.val[0] = *v15;
  v123.val[1] = v15[1];
  v123.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15);
  v123.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15 + 16);
  vst4q_f32((float*)(v44 + 288), v131);
  v51 = vzip1q_s32(v123.val[0], v123.val[2]);
  v123.val[0] = vzip2q_s32(v123.val[0], v123.val[2]);
  v123.val[2] = vzip1q_s32(v123.val[1], v123.val[3]);
  *(int32x4_t*)(v44 + 208) =
      vzip1q_s32(v123.val[0], vzip2q_s32(v123.val[1], v123.val[3]));
  v123.val[0] = *v42;
  *(int32x4_t*)(v44 + 176) = vzip1q_s32(v51, v123.val[2]);
  *(int32x4_t*)(v44 + 192) = vzip2q_s32(v51, v123.val[2]);
  *(_DWORD*)(v44 + 360) = LANES128(v123.val[0]).n128_u32[2];
  *(_QWORD*)(v44 + 352) = LANES128(v123.val[0]).n128_u64[0];
  *(_QWORD*)(v44 + 364) = 0;
  *(_QWORD*)(v44 + 372) = 0;
  *(_QWORD*)(v44 + 380) = 0;
  (*(void (**)(__int64))(*(_QWORD*)v43 + 64LL))(v43);
  DecalObject_a91100(v4, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 464);
  v52 = *v4;
  v53 = (*(__int64 (**)(__int64))(*(_QWORD*)v52 + 56LL))(v52);
  v54 = v15[1];
  v55 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15);
  v56 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15 + 16);
  v57 = vzip1q_s32(*v15, v55);
  v58 = vzip2q_s32(*v15, v55);
  v59 = vzip1q_s32(v54, v56);
  *(_DWORD*)(v53 + 388) = 0;
  *(_QWORD*)(v53 + 392) = 1065353216;
  *(_QWORD*)(v53 + 448) = 0x3F8000003F800000LL;
  *(_QWORD*)(v53 + 456) = 0x3F8000003F800000LL;
  *(int32x4_t*)v53 = vzip1q_s32(v57, v59);
  *(int32x4_t*)(v53 + 16) = vzip2q_s32(v57, v59);
  *(int32x4_t*)(v53 + 32) = vzip1q_s32(v58, vzip2q_s32(v54, v56));
  v124.val[0] = *(float32x4_t*)v7;
  v124.val[1] = *((float32x4_t*)v7 + 1);
  v124.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v124.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  v132.val[0] = *(float32x4_t*)v7;
  v132.val[1] = v124.val[1];
  vst4q_f32((float*)(v53 + 48), v124);
  v124.val[0] = *(float32x4_t*)v7;
  v124.val[1] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  v132.val[2] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 16);
  v124.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v124.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  v132.val[3] =
      *(float32x4_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  vst4q_f32((float*)(v53 + 112), v124);
  v124.val[0] = *(float32x4_t*)v7;
  v124.val[1] = *((float32x4_t*)v7 + 1);
  v124.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v124.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)(v53 + 224), v124);
  v124.val[0] = *v15;
  v124.val[1] = v15[1];
  v124.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15);
  v124.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15 + 16);
  vst4q_f32((float*)(v53 + 288), v132);
  v60 = vzip1q_s32(v124.val[0], v124.val[2]);
  v124.val[0] = vzip2q_s32(v124.val[0], v124.val[2]);
  v124.val[2] = vzip1q_s32(v124.val[1], v124.val[3]);
  *(int32x4_t*)(v53 + 208) =
      vzip1q_s32(v124.val[0], vzip2q_s32(v124.val[1], v124.val[3]));
  v124.val[0] = *v42;
  *(int32x4_t*)(v53 + 176) = vzip1q_s32(v60, v124.val[2]);
  *(int32x4_t*)(v53 + 192) = vzip2q_s32(v60, v124.val[2]);
  *(_DWORD*)(v53 + 360) = LANES128(v124.val[0]).n128_u32[2];
  *(_QWORD*)(v53 + 352) = LANES128(v124.val[0]).n128_u64[0];
  *(_QWORD*)(v53 + 364) = 0;
  *(_QWORD*)(v53 + 372) = 0;
  *(_QWORD*)(v53 + 380) = 0;
  (*(void (**)(__int64))(*(_QWORD*)v52 + 64LL))(v52);
  v61 = a1[13];
  v62 = (*(__int64 (**)(__int64))(*(_QWORD*)v61 + 56LL))(v61);
  v63 = v15[1];
  v64 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15);
  v65 = *(int32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15 + 16);
  v66 = vzip1q_s32(*v15, v64);
  v67 = vzip2q_s32(*v15, v64);
  v68 = vzip1q_s32(v63, v65);
  *(_DWORD*)(v62 + 388) = 0;
  *(_QWORD*)(v62 + 392) = 1065353216;
  *(_QWORD*)(v62 + 448) = 0x3F8000003F800000LL;
  *(_QWORD*)(v62 + 456) = 0x3F8000003F800000LL;
  *(int32x4_t*)v62 = vzip1q_s32(v66, v68);
  *(int32x4_t*)(v62 + 16) = vzip2q_s32(v66, v68);
  *(int32x4_t*)(v62 + 32) = vzip1q_s32(v67, vzip2q_s32(v63, v65));
  v125.val[0] = *(float32x4_t*)v7;
  v125.val[1] = *((float32x4_t*)v7 + 1);
  v125.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v125.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  v133.val[0] = *(float32x4_t*)v7;
  v133.val[1] = v125.val[1];
  vst4q_f32((float*)(v62 + 48), v125);
  v125.val[0] = *(float32x4_t*)v7;
  v125.val[1] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  v133.val[2] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 16);
  v125.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v125.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  v133.val[3] =
      *(float32x4_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  vst4q_f32((float*)(v62 + 112), v125);
  v125.val[0] = *(float32x4_t*)v7;
  v125.val[1] = *((float32x4_t*)v7 + 1);
  v125.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v125.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)(v62 + 224), v125);
  v125.val[0] = *v15;
  v125.val[1] = v15[1];
  v125.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15);
  v125.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v15 + 16);
  vst4q_f32((float*)(v62 + 288), v133);
  v69 = vzip1q_s32(v125.val[0], v125.val[2]);
  v125.val[0] = vzip2q_s32(v125.val[0], v125.val[2]);
  v125.val[2] = vzip1q_s32(v125.val[1], v125.val[3]);
  *(int32x4_t*)(v62 + 208) =
      vzip1q_s32(v125.val[0], vzip2q_s32(v125.val[1], v125.val[3]));
  v125.val[0] = *v42;
  *(int32x4_t*)(v62 + 176) = vzip1q_s32(v69, v125.val[2]);
  *(int32x4_t*)(v62 + 192) = vzip2q_s32(v69, v125.val[2]);
  *(_DWORD*)(v62 + 360) = LANES128(v125.val[0]).n128_u32[2];
  *(_QWORD*)(v62 + 352) = LANES128(v125.val[0]).n128_u64[0];
  *(_QWORD*)(v62 + 364) = 0;
  *(_QWORD*)(v62 + 372) = 0;
  *(_QWORD*)(v62 + 380) = 0;
  (*(void (**)(__int64))(*(_QWORD*)v61 + 64LL))(v61);
  DecalObject_a91100(a1 + 19, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 304);
  DecalObject_a91100(v5, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 480);
  v70 = *v5;
  v71 = (*(__int64 (**)(__int64))(*(_QWORD*)v70 + 56LL))(v70);
  v126.val[0] = *(float32x4_t*)v7;
  v126.val[1] = *((float32x4_t*)v7 + 1);
  v126.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v126.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)v71, v126);
  v126.val[0] = *(float32x4_t*)v7;
  v126.val[1] = *((float32x4_t*)v7 + 1);
  v126.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v126.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  *(_QWORD*)(v71 + 352) = 0;
  *(_QWORD*)(v71 + 360) = 0;
  *(_QWORD*)(v71 + 368) = 0;
  *(_QWORD*)(v71 + 376) = 0;
  *(_QWORD*)(v71 + 384) = 0;
  *(_QWORD*)(v71 + 392) = 0;
  *(_QWORD*)(v71 + 400) = 0;
  *(_QWORD*)(v71 + 408) = 0;
  *(_QWORD*)(v71 + 416) = 0;
  *(_QWORD*)(v71 + 424) = 0;
  v134.val[0] = *(float32x4_t*)v7;
  v134.val[1] = *((float32x4_t*)v7 + 1);
  *(_QWORD*)(v71 + 432) = 0;
  *(_QWORD*)(v71 + 440) = 0;
  *(_QWORD*)(v71 + 448) = 0;
  *(_QWORD*)(v71 + 456) = 0;
  *(_QWORD*)(v71 + 464) = 0;
  *(_QWORD*)(v71 + 472) = 0;
  vst4q_f32((float*)(v71 + 64), v126);
  v126.val[0] = *(float32x4_t*)v7;
  v126.val[1] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  v134.val[2] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 16);
  v126.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v126.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  v134.val[3] =
      *(float32x4_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  vst4q_f32((float*)(v71 + 128), v126);
  v126.val[0] = *(float32x4_t*)v7;
  v126.val[1] = *((float32x4_t*)v7 + 1);
  v126.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v126.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)(v71 + 192), v126);
  LANES128(v126.val[1]).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v126.val[1]).n128_u64[1] = 0x3F8000003F800000LL;
  vst4q_f32((float*)(v71 + 256), v134);
  *(_OWORD*)(v71 + 320) = GameData_1a83290;
  *(float32x4_t*)(v71 + 336) = v126.val[1];
  v102 = v126.val[1];
  (*(void (**)(__int64))(*(_QWORD*)v70 + 64LL))(v70);
  v72 = a1[27];
  v73 = (*(__int64 (**)(__int64))(*(_QWORD*)v72 + 56LL))(v72);
  v127.val[0] = *(float32x4_t*)v7;
  v127.val[1] = *((float32x4_t*)v7 + 1);
  v127.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v127.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)v73, v127);
  v127.val[0] = *(float32x4_t*)v7;
  v127.val[1] = *((float32x4_t*)v7 + 1);
  v127.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v127.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  *(_QWORD*)(v73 + 352) = 0;
  *(_QWORD*)(v73 + 360) = 0;
  *(_QWORD*)(v73 + 368) = 0;
  *(_QWORD*)(v73 + 376) = 0;
  *(_QWORD*)(v73 + 384) = 0;
  *(_QWORD*)(v73 + 392) = 0;
  *(_QWORD*)(v73 + 400) = 0;
  *(_QWORD*)(v73 + 408) = 0;
  *(_QWORD*)(v73 + 416) = 0;
  *(_QWORD*)(v73 + 424) = 0;
  v135.val[0] = *(float32x4_t*)v7;
  v135.val[1] = *((float32x4_t*)v7 + 1);
  *(_QWORD*)(v73 + 432) = 0;
  *(_QWORD*)(v73 + 440) = 0;
  *(_QWORD*)(v73 + 448) = 0;
  *(_QWORD*)(v73 + 456) = 0;
  *(_QWORD*)(v73 + 464) = 0;
  *(_QWORD*)(v73 + 472) = 0;
  vst4q_f32((float*)(v73 + 64), v127);
  v127.val[0] = *(float32x4_t*)v7;
  v127.val[1] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  v135.val[2] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 16);
  v127.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v127.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  v135.val[3] =
      *(float32x4_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  vst4q_f32((float*)(v73 + 128), v127);
  v127.val[0] = *(float32x4_t*)v7;
  v127.val[1] = *((float32x4_t*)v7 + 1);
  v127.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v127.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)(v73 + 192), v127);
  *(_OWORD*)(v73 + 320) = GameData_1a83290;
  *(float32x4_t*)(v73 + 336) = v102;
  vst4q_f32((float*)(v73 + 256), v135);
  (*(void (**)(__int64))(*(_QWORD*)v72 + 64LL))(v72);
  DecalObject_a91100(a1 + 33, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 480);
  v74 = a1[33];
  v75 = (*(__int64 (**)(__int64))(*(_QWORD*)v74 + 56LL))(v74);
  v128.val[0] = *(float32x4_t*)v7;
  v128.val[1] = *((float32x4_t*)v7 + 1);
  v128.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v128.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)v75, v128);
  v128.val[0] = *(float32x4_t*)v7;
  v128.val[1] = *((float32x4_t*)v7 + 1);
  v128.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v128.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  *(_QWORD*)(v75 + 352) = 0;
  *(_QWORD*)(v75 + 360) = 0;
  *(_QWORD*)(v75 + 368) = 0;
  *(_QWORD*)(v75 + 376) = 0;
  *(_QWORD*)(v75 + 384) = 0;
  *(_QWORD*)(v75 + 392) = 0;
  *(_QWORD*)(v75 + 400) = 0;
  *(_QWORD*)(v75 + 408) = 0;
  *(_QWORD*)(v75 + 416) = 0;
  *(_QWORD*)(v75 + 424) = 0;
  v136.val[0] = *(float32x4_t*)v7;
  v136.val[1] = *((float32x4_t*)v7 + 1);
  *(_QWORD*)(v75 + 432) = 0;
  *(_QWORD*)(v75 + 440) = 0;
  *(_QWORD*)(v75 + 448) = 0;
  *(_QWORD*)(v75 + 456) = 0;
  *(_QWORD*)(v75 + 464) = 0;
  *(_QWORD*)(v75 + 472) = 0;
  vst4q_f32((float*)(v75 + 64), v128);
  v128.val[0] = *(float32x4_t*)v7;
  v128.val[1] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  v136.val[2] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 16);
  v128.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v128.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  v136.val[3] =
      *(float32x4_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  vst4q_f32((float*)(v75 + 128), v128);
  v128.val[0] = *(float32x4_t*)v7;
  v128.val[1] = *((float32x4_t*)v7 + 1);
  v128.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v128.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)(v75 + 192), v128);
  *(_OWORD*)(v75 + 320) = GameData_1a83290;
  *(float32x4_t*)(v75 + 336) = v102;
  vst4q_f32((float*)(v75 + 256), v136);
  (*(void (**)(__int64))(*(_QWORD*)v74 + 64LL))(v74);
  v76 = a1[34];
  v77 = (*(__int64 (**)(__int64))(*(_QWORD*)v76 + 56LL))(v76);
  v129.val[0] = *(float32x4_t*)v7;
  v129.val[1] = *((float32x4_t*)v7 + 1);
  v129.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v129.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)v77, v129);
  v129.val[0] = *(float32x4_t*)v7;
  v129.val[1] = *((float32x4_t*)v7 + 1);
  v129.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v129.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  *(_QWORD*)(v77 + 352) = 0;
  *(_QWORD*)(v77 + 360) = 0;
  *(_QWORD*)(v77 + 368) = 0;
  *(_QWORD*)(v77 + 376) = 0;
  *(_QWORD*)(v77 + 384) = 0;
  *(_QWORD*)(v77 + 392) = 0;
  *(_QWORD*)(v77 + 400) = 0;
  *(_QWORD*)(v77 + 408) = 0;
  *(_QWORD*)(v77 + 416) = 0;
  *(_QWORD*)(v77 + 424) = 0;
  v137.val[0] = *(float32x4_t*)v7;
  v137.val[1] = *((float32x4_t*)v7 + 1);
  *(_QWORD*)(v77 + 432) = 0;
  *(_QWORD*)(v77 + 440) = 0;
  *(_QWORD*)(v77 + 448) = 0;
  *(_QWORD*)(v77 + 456) = 0;
  *(_QWORD*)(v77 + 464) = 0;
  *(_QWORD*)(v77 + 472) = 0;
  vst4q_f32((float*)(v77 + 64), v129);
  v129.val[0] = *(float32x4_t*)v7;
  v129.val[1] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7);
  v137.val[2] = *(float32x4_t*)((char*)((__int128*)0x10LL) + (_QWORD)v7 + 16);
  v129.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v129.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  v137.val[3] =
      *(float32x4_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v7);
  vst4q_f32((float*)(v77 + 128), v129);
  v129.val[0] = *(float32x4_t*)v7;
  v129.val[1] = *((float32x4_t*)v7 + 1);
  v129.val[2] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7);
  v129.val[3] = *(float32x4_t*)((char*)((char*)0x20LL) + (_QWORD)v7 + 16);
  vst4q_f32((float*)(v77 + 192), v129);
  *(_OWORD*)(v77 + 320) = GameData_1a83290;
  *(float32x4_t*)(v77 + 336) = v102;
  vst4q_f32((float*)(v77 + 256), v137);
  (*(void (**)(__int64))(*(_QWORD*)v76 + 64LL))(v76);
  DecalObject_a91100(a1 + 40, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 256);
  v78 = a1[40];
  v79 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v78 + 56LL))(v78);
  *v79 = 0;
  v79[1] = 0;
  v79[2] = 0;
  v79[3] = 0;
  v79[4] = 0;
  v79[5] = 0;
  v79[6] = 0;
  v79[7] = 0;
  v79[8] = 0;
  v79[9] = 0;
  v79[10] = 0;
  v79[11] = 0;
  v79[12] = 0;
  v79[13] = 0;
  v79[14] = 0;
  v79[15] = 0;
  v79[16] = 0;
  v79[17] = 0;
  v79[18] = 0;
  v79[19] = 0;
  v79[20] = 0;
  v79[21] = 0;
  v79[22] = 0;
  v79[23] = 0;
  v79[24] = 0;
  v79[25] = 0;
  v79[26] = 0;
  v79[27] = 0;
  v79[28] = 0;
  v79[29] = 0;
  v79[30] = 0;
  v79[31] = 0;
  (*(void (**)(__int64))(*(_QWORD*)v78 + 64LL))(v78);
  v80 = a1[41];
  v81 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v80 + 56LL))(v80);
  *v81 = 0;
  v81[1] = 0;
  v81[2] = 0;
  v81[3] = 0;
  v81[4] = 0;
  v81[5] = 0;
  v81[6] = 0;
  v81[7] = 0;
  v81[8] = 0;
  v81[9] = 0;
  v81[10] = 0;
  v81[11] = 0;
  v81[12] = 0;
  v81[13] = 0;
  v81[14] = 0;
  v81[15] = 0;
  v81[16] = 0;
  v81[17] = 0;
  v81[18] = 0;
  v81[19] = 0;
  v81[20] = 0;
  v81[21] = 0;
  v81[22] = 0;
  v81[23] = 0;
  v81[24] = 0;
  v81[25] = 0;
  v81[26] = 0;
  v81[27] = 0;
  v81[28] = 0;
  v81[29] = 0;
  v81[30] = 0;
  v81[31] = 0;
  (*(void (**)(__int64))(*(_QWORD*)v80 + 64LL))(v80);
  Model_a636e0(a1 + 54, *(_QWORD*)(*a1 + 312),
               *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 1024);
  v82 = a1[54];
  v83 = (*(__int64 (**)(__int64))(*(_QWORD*)v82 + 56LL))(v82);
  memset(v83, 0, 1024);
  (*(void (**)(__int64))(*(_QWORD*)v82 + 64LL))(v82);
  v87 = a1[55];
  v88 = (*(__int64 (**)(__int64))(*(_QWORD*)v87 + 56LL))(v87);
  memset(v88, 0, 1024);
  (*(void (**)(__int64))(*(_QWORD*)v87 + 64LL))(v87);
  DecalObject_a91100(a1 + 47, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 56);
  GameRoutine_b34420((void*)((__int64)&v116_.v116), *(_QWORD*)(*a1 + 13424),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"PreDFG", 6, 0);
  a1[61] = v116_.v116;
  *((_DWORD*)a1 + 124) = v116_.v117;
  GameRoutine_b34420((void*)((__int64)&v114_.v114), *(_QWORD*)(*a1 + 13424),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"CloudShape_AO", 13, 0);
  a1[63] = v114_.v114;
  *((_DWORD*)a1 + 128) = v114_.v115;
  GameRoutine_b34420((void*)((__int64)&v112_.v112), *(_QWORD*)(*a1 + 13424),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"CloudShape2_AO", 14, 0);
  a1[65] = v112_.v112;
  *((_DWORD*)a1 + 132) = v112_.v113;
  GameRoutine_b34420((void*)((__int64)&v110_.v110), *(_QWORD*)(*a1 + 13424),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"Cmn_Default_BC", 14, 0);
  v118_.v120 = 0;
  v118_.v121 = 0;
  v118_.v118 = 0;
  v118_.v119 = 0;
  v103_.v108 = v103_.v103;
  a1[67] = v110_.v110;
  *((_DWORD*)a1 + 136) = v110_.v111;
  v103_.v103[0] = GameData_1fc1520;
  GameRoutine_5fc230((__int64)&v118_.v118);
  if (v103_.v108 != nullptr) {
    (*(void (**)(_QWORD*, __int64*))(*v103_.v108 + 48LL))(v103_.v108,
                                                          &v118_.v118);
  }
  v92 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 69),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)&v118_.v118);
  a1[84] = game_615760(*(_QWORD*)(*v92 + 552), (__int64)(a1 + 69));
  if (v103_.v108 == v103_.v103) {
    v93 = 32;
  }
  else {
    if (v103_.v108 == nullptr) {
      goto LABEL_8;
    }
    v93 = 40;
  }
  (*(void (**)(__int64))(*v103_.v108 + v93))((__int64)v103_.v108);
LABEL_8:
  v118_.v120 = 0;
  v118_.v121 = 0;
  v118_.v118 = 0;
  v118_.v119 = 0;
  v103_.v103[0] = GameData_1fc15a0;
  v103_.v108 = v103_.v103;
  GameRoutine_5fc230((__int64)&v118_.v118);
  if (v103_.v108 != nullptr) {
    (*(void (**)(_QWORD*, __int64*))(*v103_.v108 + 48LL))(v103_.v108,
                                                          &v118_.v118);
  }
  GameRoutine_604060((__int64)(a1 + 85), (__int64*)(*v92 + 568),
                     (__int64)&v118_.v118);
  a1[100] = game_615760(*(_QWORD*)(*v92 + 552), (__int64)(a1 + 85));
  if (v103_.v108 == v103_.v103) {
    v94 = 32;
  }
  else {
    if (v103_.v108 == nullptr) {
      goto LABEL_15;
    }
    v94 = 40;
  }
  (*(void (**)(__int64))(*v103_.v108 + v94))((__int64)v103_.v108);
LABEL_15:
  v118_.v120 = 0;
  v118_.v121 = 0;
  v118_.v118 = 0;
  v118_.v119 = 0;
  v103_.v103[0] = GameData_1fc1620;
  v103_.v108 = v103_.v103;
  GameRoutine_5fc230((__int64)&v118_.v118);
  if (v103_.v108 != nullptr) {
    (*(void (**)(_QWORD*, __int64*))(*v103_.v108 + 48LL))(v103_.v108,
                                                          &v118_.v118);
  }
  GameRoutine_604060((__int64)(a1 + 101), (__int64*)(*v92 + 568),
                     (__int64)&v118_.v118);
  a1[116] = game_615760(*(_QWORD*)(*v92 + 552), (__int64)(a1 + 101));
  if (v103_.v108 == v103_.v103) {
    v95 = 32;
  }
  else {
    if (v103_.v108 == nullptr) {
      goto LABEL_22;
    }
    v95 = 40;
  }
  (*(void (**)(__int64))(*v103_.v108 + v95))((__int64)v103_.v108);
LABEL_22:
  v96 = *a1;
  v103_.v103[1] = 0x100000001LL;
  v103_.v104 = 0;
  v103_.v107 = 0;
  v103_.v105 = 10;
  v103_.v106 = 257;
  v103_.v103[0] = 0x100000003LL;
  v97 = *(_QWORD*)(v96 + 552);
  v103_.v108 = *(_QWORD**)(v96 + 360);
  v103_.v109 = *(_QWORD*)(v97 + 16);
  GameRoutine_53c20((void*)(&v118_.v118), (__int64)v103_.v103);
  v98 = v118_.v118;
  if (v118_.v118 != 0) {
    v99 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
    v99[2] = 0;
    v99[3] = v98;
    *v99 = &GameData_1fc16a0;
    v99[1] = 0;
  }
  else {
    v99 = nullptr;
  }
  a1[155] = v98;
  v100 = a1[156];
  v118_.v118 = 0;
  a1[156] = (__int64)v99;
  if (v100 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v100 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v100 + 16LL))(v100);
    std___1___shared_weak_count___release_weak(v100);
  }
  result = v118_.v118;
  v118_.v118 = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

void gfxa_SceneBuffers_SceneBuffers_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void gfxa_SceneBuffers_SceneBuffers_lambda1_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 0;
  a2[3] = 42;
}

void gfxa_SceneBuffers_SceneBuffers_lambda2_Invoke(__int64 a1, __int64 a2)
{
  *(_WORD*)a2 = 771;
  *(_BYTE*)(a2 + 4) = 2;
  *(_WORD*)(a2 + 6) = 42;
}

#pragma GCC visibility pop
