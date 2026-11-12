#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_604020(_QWORD* result);
_QWORD* GameRoutine_ad5000(_QWORD*, __int64, unsigned __int64, int);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
__int64 GameRoutine_ad5280(__int64*);
__int64 Model_a636e0(__int64*, __int64, __int64, __int64);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fc6850[])();
extern __int64 (*GameData_1fc68d0[])();
extern __int64* game_g_frame_clock_ptr[3];
__int64 gfxa_TaskExposure_Impl_Impl_alt1(
    __int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
    __int64 a6) __asm__("gfxa_TaskExposure_Impl_Impl");
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 memset_alt1(_QWORD, _QWORD, _QWORD) __asm__("memset");
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e738;
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 TaskExposure_b63e60(__int64* a1, _QWORD* a2, _DWORD* a3);
__int64 TaskExposure_b64600(__int64 a1, _QWORD* a2, _QWORD* a3, __int64* a4,
                            unsigned int* a5);
__int64 GameHr_ad5280(_QWORD*);
__int64 game_615760(__int64, __int64);
__int64 memset_alt2(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern int GameData_21fdeb8_alt1 __asm__("GameData_21fdeb8");
__int64 gfxa_TaskExposure_Impl_Impl(__int64* a1, __int64 a2);

__int64 gfxa_TaskExposure_Impl_Impl(__int64* a1, __int64 a2)
{
  __int64 v3;
  __int64 (**v4)();
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 (**v8)();
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 (**v13)();
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 (**v19)();
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  __int64 (**v25)();
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 (**v31)();
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  __int64 (**v37)();
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 (**v41)();
  __int64 v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 (**v46)();
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 (**v50)();
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  __int64 (**v55)();
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 (**v60)();
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 (**v64)();
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 (**v69)();
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  __int64* v74;
  __int64 v75;
  __int64 result;
  __int64 v77;
  struct {
    __int64 (**v78)();
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 (***v82)();
  } v78_;
  struct {
    _QWORD v83[2];
    __int64 v84;
    __int64 v85;
  } v83_;

  *a1 = a2;
  a1[84] = 0;
  a1[85] = 0;
  a1[86] = 0;
  a1[87] = 0;
  memset_alt2((__int64)(a1 + 1), 0, 0x144u);
  a1[42] = 0;
  a1[43] = 0;
  a1[44] = 0;
  a1[45] = 0;
  a1[46] = 0;
  a1[47] = 0;
  *((_DWORD*)a1 + 96) = 0;
  a1[49] = 0;
  a1[50] = 0;
  a1[51] = 0;
  a1[52] = 0;
  a1[53] = 0;
  a1[54] = 0;
  *((_DWORD*)a1 + 110) = 0;
  a1[56] = 0;
  a1[57] = 0;
  a1[58] = 0;
  a1[59] = 0;
  a1[60] = 0;
  a1[61] = 0;
  *((_DWORD*)a1 + 124) = 0;
  *((_DWORD*)a1 + 138) = 0;
  a1[68] = 0;
  a1[67] = 0;
  a1[66] = 0;
  a1[65] = 0;
  a1[63] = 0;
  a1[64] = 0;
  *((_DWORD*)a1 + 152) = 0;
  a1[75] = 0;
  a1[74] = 0;
  a1[73] = 0;
  a1[72] = 0;
  a1[71] = 0;
  a1[70] = 0;
  *((_DWORD*)a1 + 166) = 0;
  a1[82] = 0;
  a1[81] = 0;
  a1[80] = 0;
  a1[79] = 0;
  a1[78] = 0;
  a1[77] = 0;
  GameRoutine_604020(a1 + 88);
  a1[103] = -1;
  GameRoutine_604020(a1 + 104);
  a1[119] = -1;
  GameRoutine_604020(a1 + 120);
  v3 = *a1;
  a1[135] = -1;
  *((_WORD*)a1 + 544) = 0;
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(v3 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumHistogram", 0xCu);
  v4 = v78_.v78;
  v5 = v78_.v79;
  v6 = a1[2];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[1] = (__int64)v4;
  a1[2] = v5;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  GameHr_ad5280((_QWORD*)a1[1]);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumAverage", 0xAu);
  v8 = v78_.v78;
  v9 = v78_.v79;
  v10 = a1[4];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[3] = (__int64)v8;
  a1[4] = v9;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt1(v10);
  }
  v11 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  v12 = GameRoutine_ad5000((_QWORD*)a1[3], (__int64)"clear_ev", 8u, 1);
  GameHr_ad5280(v12);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumAverage", 0xAu);
  v13 = v78_.v78;
  v14 = v78_.v79;
  v15 = a1[6];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[5] = (__int64)v13;
  a1[6] = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  v16 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
  }
  v17 = GameRoutine_ad5000((_QWORD*)a1[5], (__int64)"comp_ev", 7u, 0);
  v18 = GameRoutine_ad5000(v17, (__int64)"comp_ev_ch1", 0xBu, 0);
  GameHr_ad5280(v18);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumAverage", 0xAu);
  v19 = v78_.v78;
  v20 = v78_.v79;
  v21 = a1[8];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[7] = (__int64)v19;
  a1[8] = v20;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak_alt1(v21);
  }
  v22 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak_alt1(v22);
  }
  v23 = GameRoutine_ad5000((_QWORD*)a1[7], (__int64)"comp_ev", 7u, 1);
  v24 = GameRoutine_ad5000(v23, (__int64)"comp_ev_ch1", 0xBu, 0);
  GameHr_ad5280(v24);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumAverage", 0xAu);
  v25 = v78_.v78;
  v26 = v78_.v79;
  v27 = a1[10];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[9] = (__int64)v25;
  a1[10] = v26;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak_alt1(v27);
  }
  v28 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak_alt1(v28);
  }
  v29 = GameRoutine_ad5000((_QWORD*)a1[9], (__int64)"comp_ev", 7u, 0);
  v30 = GameRoutine_ad5000(v29, (__int64)"comp_ev_ch1", 0xBu, 1);
  GameHr_ad5280(v30);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumAverage", 0xAu);
  v31 = v78_.v78;
  v32 = v78_.v79;
  v33 = a1[12];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[11] = (__int64)v31;
  a1[12] = v32;
  if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    std___1___shared_weak_count___release_weak_alt1(v33);
  }
  v34 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
    std___1___shared_weak_count___release_weak_alt1(v34);
  }
  v35 = GameRoutine_ad5000((_QWORD*)a1[11], (__int64)"comp_ev", 7u, 1);
  v36 = GameRoutine_ad5000(v35, (__int64)"comp_ev_ch1", 0xBu, 1);
  GameHr_ad5280(v36);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"ExposureSpotLighting", 0x14u);
  v37 = v78_.v78;
  v38 = v78_.v79;
  v39 = a1[24];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[23] = (__int64)v37;
  a1[24] = v38;
  if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    std___1___shared_weak_count___release_weak_alt1(v39);
  }
  v40 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    std___1___shared_weak_count___release_weak_alt1(v40);
  }
  GameHr_ad5280((_QWORD*)a1[23]);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"ExposureSpotLighting", 0x14u);
  v41 = v78_.v78;
  v42 = v78_.v79;
  v43 = a1[26];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[25] = (__int64)v41;
  a1[26] = v42;
  if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
    std___1___shared_weak_count___release_weak_alt1(v43);
  }
  v44 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
    std___1___shared_weak_count___release_weak_alt1(v44);
  }
  v45 = GameRoutine_ad5000((_QWORD*)a1[25], (__int64)"co_fix_mode", 0xBu, 1);
  GameHr_ad5280(v45);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"ExposureComp", 0xCu);
  v46 = v78_.v78;
  v47 = v78_.v79;
  v48 = a1[28];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[27] = (__int64)v46;
  a1[28] = v47;
  if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    std___1___shared_weak_count___release_weak_alt1(v48);
  }
  v49 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
    std___1___shared_weak_count___release_weak_alt1(v49);
  }
  GameHr_ad5280((_QWORD*)a1[27]);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"ExposureComp", 0xCu);
  v50 = v78_.v78;
  v51 = v78_.v79;
  v52 = a1[30];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[29] = (__int64)v50;
  a1[30] = v51;
  if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    std___1___shared_weak_count___release_weak_alt1(v52);
  }
  v53 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    std___1___shared_weak_count___release_weak_alt1(v53);
  }
  v54 = GameRoutine_ad5000((_QWORD*)a1[29], (__int64)"enable_contrast_control",
                           0x17u, 1);
  GameHr_ad5280(v54);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"filter", 6u, (__int64)"blurDepth",
                                  9u);
  v55 = v78_.v78;
  v56 = v78_.v79;
  v57 = a1[32];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[31] = (__int64)v55;
  a1[32] = v56;
  if (v57 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
    std___1___shared_weak_count___release_weak_alt1(v57);
  }
  v58 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
    std___1___shared_weak_count___release_weak_alt1(v58);
  }
  v59 = GameRoutine_ad5000((_QWORD*)a1[31], (__int64)"kernel_type", 0xBu, 1);
  GameHr_ad5280(v59);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumContrastBlur", 0xFu);
  v60 = v78_.v78;
  v61 = v78_.v79;
  v62 = a1[34];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[33] = (__int64)v60;
  a1[34] = v61;
  if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
    std___1___shared_weak_count___release_weak_alt1(v62);
  }
  v63 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
    std___1___shared_weak_count___release_weak_alt1(v63);
  }
  GameHr_ad5280((_QWORD*)a1[33]);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumContrastBlur", 0xFu);
  v64 = v78_.v78;
  v65 = v78_.v79;
  v66 = a1[36];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[35] = (__int64)v64;
  a1[36] = v65;
  if (v66 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
    std___1___shared_weak_count___release_weak_alt1(v66);
  }
  v67 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
    std___1___shared_weak_count___release_weak_alt1(v67);
  }
  v68 = GameRoutine_ad5000((_QWORD*)a1[35], (__int64)"mode", 4u, 1);
  GameHr_ad5280(v68);
  gfx_shader_Archive_CreateShader((void*)(&v78_.v78), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumContrastBlur", 0xFu);
  v69 = v78_.v78;
  v70 = v78_.v79;
  v71 = a1[38];
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  a1[37] = (__int64)v69;
  a1[38] = v70;
  if (v71 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
    std___1___shared_weak_count___release_weak_alt1(v71);
  }
  v72 = v78_.v79;
  if (v78_.v79 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
    std___1___shared_weak_count___release_weak_alt1(v72);
  }
  v73 = GameRoutine_ad5000((_QWORD*)a1[37], (__int64)"mode", 4u, 2);
  GameHr_ad5280(v73);
  DecalObject_a91100(a1 + 46, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 76);
  DecalObject_a91100(a1 + 53, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 72);
  DecalObject_a91100(a1 + 39, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 104);
  DecalObject_a91100(a1 + 67, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 12);
  DecalObject_a91100(a1 + 74, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 12);
  DecalObject_a91100(a1 + 60, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 40);
  Model_a636e0(a1 + 81, *(_QWORD*)(*a1 + 312),
               *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 0x80000);
  v78_.v80 = 0;
  v78_.v81 = 0;
  v78_.v78 = nullptr;
  v78_.v79 = 0;
  GameRoutine_5fc230((__int64)&v78_.v78);
  v74 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 88),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)&v78_.v78);
  a1[103] = game_615760(*(_QWORD*)(*v74 + 552), (__int64)(a1 + 88));
  v78_.v82 = &v78_.v78;
  v83_.v84 = 0;
  v83_.v85 = 0;
  v83_.v83[0] = 0;
  v83_.v83[1] = 0;
  v78_.v78 = GameData_1fc6850;
  GameRoutine_5fc230((__int64)v83_.v83);
  if (v78_.v82 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v78_.v82)[6])(v78_.v82,
                                                             v83_.v83);
  }
  GameRoutine_604060((__int64)(a1 + 104), (__int64*)(*v74 + 568),
                     (__int64)v83_.v83);
  a1[119] = game_615760(*(_QWORD*)(*v74 + 552), (__int64)(a1 + 104));
  if (v78_.v82 == &v78_.v78) {
    v75 = 4;
  }
  else {
    if (v78_.v82 == nullptr) {
      goto LABEL_92;
    }
    v75 = 5;
  }
  ((__int64 (*)(__int64))(*v78_.v82)[v75])((__int64)v78_.v82);
