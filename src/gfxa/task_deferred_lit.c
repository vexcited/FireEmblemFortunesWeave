#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_604020(_QWORD* result);
_QWORD* GameRoutine_ad5000(_QWORD*, __int64, unsigned __int64, int);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, _QWORD*, __int64,
                                                   unsigned __int64, __int64,
                                                   unsigned __int64, __int64);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
__int64 GameRoutine_ad5280(__int64*);
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN** GameData_212e4d8[2];
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e7a8[31];
extern __int128 GameData_1a82d20;
extern __int128 GameData_1a834b0;
extern __int128 GameData_1a83620;
extern __int64 (*GameData_1fc60c0[])();
extern __int64 (*GameData_1fc6140[])();
extern __int64 (*GameData_1fc61c0[])();
extern __int64* game_g_frame_clock_ptr[3];
extern int GameData_21fdeb8[];
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
long double GameRoutine_652ba0(_QWORD, float, float);
_QWORD* gfxa_TaskDeferredLit_Impl_Impl_alt1(__int64 a1, __int64 a2) __asm__(
    "gfxa_TaskDeferredLit_Impl_Impl");
__int64 TaskDeferredLit_b57f50(unsigned int* a1, _QWORD* a2, __int64 a3);
__int64 TaskDeferredLit_b58ad0(__int64 a1, _QWORD** a2, _QWORD* a3, __int64* a4,
                               __int64 a5);
__int64 TaskDeferredLit_b58e40(__int64 a1, _QWORD** a2, _QWORD* a3, __int64* a4,
                               __int64 a5);
__int64 GameHr_ad5280(_QWORD*);
__int64 game_615760(__int64, __int64);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void gfxa_TaskDeferredLit_Impl_Impl(__int64 a1, __int64 a2);

void gfxa_TaskDeferredLit_Impl_Impl(__int64 a1, __int64 a2)
{
  __int64 (***v3)();
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 i;
  __int64 (**v9)();
  __int64 (**v10)();
  __int64 (**v11)();
  __int64 v12;
  __int64 v13;
  __int64 (***v14)();
  unsigned __int64 v15;
  __int64 (**v16)();
  __int64 (**v17)();
  __int64 (**v18)();
  __int64 v19;
  __int64 v20;
  __int64 (***v21)();
  unsigned __int64 v22;
  __int64 (**v23)();
  __int64 (**v24)();
  __int64 (**v25)();
  __int64 v26;
  __int64 v27;
  __int64 (**v28)();
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  int v34;
  struct {
    __int64 (**v35)();
    __int64 v36;
    int v37;
    char gap20_[12];
    __int64 (***v38)();
  } v35_;
  struct {
    _QWORD v39[2];
    __int64 v40;
    __int64 v41;
  } v39_;

  *(_QWORD*)a1 = a2;
  GameRoutine_604020((_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 128) = -1;
  GameRoutine_604020((_QWORD*)(a1 + 136));
  *(_QWORD*)(a1 + 256) = -1;
  GameRoutine_604020((_QWORD*)(a1 + 264));
  *(_QWORD*)(a1 + 384) = -1;
  v3 = (__int64 (***)(void))(a1 + 392);
  memset_alt1(a1 + 392, 0, 0x188u);
  *(_DWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 800) = 0;
  *(_QWORD*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_DWORD*)(a1 + 784) = -1;
  *(_DWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_DWORD*)(a1 + 888) = 0;
  v35_.v38 = &v35_.v35;
  v35_.v35 = GameData_1fc60c0;
  v39_.v40 = 0;
  v39_.v41 = 0;
  v39_.v39[0] = 0;
  v39_.v39[1] = 0;
  GameRoutine_5fc230((__int64)v39_.v39);
  if (v35_.v38 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v35_.v38)[6])(v35_.v38,
                                                             v39_.v39);
  }
  v4 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 8, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v39_.v39);
  *(_QWORD*)(a1 + 128) = game_615760(*(_QWORD*)(*v4 + 552), a1 + 8);
  if (v35_.v38 == &v35_.v35) {
    v5 = 4;
  }
  else {
    if (v35_.v38 == nullptr) {
      goto LABEL_8;
    }
    v5 = 5;
  }
  ((__int64 (*)(__int64))(*v35_.v38)[v5])((__int64)v35_.v38);
LABEL_8:
  v39_.v40 = 0;
  v39_.v41 = 0;
  v39_.v39[0] = 0;
  v39_.v39[1] = 0;
  v35_.v35 = GameData_1fc6140;
  v35_.v38 = &v35_.v35;
  GameRoutine_5fc230((__int64)v39_.v39);
  if (v35_.v38 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v35_.v38)[6])(v35_.v38,
                                                             v39_.v39);
  }
  GameRoutine_604060(a1 + 136, (__int64*)(*v4 + 568), (__int64)v39_.v39);
  *(_QWORD*)(a1 + 256) = game_615760(*(_QWORD*)(*v4 + 552), a1 + 136);
  if (v35_.v38 == &v35_.v35) {
    v6 = 4;
  }
  else {
    if (v35_.v38 == nullptr) {
      goto LABEL_15;
    }
    v6 = 5;
  }
  ((__int64 (*)(__int64))(*v35_.v38)[v6])((__int64)v35_.v38);
