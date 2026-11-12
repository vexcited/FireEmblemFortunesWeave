#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_17db4d0(__int64*, _QWORD*);
__attribute__((swiftcall)) void spine_cpp_src_spine_53bd0(PSEUDO_X8, int*);
__int64 GameRoutine_1b0(unsigned __int64);
__int64 GameRoutine_20(void);
__int64 GameRoutine_2b0();
__int64 GameRoutine_55b720(__int64);
__int64 PxGetBroadcastAllocator(_BYTE*);
__int64 __nnmusl_init_dso(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                          _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_oe_GetCurrentGraphicsScale(void);
__int64 nn_oe_GetOperationMode(void);
__int64 nn_oe_GetPerformanceMode(void);
__int64 nn_ro_ProtectRelro(__int64, __int64, __int64, __int64, __int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_1f50948;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_212bd48;
extern _UNKNOWN GameData_212bd49;
extern _UNKNOWN GameData_2137fe8;
extern _UNKNOWN GameData_2177008;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83510;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int64 (**GameData_1a652b0)();
extern __int64 (*GameData_1f50000[])();
extern __int64 (*GameData_1fd04a0[])();
extern __int64 (*GameData_2138000[])();
extern __int64 (*base_time_Step_vtable[])();
extern __int64 (*eft_Emitter_vtable)();
extern __int64* GameData_1a0d068;
extern __int64 GameData_21fdf18[];
extern __int64 GameData_220b680;
extern __int64 GameData_2265a18;
extern __int64 GameData_2265a20;
extern __int64 GameData_2265a28;
extern __int64 GameData_2265a30;
extern __int64 GameData_2265a38;
extern __int64 GameData_2265a40;
extern __int64 GameData_2265a48;
extern __int64 GameData_2265a50;
extern __int64 GameData_2265a58;
extern __int64 GameData_2265a60;
extern __int64 GameData_2265a70;
extern __int64 GameData_2265a78;
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64 game_sound_g_game_sound;
extern char GameData_1a9f09e;
extern char GameData_2266114;
extern char GameData_226b000;
extern int GameData_1a09b2c;
extern int GameData_2140000;
extern int GameData_21664d4;
extern int GameData_21664d8;
extern int GameData_21664dc;
extern int GameData_21664e0;
extern int GameData_21759e8;
extern int GameData_2265a68;
extern int GameData_2266110;
extern int GameData_2266118;
void __attribute__((noreturn)) GameRoutine_1918370();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_65c760();
void nn_detail_UnexpectedDefaultImpl();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_40();
__int64 game_55b770(__int64* a1);
__int64 game_5c52f0(__int64 result);
__int64 game_bc9630(__int64 a1, int a2, _QWORD* a3, __int64 a4, __int64 a5,
                    int a6);
float32x4_t game_bcfba0(float32x4_t* a1);
__int64 game_17d2720();
__int64 game_17d4c00(unsigned int a1);
__int64 game_17e3f30();
void game_1917b30(_QWORD* a1, __int64 a2);
void game_1917d70(_QWORD* a1, __int64 a2);

__int64 game_40()
{
  __int64 result;
  __int64 (**v1)();

  if (GameData_2140000 != 0 ||
      (result = __nnmusl_init_dso(
           ((_UNKNOWN*)0x0LL), &GameData_1a09b2c, &GameData_212bd48,
           &GameData_212bd48, (char*)((_UNKNOWN*)0x0LL) + 1, 34782537, 34782536,
           34782536, (char*)((_UNKNOWN*)0x0LL) + 1, &GameData_212bd49,
           &GameData_2137fe8, 34839056, &GameData_1a0d068, 27677360, 0,
           ((_UNKNOWN*)0x0LL), &GameData_1a652b0, 27697376, ((_UNKNOWN*)0x0LL),
           ((_UNKNOWN*)0x0LL), &GameData_212bd48),
       GameData_2140000 = result, (_DWORD)result != 1)) {
    GameRoutine_20();
    result = nn_ro_ProtectRelro(32833536, (__int64)GameData_2138000, 34865152,
                                (__int64)&GameData_2177008, 27316312);
    if (GameData_1f50000 < (__int64 (**)(void))&GameData_1f50948) {
      v1 = GameData_1f50000;
      do {
        result = GameRoutine_1b0((unsigned __int64)v1++);
      } while (v1 < (__int64 (**)(void))&GameData_1f50948);
    }
  }
  return result;
}

__int64 game_55b770(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  const char* v5;
  __int64 v6;
  __int64 result;
  _BYTE v8[4];

  v2 = PxGetBroadcastAllocator(nullptr);
  v3 = (*(__int64 (**)(__int64, __int64, char*, const char*, __int64))(
      *(_QWORD*)v2 + 16LL))(
      v2, 16, &GameData_1a9f09e,
      "/Inside/Lib/PhysX/O/physx/source/foundation/switch/FdSwitchMutex.cpp",
      106);
  *a1 = v3;
  v4 = PxGetBroadcastAllocator(v8);
  if (v8[0] != 0) {
    v5 = "static const char "
         "*physx::PxReflectionAllocator<physx::PxMutexImpl>::getName(bool) [T "
         "= physx::PxMutexImpl]";
  }
  else {
    v5 = "<allocation names disabled>";
  }
  v6 = (*(__int64 (**)(__int64, __int64, const char*, const char*, __int64))(
      *(_QWORD*)v4 + 16LL))(
      v4, 32, v5,
      "/Inside/Lib/PhysX/O/physx/compiler/vc17ounce64/sdk_source_bin/../../../"
      "include\\foundation/PxMutex.h",
      112);
  *(_QWORD*)v3 = v6;
  result = GameRoutine_55b720(v6);
  *(_DWORD*)(v3 + 8) = 0;
  return result;
}

__int64 game_5c52f0(__int64 result)
{
  unsigned int v1;
  unsigned int v2;
  unsigned int v3;

  v1 = GameData_21664d4 ^ (GameData_21664d4 << 11);
  GameData_21664d4 = GameData_21664d8;
  GameData_21664d8 = GameData_21664dc;
  GameData_21664dc = GameData_21664e0;
  GameData_21664e0 ^= (v1 >> 8) ^ ((unsigned int)GameData_21664e0 >> 19) ^ v1;
  *(_WORD*)result = GameData_21664e0;
  v2 = GameData_21664d4 ^ (GameData_21664d4 << 11);
  GameData_21664d4 = GameData_21664d8;
  GameData_21664d8 = GameData_21664dc;
  GameData_21664dc = GameData_21664e0;
  GameData_21664e0 ^= (v2 >> 8) ^ ((unsigned int)GameData_21664e0 >> 19) ^ v2;
  *(_WORD*)(result + 2) = GameData_21664e0;
  v3 = GameData_21664d4 ^ (GameData_21664d4 << 11);
  GameData_21664d4 = GameData_21664d8;
  GameData_21664d8 = GameData_21664dc;
  GameData_21664dc = GameData_21664e0;
  GameData_21664e0 ^= (v3 >> 8) ^ ((unsigned int)GameData_21664e0 >> 19) ^ v3;
  *(_DWORD*)(result + 4) = GameData_21664e0;
  return result;
}

__int64 game_bc9630(__int64 a1, int a2, _QWORD* a3, __int64 a4, __int64 a5,
                    int a6)
{
  __int64 v7;
  __int128 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  struct {
    __int64 v15;
    __int64 v16;
  } v15_;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_WORD*)(a1 + 128) = 1;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 136) = a1 + 136;
  *(_QWORD*)(a1 + 144) = a1 + 136;
  *(_QWORD*)a1 = &eft_Emitter_vtable;
  *(_QWORD*)(a1 + 8) = 0;
  *(_OWORD*)(a1 + 32) = GameData_1a837f0;
  *(_QWORD*)(a1 + 160) = *a3;
  v7 = a3[1];
  *(_QWORD*)(a1 + 168) = v7;
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)&v8 = 0x3F8000003F800000LL;
  *((_QWORD*)&v8 + 1) = 0x3F8000003F800000LL;
  *(_DWORD*)(a1 + 176) = a2;
  *(_BYTE*)(a1 + 183) = 0;
  *(_QWORD*)(a1 + 192) = a4;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_WORD*)(a1 + 180) = 256;
  *(_WORD*)(a1 + 184) = -1;
  *(_OWORD*)(a1 + 208) = v8;
  *(_DWORD*)(a1 + 240) = *(_DWORD*)(a5 + 288);
  v9 = *(_DWORD*)(a5 + 16);
  *(_DWORD*)(a1 + 340) = -1;
  *(_BYTE*)(a1 + 288) = 0;
  *(_BYTE*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_WORD*)(a1 + 272) = 0;
  *(_WORD*)(a1 + 336) = 1;
  *(_BYTE*)(a1 + 338) = 0;
  *(_BYTE*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_DWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_DWORD*)(a1 + 420) = a6;
  *(_BYTE*)(a1 + 424) = 1;
  *(_DWORD*)(a1 + 416) = 1065353216;
  *(_DWORD*)(a1 + 244) = v9;
  v10 = *(char*)(a5 + 249);
  *(_BYTE*)(a1 + 432) = 0;
  *(_OWORD*)(a1 + 448) = GameData_1a837f0;
  *(_WORD*)(a1 + 464) = 256;
  *(_DWORD*)(a1 + 428) = v10;
  *(_QWORD*)(a1 + 436) = 0;
  *(_DWORD*)(a1 + 443) = 0;
  v11 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 88LL;
  v12 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 56, 16, 0);
  *(_DWORD*)(v12 + 32) = 0;
  *(_QWORD*)(v12 + 48) = v11;
  *(_QWORD*)v12 = GameData_1fd04a0;
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 24) = base_time_Step_vtable;
  *(_QWORD*)(v12 + 36) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 224) = v12 + 24;
  *(_QWORD*)(a1 + 232) = v12;
  v15_.v15 = v12 + 24;
  v15_.v16 = v12;
  *(_QWORD*)(v12 + 16) = 0;
  v13 = as_g_base_frame_counter;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  GameRoutine_17db4d0((__int64*)(v13 + 224), &v15_.v15);
  result = v15_.v16;
  if (v15_.v16 != 0) {
    return std___1___shared_weak_count___release_weak(v15_.v16);
  }
  return result;
}

