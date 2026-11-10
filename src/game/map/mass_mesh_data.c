#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MassMeshData_f44c80(__int64 result);
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
__int64 GameRoutine_f2f3e0(_QWORD);
__int64 GameRoutine_f45440(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f54fe0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MassMeshData_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_212f8b0[14];
long double GameRoutine_fcc280(_QWORD, _QWORD);
__n128 MassMeshData_Destructor(_QWORD* a1);
void MassMeshData_f44f60(float** a1);
__n128 MassMeshData_f45180(__int64 a1);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_map_f54910(_QWORD);
__n128 GameRoutine_f0ea60(__n128 result, double, float);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN GameData_21a55c0;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int64* GameData_212f878;
extern __int64 GameData_212d018[6];
long double MapDrawConst_fcc280(__int64, unsigned int**);
void PrimitiveDrawStack_f51430(__int64, __int64);
void MassMeshData_f45440(__int64 a1, _QWORD* a2, __int64 a3);
__int64* MassMeshData_f45860(__int64** a1, unsigned __int64* a2, _QWORD** a3);
__attribute__((swiftcall)) void GameRoutine_f0ea80(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void GameRoutine_f30a90(PSEUDO_X8, float32x4_t*);
__attribute__((swiftcall)) void GameRoutine_fcb470(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD);
__int64 CharacterController_d42d20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f155c0(_QWORD);
__int64 GameRoutine_fcabb0(__int64, __int64, int, char, char, __int64, __int64);
__int64 MassMeshData_f45860_alt1(_QWORD, _QWORD,
                                 _QWORD) __asm__("MassMeshData_f45860");
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a6120;
long double game_map_f54d00(__int64);
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 MassMeshData_f445e0(__int64 a1, int a2, unsigned int a3,
                            unsigned int a4, char a5, char a6, __int64 a7,
                            char a8);
__int64 MassMeshData_f449c0(__int64 a1, __int64 a2);

__n128 MassMeshData_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void (***v12)(_QWORD);
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  void (**v16)(_QWORD);
  bool v17;
  __int64 v18;
  __int64 v19;

  *a1 = game_map_MassMeshData_vtable;
  v2 = a1[43];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v5 = a1[42];
      v6 = v3;
      if (v5 != 0) {
        *(_QWORD*)v5 = 0;
        *(_BYTE*)(v5 + 153) = 1;
        GameRoutine_f2f3e0(v5);
        *(_DWORD*)(v5 + 148) = 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
    v7 = a1[43];
    if (v7 != 0) {
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  v8 = a1[15];
  *a1 = GameData_212f8b0[0] + 2;
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[16] = v8;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = (void (***)(_QWORD))a1[12];
  if (v12 != nullptr) {
    v13 = (void (***)(_QWORD))a1[13];
    if (v12 == v13) {
      goto LABEL_19;
    }
    v14 = v13 - 8;
    v15 = v13 - 8;
    do {
      v16 = *v15;
      v15 -= 8;
      (*v16)(v14);
      v17 = v14 == v12;
      v14 = v15;
    } while (!v17);
    v18 = a1[12];
    a1[13] = v12;
    if (v18 != 0) {
    LABEL_19:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v19 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v19);
    }
  }
  return result;
}

__int64 MassMeshData_f445e0(__int64 a1, int a2, unsigned int a3,
                            unsigned int a4, char a5, char a6, __int64 a7,
                            char a8)
{
  float32x4_t v17;
  float32x4_t* v18;
  float32x4_t* v19;
  float32x4_t* v20;
  float32x4_t v21;
  float32x4_t v22;
  int8x16_t v23;
  __int128 v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  unsigned __int64 v30;
  float32x4_t v31;
  float32x4_t v32;
  unsigned __int64 v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  struct {
    _QWORD v50[4];
    float32x4_t v51;
  } v50_;
  float32x4_t v52[6];
  _BYTE v53[40];
  int8x16x2_t v54;
  int8x16x2_t v55;
  int8x16x2_t v56;

  game_map_f54d00(a1 + 112);
  GameRoutine_f0ea80((void*)((__int64)v53), a5 & 1);
  GameRoutine_fcabb0(a1, a1 + 112, 1, a3, a4, (__int64)v53,
                     (__int64)GameData_212c958);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v41 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v41;
    __cxa_guard_release(&GameData_21a6130);
  }
  v17 = COERCE_AS(float32x4_t, GameData_21a6120);
  v19 = *(float32x4_t**)(a1 + 208);
  v18 = *(float32x4_t**)(a1 + 216);
  if (v18 != v19) {
    v20 = *(float32x4_t**)(a1 + 208);
    do {
      v21 = v20[1];
      v20 += 4;
      v17 = vaddq_f32(v17, v21);
    } while (v20 != v18);
    v17 = vmulq_n_f32(
        v17, 0x1.0000000000000p+0f /
                 (float)(unsigned __int64)(((char*)v18 - (char*)v19) >> 6));
    LANES128(v17).n128_u32[3] = 0;
  }
  v22 = vsubq_f32(v17, *(float32x4_t*)(a1 + 288));
  v23 = vmulq_f32(v22, v22);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
              .n64_f32[0] > 0x0.0p+0f &&
      v18 != v19) {
    do {
      v19[1] = vsubq_f32(v19[1], v22);
      v19 += 4;
    } while (v19 != v18);
  }
  *(_QWORD*)(a1 + 288) = LANES128(v17).n128_u64[0];
  *(_BYTE*)(a1 + 357) = a6 & 1;
  v25 = *(_OWORD*)(a1 + 288);
  *(_DWORD*)(a1 + 432) = a2;
  *(_DWORD*)(a1 + 436) = a7;
  *((_QWORD*)&v25 + 1) = LANES128(v17).n128_u32[2];
  *(_BYTE*)(a1 + 440) = BYTE4(a7);
  *(_BYTE*)(a1 + 356) = a8 & 1;
  *(_OWORD*)(a1 + 288) = v25;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a55c0) != 0) {
    v42 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a55a0 =
        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55a0 + 1) = v42;
    v43 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                      (_QWORD)GameData_212c2a0);
    *(_QWORD*)&GameData_21a55b0 =
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55b0 + 1) = v43;
    v44 = *((_QWORD*)GameData_212c2a0 + 1);
    *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
    *((_QWORD*)&GameData_21a5580 + 1) = v44;
    v45 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a5590 =
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a5590 + 1) = v45;
    __cxa_guard_release(&GameData_21a55c0);
  }
  v26 = COERCE_AS(float32x4_t, GameData_21a5580);
  v27 = COERCE_AS(float32x4_t, GameData_21a5590);
  v29 = COERCE_AS(float32x4_t, GameData_21a55a0);
  v28 = COERCE_AS(float32x4_t, GameData_21a55b0);
  if (*(_BYTE*)(a1 + 440) == 1) {
    v46 = COERCE_AS(float32x4_t, GameData_21a5580);
    v47 = COERCE_AS(float32x4_t, GameData_21a5590);
    v48 = COERCE_AS(float32x4_t, GameData_21a55a0);
    v49 = COERCE_AS(float32x4_t, GameData_21a55b0);
    GameRoutine_fcb470((void*)(v52), a1, a3, a4, 1);
    GameRoutine_f30a90((void*)(v50_.v50), v52);
    v55.val[1] = v50_.v51;
    LANES128(v55.val[1]).n128_u32[3] = 0;
    v30 = LANES64_OF(
              vqtbl1_s8(v55.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
              .n64_u64[0];
    LANES128(v31).n128_u64[0] =
        LANES64_OF(
            vrev64_s32(COERCE_AS(int32x2_t, LANES128(v50_.v51).n128_u64[0])))
            .n64_u64[0];
    LANES128(v32).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v55.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
            .n64_u64[0];
    v33 = LANES64_OF(
              vqtbl1_s8(v55.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    LANES128(v31).n128_u64[1] = v30;
    LANES128(v32).n128_u64[1] = v33;
    v34 = vmulq_f32(v31, v31);
    v54.val[1] = vmulq_f32(v32, v32);
    v54.val[0] = vsubq_f32(
        COERCE_AS(float32x4_t, GameData_1a837f0),
        vaddq_f32(vaddq_f32(v54.val[1], v54.val[1]), vaddq_f32(v34, v34)));
    LANES128(v35).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v55.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v35).n128_u64[1] = v30;
    v36 = vmulq_f32(v35, v55.val[1]);
    v37 = vaddq_f32(v36, v36);
    LANES128(v55.val[1]).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v55.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v55.val[1]).n128_u64[1] = v33;
    v38 = vmulq_laneq_f32(v55.val[1], v50_.v51, 3);
    v39 = vaddq_f32(v38, v38);
    v56.val[0] = vaddq_f32(v37, v39);
    v56.val[1] = vsubq_f32(v37, v39);
    LANES128(v55.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v56, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
            .n64_u64[0];
    LANES128(v54.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v56, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v55.val[1]).n128_i8[8] =
        vqtbl2_s8(v56, COERCE_AS(int8x8_t, 0x706050413121110LL));
    *(int8x8_t*)&LANES128(v54.val[1]).n128_i8[8] =
        vqtbl2_s8(v56, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
    v55.val[0] = v54.val[0];
    LANES128(v37).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v55, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v37).n128_i8[8] =
        vqtbl2_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
    LANES128(v56.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v55, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v56.val[0]).n128_i8[8] =
        vqtbl2_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
    LANES128(v55.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v54, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v55.val[0]).n128_i8[8] =
        vqtbl2_s8(v54, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
    v26 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v37, LANES128(v46).n128_f32[0]), v56.val[0],
                       COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]), 1),
        v55.val[0], v46, 2);
    v27 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v37, LANES128(v47).n128_f32[0]), v56.val[0],
                       COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]), 1),
        v55.val[0], v47, 2);
    v29 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v37, LANES128(v48).n128_f32[0]), v56.val[0],
                       COERCE_AS(float32x2_t, LANES128(v48).n128_u64[0]), 1),
        v55.val[0], v48, 2);
    v28 = vaddq_f32(
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v37, LANES128(v49).n128_f32[0]), v56.val[0],
                COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]), 1),
            v55.val[0], v49, 2),
        COERCE_AS(float32x4_t, 0));
  }
  *(float32x4_t*)(a1 + 368) = v26;
  *(float32x4_t*)(a1 + 384) = v27;
  *(float32x4_t*)(a1 + 400) = v29;
  *(float32x4_t*)(a1 + 416) = v28;
  return MassMeshData_f449c0(a1 + 24LL * a2 + 8, a1 + 112);
}

