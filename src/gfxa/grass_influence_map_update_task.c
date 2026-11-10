#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfxa_GrassInfluenceMapUpdateTask_vtable[])();
extern __int64 game_g_frame_clock;
__int64 GrassInfluenceMapUpdateTask_Destructor(_QWORD* a1);
__int64 GrassInfluenceMapUpdateTask_c61c90(__int64 a1);
void gfxa_GrassInfluenceMapUpdateTask_initialize_lambda0_Invoke(__int64 a1,
                                                                __int64 a2);
_QWORD* GameRoutine_604020(_QWORD* result);
_QWORD* GameRoutine_ad5000(_QWORD*, __int64, unsigned __int64, int);
__attribute__((swiftcall)) void GameRoutine_53c20(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
__int64 GameRoutine_ad5280(__int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern _UNKNOWN** GameData_212e490[11];
extern _UNKNOWN** GameData_212e4a0[9];
extern _UNKNOWN** GameData_212e4a8[8];
extern _UNKNOWN** GameData_212e4b0[7];
extern _UNKNOWN** GameData_212e4b8[6];
extern __int64 (*GameData_1fd2b00[])();
extern __int64 (*GameData_1fd2b50[])();
extern __int64 (*GameData_1fd2ba0[])();
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 gfxa_GrassInfluenceMapUpdateTask_initialize(__int64 a1, __int64 a2,
                                                    _QWORD* a3);
__int64 GrassInfluenceMapUpdateTask_c61ec0(__int64 a1, __int64 a2, __int64* a3);
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e888[3];
extern _UNKNOWN** GameData_212e898;
extern int GameData_21fdeb8;
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf14;
__int64 GrassInfluenceMapUpdateTask_Unknown3(__int64 result, __int64* a2);

__int64 gfxa_GrassInfluenceMapUpdateTask_initialize(__int64 a1, __int64 a2,
                                                    _QWORD* a3)
{
  __int64 v5;
  __int64 v6;
  __int64* v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64* v13;
  __int64 v14;
  void (**v15)(__int64);
  void (**v16)(__int64, __int64, __int64);
  void (**v17)(__int64, __int64, __int64, __int64, __int64);
  __int64 (**v18)();
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 (**v22)();
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  struct {
    __int64 (**v28)();
    __int64 v29;
    char gap16_[16];
    __int64* v30;
  } v28_;
  _QWORD v31[4];

  *(_QWORD*)a1 = gfxa_GrassInfluenceMapUpdateTask_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 16) = *a3;
  v5 = a3[1];
  *(_QWORD*)(a1 + 24) = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 32) = a3[2];
  v6 = a3[3];
  *(_QWORD*)(a1 + 40) = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  LODWORD(v28_.v28) = *(_DWORD*)(a3[2] + 4LL);
  HIDWORD(v28_.v28) = (_DWORD)v28_.v28;
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  v9 = v8 + 3;
  v10 = v8;
  v8[1] = 0;
  v8[2] = 0;
  *v8 = GameData_1fd2b00;
  GrassInfluenceMapUpdateTask_c61ec0((__int64)(v8 + 3), a2,
                                     (__int64*)&v28_.v28);
  v11 = *v7;
  *(_QWORD*)(a1 + 48) = v9;
  *(_QWORD*)(a1 + 56) = v10;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(v11, 96, 16, 0);
  v12[1] = 0;
  v12[2] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v12[7] = 0;
  v12[8] = 0;
  v12[9] = 0;
  v12[10] = 0;
  v12[11] = 0;
  *(_QWORD*)(a1 + 72) = v12;
  *v12 = GameData_1fd2b50;
  v12[4] = 0;
  *(_QWORD*)(a1 + 64) = v12 + 4;
  GameRoutine_604020((_QWORD*)(a1 + 104));
  *(_QWORD*)(a1 + 232) = 0;
  v28_.v30 = (__int64*)&v28_.v28;
  memset(v31, 0, sizeof(v31));
  *(_QWORD*)(a1 + 224) = -1;
  *(_QWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_DWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_DWORD*)(a1 + 416) = 0;
  *(_DWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_BYTE*)(a1 + 1220) = 1;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_DWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 576) = 0;
  *(_DWORD*)(a1 + 584) = 0;
  *(_DWORD*)(a1 + 640) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 592) = 0;
  *(_QWORD*)(a1 + 600) = 0;
  *(_DWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_DWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_DWORD*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 800) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_DWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_DWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_DWORD*)(a1 + 976) = 0;
  *(_QWORD*)(a1 + 968) = 0;
  *(_QWORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_DWORD*)(a1 + 1032) = 0;
  *(_QWORD*)(a1 + 1024) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 1008) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 984) = 0;
  *(_DWORD*)(a1 + 1088) = 0;
  *(_QWORD*)(a1 + 1080) = 0;
  *(_QWORD*)(a1 + 1072) = 0;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_QWORD*)(a1 + 1056) = 0;
  *(_QWORD*)(a1 + 1048) = 0;
  *(_QWORD*)(a1 + 1040) = 0;
  *(_DWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1128) = 0;
  *(_QWORD*)(a1 + 1120) = 0;
  *(_QWORD*)(a1 + 1112) = 0;
  *(_QWORD*)(a1 + 1104) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_DWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1208) = 0;
  *(_QWORD*)(a1 + 1200) = 0;
  *(_QWORD*)(a1 + 1192) = 0;
  *(_QWORD*)(a1 + 1184) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  *(_QWORD*)(a1 + 1168) = 0;
  *(_QWORD*)(a1 + 1160) = 0;
  *(_QWORD*)(a1 + 1152) = 0;
  v28_.v28 = GameData_1fd2ba0;
  GameRoutine_5fc230((__int64)v31);
  if (v28_.v30 != nullptr) {
    (*(void (**)(__int64*, _QWORD*))(*v28_.v30 + 48))(v28_.v30, v31);
  }
  v13 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 104, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v31);
  *(_QWORD*)(a1 + 224) = GameRoutine_615760(*(_QWORD*)(*v13 + 552), a1 + 104);
  if (v28_.v30 == (__int64*)&v28_.v28) {
    v14 = 32;
    goto LABEL_11;
  }
  if (v28_.v30 != nullptr) {
    v14 = 40;
  LABEL_11:
    (*(void (**)(__int64))(*v28_.v30 + v14))((__int64)v28_.v30);
  }
  v15 = (void (**)(__int64))GameData_212e490[0];
  (*(void (**)(__int64))GameData_212e490[0])(a1 + 80);
  v16 = (void (**)(__int64, __int64, __int64))GameData_212e4b0[0];
  (*(void (**)(__int64, __int64, __int64))GameData_212e4b0[0])(a1 + 80, 1, 1);
  v17 = (void (**)(__int64, __int64, __int64, __int64,
                   __int64))GameData_212e4b8[0];
  (*(void (**)(__int64, __int64, __int64, __int64,
               __int64))GameData_212e4b8[0])(a1 + 80, 9, 1, 7, 1);
  (*v15)(a1 + 88);
  (*v16)(a1 + 88, 1, 1);
  (*v17)(a1 + 88, 2, 2, 2, 1);
  (*(void (**)(__int64))GameData_212e4a0[0])(a1 + 96);
  (*(void (**)(__int64, _QWORD, __int64))GameData_212e4a8[0])(a1 + 96, 0, 1);
  DecalObject_a91100(
      (__int64*)(a1 + 232), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 24);
  DecalObject_a91100(
      (__int64*)(a1 + 288), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 344), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 400), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 456), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 512), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 568), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 624), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 680), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 736), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 792), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 848), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 904), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 960), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 1016), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 1072), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  DecalObject_a91100(
      (__int64*)(a1 + 1128), *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 4);
  gfx_shader_Archive_CreateShader(
      (void*)(&v28_.v28), *(__int64**)(*(_QWORD*)(a1 + 8) + 13408LL),
      (__int64)"map", 3u, (__int64)"MapGrass_influence", 0x12u);
  v18 = v28_.v28;
  v19 = v28_.v29;
  v20 = *(_QWORD*)(a1 + 1192);
  v28_.v28 = nullptr;
  v28_.v29 = 0;
  *(_QWORD*)(a1 + 1184) = v18;
  *(_QWORD*)(a1 + 1192) = v19;
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  v21 = v28_.v29;
  if (v28_.v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28_.v29 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak(v21);
  }
  GameRoutine_ad5280(*(__int64**)(a1 + 1184));
  gfx_shader_Archive_CreateShader(
      (void*)(&v28_.v28), *(__int64**)(*(_QWORD*)(a1 + 8) + 13408LL),
      (__int64)"map", 3u, (__int64)"MapGrass_influence", 0x12u);
  v22 = v28_.v28;
  v23 = v28_.v29;
  v24 = *(_QWORD*)(a1 + 1208);
  v28_.v28 = nullptr;
  v28_.v29 = 0;
  *(_QWORD*)(a1 + 1200) = v22;
  *(_QWORD*)(a1 + 1208) = v23;
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak(v24);
  }
  v25 = v28_.v29;
  if (v28_.v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28_.v29 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak(v25);
  }
  v26 = GameRoutine_ad5000(*(_QWORD**)(a1 + 1200), (__int64)"shader_pass", 0xBu,
                           1);
  return GameRoutine_ad5280(v26);
}

