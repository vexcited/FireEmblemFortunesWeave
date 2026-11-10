#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
int8x16_t* GameRoutine_e7bed0(int8x16_t* result, char);
int8x16_t*
game_cmdbtl_anonymous_ProcReinforceIsmStart_SetupSupport_closure_Invoke(
    __int64 a1, __int64 a2);
int8x16_t*

game_cmdbtl_anonymous_ProcReinforceIsmStart_SetupSupport_closure_Invoke(
    __int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  int8x16_t* v3;
  unsigned __int64 v4;
  float32x4_t v5;
  int8x16_t v6;
  int8x16_t v7;
  int8x16_t v8;
  __int128 v9;
  int8x16_t v10;
  int8x16_t* result;
  int8x16_t v12;
  __int64 v13;
  int8x16_t v14;
  __int128 v15;

  v3 = *(int8x16_t**)a2;
  v2 = *(_QWORD*)(a2 + 8);
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  v4 = LANES128(v3[13]).n128_u64[0];
  v5 = vaddq_f32(*(float32x4_t*)*(_QWORD*)(a1 + 8), v3[7]);
  LANES128(v3[6]).n128_u64[0] = LANES128(v5).n128_u64[0];
  LANES128(v3[7]).n128_u64[0] = LANES128(v5).n128_u64[0];
  v7 = v3[6];
  v6 = v3[7];
  LANES128(v8).n128_u64[0] = LANES128(v3[7]).n128_u64[0];
  LANES128(v7).n128_u64[1] = LANES128(v5).n128_u32[2];
  LANES128(v8).n128_u64[1] = LANES128(v5).n128_u32[2];
  v3[6] = v7;
  v3[7] = v8;
  if (v4 != 0) {
    v12 = v8;
    *(_QWORD*)&v9 = LANES128(v6).n128_u32[0] | 0x4348000000000000LL;
    LANES128(v6).n128_u32[1] = -1027080192;
    *((_QWORD*)&v9 + 1) = LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u32[0];
    LANES128(v6).n128_u64[1] = *((_QWORD*)&v9 + 1);
    v14 = v6;
    v15 = v9;
    GameRoutine_1085a10((void*)(&v13), v4 + 160, &v15, &v14, 0);
    v8 = v12;
    LANES128(v8).n128_u32[1] = HIDWORD(v13);
  }
  LANES128(v3[7]).n128_u64[0] = LANES128(v8).n128_u64[0];
  v10 = v3[7];
  LANES128(v3[6]).n128_u32[1] = LANES128(v10).n128_u32[1];
  LANES128(v10).n128_u64[1] = LANES128(v8).n128_u32[2];
  v3[7] = v10;
  result = GameRoutine_e7bed0(v3, 1);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return (int8x16_t*)std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

#pragma GCC visibility pop
