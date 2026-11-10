#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
int8x16_t* GameRoutine_e7bed0(int8x16_t* result, char);
int8x16_t*
game_cmdbtl_anonymous_ProcReinforceIsmStart_SetupSupport_closure_Invoke(
    __int64 a1, __int64 a2);
_QWORD* CmdbtlPartyNatives_e9aba0(_QWORD*, __int64);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64 Manager_e9b550(__int64, int, unsigned int);
__int64 game_cmdbtl_Manager_UnitRelocationImpl(_QWORD*, __int64);
__int64 std___1___shared_weak_count_lock(_QWORD);
bool CmdbtlPartyNatives_e73070(_QWORD*, __int64*);
extern _UNKNOWN GameData_1a0d058;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83010;
extern __int128 GameData_1a831d0;
extern __int128 GameData_1a832e0;
extern __int128 GameData_1a83800;
extern __int64 (*GameData_1feca98[])();
extern __int64 (*GameData_1ffba90[])();
extern __int64* GameData_212ea58;
extern __int64* GameData_212f4e8[2];
extern int GameData_221beb0;
void __attribute__((noreturn)) GameRoutine_60a310();
int8x16_t* ProcReinforceIsmStart_fb27e0();

int8x16_t* ProcReinforceIsmStart_fb27e0()
{
  __int64* v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  int8x16_t* result;
  __int64 v18;
  int8x16_t* v19;
  float32x4_t* v20;
  __int64 v21;
  __int64 v22;
  int8x16_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  __int64 v36;
  __int128* v37;
  _QWORD* v38;
  __int64 v39;
  int8x16_t v40;
  float32x4_t v41;
  unsigned __int64 v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  int8x16_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  int8x16_t v54;
  int8x16_t v55;
  int8x16_t v56;
  __int128 v57;
  int8x16_t v58;
  float32x4_t v59;
  int8x16_t v60;
  unsigned __int64 v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  int8x16_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  int8x16_t v74;
  int8x16_t v75;
  int8x16_t v76;
  __int128 v77;
  int8x16_t v78;
  __int64 v79;
  int8x16_t v80;
  int8x16_t v81;
  struct {
    _QWORD v82[4];
    _QWORD* v83;
  } v82_;
  float32x4_t v84;
  int8x16_t v85;
  struct {
    __int64 v86;
    __int64 v87;
  } v86_;
  struct {
    __int64 (**v88)();
    __int128* v89;
    __int64 v90;
    char gap168_[8];
    __int64 (***v91)();
  } v88_;
  int8x16_t v92;
  __int128 v93;

  v0 = GameData_212ea58;
  v93 = (__typeof__(v93)){0};
  v88_.v88 = GameData_1feca98;
  v88_.v89 = &v93;
  v88_.v91 = &v88_.v88;
  v1 = (_QWORD*)*GameData_212ea58;
  CmdbtlPartyNatives_e9aba0((_QWORD*)*GameData_212ea58, (__int64)&v88_.v88);
  if (v88_.v91 == &v88_.v88) {
    v2 = 4;
  }
  else {
    if (v88_.v91 == nullptr) {
      goto LABEL_6;
    }
    v2 = 5;
  }
  ((__int64 (*)(__int64))(*v88_.v91)[v2])((__int64)v88_.v91);
LABEL_6:
  if (*((_QWORD*)&v93 + 1) != 0) {
    v3 = std___1___shared_weak_count_lock(*((_QWORD*)&v93 + 1));
    v4 = v93;
    if (*((_QWORD*)&v93 + 1) != 0) {
      std___1___shared_weak_count___release_weak(*((_QWORD*)&v93 + 1));
    }
    Manager_e9b550((__int64)v1, *(_DWORD*)(v4 + 8), 0);
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    Manager_e9b550((__int64)v1, (int)&GameData_1a0d058, 0);
  }
  v5 = *v0;
  v6 = v1[94];
  v7 = v1[95];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
  }
  v8 = *(_QWORD*)(v5 + 1256);
  *(_QWORD*)(v5 + 1248) = v6;
  *(_QWORD*)(v5 + 1256) = v7;
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8);
  }
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
  }
  v9 = (_QWORD*)*v0;
  v93 = (__typeof__(v93)){0};
  v88_.v88 = GameData_1feca98;
  v88_.v89 = &v93;
  v88_.v91 = &v88_.v88;
  CmdbtlPartyNatives_e9aba0(v9, (__int64)&v88_.v88);
  if (v88_.v91 == &v88_.v88) {
    v10 = 4;
  }
  else {
    if (v88_.v91 == nullptr) {
      goto LABEL_24;
    }
    v10 = 5;
  }
  ((__int64 (*)(__int64))(*v88_.v91)[v10])((__int64)v88_.v91);
