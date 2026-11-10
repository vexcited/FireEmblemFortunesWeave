#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_604020(_QWORD* result);
_QWORD* GameRoutine_ad5000(_QWORD*, __int64, unsigned __int64, int);
__attribute__((swiftcall)) void GameRoutine_53bd0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5de60(_QWORD*, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
__int64 GameRoutine_a738c0(__int64, __int64, int);
__int64 GameRoutine_a73d40(__int64 result, __int64);
__int64 GameRoutine_ad5280(__int64*);
__int64 GameRoutine_ad6000(__int64, unsigned __int64);
__int64 ResourceBuilder_b76e40(__int64, _QWORD*, _QWORD*, unsigned int);
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN** GameData_212e738;
extern __int64 (*GameData_1fc7890[])();
extern __int64 (*GameData_1fc7910[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8[];
extern int GameData_21fdedc;
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
float exp2f(float);
float sinf(float);
__int64 gfxa_TaskSkyBlur_Impl_Impl(__int64* a1, __int64 a2);
__int64 TaskSkyBlur_b75c60(_DWORD* a1, __int64 a2, __int64 a3);
__int64 gfxa_TaskSkyBlur_Impl_drawMask(__int64 a1, __int64 a2, __int64 a3,
                                       _QWORD* a4, __int64 a5);
__int64 TaskSkyBlur_b764b0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64* a4,
                           __int64 a5);

__int64 gfxa_TaskSkyBlur_Impl_Impl(__int64* a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 (**v5)();
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 (**v9)();
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 (**v13)();
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (**v17)();
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 (**v21)();
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 (**v25)();
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 (**v29)();
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 (**v33)();
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 i;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
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
  __int64 result;
  struct {
    __int64 (**v68)();
    __int64 v69;
    __int64 v70;
    char gap24_[8];
    __int64 (***v71)();
  } v68_;
  __int64 v72[4];

  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *a1 = a2;
  GameRoutine_604020(a1 + 1),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[57] = 0;
  a1[58] = 0;
  a1[59] = 0;
  a1[60] = 0;
  a1[61] = 0;
  a1[62] = 0;
  *((_DWORD*)a1 + 126) = 0;
  a1[71] = 0;
  a1[72] = 0;
  a1[73] = 0;
  a1[74] = 0;
  a1[75] = 0;
  a1[16] = -1;
  a1[76] = 0;
  *((_DWORD*)a1 + 154) = 0;
  a1[85] = 0;
  a1[86] = 0;
  a1[87] = 0;
  a1[88] = 0;
  a1[89] = 0;
  a1[90] = 0;
  *((_DWORD*)a1 + 182) = 0;
  a1[109] = 0;
  *((_DWORD*)a1 + 220) = -1;
  a1[108] = 0;
  a1[107] = 0;
  a1[106] = 0;
  *((_DWORD*)a1 + 210) = 0;
  a1[104] = 0;
  a1[103] = 0;
  a1[102] = 0;
  a1[101] = 0;
  a1[100] = 0;
  a1[99] = 0;
  *((_DWORD*)a1 + 140) = 0;
  a1[69] = 0;
  a1[68] = 0;
  a1[67] = 0;
  a1[66] = 0;
  a1[65] = 0;
  a1[64] = 0;
  *((_DWORD*)a1 + 168) = 0;
  a1[83] = 0;
  a1[82] = 0;
  a1[81] = 0;
  a1[80] = 0;
  a1[79] = 0;
  a1[78] = 0;
  *((_DWORD*)a1 + 196) = 0;
  a1[97] = 0;
  a1[96] = 0;
  a1[95] = 0;
  a1[94] = 0;
  a1[93] = 0;
  a1[92] = 0;
  *((_DWORD*)a1 + 70) = 0;
  a1[33] = 0;
  a1[34] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[29] = 0;
  a1[30] = 0;
  a1[27] = 0;
  a1[28] = 0;
  a1[25] = 0;
  a1[26] = 0;
  a1[23] = 0;
  a1[24] = 0;
  a1[21] = 0;
  a1[22] = 0;
  a1[19] = 0;
  a1[20] = 0;
  a1[17] = 0;
  a1[18] = 0;
  *((_DWORD*)a1 + 84) = 0;
  a1[40] = 0;
  a1[41] = 0;
  a1[38] = 0;
  a1[39] = 0;
  a1[36] = 0;
  a1[37] = 0;
  a1[43] = 0;
  a1[44] = 0;
  a1[45] = 0;
  a1[46] = 0;
  a1[47] = 0;
  a1[48] = 0;
  *((_DWORD*)a1 + 98) = 0;
  a1[50] = 0;
  a1[51] = 0;
  a1[52] = 0;
  a1[53] = 0;
  a1[54] = 0;
  a1[55] = 0;
  *((_DWORD*)a1 + 112) = 0;
  v68_.v68 = GameData_1fc7890;
  v68_.v71 = &v68_.v68;
  memset(v72, 0, sizeof(v72));
  GameRoutine_5fc230((__int64)v72),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v68_.v71 != nullptr) {
    ((void (*)(__int64 (***)(void), __int64*))(*v68_.v71)[6])(v68_.v71, v72),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v3 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 1),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v72),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  a1[16] = GameRoutine_615760(*(_QWORD*)(*v3 + 552), (__int64)(a1 + 1)),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v68_.v71 == &v68_.v68) {
    v4 = 4;
    goto LABEL_7;
  }
  if (v68_.v71 != nullptr) {
    v4 = 5;
  LABEL_7:
    ((__int64 (*)(__int64))(*v68_.v71)[v4])((__int64)v68_.v71),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  gfx_shader_Archive_CreateShader((void*)(&v68_.v68), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"SkyBlurExtract", 0xEu),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = v68_.v68;
  v6 = v68_.v69;
  v7 = a1[18];
  v68_.v68 = nullptr;
  v68_.v69 = 0;
  a1[17] = (__int64)v5;
  a1[18] = v6;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v7),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v8 = v68_.v69;
  if (v68_.v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68_.v69 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v8),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_ad5000((_QWORD*)a1[17], (__int64)"enable_mask", 0xBu, 0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5000((_QWORD*)a1[17], (__int64)"enable_contrast_control", 0x17u,
                     0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5280((__int64*)a1[17]),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gfx_shader_Archive_CreateShader((void*)(&v68_.v68), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"SkyBlurExtract", 0xEu),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = v68_.v68;
  v10 = v68_.v69;
  v11 = a1[20];
  v68_.v68 = nullptr;
  v68_.v69 = 0;
  a1[19] = (__int64)v9;
  a1[20] = v10;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v11),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v12 = v68_.v69;
  if (v68_.v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68_.v69 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v12),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_ad5000((_QWORD*)a1[19], (__int64)"enable_mask", 0xBu, 1),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5000((_QWORD*)a1[19], (__int64)"enable_contrast_control", 0x17u,
                     0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5280((__int64*)a1[19]),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gfx_shader_Archive_CreateShader((void*)(&v68_.v68), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"SkyBlurExtract", 0xEu),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = v68_.v68;
  v14 = v68_.v69;
  v15 = a1[22];
  v68_.v68 = nullptr;
  v68_.v69 = 0;
  a1[21] = (__int64)v13;
  a1[22] = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v15),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v16 = v68_.v69;
  if (v68_.v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68_.v69 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v16),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_ad5000((_QWORD*)a1[21], (__int64)"enable_mask", 0xBu, 0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5000((_QWORD*)a1[21], (__int64)"enable_contrast_control", 0x17u,
                     1),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5280((__int64*)a1[21]),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gfx_shader_Archive_CreateShader((void*)(&v68_.v68), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"SkyBlurExtract", 0xEu),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = v68_.v68;
  v18 = v68_.v69;
  v19 = a1[24];
  v68_.v68 = nullptr;
  v68_.v69 = 0;
  a1[23] = (__int64)v17;
  a1[24] = v18;
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v19),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v20 = v68_.v69;
  if (v68_.v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68_.v69 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v20),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_ad5000((_QWORD*)a1[23], (__int64)"enable_mask", 0xBu, 1),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5000((_QWORD*)a1[23], (__int64)"enable_contrast_control", 0x17u,
                     1),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5280((__int64*)a1[23]),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gfx_shader_Archive_CreateShader((void*)(&v68_.v68), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"SkyBlur", 7u),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = v68_.v68;
  v22 = v68_.v69;
  v23 = a1[30];
  v68_.v68 = nullptr;
  v68_.v69 = 0;
  a1[29] = (__int64)v21;
  a1[30] = v22;
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v23),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v24 = v68_.v69;
  if (v68_.v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68_.v69 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v24),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_ad5000((_QWORD*)a1[29], (__int64)"phase", 5u, 0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5280((__int64*)a1[29]),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gfx_shader_Archive_CreateShader((void*)(&v68_.v68), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"SkyBlur", 7u),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = v68_.v68;
  v26 = v68_.v69;
  v27 = a1[32];
  v68_.v68 = nullptr;
  v68_.v69 = 0;
  a1[31] = (__int64)v25;
  a1[32] = v26;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v27),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v28 = v68_.v69;
  if (v68_.v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68_.v69 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v28),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_ad5000((_QWORD*)a1[31], (__int64)"phase", 5u, 1),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5280((__int64*)a1[31]),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gfx_shader_Archive_CreateShader((void*)(&v68_.v68), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"SkyBlur", 7u),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = v68_.v68;
  v30 = v68_.v69;
  v31 = a1[26];
  v68_.v68 = nullptr;
  v68_.v69 = 0;
  a1[25] = (__int64)v29;
  a1[26] = v30;
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v31),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v32 = v68_.v69;
  if (v68_.v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68_.v69 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v32),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_ad5000((_QWORD*)a1[25], (__int64)"phase", 5u, 2),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5000((_QWORD*)a1[25], (__int64)"enable_mask", 0xBu, 0),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5280((__int64*)a1[25]),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gfx_shader_Archive_CreateShader((void*)(&v68_.v68), *(__int64**)(*a1 + 13408),
                                  (__int64)"ImageProcessing", 0xFu,
                                  (__int64)"SkyBlur", 7u),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = v68_.v68;
  v34 = v68_.v69;
  v35 = a1[28];
  v68_.v68 = nullptr;
  v68_.v69 = 0;
  a1[27] = (__int64)v33;
  a1[28] = v34;
  if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v35),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v36 = v68_.v69;
  if (v68_.v69 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68_.v69 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(v36),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_ad5000((_QWORD*)a1[27], (__int64)"phase", 5u, 2),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5000((_QWORD*)a1[27], (__int64)"enable_mask", 0xBu, 1),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_ad5280((__int64*)a1[27]),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  DecalObject_a91100(a1 + 33, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 36),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  DecalObject_a91100(a1 + 40, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 124),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  DecalObject_a91100(a1 + 47, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 24),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v56 = COERCE_AS(__typeof__(v56),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v57 = COERCE_AS(__typeof__(v57),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  for (i = 0; i != 56; i += 14) {
    v45 = *a1;
    v46 = &a1[i];
    LODWORD(v68_.v68) = 3;
    v47 = *(_QWORD*)(v45 + 312);
    v48 = *(_QWORD*)(*(_QWORD*)(v45 + 552) + 16LL);
    v68_.v69 = 8;
    v68_.v70 = v47;
    GameRoutine_53bd0((void*)(v72), (__int64)&v68_.v68),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v49 = v72[0];
    v50 = a1[i + 54];
    v72[0] = 0;
    a1[i + 54] = v49;
    if (v50 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v50 + 8LL))(v50),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v51 = v72[0];
      v72[0] = 0;
      if (v51 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v51 + 8LL))(v51),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v57 = COERCE_AS(__typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    GameRoutine_53bd0((void*)(v72), (__int64)&v68_.v68),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v52 = v72[0];
    v53 = v46[55];
    v72[0] = 0;
    v46[55] = v52;
    if (v53 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v53 + 8LL))(v53),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v54 = v72[0];
      v72[0] = 0;
      if (v54 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v54 + 8LL))(v54),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v57 = COERCE_AS(__typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v55 = &a1[i];
    v55[57] = (*(__int64 (**)(__int64))(*(_QWORD*)v48 + 80LL))(v48),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v55[58] = v56;
    GameRoutine_5de60(&a1[i + 57], v46[54]),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v55[59] = (*(__int64 (**)(__int64))(*(_QWORD*)v48 + 80LL))(v48),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v55[60] = v57;
    GameRoutine_5de60(&a1[i + 59], v46[55]),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v58 = *a1;
    LODWORD(v68_.v68) = 3;
    v59 = *(_QWORD*)(v58 + 312);
    v60 = *(_QWORD*)(*(_QWORD*)(v58 + 552) + 16LL);
    v68_.v69 = 8;
    v68_.v70 = v59;
    GameRoutine_53bd0((void*)(v72), (__int64)&v68_.v68),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v61 = v72[0];
    v62 = a1[i + 61];
    v72[0] = 0;
    v55[61] = v61;
    if (v62 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v62 + 8LL))(v62),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v63 = v72[0];
      v72[0] = 0;
      if (v63 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v63 + 8LL))(v63),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v57 = COERCE_AS(__typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    GameRoutine_53bd0((void*)(v72), (__int64)&v68_.v68),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v64 = v72[0];
    v65 = v55[62];
    v72[0] = 0;
    v55[62] = v64;
    if (v65 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v65 + 8LL))(v65),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v43 = COERCE_AS(__typeof__(v43),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v56 = COERCE_AS(__typeof__(v56),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v57 = COERCE_AS(__typeof__(v57),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v66 = v72[0];
      v72[0] = 0;
      if (v66 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v66 + 8LL))(v66),
            v40 = COERCE_AS(__typeof__(v40),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v56 = COERCE_AS(__typeof__(v56),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v57 = COERCE_AS(__typeof__(v57),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v38 = &a1[i];
    v39 = (*(__int64 (**)(__int64))(*(_QWORD*)v60 + 80LL))(v60),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v38[65] = v40;
    v41 = v55[61];
    v38[64] = v39;
    GameRoutine_5de60(&a1[i + 64], v41),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v60 + 80LL))(v60),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v56 = COERCE_AS(__typeof__(v56),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v57 = COERCE_AS(__typeof__(v57),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v38[67] = v43;
    v44 = v55[62];
    v38[66] = v42;
    GameRoutine_5de60(&a1[i + 66], v44),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v56 = COERCE_AS(__typeof__(v56),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v57 = COERCE_AS(__typeof__(v57),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  result = GameRoutine_ad6000((__int64)"SkyBlurMask", 0xBu),
  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v56 = COERCE_AS(__typeof__(v56),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v57 = COERCE_AS(__typeof__(v57),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_DWORD*)a1 + 220) = result;
  return result;
}

__int64 TaskSkyBlur_b75c60(_DWORD* a1, __int64 a2, __int64 a3)
{
  int v3;
  bool v6;
  int v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  int8x16_t v13;
  __int64 v14;
  float v15;
  __int64 v16;
  float v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  float v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  int v45;
  unsigned __int64 v46;
  float32x4_t v47;
  float v48;
  float v49;
  float v50;
  int v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  int v57;
  float v58;
  _DWORD* v59;
  __int64 i;
  int v61;
  int v62;
  int v63;
  __int64 v64;
  int* v65;
  int v66;
  __int64 v67;
  int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  __int64 result;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4x4_t v79;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
  v3 = a1[70];
  v6 = v3 < -1;
  v7 = ((_BYTE)v3 + 1) & 1;
  if (v6) {
    v7 = -v7;
  }
  a1[70] = v7;
  v8 = *(_QWORD*)&a1[2 * v7 + 66];
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 56LL))(v8),
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
  v10 = *(_BYTE**)a3;
  v11 = v9;
  v12 = 448;
  if (*(_BYTE*)(*(_QWORD*)a3 + 416LL) != 0) {
    v12 = 412;
  }
  LANES128(v13).n128_u32[0] = *(_DWORD*)&v10[v12];
  v14 = 528;
  if (v10[496] != 0) {
    v14 = 492;
  }
  v15 = *(float*)&v10[v14];
  v16 = 608;
  if (v10[576] != 0) {
    v16 = 572;
  }
  LANES128(v13).n128_f32[1] = v15;
  v17 = *(float*)&v10[v16];
  v18 = 688;
  if (v10[656] != 0) {
    v18 = 652;
  }
  LANES128(v13).n128_f32[2] = v17;
  LANES128(v13).n128_u32[3] = *(_DWORD*)&v10[v18];
  v19 = (float)((float)(LANES128(v13).n128_f32[0] + v15) + v17) +
        LANES128(v13).n128_f32[3];
  if (v19 > 0x0.0p+0f) {
    v13 = vmulq_n_f32(v13, 0x1.0000000000000p+0f / v19);
  }
  *(_QWORD*)v9 = LANES128(v13).n128_u64[0];
  *(_QWORD*)(v9 + 8) = LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0];
  v20 = 208;
  if (*(_BYTE*)(*(_QWORD*)a3 + 176LL) != 0) {
    v20 = 172;
  }
  *(float*)(v9 +
            16) = exp2f(*(float*)(*(_QWORD*)a3 + v20)),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
            v30 =
                COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v32 =
                COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v37 =
                COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
  v21 = 128;
  if (*(_BYTE*)(*(_QWORD*)a3 + 96LL) != 0) {
    v21 = 92;
  }
  v22 = *(_DWORD*)(*(_QWORD*)a3 + v21);
  *(_DWORD*)(v11 + 32) = 0;
  *(_DWORD*)(v11 + 20) = v22;
  v23 = 288;
  if (*(_BYTE*)(*(_QWORD*)a3 + 256LL) != 0) {
    v23 = 252;
  }
  v24 = *(float*)(*(_QWORD*)a3 + v23);
  *(float*)(v11 + 24) = v24;
  v25 = 368;
  if (*(_BYTE*)(*(_QWORD*)a3 + 336LL) != 0) {
    v25 = 332;
  }
  *(float*)(v11 + 28) =
      0x1.0000000000000p+0f / (float)(*(float*)(*(_QWORD*)a3 + v25) - v24);
  (*(void (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8),
      result = COERCE_AS(__typeof__(result),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
  v26 = a1[84];
  v6 = v26 < -1;
  v27 = ((_BYTE)v26 + 1) & 1;
  if (v6) {
    v27 = -v27;
  }
  a1[84] = v27;
  v28 = *(_QWORD*)&a1[2 * v27 + 80];
  v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v28 + 56LL))(v28),
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
  v75 = COERCE_FLOAT32X4_T(
      ((long double (*)(_QWORD)) *
       (_QWORD*)(**(_QWORD**)(a3 + 8) + 16LL))(*(_QWORD*)(a3 + 8))),
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
  v76 = v30;
  v77 = v31;
  v78 = *(float32x4_t*)GameData_212c540;
  (*(void (**)(_QWORD))(**(_QWORD**)(a3 + 8) + 24LL))(*(_QWORD*)(a3 + 8)),
      result = COERCE_AS(__typeof__(result),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
  if (LANES128(v35).n128_f32[3] == 0x1.0000000000000p+0f) {
    v36 = (*(float (**)(_QWORD))(**(_QWORD**)(a3 + 8) + 80LL))(
        *(_QWORD*)(a3 + 8)),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
    v38 = v36 / v37;
    v39 = (*(float (**)(_QWORD))(**(_QWORD**)(a3 + 8) + 56LL))(
        *(_QWORD*)(a3 + 8)),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
    v40 = (*(float (**)(_QWORD))(**(_QWORD**)(a3 + 8) + 64LL))(
        *(_QWORD*)(a3 + 8)),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
    LANES128(v35).n128_u64[0] = 0;
    v41 = -0x1.0000000000000p+0f / (float)(v40 - v39);
    LANES128(v32).n128_u32[1] = 0;
    LANES128(v32).n128_u64[1] = 0;
    *(float*)&v42 = v40 * v41;
    *(float*)&v43 = (float)(v39 * v40) * v41;
    LANES128(v32).n128_f32[0] =
        (float)(0x1.0000000000000p+0f / (float)((float)((float)((float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190) - (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190) - (float)((float)(*((float*)GameData_212c190 + 1) - (float)(*(float*)GameData_212c190 * 0x1.3bd3ca0000000p-1f)) * 0x1.3bd3ca0000000p-1f)) * 0x1.3bd3ca0000000p-1f)) * 0x1.3bd3ca0000000p-1f)) * 0x1.3bd3ca0000000p-1f) + 0x1.0000000000000p+0f) * 0x1.921fb40000000p-1f) / (float)((float)((float)-(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188) - (float)((
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4) + (float)((float)-(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188) - (float)((float)(*((float*)GameData_212c188 + 1) - (float)(*(float*)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  GameData_212c188 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              0x1.3bd3ca0000000p-1f)) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            0x1.3bd3ca0000000p-1f)) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      0x1.3bd3ca0000000p-1f)) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            0x1.3bd3ca0000000p-1f)) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      0x1.3bd3ca0000000p-1f) +
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              0x1.0000000000000p+0f))) /
        v38;
    LANES128(v33).n128_u32[0] = 0;
    LANES128(v33).n128_u64[1] = 0;
    LANES128(v35).n128_u64[1] = v43;
    LANES128(v33).n128_f32[1] =
        0x1.0000000000000p+0f /
        (float)((float)((float)((float)((float)-(
                                            float)(*(float*)((char*)((
                                                                 __int128*)0x10LL) +
                                                             (_QWORD)
                                                                 GameData_212c190) -
                                                   (float)((float)(*(float*)((char*)((
                                                                                 _UNKNOWN**)0x8LL) +
                                                                             (_QWORD)
                                                                                 GameData_212c190 +
                                                                             4) +
                                                                   (float)((float)-(
                                                                               float)(*(float*)((char*)((
                                                                                                    _UNKNOWN**)0x8LL) +
                                                                                                (_QWORD)
                                                                                                    GameData_212c190) -
                                                                                      (float)((float)(*((float*)
                                                                                                            GameData_212c190 +
                                                                                                        1) -
                                                                                                      (float)(*(float*)
                                                                                                                  GameData_212c190 *
                                                                                                              0x1.3bd3ca0000000p-1f)) *
                                                                                              0x1.3bd3ca0000000p-1f)) *
                                                                           0x1.3bd3ca0000000p-1f)) *
                                                           0x1.3bd3ca0000000p-1f)) *
                                        0x1.3bd3ca0000000p-1f) +
                                0x1.0000000000000p+0f) *
                        0x1.921fb40000000p-1f) /
                (float)((float)((float)-(
                                    float)(*(float*)((char*)((
                                                         __int128*)0x10LL) +
                                                     (_QWORD)GameData_212c188) -
                                           (float)((float)(*(float*)((char*)((
                                                                         _UNKNOWN**)0x8LL) +
                                                                     (_QWORD)
                                                                         GameData_212c188 +
                                                                     4) +
                                                           (float)((float)-(
                                                                       float)(*(float*)((char*)((
                                                                                            _UNKNOWN**)0x8LL) +
                                                                                        (_QWORD)
                                                                                            GameData_212c188) -
                                                                              (float)((float)(*((float*)
                                                                                                    GameData_212c188 +
                                                                                                1) -
                                                                                              (float)(*(float*)
                                                                                                          GameData_212c188 *
                                                                                                      0x1.3bd3ca0000000p-1f)) *
                                                                                      0x1.3bd3ca0000000p-1f)) *
                                                                   0x1.3bd3ca0000000p-1f)) *
                                                   0x1.3bd3ca0000000p-1f)) *
                                0x1.3bd3ca0000000p-1f) +
                        0x1.0000000000000p+0f));
    LANES128(v34).n128_u64[0] = 0;
    LANES128(v34).n128_u64[1] = __PAIR64__(-0x1.0000000000000p+0f, v42);
  }
  v44 = *(_DWORD*)(a3 + 16);
  v45 = *(_DWORD*)(a3 + 20) / 2;
  *(float*)&v46 =
      (float)(*(float*)(a3 + 24) + *(float*)(a3 + 24)) / (float)(v44 / 2);
  *((float*)&v46 + 1) =
      (float)(*(float*)(a3 + 28) * -0x1.0000000000000p+1f) / (float)v45;
  v47 = vsubq_f32(v34, COERCE_AS(float32x4_t, v46));
  v79.val[0] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v32, LANES128(v75).n128_f32[0]), v33,
                     COERCE_AS(float32x2_t, LANES128(v75).n128_u64[0]), 1),
      v47, v75, 2);
  v79.val[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v32, LANES128(v76).n128_f32[0]), v33,
                     COERCE_AS(float32x2_t, LANES128(v76).n128_u64[0]), 1),
      v47, v76, 2);
  v79.val[2] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v32, LANES128(v77).n128_f32[0]), v33,
                     COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0]), 1),
      v47, v77, 2);
  v79.val[3] = vaddq_f32(
      v35,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v32, LANES128(v78).n128_f32[0]), v33,
                         COERCE_AS(float32x2_t, LANES128(v78).n128_u64[0]), 1),
          v47, v78, 2));
  vst4q_f32((float*)v29, v79);
  *(_DWORD*)(v29 + 68) = v45;
  *(_DWORD*)(v29 + 64) = v44 / 2;
  *(_DWORD*)(v29 + 72) = *(_DWORD*)(a3 + 32);
  *(float*)(v29 + 76) = *(float*)(a3 + 36) + 0x1.0000000000000p+0f;
  v48 = sinf((float)(0x1.6800000000000p+6f - *(float*)(a3 + 48)) *
             0x1.1df46a0000000p-6f),
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
  v49 = sinf(*(float*)(a3 + 52) * 0x1.1df46a0000000p-6f),
  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
  v50 = v48 - v49;
  v51 = *(_DWORD*)(a3 + 44);
  *(_DWORD*)(v29 + 80) = *(_DWORD*)(a3 + 40);
  *(_DWORD*)(v29 + 84) = v51;
  if ((float)(v48 - v49) < 0x1.a36e2e0000000p-14f) {
    v50 = 0x1.a36e2e0000000p-14f;
  }
  *(float*)(v29 + 88) = v49;
  *(float*)(v29 + 92) = 0x1.0000000000000p+0f / v50;
  *(_DWORD*)(v29 + 100) = *(_DWORD*)(*(_QWORD*)(a3 + 56) + 8LL);
  *(_DWORD*)(v29 + 104) = *(_DWORD*)(*(_QWORD*)(a3 + 56) + 20LL);
  *(_DWORD*)(v29 + 108) = *(_DWORD*)(*(_QWORD*)(a3 + 56) + 32LL);
  *(_DWORD*)(v29 + 112) = *(_DWORD*)(*(_QWORD*)(a3 + 56) + 44LL);
  v52 = *(_DWORD*)(*(_QWORD*)(a3 + 56) + 56LL);
  *(_DWORD*)(v29 + 96) = 1077936128;
  *(_DWORD*)(v29 + 116) = v52;
  *(_DWORD*)(v29 + 120) = *(_DWORD*)(*(_QWORD*)(a3 + 56) + 4LL);
  (*(void (**)(__int64))(*(_QWORD*)v28 + 64LL))(v28),
      result = COERCE_AS(__typeof__(result),
                         PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
  if (*(_BYTE*)(*(_QWORD*)(a3 + 56) + 120LL) == 1) {
    v53 = a1[98];
    v6 = v53 < -1;
    v54 = ((_BYTE)v53 + 1) & 1;
    if (v6) {
      v54 = -v54;
    }
    a1[98] = v54;
    v55 = *(_QWORD*)&a1[2 * v54 + 94];
    v56 = (*(__int64 (**)(__int64))(*(_QWORD*)v55 + 56LL))(v55),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
    v57 = *(_DWORD*)(*(_QWORD*)(a3 + 56) + 124LL);
    v58 = vcvts_n_f32_s32(*(_DWORD*)(a3 + 20) / 2, 9u);
    *(float*)v56 = vcvts_n_f32_s32(*(_DWORD*)(a3 + 16) / 2, 0xAu);
    *(float*)(v56 + 4) = v58;
    *(_DWORD*)(v56 + 8) = v57;
    *(_QWORD*)(v56 + 12) = 0x41CB3333C16A4D3CLL;
    *(_DWORD*)(v56 + 20) = 1025589893;
    (*(void (**)(__int64))(*(_QWORD*)v55 + 64LL))(v55),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
  }
  v59 = a1 + 108;
  for (i = 0; i != 4; ++i) {
    v61 = v59[4];
    v62 = 4 << i;
    v6 = v61 < -1;
    v63 = ((_BYTE)v61 + 1) & 1;
    if (v6) {
      v63 = -v63;
    }
    v59[4] = v63;
    v64 = *(_QWORD*)&v59[2 * v63];
    v65 = (int*)(*(_QWORD*)a1 + 13304LL);
    if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
      v65 = (int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
    }
    v66 = *v65;
    v67 = (*(__int64 (**)(__int64))(*(_QWORD*)v64 + 56LL))(v64),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
    *(_DWORD*)(v67 + 4) = 0;
    *(float*)v67 = 0x1.0000000000000p+0f / (float)(v66 / v62);
    (*(void (**)(__int64))(*(_QWORD*)v64 + 64LL))(v64),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
    v68 = v59[18];
    v6 = v68 < -1;
    v69 = ((_BYTE)v68 + 1) & 1;
    if (v6) {
      v69 = -v69;
    }
    v59[18] = v69;
    v70 = *(_QWORD*)&v59[2 * v69 + 14];
    v71 = *(_QWORD*)a1 + 13304LL;
    if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
      v71 = *(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL;
    }
    v72 = *(_DWORD*)(v71 + 4);
    v73 = (*(__int64 (**)(__int64))(*(_QWORD*)v70 + 56LL))(v70),
    result = COERCE_AS(__typeof__(result),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
    *(_DWORD*)v73 = 0;
    *(float*)(v73 + 4) = 0x1.0000000000000p+0f / (float)(v72 / v62);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v70 + 64LL))(v70),
    v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v32 = COERCE_AS(__typeof__(v32), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v37 = COERCE_AS(__typeof__(v37), PSEUDO_REGISTER(float, "s1", "=w"));
    v59 += 28;
  }
  return result;
}

