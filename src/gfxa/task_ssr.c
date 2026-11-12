#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN** GameData_212e778[2];
extern _UNKNOWN** GameData_212e780;
extern __int64* game_g_frame_clock_ptr[3];
__int64 TaskSSR_b7bd00(_QWORD* a1);
__int64 TaskSSR_b7cee0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                       __int64 a5);
void gfxa_TaskSSR_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2);
void gfxa_TaskSSR_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2);
bool gfxa_TaskSSR_Impl_draw_lambda0_Invoke(__int64 a1, __int64 a2);
_QWORD* GameRoutine_604020(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_53c20(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
__int64 GameRoutine_a738c0(__int64, __int64, int);
__int64 GameRoutine_ad5280(__int64*);
__int64 GameRoutine_ad6000(__int64, unsigned __int64);
__int64 gxc_NvnStateCache_BindBlendState(__int64 result, int);
__int64 gxc_NvnStateCache_BindDepthStencilState(__int64 result, int);
__int64 gxc_NvnStateCache_BindMultisampleState(__int64 result, int);
__int64 gxc_NvnStateCache_BindPolygonState(__int64 result, int);
__int64 gxc_NvnStateCache_ClearCommandList(_QWORD);
__int64 gxc_NvnStateCache_LockBlendState(__int64 result);
__int64 gxc_NvnStateCache_Reset(__int64 result);
__int64 gxc_NvnStateCache_SetCommandList(_QWORD, _QWORD);
__int64 gxc_NvnStateCache_UnlockBlendState(__int64 result);
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN** GameData_212e870[6];
extern __int64 (*GameData_1fc7ca0[])();
extern __int64 (*GameData_1fc7d20[])();
extern __int64 (*GameData_1fc7da0[])();
extern int GameData_21fdeb8[];
extern int GameData_21fded0;
extern int GameData_21fdee0;
extern int GameData_21fdf08;
extern int GameData_21fdf10;
extern int GameData_21fdf14;
__int64 gfxa_TaskSSR_Impl_Impl(__int64* a1, __int64 a2);
__int64 gfxa_TaskSSR_Impl_draw(__int64 a1, _QWORD** a2, _QWORD* a3, __int64* a4,
                               __int64 a5);
extern _UNKNOWN** GameData_212e4d8[2];
__int64 TaskSSR_b7c060(int* a1, _QWORD* a2, _QWORD* a3, __int64 a4);

__int64 gfxa_TaskSSR_Impl_Impl(__int64* a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 (**v6)();
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 (**v10)();
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 (**v14)();
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 (***v19)();
  __int64 (**v20)();
  __int64 (***v21)();
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 result;
  struct {
    __int64 (**v26)();
    __int64 v27;
    int v28;
    _BYTE v29[7];
    char gap27_[5];
    __int64 (***v30)();
    __int64 v31;
  } v26_;
  struct {
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v32_;

  *a1 = a2;
  a1[1] = 0;
  GameRoutine_604020(a1 + 2);
  a1[17] = -1;
  GameRoutine_604020(a1 + 18);
  a1[33] = -1;
  a1[125] = 0;
  a1[126] = 0;
  a1[127] = 0;
  a1[128] = 0;
  a1[76] = 0;
  a1[77] = 0;
  a1[78] = 0;
  a1[79] = 0;
  *((_DWORD*)a1 + 68) = 1;
  *((_BYTE*)a1 + 1032) = 1;
  a1[80] = 0;
  a1[81] = 0;
  *((_DWORD*)a1 + 164) = 0;
  a1[83] = 0;
  a1[84] = 0;
  a1[85] = 0;
  a1[86] = 0;
  a1[87] = 0;
  a1[88] = 0;
  *((_DWORD*)a1 + 178) = 0;
  *((_DWORD*)a1 + 192) = 0;
  a1[95] = 0;
  a1[94] = 0;
  a1[93] = 0;
  a1[92] = 0;
  a1[91] = 0;
  a1[90] = 0;
  a1[97] = 0;
  a1[98] = 0;
  a1[99] = 0;
  a1[100] = 0;
  a1[101] = 0;
  a1[102] = 0;
  *((_DWORD*)a1 + 206) = 0;
  a1[104] = 0;
  a1[105] = 0;
  a1[106] = 0;
  a1[107] = 0;
  a1[108] = 0;
  a1[109] = 0;
  *((_DWORD*)a1 + 220) = 0;
  *((_DWORD*)a1 + 234) = 0;
  a1[116] = 0;
  a1[115] = 0;
  a1[114] = 0;
  a1[113] = 0;
  a1[112] = 0;
  a1[111] = 0;
  *((_DWORD*)a1 + 248) = 0;
  a1[123] = 0;
  a1[122] = 0;
  a1[121] = 0;
  a1[120] = 0;
  a1[119] = 0;
  a1[118] = 0;
  *((_DWORD*)a1 + 108) = 0;
  a1[52] = 0;
  a1[53] = 0;
  a1[50] = 0;
  a1[51] = 0;
  a1[48] = 0;
  a1[49] = 0;
  a1[46] = 0;
  a1[47] = 0;
  a1[44] = 0;
  a1[45] = 0;
  *((_DWORD*)a1 + 122) = 0;
  a1[59] = 0;
  a1[60] = 0;
  a1[57] = 0;
  a1[58] = 0;
  a1[55] = 0;
  a1[56] = 0;
  *((_DWORD*)a1 + 136) = 0;
  a1[67] = 0;
  a1[66] = 0;
  a1[65] = 0;
  a1[63] = 0;
  a1[64] = 0;
  a1[62] = 0;
  *((_DWORD*)a1 + 150) = 0;
  a1[74] = 0;
  a1[73] = 0;
  a1[72] = 0;
  a1[71] = 0;
  a1[70] = 0;
  a1[69] = 0;
  v26_.v26 = GameData_1fc7ca0;
  v26_.v30 = &v26_.v26;
  v32_.v34 = 0;
  v32_.v35 = 0;
  v32_.v32 = 0;
  v32_.v33 = 0;
  GameRoutine_5fc230((__int64)&v32_.v32);
  if (v26_.v30 != nullptr) {
    ((void (*)(__int64 (***)(void), __int64*))(*v26_.v30)[6])(v26_.v30,
                                                              &v32_.v32);
  }
  v3 = game_g_frame_clock_ptr[0];
  GameRoutine_604060((__int64)(a1 + 2),
                     (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)&v32_.v32);
  a1[17] = GameRoutine_615760(*(_QWORD*)(*v3 + 552), (__int64)(a1 + 2));
  if (v26_.v30 == &v26_.v26) {
    v4 = 4;
  }
  else {
    if (v26_.v30 == nullptr) {
      goto LABEL_8;
    }
    v4 = 5;
  }
  ((__int64 (*)(__int64))(*v26_.v30)[v4])((__int64)v26_.v30);
LABEL_8:
  v32_.v34 = 0;
  v32_.v35 = 0;
  v32_.v32 = 0;
  v32_.v33 = 0;
  v26_.v26 = GameData_1fc7d20;
  v26_.v30 = &v26_.v26;
  GameRoutine_5fc230((__int64)&v32_.v32);
  if (v26_.v30 != nullptr) {
    ((void (*)(__int64 (***)(void), __int64*))(*v26_.v30)[6])(v26_.v30,
                                                              &v32_.v32);
  }
  GameRoutine_604060((__int64)(a1 + 18), (__int64*)(*v3 + 568),
                     (__int64)&v32_.v32);
  a1[33] = GameRoutine_615760(*(_QWORD*)(*v3 + 552), (__int64)(a1 + 18));
  if (v26_.v30 == &v26_.v26) {
    v5 = 4;
    goto LABEL_14;
  }
  if (v26_.v30 != nullptr) {
    v5 = 5;
  LABEL_14:
    ((__int64 (*)(__int64))(*v26_.v30)[v5])((__int64)v26_.v30);
  }
  gfx_shader_Archive_CreateShader((void*)(&v26_.v26), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u, (__int64)"SSR", 3u);
  v6 = v26_.v26;
  v7 = v26_.v27;
  v8 = a1[45];
  v26_.v26 = nullptr;
  v26_.v27 = 0;
  a1[44] = (__int64)v6;
  a1[45] = v7;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = v26_.v27;
  if (v26_.v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26_.v27 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  GameRoutine_ad5280((__int64*)a1[44]);
  gfx_shader_Archive_CreateShader((void*)(&v26_.v26), *(__int64**)(*a1 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"MipMapBuilder", 0xDu);
  v10 = v26_.v26;
  v11 = v26_.v27;
  v12 = a1[47];
  v26_.v26 = nullptr;
  v26_.v27 = 0;
  a1[46] = (__int64)v10;
  a1[47] = v11;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = v26_.v27;
  if (v26_.v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26_.v27 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  GameRoutine_ad5280((__int64*)a1[46]);
  gfx_shader_Archive_CreateShader((void*)(&v26_.v26), *(__int64**)(*a1 + 13408),
                                  (__int64)"filter", 6u, (__int64)"copy", 4u);
  v14 = v26_.v26;
  v15 = v26_.v27;
  v16 = a1[51];
  v26_.v26 = nullptr;
  v26_.v27 = 0;
  a1[50] = (__int64)v14;
  a1[51] = v15;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  v17 = v26_.v27;
  if (v26_.v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26_.v27 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak(v17);
  }
  GameRoutine_ad5280((__int64*)a1[50]);
  DecalObject_a91100(a1 + 52, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 120);
  DecalObject_a91100(a1 + 66, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 32);
  DecalObject_a91100(a1 + 59, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 48);
  DecalObject_a91100(a1 + 73, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 8);
  DecalObject_a91100(a1 + 80, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 8);
  DecalObject_a91100(a1 + 87, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 8);
  DecalObject_a91100(a1 + 94, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 8);
  DecalObject_a91100(a1 + 101, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 8);
  DecalObject_a91100(a1 + 108, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 8);
  DecalObject_a91100(a1 + 115, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 8);
  DecalObject_a91100(a1 + 122, *(_QWORD*)(*a1 + 312),
                     *(_QWORD*)(*(_QWORD*)(*a1 + 552) + 16LL), 8);
  v18 = *a1;
  if (*(_BYTE*)(*a1 + 16700) != 0) {
    v19 = (__int64 (***)(void))(*(_QWORD*)(*a1 + 16672) + 24LL);
  }
  else {
    v19 = (__int64 (***)(void))(*a1 + 13304);
  }
  v20 = *v19;
  v26_.v27 = 0x100000001LL;
  v26_.v28 = 0;
  *(_DWORD*)&v26_.v29[3] = 0;
  *(_DWORD*)v26_.v29 = 13;
  v26_.v26 = v20;
  v21 = *(__int64 (****)())(v18 + 360);
  v22 = *(_QWORD*)(v18 + 552);
  v26_.v30 = v21;
  v23 = *(_QWORD*)(v22 + 16);
  v26_.v29[4] = 1;
  v26_.v31 = v23;
  GameRoutine_53c20((void*)(&v32_.v32), (__int64)&v26_.v26);
  v24 = v32_.v32;
  result = a1[1];
  v32_.v32 = 0;
  a1[1] = v24;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    result = v32_.v32;
    v32_.v32 = 0;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  *((_BYTE*)a1 + 1032) = 1;
  return result;
}

__int64 TaskSSR_b7bd00(_QWORD* a1)
{
  __int64* v2;
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
  __int64 result;

  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 2, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 18, *v2 + 568);
  v3 = a1[123];
  a1[123] = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  v4 = a1[122];
  a1[122] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v5 = a1[116];
  a1[116] = 0;
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  v6 = a1[115];
  a1[115] = 0;
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  v7 = a1[109];
  a1[109] = 0;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
  }
  v8 = a1[108];
  a1[108] = 0;
  if (v8 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
  }
  v9 = a1[102];
  a1[102] = 0;
  if (v9 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 8LL))(v9);
  }
  v10 = a1[101];
  a1[101] = 0;
  if (v10 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
  }
  v11 = a1[95];
  a1[95] = 0;
  if (v11 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
  }
  v12 = a1[94];
  a1[94] = 0;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
  }
  v13 = a1[88];
  a1[88] = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = a1[87];
  a1[87] = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  v15 = a1[81];
  a1[81] = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  v16 = a1[80];
  a1[80] = 0;
  if (v16 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
  }
  v17 = a1[74];
  a1[74] = 0;
  if (v17 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  v18 = a1[73];
  a1[73] = 0;
  if (v18 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 8LL))(v18);
  }
  v19 = a1[67];
  a1[67] = 0;
  if (v19 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
  }
  v20 = a1[66];
  a1[66] = 0;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
  }
  v21 = a1[60];
  a1[60] = 0;
  if (v21 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
  }
  v22 = a1[59];
  a1[59] = 0;
  if (v22 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
  }
  v23 = a1[53];
  a1[53] = 0;
  if (v23 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
  }
  v24 = a1[52];
  a1[52] = 0;
  if (v24 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 8LL))(v24);
  }
  v25 = a1[51];
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak(v25);
  }
  v26 = a1[49];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  v27 = a1[47];
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  v28 = a1[45];
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  GameRoutine_604050(a1 + 18);
  GameRoutine_604050(a1 + 2);
  result = a1[1];
  a1[1] = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 TaskSSR_b7c060(int* a1, _QWORD* a2, _QWORD* a3, __int64 a4)
{
  __int64 v4;
  int* v9;
  int v10;
  int v11;
  int v12;
  bool v13;
  int v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  float v22;
  float v23;
  float v24;
  float v25;
  unsigned int v26;
  float v27;
  int v28;
  int v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 (**v33)(__int64);
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  __int64 v48;
  float* v49;
  __int64* v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  int v55;
  float* v56;
  __int64 result;
  bool v58;

  v4 = *(_QWORD*)a1;
  if (*(_BYTE*)(*(_QWORD*)a1 + 16700LL) != 0) {
    v9 = (int*)(*(_QWORD*)(*(_QWORD*)a1 + 16672LL) + 24LL);
  }
  else {
    v9 = (int*)(*(_QWORD*)a1 + 13304LL);
  }
  v10 = a1[108];
  v11 = *v9;
  v12 = v9[1];
  v13 = v10 < -1;
  v14 = ((_BYTE)v10 + 1) & 1;
  if (v13) {
    v14 = -v14;
  }
  a1[108] = v14;
  v15 = *(_QWORD*)&a1[2 * v14 + 104];
  v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 56LL))(v15);
  *(float*)v16 = (float)v11;
  *(float*)(v16 + 4) = (float)v12;
  *(float*)(v16 + 8) = 0x1.0000000000000p+0f / (float)v11;
  *(float*)(v16 + 12) = 0x1.0000000000000p+0f / (float)v12;
  v17 = (float)*(int*)(a4 + 16);
  v18 = (float)*(int*)(a4 + 20);
  *(float*)(v16 + 16) = v17;
  *(float*)(v16 + 20) = v18;
  *(float*)(v16 + 24) = 0x1.0000000000000p+0f / v17;
  *(float*)(v16 + 28) = 0x1.0000000000000p+0f / v18;
  v19 = *(_DWORD*)(a4 + 80);
  v20 = *(_QWORD*)(a4 + 72);
  *(_DWORD*)(v16 + 44) = 0;
  *(_QWORD*)(v16 + 32) = v20;
  *(_DWORD*)(v16 + 40) = v19;
  *(_DWORD*)(v16 + 72) = *(_DWORD*)a4;
  *(_DWORD*)(v16 + 76) = *(_DWORD*)(a4 + 4);
  *(_DWORD*)(v16 + 80) = *(_DWORD*)(a4 + 8);
  *(_DWORD*)(v16 + 84) = *(_DWORD*)(a4 + 12);
  *(_DWORD*)(v16 + 88) = *(_DWORD*)(a4 + 28);
  *(_DWORD*)(v16 + 92) = *(_DWORD*)(a4 + 24);
  v21 = *(_DWORD*)(a4 + 32);
  *(_DWORD*)(v16 + 96) = v21;
  LOBYTE(v21) = *(_BYTE*)(a4 + 36);
  *(float*)(v16 + 100) = (float)v21;
  v22 = *(float*)(a4 + 64);
  v23 = *(float*)(a4 + 68);
  v24 = *(float*)(a4 + 60) / (float)v12;
  *(float*)(v16 + 48) = *(float*)(a4 + 56) / (float)v11;
  *(float*)(v16 + 52) = v24;
  *(float*)(v16 + 56) = v22 / (float)v11;
  *(float*)(v16 + 60) = v23 / (float)v12;
  v25 = 0x0.0p+0f;
  if (*(_BYTE*)(a4 + 50) != 0) {
    v25 = 0x1.0000000000000p+0f;
  }
  *(float*)(v16 + 104) = v25;
  *(float*)&v26 =
      0x1.0000000000000p+0f /
      (float)((float)((float)(0x1.0000000000000p+0f - *(float*)(a4 + 44)) *
                      0x1.99999a0000000p-3f) +
              0x1.0000000000000p+0f);
  *(_DWORD*)(v16 + 64) = *(_DWORD*)(a4 + 40);
  *(float*)(v16 + 68) = *(float*)&v26;
  LOBYTE(v26) = *(_BYTE*)(a4 + 49);
  v27 = (float)v26;
  *(float*)(v16 + 108) = v27;
  LOBYTE(v27) = *(_BYTE*)(a4 + 48);
  *(float*)(v16 + 112) = (float)LODWORD(v27);
  *(_DWORD*)(v16 + 116) = *(_DWORD*)(a4 + 52);
  (*(void (**)(__int64))(*(_QWORD*)v15 + 64LL))(v15);
  v28 = a1[136];
  v13 = v28 < -1;
  v29 = ((_BYTE)v28 + 1) & 1;
  if (v13) {
    v29 = -v29;
  }
  a1[136] = v29;
  v30 = *(_QWORD*)&a1[2 * v29 + 132];
  v31 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v30 + 56LL))(v30);
  v32 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
  (*(void (**)(__int64))(*(_QWORD*)v32 + 40LL))(v32);
  v33 = (__int64 (**)(__int64))GameData_212e4d8[0];
  v31[1] =
      (*(__int64 (**)(__int64))GameData_212e4d8[0])(*(_QWORD*)(v4 + 256) + 8LL);
  v34 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[1] + 16LL))(a2[1]);
  (*(void (**)(__int64))(*(_QWORD*)v34 + 40LL))(v34);
  v31[2] = (*v33)(*(_QWORD*)(v4 + 256) + 8LL);
  v35 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[3] + 16LL))(a2[3]);
  (*(void (**)(__int64))(*(_QWORD*)v35 + 40LL))(v35);
  v31[3] = (*v33)(*(_QWORD*)(v4 + 256) + 8LL);
  v36 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  (*(void (**)(__int64))(*(_QWORD*)v36 + 40LL))(v36);
  *v31 = (*v33)(*(_QWORD*)(v4 + 256) + 8LL);
  (*(void (**)(__int64))(*(_QWORD*)v30 + 64LL))(v30);
  v37 = a1[122];
  v13 = v37 < -1;
  v38 = ((_BYTE)v37 + 1) & 1;
  if (v13) {
    v38 = -v38;
  }
  a1[122] = v38;
  v39 = *(_QWORD*)&a1[2 * v38 + 118];
  v40 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v39 + 56LL))(v39);
  v41 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
  (*(void (**)(__int64))(*(_QWORD*)v41 + 40LL))(v41);
  *v40 = (*v33)(*(_QWORD*)(v4 + 256) + 8LL);
  v42 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[7] + 16LL))(a2[7]);
  (*(void (**)(__int64))(*(_QWORD*)v42 + 40LL))(v42);
  v40[1] = (*v33)(*(_QWORD*)(v4 + 256) + 8LL);
  v43 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[2] + 16LL))(a2[2]);
  (*(void (**)(__int64))(*(_QWORD*)v43 + 40LL))(v43);
  v40[2] = (*v33)(*(_QWORD*)(v4 + 256) + 8LL);
  v44 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[6] + 16LL))(a2[6]);
  (*(void (**)(__int64))(*(_QWORD*)v44 + 40LL))(v44);
  v40[3] = (*v33)(*(_QWORD*)(v4 + 256) + 8LL);
  v45 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a2[5] + 16LL))(a2[5]);
  (*(void (**)(__int64))(*(_QWORD*)v45 + 40LL))(v45);
  v40[4] = (*v33)(*(_QWORD*)(v4 + 256) + 8LL);
  (*(void (**)(__int64))(**((_QWORD**)a1 + 1) + 40LL))(*((_QWORD*)a1 + 1));
  v40[5] = (*v33)(*(_QWORD*)(v4 + 256) + 8LL);
  (*(void (**)(__int64))(*(_QWORD*)v39 + 64LL))(v39);
  v46 = *(_DWORD*)(a4 + 16);
  v47 = *(_DWORD*)(a4 + 20);
  v48 = *(_QWORD*)&a1[2 * a1[150] + 146];
  v49 = (float*)(*(__int64 (**)(__int64))(*(_QWORD*)v48 + 56LL))(v48);
  *v49 = 0x1.0000000000000p+0f / (float)v46;
  v49[1] = 0x1.0000000000000p+0f / (float)v47;
  (*(void (**)(__int64))(*(_QWORD*)v48 + 64LL))(v48);
  v50 = (__int64*)(a1 + 160);
  v51 = -7;
  do {
    v52 = 1 << (v51 + 8);
    v53 = *(_DWORD*)(a4 + 20) / v52;
    v54 = v50[*((int*)v50 + 4)];
    v55 = *(_DWORD*)(a4 + 16) / v52;
    v56 = (float*)(*(__int64 (**)(__int64))(*(_QWORD*)v54 + 56LL))(v54);
    *v56 = 0x1.0000000000000p+0f / (float)v55;
    v56[1] = 0x1.0000000000000p+0f / (float)v53;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v54 + 64LL))(v54);
    v58 = __CFADD__(v51++, 1);
    v50 += 7;
  } while (!v58);
  return result;
}