LABEL_24:
  if (*((_QWORD*)&v93 + 1) != 0) {
    v11 = std___1___shared_weak_count_lock(*((_QWORD*)&v93 + 1));
    if (v11 != 0) {
      v12 = v93;
    }
    else {
      v12 = 0;
    }
    if (*((_QWORD*)&v93 + 1) != 0) {
      std___1___shared_weak_count___release_weak(*((_QWORD*)&v93 + 1));
    }
    v86_.v86 = v12;
    v86_.v87 = v11;
    if (v11 != 0) {
      v13 = 0;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_34;
    }
  }
  else {
    v11 = 0;
    v86_.v86 = 0;
    v86_.v87 = 0;
  }
  v13 = 1;
LABEL_34:
  CmdbtlPartyNatives_e73070(v1 + 84, &v86_.v86);
  if (v86_.v87 != 0) {
    std___1___shared_weak_count___release_weak(v86_.v87);
  }
  if ((v13 & 1) == 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v14 = (_QWORD*)*v0;
  v88_.v89 = nullptr;
  v88_.v90 = 0;
  LOWORD(v88_.v88) = 256;
  game_cmdbtl_Manager_UnitRelocationImpl(v14, (__int64)&v88_.v88);
  if (v88_.v90 != 0) {
    std___1___shared_weak_count___release_weak(v88_.v90);
  }
  v15 = (_QWORD*)*v0;
  v93 = (__typeof__(v93)){0};
  v88_.v91 = &v88_.v88;
  v88_.v88 = GameData_1feca98;
  v88_.v89 = &v93;
  CmdbtlPartyNatives_e9aba0(v15, (__int64)&v88_.v88);
  if (v88_.v91 == &v88_.v88) {
    v16 = 4;
  }
  else {
    if (v88_.v91 == nullptr) {
      goto LABEL_46;
    }
    v16 = 5;
  }
  ((__int64 (*)(__int64))(*v88_.v91)[v16])((__int64)v88_.v91);
LABEL_46:
  result = *((int8x16_t**)&v93 + 1);
  if (*((_QWORD*)&v93 + 1) == 0) {
    goto LABEL_76;
  }
  v18 = std___1___shared_weak_count_lock(*((_QWORD*)&v93 + 1));
  result = *((int8x16_t**)&v93 + 1);
  v19 = (int8x16_t*)v93;
  if (v18 != 0) {
    v20 = (float32x4_t*)v93;
  }
  else {
    v20 = nullptr;
  }
  if (*((_QWORD*)&v93 + 1) != 0) {
    result = (int8x16_t*)std___1___shared_weak_count___release_weak(
        *((_QWORD*)&v93 + 1));
  }
  if (v20 != nullptr) {
    math_Quat_FromYawPitchRoll(
        (void*)(&v85), LANES128(v19[8]).n128_f32[1] * 0x1.1df46a0000000p-6f,
        0x0.0p+0f, 0x0.0p+0f);
    v21 = *(_QWORD*)(*v0 + 712);
    v22 = *(_QWORD*)(*v0 + 720);
    v23 = vmulq_f32(v85, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v24).n128_u64[0] = 0x40000000;
    LANES128(v25).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83010),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v26).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83010),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v28).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v25).n128_u64[1] = LANES128(v25).n128_u64[0];
    LANES128(v27).n128_u64[1] = LANES128(v26).n128_u64[0];
    LANES128(v28).n128_u64[1] = 0x40000000;
    *(int8x8_t*)&LANES128(v24).n128_i8[8] =
        vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v29).n128_u64[0] = LANES128(v85).n128_u64[0];
    v82_.v82[0] = GameData_1ffba90;
    v82_.v82[1] = &v84;
    v82_.v83 = v82_.v82;
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83010),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v26).n128_u64[1] = LANES128(v30).n128_u64[0];
    *(int32x2_t*)&LANES128(v30).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v23).n128_u64[0]), 1);
    v31 = vmlaq_f32(
        vmlaq_f32(vmulq_f32(v23, v25), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v24, v27)),
        COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v30, v28));
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v30).n128_i8[8] =
        vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v23).n128_u64[1] = LANES128(v23).n128_u64[0];
    v32 = vmlsq_f32(v31, v30, v26);
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v26).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v29).n128_u64[1] = LANES128(v30).n128_u64[0];
    *(int8x8_t*)&LANES128(v26).n128_i8[8] =
        vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v33 =
        vmlaq_f32(vmulq_f32(v23, v32), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v29, v26));
    LANES128(v26).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v27).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v32).n128_u64[0]), 1);
    LANES128(v30).n128_u64[1] = LANES128(v26).n128_u64[0];
    LANES128(v26).n128_u64[1] = LANES128(v85).n128_u64[0];
    LANES128(v34).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v34).n128_i8[8] =
        vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v35 = vmlsq_f32(vmlaq_f32(v33, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v26, v27)),
                    v34, v30);
    LANES128(v35).n128_u32[3] = 0;
    v84 = v35;
    if (v21 == v22) {
      v38 = v82_.v82;
    }
    else {
      do {
        v88_.v88 = *(__int64 (***)(void))v21;
        v36 = *(_QWORD*)(v21 + 8);
        v88_.v89 = (__int128*)v36;
        if (v36 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v82_.v83 == nullptr) {
          GameRoutine_60a310();
        }
        (*(void (**)(_QWORD*, __int64 (***)(void)))(*v82_.v83 + 48LL))(
            v82_.v83, &v88_.v88);
        v37 = v88_.v89;
        if (v88_.v89 != nullptr &&
            atomic_fetch_add((atomic_ullong* volatile)((char*)v88_.v89 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int128*))(*(_QWORD*)v37 + 16LL))(v37);
          std___1___shared_weak_count___release_weak(v37);
        }
        v21 += 16;
      } while (v21 != v22);
      v38 = v82_.v83;
      if (v82_.v83 != v82_.v82) {
        if (v82_.v83 == nullptr) {
        LABEL_68:
          v40 = vmulq_f32(v85, COERCE_AS(float32x4_t, GameData_1a829d0));
          LANES128(v41).n128_u64[0] = 3221225472LL;
          v42 = LANES128(v19[13]).n128_u64[0];
          LANES128(v43).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a831d0),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v44).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a831d0),
                                   COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v45).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a831d0),
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v46).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v47).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v44).n128_u64[1] = LANES128(v44).n128_u64[0];
          LANES128(v46).n128_u64[1] = LANES128(v43).n128_u64[0];
          LANES128(v47).n128_u64[1] = 3221225472LL;
          *(int8x8_t*)&LANES128(v41).n128_i8[8] =
              vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
          LANES128(v43).n128_u64[1] = LANES128(v45).n128_u64[0];
          LANES128(v48).n128_u64[0] = LANES128(v85).n128_u64[0];
          *(int32x2_t*)&LANES128(v45).n128_i8[8] =
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v40).n128_u64[0]), 1);
          v49 = vmlaq_f32(vmlaq_f32(vmulq_f32(v40, v44),
                                    COERCE_AS(float32x4_t, GameData_1a83800),
                                    vmulq_f32(v41, v46)),
                          COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v45, v47));
          LANES128(v45).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v45).n128_i8[8] =
              vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
          LANES128(v40).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v40).n128_u64[1] = LANES128(v40).n128_u64[0];
          v50 = vmlsq_f32(v49, v45, v43);
          LANES128(v45).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v43).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v48).n128_u64[1] = LANES128(v45).n128_u64[0];
          *(int8x8_t*)&LANES128(v43).n128_i8[8] =
              vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
          LANES128(v46).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          v51 = vmlaq_f32(vmulq_f32(v40, v50),
                          COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v48, v43));
          LANES128(v43).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int32x2_t*)&LANES128(v46).n128_i8[8] =
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v50).n128_u64[0]), 1);
          LANES128(v45).n128_u64[1] = LANES128(v43).n128_u64[0];
          LANES128(v43).n128_u64[1] = LANES128(v85).n128_u64[0];
          LANES128(v52).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v52).n128_i8[8] =
              vqtbl1_s8(v50, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
          v53 = vaddq_f32(
              v20[7],
              vmlsq_f32(vmlaq_f32(v51, COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v43, v46)),
                        v52, v45));
          LANES128(v19[6]).n128_u64[0] = LANES128(v53).n128_u64[0];
          LANES128(v19[7]).n128_u64[0] = LANES128(v53).n128_u64[0];
          v55 = v19[6];
          v54 = v19[7];
          LANES128(v56).n128_u64[0] = LANES128(v19[7]).n128_u64[0];
          LANES128(v55).n128_u64[1] = LANES128(v53).n128_u32[2];
          LANES128(v56).n128_u64[1] = LANES128(v53).n128_u32[2];
          v19[6] = v55;
          v19[7] = v56;
          if (v42 != 0) {
            v80 = v56;
            *(_QWORD*)&v57 = LANES128(v54).n128_u32[0] | 0x4348000000000000LL;
            LANES128(v54).n128_u32[1] = -1027080192;
            *((_QWORD*)&v57 + 1) =
                LANES128_OF(vextq_s8(v53, v53, 8u)).n128_u32[0];
            LANES128(v54).n128_u64[1] = *((_QWORD*)&v57 + 1);
            v92 = v54;
            v93 = v57;
            GameRoutine_1085a10((void*)(&v88_.v88), v42 + 160, &v93, &v92, 0);
            v56 = v80;
            LANES128(v56).n128_u32[1] = HIDWORD(v88_.v88);
          }
          LANES128(v19[7]).n128_u64[0] = LANES128(v56).n128_u64[0];
          v58 = v19[7];
          LANES128(v19[6]).n128_u32[1] = LANES128(v58).n128_u32[1];
          LANES128(v58).n128_u64[1] = LANES128(v56).n128_u32[2];
          v19[7] = v58;
          GameRoutine_e7bed0(v19, 1);
          LANES128(v59).n128_u64[0] = 0;
          v60 = vmulq_f32(v85, COERCE_AS(float32x4_t, GameData_1a829d0));
          v61 = LANES128(v19[13]).n128_u64[0];
          LANES128(v62).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a832e0),
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v63).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a832e0),
                                   COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v64).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a832e0),
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v65).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v63).n128_u64[1] = LANES128(v63).n128_u64[0];
          LANES128(v65).n128_u64[1] = LANES128(v62).n128_u64[0];
          *(int8x8_t*)&LANES128(v59).n128_i8[8] =
              vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
          LANES128(v62).n128_u64[1] = LANES128(v64).n128_u64[0];
          *(int32x2_t*)&LANES128(v64).n128_i8[8] =
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v60).n128_u64[0]), 1);
          LANES128(v66).n128_u64[0] = LANES128(v85).n128_u64[0];
          v67 = vmulq_f32(v59, v65);
          v68 = vmlaq_f32(vmulq_f32(v60, v63),
                          COERCE_AS(float32x4_t, GameData_1a83800), v67);
          LANES128(v67).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          v69 = vmlaq_f32(v68, COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v64, v67));
          LANES128(v64).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v64).n128_i8[8] =
              vqtbl1_s8(v60, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
          LANES128(v60).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v60).n128_u64[1] = LANES128(v60).n128_u64[0];
          v70 = vmlsq_f32(v69, v64, v62);
          LANES128(v64).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          LANES128(v62).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
                  .n64_u64[0];
          LANES128(v66).n128_u64[1] = LANES128(v64).n128_u64[0];
          *(int8x8_t*)&LANES128(v62).n128_i8[8] =
              vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
          LANES128(v67).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          v71 = vmlaq_f32(vmulq_f32(v60, v70),
                          COERCE_AS(float32x4_t, GameData_1a83800),
                          vmulq_f32(v66, v62));
          LANES128(v62).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v85, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int32x2_t*)&LANES128(v67).n128_i8[8] =
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v70).n128_u64[0]), 1);
          LANES128(v64).n128_u64[1] = LANES128(v62).n128_u64[0];
          LANES128(v62).n128_u64[1] = LANES128(v85).n128_u64[0];
          LANES128(v72).n128_u64[0] =
              LANES64_OF(
                  vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v72).n128_i8[8] =
              vqtbl1_s8(v70, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
          v73 = vaddq_f32(
              v20[7],
              vmlsq_f32(vmlaq_f32(v71, COERCE_AS(float32x4_t, GameData_1a83800),
                                  vmulq_f32(v62, v67)),
                        v72, v64));
          LANES128(v19[6]).n128_u64[0] = LANES128(v73).n128_u64[0];
          LANES128(v19[7]).n128_u64[0] = LANES128(v73).n128_u64[0];
          v75 = v19[6];
          v74 = v19[7];
          LANES128(v76).n128_u64[0] = LANES128(v19[7]).n128_u64[0];
          LANES128(v75).n128_u64[1] = LANES128(v73).n128_u32[2];
          LANES128(v76).n128_u64[1] = LANES128(v73).n128_u32[2];
          v19[6] = v75;
          v19[7] = v76;
          if (v61 != 0) {
            v81 = v76;
            *(_QWORD*)&v77 = LANES128(v74).n128_u32[0] | 0x4348000000000000LL;
            LANES128(v74).n128_u32[1] = -1027080192;
            *((_QWORD*)&v77 + 1) =
                LANES128_OF(vextq_s8(v73, v73, 8u)).n128_u32[0];
            LANES128(v74).n128_u64[1] = *((_QWORD*)&v77 + 1);
            v92 = v74;
            v93 = v77;
            GameRoutine_1085a10((void*)(&v88_.v88), v61 + 160, &v93, &v92, 0);
            v76 = v81;
            LANES128(v76).n128_u32[1] = HIDWORD(v88_.v88);
          }
          LANES128(v19[7]).n128_u64[0] = LANES128(v76).n128_u64[0];
          v78 = v19[7];
          LANES128(v19[6]).n128_u32[1] = LANES128(v78).n128_u32[1];
          LANES128(v78).n128_u64[1] = LANES128(v76).n128_u32[2];
          v19[7] = v78;
          result = GameRoutine_e7bed0(v19, 1);
          goto LABEL_73;
        }
        v39 = 40;
      LABEL_67:
        (*(void (**)(__int64))(*v38 + v39))((__int64)v38);
        goto LABEL_68;
      }
    }
    v39 = 32;
    goto LABEL_67;
  }
LABEL_73:
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    result = (int8x16_t*)std___1___shared_weak_count___release_weak(v18);
  }
LABEL_76:
  *(_DWORD*)(*v0 + 1208) |= 2u;
  GameData_221beb0 |= 0x3D800u;
  v79 = *GameData_212f4e8[0];
  *(_DWORD*)(v79 + 8) = 999;
  *(_BYTE*)(v79 + 12) = 1;
  return result;
}

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