LABEL_15:
  v39_.v40 = 0;
  v39_.v41 = 0;
  v39_.v39[0] = 0;
  v39_.v39[1] = 0;
  v35_.v35 = GameData_1fc61c0;
  v35_.v38 = &v35_.v35;
  GameRoutine_5fc230((__int64)v39_.v39);
  if (v35_.v38 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v35_.v38)[6])(v35_.v38,
                                                             v39_.v39);
  }
  GameRoutine_604060(a1 + 264, (__int64*)(*v4 + 568), (__int64)v39_.v39);
  *(_QWORD*)(a1 + 384) = game_615760(*(_QWORD*)(*v4 + 552), a1 + 264);
  if (v35_.v38 == &v35_.v35) {
    v7 = 4;
    goto LABEL_21;
  }
  if (v35_.v38 != nullptr) {
    v7 = 5;
  LABEL_21:
    ((__int64 (*)(__int64))(*v35_.v38)[v7])((__int64)v35_.v38);
  }
  for (i = 0; i != 8; ++i) {
    gfx_shader_Archive_CreateShader(
        (void*)(&v35_.v35), *(__int64**)(*(_QWORD*)a1 + 13408LL),
        (__int64)"Lighting", 8u, (__int64)"DeferredShading", 0xFu);
    v10 = v35_.v35;
    v11 = (__int64 (**)(void))v35_.v36;
    v12 = (__int64)v3[1];
    v35_.v35 = nullptr;
    v35_.v36 = 0;
    *v3 = v10;
    v3[1] = v11;
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
      v13 = v35_.v36;
      if (v35_.v36 == 0) {
        goto LABEL_23;
      }
    }
    else {
      v13 = v35_.v36;
      if (v35_.v36 == 0) {
        goto LABEL_23;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt1(v13);
    }
  LABEL_23:
    GameRoutine_ad5000(*v3, (__int64)"co_discard_chara_mask", 0x15u, i & 1);
    GameRoutine_ad5000(*v3, (__int64)"co_shadow_cascade", 0x11u, (i & 2) != 0);
    GameRoutine_ad5000(*v3, (__int64)"co_use_shadow_cascade_fade", 0x1Au,
                       i > 3);
    GameRoutine_ad5000(*v3, (__int64)"co_localshadow_poisson", 0x16u, 0);
    v9 = *v3;
    v3 += 6;
    GameHr_ad5280(v9);
  }
  v14 = (__int64 (***)(void))(a1 + 408);
  v15 = 0;
  while (2) {
    gfx_shader_Archive_CreateShader(
        (void*)(&v35_.v35), *(__int64**)(*(_QWORD*)a1 + 13408LL),
        (__int64)"Lighting", 8u, (__int64)"DeferredShading", 0xFu);
    v17 = v35_.v35;
    v18 = (__int64 (**)(void))v35_.v36;
    v19 = (__int64)v14[1];
    v35_.v35 = nullptr;
    v35_.v36 = 0;
    *v14 = v17;
    v14[1] = v18;
    if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak_alt1(v19);
      v20 = v35_.v36;
      if (v35_.v36 != 0) {
        goto LABEL_36;
      }
    }
    else {
      v20 = v35_.v36;
      if (v35_.v36 != 0) {
      LABEL_36:
        if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          std___1___shared_weak_count___release_weak_alt1(v20);
        }
      }
    }
    GameRoutine_ad5000(*v14, (__int64)"co_discard_chara_mask", 0x15u, v15 & 1);
    GameRoutine_ad5000(*v14, (__int64)"co_shadow_cascade", 0x11u,
                       (v15 & 2) != 0);
    GameRoutine_ad5000(*v14, (__int64)"co_use_shadow_cascade_fade", 0x1Au,
                       v15 > 3);
    GameRoutine_ad5000(*v14, (__int64)"co_localshadow_poisson", 0x16u, 1);
    v16 = *v14;
    v14 += 6;
    GameHr_ad5280(v16);
    if (++v15 != 8) {
      continue;
    }
    break;
  }
  v21 = (__int64 (***)(void))(a1 + 424);
  v22 = 0;
  while (2) {
    gfx_shader_Archive_CreateShader(
        (void*)(&v35_.v35), *(__int64**)(*(_QWORD*)a1 + 13408LL),
        (__int64)"Lighting", 8u, (__int64)"DeferredShading", 0xFu);
    v24 = v35_.v35;
    v25 = (__int64 (**)(void))v35_.v36;
    v26 = (__int64)v21[1];
    v35_.v35 = nullptr;
    v35_.v36 = 0;
    *v21 = v24;
    v21[1] = v25;
    if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak_alt1(v26);
      v27 = v35_.v36;
      if (v35_.v36 != 0) {
        goto LABEL_45;
      }
    }
    else {
      v27 = v35_.v36;
      if (v35_.v36 != 0) {
      LABEL_45:
        if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
          std___1___shared_weak_count___release_weak_alt1(v27);
        }
      }
    }
    GameRoutine_ad5000(*v21, (__int64)"co_discard_chara_mask", 0x15u, v22 & 1);
    GameRoutine_ad5000(*v21, (__int64)"co_shadow_cascade", 0x11u,
                       (v22 & 2) != 0);
    GameRoutine_ad5000(*v21, (__int64)"co_use_shadow_cascade_fade", 0x1Au,
                       v22 > 3);
    GameRoutine_ad5000(*v21, (__int64)"co_localshadow_poisson", 0x16u, 2);
    v23 = *v21;
    v21 += 6;
    GameHr_ad5280(v23);
    if (++v22 != 8) {
      continue;
    }
    break;
  }
  gfx_shader_Archive_CreateShader(
      (void*)(&v35_.v35), *(__int64**)(*(_QWORD*)a1 + 13408LL),
      (__int64)"Lighting", 8u, (__int64)"GmapDeferredShading", 0x13u);
  v28 = v35_.v35;
  v29 = v35_.v36;
  v30 = *(_QWORD*)(a1 + 808);
  v35_.v35 = nullptr;
  v35_.v36 = 0;
  *(_QWORD*)(a1 + 800) = v28;
  *(_QWORD*)(a1 + 808) = v29;
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak_alt1(v30);
  }
  v31 = v35_.v36;
  v32 = game_g_frame_clock_ptr[0];
  if (v35_.v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35_.v36 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    std___1___shared_weak_count___release_weak_alt1(v31);
  }
  GameHr_ad5280(*(_QWORD**)(a1 + 800));
  DecalObject_a91100((__int64*)(a1 + 816), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 128);
  DecalObject_a91100((__int64*)(a1 + 872), *(_QWORD*)(*(_QWORD*)a1 + 312LL),
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 552LL) + 16LL), 208);
  GameRoutine_b34420((void*)((__int64)&v35_.v35), *(_QWORD**)(*v32 + 13424),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"Cmn_Default_BC", 0xEu, 0);
  v33 = v35_.v36;
  *(_QWORD*)(a1 + 776) = v35_.v35;
  v34 = v35_.v37;
  *(_QWORD*)(a1 + 784) = v33;
  *(_DWORD*)(a1 + 792) = v34;
}