LABEL_92:
  v83_.v84 = 0;
  v83_.v85 = 0;
  v83_.v83[0] = 0;
  v83_.v83[1] = 0;
  v78_.v78 = GameData_1fc68d0;
  v78_.v82 = &v78_.v78;
  GameRoutine_5fc230((__int64)v83_.v83);
  if (v78_.v82 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v78_.v82)[6])(v78_.v82,
                                                             v83_.v83);
  }
  GameRoutine_604060((__int64)(a1 + 120), (__int64*)(*v74 + 568),
                     (__int64)v83_.v83);
  a1[135] = game_615760(*(_QWORD*)(*v74 + 552), (__int64)(a1 + 120));
  result = (__int64)v78_.v82;
  if (v78_.v82 == &v78_.v78) {
    v77 = 4;
    goto LABEL_98;
  }
  if (v78_.v82 != nullptr) {
    v77 = 5;
  LABEL_98:
    result = ((__int64 (*)(__int64))(*v78_.v82)[v77])((__int64)v78_.v82);
  }
  *((_BYTE*)a1 + 1088) = 1;
  return result;
}

__int64 TaskExposure_b63e60(__int64* a1, _QWORD* a2, _DWORD* a3)
{
  int v3;
  __int64 v4;
  bool v8;
  bool v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 (**v27)(__int64);
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v3 = *((_DWORD*)a1 + 82);
  v4 = *a1;
  v9 = __OFADD__(v3, 1);
  v8 = v3 + 1 < 0;
  v10 = ((_BYTE)v3 + 1) & 1;
  if (v8 != v9) {
    v10 = -v10;
  }
  *((_DWORD*)a1 + 82) = v10;
  v11 = a1[v10 + 39];
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11);
  v13 = (_QWORD*)v12;
  v14 = *(_DWORD*)(*(_QWORD*)a3 + 76LL);
  v15 = *(_QWORD*)(*(_QWORD*)a3 + 68LL);
  *(_DWORD*)(v12 + 12) = 0;
  *(_QWORD*)v12 = v15;
  *(_DWORD*)(v12 + 8) = v14;
  *(_DWORD*)(v12 + 48) = *(_DWORD*)(*(_QWORD*)a3 + 116LL);
  v16 = a3[5];
  *(_DWORD*)(v12 + 56) = 0;
  *(_DWORD*)(v12 + 52) = v16;
  if ((int)a3[4] >= 1) {
    v17 = 0;
    v18 = 0;
    do {
      v19 = 1 << v18++;
      v17 |= v19;
      *(_DWORD*)(v12 + 56) = v17;
    } while (v18 < a3[4]);
  }
  *(_QWORD*)(v12 + 16) = 0x3FD625C13A83126FLL;
  *(_QWORD*)(v12 + 24) = 1098907648;
  v20 = a3[2];
  v9 = __OFADD__(v20, 31);
  v21 = v20 + 31;
  v8 = v20 + 31 < 0;
  v22 = v20 + 62;
  if (v8 == v9) {
    v22 = v21;
  }
  *(_DWORD*)(v12 + 32) = v22 >> 5;
  v23 = a3[3];
  v9 = __OFADD__(v23, 31);
  v24 = v23 + 31;
  v8 = v23 + 31 < 0;
  v25 = v23 + 62;
  if (v8 == v9) {
    v25 = v24;
  }
  *(_DWORD*)(v12 + 36) = v25 >> 5;
  *(_QWORD*)(v12 + 40) = 16;
  v26 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  (*(void (**)(__int64))(*(_QWORD*)v26 + 40LL))(v26);
  v27 = (__int64 (**)(__int64))GameData_212e4d8[0];
  v13[8] =
      (*(__int64 (**)(__int64))GameData_212e4d8[0])(*(_QWORD*)(v4 + 256) + 8LL);
  v28 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  (*(void (**)(__int64))(*(_QWORD*)v28 + 40LL))(v28);
  v13[9] = (*v27)(*(_QWORD*)(v4 + 256) + 8LL);
  v29 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
  (*(void (**)(__int64))(*(_QWORD*)v29 + 40LL))(v29);
  v13[10] = (*v27)(*(_QWORD*)(v4 + 256) + 8LL);
  v30 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]);
  (*(void (**)(__int64))(*(_QWORD*)v30 + 40LL))(v30);
  v13[11] = (*v27)(*(_QWORD*)(v4 + 256) + 8LL);
  v13[12] = ((__int64 (*)(__int64, _QWORD, _QWORD))*v27)(
      *(_QWORD*)(v4 + 256) + 8LL, (unsigned int)a3[8],
      *((unsigned int*)a1 + 206));
  return (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11);
}

