#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_cmdbtl_anonymous_ProcCmdBtlSeqEscape_vtable[])();
extern __int64 GameData_225ca88;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcCmdBtlSeqEscape_Destructor(__int64 a1);
__int64 ProcCmdBtlSeqEscape_DeletingDestructor_alt1(__int64 a1) __asm__(
    "ProcCmdBtlSeqEscape_DeletingDestructor");
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 CmdBtlUnit_e7c3f0(__int64, int, __int16, float);
__int64 CmdBtlUnit_e7df20(__int64 result, char, float);
__int64 GameRoutine_e80c40(__int64, __int64, float);
__int64 GameRoutine_f90c20(__int64 result);
__int64 game_cmdbtl_Manager_UnitRelocationImpl(_QWORD*, __int64);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82be0;
extern __int128 GameData_1a83470;
extern __int128 GameData_1a834d0;
extern __int128 GameData_1a83800;
extern __int64* GameData_212d450[8];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f2e0;
extern __int64* game_map_MapRandom_instance__ptr[3];
int8x16_t* GameRoutine_e7bed0(int8x16_t* result, char);
__int64 ProcCmdBtlSeqEscape_f8f900();
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcCmdBtlSeqEscape_DeletingDestructor(__int64 a1);

__int64 ProcCmdBtlSeqEscape_f8f900()
{
  __int64* v0;
  _QWORD* v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  float32x4_t** v7;
  float32x4_t** v8;
  __int64* v9;
  float32x4_t* v10;
  float v11;
  __int64 v12;
  float32x4_t* v13;
  __int64 v14;
  __int64 v15;
  float32x4_t* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  float v24;
  int8x16_t v25;
  int8x16_t* v26;
  unsigned __int64 v27;
  float32x4_t v28;
  int8x16_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  int8x16_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  int8x16_t v41;
  int8x16_t v42;
  int8x16_t v43;
  int8x16_t v44;
  int8x16_t v45;
  float32x4_t* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64* v49;
  float32x4_t* v50;
  __int64 v51;
  __int64 v52;
  float v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int8x16_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  int8x16_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  int8x16_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  int8x16_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  __int64 v82;
  __int64 v83;
  int8x16_t v84;
  float32x4_t v85;
  int8x16_t v86;
  struct {
    unsigned __int64 v87;
    __int64 v88;
    __int64 v89;
  } v87_;
  int8x16_t v90;
  int8x16_t v91[2];

  GameRoutine_f90c20(*GameData_212d450[0]);
  v0 = GameData_212ea58;
  v1 = (_QWORD*)*GameData_212ea58;
  v2 = *(__int64**)(*GameData_212ea58 + 712);
  v3 = *(__int64**)(*GameData_212ea58 + 720);
  *(_DWORD*)(*GameData_212ea58 + 1204) |= 8u;
  if (v2 != v3) {
    do {
      v4 = *v2;
      v2 += 2;
      CmdBtlUnit_e7c3f0(v4, 1, 256, 0x0.0p+0f);
    } while (v2 != v3);
    v1 = (_QWORD*)*v0;
  }
  LOWORD(v87_.v87) = 0;
  v87_.v88 = 0;
  v87_.v89 = 0;
  *(_BYTE*)(*GameData_212f2e0 + 112) = 1;
  game_cmdbtl_Manager_UnitRelocationImpl(v1, (__int64)&v87_.v87);
  result = v87_.v89;
  if (v87_.v89 != 0) {
    result = std___1___shared_weak_count___release_weak(v87_.v89);
  }
  v6 = *v0;
  v7 = *(float32x4_t***)(*v0 + 712);
  v8 = *(float32x4_t***)(*v0 + 720);
  if (v7 != v8) {
    v9 = game_map_MapRandom_instance__ptr[0];
    while (1) {
      v11 = LANES128((*v7)[8]).n128_f32[1];
      math_Quat_FromYawPitchRoll((void*)(&v86), v11 * 0x1.1df46a0000000p-6f,
                                 0x0.0p+0f, 0x0.0p+0f);
      v12 = *(_QWORD*)(*v0 + 760);
      if (v12 != 0) {
        v13 = *(float32x4_t**)(*v0 + 752);
        v14 = *(_QWORD*)(*v0 + 760);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                  memory_order_relaxed);
        v15 = std___1___shared_weak_count_lock(v14);
        v16 = *v7;
        if (v15 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v17 = v0;
            v18 = v15;
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
            v19 = v18;
            v0 = v17;
            std___1___shared_weak_count___release_weak(v19);
          }
          std___1___shared_weak_count___release_weak(v12);
          if (v16 == v13) {
          LABEL_16:
            v24 = 0x1.8000000000000p+1f;
            goto LABEL_17;
          }
        }
        else {
          std___1___shared_weak_count___release_weak(v12);
          if (v16 == nullptr) {
            goto LABEL_16;
          }
        }
      }
      else if (*v7 == nullptr) {
        goto LABEL_16;
      }
      nn_os_LockMutex(&game_g_random_mutex);
      v20 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9);
      v21 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4);
      v22 = *(_DWORD*)v9 ^ (*(_DWORD*)v9 << 11);
      *(_DWORD*)v9 = *((_DWORD*)v9 + 1);
      *((_DWORD*)v9 + 1) = v20;
      v23 = (v22 >> 8) ^ (v21 >> 19) ^ v22 ^ v21;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v21;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) = v23;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v24 = (float)(PSEUDO_UNFUSED((float)((float)(unsigned __int16)v23 /
                                           -0x1.fffe000000000p+15f) *
                                   0x1.8000000000000p+0f)) +
            0x1.8000000000000p+1f;
    LABEL_17:
      LANES128(v25).n128_u64[0] = 0;
      v26 = *v7;
      v27 = LANES128((*v7)[13]).n128_u64[0];
      LANES128(v28).n128_u64[0] = 0;
      LANES128(v25).n128_u64[1] = LODWORD(v24);
      v29 = vmulq_f32(v86, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v30).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v31).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v32).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v25).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v28).n128_i8[8] =
          vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v30).n128_u64[1] = LANES128(v31).n128_u64[0];
      LANES128(v32).n128_u64[1] = LANES128(v32).n128_u64[0];
      LANES128(v31).n128_u64[1] = LANES128(v25).n128_u64[0];
      *(int32x2_t*)&LANES128(v25).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v29).n128_u64[0]), 1);
      LANES128(v33).n128_u64[0] = LANES128(v86).n128_u64[0];
      v34 = vmulq_f32(v28, v30);
      v35 = vmlaq_f32(vmulq_f32(v29, v32),
                      COERCE_AS(float32x4_t, GameData_1a83800), v34);
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v36 = vmlaq_f32(v35, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v25, v34));
      LANES128(v25).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v25).n128_i8[8] =
          vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v29).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v29).n128_u64[1] = LANES128(v29).n128_u64[0];
      v37 = vmlsq_f32(v36, v25, v31);
      LANES128(v25).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v31).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v33).n128_u64[1] = LANES128(v25).n128_u64[0];
      *(int8x8_t*)&LANES128(v31).n128_i8[8] =
          vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v38 = vmlaq_f32(vmulq_f32(v29, v37),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v33, v31));
      LANES128(v31).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v86, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v34).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v37).n128_u64[0]), 1);
      LANES128(v25).n128_u64[1] = LANES128(v31).n128_u64[0];
      LANES128(v31).n128_u64[1] = LANES128(v86).n128_u64[0];
      LANES128(v39).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v39).n128_i8[8] =
          vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v40 = vaddq_f32(
          (*v7)[7],
          vmlsq_f32(vmlaq_f32(v38, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v31, v34)),
                    v39, v25));
      LANES128(v26[6]).n128_u64[0] = LANES128(v40).n128_u64[0];
      LANES128(v26[7]).n128_u64[0] = LANES128(v40).n128_u64[0];
      v42 = v26[6];
      v41 = v26[7];
      LANES128(v43).n128_u64[0] = LANES128(v26[7]).n128_u64[0];
      LANES128(v42).n128_u64[1] = LANES128(v40).n128_u32[2];
      LANES128(v43).n128_u64[1] = LANES128(v40).n128_u32[2];
      v26[6] = v42;
      v26[7] = v43;
      if (v27 != 0) {
        v84 = v43;
        LANES128(v44).n128_u64[0] =
            LANES128(v41).n128_u32[0] | 0x4348000000000000LL;
        LANES128(v41).n128_u32[1] = -1027080192;
        LANES128(v44).n128_u64[1] =
            LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u32[0];
        LANES128(v41).n128_u64[1] = LANES128(v44).n128_u64[1];
        v91[0] = v44;
        v90 = v41;
        GameRoutine_1085a10((void*)(&v87_.v87), v27 + 160, v91, &v90, 0);
        v43 = v84;
        LANES128(v43).n128_u32[1] = HIDWORD(v87_.v87);
      }
      LANES128(v26[7]).n128_u64[0] = LANES128(v43).n128_u64[0];
      v45 = v26[7];
      LANES128(v26[6]).n128_u32[1] = LANES128(v45).n128_u32[1];
      LANES128(v45).n128_u64[1] = LANES128(v43).n128_u32[2];
      v26[7] = v45;
      GameRoutine_e7bed0(v26, 1);
      v46 = *v7;
      v47 = LANES128((*v7)[19]).n128_u64[0];
      LANES128(v46[5]).n128_u8[0] = 1;
      LANES128(v46[8]).n128_f32[1] = v11 + 0x1.6800000000000p+7f;
      LANES128(v46[2]).n128_f32[0] = v11 + 0x1.6800000000000p+7f;
      LANES128(v46[18]).n128_u64[1] = 0;
      LANES128(v46[19]).n128_u64[0] = 0;
      if (v47 != 0) {
        std___1___shared_weak_count___release_weak(v47);
      }
      GameRoutine_e7bed0(v46, 1);
      v10 = *v7;
      v7 += 2;
      result = CmdBtlUnit_e7df20((__int64)v10, 1, 0x1.0000000000000p+0f);
      if (v7 == v8) {
        v6 = *v0;
        break;
      }
    }
  }
  v48 = *(_QWORD*)(v6 + 760);
  if (v48 != 0) {
    v49 = v0;
    v50 = *(float32x4_t**)(v6 + 752);
    v51 = *(_QWORD*)(v6 + 760);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 16), 1u,
                              memory_order_relaxed);
    v52 = std___1___shared_weak_count_lock(v51);
    result = std___1___shared_weak_count___release_weak(v48);
    if (v52 == 0 || v50 == nullptr) {
      if (v52 == 0) {
        return result;
      }
    }
    else {
      v54 = LANES128(v50[8]).n128_f32[1];
      v85 = vaddq_f32(v50[7], COERCE_AS(float32x4_t, GameData_1a83470));
      math_Quat_FromYawPitchRoll((void*)(v91), v54 * 0x1.1df46a0000000p-6f,
                                 0x0.0p+0f, 0x0.0p+0f);
      math_Quat_FromYawPitchRoll((void*)(&v90),
                                 (float)(v54 + 0x1.6800000000000p+6f) *
                                     0x1.1df46a0000000p-6f,
                                 0x0.0p+0f, 0x0.0p+0f);
      LANES128(v55).n128_u64[0] = 0;
      LANES128(v56).n128_u64[0] = 0;
      HIDWORD(v87_.v89) = 0;
      LANES128(v57).n128_u64[0] = LANES128(v91[0]).n128_u64[0];
      v58 = vmulq_f32(v91[0], COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v59).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a834d0),
                               COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v60).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v59).n128_u64[1] = LANES128(v59).n128_u64[0];
      LANES128(v61).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a834d0),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v60).n128_u64[1] = LANES128(v61).n128_u64[0];
      *(int8x8_t*)&LANES128(v55).n128_i8[8] =
          vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      v62 = vmulq_f32(v55, v60);
      LANES128(v55).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v63).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a834d0),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v61).n128_u64[1] = LANES128(v63).n128_u64[0];
      *(int32x2_t*)&LANES128(v63).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v58).n128_u64[0]), 1);
      v64 = vmulq_f32(v63, v55);
      LANES128(v55).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      v65 = vmlaq_f32(vmlaq_f32(vmulq_f32(v58, v59),
                                COERCE_AS(float32x4_t, GameData_1a83800), v62),
                      COERCE_AS(float32x4_t, GameData_1a83800), v64);
      *(int8x8_t*)&LANES128(v55).n128_i8[8] =
          vqtbl1_s8(v58, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v58).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v91[0], COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v58).n128_u64[1] = LANES128(v58).n128_u64[0];
      v66 = vmlsq_f32(v65, v55, v61);
      LANES128(v61).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v91[0], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v55).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v57).n128_u64[1] = LANES128(v61).n128_u64[0];
      *(int8x8_t*)&LANES128(v55).n128_i8[8] =
          vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      LANES128(v67).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v68 = vmlaq_f32(vmulq_f32(v58, v66),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v57, v55));
      LANES128(v55).n128_u64[0] =
          LANES64_OF(
              vqtbl1_s8(v91[0], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int32x2_t*)&LANES128(v67).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v66).n128_u64[0]), 1);
      LANES128(v61).n128_u64[1] = LANES128(v55).n128_u64[0];
      LANES128(v55).n128_u64[1] = LANES128(v91[0]).n128_u64[0];
      LANES128(v69).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v69).n128_i8[8] =
          vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v70 = vmlsq_f32(vmlaq_f32(v68, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v55, v67)),
                      v69, v61);
      LANES128(v61).n128_u64[1] = 1077936128;
      v71 = vaddq_f32(v85, v70);
      v72 = vmulq_f32(v90, COERCE_AS(float32x4_t, GameData_1a829d0));
      LANES128(v73).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82be0),
                               COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v55).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82be0),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v67).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
      LANES128(v67).n128_u64[1] = LANES128(v55).n128_u64[0];
      *(int8x8_t*)&LANES128(v56).n128_i8[8] =
          vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      v74 = vmlaq_f32(vmulq_f32(v72, v73),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v56, v67));
      LANES128(v56).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a82be0),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v61).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v55).n128_u64[1] = LANES128(v56).n128_u64[0];
      *(int32x2_t*)&LANES128(v56).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v72).n128_u64[0]), 1);
      v75 = vmulq_f32(v56, v61);
      LANES128(v61).n128_u64[0] = LANES128(v90).n128_u64[0];
      v76 = vmlaq_f32(v74, COERCE_AS(float32x4_t, GameData_1a83800), v75);
      LANES128(v75).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v75).n128_i8[8] =
          vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      LANES128(v72).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v61).n128_u64[1] = LANES128(v72).n128_u64[0];
      v77 = vmlsq_f32(v76, v75, v55);
      LANES128(v75).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v78).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
              .n64_u64[0];
      LANES128(v75).n128_u64[1] = LANES128(v75).n128_u64[0];
      LANES128(v59).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v78).n128_i8[8] =
          vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
      *(int32x2_t*)&LANES128(v59).n128_i8[8] =
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v77).n128_u64[0]), 1);
      v79 = vmlaq_f32(vmulq_f32(v75, v77),
                      COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v61, v78));
      LANES128(v78).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v90, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v72).n128_u64[1] = LANES128(v78).n128_u64[0];
      LANES128(v78).n128_u64[1] = LANES128(v90).n128_u64[0];
      v80 = vmlaq_f32(v79, COERCE_AS(float32x4_t, GameData_1a83800),
                      vmulq_f32(v78, v59));
      LANES128(v59).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v59).n128_i8[8] =
          vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
      v81 = vaddq_f32(v71, vmlsq_f32(v80, v59, v72));
      v87_.v88 = LANES128(v81).n128_u32[2] | 0x4120000000000000LL;
      v87_.v87 = LANES128(v81).n128_u64[0];
      v82 = *v49 + 16;
      *(float*)&v87_.v89 = v54 + 0x1.b800000000000p+7f;
      GameRoutine_e80c40(v82, (__int64)&v87_.v87, 0x0.0p+0f);
      HIDWORD(v87_.v88) = 1112014848;
      v83 = *v49 + 16;
      *(float*)&v87_.v89 = v54 + 0x1.e000000000000p+7f;
      result =
          GameRoutine_e80c40(v83, (__int64)&v87_.v87, 0x1.8000000000000p+1f);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v52 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v52 + 16LL))(v52);
      return std___1___shared_weak_count___release_weak(v52);
    }
  }
  return result;
}