__int64 MassMeshData_f449c0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int128 v11;
  __int128 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  unsigned int v23;
  int v24;
  __int64 v25;
  unsigned __int64 v27;
  unsigned __int64* v28;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2);
  v5 = *(_QWORD*)(a1 + 8);
  v27 = v4;
  if (v5 == 0) {
  LABEL_12:
    v28 = &v27;
    v9 = MassMeshData_f45860_alt1(a1, &v27, &v28);
    v10 = v9;
    *(_DWORD*)(v9 + 56) = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(v9 + 60) = *(_DWORD*)(a2 + 12);
    *(_OWORD*)(v9 + 64) = *(_OWORD*)(a2 + 16);
    *(_OWORD*)(v9 + 80) = *(_OWORD*)(a2 + 32);
    *(_OWORD*)(v9 + 96) = *(_OWORD*)(a2 + 48);
    *(_OWORD*)(v9 + 112) = *(_OWORD*)(a2 + 64);
    *(_QWORD*)(v9 + 136) = *(_QWORD*)(a2 + 88);
    *(_QWORD*)(v9 + 128) = *(_QWORD*)(a2 + 80);
    if (v9 + 48 != a2) {
      GameRoutine_f155c0(v9 + 144);
      CharacterController_d42d20(
          v10 + 168, *(_QWORD*)(a2 + 120), *(_QWORD*)(a2 + 128),
          (__int64)(*(_QWORD*)(a2 + 128) - *(_QWORD*)(a2 + 120)) >> 4);
    }
    *(_DWORD*)(v10 + 192) = *(_DWORD*)(a2 + 144);
    *(_DWORD*)(v10 + 196) = *(_DWORD*)(a2 + 148);
    v11 = *(_OWORD*)(v10 + 192);
    *((_QWORD*)&v11 + 1) = *(unsigned int*)(a2 + 152);
    *(_OWORD*)(v10 + 192) = v11;
    *(_QWORD*)(v10 + 216) = *(_QWORD*)(a2 + 168);
    *(_QWORD*)(v10 + 208) = *(_QWORD*)(a2 + 160);
    *(_DWORD*)(v10 + 224) = *(_DWORD*)(a2 + 176);
    *(_DWORD*)(v10 + 228) = *(_DWORD*)(a2 + 180);
    v12 = *(_OWORD*)(v10 + 224);
    *((_QWORD*)&v12 + 1) = *(unsigned int*)(a2 + 184);
    *(_OWORD*)(v10 + 224) = v12;
    v13 = *(_QWORD*)(a2 + 232);
    v14 = *(_DWORD*)(a2 + 240);
    *(_QWORD*)(v10 + 264) = *(_QWORD*)(a2 + 216);
    *(_QWORD*)(v10 + 280) = v13;
    *(_QWORD*)(v10 + 248) = *(_QWORD*)(a2 + 200);
    v15 = *(_QWORD*)(a2 + 192);
    *(_QWORD*)(v10 + 256) = *(_QWORD*)(a2 + 208);
    *(_QWORD*)(v10 + 240) = v15;
    v16 = *(_QWORD*)(a2 + 224);
    *(_DWORD*)(v10 + 288) = v14;
    *(_QWORD*)(v10 + 272) = v16;
    *(_WORD*)(v10 + 292) = *(_WORD*)(a2 + 244);
    *(_OWORD*)(v10 + 304) = *(_OWORD*)(a2 + 256);
    *(_OWORD*)(v10 + 320) = *(_OWORD*)(a2 + 272);
    *(_OWORD*)(v10 + 336) = *(_OWORD*)(a2 + 288);
    *(_OWORD*)(v10 + 352) = *(_OWORD*)(a2 + 304);
    v17 = *(_QWORD*)(a2 + 320);
    *(_BYTE*)(v10 + 376) = *(_BYTE*)(a2 + 328);
    *(_QWORD*)(v10 + 368) = v17;
    v19 = *(_QWORD*)(a2 + 336);
    v18 = *(_QWORD*)(a2 + 344);
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                memory_order_relaxed);
    }
    v20 = *(_QWORD*)(v10 + 392);
    *(_QWORD*)(v10 + 384) = v19;
    *(_QWORD*)(v10 + 392) = v18;
    if (v20 != 0) {
      std___1___shared_weak_count___release_weak(v20);
    }
    v21 = *(_DWORD*)(a2 + 352);
    v28 = &v27;
    *(_DWORD*)(v10 + 400) = v21;
    v22 = MassMeshData_f45860_alt1(a1, &v27, &v28);
    v23 = 1;
    v5 = v22;
    *(_BYTE*)(v22 + 272) = 1;
    if (((*(__int64 (**)(__int64))(*(_QWORD*)(v22 + 48) + 48LL))(v22 + 48) &
         1) == 0) {
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  v6 = (_QWORD*)v5;
  while (1) {
    v7 = v6[4];
    if (v4 >= v7) {
      break;
    }
  LABEL_3:
    v6 = (_QWORD*)*v6;
    if (v6 == nullptr) {
      goto LABEL_12;
    }
  }
  if (v7 < v4) {
    ++v6;
    goto LABEL_3;
  }
  while (1) {
    while (1) {
      v8 = *(_QWORD*)(v5 + 32);
      if (v4 >= v8) {
        break;
      }
      v5 = *(_QWORD*)v5;
      if (v5 == 0) {
        goto LABEL_11;
      }
    }
    if (v8 >= v4) {
      break;
    }
    v5 = *(_QWORD*)(v5 + 8);
    if (v5 == 0) {
    LABEL_11:
      String_60a250("map::at:  key not found");
    }
  }
  v25 = *(_QWORD*)(v5 + 48);
  *(_BYTE*)(v5 + 272) = 1;
  v23 = 0;
  if (((*(__int64 (**)(void*))(v25 + 48))((void*)(v5 + 48)) & 1) == 0) {
  LABEL_21:
    v24 = 0;
    *(_DWORD*)(v5 + 276) = 1065353216;
    goto LABEL_22;
  }
LABEL_19:
  v24 = 1036831949;
LABEL_22:
  *(_DWORD*)(v5 + 280) = v24;
  return v23;
}

