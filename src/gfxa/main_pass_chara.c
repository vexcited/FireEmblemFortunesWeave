#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*GameData_1fc9390[])();
extern __int64 (*GameData_1fc9420[])();
extern __int64 (*GameData_1fc94b0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_b32f30(_QWORD);
__int64 gfxa_MainPassChara_SetupSceneBuffersPass(__int64 a1, __int64* a2,
                                                 __int64 a3, __int64 a4,
                                                 __int64 a5);
__int64* GameRoutine_b3f6c0(_QWORD*, __int64);
__int64* GameRoutine_b3f800(_QWORD*, __int64);
__int64 GameRoutine_ad6000(__int64, unsigned __int64);
__int64 GameRoutine_b4fad0(_DWORD*, _QWORD*, _QWORD*, __int64*, __int64);
__int64 ResourceBuilder_b52130(int*, _QWORD*, _QWORD*, __int64*, __int64);
__int64 TaskCharaSceneBuffers_bfcea0(__int64 result, _QWORD*, int8x16_t*);
__int64 gfxa_MainPassChara_SetupOutlinePass_lambda1_Invoke(__int64 a1,
                                                           __int64 a2,
                                                           __int64* a3);
__int64 gfxa_MainPassChara_SetupMainPass_lambda3_Invoke(__int64 a1, __int64 a2,
                                                        __int64* a3);
__int64 gfxa_MainPassChara_SetupTransparentPass_lambda3_Invoke(__int64 a1,
                                                               __int64 a2,
                                                               __int64* a3);
__int64 gfxa_MainPassChara_SetupSceneBuffersPass_lambda1_Invoke(__int64 a1,
                                                                __int64 a2);

__int64 gfxa_MainPassChara_SetupSceneBuffersPass(__int64 a1, __int64* a2,
                                                 __int64 a3, __int64 a4,
                                                 __int64 a5)
{
  int v5;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  long double v29;
  __int64 v30;
  __int64 v31;
  __int64 v33;
  _QWORD v34[4];
  _QWORD* v35;
  _QWORD v36[4];
  _QWORD* v37;

  v33 = a3;
  v5 = *((_DWORD*)a2 + 24);
  v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       400, 16, 0);
  v11 = *v9;
  v36[2] = a5;
  v34[2] = a5;
  v36[0] = GameData_1fc9390;
  v36[1] = &v33;
  v37 = v36;
  v34[0] = GameData_1fc9420;
  v34[1] = a1;
  v35 = v34;
  v12 = (char*)fw_memory_HeapManager_Allocate(v11, 32, 16, 0);
  *(_DWORD*)(v10 + 80) = v5;
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 16) = 27;
  *(_QWORD*)(v10 + 24) = v12;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 152) = 0;
  *(_QWORD*)(v10 + 160) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(v10 + 248) = 0;
  *(_QWORD*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 264) = 0;
  *(_QWORD*)(v10 + 272) = 0;
  *(_QWORD*)(v10 + 280) = 0;
  strcpy(v12, "CharaSceneBuffersUpdatePass");
  v13 = v37;
  *(_BYTE*)(v10 + 84) = 1;
  *(_QWORD*)v10 = GameData_1fc94b0;
  *(_QWORD*)(v10 + 8) = 33;
  if (v13 == nullptr) {
    *(_QWORD*)(v10 + 336) = 0;
    v14 = v35;
    if (v35 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_9;
  }
  if (v13 == v36) {
    *(_QWORD*)(v10 + 336) = v10 + 304;
    (*(void (**)(_QWORD*))(*v13 + 24LL))(v13);
    v14 = v35;
    if (v35 != nullptr) {
      goto LABEL_6;
    }
  LABEL_9:
    *(_QWORD*)(v10 + 384) = 0;
    goto LABEL_16;
  }
  *(_QWORD*)(v10 + 336) = (*(__int64 (**)(_QWORD*))(*v13 + 16LL))(v13);
  v14 = v35;
  if (v35 == nullptr) {
    goto LABEL_9;
  }
LABEL_6:
  if (v14 == v34) {
    *(_QWORD*)(v10 + 384) = v10 + 352;
    (*(void (**)(_QWORD*))(*v14 + 24LL))(v14);
  }
  else {
    *(_QWORD*)(v10 + 384) = (*(__int64 (**)(_QWORD*))(*v14 + 16LL))(v14);
  }
  if (v35 == v34) {
    v15 = 32;
  }
  else {
    if (v35 == nullptr) {
      goto LABEL_16;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v35 + v15))((__int64)v35);
LABEL_16:
  v16 = (__int64)v37;
  if (v37 == v36) {
    v17 = 32;
  }
  else {
    if (v37 == nullptr) {
      goto LABEL_21;
    }
    v17 = 40;
  }
  v16 = (*(__int64 (**)(__int64))(*v37 + v17))((__int64)v37);
LABEL_21:
  v19 = (__int64*)a2[1];
  v18 = a2[2];
  if ((unsigned __int64)v19 >= v18) {
    v21 = *a2;
    v22 = (__int64)v19 - *a2;
    v23 = (v22 >> 3) + 1;
    if (v23 >> 61 != 0) {
      GameRoutine_b32f30(v16);
    }
    v24 = v18 - v21;
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
        GameRoutine_60a210(v16);
      }
      v26 = fw_memory_HeapManager_Allocate(*v9, 8 * v25, 16, 0);
    }
    else {
      v26 = 0;
    }
    v27 = v26 + 8 * v25;
    v28 = v26 + v22 - 8 * (v22 >> 3);
    *(_QWORD*)(v26 + v22) = v10;
    v20 = v26 + v22 + 8;
    memcpy(v28, v21, v22);
    *a2 = v28;
    a2[1] = v20;
    a2[2] = v27;
    if (v21 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*v9 + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*v9 + v30, v29);
    }
  }
  else {
    *v19 = v10;
    v20 = (__int64)(v19 + 1);
  }
  a2[1] = v20;
  v31 = *(_QWORD*)(v20 - 8);
  v36[0] = a2;
  v36[1] = v31;
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v31 + 16LL))(v31, v36);
}