__int64 TaskDeferredLit_b57f50(unsigned int* a1, _QWORD* a2, __int64 a3)
{
  int v3;
  __int64 v4;
  bool v8;
  int v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 (**v13)(__int64);
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
  unsigned int* v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int v53;
  float32x4_t* v54;
  int32x4_t v55;
  int v56;
  float32x4_t v57;
  __int64 v58;
  float32x4_t v59;
  long double v60;
  __int64 v61;
  int v62;
  int8x16_t v63;
  __int64 v64;
  float v65;
  __int64 v66;
  int8x16_t v67;
  int8x16_t v68;
  int8x16_t v69;
  __int64 v70;
  int8x16_t v71;
  int8x16_t v72;
  unsigned __int32 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  int8x16_t v77;
  float v78;
  __int64 v79;
  int v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  int32x4_t v88;
  unsigned int v89;
  int8x16_t v90;
  int8x16_t v91;
  int8x16_t v92;
  unsigned __int32 v93;
  float v94;
  __int64 v95;
  float v96;
  __int64 v97;
  int32x4_t v98;
  int8x16_t v99;
  int8x16_t v100;
  int8x16_t v101;
  unsigned __int32 v102;
  float32x4_t v103;
  float v104;
  int v105;
  float v106;
  float v107;
  __int64 v108;
  __int64 v109;
  int v110;
  __int64 v111;
  __int64 v112;
  int v113;
  _BYTE* v114;
  char* v115;
  char v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  float v121;
  bool v122;
  __int64 v123;
  float32x4_t v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  int v128;
  float32x4_t v130;
  long double v131;

  v3 = a1[208];
  v4 = *(_QWORD*)a1;
  v8 = v3 < -1;
  v9 = ((_BYTE)v3 + 1) & 1;
  if (v8) {
    v9 = -v9;
  }
  a1[208] = v9;
  v10 = *(_QWORD*)&a1[2 * v9 + 204];
  v11 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 56LL))(v10);
  v12 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  (*(void (**)(__int64))(*(_QWORD*)v12 + 40LL))(v12);
  v13 = (__int64 (**)(__int64))GameData_212e4d8[0];
  *v11 =
      (*(__int64 (**)(__int64))GameData_212e4d8[0])(*(_QWORD*)(v4 + 256) + 8LL);
  v14 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  (*(void (**)(__int64))(*(_QWORD*)v14 + 40LL))(v14);
  v11[1] = (*v13)(*(_QWORD*)(v4 + 256) + 8LL);
  v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
  (*(void (**)(__int64))(*(_QWORD*)v15 + 40LL))(v15);
  v11[2] = (*v13)(*(_QWORD*)(v4 + 256) + 8LL);
  v16 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]);
  (*(void (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16);
  v11[3] = (*v13)(*(_QWORD*)(v4 + 256) + 8LL);
  v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[4] + 16LL))(a2[4]);
  (*(void (**)(__int64))(*(_QWORD*)v17 + 40LL))(v17);
  v11[4] = (*v13)(*(_QWORD*)(v4 + 256) + 8LL);
  v18 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[5] + 16LL))(a2[5]);
  (*(void (**)(__int64))(*(_QWORD*)v18 + 40LL))(v18);
  v11[5] = (*v13)(*(_QWORD*)(v4 + 256) + 8LL);
  v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[6] + 16LL))(a2[6]);
  (*(void (**)(__int64))(*(_QWORD*)v19 + 40LL))(v19);
  v11[6] =
      (*(__int64 (**)(__int64))GameData_212e7a8[0])(*(_QWORD*)(v4 + 256) + 8LL);
  v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[7] + 16LL))(a2[7]);
  (*(void (**)(__int64))(*(_QWORD*)v20 + 40LL))(v20);
  v11[7] = (*v13)(*(_QWORD*)(v4 + 256) + 8LL);
  v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[8] + 16LL))(a2[8]);
  (*(void (**)(__int64))(*(_QWORD*)v21 + 40LL))(v21);
  v11[8] = (*v13)(*(_QWORD*)(v4 + 256) + 8LL);
  v22 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[9] + 16LL))(a2[9]);
  (*(void (**)(__int64))(*(_QWORD*)v22 + 40LL))(v22);
  v11[9] = (*v13)(*(_QWORD*)(v4 + 256) + 8LL);
  v23 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[10] + 16LL))(a2[10]);
  (*(void (**)(__int64))(*(_QWORD*)v23 + 40LL))(v23);
  v11[10] = (*v13)(*(_QWORD*)(v4 + 256) + 8LL);
  v24 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[11] + 16LL))(a2[11]);
  (*(void (**)(__int64))(*(_QWORD*)v24 + 40LL))(v24);
  v11[11] = (*v13)(*(_QWORD*)(v4 + 256) + 8LL);
  v25 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[12] + 16LL))(a2[12]);
  (*(void (**)(__int64))(*(_QWORD*)v25 + 40LL))(v25);
  v11[12] = (*v13)(*(_QWORD*)(v4 + 256) + 8LL);
  v11[13] = ((__int64 (*)(__int64, _QWORD, _QWORD))*v13)(
      *(_QWORD*)(v4 + 256) + 8LL, *(unsigned int*)(a3 + 8), a1[32]);
  v11[14] = ((__int64 (*)(__int64, _QWORD, _QWORD))*v13)(
      *(_QWORD*)(v4 + 256) + 8LL, *(unsigned int*)(a3 + 24), a1[32]);
  v26 = *(_QWORD*)(a3 + 64);
  if (v26 != 0) {
    v27 = (unsigned int*)(v26 + 8);
  }
  else {
    v27 = a1 + 196;
  }
  v11[15] = ((__int64 (*)(__int64, _QWORD, _QWORD))*v13)(
      *(_QWORD*)(v4 + 256) + 8LL, *v27, a1[96]);
  (*(void (**)(__int64))(*(_QWORD*)v10 + 64LL))(v10);
  v28 = a1[222];
  v8 = v28 < -1;
  v29 = ((_BYTE)v28 + 1) & 1;
  if (v8) {
    v29 = -v29;
  }
  a1[222] = v29;
  v30 = *(_QWORD*)&a1[2 * v29 + 218];
  v31 = (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 56LL))(v30);
  *(_QWORD*)v31 = 0x3FD625C13A83126FLL;
  *(_QWORD*)(v31 + 8) = 1098907648;
  v32 = *(_DWORD*)(a3 + 32);
  v33 = v32 + 31;
  v8 = v32 < -31;
  v34 = v32 + 62;
  if (!v8) {
    v34 = v33;
  }
  *(_DWORD*)(v31 + 16) = v34 >> 5;
  v35 = *(_DWORD*)(a3 + 36);
  v36 = v35 + 31;
  v8 = v35 < -31;
  v37 = v35 + 62;
  if (!v8) {
    v37 = v36;
  }
  *(_DWORD*)(v31 + 20) = v37 >> 5;
  *(_QWORD*)(v31 + 24) = 16;
  v38 = *(_QWORD*)(a3 + 48);
  v39 = 128;
  if (*(_BYTE*)(v38 + 96) != 0) {
    v40 = 92;
  }
  else {
    v40 = 128;
  }
  *(_DWORD*)(v31 + 32) = *(_DWORD*)(v38 + v40);
  v41 = *(_QWORD*)(a3 + 48);
  if (*(_BYTE*)(v41 + 176) != 0) {
    v42 = 172;
  }
  else {
    v42 = 208;
  }
  v43 = *(_DWORD*)(v41 + v42);
  *(_QWORD*)(v31 + 40) = 0;
  *(_DWORD*)(v31 + 36) = v43;
  v44 = *(_QWORD*)(a3 + 56);
  if (*(_BYTE*)(v44 + 96) != 0) {
    v39 = 92;
  }
  *(_DWORD*)(v31 + 48) = *(_DWORD*)(v44 + v39);
  v45 = *(_QWORD*)(a3 + 56);
  if (*(_BYTE*)(v45 + 176) != 0) {
    v46 = 172;
  }
  else {
    v46 = 208;
  }
  *(_DWORD*)(v31 + 52) = *(_DWORD*)(v45 + v46);
  v47 = *(_QWORD*)(a3 + 56);
  v48 = 288;
  if (*(_BYTE*)(v47 + 256) != 0) {
    v48 = 252;
  }
  *(_DWORD*)(v31 + 56) = *(_DWORD*)(v47 + v48);
  v49 = *(_QWORD*)(a3 + 56);
  v50 = 368;
  if (*(_BYTE*)(v49 + 336) != 0) {
    v50 = 332;
  }
  *(_DWORD*)(v31 + 60) = *(_DWORD*)(v49 + v50);
  v51 = *(_QWORD*)(a3 + 80);
  v52 = 1144;
  if (*(_BYTE*)(v51 + 1112) != 0) {
    v52 = 1108;
  }
  v53 = *(_DWORD*)(v51 + v52);
  *(_QWORD*)(v31 + 176) = 0;
  *(_QWORD*)(v31 + 184) = 0;
  *(_DWORD*)(v31 + 172) = v53;
  v54 = *(float32x4_t**)(a3 + 96);
  if (v54 != nullptr) {
    v55 = vdupq_n_s32(0x3C23D70Au);
    v56 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
    v57 = vmulq_f32(v54[4], v55);
    LANES128(v57).n128_u32[3] = 0;
    v131 = *(long double*)&v57;
    if ((unsigned int)(v56 - 3) < 4) {
      if ((unsigned int)(v56 - 5) >= 2) {
        v67 = vmulq_f32(v57, COERCE_AS(float32x4_t, GameData_1a83620));
        LANES128(v67).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v67, v67, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0])))
                .n64_u64[0];
        v68 = vmulq_f32(v57, COERCE_AS(float32x4_t, GameData_1a834b0));
        LANES128(v68).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v68, v68, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
                .n64_u64[0];
        v69 = vmulq_f32(v57, COERCE_AS(float32x4_t, GameData_1a82d20));
        LANES128(v57).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0])))
                .n64_u32[0] |
            ((unsigned __int64)LANES64_OF(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0])))
                 .n64_u32[0]
             << 32);
        LANES128(v69).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v69, v69, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
                .n64_u64[0];
        LANES128(v57).n128_u64[1] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0])))
                .n64_u32[0];
        v60 = COERCE_LONG_DOUBLE(vmulq_f32(v54[5], vdupq_n_s32(0x3C23D70Au)));
        HIDWORD(v60) = 0;
        v131 = v60;
      }
      else {
        v58 = v31;
        *(long double*)&v59 = GameRoutine_652ba0(&v131, 0x1.0000000000000p+0,
                                                 0x1.0000000000000p+0);
        v54 = *(float32x4_t**)(a3 + 96);
        v57 = v59;
        v31 = v58;
        v56 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL);
        v60 = COERCE_LONG_DOUBLE(vmulq_f32(v54[5], vdupq_n_s32(0x3C23D70Au)));
        HIDWORD(v60) = 0;
        v131 = v60;
        if ((unsigned int)(v56 - 3) > 3) {
          goto LABEL_49;
        }
      }
      if ((unsigned int)(v56 - 5) > 1) {
        v71 = vmulq_f32(*(float32x4_t*)&v60,
                        COERCE_AS(float32x4_t, GameData_1a83620));
        LANES128(v71).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v71, v71, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
                .n64_u64[0];
        v72 = vmulq_f32(*(float32x4_t*)&v60,
                        COERCE_AS(float32x4_t, GameData_1a834b0));
        LANES128(v72).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v72, v72, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
                .n64_u64[0];
        v60 = COERCE_LONG_DOUBLE(vmulq_f32(
            *(float32x4_t*)&v60, COERCE_AS(float32x4_t, GameData_1a82d20)));
        *(float32x2_t*)&v60 = vadd_f32(
            COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v60,
                                                        *(int8x16_t*)&v60, 8u))
                                       .n128_u64[0]),
            *(float32x2_t*)&v60);
        v73 = LANES64_OF(vpadd_f32(*(float32x2_t*)&v60, *(float32x2_t*)&v60))
                  .n64_u32[0];
        *(_QWORD*)&v60 =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
                .n64_u32[0] |
            ((unsigned __int64)LANES64_OF(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
                 .n64_u32[0]
             << 32);
        DWORD2(v60) = v73;
      }
      else {
        v70 = v31;
        v130 = v57;
        v60 = GameRoutine_652ba0(&v131, 0x1.0000000000000p+0,
                                 0x1.0000000000000p+0);
        v57 = v130;
        v54 = *(float32x4_t**)(a3 + 96);
        v31 = v70;
      }
      goto LABEL_49;
    }
    v60 = COERCE_LONG_DOUBLE(vmulq_f32(v54[5], v55));
  LABEL_49:
    v74 = LANES128(v54[3]).n128_u64[0];
    v75 = LANES128(v54[3]).n128_u32[2];
    *(_QWORD*)(v31 + 48) = v74;
    *(_QWORD*)(v31 + 56) = v75;
    v76 =
        LANES128(v57).n128_u32[2] |
        ((unsigned __int64)*(unsigned int*)(*(_QWORD*)(a3 + 96) + 96LL) << 32);
    *(_QWORD*)(v31 + 64) = LANES128(v57).n128_u64[0];
    *(_QWORD*)(v31 + 72) = v76;
    v77 = *(int8x16_t*)(*(_QWORD*)(a3 + 96) + 16LL);
    *(_QWORD*)(v31 + 80) = LANES128(v77).n128_u64[0];
    *(_QWORD*)(v31 + 88) = LANES128_OF(vextq_s8(v77, v77, 8u)).n128_u64[0];
    v78 = 0.0;
    v79 = *(_QWORD*)(a3 + 96);
    if (*(_BYTE*)(v79 + 100) != 0) {
      v78 = 0x1.0000000000000p+0;
    }
    v80 = *(_DWORD*)(v79 + 104);
    v81 = *(_DWORD*)(v79 + 108);
    *(_DWORD*)(v31 + 104) = 0;
    *(_QWORD*)(v31 + 176) =
        LODWORD(v60) | ((unsigned __int64)DWORD1(v60) << 32);
    *(_QWORD*)(v31 + 184) = DWORD2(v60);
    *(float*)(v31 + 96) = v78;
    *(_DWORD*)(v31 + 100) = v80;
    *(_DWORD*)(v31 + 108) = v81;
    v82 = *(_QWORD*)(a3 + 96);
    v84 = *(_QWORD*)(v82 + 32);
    v83 = *(_QWORD*)(v82 + 40);
    *(_QWORD*)(v31 + 192) = v84;
    *(_QWORD*)(v31 + 200) = v83;
    goto LABEL_52;
  }
  v61 = *(_QWORD*)(a3 + 64);
  if (v61 != 0) {
    *(_DWORD*)(v31 + 64) = *(_DWORD*)(v61 + 48);
    v62 = *(_DWORD*)(*(_QWORD*)(a3 + 64) + 52LL);
    *(_QWORD*)(v31 + 72) = 0xBF800000BF800000LL;
    *(_DWORD*)(v31 + 68) = v62;
    v63 = *(int8x16_t*)(*(_QWORD*)(a3 + 64) + 16LL);
    *(_QWORD*)(v31 + 80) = LANES128(v63).n128_u64[0];
    *(_QWORD*)(v31 + 88) = LANES128_OF(vextq_s8(v63, v63, 8u)).n128_u64[0];
    v64 = *(_QWORD*)(*(_QWORD*)(a3 + 64) + 32LL);
    *(_DWORD*)(v31 + 96) = v64;
    v65 = *(float*)(*(_QWORD*)(a3 + 64) + 36LL);
    *(_QWORD*)(v31 + 104) = 0;
    *(float*)(v31 + 100) = v65;
    v66 = *(_QWORD*)(a3 + 64);
    if (*(_BYTE*)(v66 + 65) == 1) {
      *(float*)(v31 + 72) = v65 + (float)(*(float*)(v66 + 72) * *(float*)&v64);
      v66 = *(_QWORD*)(a3 + 64);
    }
    if (*(_BYTE*)(v66 + 77) == 1) {
      *(float*)(v31 + 76) = v65 + (float)(*(float*)(v66 + 84) * *(float*)&v64);
      v66 = *(_QWORD*)(a3 + 64);
    }
    if (*(_BYTE*)(v66 + 64) == 1) {
      *(float*)(v31 + 64) =
          0x1.0000000000000p+0 / (float)(*(float*)&v64 * *(float*)(v66 + 68));
      v66 = *(_QWORD*)(a3 + 64);
    }
    if (*(_BYTE*)(v66 + 76) == 1) {
      *(float*)(v31 + 68) =
          0x1.0000000000000p+0 / (float)(*(float*)&v64 * *(float*)(v66 + 80));
    }
  }
  else {
    *(_QWORD*)(v31 + 48) = 0;
    *(_QWORD*)(v31 + 56) = 0x3F8000003F800000LL;
    *(_QWORD*)(v31 + 64) = 0x3F8000003F800000LL;
    *(_QWORD*)(v31 + 72) = 0;
    *(_QWORD*)(v31 + 80) = 0x3F8000003F800000LL;
    *(_QWORD*)(v31 + 88) = 0;
    *(_QWORD*)(v31 + 96) = 1065353216;
    *(_QWORD*)(v31 + 104) = 0;
  }