__int64 MassMeshData_f44c80(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  _QWORD* v11;
  bool v12;
  __int64 v13;
  int v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  int v22;
  _QWORD* v23;
  _QWORD* v24;

  v1 = *(_QWORD**)(result + 8);
  v2 = (_QWORD*)(result + 16);
  v3 = (_QWORD*)result;
  if (v1 != (_QWORD*)(result + 16)) {
    do {
      v8 = v1[6];
      *((_BYTE*)v1 + 272) = 0;
      result = (*(__int64 (**)(void*))(v8 + 48))(&v1[6]);
      if ((result & 1) != 0) {
        v9 = 1036831949;
      }
      else {
        v9 = 0;
        *((_DWORD*)v1 + 69) = 0;
      }
      v10 = (_QWORD*)v1[1];
      *((_DWORD*)v1 + 70) = v9;
      if (v10 != nullptr) {
        do {
          v11 = v10;
          v10 = (_QWORD*)*v10;
        } while (v10 != nullptr);
      }
      else {
        do {
          v11 = (_QWORD*)v1[2];
          v12 = v1 == (_QWORD*)*v11;
          v1 = v11;
        } while (!v12);
      }
      v1 = v11;
    } while (v11 != v2);
  }
  v4 = (_QWORD*)v3[4];
  if (v4 != v3 + 5) {
    do {
      v13 = v4[6];
      *((_BYTE*)v4 + 272) = 0;
      result = (*(__int64 (**)(void*))(v13 + 48))(&v4[6]);
      if ((result & 1) != 0) {
        v14 = 1036831949;
      }
      else {
        v14 = 0;
        *((_DWORD*)v4 + 69) = 0;
      }
      v15 = (_QWORD*)v4[1];
      *((_DWORD*)v4 + 70) = v14;
      if (v15 != nullptr) {
        do {
          v16 = v15;
          v15 = (_QWORD*)*v15;
        } while (v15 != nullptr);
      }
      else {
        do {
          v16 = (_QWORD*)v4[2];
          v12 = v4 == (_QWORD*)*v16;
          v4 = v16;
        } while (!v12);
      }
      v4 = v16;
    } while (v16 != v3 + 5);
  }
  v5 = (_QWORD*)v3[7];
  if (v5 != v3 + 8) {
    do {
      v17 = v5[6];
      *((_BYTE*)v5 + 272) = 0;
      result = (*(__int64 (**)(void*))(v17 + 48))(&v5[6]);
      if ((result & 1) != 0) {
        v18 = 1036831949;
      }
      else {
        v18 = 0;
        *((_DWORD*)v5 + 69) = 0;
      }
      v19 = (_QWORD*)v5[1];
      *((_DWORD*)v5 + 70) = v18;
      if (v19 != nullptr) {
        do {
          v20 = v19;
          v19 = (_QWORD*)*v19;
        } while (v19 != nullptr);
      }
      else {
        do {
          v20 = (_QWORD*)v5[2];
          v12 = v5 == (_QWORD*)*v20;
          v5 = v20;
        } while (!v12);
      }
      v5 = v20;
    } while (v20 != v3 + 8);
  }
  v6 = (_QWORD*)v3[10];
  v7 = v3 + 11;
  if (v6 != v7) {
    do {
      v21 = v6[6];
      *((_BYTE*)v6 + 272) = 0;
      result = (*(__int64 (**)(void*))(v21 + 48))(&v6[6]);
      if ((result & 1) != 0) {
        v22 = 1036831949;
      }
      else {
        v22 = 0;
        *((_DWORD*)v6 + 69) = 0;
      }
      v23 = (_QWORD*)v6[1];
      *((_DWORD*)v6 + 70) = v22;
      if (v23 != nullptr) {
        do {
          v24 = v23;
          v23 = (_QWORD*)*v23;
        } while (v23 != nullptr);
      }
      else {
        do {
          v24 = (_QWORD*)v6[2];
          v12 = v6 == (_QWORD*)*v24;
          v6 = v24;
        } while (!v12);
      }
      v6 = v24;
    } while (v24 != v7);
  }
  return result;
}