float32x4_t game_bcfba0(float32x4_t* a1)
{
  int32x2_t v1;
  unsigned __int8 v2;
  float32x4_t v3;
  float32x2_t v4;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  int8x16_t v10;
  int8x16_t v11;
  float32x4_t v12;
  int8x16_t v13;
  float32x4_t v14;
  int8x16_t v15;
  int8x16_t v16;
  float32x4_t v17;
  int32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  int32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  int8x16_t v31;
  int8x16_t v32;
  int8x16_t v33;
  int8x16_t v34;
  int8x16_t v35;
  float32x4_t v36;
  int8x16_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  int8x16_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  int8x16_t v54;
  int8x16_t v55;
  int8x16_t v56;
  float32x4_t v57;
  int8x16_t v58;
  float32x4_t v59;
  float32x4_t v60;
  int8x16_t v61;
  float32x4_t v62;
  int8x16_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t result;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (LANES128(a1[8]).n128_u8[0] == 1) {
    v2 = LANES128(a1[8]).n128_u8[1];
    LANES128(a1[8]).n128_u8[0] = 0;
    if ((v2 & 1) == 0) {
      v3 = a1[3];
      LANES64(v4).n64_u32[0] = 0;
      LANES128(v5).n128_u64[0] = 0;
      v6 = vdupq_n_s32(0x3E22F983u);
      LANES64(v4).n64_u32[1] = HIDWORD(LANES128(a1[2]).n128_u64[0]);
      LANES128(v5).n128_u64[1] = (unsigned int)LANES128(a1[2]).n128_u64[1];
      v7 = vdupq_n_s32(0x40C90FDBu);
      v87 = a1[1];
      v8 = vdupq_n_s32(0x3FC90FDBu);
      v85 = vdupq_n_s32(0x40490FDBu);
      v86 = v8;
      v9 = vmlsq_f32(
          COERCE_AS(float32x4_t, COERCE_UNSIGNED_INT(0x1.1df46a0000000p-6f *
                                                     LANES128(v3).n128_f32[0])),
          v7,
          vrndnq_f32(vmulq_f32(
              COERCE_AS(float32x4_t,
                        COERCE_UNSIGNED_INT(0x1.1df46a0000000p-6f *
                                            LANES128(v3).n128_f32[0])),
              v6)));
      v10 = vcgtq_f32(v9, v8);
      v11 = vbslq_s8(v10, vsubq_f32(v85, v9), v9);
      v12 = vdupq_n_s32(0xBFC90FDB);
      v13 = vmvnq_s8(v10);
      v14 = vdupq_n_s32(0xC0490FDB);
      v15 = vcgtq_f32(v12, v11);
      v16 = vbicq_s8(v13, v15);
      PSEUDO_LOW_LANE128(v13, n128_u32, *(_DWORD*)GameData_212c190);
      v17 = vbslq_s8(v15, vsubq_f32(v14, v11), v11);
      v18 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
      v19 = vmulq_f32(v17, v17);
      v20 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 0);
      v21 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
      PSEUDO_LOW_LANE128(
          v15, n128_f32,
          -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c190))));
      v22 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v15).n128_u64[0]), 0);
      PSEUDO_LOW_LANE64(
          v1, n64_f32,
          -COERCE_FLOAT(HIDWORD(*(_QWORD*)((char*)((_UNKNOWN*)0x4LL) +
                                           (_QWORD)GameData_212c188))));
      v23 = vdupq_lane_s32(v1, 0);
      v24 = vdupq_laneq_s32(v18, 2);
      LANES128(v18).n128_f32[0] = -LANES128(v18).n128_f32[3];
      v25 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 0);
      LANES128(v18).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v18).n128_u64[1] = 0x3F8000003F800000LL;
      v26 = vmulq_f32(
          v17,
          vmlaq_f32(
              v18, v19,
              vmlaq_f32(
                  v25, v19,
                  vmlaq_f32(v24, v19,
                            vmlaq_f32(v22, v19,
                                      vmlsq_lane_f32(
                                          v20, v19,
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v13).n128_u64[0]),
                                          0))))));
      v27 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v21).n128_u64[0]), 0);
      PSEUDO_LOW_LANE128(v17, n128_u32, *(_DWORD*)GameData_212c188);
      v28 = vdupq_laneq_s32(v21, 2);
      LANES128(v21).n128_f32[0] = -LANES128(v21).n128_f32[3];
      v29 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v21).n128_u64[0]), 0);
      v30 = vmlaq_f32(
          v18, v19,
          vmlaq_f32(
              v29, v19,
              vmlaq_f32(
                  v28, v19,
                  vmlaq_f32(v23, v19,
                            vmlsq_lane_f32(v27, v19,
                                           COERCE_AS(float32x2_t,
                                                     LANES128(v17).n128_u64[0]),
                                           0)))));
      v31 = vbslq_s8(v16, v30, vnegq_f32(v30));
      LANES128(v19).n128_u32[0] = 0;
      LANES128(v19).n128_u32[1] =
          vmuls_lane_f32(0x1.1df46a0000000p-6f,
                         COERCE_AS(float32x2_t, LANES128(v3).n128_u64[0]), 1);
      v32 = vmlsq_f32(
          COERCE_AS(float32x4_t, LANES128(v19).n128_u64[0]), v7,
          vrndnq_f32(vmulq_f32(
              COERCE_AS(float32x4_t, LANES128(v19).n128_u64[0]), v6)));
      v33 = vcgtq_f32(v32, v8);
      v34 = vbslq_s8(v33, vsubq_f32(v85, v32), v32);
      v35 = vcgtq_f32(v12, v34);
      v36 = vbslq_s8(v35, vsubq_f32(v14, v34), v34);
      v37 = vbicq_s8(vmvnq_s8(v33), v35);
      v38 = vmulq_f32(v36, v36);
      v39 = vmlaq_f32(
          v18, v38,
          vmlaq_f32(
              v25, v38,
              vmlaq_f32(
                  v24, v38,
                  vmlaq_f32(v22, v38,
                            vmlsq_lane_f32(v20, v38,
                                           COERCE_AS(float32x2_t,
                                                     LANES128(v13).n128_u64[0]),
                                           0)))));
      v40 = vmlaq_f32(
          v18, v38,
          vmlaq_f32(
              v29, v38,
              vmlaq_f32(
                  v28, v38,
                  vmlaq_f32(v23, v38,
                            vmlsq_lane_f32(v27, v38,
                                           COERCE_AS(float32x2_t,
                                                     LANES128(v17).n128_u64[0]),
                                           0)))));
      LANES128(v38).n128_u64[0] =
          LANES128(v31).n128_u32[1] |
          ((unsigned __int64)LANES128(v31).n128_u32[1] << 32);
      LANES128(v33).n128_u64[0] =
          LANES128(v31).n128_u32[2] |
          ((unsigned __int64)LANES128(v26).n128_u32[2] << 32);
      LANES128(v38).n128_u64[1] = LANES128(v26).n128_u32[1];
      v41 = vbslq_s8(v37, v40, vnegq_f32(v40));
      LANES128(v35).n128_u64[0] = LANES128(v33).n128_u64[0];
      LANES128(v35).n128_u64[1] = 3212836864LL;
      v42 = vmulq_f32(v38, v35);
      LANES128(v35).n128_u64[0] =
          LANES128(v26).n128_u32[1] |
          ((unsigned __int64)LANES128(v26).n128_u32[1] << 32);
      LANES128(v35).n128_u64[1] = LANES128(v31).n128_u32[1];
      LANES128(v33).n128_u64[1] = 1065353216;
      v43 = vmulq_f32(v35, v33);
      PSEUDO_LOW_LANE128(v8, n128_u64, __ROR8__(LANES128(v33).n128_u64[0], 32));
      v44 = vaddq_f32(vmulq_n_f32(v43, LANES128(v26).n128_f32[0]),
                      vmulq_f32(vmulq_n_f32(v8, LANES128(v31).n128_f32[0]),
                                COERCE_AS(float32x4_t, GameData_1a82940)));
      LANES128(v45).n128_u64[0] = 0;
      v46 = vaddq_f32(vmulq_n_f32(v43, LANES128(v31).n128_f32[0]),
                      vmulq_f32(vmulq_n_f32(v8, LANES128(v26).n128_f32[0]),
                                COERCE_AS(float32x4_t, GameData_1a83510)));
      v47 = vmulq_f32(v36, v39);
      LANES128(v45).n128_u64[1] =
          COERCE_UNSIGNED_INT(vmuls_lane_f32(0x1.1df46a0000000p-6f, v3, 2));
      LANES128(v43).n128_u64[0] =
          LANES128(v41).n128_u32[1] |
          ((unsigned __int64)LANES128(v41).n128_u32[1] << 32);
      LANES128(v3).n128_u64[0] =
          LANES128(v41).n128_u32[2] |
          ((unsigned __int64)LANES128(v47).n128_u32[2] << 32);
      v48 = vmlsq_f32(v45, v7, vrndnq_f32(vmulq_f32(v45, v6)));
      LANES128(v43).n128_u64[1] = LANES128(v47).n128_u32[1];
      LANES128(v6).n128_u64[0] = LANES128(v3).n128_u64[0];
      LANES128(v3).n128_u64[1] = 1065353216;
      LANES128(v6).n128_u64[1] = 3212836864LL;
      v49 = vmulq_f32(v43, v6);
      LANES128(v43).n128_u64[0] =
          LANES128(v47).n128_u32[1] |
          ((unsigned __int64)LANES128(v47).n128_u32[1] << 32);
      LANES128(v43).n128_u64[1] = LANES128(v41).n128_u32[1];
      v50 = vmulq_f32(v43, v3);
      PSEUDO_LOW_LANE128(v7, n128_u64, __ROR8__(LANES128(v3).n128_u64[0], 32));
      v51 = vmulq_f32(vmulq_n_f32(v7, LANES128(v41).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a82940));
      v52 = vaddq_f32(vmulq_n_f32(v50, LANES128(v41).n128_f32[0]),
                      vmulq_f32(vmulq_n_f32(v7, LANES128(v47).n128_f32[0]),
                                COERCE_AS(float32x4_t, GameData_1a83510)));
      v53 = vaddq_f32(vmulq_n_f32(v50, LANES128(v47).n128_f32[0]), v51);
      v54 = vcgtq_f32(v48, v86);
      v55 = vbslq_s8(v54, vsubq_f32(v85, v48), v48);
      v56 = vcgtq_f32(v12, v55);
      v57 = vbslq_s8(v56, vsubq_f32(v14, v55), v55);
      v58 = vbicq_s8(vmvnq_s8(v54), v56);
      v59 = vmulq_f32(v57, v57);
      v60 = vmlaq_f32(
          v18, v59,
          vmlaq_f32(
              v25, v59,
              vmlaq_f32(
                  v24, v59,
                  vmlaq_f32(v22, v59,
                            vmlsq_lane_f32(v20, v59,
                                           COERCE_AS(float32x2_t,
                                                     LANES128(v13).n128_u64[0]),
                                           0)))));
      v61 = vmlaq_f32(
          v18, v59,
          vmlaq_f32(
              v29, v59,
              vmlaq_f32(
                  v28, v59,
                  vmlaq_f32(v23, v59,
                            vmlsq_lane_f32(v27, v59,
                                           COERCE_AS(float32x2_t,
                                                     LANES128(v17).n128_u64[0]),
                                           0)))));
      v62 = vmulq_f32(v57, v60);
      v63 = vbslq_s8(v58, v61, vnegq_f32(v61));
      LANES128(v58).n128_u64[0] =
          LANES128(v63).n128_u32[1] |
          ((unsigned __int64)LANES128(v63).n128_u32[1] << 32);
      LANES128(v57).n128_u64[0] =
          LANES128(v63).n128_u32[2] |
          ((unsigned __int64)LANES128(v62).n128_u32[2] << 32);
      LANES128(v59).n128_u64[0] = LANES128(v57).n128_u64[0];
      LANES128(v57).n128_u64[1] = 1065353216;
      LANES128(v58).n128_u64[1] = LANES128(v62).n128_u32[1];
      LANES128(v59).n128_u64[1] = 3212836864LL;
      v64 = vmulq_f32(v58, v59);
      LANES128(v58).n128_u64[0] =
          LANES128(v62).n128_u32[1] |
          ((unsigned __int64)LANES128(v62).n128_u32[1] << 32);
      LANES128(v58).n128_u64[1] = LANES128(v63).n128_u32[1];
      v65 = vmulq_f32(v58, v57);
      v66 = vmulq_n_f32(v65, LANES128(v62).n128_f32[0]);
      v67 = vmulq_n_f32(v65, LANES128(v63).n128_f32[0]);
      v68 = vmlaq_f32(
          vmlaq_f32(vmulq_n_f32(v42, COERCE_FLOAT(LANES128(a1[2]).n128_u64[0])),
                    COERCE_AS(float32x4_t, 0LL), v44),
          COERCE_AS(float32x4_t, 0LL), v46);
      v69 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v49, LANES128(v68).n128_f32[0]), v53,
                         COERCE_AS(float32x2_t, LANES128(v68).n128_u64[0]), 1),
          v52, v68, 2);
      v70 = vmlaq_f32(
          vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v42), v44, v4, 1),
          COERCE_AS(float32x4_t, 0), v46);
      v71 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v49, LANES128(v70).n128_f32[0]), v53,
                         COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]), 1),
          v52, v70, 2);
      v72 = vmlaq_laneq_f32(vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v42),
                                      COERCE_AS(float32x4_t, 0), v44),
                            v46, v5, 2);
      v73 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v49, LANES128(v72).n128_f32[0]), v53,
                         COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]), 1),
          v52, v72, 2);
      v74 = vaddq_f32(
          vmlaq_f32(vmlaq_f32(vmulq_f32(v42, COERCE_AS(float32x4_t, 0)),
                              COERCE_AS(float32x4_t, 0), v44),
                    COERCE_AS(float32x4_t, 0), v46),
          COERCE_AS(float32x4_t, 0));
      v75 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v49, LANES128(v74).n128_f32[0]), v53,
                         COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]), 1),
          v52, v74, 2);
      PSEUDO_LOW_LANE128(
          v74, n128_u64,
          __ROR8__(LANES128(v63).n128_u32[2] |
                       ((unsigned __int64)LANES128(v62).n128_u32[2] << 32),
                   32));
      v76 = vmulq_n_f32(v74, LANES128(v63).n128_f32[0]);
      v77 = vaddq_f32(v75, COERCE_AS(float32x4_t, 0));
      v78 = vaddq_f32(v66,
                      vmulq_f32(v76, COERCE_AS(float32x4_t, GameData_1a82940)));
      v79 =
          vaddq_f32(v67, vmulq_f32(vmulq_n_f32(v74, LANES128(v62).n128_f32[0]),
                                   COERCE_AS(float32x4_t, GameData_1a83510)));
      v80 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v64, LANES128(v71).n128_f32[0]), v78,
                         COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]), 1),
          v79, v71, 2);
      v81 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v64, LANES128(v69).n128_f32[0]), v78,
                         COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]), 1),
          v79, v69, 2);
      v82 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v64, LANES128(v73).n128_f32[0]), v78,
                         COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]), 1),
          v79, v73, 2);
      v83 = vaddq_f32(
          vmlaq_laneq_f32(
              vmlaq_lane_f32(vmulq_n_f32(v64, LANES128(v77).n128_f32[0]), v78,
                             COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0]),
                             1),
              v79, v77, 2),
          COERCE_AS(float32x4_t, 0));
      a1[4] = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                     LANES128(v81).n128_f32[0]),
                         COERCE_AS(float32x4_t, GameData_1a83610),
                         COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v81, 2);
      a1[5] = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                     LANES128(v80).n128_f32[0]),
                         COERCE_AS(float32x4_t, GameData_1a83610),
                         COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v80, 2);
      result = vaddq_f32(
          v87, vmlaq_laneq_f32(
                   vmlaq_lane_f32(
                       vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v83).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0]), 1),
                   COERCE_AS(float32x4_t, GameData_1a83090), v83, 2));
      a1[6] = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                     LANES128(v82).n128_f32[0]),
                         COERCE_AS(float32x4_t, GameData_1a83610),
                         COERCE_AS(float32x2_t, LANES128(v82).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v82, 2);
      a1[7] = result;
    }
  }
  return result;
}