__int64 gfxa_MainPassChara_SetupOutlinePass_lambda1_Invoke(__int64 a1,
                                                           __int64 a2,
                                                           __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int8x16_t* v11;
  _QWORD* v12;
  _QWORD* v13;
  bool v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  int8x16_t v18;
  struct {
    __int64 v20;
    bool v21;
    char v22;
    char gap10_[6];
    __int64 v23;
    int v24;
  } v20_;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v20_.v22 = 0;
  v20_.v20 = *(_QWORD*)(v3 + 24);
  v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 216LL);
  v8 = 608;
  if (*(_BYTE*)(v7 + 576) != 0) {
    v8 = 572;
  }
  v20_.v21 = *(_DWORD*)(v7 + v8) != 1;
  v9 = GameRoutine_ad6000((__int64)"CharaOutline", 0xCu);
  v10 = v3 + 128;
  v11 = *(int8x16_t**)(v3 + 80);
  v20_.v24 = v9;
  v13 = *(_QWORD**)a2;
  v12 = *(_QWORD**)(a2 + 8);
  v20_.v23 = v10;
  LODWORD(v10) = LANES128(v11[1]).n128_u32[2];
  v14 = (int)v10 < -1;
  v15 = ((_BYTE)v10 + 1) & 1;
  if (v14) {
    v15 = -v15;
  }
  LANES128(v11[1]).n128_u32[2] = v15;
  v16 = LANES128(*(v11)).n128_u64[v15 + 1];
  v17 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v16 + 56LL))(v16);
  v18 = v11[4];
  *(_QWORD*)v17 = LANES128(v18).n128_u64[0];
  *(_QWORD*)(v17 + 8) = LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0];
  *(_DWORD*)(v17 + 16) = LANES128(v11[5]).n128_u32[0];
  *(_DWORD*)(v17 + 20) = LANES128(v11[5]).n128_u32[1];
  (*(void (**)(unsigned __int64))(*(_QWORD*)v16 + 64LL))(v16);
  return ResourceBuilder_b52130((int*)v11, v13, v12, a3, (__int64)&v20_.v20);
}