void MassMeshData_f44f60(float** a1)
{
  float* v1;
  float* v2;
  __int64 v4;
  __int64 v5;
  float* v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int64 v13;
  float* v14;
  float* v15;
  float* v16;
  bool v17;

  v2 = (float*)(a1 + 1);
  v1 = *a1;
  if (*a1 != (float*)(a1 + 1)) {
    v4 = game_script_hub_g_frame_counter_ptr[0];
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      v8 = v1[70];
      v9 = (float)(*(float*)(*(_QWORD*)v4 + 160LL) * 16.683f) / 1000.0f;
      if (v8 <= 0.0f) {
        if (*((_BYTE*)v1 + 272) != 0) {
          v12 = 1.0f;
        }
        else {
          v12 = 0.0f;
        }
      }
      else {
        v10 = v9 / v8;
        v11 = v1[69];
        if (*((_BYTE*)v1 + 272) != 0) {
          v12 = fminf(fmaxf(v10 + v11, 0.33f), 1.0f);
        }
        else {
          v12 = fminf(fmaxf(v11 - v10, 0.0f), 0.67f);
        }
      }
      v1[69] = v12;
      v13 = *((_QWORD*)v1 + 6);
      v1[60] = v9 + v1[60];
      (*(void (**)(_QWORD*))(v13 + 40))((_QWORD*)v1 + 6);
      GameRoutine_f54fe0(v1 + 12);
      v14 = *((float**)v1 + 1);
      if (((_BYTE)v1[68] & 1) != 0 || v1[69] > 0.0f) {
        if (v14 != nullptr) {
          do {
            v16 = v14;
            v14 = *(float**)v14;
          } while (v14 != nullptr);
        }
        else {
          do {
            v16 = *((float**)v1 + 2);
            v17 = v1 == *(float**)v16;
            v1 = v16;
          } while (!v17);
        }
      }
      else {
        v15 = v1;
        if (v14 != nullptr) {
          do {
            v16 = v14;
            v14 = *(float**)v14;
          } while (v14 != nullptr);
        }
        else {
          do {
            v16 = *((float**)v15 + 2);
            v17 = v15 == *(float**)v16;
            v15 = v16;
          } while (!v17);
        }
        if (*a1 == v1) {
          *a1 = v16;
        }
        v6 = a1[1];
        a1[2] = (float*)((char*)a1[2] - 1);
        GameRoutine_64dfe0(v6, v1);
        MassMeshData_Destructor((_QWORD*)v1 + 6);
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7);
      }
      v1 = v16;
    } while (v16 != v2);
  }
}