__int64 gfxa_TaskSkyBlur_Impl_drawMask(__int64 a1, __int64 a2, __int64 a3,
                                       _QWORD* a4, __int64 a5)
{
  __int64 v5;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 result;
  struct {
    _QWORD v27[4];
    _QWORD* v28;
  } v27_;

  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = *(_QWORD*)(a5 + 64);
  v27_.v27[0] = GameData_1fc7910;
  v27_.v27[1] = a1;
  v27_.v28 = v27_.v27;
  v10 = GameRoutine_a738c0(v5, (__int64)v27_.v27, 0),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v27_.v28 == v27_.v27) {
    v11 = 32;
  }
  else {
    if (v27_.v28 == nullptr) {
      goto LABEL_6;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v27_.v28 + v11))((__int64)v27_.v28),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_6:
  gxc_NvnStateCache_Reset(a4[1]),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v12, GameData_21fdedc),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v12, GameData_21fdee0),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v12, GameData_21fdf08),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v12, GameData_21fdf14),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = *a4;
  v14 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 16) + 16LL))(
      *(_QWORD*)(a2 + 16)),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = v14 + 16LL * *(int*)(v14 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v13 + 224LL))(v13, 3, 0, *(_QWORD*)(v15 + 24),
                              *(_QWORD*)(v15 + 32)),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v13) = *(_DWORD*)(a5 + 16);
  v16 = *(_DWORD*)(a5 + 20);
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, (unsigned int)v13, v16),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, (unsigned int)v13, v16),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = *a4;
  v18 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 16) + 16LL))(
      *(_QWORD*)(a3 + 16)),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = v20;
  v22 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a2 + 8) + 16LL))(
      *(_QWORD*)(a2 + 8)),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 32LL))(v22),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, __int64))(
      *(_QWORD*)v17 + 104LL))(v17, v19, v21, v23, v24),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = *a4;
  v27_.v27[0] = 0;
  v27_.v27[1] = 0x3F80000000000000LL;
  result = (*(__int64 (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v25 + 144LL))(
      v25, 0, v27_.v27),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v10 >= 1) {
    return GameRoutine_a73d40(*(_QWORD*)(a5 + 64), (__int64)a4);
  }
  return result;
}