__int64 game_17d2720()
{
  GameRoutine_2b0();
  GameData_2265a38 = 0;
  GameData_2265a18 = 0;
  GameData_2265a20 = 0;
  GameData_2265a40 = 0;
  GameData_2265a48 = 0;
  GameData_2265a50 = 0;
  GameData_2265a58 = 0;
  GameData_2265a60 = 0;
  GameData_2265a28 = 0;
  GameData_2265a30 = (__int64)&GameData_2265a38;
  GameData_2265a68 = 1065353216;
  GameData_2265a70 = 0;
  GameData_2265a78 = 0;
  return GameRoutine_2b0();
}

__int64 game_17d4c00(unsigned int a1)
{
  if (a1 >= 9) {
    nn_detail_UnexpectedDefaultImpl();
  }
  return a1 | 0x40000000;
}

__int64 game_17e3f30()
{
  int OperationModeEv;
  char v1;
  __int64 v2;
  __int64 result;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  char v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  int v17;
  int v18;
  int v19;

  OperationModeEv = nn_oe_GetOperationMode();
  GameData_21759e8 = OperationModeEv;
  if (OperationModeEv == 1) {
    GameData_226b000 = 0;
    v2 = game_sound_g_game_sound;
    if (game_sound_g_game_sound == 0) {
      goto LABEL_8;
    }
    v1 = 0;
  }
  else if (OperationModeEv != 0 ||
           (v1 = 1, GameData_226b000 = 1, v2 = game_sound_g_game_sound,
            game_sound_g_game_sound == 0)) {
  LABEL_8:
    result = nn_oe_GetPerformanceMode();
    if ((_DWORD)result == 1) {
      GameData_2266114 = 0;
      result = nn_oe_GetCurrentGraphicsScale();
      LODWORD(v4) = (unsigned __int8)GameData_2266114;
      GameData_2266118 = result;
      v5 = GameData_2266110;
      if ((_DWORD)result != 0 || GameData_2266114 != 0) {
        v6 = (unsigned __int8)GameData_2266114 ^ 1;
        if ((_DWORD)result != 1 || (v6 & 1) == 0) {
          if ((_DWORD)result != 2 || (v6 & 1) == 0) {
          LABEL_25:
            v7 = result | v6;
            if ((_DWORD)result == 1) {
              v8 = v4;
            }
            else {
              v8 = 0;
            }
            if ((((_DWORD)result == 2) & (unsigned __int8)v4) != 0) {
              LODWORD(v4) = 5;
            }
            else {
              LODWORD(v4) = 3;
            }
            if ((v8 & 1) != 0) {
              LODWORD(v4) = 4;
            }
            if (v7 == 0) {
              LODWORD(v4) = 3;
            }
            goto LABEL_35;
          }
          goto LABEL_24;
        }
        goto LABEL_21;
      }
    }
    else {
      if ((_DWORD)result != 0) {
        return result;
      }
      GameData_2266114 = 1;
      result = nn_oe_GetCurrentGraphicsScale();
      LODWORD(v4) = (unsigned __int8)GameData_2266114;
      GameData_2266118 = result;
      v5 = GameData_2266110;
      if ((_DWORD)result != 0 || GameData_2266114 != 0) {
        v6 = (unsigned __int8)GameData_2266114 ^ 1;
        if ((_DWORD)result != 1 || (v6 & 1) == 0) {
          if ((_DWORD)result != 2 || (v6 & 1) == 0) {
            goto LABEL_25;
          }
        LABEL_24:
          LODWORD(v4) = 2;
          goto LABEL_35;
        }
      LABEL_21:
        LODWORD(v4) = 1;
      }
    }
  LABEL_35:
    if (v5 != 0) {
      v4 = (unsigned int)v4;
    }
    else {
      v4 = 5;
    }
    v9 = (unsigned int)v4 < 2 && v5 == 1;
    v10 = game_g_frame_clock;
    v11 = 3;
    if (!v9) {
      v11 = v4;
    }
    v12 = &GameData_21fdf18[2 * v11];
    v14 = *v12;
    v13 = v12[1];
    if (v13 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                memory_order_relaxed);
    }
    v15 = *(_QWORD*)(v10 + 16624);
    *(_QWORD*)(v10 + 16616) = v14;
    *(_QWORD*)(v10 + 16624) = v13;
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      result = std___1___shared_weak_count___release_weak_alt1(v15);
    }
    v16 = *(int**)(v10 + 16616);
    if (v16 == nullptr) {
      v16 = *(int**)(v10 + 16632);
    }
    v17 = v16[3];
    *(_DWORD*)(v10 + 13320) = v16[2];
    *(_DWORD*)(v10 + 13324) = v17;
    v19 = *v16;
    v18 = v16[1];
    *(_DWORD*)(v10 + 13328) = v19;
    *(_DWORD*)(v10 + 13332) = v18;
    return result;
  }
  *(_BYTE*)(v2 + 92) = v1;
  goto LABEL_8;
}