LABEL_52:
  v85 = *(_QWORD*)(a3 + 72);
  v86 = 120;
  if (*(_BYTE*)(v85 + 90) != 0) {
    v86 = 89;
  }
  if ((*(_BYTE*)(v85 + v86) & 1) != 0) {
    v87 = 400;
    if (*(_BYTE*)(v85 + 352) != 0) {
      v87 = 336;
    }
    v88 = *(int32x4_t*)(v85 + v87);
    v89 = *(_DWORD*)(*(_QWORD*)a1 + 13240LL) - 3;
    if (v89 <= 3) {
      v90 = vmulq_f32(v88, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v90).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v90, v90, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])))
              .n64_u64[0];
      v91 = vmulq_f32(v88, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v91).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v91, v91, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0])))
              .n64_u64[0];
      v92 = vmulq_f32(v88, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v92).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v92, v92, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0])))
              .n64_u64[0];
      v93 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0])))
                .n64_u32[0];
      LANES128(v88).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v91).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v88).n128_u64[1] = v93;
    }
    v94 = LANES128_OF(
              vaddq_f32(vdupq_laneq_s32(v88, 2),
                        vaddq_f32(v88, vdupq_lane_s32(
                                           COERCE_AS(int32x2_t,
                                                     LANES128(v88).n128_u64[0]),
                                           1))))
              .n128_f32[0] /
          3.0;
    if (v94 > 0x1.0000000000000p-23) {
      v88 = vmulq_n_f32(v88, 0x1.0000000000000p+0 / v94);
      LANES128(v88).n128_u32[3] = 0;
    }
    v95 = 280;
    if (*(_BYTE*)(v85 + 248) != 0) {
      v95 = 244;
    }
    v96 = *(float*)(v85 + v95);
    v97 = 768;
    if (*(_BYTE*)(v85 + 720) != 0) {
      v97 = 704;
    }
    v98 = *(int32x4_t*)(v85 + v97);
    if (v89 <= 3) {
      v99 = vmulq_f32(v98, COERCE_AS(float32x4_t, GameData_1a83620));
      LANES128(v99).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v99, v99, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v99).n128_u64[0])))
              .n64_u64[0];
      v100 = vmulq_f32(v98, COERCE_AS(float32x4_t, GameData_1a834b0));
      LANES128(v100).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v100, v100, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v100).n128_u64[0])))
              .n64_u64[0];
      v101 = vmulq_f32(v98, COERCE_AS(float32x4_t, GameData_1a82d20));
      LANES128(v101).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v101, v101, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))
              .n64_u64[0];
      v102 = LANES64_OF(
                 vpadd_f32(COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))
                 .n64_u32[0];
      LANES128(v98).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v99).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v99).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v100).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v100).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v98).n128_u64[1] = v102;
    }
    v103 = vmulq_n_f32(v88, v96);
    v104 =
        LANES128_OF(
            vaddq_f32(vdupq_laneq_s32(v98, 2),
                      vaddq_f32(v98, vdupq_lane_s32(
                                         COERCE_AS(int32x2_t,
                                                   LANES128(v98).n128_u64[0]),
                                         1))))
            .n128_f32[0] /
        3.0;
    if (v104 > 0x1.0000000000000p-23) {
      v98 = vmulq_n_f32(v98, 0x1.0000000000000p+0 / v104);
      LANES128(v98).n128_u32[3] = 0;
    }
    v105 = *(unsigned __int8*)(v85 + 608);
    v106 = *(float*)(v85 + 604);
    v107 = *(float*)(v85 + 640);
    *(_QWORD*)(v31 + 112) = LANES128(v103).n128_u64[0];
    *(_QWORD*)(v31 + 160) = LANES128(v103).n128_u64[0];
    *(_DWORD*)(v31 + 120) = LANES128(v103).n128_u32[2];
    *(_QWORD*)(v31 + 124) = 0x3F8000003F800000LL;
    *(_DWORD*)(v31 + 168) = LANES128(v103).n128_u32[2];
    v108 = *(_QWORD*)(a3 + 72);
    v109 = 200;
    if (*(_BYTE*)(v108 + 168) != 0) {
      v109 = 164;
    }
    v110 = *(_DWORD*)(v108 + v109);
    *(_DWORD*)(v31 + 136) = 1065353216;
    *(_DWORD*)(v31 + 132) = v110;
    v111 = *(_QWORD*)(a3 + 72);
    v112 = 488;
    if (*(_BYTE*)(v111 + 456) != 0) {
      v112 = 452;
    }
    v113 = *(_DWORD*)(v111 + v112);
    *(_DWORD*)(v31 + 140) = v113;
    v114 = *(_BYTE**)(a3 + 72);
    v115 = v114 + 529;
    if (v114[530] == 0) {
      v115 = v114 + 560;
    }
    v116 = *v115;
    v117 = 936;
    if (v114[904] != 0) {
      v118 = 900;
    }
    else {
      v118 = 936;
    }
    *(float*)(v31 + 144) = -*(float*)&v114[v118];
    v119 = *(_QWORD*)(a3 + 72);
    v120 = 1016;
    if (*(_BYTE*)(v119 + 984) != 0) {
      v120 = 980;
    }
    if (*(_BYTE*)(v119 + 904) != 0) {
      v117 = 900;
    }
    v121 = *(float*)(v119 + v120) - *(float*)(v119 + v117);
    if (v121 < 0x1.0624de0000000p-10) {
      v121 = 0x1.0624de0000000p-10;
    }
    *(float*)(v31 + 148) = 0x1.0000000000000p+0 / v121;
    if ((v116 & 1) != 0) {
      v122 = v105 == 0;
      v123 = *(_QWORD*)(a3 + 72);
      if (v122) {
        v106 = v107;
      }
      v124 = vmulq_n_f32(v98, v106);
      v125 = 1096;
      if (*(_BYTE*)(v123 + 1064) != 0) {
        v125 = 1060;
      }
      *(_DWORD*)(v31 + 152) = *(_DWORD*)(v123 + v125);
      v126 = *(_QWORD*)(a3 + 72);
      v127 = 856;
      if (*(_BYTE*)(v126 + 824) != 0) {
        v127 = 820;
      }
      v128 = *(_DWORD*)(v126 + v127);
      *(_QWORD*)(v31 + 160) = LANES128(v124).n128_u64[0];
      *(_DWORD*)(v31 + 168) = LANES128(v124).n128_u32[2];
      *(_DWORD*)(v31 + 156) = v128;
    }
    else {
      *(_DWORD*)(v31 + 152) = 1065353216;
      *(_DWORD*)(v31 + 156) = v113;
    }
  }
  else {
    *(_QWORD*)(v31 + 112) = 0x3F8000003F800000LL;
    *(_QWORD*)(v31 + 120) = 0x3F8000003F800000LL;
    *(_QWORD*)(v31 + 152) = 1065353216;
    *(_QWORD*)(v31 + 160) = 0x3F8000003F800000LL;
    *(_QWORD*)(v31 + 128) = 0;
    *(_QWORD*)(v31 + 136) = 1065353216;
    *(_DWORD*)(v31 + 168) = 1065353216;
    *(_QWORD*)(v31 + 144) = 0x3F80000000000000LL;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v30 + 64LL))(v30);
}