__int64 GrassInfluenceMapUpdateTask_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
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
  __int64 result;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;

  *a1 = gfxa_GrassInfluenceMapUpdateTask_vtable;
  GameRoutine_6040f0(a1 + 13, game_g_frame_clock + 568);
  v2 = a1[151];
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = a1[149];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = a1[142];
  a1[142] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[141];
  a1[141] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[135];
  a1[135] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[134];
  a1[134] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[128];
  a1[128] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = a1[127];
  a1[127] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = a1[121];
  a1[121] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  v11 = a1[120];
  a1[120] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = a1[114];
  a1[114] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = a1[113];
  a1[113] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = a1[107];
  a1[107] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  v15 = a1[106];
  a1[106] = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  v16 = a1[100];
  a1[100] = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  v17 = a1[99];
  a1[99] = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  v18 = a1[93];
  a1[93] = 0;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
  }
  v19 = a1[92];
  a1[92] = 0;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  v20 = a1[86];
  a1[86] = 0;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
  }
  v21 = a1[85];
  a1[85] = 0;
  if (v21 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
  }
  v22 = a1[79];
  a1[79] = 0;
  if (v22 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
  }
  v23 = a1[78];
  a1[78] = 0;
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
  }
  v24 = a1[72];
  a1[72] = 0;
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
  }
  v25 = a1[71];
  a1[71] = 0;
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
  }
  v26 = a1[65];
  a1[65] = 0;
  if (v26 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
  }
  v27 = a1[64];
  a1[64] = 0;
  if (v27 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 8LL))(v27);
  }
  v28 = a1[58];
  a1[58] = 0;
  if (v28 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
  }
  v29 = a1[57];
  a1[57] = 0;
  if (v29 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
  }
  v30 = a1[51];
  a1[51] = 0;
  if (v30 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 8LL))(v30);
  }
  v31 = a1[50];
  a1[50] = 0;
  if (v31 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
  }
  v32 = a1[44];
  a1[44] = 0;
  if (v32 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 8LL))(v32);
  }
  v33 = a1[43];
  a1[43] = 0;
  if (v33 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 8LL))(v33);
  }
  v34 = a1[37];
  a1[37] = 0;
  if (v34 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v34 + 8LL))(v34);
  }
  v35 = a1[36];
  a1[36] = 0;
  if (v35 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v35 + 8LL))(v35);
  }
  v36 = a1[30];
  a1[30] = 0;
  if (v36 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 8LL))(v36);
  }
  v37 = a1[29];
  a1[29] = 0;
  if (v37 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 8LL))(v37);
  }
  result = GameRoutine_604050(a1 + 13);
  v39 = a1[9];
  if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    result = std___1___shared_weak_count___release_weak(v39);
  }
  v40 = a1[7];
  if (v40 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
    result = std___1___shared_weak_count___release_weak(v40);
  }
  v41 = a1[5];
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    result = std___1___shared_weak_count___release_weak(v41);
    v42 = a1[3];
    if (v42 == 0) {
      return result;
    }
  }
  else {
    v42 = a1[3];
    if (v42 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    return std___1___shared_weak_count___release_weak(v42);
  }
  return result;
}