void game_1917b30(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  struct {
    int v35;
    char gap12_[4];
    unsigned __int64 v36;
    __int64 v37;
  } v35_;

  v35_.v35 = 1;
  v35_.v36 = (a2 & 0xFFFFFFFFFFFFE000LL) + 0x2000;
  v35_.v37 = *(_QWORD*)(GameData_220b680 + 8);
  spine_cpp_src_spine_53bd0((void*)(&v34), &v35_.v35);
  v3 = v34;
  spine_cpp_src_spine_53bd0((void*)(&v34), &v35_.v35);
  v4 = v34;
  v6 = (__int64*)a1[21];
  v5 = a1[22];
  if ((unsigned __int64)v6 >= v5) {
    v8 = a1[20];
    v9 = (unsigned __int64)v6 - v8;
    v10 = ((__int64)v6 - v8) >> 4;
    v11 = v10 + 1;
    if ((unsigned __int64)(v10 + 1) >> 60 != 0) {
      GameRoutine_1918370();
    }
    v12 = v5 - v8;
    v13 = fw_memory_g_heap_manager_ptr;
    if (v12 >> 3 > v11) {
      v11 = v12 >> 3;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF0LL) {
      v14 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v11;
    }
    if (v14 != 0) {
      if (v14 >> 60 != 0) {
        goto LABEL_34;
      }
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v14, 16, 0);
    }
    else {
      v15 = 0;
    }
    v16 = (__int64*)(v15 + v9);
    v17 = v15 + 16 * v14;
    *v16 = v3;
    v16[1] = v4;
    v18 = v15 + v9 - 16 * v10;
    v7 = v15 + v9 + 16;
    memcpy(v18, v8, v9);
    a1[20] = v18;
    a1[21] = v7;
    a1[22] = v17;
    if (v8 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v19, v8);
    }
  }
  else {
    *v6 = v3;
    v6[1] = v4;
    v7 = (__int64)(v6 + 2);
  }
  a1[21] = v7;
  v21 = (_QWORD*)a1[24];
  v20 = a1[25];
  if ((unsigned __int64)v21 < v20) {
    *v21 = 0;
    v22 = (__int64)(v21 + 1);
    goto LABEL_33;
  }
  v23 = a1[23];
  v24 = (char*)v21 - v23;
  v25 = ((__int64)v21 - v23) >> 3;
  v26 = v25 + 1;
  if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
    GameRoutine_65c760();
  }
  v27 = v20 - v23;
  if (v27 >> 2 > v26) {
    v26 = v27 >> 2;
  }
  if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
    v28 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v28 = v26;
  }
  if (v28 != 0) {
    if (v28 >> 61 == 0) {
      v29 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
      goto LABEL_29;
    }
  LABEL_34:
    GameRoutine_60a210();
  }
  v29 = 0;