__int64 gfxa_MainPassChara_SetupMainPass_lambda3_Invoke(__int64 a1, __int64 a2,
                                                        __int64* a3)
{

#pragma clang fp contract(off)
  _QWORD* v3;
  _BYTE* v4;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  int8x16_t* v15;
  int8x16_t v16;
  int8x16_t v17;
  unsigned int v18;
  __int64* v19;
  int8x16_t v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned int v23;
  int8x16_t v24;
  char v25;
  _DWORD* v26;
  struct {
    _QWORD v28[4];
    bool v29;
    char v30;
    char gap34_[14];
    int8x16_t v31;
    __int64 v32;
    __int64 v33;
  } v28_;

  v3 = *(_QWORD**)(a1 + 8);
  v4 = *(_BYTE**)(a2 + 24);
  v28_.v28[0] = v3[3];
  v8 = (_QWORD*)(*v3 + 13304LL);
  if (*(_BYTE*)(*v3 + 16700LL) != 0) {
    v8 = (_QWORD*)(*(_QWORD*)(*v3 + 16672LL) + 24LL);
  }
  v28_.v28[1] = *v8;
  v9 = v3[10] + 8LL;
  v28_.v28[2] = v3 + 16;
  v28_.v28[3] = v9;
  v10 = *(_QWORD*)(*(_QWORD*)v4 + 8LL);
  v11 = *(_QWORD*)(v10 + 232);
  v12 = 2216;
  if (*(_BYTE*)(v11 + 2184) != 0) {
    v12 = 2180;
  }
  v28_.v29 = *(float*)(v11 + v12) > 0x0.0p+0f;
  v28_.v32 = *(_QWORD*)(v10 + 8);
  v13 = v3[1];
  v14 = GameRoutine_b3f6c0((_QWORD*)(*(_QWORD*)(v13 + 288) + 592LL),
                           (__int64)"Sun");
  v16 = *((int8x16_t*)v14 + 3);
  v15 = (int8x16_t*)(v14 + 6);
  v17 = v16;
  if (LANES128(v15[4]).n128_u8[0] != 0) {
    v18 = -1;
  }
  else {
    v18 = 0;
  }
  if (LANES128_OF(vbslq_s8(vdupq_n_s32(v18), v15[3], v17)).n128_f32[1] >
      0x0.0p+0f) {
    v19 = GameRoutine_b3f800((_QWORD*)(*(_QWORD*)(v13 + 288) + 592LL),
                             (__int64)"Moon");
    v20 = *((int8x16_t*)v19 + 3);
    v15 = (int8x16_t*)(v19 + 6);
    v17 = v20;
  }
  v21 = *(_QWORD**)a2;
  v22 = *(_QWORD**)(a2 + 8);
  if (LANES128(v15[4]).n128_u8[0] != 0) {
    v23 = -1;
  }
  else {
    v23 = 0;
  }
  v24 = vbslq_s8(vdupq_n_s32(v23), v15[3], v17);
  v28_.v33 = *(_QWORD*)(a1 + 16);
  v25 = v4[118];
  v26 = (_DWORD*)v3[8];
  v28_.v31 = v24;
  v28_.v30 = v25;
  return GameRoutine_b4fad0(v26, v21, v22, a3, (__int64)v28_.v28);
}

__int64 gfxa_MainPassChara_SetupTransparentPass_lambda3_Invoke(__int64 a1,
                                                               __int64 a2,
                                                               __int64* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  int8x16_t* v12;
  bool v13;
  int v14;
  unsigned __int64 v15;
  __int64 v16;
  int8x16_t v17;
  struct {
    __int64 v19;
    bool v20;
    char v21;
    char gap10_[6];
    __int64 v22;
    int v23;
  } v19_;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a2 + 24);
  v19_.v19 = *(_QWORD*)(v3 + 24);
  v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v4 + 8LL) + 216LL);
  v8 = 608;
  if (*(_BYTE*)(v7 + 576) != 0) {
    v8 = 572;
  }
  v19_.v20 = *(_DWORD*)(v7 + v8) != 1;
  v19_.v23 = GameRoutine_ad6000((__int64)"CharaTransparentOutline", 0x17u);
  v10 = *(_QWORD**)a2;
  v9 = *(_QWORD**)(a2 + 8);
  v19_.v21 = 1;
  v11 = v3 + 128;
  v12 = *(int8x16_t**)(v3 + 80);
  v19_.v22 = v11;
  LODWORD(v11) = LANES128(v12[1]).n128_u32[2];
  v13 = (int)v11 < -1;
  v14 = ((_BYTE)v11 + 1) & 1;
  if (v13) {
    v14 = -v14;
  }
  LANES128(v12[1]).n128_u32[2] = v14;
  v15 = LANES128(*(v12)).n128_u64[v14 + 1];
  v16 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)v15 + 56LL))(v15);
  v17 = v12[4];
  *(_QWORD*)v16 = LANES128(v17).n128_u64[0];
  *(_QWORD*)(v16 + 8) = LANES128_OF(vextq_s8(v17, v17, 8u)).n128_u64[0];
  *(_DWORD*)(v16 + 16) = LANES128(v12[5]).n128_u32[0];
  *(_DWORD*)(v16 + 20) = LANES128(v12[5]).n128_u32[1];
  (*(void (**)(unsigned __int64))(*(_QWORD*)v15 + 64LL))(v15);
  return ResourceBuilder_b52130((int*)v12, v10, v9, a3, (__int64)&v19_.v19);
}

