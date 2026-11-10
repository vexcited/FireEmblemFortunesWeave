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
__int64 gfxa_TaskExposure_Impl_Impl(__int64* a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6);
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

__int64 gfxa_TaskExposure_Impl_Impl(__int64* a1, __int64 a2, __int64 a3,
                                    __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7;
  __int64 (**v8)();
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 (**v17)();
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64* v22;
  __int64 (**v23)();
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64* v28;
  __int64 (**v29)();
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64* v34;
  __int64 (**v35)();
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64* v40;
  __int64 (**v41)();
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 (**v45)();
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 (**v50)();
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 (**v54)();
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 (**v59)();
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  __int64 (**v64)();
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 (**v68)();
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 (**v73)();
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64* v77;
  __int64* v78;
  __int64 v79;
  __int64 result;
  __int64 v81;
  struct {
    __int64 (**v82)();
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 (***v86)();
  } v82_;
  struct {
    _QWORD v87[2];
    __int64 v88;
    __int64 v89;
  } v87_;

  *a1 = a2;
  a1[84] = 0;
  a1[85] = 0;
  a1[86] = 0;
  a1[87] = 0;
  memset(a1 + 1, 0, 324, a4, a5, a6);
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
  v7 = *a1;
  a1[135] = -1;
  *((_WORD*)a1 + 544) = 0;
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(v7 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumHistogram", 0xCu);
  v8 = v82_.v82;
  v9 = v82_.v83;
  v10 = a1[2];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[1] = (__int64)v8;
  a1[2] = v9;
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  GameRoutine_ad5280((__int64*)a1[1]);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumAverage", 0xAu);
  v12 = v82_.v82;
  v13 = v82_.v83;
  v14 = a1[4];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[3] = (__int64)v12;
  a1[4] = v13;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  v15 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = GameRoutine_ad5000((_QWORD*)a1[3], (__int64)"clear_ev", 8u, 1);
  GameRoutine_ad5280(v16);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumAverage", 0xAu);
  v17 = v82_.v82;
  v18 = v82_.v83;
  v19 = a1[6];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[5] = (__int64)v17;
  a1[6] = v18;
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  v20 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  v21 = GameRoutine_ad5000((_QWORD*)a1[5], (__int64)"comp_ev", 7u, 0);
  v22 = GameRoutine_ad5000(v21, (__int64)"comp_ev_ch1", 0xBu, 0);
  GameRoutine_ad5280(v22);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumAverage", 0xAu);
  v23 = v82_.v82;
  v24 = v82_.v83;
  v25 = a1[8];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[7] = (__int64)v23;
  a1[8] = v24;
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak(v25);
  }
  v26 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  v27 = GameRoutine_ad5000((_QWORD*)a1[7], (__int64)"comp_ev", 7u, 1);
  v28 = GameRoutine_ad5000(v27, (__int64)"comp_ev_ch1", 0xBu, 0);
  GameRoutine_ad5280(v28);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumAverage", 0xAu);
  v29 = v82_.v82;
  v30 = v82_.v83;
  v31 = a1[10];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[9] = (__int64)v29;
  a1[10] = v30;
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak(v31);
  }
  v32 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    std___1___shared_weak_count___release_weak(v32);
  }
  v33 = GameRoutine_ad5000((_QWORD*)a1[9], (__int64)"comp_ev", 7u, 0);
  v34 = GameRoutine_ad5000(v33, (__int64)"comp_ev_ch1", 0xBu, 1);
  GameRoutine_ad5280(v34);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumAverage", 0xAu);
  v35 = v82_.v82;
  v36 = v82_.v83;
  v37 = a1[12];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[11] = (__int64)v35;
  a1[12] = v36;
  if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    std___1___shared_weak_count___release_weak(v37);
  }
  v38 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
    std___1___shared_weak_count___release_weak(v38);
  }
  v39 = GameRoutine_ad5000((_QWORD*)a1[11], (__int64)"comp_ev", 7u, 1);
  v40 = GameRoutine_ad5000(v39, (__int64)"comp_ev_ch1", 0xBu, 1);
  GameRoutine_ad5280(v40);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"ExposureSpotLighting", 0x14u);
  v41 = v82_.v82;
  v42 = v82_.v83;
  v43 = a1[24];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[23] = (__int64)v41;
  a1[24] = v42;
  if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
    std___1___shared_weak_count___release_weak(v43);
  }
  v44 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
    std___1___shared_weak_count___release_weak(v44);
  }
  GameRoutine_ad5280((__int64*)a1[23]);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"ExposureSpotLighting", 0x14u);
  v45 = v82_.v82;
  v46 = v82_.v83;
  v47 = a1[26];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[25] = (__int64)v45;
  a1[26] = v46;
  if (v47 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    std___1___shared_weak_count___release_weak(v47);
  }
  v48 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    std___1___shared_weak_count___release_weak(v48);
  }
  v49 = GameRoutine_ad5000((_QWORD*)a1[25], (__int64)"co_fix_mode", 0xBu, 1);
  GameRoutine_ad5280(v49);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"ExposureComp", 0xCu);
  v50 = v82_.v82;
  v51 = v82_.v83;
  v52 = a1[28];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[27] = (__int64)v50;
  a1[28] = v51;
  if (v52 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
    std___1___shared_weak_count___release_weak(v52);
  }
  v53 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    std___1___shared_weak_count___release_weak(v53);
  }
  GameRoutine_ad5280((__int64*)a1[27]);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"ExposureComp", 0xCu);
  v54 = v82_.v82;
  v55 = v82_.v83;
  v56 = a1[30];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[29] = (__int64)v54;
  a1[30] = v55;
  if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    std___1___shared_weak_count___release_weak(v56);
  }
  v57 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
    std___1___shared_weak_count___release_weak(v57);
  }
  v58 = GameRoutine_ad5000((_QWORD*)a1[29], (__int64)"enable_contrast_control",
                           0x17u, 1);
  GameRoutine_ad5280(v58);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"filter", 6u, (__int64)"blurDepth",
                                  9u);
  v59 = v82_.v82;
  v60 = v82_.v83;
  v61 = a1[32];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[31] = (__int64)v59;
  a1[32] = v60;
  if (v61 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
    std___1___shared_weak_count___release_weak(v61);
  }
  v62 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
    std___1___shared_weak_count___release_weak(v62);
  }
  v63 = GameRoutine_ad5000((_QWORD*)a1[31], (__int64)"kernel_type", 0xBu, 1);
  GameRoutine_ad5280(v63);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumContrastBlur", 0xFu);
  v64 = v82_.v82;
  v65 = v82_.v83;
  v66 = a1[34];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[33] = (__int64)v64;
  a1[34] = v65;
  if (v66 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
    std___1___shared_weak_count___release_weak(v66);
  }
  v67 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
    std___1___shared_weak_count___release_weak(v67);
  }
  GameRoutine_ad5280((__int64*)a1[33]);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumContrastBlur", 0xFu);
  v68 = v82_.v82;
  v69 = v82_.v83;
  v70 = a1[36];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[35] = (__int64)v68;
  a1[36] = v69;
  if (v70 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
    std___1___shared_weak_count___release_weak(v70);
  }
  v71 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
    std___1___shared_weak_count___release_weak(v71);
  }
  v72 = GameRoutine_ad5000((_QWORD*)a1[35], (__int64)"mode", 4u, 1);
  GameRoutine_ad5280(v72);
  gfx_shader_Archive_CreateShader((void*)(&v82_.v82), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LumContrastBlur", 0xFu);
  v73 = v82_.v82;
  v74 = v82_.v83;
  v75 = a1[38];
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  a1[37] = (__int64)v73;
  a1[38] = v74;
  if (v75 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
    std___1___shared_weak_count___release_weak(v75);
  }
  v76 = v82_.v83;
  if (v82_.v83 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82_.v83 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v76 + 16LL))(v76);
    std___1___shared_weak_count___release_weak(v76);
  }
  v77 = GameRoutine_ad5000((_QWORD*)a1[37], (__int64)"mode", 4u, 2);
  GameRoutine_ad5280(v77);
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
  v82_.v84 = 0;
  v82_.v85 = 0;
  v82_.v82 = nullptr;
  v82_.v83 = 0;
  GameRoutine_5fc230((__int64)&v82_.v82);
  v78 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 88),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)&v82_.v82);
  a1[103] = GameRoutine_615760(*(_QWORD*)(*v78 + 552), (__int64)(a1 + 88));
  v82_.v86 = &v82_.v82;
  v87_.v88 = 0;
  v87_.v89 = 0;
  v87_.v87[0] = 0;
  v87_.v87[1] = 0;
  v82_.v82 = GameData_1fc6850;
  GameRoutine_5fc230((__int64)v87_.v87);
  if (v82_.v86 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v82_.v86)[6])(v82_.v86,
                                                             v87_.v87);
  }
  GameRoutine_604060((__int64)(a1 + 104), (__int64*)(*v78 + 568),
                     (__int64)v87_.v87);
  a1[119] = GameRoutine_615760(*(_QWORD*)(*v78 + 552), (__int64)(a1 + 104));
  if (v82_.v86 == &v82_.v82) {
    v79 = 4;
  }
  else {
    if (v82_.v86 == nullptr) {
      goto LABEL_92;
    }
    v79 = 5;
  }
  ((__int64 (*)(__int64))(*v82_.v86)[v79])((__int64)v82_.v86);
