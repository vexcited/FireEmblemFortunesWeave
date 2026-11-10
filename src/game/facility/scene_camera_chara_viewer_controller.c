#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn))
SceneCameraCharaViewerController_DeletingDestructor();
__attribute__((swiftcall)) void game_13f9460(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
game_facility_1450df0(PSEUDO_X8, __int128*, float, float, float, float);
__int64 GameRoutine_a7fed0(_QWORD, _QWORD, _QWORD, float, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 wld_a7fda0(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64* GameData_212e460[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_212e438;
extern __int64 fw_memory_g_heap_manager_ptr;
__attribute__((swiftcall)) void
game_facility_SceneCameraCharaViewerController_CommitBlend_lambda0_Invoke(
    PSEUDO_X8 x8_, __int64 a1);
void __attribute__((noreturn))

SceneCameraCharaViewerController_DeletingDestructor()
{
  __udf(0x8002u);
}

__attribute__((swiftcall)) void

game_facility_SceneCameraCharaViewerController_CommitBlend_lambda0_Invoke(
    PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  float32x4_t* v2;
  __int64 result;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  atomic_ullong* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
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
  float* v32;
  float v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  _DWORD* v40;
  float32x4_t v41;
  unsigned __int64 v42;
  float v43;
  float* v44;
  float v45;
  float v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  float32x4_t* v54;
  float32x4_t v55;
  float32x4_t v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int128 v63;
  _QWORD* v64;

  v64 = a2;
  v2 = *(float32x4_t**)(a1 + 8);
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 432, 16, 0);
  v4 = result;
  v5 = GameData_212e460[0];
  v6 = (__int64*)GameData_212c2a0;
  *(_QWORD*)(result + 112) = 1065353216;
  *(_QWORD*)(result + 120) = 0x100000000LL;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 8) = 0;
  v7 = (atomic_ullong*)(result + 8);
  v8 = *v6;
  v9 = v6[1];
  *(_QWORD*)(result + 128) = 0x4248000041D80000LL;
  *(_QWORD*)(result + 136) = 0x41C0000042100000LL;
  *(_QWORD*)(result + 144) = 0x4110000041800000LL;
  v10 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v6);
  v11 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v6);
  *(_QWORD*)(result + 168) = 1092616192;
  v12 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6);
  v13 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6 + 8);
  *(_QWORD*)result = v5 + 2;
  v14 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6);
  v15 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8);
  *(_QWORD*)(result + 240) = v10;
  *(_QWORD*)(result + 248) = v11;
  *(_QWORD*)(result + 192) = v8;
  *(_QWORD*)(result + 200) = v9;
  *(_QWORD*)(result + 224) = v12;
  *(_QWORD*)(result + 232) = v13;
  *(_QWORD*)(result + 208) = v14;
  *(_QWORD*)(result + 216) = v15;
  v16 = (__int64*)GameData_212c2b0;
  v17 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2b0);
  v19 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0);
  v18 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2b0 + 8);
  v21 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2b0);
  v20 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                    (_QWORD)GameData_212c2b0);
  v22 = *(_QWORD*)GameData_212c2b0;
  *(_QWORD*)(result + 272) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2b0 + 8);
  *(_QWORD*)(result + 280) = v18;
  v23 = *v16;
  v24 = v16[1];
  v26 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16);
  v25 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v16 + 8);
  *(_QWORD*)(result + 320) = v22;
  *(_QWORD*)(result + 328) = v17;
  *(_QWORD*)(result + 256) = v23;
  *(_QWORD*)(result + 264) = v24;
  v27 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v16);
  *(_QWORD*)(result + 304) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v16);
  *(_QWORD*)(result + 312) = v20;
  v28 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v16 + 8);
  *(_QWORD*)(result + 288) =
      *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v16 + 16);
  *(_QWORD*)(result + 296) = v25;
  *(_QWORD*)(result + 336) = v19;
  *(_QWORD*)(result + 344) = v28;
  v29 = GameData_212e438;
  v30 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v16);
  *(_QWORD*)(result + 40) = 0;
  *(_DWORD*)(result + 152) = 0;
  *(_BYTE*)(result + 164) = 1;
  *(_DWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 352) = v26;
  *(_QWORD*)(result + 360) = v27;
  *(_QWORD*)(result + 408) = 0;
  *(_QWORD*)(result + 416) = 0;
  *(_QWORD*)(result + 384) = 0;
  *(_QWORD*)(result + 392) = 0;
  *(_BYTE*)(result + 165) = 1;
  *(_QWORD*)(result + 368) = v21;
  *(_QWORD*)(result + 376) = v30;
  *(_QWORD*)(result + 156) = 0x469C40003DCCCCCDLL;
  *(_OWORD*)(result + 48) = GameData_1a83090;
  *(_OWORD*)(result + 64) = (__typeof__(*(_OWORD*)(result + 64))){0};
  *(_OWORD*)(result + 80) = GameData_1a83610;
  *(_OWORD*)(result + 96) = (__typeof__(*(_OWORD*)(result + 96))){0};
  *(_QWORD*)(result + 32) = v29 + 16;
  v31 = result + 32;
  *(_QWORD*)(result + 424) = 1023;
  *(_QWORD*)(result + 392) = 1023;
  *(_QWORD*)(result + 400) = 0;
  if (LANES128(v2[3]).n128_u64[0] != 0) {
    v32 = (float*)(*(_QWORD*)(LANES128(v2[1]).n128_u64[0] +
                              8 * (LANES128(v2[2]).n128_u64[1] >> 4)) +
                   368 * (LANES128(v2[2]).n128_u64[1] & 0xF));
    v33 = v32[86];
    game_13f9460((void*)(&v63), v32 + 4);
    v34 = GameData_212dce8;
    game_facility_1450df0(
        (void*)(&v61), &v63, *v32,
        v32[2] - *(float*)(*(_QWORD*)GameData_212dce8 + 128LL), v32[1], v32[3]);
    v35 = v61;
    wld_a7fda0(LANES128(v2[3]).n128_u64[1], v61);
    result = wld_a7fda0(v31, v35);
    v36 = LANES128(v2[2]).n128_u64[1];
    v37 = LANES128(v2[1]).n128_u64[0];
    v38 = v62;
    v39 = v36 >> 1;
    LODWORD(v36) = v36 & 0xF;
    v39 &= 0x7FFFFFFFFFFFFFF8uLL;
    v40 = (_DWORD*)(*(_QWORD*)(v37 + v39) + 368LL * (unsigned int)v36);
    LANES128(v2[5]).n128_u32[0] = v40[12];
    LANES128(v2[5]).n128_u32[1] = v40[13];
    v41 = v2[5];
    LANES128(v41).n128_u64[1] = (unsigned int)v40[14];
    v2[5] = v41;
    LANES128(v2[6]).n128_u32[0] =
        *(_DWORD*)(*(_QWORD*)(v37 + v39) + 368LL * (unsigned int)v36 + 64);
    if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38);
      result = std___1___shared_weak_count___release_weak(v38);
    }
    if (LANES128(v2[3]).n128_u64[0] >= 2) {
      v42 = 1;
      v43 = v33 + 0.0f;
      do {
        v44 = (float*)(*(_QWORD*)(LANES128(v2[1]).n128_u64[0] +
                                  8 * ((v42 + LANES128(v2[2]).n128_u64[1]) >>
                                       4)) +
                       368LL *
                           (((_DWORD)v42 + LANES128(v2[2]).n128_u32[2]) & 0xF));
        v43 = v43 + v44[86];
        game_13f9460((void*)(&v63), v44 + 4);
        result = X8CALL_X0(
            __int64,
            game_facility_1450df0((void*)(&v61), &v63, *v44,
                                  v44[2] - *(float*)(*(_QWORD*)v34 + 128LL),
                                  v44[1], v44[3]));
        v45 = *(
            float*)(*(_QWORD*)(LANES128(v2[1]).n128_u64[0] +
                               8 * ((v42 + LANES128(v2[2]).n128_u64[1]) >> 4)) +
                    368LL *
                        (((_DWORD)v42 + LANES128(v2[2]).n128_u32[2]) & 0xF) +
                    344);
        if (v45 > 0.0f) {
          v46 = v45 / v43;
          v47 = v61;
          v48 = LANES128(v2[3]).n128_u64[1];
          if ((float)(v45 / v43) <= 0.0f) {
            v49 = v31;
          }
          else {
            v49 = v61;
          }
          wld_a7fda0(LANES128(v2[3]).n128_u64[1], v49);
          if (v46 > 0.0f && v46 < 0x1.0000000000000p+0f) {
            GameRoutine_a7fed0(v48, v31, v47, v46, v46);
          }
          result = wld_a7fda0(v31, LANES128(v2[3]).n128_u64[1]);
          v51 = LANES128(v2[1]).n128_u64[0];
          v52 = v42 + LANES128(v2[2]).n128_u64[1];
          v53 = v52 >> 1;
          LODWORD(v52) = v52 & 0xF;
          v53 &= 0x7FFFFFFFFFFFFFF8uLL;
          v54 =
              (float32x4_t*)(*(_QWORD*)(v51 + v53) + 368LL * (unsigned int)v52);
          v55 = vaddq_f32(v2[5],
                          vmulq_n_f32(vsubq_f32(v54[3], v2[5]),
                                      LANES128(v54[21]).n128_f32[2] / v43));
          LANES128(v2[5]).n128_u64[0] = LANES128(v55).n128_u64[0];
          v56 = v2[5];
          LANES128(v56).n128_u64[1] = LANES128(v55).n128_u32[2];
          LANES128(v55).n128_u32[0] = LANES128(v2[6]).n128_u32[0];
          v2[5] = v56;
          v57 = *(_QWORD*)(v51 + v53) + 368LL * (unsigned int)v52;
          LANES128(v2[6]).n128_f32[0] =
              LANES128(v55).n128_f32[0] +
              (float)((float)(*(float*)(v57 + 64) - LANES128(v55).n128_f32[0]) *
                      (float)(*(float*)(v57 + 344) / v43));
        }
        v58 = v62;
        if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
          result = std___1___shared_weak_count___release_weak(v58);
        }
        ++v42;
      } while (LANES128(v2[3]).n128_u64[0] > v42);
    }
  }
  v59 = LANES128(v2[4]).n128_u64[0];
  v60 = v64;
  *v64 = LANES128(v2[3]).n128_u64[1];
  v60[1] = v59;
  if (v59 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v59 + 8), 1u,
                              memory_order_relaxed);
  }
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    {
      std___1___shared_weak_count___release_weak(v4);
      return;
    }
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