__int64 gfxa_MainPassChara_SetupSceneBuffersPass_lambda1_Invoke(__int64 a1,
                                                                __int64 a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  int8x16_t* v14;
  int8x16_t v15;
  int8x16_t v16;
  unsigned int v17;
  __int64* v18;
  int8x16_t v19;
  int8x16_t v20;
  __int64 v21;
  unsigned int v22;
  _QWORD* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int128 v27;
  __int64 v28;
  _QWORD* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  struct {
    int8x16_t v38;
    __int64 v39;
    int v40;
    char gap28_[4];
    __int64 v41;
    int v42;
    char gap44_[4];
    __int64 v43;
    char gap56_[8];
    int8x16_t v44;
    __int128 v45;
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
  } v38_;

  v2 = *(_QWORD**)(a2 + 24);
  v3 = *(_QWORD*)(a1 + 8);
  v6 = *(_QWORD*)(v3 + 8);
  LANES128(v38_.v38).n128_u64[0] = v2[6];
  LANES128(v38_.v38).n128_u32[2] = *((_DWORD*)v2 + 14);
  v38_.v39 = v2[8];
  v38_.v40 = *((_DWORD*)v2 + 18);
  v7 = *(_QWORD**)(*v2 + 8LL);
  v38_.v43 = v2[1];
  v8 = *(_QWORD*)(v6 + 288);
  v9 = v7[27];
  v10 = v7[28];
  v11 = v7[2];
  v38_.v47 = v9;
  v38_.v48 = v10;
  v12 = *(_QWORD*)(v8 + 1008);
  v38_.v53 = v11;
  v38_.v41 = v12;
  v38_.v42 = *(_DWORD*)(v8 + 1016);
  v13 = GameRoutine_b3f6c0((_QWORD*)(v8 + 592), (__int64)"Sun");
  v15 = *((int8x16_t*)v13 + 3);
  v14 = (int8x16_t*)(v13 + 6);
  v16 = v15;
  if (LANES128(v14[4]).n128_u8[0] != 0) {
    v17 = -1;
  }
  else {
    v17 = 0;
  }
  if (LANES128_OF(vbslq_s8(vdupq_n_s32(v17), v14[3], v16)).n128_f32[1] >
      0x0.0p+0f) {
    v18 = GameRoutine_b3f800((_QWORD*)(*(_QWORD*)(v6 + 288) + 592LL),
                             (__int64)"Moon");
    v19 = *((int8x16_t*)v18 + 3);
    v14 = (int8x16_t*)(v18 + 6);
    v16 = v19;
  }
  v20 = v14[3];
  v21 = *(_QWORD*)(v3 + 8);
  if (LANES128(v14[4]).n128_u8[0] != 0) {
    v22 = -1;
  }
  else {
    v22 = 0;
  }
  v23 = (_QWORD*)(*(_QWORD*)(v21 + 288) + 592LL);
  v38_.v44 = vbslq_s8(vdupq_n_s32(v22), v20, v16);
  v24 = GameRoutine_b3f6c0(v23, (__int64)"Sun");
  v25 = 6;
  if (*((_BYTE*)v24 + 112) != 0) {
    v25 = 12;
  }
  if (*((float*)&v24[v25] + 1) > 0x0.0p+0f) {
    v24 = GameRoutine_b3f800((_QWORD*)(*(_QWORD*)(v21 + 288) + 592LL),
                             (__int64)"Moon");
  }
  v26 = *(_QWORD*)(a1 + 16);
  v27 = *((_OWORD*)v24 + 4);
  v28 = *(_QWORD*)(v3 + 120);
  v29 = *(_QWORD**)a2;
  v30 = *(__int64**)(*v2 + 8LL);
  v38_.v54 = v2[5];
  v31 = *(_QWORD*)(v3 + 8);
  v38_.v46 = v26;
  v38_.v45 = v27;
  v33 = *v30;
  v32 = v30[1];
  v34 = v30[10];
  v35 = v30[11];
  v36 = *(_QWORD*)(v31 + 288);
  v38_.v49 = v32;
  v38_.v50 = v33;
  v38_.v51 = v34;
  v38_.v52 = v35;
  v38_.v55 = v36;
  return TaskCharaSceneBuffers_bfcea0(v28, v29, &v38_.v38);
}

#pragma GCC visibility pop