LABEL_92:
  v87_.v88 = 0;
  v87_.v89 = 0;
  v87_.v87[0] = 0;
  v87_.v87[1] = 0;
  v82_.v82 = GameData_1fc68d0;
  v82_.v86 = &v82_.v82;
  GameRoutine_5fc230((__int64)v87_.v87);
  if (v82_.v86 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v82_.v86)[6])(v82_.v86,
                                                             v87_.v87);
  }
  GameRoutine_604060((__int64)(a1 + 120), (__int64*)(*v78 + 568),
                     (__int64)v87_.v87);
  a1[135] = GameRoutine_615760(*(_QWORD*)(*v78 + 552), (__int64)(a1 + 120));
  result = (__int64)v82_.v86;
  if (v82_.v86 == &v82_.v82) {
    v81 = 4;
    goto LABEL_98;
  }
  if (v82_.v86 != nullptr) {
    v81 = 5;
  LABEL_98:
    result = ((__int64 (*)(__int64))(*v82_.v86)[v81])((__int64)v82_.v86);
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
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  int v43;
  int v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  signed int v58;
  int v59;
  int v60;
  int v61;
  __int64 v62;
  int v63;
  bool v64;
  int v65;
  int v66;
  __int64 v67;
  __int64 v68;
  unsigned int v69;
  __int64 v70;
  __int64 v71;
  unsigned int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned int v77;
  __int64 v78;
  __int64 v79;
  unsigned int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  unsigned int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  unsigned int v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned int v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned int v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  unsigned int v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;

  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
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
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
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
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = (void (**)(__int64, __int64))GameData_212e738,
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
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
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    memset_alt1(v32, 0, 0x80000),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64))(*(_QWORD*)v31 + 64LL))(v31),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v36 = *(_DWORD*)(a1 + 496);
    v11 = v36 < -1;
    v37 = ((_BYTE)v36 + 1) & 1;
    if (v11) {
      v37 = -v37;
    }
    *(_DWORD*)(a1 + 496) = v37;
    v38 = *(_QWORD*)(a1 + 8LL * v37 + 480);
    v39 = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 56LL))(v38),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v40 = (int)*a5 / 2;
    *(_DWORD*)v39 = v40;
    v41 = (int)a5[1] / 2;
    *(_DWORD*)(v39 + 4) = v41;
    *(_DWORD*)(v39 + 8) = vcvtps_s32_f32(vcvts_n_f32_s32(v40, 4u)) - 1;
    *(_DWORD*)(v39 + 12) = vcvtps_s32_f32(vcvts_n_f32_s32(v41, 4u)) - 1;
    v42 = *(_DWORD*)(*((_QWORD*)a5 + 1) + 124LL);
    *(_QWORD*)(v39 + 28) = 0x41CB3333C16A4D3CLL;
    *(float*)(v39 + 16) = vcvts_n_f32_s32(v40, 0xAu);
    *(_DWORD*)(v39 + 36) = 1025589893;
    *(float*)(v39 + 20) = vcvts_n_f32_s32(v41, 9u);
    *(_DWORD*)(v39 + 24) = v42;
    (*(void (**)(__int64))(*(_QWORD*)v38 + 64LL))(v38),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v43 = *(_DWORD*)(a1 + 552);
    v11 = v43 < -1;
    v44 = ((_BYTE)v43 + 1) & 1;
    if (v11) {
      v44 = -v44;
    }
    *(_DWORD*)(a1 + 552) = v44;
    v45 = *(_QWORD*)(a1 + 8LL * v44 + 536);
    v46 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 56LL))(v45),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_DWORD*)(v46 + 8) = 0;
    *(_QWORD*)v46 = 1015021568;
    (*(void (**)(__int64))(*(_QWORD*)v45 + 64LL))(v45),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v47 = *(_DWORD*)(a1 + 608);
    v11 = v47 < -1;
    v48 = ((_BYTE)v47 + 1) & 1;
    if (v11) {
      v48 = -v48;
    }
    *(_DWORD*)(a1 + 608) = v48;
    v49 = *(_QWORD*)(a1 + 8LL * v48 + 592);
    v50 = (*(__int64 (**)(__int64))(*(_QWORD*)v49 + 56LL))(v49),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_DWORD*)(v50 + 8) = 0;
    *(_QWORD*)v50 = 0x3D00000000000000LL;
    (*(void (**)(__int64))(*(_QWORD*)v49 + 64LL))(v49),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_Reset(a4[1]),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_SetCommandList(a4[1], *a4),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v51 = a4[1];
    gxc_NvnStateCache_BindDepthStencilState(v51, GameData_21fdeb8[0]),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_BindBlendState(v51, GameData_21fdee0),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_BindPolygonState(v51, GameData_21fdf08),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_BindMultisampleState(v51, GameData_21fdf14),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    gxc_NvnStateCache_ClearCommandList(a4[1]),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + 264) + 144LL)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v52 = *a4;
    v53 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v54 = (*(__int64 (**)(__int64))(*(_QWORD*)v53 + 40LL))(v53),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD))(
        *(_QWORD*)v52 + 240LL))(v52, 8, 0, v54, v55),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v56 = a1 + 16LL * *(int*)(a1 + 496);
    (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 8, 0, *(_QWORD*)(v56 + 504),
                                *(_QWORD*)(v56 + 512)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v57 = a1 + 16LL * *(int*)(a1 + 664);
    (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 232LL))(*a4, 8, 0, *(_QWORD*)(v57 + 672),
                                *(_QWORD*)(v57 + 680)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v58 = a5[1];
    v59 = (int)*a5 / 2;
    v60 = v59 + 15;
    v11 = v59 < -15;
    v61 = v59 + 30;
    if (!v11) {
      v61 = v60;
    }
    v62 = (unsigned int)(v61 >> 4);
    v63 = v58 / 2;
    v64 = __OFADD__(v58 / 2, 15);
    v65 = v58 / 2 + 15;
    v66 = v63 + 30;
    if (v65 < 0 == v64) {
      v66 = v65;
    }
    (*(void (**)(__int64, __int64, _QWORD, __int64))(*(_QWORD*)*a4 + 304LL))(
        *a4, v62, (unsigned int)(v66 >> 4), 1),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*v28)(*a4 + 8, 33);
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + 280) + 144LL)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v67 = *a4;
    v68 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v69 = (*(__int64 (**)(__int64))(*(_QWORD*)v68 + 48LL))(v68),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v67 + 256LL))(
        v67, 8, 1, v69),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v70 = *a4;
    v71 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v72 = (*(__int64 (**)(__int64))(*(_QWORD*)v71 + 48LL))(v71),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v70 + 256LL))(
        v70, 8, 2, v72),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)*a4 + 304LL))(
        *a4, 64, 32, 1),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*v28)(*a4 + 8, 49);
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 8, *(_QWORD*)(*(_QWORD*)(a1 + 296) + 144LL)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v73 = a1 + 16LL * *(int*)(a1 + 552);
    (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 8, 0, *(_QWORD*)(v73 + 560),
                                *(_QWORD*)(v73 + 568)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v74 = *a4;
    v75 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v76 = (*(__int64 (**)(__int64))(*(_QWORD*)v75 + 40LL))(v75),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v74 + 248LL))(v74, 8, 0, v76, v77,
                                *(unsigned int*)(a1 + 952)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v78 = *a4;
    v79 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[5] + 16LL))(a3[5]),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v80 = (*(__int64 (**)(__int64))(*(_QWORD*)v79 + 48LL))(v79),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v78 + 256LL))(
        v78, 8, 1, v80),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)*a4 + 304LL))(
        *a4, 8, 8, 8),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*v28)(*a4 + 8, 49);
    v81 = a1 + 16LL * *(int*)(a1 + 608);
    (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 8, 0, *(_QWORD*)(v81 + 616),
                                *(_QWORD*)(v81 + 624)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v82 = *a4;
    v83 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v84 = (*(__int64 (**)(__int64))(*(_QWORD*)v83 + 48LL))(v83),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, _QWORD))(*(_QWORD*)v82 + 256LL))(
        v82, 8, 1, v84),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v85 = *a4;
    v86 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[5] + 16LL))(a3[5]),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v87 = (*(__int64 (**)(__int64))(*(_QWORD*)v86 + 40LL))(v86),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v85 + 248LL))(v85, 8, 0, v87, v88,
                                *(unsigned int*)(a1 + 952)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64))(*(_QWORD*)*a4 + 304LL))(
        *a4, 8, 8, 8),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*v28)(*a4 + 8, 49);
  }
  (*v28)(*a4 + 8, 17);
  gxc_NvnStateCache_Reset(a4[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v89 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v89, GameData_21fdeb8[0]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v89, GameData_21fdee0),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v89, GameData_21fdf08),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v89, GameData_21fdf14),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v90 = a1 + 16LL * *(int*)(a1 + 384);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 0, *(_QWORD*)(v90 + 392),
                              *(_QWORD*)(v90 + 400)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v91 = a1 + 16LL * *(int*)(a1 + 440);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 4, *(_QWORD*)(v91 + 448),
                              *(_QWORD*)(v91 + 456)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a1 + 1089) == 1) {
    v92 = a1 + 16LL * *(int*)(a1 + 496);
    (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 2, 5, *(_QWORD*)(v92 + 504),
                                *(_QWORD*)(v92 + 512)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v93 = *a4;
  v94 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v95 = (*(__int64 (**)(__int64))(*(_QWORD*)v94 + 40LL))(v94),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v93 + 248LL))(v93, 2, 0, v95, v96, *(unsigned int*)(a1 + 824)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v97 = *a4;
  v98 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v99 = (*(__int64 (**)(__int64))(*(_QWORD*)v98 + 40LL))(v98),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)v97 + 240LL))(v97, 2, 1, v99, v100),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v101 = *a4;
  v102 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v103 = (*(__int64 (**)(__int64))(*(_QWORD*)v102 + 40LL))(v102),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)v101 + 240LL))(v101, 2, 2, v103, v104),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(a1 + 1089) == 1) {
    v105 = *a4;
    v106 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v107 = (*(__int64 (**)(__int64))(*(_QWORD*)v106 + 40LL))(v106),
    v100 = COERCE_AS(__typeof__(v100),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v104 = COERCE_AS(__typeof__(v104),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v108 = COERCE_AS(__typeof__(v108),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v112 = COERCE_AS(__typeof__(v112),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v55 = COERCE_AS(__typeof__(v55),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v88 = COERCE_AS(__typeof__(v88),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v96 = COERCE_AS(__typeof__(v96),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v105 + 248LL))(v105, 2, 3, v107, v108,
                                 *(unsigned int*)(a1 + 952)),
        v100 = COERCE_AS(__typeof__(v100),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v104 = COERCE_AS(__typeof__(v104),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v108 = COERCE_AS(__typeof__(v108),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v112 = COERCE_AS(__typeof__(v112),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v55 = COERCE_AS(__typeof__(v55),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v88 = COERCE_AS(__typeof__(v88),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v96 = COERCE_AS(__typeof__(v96),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v109 = *a4;
  v110 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v111 = (*(__int64 (**)(__int64))(*(_QWORD*)v110 + 32LL))(v110),
  v100 = COERCE_AS(__typeof__(v100),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v104 = COERCE_AS(__typeof__(v104),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v108 = COERCE_AS(__typeof__(v108),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v112 = COERCE_AS(__typeof__(v112),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v55 = COERCE_AS(__typeof__(v55),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v88 = COERCE_AS(__typeof__(v88),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v96 = COERCE_AS(__typeof__(v96),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v109 + 96LL))(v109, v111,
                                                                   v112),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *a5, a5[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *a5, a5[1]),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3,
      *(_QWORD*)(*(_QWORD*)(a1 + 16LL * *(unsigned __int8*)(a1 + 1089) + 216) +
                 144LL)),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v100 = COERCE_AS(__typeof__(v100),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v104 = COERCE_AS(__typeof__(v104),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v108 = COERCE_AS(__typeof__(v108),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v112 = COERCE_AS(__typeof__(v112),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v55 = COERCE_AS(__typeof__(v55),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v88 = COERCE_AS(__typeof__(v88),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v96 = COERCE_AS(__typeof__(v96),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