__int64 GrassInfluenceMapUpdateTask_Unknown3(__int64 result, __int64* a2)
{
  __int64 v2;
  int v3;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float32x4_t* v14;
  int v15;
  float32x4_t v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
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
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  float32x4_t* v48;
  int* v49;
  float32x4_t v50;
  int v51;
  float v52;
  int v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  int v57;
  float v58;
  float v59;
  float v60;
  int v61;
  float v62;
  unsigned __int64 v63;
  float32x4_t v64;
  int v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  bool v69;
  bool v70;
  __int64 v72;
  int v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  float32x4_t v79;
  _QWORD v80[2];

  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v37 = COERCE_AS(__typeof__(v37),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v41 = COERCE_AS(__typeof__(v41),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  **(_BYTE**)(result + 64) = 0;
  if (*(_BYTE*)(*(_QWORD*)(result + 16) + 48LL) == 1) {
    v2 = result;
    if (*(_BYTE*)(*(_QWORD*)(result + 32) + 8LL) == 1) {
      v3 = *(_DWORD*)(result + 248);
      v69 = v3 < -1;
      v5 = ((_BYTE)v3 + 1) & 1;
      if (v69) {
        v5 = -v5;
      }
      *(_DWORD*)(result + 248) = v5;
      v6 = *(_QWORD*)(result + 8LL * v5 + 232);
      v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 56LL))(v6),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v37 = COERCE_AS(__typeof__(v37),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v41 = COERCE_AS(__typeof__(v41),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v8 = *(_QWORD*)(v2 + 32);
      v9 = 0;
      v11 = *(float*)(v8 + 168);
      v10 = *(float*)(v8 + 172);
      *(_QWORD*)(v7 + 8) = 0;
      v12 = (float)(v10 * 0x1.e000000000000p+4f) * v11;
      if (v12 > 0x1.0000000000000p+0f) {
        v12 = 0x1.0000000000000p+0f;
      }
      v13 = 0x1.0000000000000p+0f - v12;
      *(float*)v7 = v13;
      *(float*)(v7 + 4) = v13;
      v14 = *(float32x4_t**)(v2 + 32);
      if (LANES128(v14[10]).n128_u8[0] == 1) {
        v15 = 0;
        if ((*(_BYTE*)(v2 + 1220) & 1) == 0) {
          v16 = vsubq_f32(v14[6], v14[7]);
          v17 = (float)LANES128(*(v14)).n128_i32[1] /
                LANES128(*(v14)).n128_f32[0];
          v9 = (int)(float)(v17 * LANES128(v16).n128_f32[0]);
          v15 = (int)vmuls_lane_f32(v17, v16, 2);
        }
      }
      else {
        v15 = 0;
      }
      *(_DWORD*)(v7 + 16) = v9;
      *(_DWORD*)(v7 + 20) = v15;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 64LL))(v6),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v18 = *(_QWORD*)(v2 + 64);
      v19 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 104LL);
      *(_QWORD*)(v18 + 16) = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 96LL);
      *(_QWORD*)(v18 + 24) = v19;
      *(_DWORD*)(*(_QWORD*)(v2 + 64) + 32LL) = **(_DWORD**)(v2 + 32);
      **(_BYTE**)(v2 + 64) = 1;
      v20 = *(_QWORD*)(v2 + 32);
      v21 = *(_DWORD*)(v20 + 176);
      v22 = *(_DWORD*)(v20 + 180);
      v23 = *(_QWORD*)(v20 + 184);
      v24 = *(_QWORD*)(v2 + 64);
      *(_QWORD*)(v24 + 36) = v23;
      *(_DWORD*)(v24 + 44) = v21;
      *(_DWORD*)(v24 + 48) = v22;
      gxc_NvnStateCache_Reset(a2[1]),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (*(_BYTE*)(v2 + 1220) == 1) {
        v25 = *a2;
        v26 = *(_QWORD*)(*(_QWORD*)(v2 + 48) +
                         8LL * *(int*)(*(_QWORD*)(v2 + 48) + 24LL) + 8);
        v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 32LL))(v26),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v25 + 96LL))(
            v25, v27, v28),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, **(unsigned int**)(v2 + 48),
                                   *(unsigned int*)(*(_QWORD*)(v2 + 48) + 4LL)),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 88LL))(*a2, 0, 0, **(unsigned int**)(v2 + 48),
                                   *(unsigned int*)(*(_QWORD*)(v2 + 48) + 4LL)),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v29 = *a2;
        v80[0] = 0;
        v80[1] = 0;
        (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v29 + 144LL))(v29, 0,
                                                                        v80),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      else {
        gxc_NvnStateCache_SetCommandList(a2[1], *a2),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v30 = a2[1];
        gxc_NvnStateCache_BindDepthStencilState(v30, GameData_21fdeb8),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        gxc_NvnStateCache_BindBlendState(v30, GameData_21fdee0),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        gxc_NvnStateCache_BindPolygonState(v30, GameData_21fdf08),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        gxc_NvnStateCache_BindMultisampleState(v30, GameData_21fdf14),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        gxc_NvnStateCache_ClearCommandList(a2[1]),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v31 = *(_QWORD*)(v2 + 48);
        v32 = *a2;
        v33 = *(_DWORD*)(v31 + 24);
        v69 = v33 < -1;
        v34 = ((_BYTE)v33 + 1) & 1;
        if (v69) {
          v34 = -v34;
        }
        v35 = *(_QWORD*)(v31 + 8LL * v34 + 8);
        v36 = (*(__int64 (**)(__int64))(*(_QWORD*)v35 + 32LL))(v35),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v32 + 96LL))(
            v32, v36, v37),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 72LL))(*a2, 0, 0, **(unsigned int**)(v2 + 48),
                                   *(unsigned int*)(*(_QWORD*)(v2 + 48) + 4LL)),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 88LL))(*a2, 0, 0, **(unsigned int**)(v2 + 48),
                                   *(unsigned int*)(*(_QWORD*)(v2 + 48) + 4LL)),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
            *a2, 3, *(_QWORD*)(*(_QWORD*)(v2 + 1184) + 144LL)),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v38 = *a2;
        v39 = *(_QWORD*)(*(_QWORD*)(v2 + 48) +
                         8LL * *(int*)(*(_QWORD*)(v2 + 48) + 24LL) + 8);
        v40 = (*(__int64 (**)(__int64))(*(_QWORD*)v39 + 40LL))(v39),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v37 = COERCE_AS(__typeof__(v37),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v41 = COERCE_AS(__typeof__(v41),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
            *(_QWORD*)v38 + 248LL))(v38, 3, 0, v40, v41,
                                    *(unsigned int*)(v2 + 224)),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v42 = v2 + 16LL * *(int*)(v2 + 248);
        (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a2 + 224LL))(*a2, 3, 0, *(_QWORD*)(v42 + 256),
                                    *(_QWORD*)(v42 + 264)),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64))(*(_QWORD*)*a2 + 264LL))(*a2, 1),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2, 3,
                                                                        0),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v37 = COERCE_AS(__typeof__(v37),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v41 = COERCE_AS(__typeof__(v41),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v43 = *(_QWORD*)(v2 + 48);
        v44 = *(_DWORD*)(v43 + 24);
        v69 = v44 < -1;
        v45 = ((_BYTE)v44 + 1) & 1;
        if (v69) {
          v45 = -v45;
        }
        *(_DWORD*)(v43 + 24) = v45;
      }
      ((void (*)(__int64, __int64))*GameData_212e738)(*a2 + 8, 18),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      gxc_NvnStateCache_SetCommandList(a2[1], *a2),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v46 = a2[1];
      gxc_NvnStateCache_BindDepthStencilState(v46, GameData_21fdeb8),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      gxc_NvnStateCache_BindBlendState(v46, GameData_21fdee0),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      gxc_NvnStateCache_BindPolygonState(v46, GameData_21fdf08),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      gxc_NvnStateCache_BindMultisampleState(v46, GameData_21fdf14),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v47 = *a2;
      (*(void (**)(__int64, __int64))GameData_212e888[0])(*a2 + 8, v2 + 88),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ((void (*)(__int64, __int64))*GameData_212e898)(v47 + 8, v2 + 96),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      gxc_NvnStateCache_ClearCommandList(a2[1]),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a2 + 200LL))(
          *a2, 3, *(_QWORD*)(*(_QWORD*)(v2 + 1200) + 144LL)),
          v28 = COERCE_AS(__typeof__(v28),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v37 = COERCE_AS(__typeof__(v37),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v41 = COERCE_AS(__typeof__(v41),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v48 = *(float32x4_t**)(v2 + 32);
      v49 = *(int**)(v2 + 48);
      v50 = v48[6];
      v51 = *v49;
      v52 = LANES128(*(v48)).n128_f32[0];
      v53 = LANES128(*(v48)).n128_i32[1];
      *(_DWORD*)(v2 + 1216) = 0;
      v54 = LANES128(v48[1]).n128_u64[0];
      v55 = LANES128(v48[1]).n128_u64[1];
      if (v54 != v55) {
        v56 = v2 + 288;
        v57 = 0;
        v58 = 0x1.0000000000000p+0f / v52;
        v59 = (float)v53 / v52;
        v60 = -0x1.0000000000000p-1f / (float)v51;
        while (1) {
          v61 = *v49;
          v54 += 32LL;
          v62 = (float)v61;
          while (1) {
            v63 = v54 - 32;
            v64 = vsubq_f32(*(float32x4_t*)(v54 - 32), v50);
            v65 = (int)(float)(v59 * *(float*)(v54 - 16));
            v66 = (2 * v65) | 1;
            v67 = (int)(float)(PSEUDO_UNFUSED(
                      (float)(v60 + (float)(LANES128(v64).n128_f32[0] * v58)) *
                      v62)) -
                  v65;
            v68 = (int)(float)(PSEUDO_UNFUSED(
                      (float)(v60 + (float)(v58 * LANES128(v64).n128_f32[2])) *
                      v62)) -
                  v65;
            v69 = (int)v67 > v61 || (int)(v67 + v66) < 1;
            v70 = v69 || (int)(v68 + v66) < 1;
            if (!v70 && (int)v68 <= v61) {
              break;
            }
            v54 += 32LL;
            if (v63 + 32 == v55) {
              goto LABEL_38;
            }
          }
          v72 = v56 + 56LL * v57;
          v79 = v50;
          v73 = *(_DWORD*)(v72 + 16);
          v69 = v73 < -1;
          v74 = ((_BYTE)v73 + 1) & 1;
          if (v69) {
            v74 = -v74;
          }
          v75 = *(_QWORD*)(v72 + 8LL * v74);
          *(_DWORD*)(v72 + 16) = v74;
          *(_DWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v75 + 56LL))(
              v75) = *(_DWORD*)(v54 - 28),
       v28 = COERCE_AS(__typeof__(v28),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
       v37 = COERCE_AS(__typeof__(v37),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
       v41 = COERCE_AS(__typeof__(v41),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64))(*(_QWORD*)v75 + 64LL))(v75),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v76 = v56 + 56LL * *(int*)(v2 + 1216);
          v77 = v76 + 16LL * *(int*)(v76 + 16);
          (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 224LL))(*a2, 3, 0, *(_QWORD*)(v77 + 24),
                                      *(_QWORD*)(v77 + 32)),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 72LL))(*a2, v67, v68, v66, v66),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
              *(_QWORD*)*a2 + 88LL))(*a2, v67, v68, v66, v66),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64))(*(_QWORD*)*a2 + 264LL))(*a2, 1),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a2 + 272LL))(*a2,
                                                                          3, 0),
              v28 = COERCE_AS(__typeof__(v28),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v37 = COERCE_AS(__typeof__(v37),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v41 = COERCE_AS(__typeof__(v41),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v50 = v79;
          v78 = *(_DWORD*)(v2 + 1216);
          v57 = v78 + 1;
          *(_DWORD*)(v2 + 1216) = v78 + 1;
          if (v78 > 14 || v54 == v55) {
            break;
          }
          v49 = *(int**)(v2 + 48);
        }
      LABEL_38:
        v48 = *(float32x4_t**)(v2 + 32);
        v54 = LANES128(v48[1]).n128_u64[0];
      }
      LANES128(v48[1]).n128_u64[1] = v54;
      *(_BYTE*)(v2 + 1220) = 0;
      return gxc_NvnStateCache_Reset(a2[1]);
    }
  }
  return result;
}