__int64 TaskDeferredLit_b58ad0(__int64 a1, _QWORD** a2, _QWORD* a3, __int64* a4,
                               __int64 a5)
{
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
  __int64 v36;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 49),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v11,
                                                                  v12),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 32), *(unsigned int*)(a5 + 36)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 32), *(unsigned int*)(a5 + 36)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v13, GameData_21fdeb8[0]),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v13, GameData_21fdee0),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v13, GameData_21fdf08),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v13, GameData_21fdf14),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = *a4;
  v15 = (*(__int64 (**)(_QWORD*))(*a2[13] + 16LL))(a2[13]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = v15 + 16LL * *(int*)(v15 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v14 + 224LL))(v14, 2, 0, *(_QWORD*)(v16 + 24),
                              *(_QWORD*)(v16 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = *a4;
  v18 = (*(__int64 (**)(_QWORD*))(*a2[14] + 16LL))(a2[14]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = v18 + 16LL * *(int*)(v18 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v17 + 224LL))(v17, 2, 1, *(_QWORD*)(v19 + 24),
                              *(_QWORD*)(v19 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = *a4;
  v21 = (*(__int64 (**)(_QWORD*))(*a2[15] + 16LL))(a2[15]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = v21 + 16LL * *(int*)(v21 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v20 + 224LL))(v20, 2, 2, *(_QWORD*)(v22 + 24),
                              *(_QWORD*)(v22 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = a1 + 16LL * *(int*)(a1 + 832);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 4, *(_QWORD*)(v23 + 840),
                              *(_QWORD*)(v23 + 848)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = a1 + 16LL * *(int*)(a1 + 888);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 5, *(_QWORD*)(v24 + 896),
                              *(_QWORD*)(v24 + 904)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = *a4;
  v26 = (*(__int64 (**)(_QWORD*))(*a2[20] + 16LL))(a2[20]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = v26 + 16LL * *(int*)(v26 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v25 + 224LL))(v25, 2, 6, *(_QWORD*)(v27 + 24),
                              *(_QWORD*)(v27 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = *a4;
  v29 = (*(__int64 (**)(_QWORD*))(*a2[17] + 16LL))(a2[17]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = v29 + 16LL * *(int*)(v29 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v28 + 232LL))(v28, 2, 0, *(_QWORD*)(v30 + 24),
                              *(_QWORD*)(v30 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = *a4;
  v32 = (*(__int64 (**)(_QWORD*))(*a2[18] + 16LL))(a2[18]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = v32 + 16LL * *(int*)(v32 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v31 + 232LL))(v31, 2, 4, *(_QWORD*)(v33 + 24),
                              *(_QWORD*)(v33 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = *a4;
  v35 = (*(__int64 (**)(_QWORD*))(*a2[19] + 16LL))(a2[19]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v36 = v35 + 16LL * *(int*)(v35 + 8);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v34 + 232LL))(v34, 2, 1, *(_QWORD*)(v36 + 16),
                              *(_QWORD*)(v36 + 24)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 240LL))(*a4, 2, 0, **(_QWORD**)(a5 + 96),
                              *(_QWORD*)(*(_QWORD*)(a5 + 96) + 8LL)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 800) + 144LL)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

__int64 TaskDeferredLit_b58e40(__int64 a1, _QWORD** a2, _QWORD* a3, __int64* a4,
                               __int64 a5)
{
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
  __int64 v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 49),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v11,
                                                                  v12),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 72LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 32), *(unsigned int*)(a5 + 36)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)*a4 + 88LL))(
      *a4, 0, 0, *(unsigned int*)(a5 + 32), *(unsigned int*)(a5 + 36)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v13, GameData_21fdeb8[0]),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v13, GameData_21fdee0),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v13, GameData_21fdf08),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v13, GameData_21fdf14),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = *a4;
  v15 = (*(__int64 (**)(_QWORD*))(*a2[13] + 16LL))(a2[13]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = v15 + 16LL * *(int*)(v15 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v14 + 224LL))(v14, 2, 0, *(_QWORD*)(v16 + 24),
                              *(_QWORD*)(v16 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = *a4;
  v18 = (*(__int64 (**)(_QWORD*))(*a2[14] + 16LL))(a2[14]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = v18 + 16LL * *(int*)(v18 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v17 + 224LL))(v17, 2, 1, *(_QWORD*)(v19 + 24),
                              *(_QWORD*)(v19 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = *a4;
  v21 = (*(__int64 (**)(_QWORD*))(*a2[15] + 16LL))(a2[15]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = v21 + 16LL * *(int*)(v21 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v20 + 224LL))(v20, 2, 2, *(_QWORD*)(v22 + 24),
                              *(_QWORD*)(v22 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = a1 + 16LL * *(int*)(a1 + 832);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 4, *(_QWORD*)(v23 + 840),
                              *(_QWORD*)(v23 + 848)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = a1 + 16LL * *(int*)(a1 + 888);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 2, 5, *(_QWORD*)(v24 + 896),
                              *(_QWORD*)(v24 + 904)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = *a4;
  v26 = (*(__int64 (**)(_QWORD*))(*a2[20] + 16LL))(a2[20]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = v26 + 16LL * *(int*)(v26 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v25 + 224LL))(v25, 2, 6, *(_QWORD*)(v27 + 24),
                              *(_QWORD*)(v27 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = *a4;
  v29 = (*(__int64 (**)(_QWORD*))(*a2[17] + 16LL))(a2[17]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = v29 + 16LL * *(int*)(v29 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v28 + 232LL))(v28, 2, 0, *(_QWORD*)(v30 + 24),
                              *(_QWORD*)(v30 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = *a4;
  v32 = (*(__int64 (**)(_QWORD*))(*a2[18] + 16LL))(a2[18]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = v32 + 16LL * *(int*)(v32 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v31 + 232LL))(v31, 2, 4, *(_QWORD*)(v33 + 24),
                              *(_QWORD*)(v33 + 32)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v34 = *a4;
  v35 = (*(__int64 (**)(_QWORD*))(*a2[19] + 16LL))(a2[19]),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v36 = v35 + 16LL * *(int*)(v35 + 8);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v34 + 232LL))(v34, 2, 1, *(_QWORD*)(v36 + 16),
                              *(_QWORD*)(v36 + 24)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v37 = *(_QWORD*)(a5 + 80);
  v38 = *(unsigned __int8*)(a5 + 88);
  v39 = 0;
  v40 = 984;
  if (*(_BYTE*)(v37 + 954) != 0) {
    v40 = 953;
  }
  if ((*(_BYTE*)(v37 + v40) & 1) != 0) {
    v41 = 1064;
    if (*(_BYTE*)(v37 + 1032) != 0) {
      v41 = 1028;
    }
    v39 = *(_DWORD*)(v37 + v41) + 1;
  }
  if (*(_DWORD*)(a5 + 40) == 5) {
    v38 |= 2u;
  }
  (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
      *a4, 3,
      *(_QWORD*)(*(_QWORD*)(a1 +
                            16LL * (v39 +
                                    3 * (v38 |
                                         (4 * *(unsigned __int8*)(a5 + 89)))) +
                            392) +
                 144LL)),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(
      *a4, 3, 0);
}

#pragma GCC visibility pop