__int64 TaskSkyBlur_b764b0(__int64 a1, _QWORD* a2, _QWORD* a3, __int64* a4,
                           __int64 a5)
{
  int v10;
  int v11;
  unsigned __int8 v12;
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
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int* v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  unsigned int v56;
  int v57;
  unsigned int v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned int v73;
  __int64 v74;
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
  unsigned int v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned int v94;
  int v96;
  _QWORD* v97;
  unsigned int v98;
  unsigned int v99;
  _QWORD v100[2];

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 17),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = *(_DWORD*)(a5 + 16);
  v11 = *(_DWORD*)(a5 + 20);
  if (a3[2] != 0) {
    v12 = 2 * *(_BYTE*)(*(_QWORD*)(a5 + 56) + 120LL) + 1;
  }
  else {
    v12 = 2 * *(_BYTE*)(*(_QWORD*)(a5 + 56) + 120LL);
  }
  v13 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v14,
                                                                  v15),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v99 = v10;
  v98 = v11;
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, (unsigned int)(v10 / 2), (unsigned int)(v11 / 2)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, (unsigned int)(v10 / 2), (unsigned int)(v11 / 2)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = *a4;
  v100[0] = 0;
  v100[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v16 + 144LL))(v16, 0, v100),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = *a4;
  v18 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = v18 + 16LL * *(int*)(v18 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v17 + 224LL))(v17, 3, 0, *(_QWORD*)(v19 + 24),
                              *(_QWORD*)(v19 + 32)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = a1 + 16LL * *(int*)(a1 + 336);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 1, *(_QWORD*)(v20 + 344),
                              *(_QWORD*)(v20 + 352)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(*(_QWORD*)(a5 + 56) + 120LL) == 1) {
    v21 = a1 + 16LL * *(int*)(a1 + 392);
    (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 224LL))(*a4, 3, 2, *(_QWORD*)(v21 + 400),
                                *(_QWORD*)(v21 + 408)),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v22 = *a4;
  v23 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)v23 + 40LL))(v23),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v22 + 248LL))(v22, 3, 0, v24, v25, *(unsigned int*)(a1 + 128)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = *a4;
  v27 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 40LL))(v27),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v26 + 248LL))(v26, 3, 1, v28, v29, *(unsigned int*)(a1 + 128)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 248LL))(*a4, 3, 2, *(_QWORD*)(a5 + 72),
                              *(_QWORD*)(a5 + 80), *(unsigned int*)(a1 + 128)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = *a4;
  v31 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 40LL))(v31),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v30 + 248LL))(v30, 3, 3, v32, v33, *(unsigned int*)(a1 + 128)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_BYTE*)(*(_QWORD*)(a5 + 56) + 120LL) == 1) {
    v34 = *a4;
    v35 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[4] + 16LL))(a2[4]),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v36 = (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 40LL))(v35),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v34 + 248LL))(v34, 3, 4, v36, v37,
                                *(unsigned int*)(a1 + 128)),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v38 = a3[2];
  if (v38 != 0) {
    v39 = *a4;
    v40 = (*(__int64 (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v41 = (*(__int64 (**)(__int64))(*(_QWORD*)v40 + 40LL))(v40),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v39 + 248LL))(v39, 3, 6, v41, v42,
                                *(unsigned int*)(a1 + 128)),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  gxc_NvnStateCache_Reset(a4[1]),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v43 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v43, GameData_21fdeb8[0]),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v43, GameData_21fdee0),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v43, GameData_21fdf08),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v43, GameData_21fdf14),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 16LL * v12 + 136) + 144LL)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 2),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 14, 0),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindDepthStencilState(a4[1], GameData_21fdeb8[0]),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v44 = *a4;
  v45 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46 = v45 + 16LL * *(int*)(v45 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v44 + 224LL))(v44, 3, 0, *(_QWORD*)(v46 + 24),
                              *(_QWORD*)(v46 + 32)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v47 = a1 + 16LL * *(int*)(a1 + 280);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 1, *(_QWORD*)(v47 + 288),
                              *(_QWORD*)(v47 + 296)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48 = (int*)(*(_QWORD*)a1 + 13304LL);
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v48 = (int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  v50 = *v48;
  v49 = v48[1];
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 232) + 144LL)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v51 = v49 + 3;
  v52 = v50 + 3;
  v97 = a2;
  if (v49 >= 0) {
    v53 = v49;
  }
  else {
    v53 = v49 + 7;
  }
  if (v49 < 0) {
    v54 = v49 + 15;
  }
  else {
    v51 = v49;
    v54 = v49;
  }
  v55 = v49 + 31;
  v56 = v51 >> 2;
  if (v49 >= 0) {
    v55 = v49;
  }
  if (v50 < 0) {
    v57 = v50 + 7;
  }
  else {
    v52 = v50;
    v57 = v50;
  }
  v96 = v55;
  v58 = v52 >> 2;
  if (v50 >= 0) {
    v59 = v50;
  }
  else {
    v59 = v50 + 15;
  }
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v58, v56),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v58, v56),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ResourceBuilder_b76e40(a1, a3, a4, 0),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, (unsigned int)(v57 >> 3), (unsigned int)(v53 >> 3)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, (unsigned int)(v57 >> 3), (unsigned int)(v53 >> 3)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ResourceBuilder_b76e40(a1, a3, a4, 1u),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, (unsigned int)(v59 >> 4), (unsigned int)(v54 >> 4)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, (unsigned int)(v59 >> 4), (unsigned int)(v54 >> 4)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ResourceBuilder_b76e40(a1, a3, a4, 2u),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, (unsigned int)(v50 / 32), (unsigned int)(v96 >> 5)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, (unsigned int)(v50 / 32), (unsigned int)(v96 >> 5)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ResourceBuilder_b76e40(a1, a3, a4, 3u),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v60 = a3[2];
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 18),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v61 = *a4;
  v62 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v63 = (*(__int64 (**)(__int64))(*(_QWORD*)v62 + 32LL))(v62),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v61 + 96LL))(v61, v63,
                                                                  v64),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, v99, v98),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, v99, v98),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v65 = *a4;
  v100[0] = 0;
  v100[1] = 0;
  (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v65 + 144LL))(v65, 0, v100),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v66 = *a4;
  v67 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v97[1] + 16LL))(v97[1]),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v68 = (*(__int64 (**)(__int64))(*(_QWORD*)v67 + 40LL))(v67),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v66 + 248LL))(v66, 2, 0, v68, v69, *(unsigned int*)(a1 + 128)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v70 = *a4;
  v71 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v97 + 16LL))(*v97),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v72 = (*(__int64 (**)(__int64))(*(_QWORD*)v71 + 40LL))(v71),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v70 + 248LL))(v70, 2, 5, v72, v73, *(unsigned int*)(a1 + 128)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v74 = *a4;
  v75 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[3] + 16LL))(a3[3]),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v76 = (*(__int64 (**)(__int64))(*(_QWORD*)v75 + 40LL))(v75),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v74 + 248LL))(v74, 2, 1, v76, v77, *(unsigned int*)(a1 + 128)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v78 = *a4;
  v79 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[4] + 16LL))(a3[4]),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v80 = (*(__int64 (**)(__int64))(*(_QWORD*)v79 + 40LL))(v79),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v78 + 248LL))(v78, 2, 2, v80, v81, *(unsigned int*)(a1 + 128)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v82 = *a4;
  v83 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[5] + 16LL))(a3[5]),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v84 = (*(__int64 (**)(__int64))(*(_QWORD*)v83 + 40LL))(v83),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v82 + 248LL))(v82, 2, 3, v84, v85, *(unsigned int*)(a1 + 128)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v86 = *a4;
  v87 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[6] + 16LL))(a3[6]),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v88 = (*(__int64 (**)(__int64))(*(_QWORD*)v87 + 40LL))(v87),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v42 = COERCE_AS(__typeof__(v42),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v64 = COERCE_AS(__typeof__(v64),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v69 = COERCE_AS(__typeof__(v69),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v73 = COERCE_AS(__typeof__(v73),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v77 = COERCE_AS(__typeof__(v77),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v81 = COERCE_AS(__typeof__(v81),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v89 = COERCE_AS(__typeof__(v89),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v94 = COERCE_AS(__typeof__(v94),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v86 + 248LL))(v86, 2, 4, v88, v89, *(unsigned int*)(a1 + 128)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v90 = a3[2];
  if (v90 != 0) {
    v91 = *a4;
    v92 = (*(__int64 (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v93 = (*(__int64 (**)(__int64))(*(_QWORD*)v92 + 40LL))(v92),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v25 = COERCE_AS(__typeof__(v25),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v37 = COERCE_AS(__typeof__(v37),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v42 = COERCE_AS(__typeof__(v42),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v64 = COERCE_AS(__typeof__(v64),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v69 = COERCE_AS(__typeof__(v69),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v73 = COERCE_AS(__typeof__(v73),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v77 = COERCE_AS(__typeof__(v77),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v81 = COERCE_AS(__typeof__(v81),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v89 = COERCE_AS(__typeof__(v89),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v94 = COERCE_AS(__typeof__(v94),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64, __int64, _QWORD, _QWORD))(
        *(_QWORD*)v91 + 248LL))(v91, 2, 6, v93, v94,
                                *(unsigned int*)(a1 + 128)),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v25 = COERCE_AS(__typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v29 = COERCE_AS(__typeof__(v29),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v42 = COERCE_AS(__typeof__(v42),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v64 = COERCE_AS(__typeof__(v64),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v69 = COERCE_AS(__typeof__(v69),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v73 = COERCE_AS(__typeof__(v73),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v77 = COERCE_AS(__typeof__(v77),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v81 = COERCE_AS(__typeof__(v81),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v89 = COERCE_AS(__typeof__(v89),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v94 = COERCE_AS(__typeof__(v94),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 16LL * (v60 != 0) + 200) + 144LL)),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v42 = COERCE_AS(__typeof__(v42),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v64 = COERCE_AS(__typeof__(v64),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v69 = COERCE_AS(__typeof__(v69),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v73 = COERCE_AS(__typeof__(v73),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v77 = COERCE_AS(__typeof__(v77),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v81 = COERCE_AS(__typeof__(v81),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v89 = COERCE_AS(__typeof__(v89),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v94 = COERCE_AS(__typeof__(v94),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