__int64 gfxa_TaskSSR_Impl_draw(__int64 a1, _QWORD** a2, _QWORD* a3, __int64* a4,
                               __int64 a5)
{

#pragma clang fp contract(off)
  __int64 (**v10)(void);
  __int64 (**v11)(__int64);
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  unsigned int v18;
  unsigned int v19;
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
  __int64 (*v33)(void);
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 (*v37)(__int64);
  int v38;
  __int64 (*v39)(__int64);
  void (**v40)(__int64, __int64);
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned int v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  void (**v61)(__int64, __int64);
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned int v70;
  __int64 (**v71)(__int64);
  unsigned int v72;
  __int64 v73;
  unsigned int v74;
  unsigned int v75;
  __int64 result;
  _QWORD* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 (**v87)(__int64);
  unsigned int v88;
  __int64 (**v89)(__int64);
  unsigned int v90;
  __int64 v91;
  unsigned int v92;
  unsigned int v93;
  __int64 v94;
  __int64 (**v95)(__int64, __int64);
  _QWORD* v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  struct {
    __int64 (**v100)();
    __int64 v101;
    __int64 v102;
    char gap56_[8];
    __int64 (***v103)();
  } v100_;
  struct {
    _QWORD v104[2];
    __int64 v105;
  } v104_;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 49),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v98 = a5;
  v10 = (__int64 (**)(void))GameData_212e778[0],
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = (__int64 (**)(__int64))GameData_212e780,
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(_BYTE*)(a5 + 84) & 1) != 0 || (*(_BYTE*)(a1 + 1032) & 1) != 0) {
    v12 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
        *(_QWORD*)(a1 + 8)),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v12,
                                                                    v13),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v14 = *a4;
    v15 = ((__int64 (*)(__int64))*v10)(v12),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16 = (*v11)(v12);
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v14 + 72LL))(v14, 0, 0, v15, v16),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v17 = *a4;
    v18 = ((__int64 (*)(__int64))*v10)(v12),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19 = (*v11)(v12);
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v17 + 88LL))(v17, 0, 0, v18, v19),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v20 = *a4;
    v100_.v100 = nullptr;
    v100_.v101 = 0;
    (*(void (**)(__int64, _QWORD, __int64 (***)(void)))(*(_QWORD*)v20 + 144LL))(
        v20, 0, &v100_.v100),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_BYTE*)(a1 + 1032) = 0;
  }
  v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v22,
                                                                  v23),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v24 = *a4;
  v100_.v100 = nullptr;
  v100_.v101 = 0;
  (*(void (**)(__int64, _QWORD, __int64 (***)(void)))(*(_QWORD*)v24 + 144LL))(
      v24, 0, &v100_.v100),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v25 = *a4;
  v26 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 32LL))(v26),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)v25 + 112LL))(v25, v27,
                                                                   v28),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, _QWORD, _QWORD, float))(*(_QWORD*)*a4 + 152LL))(
      *a4, 0, 0, 0x1.0000000000000p+0f),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = (*(__int64 (**)(_QWORD*))(*a2[2] + 16LL))(a2[2]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = (*(__int64 (**)(__int64))(*(_QWORD*)v29 + 40LL))(v29),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v31 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v32 = (*(__int64 (**)(__int64))(*(_QWORD*)v31 + 40LL))(v31),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v33 = *v10;
  v34 = *a4;
  v35 = v32;
  LODWORD(v100_.v101) = 0;
  v100_.v100 = nullptr;
  v36 = v33(),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v37 = *v11;
  HIDWORD(v100_.v101) = v36;
  v100_.v102 = (unsigned int)v37(v35) | 0x100000000LL,
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v104_.v104[0] = v100_.v100;
  v104_.v104[1] = v100_.v101;
  v104_.v105 = v100_.v102;
  v38 = ((__int64 (*)(__int64))*v10)(v30),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v39 = *v11;
  HIDWORD(v104_.v104[1]) = v38;
  LODWORD(v104_.v105) = v39(v30),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, _QWORD, _QWORD*, __int64, _QWORD,
               __int64 (***)(void), _QWORD))GameData_212e870[0])(
      v34 + 8, v30, 0, v104_.v104, v35, 0, &v100_.v100, 0),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v40 = (void (**)(__int64, __int64))GameData_212e738,
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  ((void (*)(__int64, __int64))*GameData_212e738)(*a4 + 8, 128),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*v40)(*a4 + 8, 49);
  v41 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v41 + 32LL))(v41),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v44 = v43;
  v45 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v46 = (*(__int64 (**)(__int64))(*(_QWORD*)v45 + 32LL))(v45),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(__int64, __int64, __int64, __int64, __int64))(
      *(_QWORD*)*a4 + 104LL))(*a4, v46, v47, v42, v44),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v48 = *a4;
  LODWORD(v44) = ((__int64 (*)(__int64))*v10)(v46),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v49 = (*v11)(v46);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v48 + 72LL))(
      v48, 0, 0, (unsigned int)v44, v49),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v50 = *a4;
  LODWORD(v44) = ((__int64 (*)(__int64))*v10)(v46),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v51 = (*v11)(v46);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v50 + 88LL))(
      v50, 0, 0, (unsigned int)v44, v51),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v52 = a4[1];
  gxc_NvnStateCache_BindDepthStencilState(v52, GameData_21fded0),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindBlendState(v52, GameData_21fdee0),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_LockBlendState(v52),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v52, GameData_21fdf10),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v52, GameData_21fdf14),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v53 = *a4;
  v54 = (*(__int64 (**)(_QWORD*))(*a2[9] + 16LL))(a2[9]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v55 = v54 + 16LL * *(int*)(v54 + 16);
  (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
      *(_QWORD*)v53 + 224LL))(v53, 3, 0, *(_QWORD*)(v55 + 24),
                              *(_QWORD*)(v55 + 32)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v56 = *a4;
  v57 = (*(__int64 (**)(_QWORD*))(*a2[10] + 16LL))(a2[10]),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v58 = v57 + 16LL * *(int*)(v57 + 16);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)v56 + 224LL))(v56, 3, 1, *(_QWORD*)(v58 + 24),
                              *(_QWORD*)(v58 + 32)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v59 = a1 + 16LL * *(int*)(a1 + 488);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 8, *(_QWORD*)(v59 + 496),
                              *(_QWORD*)(v59 + 504)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v60 = a1 + 16LL * *(int*)(a1 + 432);
  (*(void (**)(__int64, __int64, __int64, _QWORD, _QWORD))(
      *(_QWORD*)*a4 + 224LL))(*a4, 3, 9, *(_QWORD*)(v60 + 440),
                              *(_QWORD*)(v60 + 448)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v100_.v101) = GameRoutine_ad6000((__int64)"SSR", 3u),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v100_.v100 = GameData_1fc7da0;
  v100_.v103 = &v100_.v100;
  GameRoutine_a738c0(*(_QWORD*)(v98 + 88), (__int64)&v100_.v100, 1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v100_.v103 == &v100_.v100) {
    v62 = 4;
    v61 = (void (**)(__int64, __int64))GameData_212e738,
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    v61 = (void (**)(__int64, __int64))GameData_212e738,
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v100_.v103 == nullptr) {
      goto LABEL_9;
    }
    v62 = 5;
  }
  ((__int64 (*)(__int64))(*v100_.v103)[v62])((__int64)v100_.v103),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_9:
  gxc_NvnStateCache_UnlockBlendState(a4[1]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_Reset(a4[1]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_SetCommandList(a4[1], *a4),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v63 = a4[1];
  gxc_NvnStateCache_BindBlendState(v63, GameData_21fdee0),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindDepthStencilState(v63, GameData_21fdeb8[0]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindPolygonState(v63, GameData_21fdf08),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_BindMultisampleState(v63, GameData_21fdf14),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_NvnStateCache_ClearCommandList(a4[1]),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v23 = COERCE_AS(__typeof__(v23),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v28 = COERCE_AS(__typeof__(v28),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v43 = COERCE_AS(__typeof__(v43),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v47 = COERCE_AS(__typeof__(v47),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v68 = COERCE_AS(__typeof__(v68),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v82 = COERCE_AS(__typeof__(v82),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v85 = COERCE_AS(__typeof__(v85),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_QWORD*)(a1 + 8) != 0) {
    (*v61)(*a4 + 8, 17);
    v64 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a3[1] + 16LL))(a3[1]),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v65 = (*(__int64 (**)(__int64))(*(_QWORD*)v64 + 40LL))(v64),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD, __int64, _QWORD, _QWORD))(
        *(_QWORD*)*a4 + 248LL))(*a4, 3, 0, v65, v66,
                                *(unsigned int*)(a1 + 136)),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v67 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
        *(_QWORD*)(a1 + 8)),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v67,
                                                                    v68),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v69 = *a4;
    v70 = ((__int64 (*)(__int64))*v10)(v67),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v71 = (__int64 (**)(__int64))GameData_212e780,
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v72 = ((__int64 (*)(__int64))*GameData_212e780)(v67),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v69 + 72LL))(v69, 0, 0, v70, v72),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v73 = *a4;
    v74 = ((__int64 (*)(__int64))*v10)(v67),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v75 = (*v71)(v67);
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v73 + 88LL))(v73, 0, 0, v74, v75),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 400) + 144LL)),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3, 0),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  result = ((__int64 (*)(__int64, __int64))*v61)(*a4 + 8, 49),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v23 = COERCE_AS(__typeof__(v23),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v28 = COERCE_AS(__typeof__(v28),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v43 = COERCE_AS(__typeof__(v43),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v47 = COERCE_AS(__typeof__(v47),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v68 = COERCE_AS(__typeof__(v68),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v82 = COERCE_AS(__typeof__(v82),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v85 = COERCE_AS(__typeof__(v85),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v97 = a1;
  if (*(int*)(v98 + 28) >= 1) {
    result = (*(__int64 (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 200LL))(
        *a4, 3, *(_QWORD*)(*(_QWORD*)(a1 + 368) + 144LL)),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v23 = COERCE_AS(__typeof__(v23),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v28 = COERCE_AS(__typeof__(v28),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v43 = COERCE_AS(__typeof__(v43),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v47 = COERCE_AS(__typeof__(v47),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v68 = COERCE_AS(__typeof__(v68),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v82 = COERCE_AS(__typeof__(v82),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v85 = COERCE_AS(__typeof__(v85),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*(int*)(v98 + 28) >= 2) {
      v77 = a3 + 2;
      v78 = 1;
      v79 = a1 + 672;
      do {
        v80 =
            (*(__int64 (**)(_QWORD))(*(_QWORD*)*(v77 - 1) + 16LL))(*(v77 - 1)),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v81 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v77 + 16LL))(*v77),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v99 = (*(__int64 (**)(__int64))(*(_QWORD*)v80 + 40LL))(v80),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v83 = v82;
        v84 = (*(__int64 (**)(__int64))(*(_QWORD*)v81 + 32LL))(v81),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(
            *a4, v84, v85),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v86 = *a4;
        v87 = (__int64 (**)(__int64))GameData_212e778[0],
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v88 = (*(__int64 (**)(__int64))GameData_212e778[0])(v84),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v89 = (__int64 (**)(__int64))GameData_212e780,
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v90 = ((__int64 (*)(__int64))*GameData_212e780)(v84),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)v86 + 72LL))(v86, 0, 0, v88, v90),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v91 = *a4;
        v92 = (*v87)(v84);
        v93 = (*v89)(v84);
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)v91 + 88LL))(v91, 0, 0, v92, v93),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v94 = *a4;
        v100_.v100 = nullptr;
        v100_.v101 = 0;
        (*(void (**)(__int64, _QWORD, __int64 (***)(void)))(
            *(_QWORD*)v94 + 144LL))(v94, 0, &v100_.v100),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v95 = (__int64 (**)(__int64, __int64))GameData_212e738,
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v23 = COERCE_AS(__typeof__(v23),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v28 = COERCE_AS(__typeof__(v28),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v43 = COERCE_AS(__typeof__(v43),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v47 = COERCE_AS(__typeof__(v47),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v68 = COERCE_AS(__typeof__(v68),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v82 = COERCE_AS(__typeof__(v82),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v85 = COERCE_AS(__typeof__(v85),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD, __int64, __int64, _QWORD))(
            *(_QWORD*)*a4 + 248LL))(*a4, 2, 0, v99, v83,
                                    *(unsigned int*)(v97 + 136)),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v96 = (_QWORD*)(v79 + 16LL * *(int*)(v79 - 16));
        (*(void (**)(__int64, __int64, _QWORD, _QWORD, _QWORD))(
            *(_QWORD*)*a4 + 224LL))(*a4, 3, 0, *(v96 - 1), *v96),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64))(*(_QWORD*)*a4 + 264LL))(*a4, 1),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, __int64, _QWORD))(*(_QWORD*)*a4 + 272LL))(*a4, 3,
                                                                        0),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v23 = COERCE_AS(__typeof__(v23),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v28 = COERCE_AS(__typeof__(v28),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v43 = COERCE_AS(__typeof__(v43),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v47 = COERCE_AS(__typeof__(v47),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v68 = COERCE_AS(__typeof__(v68),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v82 = COERCE_AS(__typeof__(v82),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v85 = COERCE_AS(__typeof__(v85),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = (*v95)(*a4 + 8, 49);
        ++v78;
        v79 += 56;
        ++v77;
      } while (v78 < *(int*)(v98 + 28));
    }
  }
  return result;
}

__int64 TaskSSR_b7cee0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4,
                       __int64 a5)
{
  __int64 (**v8)(__int64);
  __int64 (**v9)(__int64);
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  __int64 result;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  __int64 v43;
  _QWORD v44[2];

  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = (__int64 (**)(__int64))GameData_212e778[0],
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = (__int64 (**)(__int64))GameData_212e780,
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(_BYTE*)(a5 + 84) & 1) != 0 || (*(_BYTE*)(a1 + 1032) & 1) != 0) {
    v11 = X8CALL_X0(
        _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                     **(_QWORD**)(a1 + 8) + 32LL))((void*)*(_QWORD**)(a1 + 8),
                                                   *(_QWORD*)(a1 + 8))),
    v12 = COERCE_AS(__typeof__(v12),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v36 = COERCE_AS(__typeof__(v36),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(_QWORD, _QWORD*, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v11,
                                                                   v12),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v13 = *a4;
    v14 = (*v8)((__int64)v11);
    v15 = (*v9)((__int64)v11);
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v13 + 72LL))(v13, 0, 0, v14, v15),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16 = *a4;
    v17 = (*v8)((__int64)v11);
    v18 = (*v9)((__int64)v11);
    (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
        *(_QWORD*)v16 + 88LL))(v16, 0, 0, v17, v18),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19 = *a4;
    v44[0] = 0;
    v44[1] = 0;
    (*(void (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v19 + 144LL))(v19, 0,
                                                                    v44),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v36 = COERCE_AS(__typeof__(v36),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_BYTE*)(a1 + 1032) = 0;
  }
  v20 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a3 + 8) + 16LL))(
      *(_QWORD*)(a3 + 8)),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 32LL))(v20),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v21, v22),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v23 = *a4;
  v24 = (*v8)(v21);
  v25 = (*v9)(v21);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v23 + 72LL))(
      v23, 0, 0, v24, v25),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v26 = *a4;
  v27 = (*v8)(v21);
  v28 = (*v9)(v21);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)v26 + 88LL))(
      v26, 0, 0, v27, v28),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = *a4;
  v44[0] = 0;
  v44[1] = 0;
  result = (*(__int64 (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v29 + 144LL))(
      v29, 0, v44),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v36 = COERCE_AS(__typeof__(v36),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(int*)(a5 + 28) >= 2) {
    v31 = (__int64*)(a3 + 16);
    v32 = 1;
    do {
      v33 = *v31++;
      v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v35 = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 32LL))(v34),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      (*(void (**)(_QWORD, __int64, __int64))(*(_QWORD*)*a4 + 96LL))(*a4, v35,
                                                                     v36),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v37 = *a4;
      v38 = (*v8)(v35);
      v39 = (*v9)(v35);
      (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v37 + 72LL))(v37, 0, 0, v38, v39),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v40 = *a4;
      v41 = (*v8)(v35);
      v42 = (*v9)(v35);
      (*(void (**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(
          *(_QWORD*)v40 + 88LL))(v40, 0, 0, v41, v42),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v36 = COERCE_AS(__typeof__(v36),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v43 = *a4;
      v44[0] = 0;
      v44[1] = 0;
      result = (*(__int64 (**)(__int64, _QWORD, _QWORD*))(*(_QWORD*)v43 +
                                                          144LL))(v43, 0, v44),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v36 = COERCE_AS(__typeof__(v36),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      ++v32;
    } while (v32 < *(int*)(a5 + 28));
  }
  return result;
}

void gfxa_TaskSSR_Impl_Impl_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void gfxa_TaskSSR_Impl_Impl_lambda1_Invoke(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 21;
}

bool gfxa_TaskSSR_Impl_draw_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(a2 + 12) == *(_DWORD*)(a1 + 8);
}

#pragma GCC visibility pop
