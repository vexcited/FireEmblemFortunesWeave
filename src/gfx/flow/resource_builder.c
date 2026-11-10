#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_ad5000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad5280(_QWORD);
__int64 Model_a636e0(__int64*, __int64, __int64, __int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ResourceBuilder_b6b150(__int64 a1, __int64 a2);

__int64 ResourceBuilder_b6b150(__int64 a1, __int64 a2)
{
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
  __int64 v20;
  __int64 v21;

  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 16) = a2;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  gfx_shader_Archive_CreateShader((void*)(&v20), *(_QWORD*)(a2 + 13408),
                                  (__int64)"Lighting", 8u,
                                  (__int64)"LensFlareSampling", 0x11u);
  v3 = v20;
  v4 = v21;
  v5 = *(_QWORD*)(a1 + 32);
  v20 = 0;
  v21 = 0;
  *(_QWORD*)(a1 + 24) = v3;
  *(_QWORD*)(a1 + 32) = v4;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = v21;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  GameRoutine_ad5280(*(_QWORD*)(a1 + 24));
  gfx_shader_Archive_CreateShader(
      (void*)(&v20), *(_QWORD*)(*(_QWORD*)(a1 + 16) + 13408LL),
      (__int64)"Lighting", 8u, (__int64)"LensFlareAverage", 0x10u);
  v7 = v20;
  v8 = v21;
  v9 = *(_QWORD*)(a1 + 48);
  v20 = 0;
  v21 = 0;
  *(_QWORD*)(a1 + 40) = v7;
  *(_QWORD*)(a1 + 48) = v8;
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = v21;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
  }
  v11 = GameRoutine_ad5000(*(_QWORD*)(a1 + 40), "pass", 4, 0);
  GameRoutine_ad5280(v11);
  gfx_shader_Archive_CreateShader(
      (void*)(&v20), *(_QWORD*)(*(_QWORD*)(a1 + 16) + 13408LL),
      (__int64)"Lighting", 8u, (__int64)"LensFlareAverage", 0x10u);
  v12 = v20;
  v13 = v21;
  v14 = *(_QWORD*)(a1 + 64);
  v20 = 0;
  v21 = 0;
  *(_QWORD*)(a1 + 56) = v12;
  *(_QWORD*)(a1 + 64) = v13;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  v15 = v21;
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = GameRoutine_ad5000(*(_QWORD*)(a1 + 56), "pass", 4, 1);
  GameRoutine_ad5280(v16);
  DecalObject_a91100(
      (__int64*)(a1 + 72), *(_QWORD*)(*(_QWORD*)(a1 + 16) + 312LL),
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 552LL) + 16LL), 40);
  Model_a636e0((__int64*)(a1 + 128), *(_QWORD*)(*(_QWORD*)(a1 + 16) + 312LL),
               *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 552LL) + 16LL), 4);
  v17 = *(_QWORD*)(a1 + 128);
  *(_DWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v17 + 56LL))(v17) = 0;
  (*(void (**)(__int64))(*(_QWORD*)v17 + 64LL))(v17);
  v18 = *(_QWORD*)(a1 + 136);
  *(_DWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v18 + 56LL))(v18) = 0;
  return (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 64LL))(v18);
}

#pragma GCC visibility pop