__n128 MassMeshData_f45180(__int64 a1)
{
  __int128 v2;
  __int64 v3;
  __int128 v4;
  __int64 v5;
  __int128 v6;
  __int64 v7;
  __int128 v8;
  __n128 result;
  __int64 v10;
  _QWORD v11[2];
  __int64 v12;
  __int64 v13;
  __int64 v14;
  long double v15;
  __int128 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int16 v21;
  char v22;
  char v23;
  int v24;

  v13 = 0;
  v22 = 0;
  v23 = 0;
  v14 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v12 = 0x796F6C7065440CLL;
  v24 = 24;
  v11[0] = &v24;
  v11[1] = 1;
  v15 = GameRoutine_fcc280(a1, v11);
  v16 = v2;
  v18 = 1;
  v17 = 0xB00000000LL;
  GameRoutine_f45440(a1, a1 + 8, &v12);
  if ((v12 & 1) != 0 && v14 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v13 = 0;
  v22 = 0;
  v23 = 0;
  v14 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v12 = 0x796F6C7065440CLL;
  v24 = 25;
  v11[0] = &v24;
  v11[1] = 1;
  v15 = GameRoutine_fcc280(a1, v11);
  v16 = v4;
  v18 = 1;
  v17 = 0xA00000000LL;
  GameRoutine_f45440(a1, a1 + 32, &v12);
  if ((v12 & 1) != 0 && v14 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v13 = 0;
  v22 = 0;
  v23 = 0;
  v14 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v12 = 0x796F6C7065440CLL;
  v24 = 26;
  v11[0] = &v24;
  v11[1] = 1;
  v15 = GameRoutine_fcc280(a1, v11);
  v16 = v6;
  v17 = 0xA00000000LL;
  v18 = 1;
  GameRoutine_f45440(a1, a1 + 56, &v12);
  if ((v12 & 1) != 0 && v14 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  v13 = 0;
  v22 = 0;
  v23 = 0;
  v14 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v12 = 0x796F6C7065440CLL;
  v24 = 27;
  v11[0] = &v24;
  v11[1] = 1;
  v15 = GameRoutine_fcc280(a1, v11);
  v16 = v8;
  v18 = 1;
  v17 = 0xA00000000LL;
  GameRoutine_f45440(a1, a1 + 80, &v12);
  if ((v12 & 1) != 0 && v14 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  return result;
}

void MassMeshData_f45440(__int64 a1, _QWORD* a2, __int64 a3)
{

#pragma clang fp contract(off)
  float v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int32 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  long double v17;
  double v18;
  __n128 v19;
  float v20;
  float32x4_t v21;
  float v22;
  __int64* v23;
  _QWORD* v24;
  __n128* v25;
  __int64 v26;
  __int64 v27;
  unsigned __int32 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  bool v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  _QWORD* v51;
  unsigned int v52;
  unsigned int* v53[2];
  struct {
    __int64 v54;
    unsigned __int64 v55;
    __int64 v56;
    char gap56_[8];
    __n128 v57;
    float32x4_t v58;
    unsigned __int64 v59;
    unsigned __int32 v60;
    char gap108_[4];
    __n128 v61;
    unsigned __int64 v62;
    unsigned __int8 v63;
  } v54_;
  int v64;

  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(double, "d1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v5 = -*(float*)(*GameData_212f878 + 1432);
  v52 = *(_DWORD*)(*GameData_212f878 + 1436);
  if ((*(_BYTE*)a3 & 1) != 0) {
    v7 = a1;
    fw_text_String_CopyTerminated(&v54_.v54, *(_QWORD*)(a3 + 16),
                                  *(_QWORD*)(a3 + 8)),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(double, "d1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w"));
    a1 = v7;
  }
  else {
    v6 = *(_QWORD*)(a3 + 8);
    v54_.v54 = *(_QWORD*)a3;
    v54_.v55 = v6;
    v54_.v56 = *(_QWORD*)(a3 + 16);
  }
  v8 = *(_QWORD*)(a3 + 32);
  v10 = *(_QWORD*)(a3 + 40);
  v9 = *(_QWORD*)(a3 + 48);
  v11 = *(_QWORD*)(a3 + 56);
  v12 = *(_QWORD*)(a3 + 64);
  v13 = *(_DWORD*)(a3 + 72);
  v64 = 1;
  LANES128(v54_.v57).n128_u64[0] = v8;
  LANES128(v54_.v57).n128_u64[1] = v10;
  LOBYTE(v8) = *(_BYTE*)(a3 + 104);
  LANES128(v54_.v58).n128_u64[0] = v9;
  LANES128(v54_.v58).n128_u64[1] = v11;
  v54_.v59 = v12;
  v14 = *(_QWORD*)(a3 + 88);
  v15 = *(_QWORD*)(a3 + 80);
  v54_.v60 = v13;
  v54_.v63 = v8;
  v16 = *(_QWORD*)(a3 + 96);
  LANES128(v54_.v61).n128_u64[0] = v15;
  LANES128(v54_.v61).n128_u64[1] = v14;
  v54_.v62 = v16;
  v53[0] = (unsigned int*)&v64;
  v53[1] = (_DWORD*)(((_UNKNOWN*)0x0LL) + 1);
  v17 = MapDrawConst_fcc280(a1, v53),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(double, "d1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v19 = GameRoutine_f0ea60(*(__n128*)&v17, v18, 0x1.0000000000000p+0f),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(double, "d1", "=w")),
  v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v20 = *(float*)(a3 + 44);
  v54_.v57 = v19;
  v54_.v58 = v21;
  LANES128(v19).n128_f32[0] = vmuls_lane_f32(v20, v19, 3);
  v22 = *(float*)(a3 + 60);
  v54_.v60 = 0;
  LOBYTE(v54_.v62) = 1;
  LANES128(v54_.v57).n128_u32[3] = LANES128(v19).n128_u32[0];
  LANES128(v54_.v58).n128_u32[3] = vmuls_lane_f32(v22, v21, 3);
  LANES128(v19).n128_u64[0] = __PAIR64__(LODWORD(v5), v52);
  LANES128(v19).n128_u64[1] = v52;
  v54_.v61 = v19;
  v23 = (__int64*)GameData_212d018[0];
  v24 = *(_QWORD**)GameData_212d018[0];
  v25 = *(__n128**)(*(_QWORD*)GameData_212d018[0] + 24LL);
  if ((unsigned __int64)v25 >=
      *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 32LL)) {
    v27 = PrimitiveDrawStack_f525a0(v24 + 2, (__int64)&v54_.v54),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(double, "d1", "=w")),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  else {
    if ((v54_.v54 & 1) != 0) {
      fw_text_String_CopyTerminated(
          *(__int64**)(*(_QWORD*)GameData_212d018[0] + 24LL), v54_.v56,
          v54_.v55),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(double, "d1", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    else {
      LANES128(*(v25)).n128_u64[1] = v54_.v55;
      v26 = v54_.v54;
      LANES128(v25[1]).n128_u64[0] = v54_.v56;
      LANES128(*(v25)).n128_u64[0] = v26;
    }
    v28 = v54_.v60;
    v27 = (__int64)&v25[7];
    LANES128(v25[3]).n128_u64[1] = LANES128(v54_.v58).n128_u64[1];
    v25[2] = v54_.v57;
    v29 = LANES128(v54_.v58).n128_u64[0];
    v30 = v54_.v59;
    LANES128(v25[4]).n128_u32[2] = v28;
    LANES128(v25[4]).n128_u64[0] = v30;
    LANES128(v25[3]).n128_u64[0] = v29;
    v25[5] = v54_.v61;
    v31 = v54_.v62;
    LANES128(v25[6]).n128_u8[8] = v54_.v63;
    LANES128(v25[6]).n128_u64[0] = v31;
  }
  v32 = v24[2];
  v24[3] = v27;
  v24[1] = 0x6DB6DB6DB6DB6DB7LL * ((v27 - v32) >> 4) - 1;
  v34 = a2 + 1;
  v33 = (_QWORD*)*a2;
  if ((_QWORD*)*a2 != a2 + 1) {
    do {
      PrimitiveDrawStack_f51430(*v23, (__int64)(v33 + 6)),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(double, "d1", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v39 = (_QWORD*)v33[1];
      if (v39 != nullptr) {
        do {
          v40 = v39;
          v39 = (_QWORD*)*v39;
        } while (v39 != nullptr);
      }
      else {
        do {
          v40 = (_QWORD*)v33[2];
          v41 = v33 == (_QWORD*)*v40;
          v33 = v40;
        } while (!v41);
      }
      v33 = v40;
    } while (v40 != v34);
  }
  v35 = *v23;
  *(_QWORD*)(*v23 + 8) = 1024;
  if ((v54_.v54 & 1) != 0 && v54_.v56 != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v36),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(double, "d1", "=w")),
        v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w"));
    v35 = *v23;
  }
  v37 = *(_QWORD*)(v35 + 24);
  if (v37 >= *(_QWORD*)(v35 + 32)) {
    v42 = PrimitiveDrawStack_f525a0((__int64*)(v35 + 16), a3),
    v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(double, "d1", "=w")),
    v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w"));
  }
  else {
    if ((*(_BYTE*)a3 & 1) != 0) {
      fw_text_String_CopyTerminated(*(__int64**)(v35 + 24), *(_QWORD*)(a3 + 16),
                                    *(_QWORD*)(a3 + 8)),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(double, "d1", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    else {
      *(_QWORD*)(v37 + 8) = *(_QWORD*)(a3 + 8);
      v38 = *(_QWORD*)a3;
      *(_QWORD*)(v37 + 16) = *(_QWORD*)(a3 + 16);
      *(_QWORD*)v37 = v38;
    }
    v43 = *(_DWORD*)(a3 + 72);
    v42 = v37 + 112;
    *(_QWORD*)(v37 + 56) = *(_QWORD*)(a3 + 56);
    *(_QWORD*)(v37 + 40) = *(_QWORD*)(a3 + 40);
    *(_QWORD*)(v37 + 32) = *(_QWORD*)(a3 + 32);
    v44 = *(_QWORD*)(a3 + 48);
    v45 = *(_QWORD*)(a3 + 64);
    *(_DWORD*)(v37 + 72) = v43;
    *(_QWORD*)(v37 + 64) = v45;
    *(_QWORD*)(v37 + 48) = v44;
    v46 = *(_QWORD*)(a3 + 88);
    *(_QWORD*)(v37 + 80) = *(_QWORD*)(a3 + 80);
    *(_QWORD*)(v37 + 88) = v46;
    v47 = *(_QWORD*)(a3 + 96);
    *(_BYTE*)(v37 + 104) = *(_BYTE*)(a3 + 104);
    *(_QWORD*)(v37 + 96) = v47;
  }
  v48 = *(_QWORD*)(v35 + 16);
  *(_QWORD*)(v35 + 24) = v42;
  *(_QWORD*)(v35 + 8) = 0x6DB6DB6DB6DB6DB7LL * ((v42 - v48) >> 4) - 1;
  v49 = (_QWORD*)*a2;
  if (v49 != v34) {
    do {
      PrimitiveDrawStack_f51430(*v23, (__int64)(v49 + 6)),
          v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(double, "d1", "=w")),
          v21 = COERCE_AS(__typeof__(v21), PSEUDO_REGISTER(__n128, "v1", "=w"));
      v50 = (_QWORD*)v49[1];
      if (v50 != nullptr) {
        do {
          v51 = v50;
          v50 = (_QWORD*)*v50;
        } while (v50 != nullptr);
      }
      else {
        do {
          v51 = (_QWORD*)v49[2];
          v41 = v49 == (_QWORD*)*v51;
          v49 = v51;
        } while (!v41);
      }
      v49 = v51;
    } while (v51 != v34);
  }
  *(_QWORD*)(*v23 + 8) = 1024;
}

__int64* MassMeshData_f45860(__int64** a1, unsigned __int64* a2, _QWORD** a3)
{
  __int64* v3;
  __int64* v4;
  unsigned __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int128 v11;
  __int64 v12;
  __int64* v13;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v4 = (__int64*)(a1 + 1);
  v3 = a1[1];
  if (v3 != nullptr) {
    v7 = *a2;
    while (1) {
      while (1) {
        v8 = v3;
        v9 = v3[4];
        if (v7 >= v9) {
          break;
        }
        v3 = (__int64*)*v8;
        v4 = v8;
        if (*v8 == 0) {
          goto LABEL_9;
        }
      }
      if (v9 >= v7) {
        return v8;
      }
      v3 = (__int64*)v8[1];
      if (v3 == nullptr) {
        v4 = v8 + 1;
        goto LABEL_9;
      }
    }
  }
  else {
    v8 = (__int64*)(a1 + 1);
  LABEL_9:
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         416, 16, 0);
    *(_QWORD*)(v10 + 32) = **a3;
    game_map_f54910(v10 + 48);
    *(_WORD*)(v10 + 292) = 0;
    *(_QWORD*)(v10 + 48) = game_map_MassMeshData_vtable;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a55c0) != 0) {
      v15 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a55a0 =
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55a0 + 1) = v15;
      v16 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                        (_QWORD)GameData_212c2a0);
      *(_QWORD*)&GameData_21a55b0 =
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                      (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55b0 + 1) = v16;
      v17 = *((_QWORD*)GameData_212c2a0 + 1);
      *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
      *((_QWORD*)&GameData_21a5580 + 1) = v17;
      v18 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a5590 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a5590 + 1) = v18;
      __cxa_guard_release(&GameData_21a55c0);
    }
    v11 = GameData_21a55a0;
    *(_DWORD*)(v10 + 368) = 0;
    v12 = v10;
    *(_BYTE*)(v10 + 372) = 0;
    *(_BYTE*)(v10 + 376) = 0;
    *(_DWORD*)(v10 + 400) = 0;
    *(_QWORD*)(v10 + 384) = 0;
    *(_QWORD*)(v10 + 392) = 0;
    *(_QWORD*)v10 = 0;
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = v8;
    *(_OWORD*)(v10 + 336) = v11;
    *(_OWORD*)(v10 + 352) = GameData_21a55b0;
    *(_OWORD*)(v10 + 304) = GameData_21a5580;
    *(_OWORD*)(v10 + 320) = GameData_21a5590;
    *v4 = v10;
    v13 = (__int64*)**a1;
    if (v13 != nullptr) {
      *a1 = v13;
      v12 = *v4;
    }
    fw_containers_BalanceAfterInsert(a1[1], v12);
    a1[2] = (__int64*)((char*)a1[2] + 1);
  }
  return (__int64*)v10;
}

#pragma GCC visibility pop