__int64 TaskExposure_b64600(__int64 a1, _QWORD* a2, _QWORD* a3, __int64* a4,
                            unsigned int* a5)
{

#pragma clang fp contract(off)
  int v10;
  bool v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  void (**v28)(__int64, __int64);
  int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  unsigned int v38;
  int v39;
  int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  signed int v55;
  int v56;
  int v57;
  int v58;
  __int64 v59;
  int v60;
  bool v61;
  int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  unsigned int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  unsigned int v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  unsigned int v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  unsigned int v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned int v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  unsigned int v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;

  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(a1 + 1089) = *(_BYTE*)(*((_QWORD*)a5 + 1) + 120LL);
  v10 = *(_DWORD*)(a1 + 440);
  v11 = v10 < -1;
  v12 = ((_BYTE)v10 + 1) & 1;
  if (v11) {
    v12 = -v12;
  }
  *(_DWORD*)(a1 + 440) = v12;
  v13 = *(_QWORD*)(a1 + 8LL * v12 + 424);
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 56LL))(v13),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = *((_QWORD*)a5 + 1);
  v16 = *(_DWORD*)(v15 + 16);
  v17 = *(_QWORD*)(v15 + 8);
  *(_DWORD*)(v14 + 12) = 0;
  *(_QWORD*)v14 = v17;
  *(_DWORD*)(v14 + 8) = v16;
  v18 = *((_QWORD*)a5 + 1);
  v19 = *(_DWORD*)(v18 + 28);
  v20 = *(_DWORD*)(v18 + 56);
  *(_QWORD*)(v14 + 16) = *(_QWORD*)(v18 + 20);
  *(_DWORD*)(v14 + 24) = v19;
  *(_DWORD*)(v14 + 28) = v20;
  v21 = *((_QWORD*)a5 + 1);
  v22 = *(_DWORD*)(v21 + 40);
  v23 = *(_DWORD*)(v21 + 60);
  *(_QWORD*)(v14 + 32) = *(_QWORD*)(v21 + 32);
  *(_DWORD*)(v14 + 40) = v22;
  *(_DWORD*)(v14 + 44) = v23;
  v24 = *((_QWORD*)a5 + 1);
  v25 = *(_DWORD*)(v24 + 52);
  v26 = *(_DWORD*)(v24 + 64);
  v27 = *(_QWORD*)(v24 + 44);
  *(_DWORD*)(v14 + 64) = 1077936128;
  *(_QWORD*)(v14 + 48) = v27;
  *(_DWORD*)(v14 + 56) = v25;
  *(_DWORD*)(v14 + 60) = v26;
  *(_DWORD*)(v14 + 68) = *(_DWORD*)(*((_QWORD*)a5 + 1) + 4LL);
  (*(void (**)(__int64))(*(_QWORD*)v13 + 64LL))(v13),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = (void (**)(__int64, __int64))GameData_212e738,
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a1 + 1089) == 1) {
    v29 = *(_DWORD*)(a1 + 664);
    v11 = v29 < -1;
    v30 = ((_BYTE)v29 + 1) & 1;
    if (v11) {
      v30 = -v30;
    }
    *(_DWORD*)(a1 + 664) = v30;
    v31 = *(_QWORD*)(a1 + 8LL * v30 + 648);
    v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 56LL))(v31),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    memset_alt2(v32, 0, 0x80000u),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))(*(_QWORD*)v31 + 64LL))(v31),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v33 = *(_DWORD*)(a1 + 496);
    v11 = v33 < -1;
    v34 = ((_BYTE)v33 + 1) & 1;
    if (v11) {
      v34 = -v34;
    }
    *(_DWORD*)(a1 + 496) = v34;
    v35 = *(_QWORD*)(a1 + 8LL * v34 + 480);
    v36 = (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 56LL))(v35),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v37 = (int)*a5 / 2;
    *(_DWORD*)v36 = v37;
    v38 = (int)a5[1] / 2;
    *(_DWORD*)(v36 + 4) = v38;
    *(_DWORD*)(v36 + 8) = vcvtps_s32_f32(vcvts_n_f32_s32(v37, 4u)) - 1;
    *(_DWORD*)(v36 + 12) = vcvtps_s32_f32(vcvts_n_f32_s32(v38, 4u)) - 1;
    v39 = *(_DWORD*)(*((_QWORD*)a5 + 1) + 124LL);
    *(_QWORD*)(v36 + 28) = 0x41CB3333C16A4D3CLL;
    *(float*)(v36 + 16) = vcvts_n_f32_s32(v37, 0xAu);
    *(_DWORD*)(v36 + 36) = 1025589893;
    *(float*)(v36 + 20) = vcvts_n_f32_s32(v38, 9u);
    *(_DWORD*)(v36 + 24) = v39;
    (*(void (**)(__int64))(*(_QWORD*)v35 + 64LL))(v35),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v40 = *(_DWORD*)(a1 + 552);
    v11 = v40 < -1;
    v41 = ((_BYTE)v40 + 1) & 1;
    if (v11) {
      v41 = -v41;
    }
    *(_DWORD*)(a1 + 552) = v41;
    v42 = *(_QWORD*)(a1 + 8LL * v41 + 536);
    v43 = (*(__int64 (**)(__int64))(*(_QWORD*)v42 + 56LL))(v42),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_DWORD*)(v43 + 8) = 0;
    *(_QWORD*)v43 = 1015021568;
    (*(void (**)(__int64))(*(_QWORD*)v42 + 64LL))(v42),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v44 = *(_DWORD*)(a1 + 608);
    v11 = v44 < -1;
    v45 = ((_BYTE)v44 + 1) & 1;
    if (v11) {
      v45 = -v45;
    }
    *(_DWORD*)(a1 + 608) = v45;
    v46 = *(_QWORD*)(a1 + 8LL * v45 + 592);
    v47 = (*(__int64 (**)(__int64))(*(_QWORD*)v46 + 56LL))(v46),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_DWORD*)(v47 + 8) = 0;
    *(_QWORD*)v47 = 0x3D00000000000000LL;
    (*(void (**)(__int64))(*(_QWORD*)v46 + 64LL))(v46),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_Reset(a4[1]),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_SetCommandList(a4[1], *a4),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v48 = a4[1];
    gxc_NvnStateCache_BindDepthStencilState(v48, GameData_21fdeb8_alt1),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_BindBlendState(v48, GameData_21fdee0),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_BindPolygonState(v48, GameData_21fdf08),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_BindMultisampleState(v48, GameData_21fdf14),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_ClearCommandList(a4[1]),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + 264) + 144LL)),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v49 = *a4;
    v50 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v51 = (*(__int64 (**)(__int64))(*(_QWORD*)v50 + 40LL))(v50),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD))(
        *(_QWORD*)v49 + 240LL))(v49, 8, 0, v51, v52),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v53 = a1 + 16LL * *(int*)(a1 + 496);
    (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 8, 0, *(_QWORD*)(v53 + 504),
                                *(_QWORD*)(v53 + 512)),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v54 = a1 + 16LL * *(int*)(a1 + 664);
    (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 232LL))(*a4, 8, 0, *(_QWORD*)(v54 + 672),
                                *(_QWORD*)(v54 + 680)),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v55 = a5[1];
    v56 = (int)*a5 / 2;
    v57 = v56 + 15;
    v11 = v56 < -15;
    v58 = v56 + 30;
    if (!v11) {
      v58 = v57;
    }
    v59 = (unsigned int)(v58 >> 4);
    v60 = v55 / 2;
    v61 = __OFADD__(v55 / 2, 15);
    v62 = v55 / 2 + 15;
    v63 = v60 + 30;
    if (v62 < 0 == v61) {
      v63 = v62;
    }
    (*(void (**)(__int64, __int64, _QWORD, __int64))(*(_QWORD*)*a4 + 304LL))(
        *a4, v59, (unsigned int)(v63 >> 4), 1),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*v28)(*a4 + 8, 33);
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + 280) + 144LL)),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v64 = *a4;
    v65 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v66 = (*(__int64 (**)(__int64))(*(_QWORD*)v65 + 48LL))(v65),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v64 + 256LL))(
        v64, 8, 1, v66),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v67 = *a4;
    v68 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v69 = (*(__int64 (**)(__int64))(*(_QWORD*)v68 + 48LL))(v68),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v67 + 256LL))(
        v67, 8, 2, v69),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)*a4 + 304LL))(
        *a4, 64, 32, 1),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*v28)(*a4 + 8, 49);
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + 296) + 144LL)),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v70 = a1 + 16LL * *(int*)(a1 + 552);
    (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 8, 0, *(_QWORD*)(v70 + 560),
                                *(_QWORD*)(v70 + 568)),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v71 = *a4;
    v72 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v73 = (*(__int64 (**)(__int64))(*(_QWORD*)v72 + 40LL))(v72),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v71 + 248LL))(v71, 8, 0, v73, v74,
                                *(unsigned int*)(a1 + 952)),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v75 = *a4;
    v76 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[5] + 16LL))(a3[5]),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v77 = (*(__int64 (**)(__int64))(*(_QWORD*)v76 + 48LL))(v76),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v75 + 256LL))(
        v75, 8, 1, v77),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)*a4 + 304LL))(
        *a4, 8, 8, 8),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*v28)(*a4 + 8, 49);
    v78 = a1 + 16LL * *(int*)(a1 + 608);
    (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 8, 0, *(_QWORD*)(v78 + 616),
                                *(_QWORD*)(v78 + 624)),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v79 = *a4;
    v80 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v81 = (*(__int64 (**)(__int64))(*(_QWORD*)v80 + 48LL))(v80),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v79 + 256LL))(
        v79, 8, 1, v81),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v82 = *a4;
    v83 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[5] + 16LL))(a3[5]),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v84 = (*(__int64 (**)(__int64))(*(_QWORD*)v83 + 40LL))(v83),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v82 + 248LL))(v82, 8, 0, v84, v85,
                                *(unsigned int*)(a1 + 952)),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)*a4 + 304LL))(
        *a4, 8, 8, 8),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*v28)(*a4 + 8, 49);
  }
  (*v28)(*a4 + 8, 17);
  gxc_NvnStateCache_Reset(a4[1]),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v86 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v86, GameData_21fdeb8_alt1),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v86, GameData_21fdee0),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v86, GameData_21fdf08),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v86, GameData_21fdf14),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v87 = a1 + 16LL * *(int*)(a1 + 384);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 0, *(_QWORD*)(v87 + 392),
                              *(_QWORD*)(v87 + 400)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v88 = a1 + 16LL * *(int*)(a1 + 440);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 4, *(_QWORD*)(v88 + 448),
                              *(_QWORD*)(v88 + 456)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a1 + 1089) == 1) {
    v89 = a1 + 16LL * *(int*)(a1 + 496);
    (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 2, 5, *(_QWORD*)(v89 + 504),
                                *(_QWORD*)(v89 + 512)),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v90 = *a4;
  v91 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v92 = (*(__int64 (**)(__int64))(*(_QWORD*)v91 + 40LL))(v91),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v90 + 248LL))(v90, 2, 0, v92, v93, *(unsigned int*)(a1 + 824)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v94 = *a4;
  v95 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v96 = (*(__int64 (**)(__int64))(*(_QWORD*)v95 + 40LL))(v95),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)v94 + 240LL))(v94, 2, 1, v96, v97),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v98 = *a4;
  v99 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v100 = (*(__int64 (**)(__int64))(*(_QWORD*)v99 + 40LL))(v99),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)v98 + 240LL))(v98, 2, 2, v100, v101),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a1 + 1089) == 1) {
    v102 = *a4;
    v103 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v104 = (*(__int64 (**)(__int64))(*(_QWORD*)v103 + 40LL))(v103),
    v101 = COERCE_AS(__typeof__(v101),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v105 = COERCE_AS(__typeof__(v105),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v109 = COERCE_AS(__typeof__(v109),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v93 = COERCE_AS(__typeof__(v93),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v97 = COERCE_AS(__typeof__(v97),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v102 + 248LL))(v102, 2, 3, v104, v105,
                                 *(unsigned int*)(a1 + 952)),
        v101 = COERCE_AS(__typeof__(v101),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v105 = COERCE_AS(__typeof__(v105),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v109 = COERCE_AS(__typeof__(v109),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v93 = COERCE_AS(__typeof__(v93),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v97 = COERCE_AS(__typeof__(v97),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v106 = *a4;
  v107 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v108 = (*(__int64 (**)(__int64))(*(_QWORD*)v107 + 32LL))(v107),
  v101 = COERCE_AS(__typeof__(v101),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v105 = COERCE_AS(__typeof__(v105),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v109 = COERCE_AS(__typeof__(v109),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v93 = COERCE_AS(__typeof__(v93),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v97 = COERCE_AS(__typeof__(v97),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v106 + 96LL))(v106, v108,
                                                                   v109),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *a5, a5[1]),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *a5, a5[1]),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3,
      *(_QWORD*)(*(_QWORD*)(a1 + 16LL * *(unsigned __int8*)(a1 + 1089) + 216) +
                 144LL)),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v101 = COERCE_AS(__typeof__(v101),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v105 = COERCE_AS(__typeof__(v105),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v109 = COERCE_AS(__typeof__(v109),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v93 = COERCE_AS(__typeof__(v93),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v97 = COERCE_AS(__typeof__(v97),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