__int64 GrassInfluenceMapUpdateTask_c61c90(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  result = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

void gfxa_GrassInfluenceMapUpdateTask_initialize_lambda0_Invoke(__int64 a1,
                                                                __int64 a2)
{
  *(_WORD*)a2 = 771;
  *(_BYTE*)(a2 + 4) = 2;
  *(_WORD*)(a2 + 6) = 21;
}

__int64 GrassInfluenceMapUpdateTask_c61ec0(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  struct {
    _QWORD v10[2];
    int v11;
    int v12;
    __int16 v13;
    char v14;
    char gap27_[5];
    __int64 v15;
    __int64 v16;
  } v10_;
  __int64 v17;

  v3 = *a3;
  *(_QWORD*)(a1 + 16) = 0;
  *(_DWORD*)(a1 + 24) = 0;
  v10_.v10[1] = 0x100000001LL;
  v10_.v11 = 0;
  v10_.v14 = 0;
  v10_.v12 = 13;
  v10_.v13 = 257;
  *(_QWORD*)a1 = v3;
  *(_QWORD*)(a1 + 8) = 0;
  LODWORD(v10_.v10[0]) = v3;
  HIDWORD(v10_.v10[0]) = v3;
  v10_.v15 = *(_QWORD*)(a2 + 360);
  v10_.v16 = *(_QWORD*)(*(_QWORD*)(a2 + 552) + 16LL);
  GameRoutine_53c20((void*)(&v17), (__int64)v10_.v10);
  v5 = v17;
  v6 = *(_QWORD*)(a1 + 8);
  v17 = 0;
  *(_QWORD*)(a1 + 8) = v5;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    v7 = v17;
    v17 = 0;
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    }
  }
  GameRoutine_53c20((void*)(&v17), (__int64)v10_.v10);
  v8 = v17;
  result = *(_QWORD*)(a1 + 16);
  v17 = 0;
  *(_QWORD*)(a1 + 16) = v8;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    result = v17;
    v17 = 0;
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  return result;
}

#pragma GCC visibility pop