__int64 ProcCmdBtlSeqEscape_Destructor(__int64 a1)
{
  __int64 v2;
  int v3;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqEscape_vtable;
  v2 = GameData_225ca88;
  if (GameData_225ca88 != 0 && (*(_BYTE*)(GameData_225ca88 + 1977) & 1) == 0) {
    v3 = *(_DWORD*)(GameData_225ca88 + 1984);
    if (v3 >= 1) {
      *(_DWORD*)(GameData_225ca88 + 1984) = 0;
    LABEL_5:
      *(_BYTE*)(v2 + 1977) = 1;
      *(_DWORD*)(v2 + 1980) = 2;
      goto LABEL_7;
    }
    if (v3 == 0) {
      goto LABEL_5;
    }
  }

LABEL_7:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcCmdBtlSeqEscape_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;

  *(_QWORD*)a1 = game_cmdbtl_anonymous_ProcCmdBtlSeqEscape_vtable;
  v2 = GameData_225ca88;
  if (GameData_225ca88 != 0 && (*(_BYTE*)(GameData_225ca88 + 1977) & 1) == 0) {
    v3 = *(_DWORD*)(GameData_225ca88 + 1984);
    if (v3 >= 1) {
      *(_DWORD*)(GameData_225ca88 + 1984) = 0;
    LABEL_5:
      *(_BYTE*)(v2 + 1977) = 1;
      *(_DWORD*)(v2 + 1980) = 2;
      goto LABEL_7;
    }
    if (v3 == 0) {
      goto LABEL_5;
    }
  }
LABEL_7:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

#pragma GCC visibility pop