LABEL_29:
  v30 = v29 + 8 * v28;
  v31 = (unsigned __int64)v21 - v23;
  v32 = (__int64)&v24[v29 + -8 * v25];
  *(_QWORD*)&v24[v29] = 0;
  v22 = (__int64)&v24[v29 + 8];
  memcpy(v32, v23, v31);
  a1[23] = v32;
  a1[24] = v22;
  a1[25] = v30;
  if (v23 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  v23);
  }
LABEL_33:
  a1[24] = v22;
}

void game_1917d70(_QWORD* a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  struct {
    int v35;
    char gap12_[4];
    unsigned __int64 v36;
    __int64 v37;
  } v35_;

  v35_.v35 = 2;
  v35_.v36 = (a2 & 0xFFFFFFFFFFFFFC00LL) + 1024;
  v35_.v37 = *(_QWORD*)(GameData_220b680 + 8);
  spine_cpp_src_spine_53bd0((void*)(&v34), &v35_.v35);
  v3 = v34;
  spine_cpp_src_spine_53bd0((void*)(&v34), &v35_.v35);
  v4 = v34;
  v6 = (__int64*)a1[27];
  v5 = a1[28];
  if ((unsigned __int64)v6 >= v5) {
    v8 = a1[26];
    v9 = (unsigned __int64)v6 - v8;
    v10 = ((__int64)v6 - v8) >> 4;
    v11 = v10 + 1;
    if ((unsigned __int64)(v10 + 1) >> 60 != 0) {
      GameRoutine_1918370();
    }
    v12 = v5 - v8;
    v13 = fw_memory_g_heap_manager_ptr;
    if (v12 >> 3 > v11) {
      v11 = v12 >> 3;
    }
    if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF0LL) {
      v14 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v14 = v11;
    }
    if (v14 != 0) {
      if (v14 >> 60 != 0) {
        goto LABEL_34;
      }
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v14, 16, 0);
    }
    else {
      v15 = 0;
    }
    v16 = (__int64*)(v15 + v9);
    v17 = v15 + 16 * v14;
    *v16 = v3;
    v16[1] = v4;
    v18 = v15 + v9 - 16 * v10;
    v7 = v15 + v9 + 16;
    memcpy(v18, v8, v9);
    a1[26] = v18;
    a1[27] = v7;
    a1[28] = v17;
    if (v8 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v19, v8);
    }
  }
  else {
    *v6 = v3;
    v6[1] = v4;
    v7 = (__int64)(v6 + 2);
  }
  a1[27] = v7;
  v21 = (_QWORD*)a1[30];
  v20 = a1[31];
  if ((unsigned __int64)v21 < v20) {
    *v21 = 0;
    v22 = (__int64)(v21 + 1);
    goto LABEL_33;
  }
  v23 = a1[29];
  v24 = (char*)v21 - v23;
  v25 = ((__int64)v21 - v23) >> 3;
  v26 = v25 + 1;
  if ((unsigned __int64)(v25 + 1) >> 61 != 0) {
    GameRoutine_65c760();
  }
  v27 = v20 - v23;
  if (v27 >> 2 > v26) {
    v26 = v27 >> 2;
  }
  if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
    v28 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v28 = v26;
  }
  if (v28 != 0) {
    if (v28 >> 61 == 0) {
      v29 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
      goto LABEL_29;
    }
  LABEL_34:
    GameRoutine_60a210();
  }
  v29 = 0;
LABEL_29:
  v30 = v29 + 8 * v28;
  v31 = (unsigned __int64)v21 - v23;
  v32 = (__int64)&v24[v29 + -8 * v25];
  *(_QWORD*)&v24[v29] = 0;
  v22 = (__int64)&v24[v29 + 8];
  memcpy(v32, v23, v31);
  a1[29] = v32;
  a1[30] = v22;
  a1[31] = v30;
  if (v23 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  v23);
  }
LABEL_33:
  a1[30] = v22;
}

#pragma GCC visibility pop
