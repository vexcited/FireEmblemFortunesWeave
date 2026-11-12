#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_c56f20(__int64*, _QWORD*);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, __int64, __int64,
                                                   unsigned __int64, __int64,
                                                   __int64, __int64);
__attribute__((swiftcall)) void GameRoutine_c52150(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_c525f0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_c52ad0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_c52f90(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void Layout_c12ec0(PSEUDO_X8, _QWORD*);
__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void math_Mtx43_MakeRotation(PSEUDO_X8,
                                                        float32x4_t*);
__attribute__((swiftcall)) void std___1_to_string_1a0ab70(PSEUDO_X8, _QWORD);
__int64* GameHr_c13200(__int64* result);
__int64* GameRoutine_c3b000(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64 ElfFile_631220(__int64*, const char*);
__int64 GameHr_bd3bc0(__int64, __int64*);
__int64 GameHr_bfebc0(__int64, _QWORD*, int, int);
__int64 GameRoutine_1a0a680(__int64, unsigned __int64, const char*,
                            unsigned __int64);
__int64 GameRoutine_1fa0(__int64, int);
__int64 GameRoutine_1fd0(__int64, __int64);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_b87160(__int64 result, char, unsigned int);
__int64 GameRoutine_c131a0(__int64, __int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_c51cf0(__int64 result, _BYTE*);
__int64 InstanceObject_bffc20(__int64*, __int64);
__int64 Layout_c1b8c0(_QWORD*);
__int64 LocatorModule_a7bee0(__int64, const char*);
__int64 Scene_a70a20(_QWORD*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 g3d_a6c880(__int64*, __int64, unsigned __int64);
__int64 game_14a3920(__int64 result);
__int64 gfx_render_BillboardModel_BillboardModel(__int64, __int64, __int64,
                                                 __int64, __int64, __int64*);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_AcquireReadLock(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_ReleaseReadLock(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___hash_memory(__int64, unsigned __int64);
__int64 std___1___next_prime(unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 timeline_2020(unsigned __int16*, _WORD*);
__int64 timeline_21c0(unsigned int*, unsigned int*);
__int64 timeline_2360(unsigned __int64*, unsigned __int64*);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__int64 wld_map_Layout_Internal_LoadMapModelFile(__int64, __int64,
                                                 unsigned __int64, char);
__int64 wld_map_MapEffectPlacer_PlaceCommon(__int64, __int64*, float);
__n128 game_14a1a60(__int64);
bool GameRoutine_ad7390(_QWORD*);
bool GameRoutine_c05690(_QWORD*, __int64);
bool GameRoutine_c05fb0(__int64**, __int64);
bool GameRoutine_c3b3f0(__int64**, __int64);
bool GameRoutine_c3d2d0(__int64**, __int64);
bool GameRoutine_c3d510(__int64**, __int64);
bool GameRoutine_c3e540(__int64**, __int64);
bool GameRoutine_c3ea50(__int64**, __int64);
bool GameRoutine_c3ee60(__int64**, __int64);
bool GameRoutine_c49640(__int64**, __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212ea08;
extern _UNKNOWN GameData_1fd1988;
extern _UNKNOWN GameData_1fd1e70;
extern _UNKNOWN GameData_21a55c0;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_22034f0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fd1468[])();
extern __int64 (*wld_MapCrowdModule_vtable[])();
extern __int64* GameData_212ce30;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_1fd1a88;
extern __int64 GameData_212c638;
extern __int64 GameData_212e9d8[3];
extern __int64 GameData_2203498;
extern __int64 GameData_22034a0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_1fd1a80;
extern char GameData_1a9f09e;
extern int* GameData_212df08;
extern int* GameData_212ea00;
extern int GameData_22034e8;
float GameStringReads_c3cd70(__int64, char*);
float powf(float, float);
float32x4_t wld_bd2320(__int64, float32x2_t*, char);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
long double GameRoutine_14a1a30(__int64);
long double GameRoutine_14a1af0(__int64);
long double asin(long double, long double);
long double atan2(double, double);
unsigned __int64 Value_2500(__int64*, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void GameHr_198d120(__int64*, __int64);
void GameHr_c180a0(__int64**);
void GameHr_c1a430(__int64, __int64);
void GameHr_c29c40(__int64);
void GameHr_c2a120(__int64, __int64, _DWORD*, __int64);
void GameHr_c3b1a0(__int64, _QWORD*);
void GameHr_c49860(__int64, __int64);
void GameHr_c51760(__int64);
void GameRoutine_7d6200(__int64*, _DWORD*);
void GameRoutine_98f140(__int64*, _QWORD*);
void GameRoutine_a8c0c0(__int64);
void GameRoutine_c13060(__int64);
void GameRoutine_c29fe0(__int64*, _QWORD*);
void GameRoutine_c3f7a0(__int64*, unsigned __int64);
void GameStringReads_c05cc0(__int64**, __int64);
void GameStringReads_c3d730(unsigned int*, unsigned int**);
void GameStringReads_c3ec70(_DWORD*, unsigned int**);
void GameStringReads_c3f080(_DWORD*, unsigned int**);
void GfxLoader_c3f420(__int64**, unsigned __int64*);
void GfxLoader_c49e60(__int64**, __int64*);
void InstanceObject_bff9e0(__int64, int, __int64*, __int64*, __int64*,
                           __int64*);
void Manager_c46910(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_66df80();
void __attribute__((noreturn)) GameRoutine_98f290();
void __attribute__((noreturn)) GameRoutine_a594e0();
void __attribute__((noreturn)) GameRoutine_bd3fc0();
void __attribute__((noreturn)) GameRoutine_c058b0();
void __attribute__((noreturn)) GameRoutine_c061d0();
void __attribute__((noreturn)) GameRoutine_c187c0();
void __attribute__((noreturn)) GameRoutine_c3b170();
void __attribute__((noreturn)) GameRoutine_c3d4f0();
void __attribute__((noreturn)) GameRoutine_c3e520();
void __attribute__((noreturn)) GameRoutine_c3f3f0();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void wld_GfxLoader_loadFogTexture(__int64, __int64, __int64, __int64, __int64,
                                  char);
void wld_c3abd0(_QWORD*, __int64, unsigned __int64, __int64, unsigned __int64,
                __int64, __int64, __int64, __int64, __int64);
void wld_c3b610(__int64, unsigned int**);
void wld_c3e760(_DWORD*, unsigned int**);
long double wld_a7ad80(float32x4_t* a1, float32x4_t* a2, __int64 a3);
long double wld_a7b5b0(float32x4_t* a1, float32x4_t** a2, float32x4_t* a3,
                       __int64 a4);
__int64 wld_bd16c0(_QWORD* a1, __int64 a2);
__int64 wld_c03400(_QWORD* a1);
__int64** wld_c058e0(__int64** a1, __int64* a2);
__int64 wld_c0cd20(__int64 a1, __int64 a2, __int64* a3);
void wld_c11000(__int64 a1);
_QWORD* wld_c31840(__int64 a1, unsigned __int8* a2, char* a3);
void wld_c37860(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                unsigned __int64 a5, __int64 a6, unsigned __int64 a7,
                __int64 a8, char* a9, unsigned __int64 a10);
__int64 wld_c38f00(__int64 result);
void wld_c3b780(__int64 a1, __int64** a2);
__int64 wld_c41bf0(__int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                   __int64 a6);

long double wld_a7ad80(float32x4_t* a1, float32x4_t* a2, __int64 a3)
{
  float32x4_t v3;
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  int16x4_t v9;
  float v10;
  int16x4_t v11;
  float v12;
  int16x4_t v13;
  int16x4_t v14;
  unsigned __int64 v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  unsigned __int32 v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  int8x16_t v25;
  unsigned __int64 v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  int8x16_t v34;
  int8x16_t v35;
  int8x16_t v36;
  int8x16_t v37;
  int8x16_t v38;
  int8x16_t v39;
  int8x16_t v40;
  int8x16_t v41;
  int8x16_t v42;
  float v43;
  double v44;
  long double v45;
  float v46;
  float v47;
  long double v48;
  long double v49;
  long double v50;
  float v51;
  long double v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  int16x4_t v58;
  int16x4_t v59;
  int16x4_t v60;
  int16x4_t v61;
  float32x4_t v62;
  unsigned __int64 v63;
  int8x16_t v64;
  unsigned __int32 v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  int8x16_t v71;
  int8x16_t v72;
  unsigned __int64 v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  int8x16_t v82;
  int8x16_t v83;
  int8x16_t v84;
  int8x16_t v85;
  int8x16_t v86;
  int8x16_t v87;
  int8x16_t v88;
  int8x16_t v89;
  int8x16_t v90;
  float v91;
  double v92;
  long double v93;
  float v94;
  float v95;
  long double v96;
  long double v97;
  long double v98;
  float v99;
  long double v100;
  float32x4_t v101;
  long double result;
  float32x4_t v103;
  int v104;
  __int64 v105;
  int v106;
  __int64 v107;
  int8x16_t v108;
  int8x16_t v109;
  int8x16_t v110;
  int8x16_t v111;
  int8x16_t v112;
  int8x16_t v113;
  int8x16_t v114;
  int8x16_t v115;
  float32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  struct {
    float32x4_t v124;
    float32x4_t v125;
    float32x4_t v126;
    float32x4_t v127;
  } v124_;
  int8x16_t v128;

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  LANES64(v9).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(a1[9], *a2)))).n64_u64[0];
  if ((LANES64(v9).n64_u8[0] & 1) != 0 || (LANES64(v9).n64_u8[2] & 1) != 0 ||
      (LANES64(v9).n64_u8[4] & 1) != 0) {
    LODWORD(v10) = HIDWORD(LANES128(a2[1]).n128_u64[0]);
    LODWORD(v12) = LANES128(a2[1]).n128_u64[1];
  }
  else {
    LODWORD(v10) = HIDWORD(LANES128(a2[1]).n128_u64[0]);
    LANES64(v11).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(a1[10], v4)))).n64_u64[0];
    LODWORD(v12) = LANES128(a2[1]).n128_u64[1];
    if ((LANES64(v11).n64_u8[0] & 1) == 0 &&
        (LANES64(v11).n64_u8[2] & 1) == 0 &&
        (LANES64(v11).n64_u8[4] & 1) == 0) {
      LANES64(v13).n64_u64[0] =
          LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(a1[11], v5)))).n64_u64[0];
      if ((LANES64(v13).n64_u8[0] & 1) == 0 &&
          (LANES64(v13).n64_u8[2] & 1) == 0 &&
          (LANES64(v13).n64_u8[4] & 1) == 0) {
        LANES64(v14).n64_u64[0] =
            LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(a1[12], v6)))).n64_u64[0];
        if ((LANES64(v14).n64_u8[0] & 1) == 0 &&
            (LANES64(v14).n64_u8[2] & 1) == 0 &&
            (LANES64(v14).n64_u8[4] & 1) == 0) {
          goto LABEL_21;
        }
      }
    }
  }
  LANES128(a1[13]).n128_u64[0] = LANES128(v6).n128_u64[0];
  v118 = v4;
  v124_.v124 = v3;
  LODWORD(v15) = 0;
  LANES128(v16).n128_u64[0] = 0;
  v124_.v125 = v4;
  v124_.v126 = v5;
  v17 = a1[13];
  v124_.v127 = v6;
  LANES128(v17).n128_u64[1] = LANES128(v6).n128_u32[2];
  a1[13] = v17;
  LANES128(a1[15]).n128_f32[0] = sqrtf(
      (float)(LANES128_OF(vmulq_f32(v3, v3)).n128_f32[1] +
              (float)(LANES128(v3).n128_f32[0] * LANES128(v3).n128_f32[0])) +
      (float)(LANES128(v3).n128_f32[2] * LANES128(v3).n128_f32[2]));
  LANES128(a1[15]).n128_f32[1] = sqrtf(
      (float)((float)(PSEUDO_UNFUSED(v10 * v10)) +
              (float)(LANES128(v4).n128_f32[0] * LANES128(v4).n128_f32[0])) +
      (float)(v12 * v12));
  v18 = a1[15];
  LANES128(v18).n128_u64[1] = COERCE_UNSIGNED_INT(sqrtf(
      (float)(LANES128_OF(vmulq_f32(v5, v5)).n128_f32[1] +
              (float)(LANES128(v5).n128_f32[0] * LANES128(v5).n128_f32[0])) +
      (float)(LANES128(v5).n128_f32[2] * LANES128(v5).n128_f32[2])));
  a1[15] = v18;
  HIDWORD(v15) = LANES128(v18).n128_u32[1];
  v19 = LANES128(v18).n128_u32[0];
  LANES128(v16).n128_u64[1] = LANES128(v18).n128_u32[2];
  v116 = v3;
  v120 = v5;
  v122 = v6;
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v15),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] = vqtbl1_s8(
      COERCE_AS(int8x16_t, v15), COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v22 = vmulq_f32(
      vmulq_f32(v20, COERCE_AS(float32x4_t, LANES128(v18).n128_u32[0])), v21);
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v15),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v21).n128_i8[8] = vqtbl1_s8(
      COERCE_AS(int8x16_t, v15), COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v24 = vzip2q_s32(
      COERCE_AS(int32x4_t, LANES128(v18).n128_u32[0]),
      vzip1q_s32(COERCE_AS(int32x4_t, v15), COERCE_AS(int32x4_t, 0)));
  *(int8x8_t*)&LANES128(v23).n128_i8[8] =
      vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v25 = vzip1q_s32(
      vzip2q_s32(COERCE_AS(int32x4_t, LANES128(v18).n128_u32[0]), v16),
      COERCE_AS(int32x4_t, 0));
  v26 = LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  v28 = vsubq_f32(
      v22, vmulq_f32(vmulq_f32(v21, COERCE_AS(float32x4_t,
                                              LANES128(v18).n128_u32[0])),
                     v23));
  LANES128(v28).n128_u64[0] = LANES128_OF(vpaddq_f32(v28, v28)).n128_u64[0];
  v29 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v28).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v28).n128_u64[0]), 1));
  v30 = vrecpeq_f32(v29);
  v31 = vmulq_f32(v30, vrecpsq_f32(v30, v29));
  v32 = vmulq_f32(v31, vrecpsq_f32(v31, v29));
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, LANES128(v18).n128_u32[0]),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v23).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v27).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[1] = v26;
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v19),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[0] = 0x8000000080000000LL;
  LANES128(v17).n128_u64[1] = 0x8000000080000000LL;
  *(int8x8_t*)&LANES128(v25).n128_i8[8] =
      vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v20).n128_i8[8] = vqtbl1_s8(
      COERCE_AS(int8x16_t, v19), COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v18).n128_i8[8] = vqtbl1_s8(
      COERCE_AS(int8x16_t, v19), COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v34 = vmulq_f32(v32, vmlsq_f32(vmulq_f32(v23, v33), v25, v27));
  v35 = vmulq_f32(v32, vmlsq_f32(vmulq_f32(v27, v20), v33, v18));
  v36 = vmulq_f32(v32, vmlsq_f32(vmulq_f32(v25, v18), v20, v23));
  v37 =
      vmlsq_f32(vmlsq_f32(vmulq_f32(v34, v17), COERCE_AS(float32x4_t, 0), v35),
                COERCE_AS(float32x4_t, 0), v36);
  v38 = vceqzq_f32(v29);
  v39 = vbicq_s8(v34, v38);
  v40 = vbicq_s8(v35, v38);
  v41 = vbicq_s8(v36, v38);
  v42 = vbicq_s8(v37, v38);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v108 = v39;
    v110 = v40;
    v112 = v41;
    v114 = v42;
    v104 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v39 = v108;
    v40 = v110;
    v41 = v112;
    v42 = v114;
    if (v104 != 0) {
      v105 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v105;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v39 = v108;
      v40 = v110;
      v41 = v112;
      v42 = v114;
    }
  }
  v124_.v124 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v39, LANES128(v124_.v124).n128_f32[0]), v40,
                     COERCE_AS(float32x2_t, LANES128(v124_.v124).n128_u64[0]),
                     1),
      v41, v124_.v124, 2);
  v124_.v125 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v39, LANES128(v124_.v125).n128_f32[0]), v40,
                     COERCE_AS(float32x2_t, LANES128(v124_.v125).n128_u64[0]),
                     1),
      v41, v124_.v125, 2);
  v124_.v126 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v39, LANES128(v124_.v126).n128_f32[0]), v40,
                     COERCE_AS(float32x2_t, LANES128(v124_.v126).n128_u64[0]),
                     1),
      v41, v124_.v126, 2);
  v124_.v127 = vaddq_f32(
      v42, vmlaq_laneq_f32(
               vmlaq_lane_f32(vmulq_n_f32(v39, *(float*)&GameData_21a6120), v40,
                              *(float32x2_t*)&GameData_21a6120, 1),
               v41, COERCE_AS(float32x4_t, GameData_21a6120), 2));
  Quat_624bc0((void*)(&v128), (__int64)&v124_.v124);
  v43 = vmuls_lane_f32(LANES128(v128).n128_f32[1], v128, 2) +
        (float)(LANES128(v128).n128_f32[0] * LANES128(v128).n128_f32[3]);
  v44 = vmuls_lane_f32(LANES128(v128).n128_f32[1],
                       COERCE_AS(float32x2_t, LANES128(v128).n128_u64[0]), 1);
  v45 = atan2(v43 + v43, (LANES128_OF(vmulq_f32(v128, v128)).n128_f32[0] +
                          v44) * -0x1.0000000000000p+1 +
                             0x1.0000000000000p+0);
  v46 = *(double*)&v45;
  *((_QWORD*)&v49 + 1) = LANES128(v128).n128_u64[1];
  v47 = vmuls_lane_f32(-LANES128(v128).n128_f32[0], v128, 2) +
        (float)(LANES128(v128).n128_f32[1] * LANES128(v128).n128_f32[3]);
  *(_QWORD*)&v48 = -0x1.0000000000000p+0;
  *(double*)&v49 = v47 + v47;
  if (*(double*)&v49 > 0x1.0000000000000p+0) {
    *(double*)&v49 = 0x1.0000000000000p+0;
  }
  if (*(double*)&v49 < -0x1.0000000000000p+0) {
    *(double*)&v49 = -0x1.0000000000000p+0;
  }
  v50 = asin(v49, v48);
  v51 = *(double*)&v50;
  *(float*)&v50 =
      vmuls_lane_f32(LANES128(v128).n128_f32[0],
                     COERCE_AS(float32x2_t, LANES128(v128).n128_u64[0]), 1);
  v52 = atan2((float)(*(float*)&v50 + (float)(LANES128(v128).n128_f32[2] *
                                              LANES128(v128).n128_f32[3])) +
                  (float)(*(float*)&v50 + (float)(LANES128(v128).n128_f32[2] *
                                                  LANES128(v128).n128_f32[3])),
              (v44 + vmuls_lane_f32(LANES128(v128).n128_f32[2], v128, 2)) *
                      -0x1.0000000000000p+1 +
                  0x1.0000000000000p+0);
  LANES128(a1[14]).n128_f32[0] = v46;
  LANES128(a1[14]).n128_f32[1] = v51;
  *(float*)&v52 = *(double*)&v52;
  v53 = a1[14];
  LANES128(v53).n128_u64[1] = LODWORD(v52);
  a1[14] = v53;
  a1[9] = v116;
  a1[10] = v118;
  a1[11] = v120;
  a1[12] = v122;
LABEL_21:
  v54 = *(float32x4_t*)(a3 + 32);
  v55 = *(float32x4_t*)(a3 + 48);
  v56 = *(float32x4_t*)(a3 + 64);
  v57 = *(float32x4_t*)(a3 + 80);
  LANES64(v58).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v54, a1[16])))).n64_u64[0];
  if ((LANES64(v58).n64_u8[0] & 1) != 0 || (LANES64(v58).n64_u8[2] & 1) != 0 ||
      (LANES64(v58).n64_u8[4] & 1) != 0 ||
      (LANES64(v59).n64_u64[0] =
           LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v55, a1[17])))).n64_u64[0],
       (LANES64(v59).n64_u8[0] & 1) != 0) ||
      (LANES64(v59).n64_u8[2] & 1) != 0 || (LANES64(v59).n64_u8[4] & 1) != 0 ||
      (LANES64(v60).n64_u64[0] =
           LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v56, a1[18])))).n64_u64[0],
       (LANES64(v60).n64_u8[0] & 1) != 0) ||
      (LANES64(v60).n64_u8[2] & 1) != 0 || (LANES64(v60).n64_u8[4] & 1) != 0 ||
      (LANES64(v61).n64_u64[0] =
           LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v57, a1[19])))).n64_u64[0],
       (LANES64(v61).n64_u8[0] & 1) != 0) ||
      (LANES64(v61).n64_u8[2] & 1) != 0 || (LANES64(v61).n64_u8[4] & 1) != 0) {
    v62 = a1[22];
    LODWORD(v63) = 0;
    LANES128(a1[20]).n128_u64[0] = LANES128(v57).n128_u64[0];
    v124_.v124 = v54;
    LANES128(v64).n128_u64[0] = 0;
    v124_.v125 = v55;
    HIDWORD(v63) = LANES128(v62).n128_u32[1];
    v65 = LANES128(v62).n128_u32[0];
    LANES128(v64).n128_u64[1] = LANES128(v62).n128_u32[2];
    v66 = a1[20];
    v124_.v126 = v56;
    v124_.v127 = v57;
    LANES128(v66).n128_u64[1] = LANES128(v57).n128_u32[2];
    LANES128(v67).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v63),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v67).n128_i8[8] = vqtbl1_s8(
        COERCE_AS(int8x16_t, v63), COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    a1[20] = v66;
    v117 = v54;
    v119 = v55;
    v121 = v56;
    v123 = v57;
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v68).n128_i8[8] =
        vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v69 = vmulq_f32(
        vmulq_f32(v67, COERCE_AS(float32x4_t, LANES128(v62).n128_u32[0])), v68);
    LANES128(v68).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v63),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v68).n128_i8[8] = vqtbl1_s8(
        COERCE_AS(int8x16_t, v63), COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v71 = vzip2q_s32(
        COERCE_AS(int32x4_t, LANES128(v62).n128_u32[0]),
        vzip1q_s32(COERCE_AS(int32x4_t, v63), COERCE_AS(int32x4_t, 0)));
    *(int8x8_t*)&LANES128(v70).n128_i8[8] =
        vqtbl1_s8(v64, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v72 = vzip1q_s32(
        vzip2q_s32(COERCE_AS(int32x4_t, LANES128(v62).n128_u32[0]), v64),
        COERCE_AS(int32x4_t, 0));
    v73 = LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    LANES128(v74).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v75 = vsubq_f32(
        v69, vmulq_f32(vmulq_f32(v68, COERCE_AS(float32x4_t,
                                                LANES128(v62).n128_u32[0])),
                       v70));
    LANES128(v75).n128_u64[0] = LANES128_OF(vpaddq_f32(v75, v75)).n128_u64[0];
    v76 = vaddq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v75).n128_u64[0]), 0),
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v75).n128_u64[0]), 1));
    v77 = vrecpeq_f32(v76);
    v78 = vmulq_f32(v77, vrecpsq_f32(v77, v76));
    v79 = vmulq_f32(v78, vrecpsq_f32(v78, v76));
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v62).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, LANES128(v62).n128_u32[0]),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v70).n128_i8[8] =
        vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v80).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v74).n128_i8[8] =
        vqtbl1_s8(v72, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v72).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v80).n128_u64[1] = v73;
    LANES128(v67).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v65),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v81).n128_u64[0] = 0x8000000080000000LL;
    LANES128(v81).n128_u64[1] = 0x8000000080000000LL;
    *(int8x8_t*)&LANES128(v72).n128_i8[8] =
        vqtbl1_s8(v71, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v67).n128_i8[8] = vqtbl1_s8(
        COERCE_AS(int8x16_t, v65), COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v62).n128_i8[8] = vqtbl1_s8(
        COERCE_AS(int8x16_t, v65), COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v82 = vmulq_f32(v79, vmlsq_f32(vmulq_f32(v70, v80), v72, v74));
    v83 = vmulq_f32(v79, vmlsq_f32(vmulq_f32(v74, v67), v80, v62));
    v84 = vmulq_f32(v79, vmlsq_f32(vmulq_f32(v72, v62), v67, v70));
    v85 = vmlsq_f32(
        vmlsq_f32(vmulq_f32(v82, v81), COERCE_AS(float32x4_t, 0), v83),
        COERCE_AS(float32x4_t, 0), v84);
    v86 = vceqzq_f32(v76);
    v87 = vbicq_s8(v82, v86);
    v88 = vbicq_s8(v83, v86);
    v89 = vbicq_s8(v84, v86);
    v90 = vbicq_s8(v85, v86);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v109 = v87;
      v111 = v88;
      v113 = v89;
      v115 = v90;
      v106 = __cxa_guard_acquire((__int64)&GameData_21a6130);
      v87 = v109;
      v88 = v111;
      v89 = v113;
      v90 = v115;
      if (v106 != 0) {
        v107 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v107;
        __cxa_guard_release((__int64)&GameData_21a6130);
        v87 = v109;
        v88 = v111;
        v89 = v113;
        v90 = v115;
      }
    }
    v124_.v124 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v87, LANES128(v124_.v124).n128_f32[0]), v88,
                       COERCE_AS(float32x2_t, LANES128(v124_.v124).n128_u64[0]),
                       1),
        v89, v124_.v124, 2);
    v124_.v125 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v87, LANES128(v124_.v125).n128_f32[0]), v88,
                       COERCE_AS(float32x2_t, LANES128(v124_.v125).n128_u64[0]),
                       1),
        v89, v124_.v125, 2);
    v124_.v126 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v87, LANES128(v124_.v126).n128_f32[0]), v88,
                       COERCE_AS(float32x2_t, LANES128(v124_.v126).n128_u64[0]),
                       1),
        v89, v124_.v126, 2);
    v124_.v127 = vaddq_f32(
        v90, vmlaq_laneq_f32(
                 vmlaq_lane_f32(vmulq_n_f32(v87, *(float*)&GameData_21a6120),
                                v88, *(float32x2_t*)&GameData_21a6120, 1),
                 v89, COERCE_AS(float32x4_t, GameData_21a6120), 2));
    Quat_624bc0((void*)(&v128), (__int64)&v124_.v124);
    v91 = vmuls_lane_f32(LANES128(v128).n128_f32[1], v128, 2) +
          (float)(LANES128(v128).n128_f32[0] * LANES128(v128).n128_f32[3]);
    v92 = vmuls_lane_f32(LANES128(v128).n128_f32[1],
                         COERCE_AS(float32x2_t, LANES128(v128).n128_u64[0]), 1);
    v93 = atan2(v91 + v91, (LANES128_OF(vmulq_f32(v128, v128)).n128_f32[0] +
                            v92) * -0x1.0000000000000p+1 +
                               0x1.0000000000000p+0);
    v94 = *(double*)&v93;
    *((_QWORD*)&v97 + 1) = LANES128(v128).n128_u64[1];
    v95 = vmuls_lane_f32(-LANES128(v128).n128_f32[0], v128, 2) +
          (float)(LANES128(v128).n128_f32[1] * LANES128(v128).n128_f32[3]);
    *(_QWORD*)&v96 = -0x1.0000000000000p+0;
    *(double*)&v97 = v95 + v95;
    if (*(double*)&v97 > 0x1.0000000000000p+0) {
      *(double*)&v97 = 0x1.0000000000000p+0;
    }
    if (*(double*)&v97 < -0x1.0000000000000p+0) {
      *(double*)&v97 = -0x1.0000000000000p+0;
    }
    v98 = asin(v97, v96);
    v99 = *(double*)&v98;
    *(float*)&v98 =
        vmuls_lane_f32(LANES128(v128).n128_f32[0],
                       COERCE_AS(float32x2_t, LANES128(v128).n128_u64[0]), 1);
    v100 =
        atan2((float)(*(float*)&v98 + (float)(LANES128(v128).n128_f32[2] *
                                              LANES128(v128).n128_f32[3])) +
                  (float)(*(float*)&v98 + (float)(LANES128(v128).n128_f32[2] *
                                                  LANES128(v128).n128_f32[3])),
              (v92 + vmuls_lane_f32(LANES128(v128).n128_f32[2], v128, 2)) *
                      -0x1.0000000000000p+1 +
                  0x1.0000000000000p+0);
    LANES128(a1[21]).n128_f32[0] = v94;
    LANES128(a1[21]).n128_f32[1] = v99;
    *(float*)&v100 = *(double*)&v100;
    v101 = a1[21];
    LANES128(v101).n128_u64[1] = LODWORD(v100);
    a1[21] = v101;
    a1[16] = v117;
    a1[17] = v119;
    a1[18] = v121;
    a1[19] = v123;
  }
  result = *(long double*)(a3 + 16);
  LANES128(a1[22]).n128_u64[0] = *(_QWORD*)&result;
  v103 = a1[22];
  LANES128(v103).n128_u64[1] = DWORD2(result);
  a1[22] = v103;
  return result;
}

long double wld_a7b5b0(float32x4_t* a1, float32x4_t** a2, float32x4_t* a3,
                       __int64 a4)
{
  float32x4_t v8;
  float32x4_t v9;
  int8x16_t v10;
  float32x4_t v11;
  float32x4_t v12;
  int32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  unsigned __int32 v16;
  int32x2_t v17;
  int8x16_t v18;
  int8x16_t v19;
  unsigned __int64 v20;
  int8x16_t v21;
  unsigned __int64 v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  int8x16_t v27;
  int8x16_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  int8x16_t v41;
  int8x16_t v42;
  int8x16_t v43;
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
  float32x4_t v54;
  float32x4_t v55;
  float32x2_t v56;
  float32x4_t v57;
  int32x2_t v58;
  int8x16_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  unsigned __int32 v68;
  float32x4_t* v69;
  unsigned __int64 v71;
  float32x4_t v72;
  unsigned int v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  int8x16_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  int8x16_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  int8x16_t v96;
  int8x16_t v97;
  int8x16_t v98;
  int8x16_t v99;
  struct {
    float32x4_t v100;
    float32x4_t v101;
    float32x4_t v102;
    float32x4_t v103;
  } v100_;

  LANES128(*(a2[2])).n128_u32[0] &= 0x33FFFFFFu;
  v8 = **a2;
  v9 = (*a2)[1];
  v11 = (*a2)[2];
  v10 = (*a2)[3];
  if ((LANES128(a1[8]).n128_u8[0] & 7) != 0) {
    v12 = vmulq_f32(v8, v8);
    v13 = (__typeof__(v13)){0};
    v14 = vmulq_f32(v9, v9);
    LANES128(v15).n128_u64[0] = __PAIR64__(
        COERCE_UNSIGNED_INT(sqrtf(
            (float)(LANES128(v14).n128_f32[1] +
                    (float)(LANES128(v9).n128_f32[0] *
                            LANES128(v9).n128_f32[0])) +
            (float)(LANES128(v9).n128_f32[2] * LANES128(v9).n128_f32[2]))),
        COERCE_UNSIGNED_INT(sqrtf(
            (float)(LANES128(v12).n128_f32[1] +
                    (float)(LANES128(v8).n128_f32[0] *
                            LANES128(v8).n128_f32[0])) +
            (float)(LANES128(v8).n128_f32[2] * LANES128(v8).n128_f32[2]))));
    LANES128(v15).n128_u64[1] = COERCE_UNSIGNED_INT(
        sqrtf((float)(LANES128_OF(vmulq_f32(v11, v11)).n128_f32[1] +
                      (float)(LANES128(v11).n128_f32[0] *
                              LANES128(v11).n128_f32[0])) +
              (float)(LANES128(v11).n128_f32[2] * LANES128(v11).n128_f32[2])));
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v99 = v10;
      v85 = v15;
      v88 = v9;
      v91 = v11;
      v95 = v8;
      v79 = __cxa_guard_acquire((__int64)&GameData_21a6130);
      v15 = v85;
      v9 = v88;
      v11 = v91;
      v8 = v95;
      v13 = (__typeof__(v13)){0};
      v10 = v99;
      if (v79 != 0) {
        v80 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v80;
        __cxa_guard_release((__int64)&GameData_21a6130);
        v15 = v85;
        v9 = v88;
        v11 = v91;
        v8 = v95;
        v13 = (__typeof__(v13)){0};
        v10 = v99;
      }
    }
    v16 = LANES128(a1[8]).n128_u32[0];
    LANES128(v12).n128_u32[0] = 0;
    LANES128(v10).n128_u32[3] = 0;
    LANES128(v14).n128_u32[0] = v16 & 4;
    LANES64(v17).n64_u64[0] = LANES128_OF(vceqq_s32(v14, v12)).n128_u64[0];
    v18 = a1[4];
    LANES128(v18).n128_u32[3] = 0;
    v19 = vbslq_s8(vdupq_lane_s32(v17, 0), v15, v18);
    if ((v16 & 2) != 0) {
      v96 = v10;
      v92 = v19;
      math_Mtx43_MakeRotation((void*)(&v100_.v100), a1 + 3);
      v19 = v92;
      v10 = v96;
      v52 = v100_.v100;
      v55 = v100_.v103;
      v16 = LANES128(a1[8]).n128_u32[0];
      v51 = v100_.v101;
      v54 = v100_.v102;
    }
    else {
      LODWORD(v20) = 0;
      LANES128(v21).n128_u64[0] = 0;
      HIDWORD(v20) = LANES128(v15).n128_u32[1];
      LANES128(v21).n128_u64[1] = LANES128(v15).n128_u32[2];
      v22 = LANES128(v15).n128_u32[0];
      LANES128(v23).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v20),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v24).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v20),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v25).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v26).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v23).n128_i8[8] = vqtbl1_s8(
          COERCE_AS(int8x16_t, v20), COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      *(int8x8_t*)&LANES128(v24).n128_i8[8] = vqtbl1_s8(
          COERCE_AS(int8x16_t, v20), COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      *(int8x8_t*)&LANES128(v25).n128_i8[8] =
          vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      *(int8x8_t*)&LANES128(v26).n128_i8[8] =
          vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v27 = vzip2q_s32(COERCE_AS(int32x4_t, LANES128(v15).n128_u32[0]),
                       vzip1q_s32(COERCE_AS(int32x4_t, v20), v13));
      v28 = vzip1q_s32(
          vzip2q_s32(COERCE_AS(int32x4_t, LANES128(v15).n128_u32[0]), v21),
          v13);
      LANES128(v29).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v30).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      v31 = vmulq_f32(v24, COERCE_AS(float32x4_t, v22));
      LANES128(v24).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v32).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v22),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      v33 = vmulq_f32(vmulq_f32(v23, COERCE_AS(float32x4_t, v22)), v25);
      LANES128(v25).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v34).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, v22),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v24).n128_i8[8] =
          vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      *(int8x8_t*)&LANES128(v30).n128_i8[8] =
          vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v35 = vsubq_f32(v33, vmulq_f32(v31, v26));
      *(int8x8_t*)&LANES128(v25).n128_i8[8] =
          vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      *(int8x8_t*)&LANES128(v29).n128_i8[8] =
          vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      *(int8x8_t*)&LANES128(v34).n128_i8[8] = vqtbl1_s8(
          COERCE_AS(int8x16_t, v22), COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      *(int8x8_t*)&LANES128(v32).n128_i8[8] = vqtbl1_s8(
          COERCE_AS(int8x16_t, v22), COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v28).n128_u64[0] = 0x8000000080000000LL;
      LANES128(v28).n128_u64[1] = 0x8000000080000000LL;
      LANES128(v35).n128_u64[0] = LANES128_OF(vpaddq_f32(v35, v35)).n128_u64[0];
      v36 = vaddq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v35).n128_u64[0]), 0),
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v35).n128_u64[0]), 1));
      v37 = vrecpeq_f32(v36);
      v38 = vmulq_f32(v37, vrecpsq_f32(v37, v36));
      v39 = vmulq_f32(v38, vrecpsq_f32(v38, v36));
      v40 = vmulq_f32(v39, vmlsq_f32(vmulq_f32(v24, v25), v30, v29));
      v41 = vmulq_f32(v39, vmlsq_f32(vmulq_f32(v29, v34), v25, v32));
      v42 = vmulq_f32(v39, vmlsq_f32(vmulq_f32(v30, v32), v34, v24));
      v43 = vceqzq_f32(v36);
      v44 = vmulq_f32(v40, v28);
      v45 = vbicq_s8(v40, v43);
      v46 = vbicq_s8(v42, v43);
      v47 = vmlsq_f32(v44, v13, v41);
      v48 = vbicq_s8(v41, v43);
      v49 = vbicq_s8(vmlsq_f32(v47, v13, v42), v43);
      v50 = vmulq_n_f32(v45, LANES128(v11).n128_f32[0]);
      v51 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v45, LANES128(v9).n128_f32[0]), v48,
                         COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]), 1),
          v46, v9, 2);
      v52 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v45, LANES128(v8).n128_f32[0]), v48,
                         COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]), 1),
          v46, v8, 2);
      v53 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v45, *(float*)&GameData_21a6120), v48,
                         *(float32x2_t*)&GameData_21a6120, 1),
          v46, COERCE_AS(float32x4_t, GameData_21a6120), 2);
      v54 = vmlaq_laneq_f32(
          vmlaq_lane_f32(v50, v48,
                         COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]), 1),
          v46, v11, 2);
      v55 = vaddq_f32(v49, v53);
    }
    PSEUDO_LOW_LANE128(v48, n128_u32, 0);
    PSEUDO_LOW_LANE128(v53, n128_u32, v16 & 1);
    LANES64(v56).n64_u32[0] = 0;
    LANES128(v57).n128_u64[0] = 0;
    LANES64(v58).n64_u64[0] = LANES128_OF(vceqq_s32(v53, v48)).n128_u64[0];
    LANES64(v56).n64_u32[1] = LANES128(v19).n128_u32[1];
    v59 = a1[2];
    LANES128(v57).n128_u64[1] = LANES128(v19).n128_u32[2];
    LANES128(v59).n128_u32[3] = 0;
    v60 = vmlaq_f32(vmlaq_f32(vmulq_n_f32(v52, LANES128(v19).n128_f32[0]),
                              COERCE_AS(float32x4_t, 0), v51),
                    COERCE_AS(float32x4_t, 0), v54);
    v61 = vmlaq_f32(
        vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v52), v51, v56, 1),
        COERCE_AS(float32x4_t, 0), v54);
    v62 = vmlaq_laneq_f32(vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v52),
                                    COERCE_AS(float32x4_t, 0), v51),
                          v54, v57, 2);
    v63 = vaddq_f32(
        v55, vmlaq_f32(vmlaq_f32(vmulq_f32(v52, COERCE_AS(float32x4_t, 0)),
                                 COERCE_AS(float32x4_t, 0), v51),
                       COERCE_AS(float32x4_t, 0), v54));
    v8 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v60).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v60, 2);
    v9 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v61).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v61).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v61, 2);
    v11 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v62).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v62, 2);
    v10 =
        vaddq_f32(vbslq_s8(vdupq_lane_s32(v58, 0), v10, v59),
                  vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                      LANES128(v63).n128_f32[0]),
                          COERCE_AS(float32x4_t, GameData_1a83610),
                          COERCE_AS(float32x2_t, LANES128(v63).n128_u64[0]), 1),
                      COERCE_AS(float32x4_t, GameData_1a83090), v63, 2));
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0) {
    v98 = v10;
    v90 = v11;
    v94 = v8;
    v87 = v9;
    v74 = __cxa_guard_acquire((__int64)&GameData_21a55c0);
    v9 = v87;
    v11 = v90;
    v8 = v94;
    v10 = v98;
    if (v74 != 0) {
      v75 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a55a0 =
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55a0 + 1) = v75;
      v76 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                        (_QWORD)GameData_212c2a0);
      *(_QWORD*)&GameData_21a55b0 =
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                      (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55b0 + 1) = v76;
      v77 = *((_QWORD*)GameData_212c2a0 + 1);
      *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
      *((_QWORD*)&GameData_21a5580 + 1) = v77;
      v78 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a5590 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a5590 + 1) = v78;
      __cxa_guard_release((__int64)&GameData_21a55c0);
      v9 = v87;
      v11 = v90;
      v8 = v94;
      v10 = v98;
    }
  }
  v65 = COERCE_AS(float32x4_t, GameData_21a5580);
  v64 = COERCE_AS(float32x4_t, GameData_21a5590);
  v67 = COERCE_AS(float32x4_t, GameData_21a55a0);
  v66 = COERCE_AS(float32x4_t, GameData_21a55b0);
  v68 = LANES128(a1[8]).n128_u32[0];
  if ((v68 & 0x20) == 0) {
    if ((v68 & 0x10) == 0) {
      goto LABEL_10;
    }
  LABEL_14:
    v97 = v10;
    v82 = v64;
    v83 = v67;
    v81 = v65;
    v84 = v66;
    v86 = v9;
    v89 = v11;
    v93 = v8;
    math_Mtx43_MakeRotation((void*)(&v100_.v100), a1 + 6);
    v10 = v97;
    v9 = v86;
    v11 = v89;
    v8 = v93;
    v65 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v100_.v100, LANES128(v81).n128_f32[0]),
                       v100_.v101,
                       COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0]), 1),
        v100_.v102, v81, 2);
    v64 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v100_.v100, LANES128(v82).n128_f32[0]),
                       v100_.v101,
                       COERCE_AS(float32x2_t, LANES128(v82).n128_u64[0]), 1),
        v100_.v102, v82, 2);
    v67 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v100_.v100, LANES128(v83).n128_f32[0]),
                       v100_.v101,
                       COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0]), 1),
        v100_.v102, v83, 2);
    v66 = vaddq_f32(
        v100_.v103,
        vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v100_.v100, LANES128(v84).n128_f32[0]), v100_.v101,
                COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0]), 1),
            v100_.v102, v84, 2));
    if ((LANES128(a1[8]).n128_u32[0] & 8) == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  LODWORD(v71) = 0;
  LANES128(v72).n128_u64[0] = 0;
  HIDWORD(v71) = HIDWORD(LANES128(a1[7]).n128_u64[0]);
  v73 = LANES128(a1[7]).n128_u64[0];
  LANES128(v72).n128_u64[1] = (unsigned int)LANES128(a1[7]).n128_u64[1];
  v66 = vaddq_f32(
      vmlaq_laneq_f32(vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, v73),
                                                 *(float*)&GameData_21a55b0),
                                     COERCE_AS(float32x4_t, v71),
                                     *(float32x2_t*)&GameData_21a55b0, 1),
                      v72, COERCE_AS(float32x4_t, GameData_21a55b0), 2),
      COERCE_AS(float32x4_t, 0));
  v65 = vmlaq_laneq_f32(vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, v73),
                                                   *(float*)&GameData_21a5580),
                                       COERCE_AS(float32x4_t, v71),
                                       *(float32x2_t*)&GameData_21a5580, 1),
                        v72, COERCE_AS(float32x4_t, GameData_21a5580), 2);
  v64 = vmlaq_laneq_f32(vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, v73),
                                                   *(float*)&GameData_21a5590),
                                       COERCE_AS(float32x4_t, v71),
                                       *(float32x2_t*)&GameData_21a5590, 1),
                        v72, COERCE_AS(float32x4_t, GameData_21a5590), 2);
  v67 = vmlaq_laneq_f32(vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, v73),
                                                   *(float*)&GameData_21a55a0),
                                       COERCE_AS(float32x4_t, v71),
                                       *(float32x2_t*)&GameData_21a55a0, 1),
                        v72, COERCE_AS(float32x4_t, GameData_21a55a0), 2);
  if ((v68 & 0x10) != 0) {
    goto LABEL_14;
  }
LABEL_10:
  if ((v68 & 8) != 0) {
  LABEL_11:
    v66 =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                      LANES128(v66).n128_f32[0]),
                          COERCE_AS(float32x4_t, GameData_1a83610),
                          COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]), 1),
                      COERCE_AS(float32x4_t, GameData_1a83090), v66, 2),
                  a1[5]);
    v65 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v65).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v65, 2);
    v64 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v64).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v64, 2);
    v67 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v67).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v67, 2);
  }
LABEL_12:
  LANES128(*(a2[2])).n128_u32[0] &= 0x33FFFFFFu;
  v69 = *a2;
  *v69 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v8, LANES128(v65).n128_f32[0]), v9,
                     COERCE_AS(float32x2_t, LANES128(v65).n128_u64[0]), 1),
      v11, v65, 2);
  v69[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v8, LANES128(v64).n128_f32[0]), v9,
                     COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]), 1),
      v11, v64, 2);
  v69[2] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v8, LANES128(v67).n128_f32[0]), v9,
                     COERCE_AS(float32x2_t, LANES128(v67).n128_u64[0]), 1),
      v11, v67, 2);
  v69[3] = vaddq_f32(
      v10,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v8, LANES128(v66).n128_f32[0]), v9,
                         COERCE_AS(float32x2_t, LANES128(v66).n128_u64[0]), 1),
          v11, v66, 2));
  return wld_a7ad80(a1, a3, a4);
}

__int64 wld_bd16c0(_QWORD* a1, __int64 a2)
{
  __int64 v4;
  const char* v5;
  unsigned __int8 explicit;
  int* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  unsigned __int8 v12;
  int* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  float32x2_t* v17;
  __int64 v18;
  __int64 v19;
  long double v21;
  float v22;
  float v23;
  double v24;
  double v25;
  double v26;
  double v27;
  double v28;
  double v29;
  double v30;
  double v31;
  double v32;
  __int64 v33;
  __int64* v34;
  float v35;
  float v36;
  float32x4_t v37;
  int v38;
  int v39;
  float32x2_t v40;
  float32x4_t v41;
  int8x16_t v42;
  unsigned __int64 v43;
  float32x4_t v44;
  float32x4_t v45;
  unsigned __int64 v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  char v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  __int64 v62;
  unsigned int v63;
  unsigned int i;
  float32x4_t* v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  int8x16_t v70;
  int8x16_t v71;
  int8x16_t v72;
  float32x4_t v73;
  float32x4_t v74;
  int8x16_t v75;
  int8x16_t v76;
  int8x16_t v77;
  float32x4_t v78;
  float32x4_t v79;
  int8x16_t v80;
  float32x4_t v81;
  float32x4_t v82;
  int8x16_t v83;
  float32x4_t v84;
  float32x4_t v85;
  int32x4_t v86;
  int8x16_t v87;
  float32x4_t v88;
  float32x4_t v89;
  int8x16_t v90;
  int32x4_t v91;
  int8x16_t v92;
  float32x4_t v93;
  int8x16_t v94;
  int8x16_t v95;
  int8x16_t v96;
  int8x16_t v97;
  unsigned __int64 v98;
  float32x4_t v99;
  float32x4_t v100;
  unsigned __int64 v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  unsigned __int64 v111;
  float32x4_t* v112;
  float32x4_t* v113;
  __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  bool v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  __int64 v122;
  float32x4_t v123;
  __int64 v124;
  unsigned __int64 v125;
  unsigned __int8 v126;
  unsigned __int64 v127;
  unsigned __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  int v146;
  __int64 v147;
  int v148;
  float32x4_t v149;
  float32x4_t v150;
  float32x4_t v151;
  int8x16_t v152;
  int8x16_t v153;
  float32x4_t v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  int8x16_t v158;
  __n128 v159;
  int8x16_t v160;
  struct {
    float32x2_t v161[3];
    unsigned __int64 v162;
    unsigned __int64 v163;
    unsigned __int64 v164;
    float32x4_t v165;
    float32x4_t v166;
    float32x4_t v167;
    float32x4_t v168;
    unsigned __int8 v169;
  } v161_;
  int8x16_t v170;
  _QWORD v171[10];
  int8x16x2_t v172;
  int8x16x2_t v173;
  int8x16x2_t v174;
  int8x16x2_t v175;
  int8x16x2_t v176;
  int8x16x2_t v177;

  v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
  if (*(_QWORD*)(a2 + 32) != 0) {
    v4 = a1[1];
    v5 = *(const char**)(a2 + 24);
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ea08,
                                    memory_order_acquire);
    v7 = GameData_212ea00;
    if ((explicit & 1) == 0) {
      v145 = v4;
      v146 = __cxa_guard_acquire((__int64)GameData_212ea08),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v4 = v145;
      if (v146 != 0) {
        *v7 = wld_Crc32(0, "LocatorModule", 0xDu),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
        __cxa_guard_release((__int64)GameData_212ea08),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v4 = v145;
      }
    }
    v8 = *(_QWORD*)(v4 + 512);
    v9 = v8;
    do {
      if (v9 == *(_QWORD*)(v4 + 504)) {
        goto LABEL_8;
      }
      v10 = *(_DWORD*)(v9 - 16);
      v9 -= 16;
      v8 -= 16;
    } while (v10 != *v7);
    if (*(_QWORD*)(v4 + 512) == v8 || (v11 = *(_QWORD*)(v8 + 8)) == 0) {
    LABEL_8:
      v12 = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                 memory_order_acquire);
      v13 = GameData_212df08;
      if ((v12 & 1) == 0) {
        v147 = v4;
        v148 = __cxa_guard_acquire((__int64)GameData_212df10),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
        v4 = v147;
        if (v148 != 0) {
          *v13 = wld_Crc32(0, "ModelModule", 0xBu),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
          __cxa_guard_release((__int64)GameData_212df10),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v61 = COERCE_AS(__typeof__(v61),
                              PSEUDO_REGISTER(__n128, "v3", "=w"));
          v4 = v147;
        }
      }
      v14 = *(_QWORD*)(v4 + 512);
      v15 = v14;
      while (v15 != *(_QWORD*)(v4 + 504)) {
        v16 = *(_DWORD*)(v15 - 16);
        v15 -= 16;
        v14 -= 16;
        if (v16 == *v13) {
          if (*(_QWORD*)(v4 + 512) == v14) {
            goto LABEL_16;
          }
          v17 = *(float32x2_t**)(v14 + 8);
          if (v17 == nullptr) {
            goto LABEL_16;
          }
          v161_.v161[0] = v17[3];
          v11 = GameHr_bd3bc0(v4, (__int64*)v161_.v161),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
          if (v11 == 0) {
            goto LABEL_16;
          }
          goto LABEL_15;
        }
      }
      goto LABEL_16;
    }
  LABEL_15:
    v18 = LocatorModule_a7bee0(v11, v5),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    if (v18 != 0) {
      goto LABEL_20;
    }
  LABEL_16:
    v19 = **(_QWORD**)a2;
    if (v19 != 0 && *(_DWORD*)(v19 + 16) == *(_DWORD*)(*(_QWORD*)a2 + 8LL)) {
      *(_BYTE*)(v19 + 33) = 0;
      return 0;
    }
    else {
      return 0;
    }
  }
  else {
    v18 = 0;
  LABEL_20:
    v160 = COERCE_INT8X16_T(GameRoutine_14a1a30(a2)),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v159 = game_14a1a60(a2),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v21 = GameRoutine_14a1af0(a2),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v22 = 0x1.1df46a0000000p-6f * *(float*)&v21;
    v23 = vmuls_lane_f32(0x1.1df46a0000000p-6f, *(float32x2_t*)&v21, 1);
    v24 = vmuls_lane_f32(0x1.1df46a0000000p-6f, *(float32x4_t*)&v21, 2) *
          0x1.0000000000000p-1;
    v25 = cos(v24),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v26 = sin(v24),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v27 = v22 * 0x1.0000000000000p-1;
    v28 = cos(v27),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v29 = sin(v27),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v30 = v23 * 0x1.0000000000000p-1;
    v31 = cos(v30),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v32 = sin(v30),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v34 = *(__int64**)a2;
    v33 = *(_QWORD*)(a2 + 8);
    LANES64(v161_.v161[0]).n64_u64[0] = v18;
    LANES64(v161_.v161[1]).n64_u64[0] = (unsigned __int64)v34;
    LANES64(v161_.v161[2]).n64_u64[0] = v33;
    LANES128(v37).n128_f32[0] =
        v25 * v29 * v31 - PSEUDO_UNFUSED(v32 * (v26 * v28));
    v35 = PSEUDO_UNFUSED(v26 * v29 * v31) + PSEUDO_UNFUSED(v25 * v28) * v32;
    v36 = PSEUDO_UNFUSED(v26 * v29 * v32) + PSEUDO_UNFUSED(v25 * v28) * v31;
    *(float*)&v32 = v26 * v28 * v31 - PSEUDO_UNFUSED(v32 * (v25 * v29));
    LANES128(v37).n128_f32[1] = v35;
    LANES128(v37).n128_u32[2] = LODWORD(v32);
    if (v33 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                                memory_order_relaxed);
    }
    LANES128(v37).n128_f32[3] = v36;
    if (*(_BYTE*)(a2 + 20) != 0) {
      v38 = *(_DWORD*)(a2 + 16);
    }
    else {
      v38 = -1;
    }
    v161_.v162 = __PAIR64__(*(_DWORD*)(a2 + 56), v38);
    if (*(_BYTE*)(a2 + 44) == 1) {
      v39 = *(_DWORD*)(a2 + 40);
    }
    else {
      v39 = *(unsigned __int8*)(*(_QWORD*)(**(_QWORD**)a2 + 24LL) + 248LL) >> 5;
    }
    LANES64(v40).n64_u32[0] = 0;
    v153 = v37;
    LODWORD(v161_.v163) = v39;
    BYTE4(v161_.v163) = 0;
    LANES128(v41).n128_u64[0] = 0;
    v42 = v37;
    LANES128(v42).n128_u32[3] = 0;
    LANES64(v40).n64_u32[1] = LANES128(v159).n128_u32[1];
    LANES128(v41).n128_u64[1] = LANES128(v159).n128_u32[2];
    v43 = LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
              .n64_u64[0];
    LANES128(v44).n128_u64[0] =
        LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v37).n128_u64[0])))
            .n64_u64[0];
    LANES128(v45).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
            .n64_u64[0];
    v46 = LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    LANES128(v44).n128_u64[1] = v43;
    LANES128(v45).n128_u64[1] = v46;
    v47 = vmulq_f32(v44, v44);
    v172.val[1] = vmulq_f32(v45, v45);
    v172.val[0] = vsubq_f32(
        COERCE_AS(float32x4_t, GameData_1a837f0),
        vaddq_f32(vaddq_f32(v47, v47), vaddq_f32(v172.val[1], v172.val[1])));
    LANES128(v48).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v48).n128_u64[1] = v43;
    v49 = vmulq_f32(v48, v42);
    v174.val[1] = vaddq_f32(v49, v49);
    LANES128(v42).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v42).n128_u64[1] = v46;
    v50 = vmulq_laneq_f32(v42, v37, 3);
    v51 = vaddq_f32(v50, v50);
    v175.val[0] = vaddq_f32(v174.val[1], v51);
    v175.val[1] = vsubq_f32(v174.val[1], v51);
    LANES128(v174.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v175, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
            .n64_u64[0];
    LANES128(v172.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v175, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v174.val[1]).n128_i8[8] =
        vqtbl2_s8(v175, COERCE_AS(int8x8_t, 0x706050413121110LL));
    *(int8x8_t*)&LANES128(v172.val[1]).n128_i8[8] =
        vqtbl2_s8(v175, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
    v174.val[0] = v172.val[0];
    LANES128(v175.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v174, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v175.val[0]).n128_i8[8] =
        vqtbl2_s8(v174, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
    LANES128(v175.val[1]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v174, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v175.val[1]).n128_i8[8] =
        vqtbl2_s8(v174, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
    LANES128(v174.val[0]).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v172, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v174.val[0]).n128_i8[8] =
        vqtbl2_s8(v172, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
    v52 = vmlaq_f32(
        vmlaq_f32(vmulq_n_f32(v175.val[0], LANES128(v159).n128_f32[0]),
                  COERCE_AS(float32x4_t, 0), v175.val[1]),
        COERCE_AS(float32x4_t, 0), v174.val[0]);
    v53 = vmlaq_f32(
        vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v175.val[0]),
                       v175.val[1], v40, 1),
        COERCE_AS(float32x4_t, 0), v174.val[0]);
    v54 = vmlaq_laneq_f32(
        vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v175.val[0]),
                  COERCE_AS(float32x4_t, 0), v175.val[1]),
        v174.val[0], v41, 2);
    v55 = vaddq_f32(
        vmlaq_f32(vmlaq_f32(vmulq_f32(v175.val[0], COERCE_AS(float32x4_t, 0)),
                            COERCE_AS(float32x4_t, 0), v175.val[1]),
                  COERCE_AS(float32x4_t, 0), v174.val[0]),
        COERCE_AS(float32x4_t, 0));
    v56 = vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                      LANES128(v52).n128_f32[0]);
    v161_.v169 = *(_BYTE*)(a2 + 52);
    if (v38 >= 0) {
      v57 = 7;
    }
    else {
      v57 = 5;
    }
    v157 = vmlaq_laneq_f32(
        vmlaq_lane_f32(v56, COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v52, 2);
    v161_.v165 = v157;
    v161_.v166 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v53).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v53).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v53, 2);
    v155 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v54).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v54).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83090), v54, 2);
    v156 = v161_.v166;
    v161_.v167 = v155;
    v161_.v168 = vaddq_f32(
        v160, vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                  LANES128(v55).n128_f32[0]),
                      COERCE_AS(float32x4_t, GameData_1a83610),
                      COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]), 1),
                  COERCE_AS(float32x4_t, GameData_1a83090), v55, 2));
    v154 = v161_.v168;
    v58 = wld_bd2320((__int64)a1, v161_.v161, v57),
    v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
    v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v62 = *v34;
    if (*v34 != 0 && *(_DWORD*)(v62 + 16) == *((_DWORD*)v34 + 2)) {
      v63 = *(_DWORD*)(v62 + 36);
      if (v63 != 0) {
        for (i = 0; i < v63; ++i) {
          if ((int)v63 > (int)i) {
            v65 = *(float32x4_t**)(v62 + 40 + 8LL * (int)i);
            if (v65 != nullptr) {
              v65[4] = v58;
              v65[5] = v59;
              LANES128(v65[8]).n128_u16[0] = 257;
              v65[6] = v60;
              v65[7] = v61;
              v63 = *(_DWORD*)(v62 + 36);
            }
          }
        }
      }
    }
    v149 = v59;
    v150 = v58;
    v151 = v60;
    v152 = v61;
    game_14a3920((__int64)v34),
        v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    v66 = v156;
    v67 = v157;
    v68 = v154;
    v69 = v155;
    if (*(_DWORD*)(a2 + 48) == 1) {
      v70 = vmulq_f32(v150, v150);
      v71 = vmulq_f32(v149, v149);
      v72 = vmulq_f32(v151, v151);
      v73 = vextq_s8(v70, v70, 8u);
      v74 = vextq_s8(v71, v71, 8u);
      LANES128(v70).n128_u64[0] =
          LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
              .n64_u64[0];
      LANES128(v71).n128_u64[0] =
          LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
              .n64_u64[0];
      LANES128(v72).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v72, v72, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
              .n64_u64[0];
      LANES128(v73).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
              .n64_u64[0];
      LANES128(v74).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
              .n64_u64[0];
      LANES128(v70).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
              .n64_u64[0];
      PSEUDO_LOW_LANE128(v72, n128_u64, 0);
      v75 = vceqq_f32(v73, v72);
      LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
      v76 = vceqq_f32(v74, v72);
      LANES128(v74).n128_u64[1] = LANES128(v74).n128_u64[0];
      v77 = vceqq_f32(v70, v72);
      LANES128(v70).n128_u64[1] = LANES128(v70).n128_u64[0];
      v78 = vrsqrteq_f32(v73);
      v79 = vrsqrteq_f32(v74);
      LANES128(v80).n128_u64[0] =
          LANES64_OF(
              vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v73).n128_u64[0])))
              .n64_u32[0] |
          ((unsigned __int64)LANES64_OF(
               vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v74).n128_u64[0])))
               .n64_u32[0]
           << 32);
      LANES128(v80).n128_u64[1] =
          LANES64_OF(
              vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
              .n64_u32[0];
      v158 = v80;
      v81 = vmulq_f32(v79, vrsqrtsq_f32(v79, vmulq_f32(v74, v79)));
      v82 = vmulq_f32(v78, vrsqrtsq_f32(v78, vmulq_f32(v73, v78)));
      v83 = vbicq_s8(
          vmulq_f32(v150,
                    vmulq_f32(v82, vrsqrtsq_f32(v82, vmulq_f32(v73, v82)))),
          vceqzq_f32(v73));
      v84 = vrsqrteq_f32(v70);
      *(int8x16_t*)v171 = vbslq_s8(
          vdupq_lane_s32(
              COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v75)).n128_u64[0]), 0),
          v83, COERCE_AS(int8x16_t, GameData_1a82dd0));
      *(int8x16_t*)&v171[2] = vbslq_s8(
          vdupq_lane_s32(
              COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v76)).n128_u64[0]), 0),
          vbicq_s8(
              vmulq_f32(v149,
                        vmulq_f32(v81, vrsqrtsq_f32(v81, vmulq_f32(v74, v81)))),
              vceqzq_f32(v74)),
          COERCE_AS(int8x16_t, GameData_1a83610));
      v85 = vmulq_f32(v84, vrsqrtsq_f32(v84, vmulq_f32(v70, v84)));
      *(int8x16_t*)&v171[4] = vbslq_s8(
          vdupq_lane_s32(
              COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v77)).n128_u64[0]), 0),
          vbicq_s8(
              vmulq_f32(v151,
                        vmulq_f32(v85, vrsqrtsq_f32(v85, vmulq_f32(v70, v85)))),
              vceqzq_f32(v70)),
          COERCE_AS(int8x16_t, GameData_1a83090));
      *(_OWORD*)&v171[6] = (__typeof__(*(_OWORD*)&v171[6])){0};
      Quat_624bc0((void*)(&v170), (__int64)v171),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
      LANES128(v86).n128_u32[0] = 0;
      v87 = vmulq_f32(v170, v170);
      LANES128(v87).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v87, v87, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v87).n128_u64[0])))
              .n64_u64[0];
      LANES128(v87).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v87).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v87).n128_u64[0])))
              .n64_u64[0];
      LANES128(v87).n128_u64[1] = LANES128(v87).n128_u64[0];
      v88 = vrsqrteq_f32(v87);
      v89 = vmulq_f32(v88, vrsqrtsq_f32(v88, vmulq_f32(v87, v88)));
      v90 = vmulq_f32(v170,
                      vmulq_f32(v89, vrsqrtsq_f32(v89, vmulq_f32(v87, v89))));
      v91 = v160;
      v92 = vbicq_s8(v90, vcgtq_f32(vdupq_n_s32(0x3727C5ACu), v87));
      PSEUDO_LOW_LANE128(v90, n128_u32, v39 & 1);
      v93 =
          vbslq_s8(vdupq_lane_s32(
                       COERCE_AS(int32x2_t,
                                 LANES128_OF(vceqq_s32(v90, v86)).n128_u64[0]),
                       0),
                   v152, v160);
      PSEUDO_LOW_LANE128(v91, n128_u32, v39 & 4);
      v94 = vdupq_lane_s32(
          COERCE_AS(int32x2_t, LANES128_OF(vceqq_s32(v91, v86)).n128_u64[0]),
          0);
      v95 = vbslq_s8(v94, v158, v159);
      PSEUDO_LOW_LANE128(v94, n128_u32, v39 & 2);
      v96 = vdupq_lane_s32(
          COERCE_AS(int32x2_t, LANES128_OF(vceqq_s32(v94, v86)).n128_u64[0]),
          0);
      LANES128(v86).n128_u64[0] = 0;
      v173.val[1] = vbslq_s8(v96, v92, v153);
      LANES128(v92).n128_u32[0] = 0;
      LANES128(v86).n128_u64[1] = LANES128(v95).n128_u32[2];
      LANES128(v92).n128_u32[1] = LANES128(v95).n128_u32[1];
      LANES128(v94).n128_u32[0] = LANES128(v95).n128_u32[0];
      v97 = v173.val[1];
      LANES128(v97).n128_u32[3] = 0;
      v98 = LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
                .n64_u64[0];
      LANES128(v99).n128_u64[0] =
          LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t,
                                          LANES128(v173.val[1]).n128_u64[0])))
              .n64_u64[0];
      LANES128(v100).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
              .n64_u64[0];
      v101 =
          LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
      LANES128(v99).n128_u64[1] = v98;
      LANES128(v100).n128_u64[1] = v101;
      v102 = vmulq_f32(v99, v99);
      v103 = vmulq_f32(v100, v100);
      v177.val[0] =
          vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                    vaddq_f32(vaddq_f32(v103, v103), vaddq_f32(v102, v102)));
      LANES128(v102).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v102).n128_u64[1] = v98;
      v104 = vmulq_f32(v102, v97);
      v105 = vaddq_f32(v104, v104);
      LANES128(v97).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v97, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      LANES128(v97).n128_u64[1] = v101;
      v106 = vmulq_laneq_f32(v97, v173.val[1], 3);
      v107 = vaddq_f32(v106, v106);
      v176.val[0] = vaddq_f32(v105, v107);
      v176.val[1] = vsubq_f32(v105, v107);
      LANES128(v177.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v176, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
              .n64_u64[0];
      LANES128(v173.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v176, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v177.val[1]).n128_i8[8] =
          vqtbl2_s8(v176, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
      *(int8x8_t*)&LANES128(v173.val[1]).n128_i8[8] =
          vqtbl2_s8(v176, COERCE_AS(int8x8_t, 0x706050413121110LL));
      v173.val[0] = v177.val[0];
      LANES128(v105).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v173, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v105).n128_i8[8] =
          vqtbl2_s8(v173, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
      LANES128(v102).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v173, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v102).n128_i8[8] =
          vqtbl2_s8(v173, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
      LANES128(v173.val[0]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v177, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v173.val[0]).n128_i8[8] =
          vqtbl2_s8(v177, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
      v173.val[1] =
          vmlaq_f32(vmlaq_f32(vmulq_n_f32(v105, LANES128(v94).n128_f32[0]),
                              COERCE_AS(float32x4_t, 0), v102),
                    COERCE_AS(float32x4_t, 0), v173.val[0]);
      v108 = vmlaq_f32(
          vmlaq_lane_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v105), v102,
                         COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, 0), v173.val[0]);
      v109 =
          vmlaq_laneq_f32(vmlaq_f32(vmulq_f32(COERCE_AS(float32x4_t, 0), v105),
                                    COERCE_AS(float32x4_t, 0), v102),
                          v173.val[0], v86, 2);
      v110 = vaddq_f32(
          vmlaq_f32(vmlaq_f32(vmulq_f32(v105, COERCE_AS(float32x4_t, 0)),
                              COERCE_AS(float32x4_t, 0), v102),
                    COERCE_AS(float32x4_t, 0), v173.val[0]),
          COERCE_AS(float32x4_t, 0));
      v67 = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                          LANES128(v173.val[1]).n128_f32[0]),
              COERCE_AS(float32x4_t, GameData_1a83610),
              COERCE_AS(float32x2_t, LANES128(v173.val[1]).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v173.val[1], 2);
      v66 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                     LANES128(v108).n128_f32[0]),
                         COERCE_AS(float32x4_t, GameData_1a83610),
                         COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v108, 2);
      v69 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                     LANES128(v109).n128_f32[0]),
                         COERCE_AS(float32x4_t, GameData_1a83610),
                         COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0]), 1),
          COERCE_AS(float32x4_t, GameData_1a83090), v109, 2);
      v68 = vaddq_f32(
          v93, vmlaq_laneq_f32(
                   vmlaq_lane_f32(
                       vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0),
                                   LANES128(v110).n128_f32[0]),
                       COERCE_AS(float32x4_t, GameData_1a83610),
                       COERCE_AS(float32x2_t, LANES128(v110).n128_u64[0]), 1),
                   COERCE_AS(float32x4_t, GameData_1a83090), v110, 2));
    }
    v112 = (float32x4_t*)a1[4];
    v111 = a1[5];
    v161_.v165 = v67;
    v161_.v166 = v66;
    v161_.v167 = v69;
    v161_.v168 = v68;
    if ((unsigned __int64)v112 >= v111) {
      v114 = a1[3];
      v115 = ((__int64)v112 - v114) >> 7;
      v116 = v115 + 1;
      if ((unsigned __int64)(v115 + 1) >> 57 != 0) {
        GameRoutine_bd3fc0(),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
      v117 = v111 - v114;
      if (v117 >> 6 > v116) {
        v116 = v117 >> 6;
      }
      v118 = (unsigned __int64)v117 >= 0x7FFFFFFFFFFFFF80LL;
      v119 = 0x1FFFFFFFFFFFFFFLL;
      if (!v118) {
        v119 = v116;
      }
      if (v119 >> 57 != 0) {
        GameRoutine_60a210(),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
      v120 = v119 << 7;
      v121 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v119 << 7, 16, 0),
      v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
      v122 = (__int64)v112 + v121 - v114;
      *(_QWORD*)v122 = v18;
      *(_QWORD*)(v122 + 8) = v34;
      *(_QWORD*)(v122 + 16) = v33;
      if (v33 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                                  memory_order_relaxed);
        v114 = a1[3];
        v112 = (float32x4_t*)a1[4];
        v115 = ((__int64)v112 - v114) >> 7;
      }
      v123 = v161_.v168;
      v124 = v122 - (v115 << 7);
      v125 = v121 + v120;
      v113 = (float32x4_t*)(v122 + 128);
      *(_QWORD*)(v122 + 88) = LANES128(v161_.v167).n128_u64[1];
      *(_QWORD*)(v122 + 96) = LANES128(v123).n128_u64[0];
      v126 = v161_.v169;
      *(_QWORD*)(v122 + 104) = LANES128(v123).n128_u64[1];
      *(_BYTE*)(v122 + 112) = v126;
      v127 = LANES128(v161_.v166).n128_u64[0];
      *(_QWORD*)(v122 + 56) = LANES128(v161_.v165).n128_u64[1];
      *(_QWORD*)(v122 + 64) = v127;
      v128 = LANES128(v161_.v167).n128_u64[0];
      *(_QWORD*)(v122 + 72) = LANES128(v161_.v166).n128_u64[1];
      *(_QWORD*)(v122 + 80) = v128;
      v129 = v161_.v163;
      *(_QWORD*)(v122 + 24) = v161_.v162;
      *(_QWORD*)(v122 + 32) = v129;
      v130 = LANES128(v161_.v165).n128_u64[0];
      *(_QWORD*)(v122 + 40) = v161_.v164;
      *(_QWORD*)(v122 + 48) = v130;
      if ((float32x4_t*)v114 != v112) {
        v131 = v114;
        v132 = v124;
        do {
          *(_QWORD*)v132 = *(_QWORD*)v131;
          *(_QWORD*)(v132 + 8) = *(_QWORD*)(v131 + 8);
          v142 = *(_QWORD*)(v131 + 16);
          *(_QWORD*)(v132 + 16) = v142;
          if (v142 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v142 + 8), 1u,
                                      memory_order_relaxed);
          }
          v133 = *(_QWORD*)(v131 + 24);
          v134 = *(_QWORD*)(v131 + 32);
          v135 = *(_QWORD*)(v131 + 48);
          *(_QWORD*)(v132 + 40) = *(_QWORD*)(v131 + 40);
          *(_QWORD*)(v132 + 48) = v135;
          *(_QWORD*)(v132 + 24) = v133;
          *(_QWORD*)(v132 + 32) = v134;
          v136 = *(_QWORD*)(v131 + 56);
          v137 = *(_QWORD*)(v131 + 64);
          v138 = *(_QWORD*)(v131 + 80);
          *(_QWORD*)(v132 + 72) = *(_QWORD*)(v131 + 72);
          *(_QWORD*)(v132 + 80) = v138;
          *(_QWORD*)(v132 + 56) = v136;
          *(_QWORD*)(v132 + 64) = v137;
          v139 = *(_QWORD*)(v131 + 88);
          v140 = *(_QWORD*)(v131 + 96);
          v141 = *(_QWORD*)(v131 + 104);
          LOBYTE(v138) = *(_BYTE*)(v131 + 112);
          v131 += 128;
          *(_BYTE*)(v132 + 112) = v138;
          *(_QWORD*)(v132 + 96) = v140;
          *(_QWORD*)(v132 + 104) = v141;
          *(_QWORD*)(v132 + 88) = v139;
          v132 += 128;
        } while ((float32x4_t*)v131 != v112);
        do {
          v143 = *(_QWORD*)(v114 + 16);
          if (v143 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v143 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v143 + 16LL))(v143),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v61 = COERCE_AS(__typeof__(v61),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
            std___1___shared_weak_count___release_weak(v143),
                v59 = COERCE_AS(__typeof__(v59),
                                PSEUDO_REGISTER(__n128, "v1", "=w")),
                v60 = COERCE_AS(__typeof__(v60),
                                PSEUDO_REGISTER(__n128, "v2", "=w")),
                v61 = COERCE_AS(__typeof__(v61),
                                PSEUDO_REGISTER(__n128, "v3", "=w"));
          }
          v114 += 128;
        } while ((float32x4_t*)v114 != v112);
        v114 = a1[3];
      }
      a1[3] = v124;
      a1[4] = v113;
      a1[5] = v125;
      if (v114 != 0) {
        v144 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v144 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v144, v114),
            v59 =
                COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v60 =
                COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
      }
    }
    else {
      LANES128(*(v112)).n128_u64[0] = v18;
      LANES128(*(v112)).n128_u64[1] = (unsigned __int64)v34;
      LANES128(v112[1]).n128_u64[0] = v33;
      if (v33 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 8), 1u,
                                  memory_order_relaxed);
      }
      v113 = v112 + 8;
      LANES128(v112[5]).n128_u64[1] = LANES128(v161_.v167).n128_u64[1];
      v112[6] = v161_.v168;
      LANES128(v112[7]).n128_u8[0] = v161_.v169;
      LANES128(v112[3]).n128_u64[1] = LANES128(v161_.v165).n128_u64[1];
      v112[4] = v161_.v166;
      LANES128(v112[5]).n128_u64[0] = LANES128(v161_.v167).n128_u64[0];
      LANES128(v112[1]).n128_u64[1] = v161_.v162;
      LANES128(v112[2]).n128_u64[0] = v161_.v163;
      LANES128(v112[2]).n128_u64[1] = v161_.v164;
      LANES128(v112[3]).n128_u64[0] = LANES128(v161_.v165).n128_u64[0];
    }
    a1[4] = v113;
    if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
      std___1___shared_weak_count___release_weak(v33),
          v59 = COERCE_AS(__typeof__(v59), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v60 = COERCE_AS(__typeof__(v60), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v3", "=w"));
    }
    return 1;
  }
}

__int64 wld_c03400(_QWORD* a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _BOOL4 v22;
  _BOOL4 v23;
  __int64 v24;
  unsigned __int16* v25;
  __int64* v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  char v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  int v63;
  __int64 v64;
  int* v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  char v71;
  __int64 v72;
  char* v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  _BOOL4 v76;
  _BOOL4 v77;
  __int64 v78;
  unsigned int* v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  int v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  char v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  char v117;
  __int64 v118;
  char* v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  _BOOL4 v122;
  _BOOL4 v123;
  __int64 v124;
  unsigned int* v125;
  __int64 v126;
  unsigned int* v127;
  __int64 v128;
  unsigned int* v129;
  __int64 v130;
  unsigned int* v131;
  __int64 v132;
  unsigned int* v133;
  __int64 v134;
  unsigned int* v135;
  __int64 v136;
  unsigned int* v137;
  __int64 v138;
  __int64* v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  _QWORD* v143;
  __int64* v145;
  unsigned int* v146;
  struct {
    _QWORD v147[7];
    __int16 v148;
    char gap106_[2];
    int v149;
    __int64 v150;
    __int64 v151;
  } v147_;
  unsigned __int64 v152;
  struct {
    unsigned __int64 v153[3];
    __int64* v154;
  } v153_;
  struct {
    _QWORD v155[3];
    int v156;
    int v157;
    int v158;
    int v159;
    int v160;
    int v161;
    int v162;
    int v163;
  } v155_;
  struct {
    __int64 v164;
    unsigned __int64 v165;
    char* v166;
    unsigned int* v167;
    int v168;
    int v169;
    int v170;
    int v171;
    int v172;
    int v173;
  } v164_;

  if (GameData_2203498 != 0) {
    result = GameData_22034a0;
    *a1 = GameData_2203498;
    a1[1] = result;
    if (result == 0) {
      return result;
    }
    goto LABEL_248;
  }
  v3 = game_g_frame_clock_ptr[0];
  if (((*(__int64 (**)(_QWORD, const char*, __int64, __int64))(
           **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
           *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432),
           "Contents:/Graphics/Settings/Preset/Grass.def", 44, 255) &
       1) == 0) {
    goto LABEL_240;
  }
  v4 = (*(__int64 (**)(_QWORD, const char*, __int64, __int64))(
      **(_QWORD**)(*v3 + 13432) + 56LL))(
      *(_QWORD*)(*v3 + 13432), "Contents:/Graphics/Settings/Preset/Grass.def",
      44, 255);
  v5 = *(_QWORD*)(v4 + 592);
  v6 = v4;
  if (v5 != 0) {
    v147_.v147[6] = 0;
    v7 = *(_QWORD*)(v4 + 576);
    v147_.v149 = 0;
    v147_.v147[4] = -1;
    v147_.v147[5] = 0;
    v147_.v148 = 257;
    v147_.v150 = v5;
    v147_.v151 = v7;
    v147_.v147[0] = GameData_212ce30 + 2;
    __builtin_memset(&v147_.v147[1], 0, 24);
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        544, 16, 0);
    *(_QWORD*)v9 = 0;
    *(_BYTE*)(v9 + 12) = 0;
    v146 = (unsigned int*)v9;
    *(_DWORD*)(v9 + 8) = -1;
    *(_QWORD*)(v9 + 16) = v9 + 32;
    *(_QWORD*)(v9 + 24) = v9 + 32;
    GameRoutine_1fa0(v9, 0);
    GameRoutine_1fd0(v9, (__int64)v147_.v147);
    v10 = fw_memory_HeapManager_Allocate(*v8, 80, 16, 0);
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_QWORD*)(v10 + 48) = 0;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    LOBYTE(v164_.v165) = 0;
    *(_QWORD*)v10 = GameData_1fd1468;
    *(_QWORD*)(v10 + 24) = 1;
    v11 = v10 + 24;
    *(_QWORD*)(v10 + 32) = 0;
    v145 = (__int64*)(v10 + 32);
    v164_.v167 = (unsigned int*)(v10 + 24);
    LOBYTE(v164_.v164) = 14;
    *(_DWORD*)((char*)&v164_.v164 + 1) = 1936876886;
    HIDWORD(v164_.v164) = 1852795251;
    if (GameRoutine_c05690(&v146, (__int64)&v164_.v164)) {
      timeline_21c0(v146, v164_.v167);
    }
    if ((v164_.v164 & 1) != 0 && v164_.v166 != nullptr) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, (__int64)v164_.v166);
    }
    v164_.v165 = 0;
    v164_.v166 = nullptr;
    v164_.v164 = 0;
    LOWORD(v155_.v155[0]) = 0;
    timeline_2020((unsigned __int16*)v146, v155_.v155);
    v13 = SLOWORD(v155_.v155[0]);
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         SLOWORD(v155_.v155[0]), 16, 0);
    memset(v15, 0, v13);
    Value_2500((__int64*)v146, v15, v13);
    GameRoutine_60a060((char*)&v164_.v164, v15, SLOWORD(v155_.v155[0]));
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v16, v15);
    v17 = v164_.v164;
    BYTE1(v155_.v155[2]) = 0;
    WORD1(v155_.v155[2]) = 0;
    HIDWORD(v155_.v155[2]) = 0;
    v155_.v155[0] = 0x61726150646F4C1ELL;
    strcpy((char*)&v155_.v155[1], "mPresets");
    v18 = (__int64)v164_.v166;
    if ((v164_.v164 & 1) != 0) {
      v19 = v164_.v166;
    }
    else {
      v19 = (char*)&v164_.v164 + 1;
    }
    if ((v164_.v164 & 1) != 0) {
      v20 = v164_.v165;
    }
    else {
      v20 = (unsigned __int64)(unsigned __int8)v164_.v164 >> 1;
    }
    if (v20 >= 0xF) {
      v21 = 15;
    }
    else {
      v21 = v20;
    }
    v22 = memcmp((__int64)v155_.v155 + 1, (__int64)v19, v21) == 0;
    v23 = v20 == 15 && v22;
    if ((v17 & 1) != 0 && v18 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v18);
    }
    v25 = (unsigned __int16*)v146;
    if (!v23) {
    LABEL_80:
      v164_.v165 = 0;
      v164_.v166 = nullptr;
      v164_.v164 = 0;
      LOWORD(v155_.v155[0]) = 0;
      timeline_2020(v25, v155_.v155);
      v67 = SLOWORD(v155_.v155[0]);
      v68 = fw_memory_g_heap_manager_ptr;
      v69 =
          fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         SLOWORD(v155_.v155[0]), 16, 0);
      memset(v69, 0, v67);
      Value_2500((__int64*)v146, v69, v67);
      GameRoutine_60a060((char*)&v164_.v164, v69, SLOWORD(v155_.v155[0]));
      v70 = 128;
      if (*(_QWORD*)(*(_QWORD*)v68 + 200LL) == 0) {
        v70 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v68 + v70, v69);
      v71 = v164_.v164;
      strcpy((char*)v155_.v155, "$LodDistancePresets");
      HIDWORD(v155_.v155[2]) = 0;
      v72 = (__int64)v164_.v166;
      if ((v164_.v164 & 1) != 0) {
        v73 = v164_.v166;
      }
      else {
        v73 = (char*)&v164_.v164 + 1;
      }
      if ((v164_.v164 & 1) != 0) {
        v74 = v164_.v165;
      }
      else {
        v74 = (unsigned __int64)(unsigned __int8)v164_.v164 >> 1;
      }
      if (v74 >= 0x12) {
        v75 = 18;
      }
      else {
        v75 = v74;
      }
      v76 = memcmp((__int64)v155_.v155 + 1, (__int64)v73, v75) == 0;
      v77 = v74 == 18 && v76;
      if ((v71 & 1) != 0 && v72 != 0) {
        v78 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v78 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v78, v72);
      }
      v79 = v146;
      if (!v77) {
        goto LABEL_232;
      }
      v153_.v153[0] = 0;
      timeline_2360((unsigned __int64*)v146, v153_.v153);
      v81 = *(_QWORD*)(v10 + 56);
      v80 = *(_QWORD*)(v10 + 64);
      v82 = v153_.v153[0];
      v83 = 0x6DB6DB6DB6DB6DB7LL * ((v80 - v81) >> 3);
      v84 = v153_.v153[0] - v83;
      if (v153_.v153[0] <= v83) {
        if (v153_.v153[0] >= v83) {
          v92 = *(_QWORD*)(v10 + 64);
          goto LABEL_137;
        }
        v92 = v81 + 56 * v153_.v153[0];
        if (v92 != v80) {
          v103 = *(_QWORD*)(v10 + 64);
          do {
            v104 = *(_BYTE*)(v103 - 56);
            v103 -= 56;
            if ((v104 & 1) != 0) {
              v105 = *(_QWORD*)(v80 - 40);
              if (v105 != 0) {
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v106 = 128;
                }
                else {
                  v106 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v106, v105);
              }
            }
            v80 = v103;
          } while (v103 != v92);
        }
      }
      else {
        v85 = *(_QWORD*)(v10 + 72);
        if (0x6DB6DB6DB6DB6DB7LL * ((v85 - v80) >> 3) < v84) {
          if (v153_.v153[0] > 0x492492492492492LL) {
            GameRoutine_c061d0();
          }
          v86 = 0x6DB6DB6DB6DB6DB7LL * ((v85 - v81) >> 3);
          if (2 * v86 > v153_.v153[0]) {
            v82 = 2 * v86;
          }
          if (v86 >= 0x249249249249249LL) {
            v82 = 0x492492492492492LL;
          }
          if (v82 <= 0x492492492492492LL) {
            v87 = 56 * v82;
            v88 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 56 * v82, 16, 0);
            v89 = v88 + v87;
            v90 = v88;
            v91 = v88 + v80 - v81;
            memset(v91, 0, 56 * ((56 * v84 - 56) / 0x38) + 56);
            v92 = v91 + 56 * ((56 * v84 - 56) / 0x38) + 56;
            if (v81 != v80) {
              v93 = v81;
              v94 = v90;
              do {
                v95 = *(_QWORD*)v93;
                v96 = *(_QWORD*)(v93 + 16);
                *(_QWORD*)(v94 + 8) = *(_QWORD*)(v93 + 8);
                *(_QWORD*)(v94 + 16) = v96;
                *(_QWORD*)v94 = v95;
                *(_QWORD*)(v93 + 8) = 0;
                *(_QWORD*)(v93 + 16) = 0;
                *(_QWORD*)v93 = 0;
                v97 = *(_QWORD*)(v93 + 24);
                v98 = *(_QWORD*)(v93 + 32);
                v99 = *(_QWORD*)(v93 + 40);
                v100 = *(_DWORD*)(v93 + 48);
                v93 += 56;
                *(_DWORD*)(v94 + 48) = v100;
                *(_QWORD*)(v94 + 32) = v98;
                *(_QWORD*)(v94 + 40) = v99;
                *(_QWORD*)(v94 + 24) = v97;
                v94 += 56;
              } while (v93 != v80);
              do {
                if ((*(_BYTE*)v81 & 1) != 0) {
                  v101 = *(_QWORD*)(v81 + 16);
                  if (v101 != 0) {
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v102 = 128;
                    }
                    else {
                      v102 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v102, v101);
                  }
                }
                v81 += 56;
              } while (v81 != v80);
              v81 = *(_QWORD*)(v10 + 56);
            }
            *(_QWORD*)(v10 + 56) = v90;
            *(_QWORD*)(v10 + 64) = v92;
            *(_QWORD*)(v10 + 72) = v89;
            if (v81 != 0) {
              v107 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v107 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v107, v81);
              v92 = *(_QWORD*)(v10 + 64);
            }
            goto LABEL_137;
          }
        LABEL_249:
          GameRoutine_60a210();
        }
        memset(*(_QWORD*)(v10 + 64), 0, 56 * ((56 * v84 - 56) / 0x38) + 56);
        v92 = v80 + 56 * ((56 * v84 - 56) / 0x38) + 56;
      }
      *(_QWORD*)(v10 + 64) = v92;
    LABEL_137:
      v108 = v92 - *(_QWORD*)(v10 + 56);
      if (v108 != 0) {
        v109 = 48;
        v110 = 0x6DB6DB6DB6DB6DB7LL * (v108 >> 3);
        do {
          v111 = *(_QWORD*)(v10 + 56);
          BYTE5(v164_.v164) = 0;
          LOBYTE(v164_.v164) = 8;
          *(_DWORD*)((char*)&v164_.v164 + 1) = 1701667150;
          v164_.v167 = (unsigned int*)(v111 + v109 - 48);
          GameStringReads_c05cc0((__int64**)&v146, (__int64)&v164_.v164);
          if ((v164_.v164 & 1) != 0 && v164_.v166 != nullptr) {
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v112 = 128;
            }
            else {
              v112 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v112,
                (__int64)v164_.v166);
          }
          v164_.v165 = 0;
          v164_.v166 = nullptr;
          v164_.v164 = 0;
          LOWORD(v155_.v155[0]) = 0;
          timeline_2020((unsigned __int16*)v146, v155_.v155);
          v113 = SLOWORD(v155_.v155[0]);
          v114 = fw_memory_g_heap_manager_ptr;
          v115 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, SLOWORD(v155_.v155[0]),
              16, 0);
          memset(v115, 0, v113);
          Value_2500((__int64*)v146, v115, v113);
          GameRoutine_60a060((char*)&v164_.v164, v115, SLOWORD(v155_.v155[0]));
          if (*(_QWORD*)(*(_QWORD*)v114 + 200LL) != 0) {
            v116 = 128;
          }
          else {
            v116 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v114 + v116, v115);
          v117 = v164_.v164;
          LOBYTE(v155_.v155[0]) = 16;
          strcpy((char*)v155_.v155 + 1, "Distance");
          v118 = (__int64)v164_.v166;
          if ((v164_.v164 & 1) != 0) {
            v119 = v164_.v166;
          }
          else {
            v119 = (char*)&v164_.v164 + 1;
          }
          if ((v164_.v164 & 1) != 0) {
            v120 = v164_.v165;
          }
          else {
            v120 = (unsigned __int64)(unsigned __int8)v164_.v164 >> 1;
          }
          if (v120 >= 8) {
            v121 = 8;
          }
          else {
            v121 = v120;
          }
          v122 = memcmp((__int64)v155_.v155 + 1, (__int64)v119, v121) == 0;
          v123 = v120 == 8 && v122;
          if ((v117 & 1) != 0 && v118 != 0) {
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v124 = 128;
            }
            else {
              v124 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v124, v118);
          }
          if (v123) {
            LOWORD(v164_.v164) = 0;
            v164_.v167 = (unsigned int*)(v111 + v109 - 24);
            if (GameRoutine_c05fb0((__int64**)&v146, (__int64)&v164_.v164)) {
              v125 = v164_.v167;
              if ((timeline_21c0(v146, (unsigned int*)v155_.v155) & 1) != 0) {
                *v125 = v155_.v155[0];
              }
            }
            if ((v164_.v164 & 1) != 0 && v164_.v166 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v126 = 128;
              }
              else {
                v126 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v126,
                  (__int64)v164_.v166);
            }
            LOWORD(v164_.v164) = 0;
            v164_.v167 = (unsigned int*)(v111 + v109 - 20);
            if (GameRoutine_c05fb0((__int64**)&v146, (__int64)&v164_.v164)) {
              v127 = v164_.v167;
              if ((timeline_21c0(v146, (unsigned int*)v155_.v155) & 1) != 0) {
                *v127 = v155_.v155[0];
              }
            }
            if ((v164_.v164 & 1) != 0 && v164_.v166 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v128 = 128;
              }
              else {
                v128 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v128,
                  (__int64)v164_.v166);
            }
            LOWORD(v164_.v164) = 0;
            v164_.v167 = (unsigned int*)(v111 + v109 - 16);
            if (GameRoutine_c05fb0((__int64**)&v146, (__int64)&v164_.v164)) {
              v129 = v164_.v167;
              if ((timeline_21c0(v146, (unsigned int*)v155_.v155) & 1) != 0) {
                *v129 = v155_.v155[0];
              }
            }
            if ((v164_.v164 & 1) != 0 && v164_.v166 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v130 = 128;
              }
              else {
                v130 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v130,
                  (__int64)v164_.v166);
            }
            LOWORD(v164_.v164) = 0;
            v164_.v167 = (unsigned int*)(v111 + v109 - 12);
            if (GameRoutine_c05fb0((__int64**)&v146, (__int64)&v164_.v164)) {
              v131 = v164_.v167;
              if ((timeline_21c0(v146, (unsigned int*)v155_.v155) & 1) != 0) {
                *v131 = v155_.v155[0];
              }
            }
            if ((v164_.v164 & 1) != 0 && v164_.v166 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v132 = 128;
              }
              else {
                v132 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v132,
                  (__int64)v164_.v166);
            }
            LOWORD(v164_.v164) = 0;
            v164_.v167 = (unsigned int*)(v111 + v109 - 8);
            if (GameRoutine_c05fb0((__int64**)&v146, (__int64)&v164_.v164)) {
              v133 = v164_.v167;
              if ((timeline_21c0(v146, (unsigned int*)v155_.v155) & 1) != 0) {
                *v133 = v155_.v155[0];
              }
            }
            if ((v164_.v164 & 1) != 0 && v164_.v166 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v134 = 128;
              }
              else {
                v134 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v134,
                  (__int64)v164_.v166);
            }
            LOWORD(v164_.v164) = 0;
            v164_.v167 = (unsigned int*)(v111 + v109 - 4);
            if (GameRoutine_c05fb0((__int64**)&v146, (__int64)&v164_.v164)) {
              v135 = v164_.v167;
              if ((timeline_21c0(v146, (unsigned int*)v155_.v155) & 1) != 0) {
                *v135 = v155_.v155[0];
              }
            }
            if ((v164_.v164 & 1) != 0 && v164_.v166 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v136 = 128;
              }
              else {
                v136 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v136,
                  (__int64)v164_.v166);
            }
            LOWORD(v164_.v164) = 0;
            v164_.v167 = (unsigned int*)(v111 + v109);
            if (GameRoutine_c05fb0((__int64**)&v146, (__int64)&v164_.v164)) {
              v137 = v164_.v167;
              if ((timeline_21c0(v146, (unsigned int*)v155_.v155) & 1) != 0) {
                *v137 = v155_.v155[0];
              }
            }
            if ((v164_.v164 & 1) != 0 && v164_.v166 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v138 = 128;
              }
              else {
                v138 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v138,
                  (__int64)v164_.v166);
            }
          }
          --v110;
          v109 += 56;
        } while (v110 != 0);
      }
      v79 = v146;
      v11 = v10 + 24;
    LABEL_232:
      *(_QWORD*)v79 = 0;
      v139 = (__int64*)v146;
      v146 = nullptr;
      if (v139 != nullptr) {
        v140 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v140 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v140, (__int64)v139);
      }
      (*(void (**)(_QWORD*))(v147_.v147[0] + 24LL))(v147_.v147);
      goto LABEL_237;
    }
    v152 = 0;
    timeline_2360((unsigned __int64*)v146, &v152);
    v27 = *(_QWORD*)(v10 + 32);
    v26 = *(__int64**)(v10 + 40);
    v28 = v152;
    v29 = 0x8E38E38E38E38E39LL * (((__int64)v26 - v27) >> 4);
    v30 = v152 - v29;
    if (v152 <= v29) {
      if (v152 >= v29) {
        v38 = *(_QWORD*)(v10 + 40);
        goto LABEL_71;
      }
      v38 = v27 + 144 * v152;
      if ((__int64*)v38 != v26) {
        v56 = *(_QWORD**)(v10 + 40);
        do {
          v57 = *((_BYTE*)v56 - 144);
          v56 -= 18;
          if ((v57 & 1) != 0) {
            v58 = *(v26 - 16);
            if (v58 != 0) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v59 = 128;
              }
              else {
                v59 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v58);
            }
          }
          v26 = v56;
        } while (v56 != (_QWORD*)v38);
      }
    }
    else {
      v31 = *(_QWORD*)(v10 + 48);
      if (0x8E38E38E38E38E39LL * ((v31 - (__int64)v26) >> 4) < v30) {
        if (v152 > 0x1C71C71C71C71C7LL) {
          GameRoutine_c058b0();
        }
        v32 = 0x8E38E38E38E38E39LL * ((v31 - v27) >> 4);
        if (2 * v32 > v152) {
          v28 = 2 * v32;
        }
        if (v32 >= 0xE38E38E38E38E3LL) {
          v28 = 0x1C71C71C71C71C7LL;
        }
        if (v28 > 0x1C71C71C71C71C7LL) {
          goto LABEL_249;
        }
        v33 = 9 * v28;
        v34 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 144 * v28, 16, 0);
        v35 = (__int64)v26 + v34 - v27;
        v36 = (_QWORD*)v34;
        v37 = v34 + 16 * v33;
        memset(v35, 0, 144 * ((144 * v30 - 144) / 0x90) + 144);
        v38 = v35 + 144 * ((144 * v30 - 144) / 0x90) + 144;
        if ((__int64*)v27 != v26) {
          v39 = (__int64*)v27;
          v143 = v36;
          do {
            v40 = *v39;
            v41 = v39[2];
            v36[1] = v39[1];
            v36[2] = v41;
            *v36 = v40;
            v39[1] = 0;
            v39[2] = 0;
            *v39 = 0;
            v42 = v39[9];
            v44 = v39[6];
            v43 = v39[7];
            v36[8] = v39[8];
            v36[9] = v42;
            v36[6] = v44;
            v36[7] = v43;
            v45 = v39[13];
            v47 = v39[10];
            v46 = v39[11];
            v36[12] = v39[12];
            v36[13] = v45;
            v36[10] = v47;
            v36[11] = v46;
            v48 = v39[17];
            v50 = v39[14];
            v49 = v39[15];
            v36[16] = v39[16];
            v36[17] = v48;
            v36[14] = v50;
            v36[15] = v49;
            v51 = v39[3];
            v52 = v39[4];
            v53 = v39[5];
            v39 += 18;
            v36[4] = v52;
            v36[5] = v53;
            v36[3] = v51;
            v36 += 18;
          } while (v39 != v26);
          do {
            if ((*(_BYTE*)v27 & 1) != 0) {
              v54 = *(_QWORD*)(v27 + 16);
              if (v54 != 0) {
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v55 = 128;
                }
                else {
                  v55 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v54);
              }
            }
            v27 += 144;
          } while ((__int64*)v27 != v26);
          v36 = v143;
          v27 = *v145;
        }
        *(_QWORD*)(v10 + 32) = v36;
        *(_QWORD*)(v10 + 40) = v38;
        *(_QWORD*)(v10 + 48) = v37;
        if (v27 != 0) {
          v60 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v60 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v27);
          v38 = *(_QWORD*)(v10 + 40);
        }
        goto LABEL_71;
      }
      memset(*(_QWORD*)(v10 + 40), 0, 144 * ((144 * v30 - 144) / 0x90) + 144);
      v38 = (unsigned __int64)&v26[18 * ((144 * v30 - 144) / 0x90) + 18];
    }
    *(_QWORD*)(v10 + 40) = v38;
  LABEL_71:
    if (v38 != *v145) {
      v61 = 140;
      v62 = 0x8E38E38E38E38E39LL * ((__int64)(v38 - *v145) >> 4);
      do {
        BYTE5(v164_.v164) = 0;
        v64 = *v145;
        *(_DWORD*)((char*)&v164_.v164 + 1) = 1701667150;
        v65 = (int*)(v64 + v61);
        LOBYTE(v164_.v164) = 8;
        v164_.v167 = (unsigned int*)(v64 + v61 - 140);
        GameStringReads_c05cc0((__int64**)&v146, (__int64)&v164_.v164);
        if ((v164_.v164 & 1) != 0 && v164_.v166 != nullptr) {
          v66 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v66 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v66,
                                        (__int64)v164_.v166);
        }
        v164_.v164 = *(_QWORD*)(v65 - 27);
        v155_.v155[0] = *(_QWORD*)(v65 - 13);
        v164_.v165 = *(_QWORD*)(v65 - 25);
        v155_.v155[1] = *(_QWORD*)(v65 - 11);
        v164_.v166 = *(char**)(v65 - 23);
        v155_.v155[2] = *(_QWORD*)(v65 - 9);
        v164_.v167 = *(unsigned int**)(v65 - 21);
        v155_.v156 = *(v65 - 7);
        v155_.v157 = *(v65 - 6);
        v164_.v168 = *(v65 - 19);
        v164_.v169 = *(v65 - 18);
        v155_.v158 = *(v65 - 5);
        v155_.v159 = *(v65 - 4);
        v164_.v170 = *(v65 - 17);
        v164_.v171 = *(v65 - 16);
        v155_.v160 = *(v65 - 3);
        v155_.v161 = *(v65 - 2);
        v164_.v172 = *(v65 - 15);
        v164_.v173 = *(v65 - 14);
        v155_.v162 = *(v65 - 1);
        v63 = *v65;
        LOBYTE(v153_.v153[0]) = 16;
        strcpy((char*)v153_.v153 + 1, "Map_High");
        v155_.v163 = v63;
        v153_.v154 = &v164_.v164;
        wld_c058e0((__int64**)&v146, (__int64*)v153_.v153);
        LOBYTE(v153_.v153[0]) = 14;
        strcpy((char*)v153_.v153 + 1, "Map_Low");
        v153_.v154 = v155_.v155;
        wld_c058e0((__int64**)&v146, (__int64*)v153_.v153);
        --v62;
        v61 += 144;
        *(_QWORD*)(v65 - 27) = v164_.v164;
        *(_QWORD*)(v65 - 13) = v155_.v155[0];
        *(_QWORD*)(v65 - 25) = v164_.v165;
        *(_QWORD*)(v65 - 11) = v155_.v155[1];
        *(_QWORD*)(v65 - 23) = v164_.v166;
        *(_QWORD*)(v65 - 9) = v155_.v155[2];
        *(_QWORD*)(v65 - 21) = v164_.v167;
        *(v65 - 7) = v155_.v156;
        *(v65 - 6) = v155_.v157;
        *(v65 - 19) = v164_.v168;
        *(v65 - 18) = v164_.v169;
        *(v65 - 5) = v155_.v158;
        *(v65 - 4) = v155_.v159;
        *(v65 - 17) = v164_.v170;
        *(v65 - 16) = v164_.v171;
        *(v65 - 3) = v155_.v160;
        *(v65 - 2) = v155_.v161;
        *(v65 - 15) = v164_.v172;
        *(v65 - 14) = v164_.v173;
        *(v65 - 1) = v155_.v162;
        *v65 = v155_.v163;
      } while (v62 != 0);
    }
    v25 = (unsigned __int16*)v146;
    goto LABEL_80;
  }
  v10 = 0;
  v11 = 0;
LABEL_237:
  GameRoutine_634d80(*(_QWORD*)(v6 + 8), v6);
  v141 = GameData_22034a0;
  GameData_2203498 = v11;
  GameData_22034a0 = v10;
  if (v141 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v141 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v141 + 16LL))(v141);
      std___1___shared_weak_count___release_weak(v141);
    }
  LABEL_240:
    v11 = GameData_2203498;
  }
  if (v11 == 0) {
    result = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
    v142 = GameData_22034a0;
    *(_QWORD*)(result + 8) = 0;
    *(_QWORD*)(result + 16) = 0;
    *(_QWORD*)(result + 32) = 0;
    *(_QWORD*)(result + 40) = 0;
    *(_QWORD*)(result + 48) = 0;
    *(_QWORD*)(result + 56) = 0;
    *(_QWORD*)(result + 64) = 0;
    *(_QWORD*)(result + 72) = 0;
    *(_QWORD*)result = GameData_1fd1468;
    *(_QWORD*)(result + 24) = 1;
    GameData_2203498 = result + 24;
    GameData_22034a0 = result;
    if (v142 == 0) {
      *a1 = result + 24;
      a1[1] = result;
      goto LABEL_248;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v142 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v142 + 16LL))(v142);
      std___1___shared_weak_count___release_weak(v142);
    }
  }
  result = GameData_22034a0;
  *a1 = GameData_2203498;
  a1[1] = result;
  if (result != 0) {
  LABEL_248:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 8), 1u,
                              memory_order_relaxed);
  }
  return result;
}

__int64** wld_c058e0(__int64** a1, __int64* a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  char v13;
  char* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  _BOOL4 v21;
  __int64 v22;
  __int64 v23;
  __int64 i;
  __int64 v25;
  unsigned int* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v31;
    unsigned __int64 v32;
    char* v33;
    __int64 v34;
  } v31_;
  struct {
    __int64 v35;
    unsigned __int64 v36;
    __int64 v37;
  } v35_;
  struct {
    __int64 v38[2];
    char* v39;
    unsigned int* v40;
  } v38_;

  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(&v31_.v31, a2[2], a2[1]);
  }
  else {
    v4 = a2[1];
    v31_.v31 = *a2;
    v31_.v32 = v4;
    v31_.v33 = (char*)a2[2];
  }
  v31_.v34 = a2[3];
  if ((v31_.v31 & 1) != 0) {
    fw_text_String_CopyTerminated(v38_.v38, (__int64)v31_.v33, v31_.v32);
  }
  else {
    v38_.v38[0] = v31_.v31;
    v38_.v38[1] = v31_.v32;
    v38_.v39 = v31_.v33;
  }
  if ((v38_.v38[0] & 1) != 0) {
    v5 = v38_.v38[1];
  }
  else {
    v5 = (unsigned __int64)LOBYTE(v38_.v38[0]) >> 1;
  }
  if ((v38_.v38[0] & 1) != 0 && v38_.v39 != nullptr) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                  (__int64)v38_.v39);
  }
  if (v5 == 0) {
    goto LABEL_53;
  }
  v7 = *a1;
  v38_.v38[1] = 0;
  v38_.v39 = nullptr;
  v38_.v38[0] = 0;
  LOWORD(v35_.v35) = 0;
  timeline_2020((unsigned __int16*)v7, &v35_.v35);
  v8 = (__int16)v35_.v35;
  v9 = fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       (__int16)v35_.v35, 16, 0);
  memset(v10, 0, v8);
  Value_2500(*a1, v10, v8);
  GameRoutine_60a060((char*)v38_.v38, v10, (__int16)v35_.v35);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11, v10);
  if ((v31_.v31 & 1) != 0) {
    fw_text_String_CopyTerminated(&v35_.v35, (__int64)v31_.v33, v31_.v32);
  }
  else {
    v35_.v35 = v31_.v31;
    v35_.v36 = v31_.v32;
    v35_.v37 = (__int64)v31_.v33;
  }
  v12 = v38_.v38[0] & 1;
  v13 = v35_.v35;
  if (v12 != 0) {
    v14 = v38_.v39;
  }
  else {
    v14 = (char*)v38_.v38 + 1;
  }
  v15 = v35_.v37;
  if ((v38_.v38[0] & 1) != 0) {
    v16 = v38_.v38[1];
  }
  else {
    v16 = (unsigned __int64)LOBYTE(v38_.v38[0]) >> 1;
  }
  if ((v35_.v35 & 1) != 0) {
    v17 = v35_.v36;
  }
  else {
    v17 = (unsigned __int64)(unsigned __int8)v35_.v35 >> 1;
  }
  if ((v35_.v35 & 1) != 0) {
    v18 = (char*)v35_.v37;
  }
  else {
    v18 = (char*)&v35_.v35 + 1;
  }
  if (v16 >= v17) {
    v19 = v17;
  }
  else {
    v19 = v16;
  }
  v21 = memcmp((__int64)v18, (__int64)v14, v19) == 0 && v17 == v16;
  if ((v13 & 1) != 0 && v15 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v15);
    v12 = v38_.v38[0] & 1;
  }
  if (v12 != 0 && v38_.v39 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  (__int64)v38_.v39);
  }
  if (v21) {
  LABEL_53:
    for (i = 4; i != 60; i += 8) {
      v25 = v31_.v34;
      strcpy((char*)v38_.v38, "\nRatio");
      v38_.v40 = (unsigned int*)(v31_.v34 + i - 4);
      if (GameRoutine_c05fb0(a1, (__int64)v38_.v38)) {
        v26 = v38_.v40;
        if ((timeline_21c0((unsigned int*)*a1, (unsigned int*)&v35_.v35) & 1) !=
            0) {
          *v26 = v35_.v35;
        }
      }
      if ((v38_.v38[0] & 1) != 0 && v38_.v39 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, (__int64)v38_.v39);
      }
      LOBYTE(v38_.v38[0]) = 16;
      strcpy((char*)v38_.v38 + 1, "ModelLod");
      v38_.v40 = (unsigned int*)(v25 + i);
      if (GameRoutine_c05690(a1, (__int64)v38_.v38)) {
        timeline_21c0((unsigned int*)*a1, v38_.v40);
      }
      if ((v38_.v38[0] & 1) != 0 && v38_.v39 != nullptr) {
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v38_.v39);
      }
    }
  }
  if ((v31_.v31 & 1) != 0 && v31_.v33 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29,
                                  (__int64)v31_.v33);
  }
  return a1;
}

__int64 wld_c0cd20(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
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
  const char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  const char* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  _DWORD* v46;
  __int64 v47;
  __int64 v48;
  int v49;
  int v50;
  int v51;
  int* v52;
  int v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  unsigned int v70;
  float v71;
  unsigned int v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int128 v75;
  __int128 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  float v90;
  float v91;
  __int128 v92;
  __int64 v93;
  __int128 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  __int64 v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  __int128 v110;
  int v111;
  unsigned int v112;
  int v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  __int128 v120;
  int v121;
  float v122;
  float v123;
  float v124;
  float v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  int v133;
  __int64 v134;
  __int64 v135;
  _BYTE* v136;
  _BYTE* v137;
  bool v138;
  __int64* v139;
  unsigned __int64 v140;
  __int64 v141;
  __int64 v142;
  char* v143;
  __int64 v144;
  unsigned __int64 v145;
  __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64* v153;
  unsigned __int64 v154;
  __int64 v155;
  __int64 v156;
  char* v157;
  __int64 v158;
  unsigned __int64 v159;
  __int64 v160;
  unsigned __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  unsigned __int64 v164;
  __int64 v165;
  __int64 v166;
  _QWORD** v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  float v173;
  int v174;
  float v175;
  float v176;
  float v177;
  float v178;
  float v179;
  unsigned int v180;
  __int64 v181;
  __int128 v182;
  __int128 v183;
  __int128 v184;
  __int64 v185;
  struct {
    __int64 v186;
    __int64 v187;
    int v188;
  } v186_;
  struct {
    __int64 v189;
    _QWORD* v190;
    __int128 v191;
    __int128 v192;
    __int128 v193;
    __int64 v194;
    __int64 v195;
    __int64 v196;
  } v189_;

  nn_os_LockMutex((__int64)GameData_212df28);
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      128, 16, 0);
  *(_BYTE*)(v6 + 16) = 0;
  *(_QWORD*)(v6 + 24) = 0;
  v7 = *a3;
  v8 = v6;
  *(_QWORD*)(v6 + 48) = 0;
  *(_DWORD*)(v6 + 17) = 33686018;
  *(_QWORD*)v6 = wld_MapCrowdModule_vtable;
  *(_QWORD*)(v6 + 8) = a1;
  *(_QWORD*)(v6 + 40) = 0;
  v168 = (_QWORD**)(v6 + 40);
  v9 = GameData_212c2a0;
  v10 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                    (_QWORD)GameData_212c2a0);
  *(_QWORD*)(v6 + 112) = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                                     (_QWORD)GameData_212c2a0);
  *(_QWORD*)(v6 + 120) = v10;
  v11 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v9 + 8);
  *(_QWORD*)(v6 + 96) = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v9);
  *(_QWORD*)(v6 + 104) = v11;
  v12 = v9[1];
  *(_QWORD*)(v6 + 64) = *v9;
  *(_QWORD*)(v6 + 72) = v12;
  v13 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8);
  *(_QWORD*)(v6 + 80) = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9);
  *(_QWORD*)(v6 + 88) = v13;
  v14 = GameData_212c638;
  v15 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL);
  v16 = *(_QWORD*)(*(_QWORD*)(v15 - 8) + 40LL);
  v18 = *(_QWORD*)(v16 + 16);
  v17 = *(_QWORD*)(v16 + 24);
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
    *(_QWORD*)(v8 + 40) = v18;
    *(_QWORD*)(v8 + 48) = v17;
    v169 = std___1___shared_weak_count_lock(v17);
    v15 = *(_QWORD*)(*(_QWORD*)v14 + 32LL);
    if (*(_QWORD*)(*(_QWORD*)v14 + 24LL) == v15) {
      goto LABEL_8;
    }
  }
  else {
    v19 = *(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL);
    v169 = 0;
    *(_QWORD*)(v8 + 40) = v18;
    if (v19 == v15) {
    LABEL_8:
      v22 = 0;
      v21 = 0;
      goto LABEL_9;
    }
  }
  v20 = *(_QWORD*)(v15 - 8);
  if (v20 == 0) {
    goto LABEL_8;
  }
  v21 = *(_QWORD*)(v20 + 24);
  v22 = *(_QWORD*)(v20 + 32);
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
  }
LABEL_9:
  v23 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       384, 16, 0);
  v24 = v23;
  v189_.v189 = v21;
  v189_.v190 = (_QWORD*)v22;
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                              memory_order_relaxed);
  }
  gfx_render_BillboardModel_BillboardModel(
      v23, (__int64)"Map", 3, (__int64)"Impostor_Instance", 17, &v189_.v189);
  if (v189_.v190 != nullptr) {
    std___1___shared_weak_count___release_weak((__int64)v189_.v190);
  }
  v170 = a1;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v22);
  }
  v25 = *(_QWORD*)(a2 + 8);
  v185 = v7;
  v26 = *(const char**)(v25 + 8);
  v27 = strlen(v26);
  v28 = g3d_a6c880(&v185, (__int64)v26, v27);
  if (v28 != 0) {
    v29 = *(unsigned int*)(v28 + 144);
    v30 = *(_QWORD*)(*(_QWORD*)(v28 + 128) + 8LL);
  }
  else {
    v31 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13424);
    v32 = strlen(v26);
    GameRoutine_b34420((void*)((__int64)&v189_.v189), v31,
                       (__int64)"Graphics/Textures/common_default", 0x20u,
                       (__int64)v26, v32, 0);
    v30 = v189_.v189;
    if (v189_.v189 == 0 || (_DWORD)v189_.v190 == -1) {
      GameRoutine_b34420((void*)((__int64)&v186_.v186), v31,
                         (__int64)"Graphics/Textures/common_default", 0x20u,
                         (__int64)"Cmn_Default_BC", 14, 0);
      v30 = v186_.v186;
      v189_.v189 = v186_.v186;
      v189_.v190 = (_QWORD*)v186_.v187;
      LODWORD(v189_.v191) = v186_.v188;
    }
    v29 = (unsigned int)v189_.v190;
  }
  v33 = *(const char**)(*(_QWORD*)(a2 + 8) + 16LL);
  v34 = strlen(v33);
  v35 = g3d_a6c880(&v185, (__int64)v33, v34);
  if (v35 != 0) {
    v36 = *(unsigned int*)(v35 + 144);
    v37 = *(_QWORD*)(*(_QWORD*)(v35 + 128) + 8LL);
  }
  else {
    v38 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13424);
    v39 = strlen(v33);
    GameRoutine_b34420((void*)((__int64)&v189_.v189), v38,
                       (__int64)"Graphics/Textures/common_default", 0x20u,
                       (__int64)v33, v39, 0);
    v37 = v189_.v189;
    if (v189_.v189 == 0 || (_DWORD)v189_.v190 == -1) {
      GameRoutine_b34420((void*)((__int64)&v186_.v186), v38,
                         (__int64)"Graphics/Textures/common_default", 0x20u,
                         (__int64)"Cmn_Default_BC", 14, 0);
      v37 = v186_.v186;
      v189_.v189 = v186_.v186;
      v189_.v190 = (_QWORD*)v186_.v187;
      LODWORD(v189_.v191) = v186_.v188;
    }
    v36 = (unsigned int)v189_.v190;
  }
  if (*(_BYTE*)(v24 + 216) == 1) {
    *(_DWORD*)(v24 + 208) = v29;
  }
  else {
    *(_QWORD*)(v24 + 208) = v29;
    *(_BYTE*)(v24 + 216) = 1;
  }
  v40 = *(unsigned __int8*)(v24 + 240);
  *(_QWORD*)(v24 + 200) = v30;
  if (v40 == 1) {
    *(_DWORD*)(v24 + 232) = v36;
  }
  else {
    *(_QWORD*)(v24 + 232) = v36;
    *(_BYTE*)(v24 + 240) = 1;
  }
  *(_QWORD*)(v24 + 224) = v37;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _QWORD))(
      *(_QWORD*)v24 + 72LL))((void*)(&v186_.v186), v24, 0);
  if (v186_.v186 != 0) {
    (*(void (**)(__int64, const char*, __int64, float))(*(_QWORD*)v186_.v186 +
                                                        16LL))(
        v186_.v186, "row", 3, (float)*(int*)(*(_QWORD*)(a2 + 8) + 28LL));
    (*(void (**)(__int64, const char*, __int64, float))(*(_QWORD*)v186_.v186 +
                                                        16LL))(
        v186_.v186, "column", 6, (float)*(int*)(*(_QWORD*)(a2 + 8) + 32LL));
    (*(void (**)(__int64, const char*, __int64, float))(*(_QWORD*)v186_.v186 +
                                                        16LL))(
        v186_.v186, "animFrameCount", 14,
        (float)*(unsigned int*)(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 56LL) + 8LL));
    (*(void (**)(__int64, const char*, __int64, float))(*(_QWORD*)v186_.v186 +
                                                        16LL))(
        v186_.v186, "animSpeed", 9,
        *(float*)(*(_QWORD*)(*(_QWORD*)(a2 + 8) + 56LL) + 16LL));
    (*(void (**)(__int64, const char*, __int64, double))(
        *(_QWORD*)v186_.v186 + 24LL))(v186_.v186, "size", 4,
                                      *(double*)(*(_QWORD*)(a2 + 8) + 36LL));
  }
  v41 = *(_DWORD*)(a2 + 16);
  if (v41 < 1) {
    v45 = 0;
    goto LABEL_46;
  }
  v42 = *(_QWORD*)(a2 + 24);
  v43 = v41 & 7;
  if ((unsigned int)v41 >= 8) {
    v46 = (_DWORD*)(v42 + 188);
    v47 = 0;
    v45 = 0;
    v48 = -(__int64)(v41 & 0x7FFFFFF8);
    do {
      v47 -= 8;
      v49 = v46[30];
      v50 = v46[10] + *v46 + *(v46 - 10) + *(v46 - 20) + *(v46 - 30) +
            *(v46 - 40) + v45;
      v51 = v46[20];
      v46 += 80;
      v45 = v49 + v51 + v50;
    } while (v48 != v47);
    v44 = -v47;
    if (v43 == 0) {
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v44 = 0;
  v45 = 0;
  if ((v41 & 7) != 0) {
  LABEL_44:
    v52 = (int*)(v42 + 40 * v44 + 28);
    do {
      v53 = *v52;
      v52 += 10;
      --v43;
      v45 += v53;
    } while (v43 != 0);
  }
LABEL_46:
  v54 = (__int64*)fw_memory_g_heap_manager_ptr;
  v55 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       368, 16, 0);
  v56 = *v54;
  v189_.v189 = v24;
  v57 = (_QWORD*)fw_memory_HeapManager_Allocate(v56, 32, 16, 0);
  v57[2] = 0;
  v57[3] = v24;
  v189_.v190 = v57;
  *v57 = &GameData_1fd1988;
  v57[1] = 0;
  GameHr_bfebc0(v55, &v189_.v189, v45, 1);
  v58 = (__int64)v189_.v190;
  if (v189_.v190 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v189_.v190 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
    std___1___shared_weak_count___release_weak(v58);
  }
  v59 = *(_QWORD*)(v8 + 24);
  *(_QWORD*)(v8 + 24) = v55;
  if (v59 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v59 + 8LL))(v59);
    v55 = *(_QWORD*)(v8 + 24);
  }
  if ((*(_BYTE*)(v55 + 8) & 1) != 0) {
    *(_QWORD*)(v55 + 16) = 14;
    v60 = *(char**)(v55 + 24);
  }
  else {
    *(_BYTE*)(v55 + 8) = 28;
    v60 = (char*)(v55 + 9);
  }
  strcpy(v60, "Crowd_Instance");
  if (*(int*)(a2 + 16) >= 1) {
    v61 = 0;
    v171 = a2;
    do {
      v62 = *(__int64**)(v8 + 24);
      v172 = v61;
      v63 = *(_QWORD*)(a2 + 24) + 40 * v61;
      v64 = *(float*)(v63 + 4);
      v66 = *(float*)(v63 + 8);
      v65 = *(float*)(v63 + 12);
      v67 = *(float*)v63 - (float)(v65 * 0x1.0000000000000p-1f);
      v68 = *(float*)(v63 + 16);
      v69 = *(float*)(v63 + 20);
      *(float*)&v70 = v66 - (float)(v69 * 0x1.0000000000000p-1f);
      v71 = *(float*)v63 + (float)(v65 * 0x1.0000000000000p-1f);
      *(float*)&v72 = v66 + (float)(v69 * 0x1.0000000000000p-1f);
      LOBYTE(v189_.v189) = 1;
      *(_QWORD*)((char*)&v189_.v193 + 4) = 1065353216;
      v189_.v194 = 0;
      v189_.v195 = 0;
      v189_.v196 = 0;
      v73 = v62[18];
      v74 = v62[19];
      LOBYTE(v189_.v193) = 0;
      *(float*)&v75 = v67;
      *(float*)&v76 = v71;
      *((float*)&v75 + 1) = v64 - (float)(v68 * 0x1.0000000000000p-1f);
      *((float*)&v76 + 1) = v64 + (float)(v68 * 0x1.0000000000000p-1f);
      *((_QWORD*)&v75 + 1) = v70;
      *((_QWORD*)&v76 + 1) = v72;
      v189_.v191 = v75;
      v189_.v192 = v76;
      if (v73 >= v74) {
        v85 = InstanceObject_bffc20(v62 + 17, (__int64)&v189_.v189);
        v86 = v189_.v194;
        v84 = v62[17];
        v79 = v85;
        v62[18] = v85;
        if (v86 != 0) {
          v189_.v195 = v86;
          v87 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v87 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v87, v86);
        }
      }
      else {
        v77 = *((_QWORD*)&v189_.v192 + 1);
        v78 = DWORD2(v189_.v193);
        *(_QWORD*)(v73 + 72) = 0;
        *(_QWORD*)(v73 + 80) = 0;
        v79 = v73 + 96;
        *(_QWORD*)(v73 + 64) = 0;
        *(_QWORD*)(v73 + 40) = v77;
        v80 = *((_QWORD*)&v189_.v191 + 1);
        *(_QWORD*)(v73 + 8) = v189_.v190;
        *(_QWORD*)(v73 + 24) = v80;
        v81 = v189_.v189;
        *(_QWORD*)(v73 + 16) = v189_.v191;
        *(_QWORD*)v73 = v81;
        v82 = v189_.v192;
        v83 = v189_.v193;
        *(_DWORD*)(v73 + 56) = v78;
        *(_QWORD*)(v73 + 48) = v83;
        *(_QWORD*)(v73 + 32) = v82;
        v62[18] = v73 + 96;
        v84 = v62[17];
      }
      if (*(int*)(v63 + 28) >= 1) {
        v88 = 0;
        v89 = 0;
        v174 = -1 - 1431655765 * ((unsigned __int64)(v79 - v84) >> 5);
        do {
          v95 = v8;
          v96 =
              *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
          *(_QWORD*)&v189_.v192 =
              *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
          *((_QWORD*)&v189_.v192 + 1) = v96;
          v97 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                            (_QWORD)GameData_212c2a0);
          *(_QWORD*)&v189_.v193 =
              *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                          (_QWORD)GameData_212c2a0);
          *((_QWORD*)&v189_.v193 + 1) = v97;
          v98 = *((_QWORD*)GameData_212c2a0 + 1);
          v189_.v189 = *(_QWORD*)GameData_212c2a0;
          v189_.v190 = (_QWORD*)v98;
          v99 = *(_QWORD*)((char*)((__int128*)0x10LL) +
                           (_QWORD)GameData_212c2a0 + 8);
          *(_QWORD*)&v189_.v191 =
              *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
          *((_QWORD*)&v189_.v191 + 1) = v99;
          v100 = *(_QWORD*)(v63 + 32);
          v101 = *(_DWORD*)(v100 + v88 + 24);
          v102 = *(unsigned int*)(v100 + v88 + 8);
          v103 = *(float*)(v100 + v88 + 12);
          v181 = *(_QWORD*)(v100 + v88);
          v104 = (float)BYTE2(v101) / 0x1.fe00000000000p+7f;
          if (v104 <= 0x1.4b5dcc0000000p-5f) {
            v105 = v104 / 0x1.9d70a40000000p+3f;
          }
          else {
            v105 = powf((float)(v104 + 0x1.c28f5c0000000p-5f) /
                            0x1.0e147a0000000p+0f,
                        0x1.3333340000000p+1f);
          }
          v178 = v105;
          v106 = (float)BYTE1(v101) / 0x1.fe00000000000p+7f;
          if (v106 <= 0x1.4b5dcc0000000p-5f) {
            v107 = v106 / 0x1.9d70a40000000p+3f;
          }
          else {
            v107 = powf((float)(v106 + 0x1.c28f5c0000000p-5f) /
                            0x1.0e147a0000000p+0f,
                        0x1.3333340000000p+1f);
          }
          v108 = (float)(unsigned __int8)v101 / 0x1.fe00000000000p+7f;
          if (v108 <= 0x1.4b5dcc0000000p-5f) {
            v109 = v108 / 0x1.9d70a40000000p+3f;
          }
          else {
            v175 = v107;
            v109 = powf((float)(v108 + 0x1.c28f5c0000000p-5f) /
                            0x1.0e147a0000000p+0f,
                        0x1.3333340000000p+1f);
            v107 = v175;
          }
          *(_QWORD*)&v110 = __PAIR64__(LODWORD(v107), LODWORD(v178));
          v111 = *(_DWORD*)(v100 + v88 + 28);
          *(float*)&v112 = v103 / -0x1.6800000000000p+8f;
          v113 = *(_DWORD*)(v100 + v88 + 16);
          *((_QWORD*)&v110 + 1) = __PAIR64__(v112, LODWORD(v109));
          v114 = (float)BYTE2(v111) / 0x1.fe00000000000p+7f;
          v184 = v110;
          if (v114 <= 0x1.4b5dcc0000000p-5f) {
            v115 = v114 / 0x1.9d70a40000000p+3f;
          }
          else {
            v115 = powf((float)(v114 + 0x1.c28f5c0000000p-5f) /
                            0x1.0e147a0000000p+0f,
                        0x1.3333340000000p+1f);
          }
          v179 = v115;
          v116 = (float)BYTE1(v111) / 0x1.fe00000000000p+7f;
          if (v116 <= 0x1.4b5dcc0000000p-5f) {
            v117 = v116 / 0x1.9d70a40000000p+3f;
          }
          else {
            v117 = powf((float)(v116 + 0x1.c28f5c0000000p-5f) /
                            0x1.0e147a0000000p+0f,
                        0x1.3333340000000p+1f);
          }
          v118 = (float)(unsigned __int8)v111 / 0x1.fe00000000000p+7f;
          if (v118 <= 0x1.4b5dcc0000000p-5f) {
            v119 = v118 / 0x1.9d70a40000000p+3f;
          }
          else {
            v176 = v117;
            v119 = powf((float)(v118 + 0x1.c28f5c0000000p-5f) /
                            0x1.0e147a0000000p+0f,
                        0x1.3333340000000p+1f);
            v117 = v176;
          }
          *(_QWORD*)&v120 = __PAIR64__(LODWORD(v117), LODWORD(v179));
          v121 = *(_DWORD*)(v100 + v88 + 32);
          *((float*)&v120 + 2) = v119;
          *((float*)&v120 + 3) = (float)v113;
          v180 = *(_DWORD*)(v100 + v88 + 20);
          v122 = (float)BYTE2(v121) / 0x1.fe00000000000p+7f;
          v183 = v120;
          if (v122 <= 0x1.4b5dcc0000000p-5f) {
            v123 = v122 / 0x1.9d70a40000000p+3f;
          }
          else {
            v123 = powf((float)(v122 + 0x1.c28f5c0000000p-5f) /
                            0x1.0e147a0000000p+0f,
                        0x1.3333340000000p+1f);
          }
          v177 = v123;
          v8 = v95;
          v124 = (float)BYTE1(v121) / 0x1.fe00000000000p+7f;
          if (v124 <= 0x1.4b5dcc0000000p-5f) {
            v91 = v124 / 0x1.9d70a40000000p+3f;
          }
          else {
            v91 = powf((float)(v124 + 0x1.c28f5c0000000p-5f) /
                           0x1.0e147a0000000p+0f,
                       0x1.3333340000000p+1f);
          }
          v125 = (float)(unsigned __int8)v121 / 0x1.fe00000000000p+7f;
          if (v125 > 0x1.4b5dcc0000000p-5f) {
            v173 = v91;
            v90 = powf((float)(v125 + 0x1.c28f5c0000000p-5f) /
                           0x1.0e147a0000000p+0f,
                       0x1.3333340000000p+1f);
            v91 = v173;
          }
          else {
            v90 = v125 / 0x1.9d70a40000000p+3f;
          }
          *(_QWORD*)&v92 = v181;
          v93 = *(_QWORD*)(v95 + 24);
          *((_QWORD*)&v92 + 1) = v102;
          *(_QWORD*)&v94 = __PAIR64__(LODWORD(v91), LODWORD(v177));
          v189_.v193 = v92;
          *((_QWORD*)&v94 + 1) = __PAIR64__(v180, LODWORD(v90));
          v182 = v94;
          InstanceObject_bff9e0(v93, v174, &v189_.v189, (__int64*)&v184,
                                (__int64*)&v183, (__int64*)&v182);
          ++v89;
          v88 += 48;
        } while (v89 < *(int*)(v63 + 28));
      }
      a2 = v171;
      v61 = v172 + 1;
    } while (v172 + 1 < *(int*)(v171 + 16));
  }
  *(_DWORD*)(*(_QWORD*)(v8 + 24) + 36LL) = 0;
  v126 = *(_QWORD*)(v8 + 48);
  if (v126 != 0) {
    v127 = std___1___shared_weak_count_lock(v126);
    if (v127 != 0) {
      v128 = v127;
      if (*v168 != nullptr) {
        *(_QWORD*)(v8 + 32) = Scene_a70a20(*v168, *(_QWORD*)(v8 + 24));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v128 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v128 + 16LL))(v128);
        std___1___shared_weak_count___release_weak(v128);
      }
    }
  }
  v129 = v186_.v187;
  if (v186_.v187 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v186_.v187 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v129 + 16LL))(v129);
    std___1___shared_weak_count___release_weak(v129);
  }
  if (v169 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v169 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v169 + 16LL))(v169);
    std___1___shared_weak_count___release_weak(v169);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22034f0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_22034f0) != 0) {
    GameData_22034e8 = wld_Crc32(0, "MapCrowdModule", 0xEu);
    __cxa_guard_release((__int64)&GameData_22034f0);
  }
  v131 = *(_QWORD*)(v170 + 504);
  v130 = *(_QWORD*)(v170 + 512);
  v132 = v130;
  LODWORD(v189_.v189) = GameData_22034e8;
  v189_.v190 = (_QWORD*)v8;
  while (v132 != v131) {
    v133 = *(_DWORD*)(v132 - 16);
    v132 -= 16;
    if (v133 == GameData_22034e8) {
      if ((*(_BYTE*)(v8 + 16) & 1) != 0) {
        goto LABEL_124;
      }
      goto LABEL_118;
    }
  }
  if (v131 == v130 &&
      (unsigned __int64)(*(_QWORD*)(v170 + 520) - v131) <= 0x6F) {
    v134 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    *(_QWORD*)(v170 + 504) = v134;
    *(_QWORD*)(v170 + 512) = v134;
    *(_QWORD*)(v170 + 520) = v134 + 112;
    if (v130 != 0) {
      v135 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v135 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v135, v131);
    }
  }
  GameRoutine_98f140((__int64*)(v170 + 504), &v189_.v189);
  if ((*(_BYTE*)(v8 + 16) & 1) == 0) {
  LABEL_118:
    *(_BYTE*)(v8 + 16) = 1;
    *(_BYTE*)(v8 + 17) &= ~2u;
    *(_BYTE*)(v8 + 18) &= ~2u;
    *(_BYTE*)(v8 + 19) &= ~2u;
    *(_BYTE*)(v8 + 20) &= ~2u;
    v136 = *(_BYTE**)(v8 + 8);
    v136[632] = 0;
    v136[664] = 0;
    v136[696] = 0;
    v136[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 64LL))(v8);
    v137 = *(_BYTE**)(v8 + 8);
    v138 = v137[300] == 3 && v137[301] == 3;
    if (v138 || v137[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
    }
  }
LABEL_124:
  v139 = *(__int64**)(v170 + 536);
  v140 = *(_QWORD*)(v170 + 544);
  if ((unsigned __int64)v139 >= v140) {
    v142 = *(_QWORD*)(v170 + 528);
    v143 = (char*)v139 - v142;
    v144 = ((__int64)v139 - v142) >> 3;
    v145 = v144 + 1;
    if ((unsigned __int64)(v144 + 1) >> 61 != 0) {
      goto LABEL_159;
    }
    v146 = v140 - v142;
    if (v146 >> 2 > v145) {
      v145 = v146 >> 2;
    }
    if ((unsigned __int64)v146 >= 0x7FFFFFFFFFFFFFF8LL) {
      v147 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v147 = v145;
    }
    if (v147 != 0) {
      if (v147 >> 61 != 0) {
        goto LABEL_160;
      }
      v148 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v147, 16, 0);
    }
    else {
      v148 = 0;
    }
    v149 = v148 + 8 * v147;
    v150 = (unsigned __int64)v139 - v142;
    v151 = (__int64)&v143[v148 + -8 * v144];
    *(_QWORD*)&v143[v148] = v8;
    v141 = (__int64)&v143[v148 + 8];
    memcpy(v151, v142, v150);
    *(_QWORD*)(v170 + 528) = v151;
    *(_QWORD*)(v170 + 536) = v141;
    *(_QWORD*)(v170 + 544) = v149;
    if (v142 != 0) {
      v152 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v152 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v152, v142);
    }
  }
  else {
    *v139 = v8;
    v141 = (__int64)(v139 + 1);
  }
  *(_QWORD*)(v170 + 536) = v141;
  v153 = *(__int64**)(v170 + 560);
  v154 = *(_QWORD*)(v170 + 568);
  if ((unsigned __int64)v153 < v154) {
    *v153 = v8;
    v155 = (__int64)(v153 + 1);
    goto LABEL_156;
  }
  v156 = *(_QWORD*)(v170 + 552);
  v157 = (char*)v153 - v156;
  v158 = ((__int64)v153 - v156) >> 3;
  v159 = v158 + 1;
  if ((unsigned __int64)(v158 + 1) >> 61 != 0) {
  LABEL_159:
    GameRoutine_98f290();
  }
  v160 = v154 - v156;
  if (v160 >> 2 > v159) {
    v159 = v160 >> 2;
  }
  if ((unsigned __int64)v160 >= 0x7FFFFFFFFFFFFFF8LL) {
    v161 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v161 = v159;
  }
  if (v161 != 0) {
    if (v161 >> 61 == 0) {
      v162 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v161, 16, 0);
      goto LABEL_152;
    }
  LABEL_160:
    GameRoutine_60a210();
  }
  v162 = 0;
LABEL_152:
  v163 = v162 + 8 * v161;
  v164 = (unsigned __int64)v153 - v156;
  v165 = (__int64)&v157[v162 + -8 * v158];
  *(_QWORD*)&v157[v162] = v8;
  v155 = (__int64)&v157[v162 + 8];
  memcpy(v165, v156, v164);
  *(_QWORD*)(v170 + 552) = v165;
  *(_QWORD*)(v170 + 560) = v155;
  *(_QWORD*)(v170 + 568) = v163;
  if (v156 != 0) {
    v166 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v166 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v166,
                                  v156);
  }
LABEL_156:
  *(_QWORD*)(v170 + 560) = v155;
  GameRoutine_a8c0c0(v170);
  *(_BYTE*)(v170 + 576) = 1;
  nn_os_UnlockMutex((__int64)GameData_212df28);
  return v8;
}

void wld_c11000(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  int v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  int v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  bool v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  unsigned __int64* v40;
  unsigned __int64 v41;
  __int64* v42;
  __int64* v43;
  __int64* v44;
  __int64* v45;
  unsigned __int64* v46;
  unsigned __int64* v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64* v51;
  int v52;
  _BOOL4 v53;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64** v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  _QWORD* v65;
  _QWORD* v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64** v71;
  __int64 v72;
  __int64* v73;
  __int64* v74;
  __int64* v75;
  __int64* v76;
  unsigned __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64* v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  int v93;
  __int64* v94;
  __int64* v95;
  __int64* v96;
  __int64* v97;
  _QWORD* v98;
  __int64 v99;
  unsigned __int64* v100;
  unsigned __int64* v101;
  __int64 v102;
  unsigned __int64 v103;
  _QWORD* v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64* v115;
  int v116;
  _BOOL4 v118;
  _QWORD* m;
  _QWORD* n;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64* v127;
  _QWORD* v128;
  __int64 v129;
  unsigned int* v130;
  unsigned __int64 v131;
  __int64 v132;
  const char** v133;
  const char* v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  unsigned __int64 v139;
  _QWORD* v140;
  _QWORD* v141;
  unsigned __int64 v142;
  __int64 v143;
  _QWORD* v144;
  __int64 v145;
  float v146;
  _QWORD* v147;
  float v148;
  float v149;
  _BOOL8 v150;
  unsigned __int64 v151;
  unsigned __int64 v152;
  unsigned __int64 v153;
  __int64 primeEm;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  unsigned __int64 v160;
  __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  _QWORD* v165;
  unsigned __int64 v166;
  unsigned __int64 v167;
  _QWORD* v168;
  unsigned __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  _QWORD* v172;
  unsigned __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  _QWORD* v178;
  _QWORD* v179;
  unsigned __int64 v180;
  _QWORD* v181;
  unsigned __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  __int64 v191;
  __int64 v192;
  bool v193;
  __int64 v194;
  __int64* v195;
  __int64* v196;
  __int64 v197;
  __int64 v198;
  __int64 v199;
  unsigned __int64 v200;
  __int64* v201;
  __int64* v202;
  __int64 v203;
  unsigned __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  _QWORD* v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  unsigned __int8 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  char* v223;
  __int64 v224;
  __int64 v225;
  unsigned int v226;
  __int64 v227;
  int v228;
  __int64 v229;
  unsigned __int64 v230;
  _QWORD* v231;
  __int64 v232;
  _QWORD* v233;
  unsigned __int64 v234;
  unsigned __int64 v235;
  _QWORD* v236;
  char v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  unsigned __int64 v244;
  __int64* v245;
  __int64 v246;
  __int64 v247;
  __int64* v248;
  __int64* v249;
  __int64* i;
  __int64 v251;
  __int64 v252;
  _QWORD* v253;
  __int64* v254;
  __int64 v255;
  unsigned __int64 v256;
  unsigned __int64 v258;
  bool v259;
  unsigned __int64 v260;
  __int64 v261;
  unsigned __int64 v262;
  unsigned __int64 v263;
  unsigned __int64 v264;
  unsigned __int64 v265;
  unsigned __int64 v266;
  __int64 v267;
  __int64* v268;
  __int64 v269;
  unsigned __int64 v270;
  unsigned __int64 v271;
  unsigned __int64 v272;
  __int64 v273;
  __int64 v274;
  unsigned __int64 v275;
  unsigned __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64* v279;
  __int64* v280;
  unsigned __int64 v281;
  unsigned __int64 v282;
  unsigned __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  unsigned __int64 v287;
  int v288;
  __int64** v289;
  __int64 v290;
  __int64 v291;
  unsigned __int64 v292;
  _QWORD* v293;
  __int64 v294;
  unsigned __int64 v295;
  unsigned __int64 v296;
  __int64* v297;
  __int64* v298;
  __int64* v299;
  __int64 v300;
  __int64 v301;
  _QWORD* v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  __int64 v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  _QWORD* v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64* j;
  const char* v321;
  unsigned __int64 v322;
  unsigned __int64 v323;
  bool v324;
  unsigned __int64 v325;
  __int64 v326;
  unsigned __int64 v327;
  __int64 v328;
  __int64 v329;
  unsigned __int64 v330;
  unsigned int v331;
  unsigned __int64 v332;
  __int64* v333;
  __int64 v334;
  __int64* k;
  const char* v336;
  unsigned __int64 v337;
  __int64 v338;
  unsigned __int64 v339;
  bool v340;
  __int64 v341;
  __int64 v342;
  unsigned __int64 v343;
  __int64 v344;
  bool v345;
  __int64 v346;
  __int64 v347;
  unsigned __int64 v348;
  __int64 v349;
  bool v350;
  __int64 v351;
  __int64 v352;
  __int64 v353;
  _QWORD* v354;
  __int64 v355;
  __int64 v356;
  __int64 v357;
  __int64* v358;
  __int64* v359;
  __int64 v360;
  __int64* v361;
  __int64* v362;
  unsigned __int64 v363;
  __int64 v364;
  _QWORD* v365;
  unsigned int* v366;
  _QWORD* v367;
  _QWORD* v368;
  __int64 v369;
  __int64 v370;
  __int64* v371;
  struct {
    __int64* v372;
    unsigned __int64 v373;
  } v372_;
  struct {
    _QWORD* v374;
    __int64 v375;
    int v376;
    char gap116_[4];
    __int64 v377;
    unsigned __int64 v378;
  } v374_;
  struct {
    _QWORD* v379;
    __int64 v380;
    int v381;
  } v379_;
  struct {
    __int64* v382;
    __int64* v383;
    __int64 v384;
    __int64* v385;
    __int64 v386;
    __int64 v387;
  } v382_;
  struct {
    __int64 v388;
    __int64 v389;
    char* v390;
  } v388_;
  struct {
    __int64* v391;
    __int64* v392;
  } v391_;
  __int64 v393[2];

  v2 = *(_DWORD*)(a1 + 240);
  if (v2 <= 3) {
    if (v2 != 1) {
      if (v2 != 2) {
        if (v2 == 3) {
          v4 = *(_QWORD**)(a1 + 472);
          if (v4 != nullptr) {
            while (1) {
              v10 = v4[6];
              if (v10 != 0 && (*(_BYTE*)(v10 + 165) != 1 ||
                               !GameRoutine_ad7390((_QWORD*)v10))) {
                break;
              }
              v4 = (_QWORD*)*v4;
              if (v4 == nullptr) {
                goto LABEL_6;
              }
            }
          }
          else {
          LABEL_6:
            GameHr_c1a430(a1 + 416, a1 + 456);
            v5 = *(_QWORD*)(a1 + 168);
            v6 = *(_QWORD*)(a1 + 184);
            v7 = *(_QWORD*)(a1 + 192);
            v8 = *(_QWORD*)(a1 + 200);
            v9 = *(_QWORD*)(a1 + 208);
            *(_QWORD*)(a1 + 200) = *(_QWORD*)(a1 + 176);
            *(_QWORD*)(a1 + 208) = v6;
            *(_QWORD*)(a1 + 168) = v7;
            *(_QWORD*)(a1 + 176) = v8;
            *(_QWORD*)(a1 + 184) = v9;
            *(_QWORD*)(a1 + 192) = v5;
            *(_DWORD*)(a1 + 240) = 4;
          }
        }
        return;
      }
      Layout_c12ec0((void*)((__int64*)&v372_.v372), (_QWORD*)a1);
      if (v372_.v372 == (__int64*)v372_.v373) {
        v53 = true;
        if (v372_.v372 == nullptr) {
          goto LABEL_72;
        }
      }
      else {
        v51 = v372_.v372 + 1;
        do {
          v52 = *(_DWORD*)(*(v51 - 1) + 84);
          v53 = v52 > 2;
        } while (v52 >= 3 && v51++ != (__int64*)v372_.v373);
        if (v372_.v372 == nullptr) {
          goto LABEL_72;
        }
      }
      v55 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, (__int64)v372_.v372);
    LABEL_72:
      if (!v53) {
        return;
      }
      v56 = *(_QWORD*)(a1 + 264);
      if (v56 != 0) {
        v57 = *(_QWORD*)(v56 + 152);
        v372_.v373 = 0;
        v374_.v374 = nullptr;
        v372_.v372 = nullptr;
        v58 = *(_QWORD*)(v57 + 56);
        if (v58 != 0) {
          v59 = *(__int64***)(v57 + 48);
          v60 = 24 * v58;
          do {
            v61 = *v59;
            v59 += 3;
            v391_.v391 = v61;
            v391_.v392 = (__int64*)strlen((const char*)v61);
            GameRoutine_c29fe0((__int64*)&v372_.v372, &v391_.v391);
            v60 -= 24;
          } while (v60 != 0);
        }
        v62 = *(_QWORD*)(a1 + 600);
        if (v62 != 0) {
          *(_QWORD*)(a1 + 608) = v62;
          v63 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v63 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v62);
        }
        v64 = v372_.v373;
        *(_QWORD*)(a1 + 600) = v372_.v372;
        v65 = v374_.v374;
        *(_QWORD*)(a1 + 608) = v64;
        *(_QWORD*)(a1 + 616) = v65;
      }
      v66 = *(_QWORD**)(a1 + 304);
      v67 = *(_QWORD**)(a1 + 312);
      if (v66 != v67) {
        v365 = *(_QWORD**)(a1 + 312);
        do {
          v68 = *v66;
          v372_.v373 = 0;
          v374_.v374 = nullptr;
          v372_.v372 = nullptr;
          v69 = *(_QWORD*)(v68 + 152);
          v70 = *(_QWORD*)(v69 + 56);
          if (v70 != 0) {
            v71 = *(__int64***)(v69 + 48);
            v72 = 24 * v70;
            do {
              v73 = *v71;
              v71 += 3;
              v391_.v391 = v73;
              v391_.v392 = (__int64*)strlen((const char*)v73);
              GameRoutine_c29fe0((__int64*)&v372_.v372, &v391_.v391);
              v72 -= 24;
            } while (v72 != 0);
            v74 = v372_.v372;
            v75 = (__int64*)v372_.v373;
            if (v372_.v372 != (__int64*)v372_.v373) {
              v76 = *(__int64**)(a1 + 608);
              v368 = v66;
              do {
                v78 = *v74;
                v77 = v74[1];
                v79 = *(_QWORD*)(a1 + 600);
                if ((__int64*)v79 == v76) {
                LABEL_99:
                  v81 = *(_QWORD*)(a1 + 616);
                  if ((unsigned __int64)v76 < v81) {
                    *v76 = v78;
                    v76[1] = v77;
                    v76 += 2;
                  }
                  else {
                    v82 = (unsigned __int64)v76 - v79;
                    v83 = ((__int64)v76 - v79) >> 4;
                    v84 = v83 + 1;
                    if ((unsigned __int64)(v83 + 1) >> 60 != 0) {
                      goto LABEL_593;
                    }
                    v85 = v81 - v79;
                    if (v85 >> 3 > v84) {
                      v84 = v85 >> 3;
                    }
                    if ((unsigned __int64)v85 >= 0x7FFFFFFFFFFFFFF0LL) {
                      v86 = 0xFFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v86 = v84;
                    }
                    if (v86 != 0) {
                      if (v86 >> 60 != 0) {
                        goto LABEL_592;
                      }
                      v87 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v86, 16,
                          0);
                    }
                    else {
                      v87 = 0;
                    }
                    v88 = (__int64*)(v87 + v82);
                    v89 = v87 + 16 * v86;
                    *v88 = v78;
                    v88[1] = v77;
                    v90 = v87 + v82 - 16 * v83;
                    v76 = (__int64*)(v87 + v82 + 16);
                    memcpy(v90, v79, v82);
                    *(_QWORD*)(a1 + 600) = v90;
                    *(_QWORD*)(a1 + 608) = v76;
                    *(_QWORD*)(a1 + 616) = v89;
                    if (v79 != 0) {
                      v91 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v91 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v79);
                    }
                  }
                  *(_QWORD*)(a1 + 608) = v76;
                }
                else {
                  v80 = *(__int64**)(a1 + 600);
                  while (v80[1] != v77 || memcmp(*v80, v78, v77) != 0) {
                    v80 += 2;
                    if (v80 == v76) {
                      goto LABEL_99;
                    }
                  }
                }
                v74 += 2;
              } while (v74 != v75);
              v74 = v372_.v372;
              v67 = v365;
              v66 = v368;
            }
            if (v74 != nullptr) {
              v372_.v373 = (unsigned __int64)v74;
              v92 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v92 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v92, (__int64)v74);
            }
          }
          ++v66;
        } while (v66 != v67);
      }
      v104 = *(_QWORD**)(a1 + 608);
      v105 = *(_QWORD*)(a1 + 616);
      if ((unsigned __int64)v104 >= v105) {
        v108 = *(_QWORD*)(a1 + 600);
        v109 = (unsigned __int64)v104 - v108;
        v110 = ((__int64)v104 - v108) >> 4;
        v111 = v110 + 1;
        if ((unsigned __int64)(v110 + 1) >> 60 != 0) {
        LABEL_593:
          GameRoutine_a594e0();
        }
        v112 = v105 - v108;
        if (v112 >> 3 > v111) {
          v111 = v112 >> 3;
        }
        if ((unsigned __int64)v112 >= 0x7FFFFFFFFFFFFFF0LL) {
          v113 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v113 = v111;
        }
        if (v113 != 0) {
          if (v113 >> 60 != 0) {
          LABEL_592:
            GameRoutine_60a210();
          }
          v114 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v113, 16, 0);
        }
        else {
          v114 = 0;
        }
        v181 = (_QWORD*)(v114 + v109);
        v182 = v114 + 16 * v113;
        v183 = GameData_1fd1a88;
        v184 = v114 + v109 - 16 * v110;
        v106 = v114 + v109 + 16;
        *v181 = GameData_1fd1a80;
        v181[1] = v183;
        memcpy(v184, v108, v109);
        *(_QWORD*)(a1 + 600) = v184;
        *(_QWORD*)(a1 + 608) = v106;
        *(_QWORD*)(a1 + 616) = v182;
        if (v108 != 0) {
          v185 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v185 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v185, v108);
        }
      }
      else {
        v106 = (__int64)(v104 + 2);
        v107 = GameData_1fd1a88;
        *v104 = GameData_1fd1a80;
        v104[1] = v107;
      }
      *(_QWORD*)(a1 + 608) = v106;
      v374_.v374 = nullptr;
      v374_.v375 = 0;
      v372_.v372 = nullptr;
      v372_.v373 = 0;
      v374_.v377 = 0;
      v374_.v378 = 0;
      v379_.v379 = nullptr;
      v379_.v380 = 0;
      v382_.v382 = nullptr;
      v382_.v383 = nullptr;
      v382_.v384 = 0;
      v382_.v385 = nullptr;
      v382_.v386 = 0;
      v382_.v387 = 0;
      v388_.v388 = 0;
      v388_.v389 = 0;
      v388_.v390 = nullptr;
      v374_.v376 = 1065353216;
      v379_.v381 = 1065353216;
      v186 = v106 - *(_QWORD*)(a1 + 600);
      if (v186 != 0) {
        v187 = v186 >> 4;
        if ((unsigned __int64)(v186 >> 4) >= 0x666666666666667LL) {
          GameRoutine_c187c0();
        }
        v188 = fw_memory_g_heap_manager_ptr;
        v189 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v187, 16, 0);
        v190 = 40 * v187 - 40;
        if ((~(v190 / 0x28) & 7) != 0) {
          v192 = -(__int64)(((unsigned __int8)(v190 / 0x28) + 1) & 7);
          v191 = v189;
          do {
            *(_QWORD*)(v191 + 16) = 0;
            *(_QWORD*)(v191 + 24) = 0;
            *(_QWORD*)v191 = 0;
            *(_QWORD*)(v191 + 8) = 0;
            v193 = __CFADD__(v192++, 1);
            *(_DWORD*)(v191 + 32) = 1065353216;
            v191 += 40;
          } while (!v193);
        }
        else {
          v191 = v189;
        }
        v194 = v189 + 40 * v187;
        if (v190 >= 0x118) {
          do {
            *(_QWORD*)(v191 + 16) = 0;
            *(_QWORD*)(v191 + 24) = 0;
            *(_QWORD*)v191 = 0;
            *(_QWORD*)(v191 + 8) = 0;
            *(_DWORD*)(v191 + 32) = 1065353216;
            *(_QWORD*)(v191 + 40) = 0;
            *(_QWORD*)(v191 + 48) = 0;
            *(_QWORD*)(v191 + 56) = 0;
            *(_QWORD*)(v191 + 64) = 0;
            *(_DWORD*)(v191 + 72) = 1065353216;
            *(_QWORD*)(v191 + 80) = 0;
            *(_QWORD*)(v191 + 88) = 0;
            *(_QWORD*)(v191 + 96) = 0;
            *(_QWORD*)(v191 + 104) = 0;
            *(_DWORD*)(v191 + 112) = 1065353216;
            *(_QWORD*)(v191 + 120) = 0;
            *(_QWORD*)(v191 + 128) = 0;
            *(_QWORD*)(v191 + 136) = 0;
            *(_QWORD*)(v191 + 144) = 0;
            *(_DWORD*)(v191 + 152) = 1065353216;
            *(_QWORD*)(v191 + 160) = 0;
            *(_QWORD*)(v191 + 168) = 0;
            *(_QWORD*)(v191 + 176) = 0;
            *(_QWORD*)(v191 + 184) = 0;
            *(_DWORD*)(v191 + 192) = 1065353216;
            *(_QWORD*)(v191 + 200) = 0;
            *(_QWORD*)(v191 + 208) = 0;
            *(_QWORD*)(v191 + 216) = 0;
            *(_QWORD*)(v191 + 224) = 0;
            *(_DWORD*)(v191 + 232) = 1065353216;
            *(_QWORD*)(v191 + 240) = 0;
            *(_QWORD*)(v191 + 248) = 0;
            *(_QWORD*)(v191 + 256) = 0;
            *(_QWORD*)(v191 + 264) = 0;
            *(_DWORD*)(v191 + 272) = 1065353216;
            *(_QWORD*)(v191 + 280) = 0;
            *(_QWORD*)(v191 + 288) = 0;
            *(_QWORD*)(v191 + 296) = 0;
            *(_QWORD*)(v191 + 304) = 0;
            *(_DWORD*)(v191 + 312) = 1065353216;
            v191 += 320;
          } while (v191 != v194);
        }
        v195 = v382_.v382;
        v196 = v382_.v383;
        v197 = v189 + 40 * v187;
        v198 = v189 + (char*)v382_.v382 - (char*)v382_.v383;
        if (v382_.v383 != v382_.v382) {
          v370 = v189 + 40 * v187;
          v199 = 0;
          do {
            v201 = &v195[v199];
            v202 = (__int64*)(v198 + v199 * 8);
            v203 = v195[v199];
            *v201 = 0;
            *v202 = v203;
            v204 = v195[v199 + 1];
            v202[1] = v204;
            v201[1] = 0;
            v205 = v195[v199 + 2];
            v202[2] = v205;
            v206 = v198 + v199 * 8 + 16;
            v207 = v195[v199 + 3];
            *(_QWORD*)(v206 + 8) = v207;
            *(_DWORD*)(v206 + 16) = v195[v199 + 4];
            if (v207 != 0) {
              v200 = *(_QWORD*)(v205 + 8);
              if ((v204 & (v204 - 1)) != 0) {
                if (v200 >= v204) {
                  v200 %= v204;
                }
              }
              else {
                v200 &= v204 - 1;
              }
              *(_QWORD*)(v203 + 8 * v200) = v206;
              v195[v199 + 2] = 0;
              v195[v199 + 3] = 0;
            }
            v199 += 5;
          } while (&v195[v199] != v196);
          do {
            v208 = (_QWORD*)v195[2];
            while (v208 != nullptr) {
              v212 = (__int64)v208;
              v208 = (_QWORD*)*v208;
              if ((*(_BYTE*)(v212 + 16) & 1) != 0 &&
                  *(_QWORD*)(v212 + 32) != 0) {
                v213 = v212;
                v214 = *(_QWORD*)(v212 + 32);
                if (*(_QWORD*)(*(_QWORD*)v188 + 200LL) != 0) {
                  v215 = 128;
                }
                else {
                  v215 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v188 + v215, v214);
                v212 = v213;
              }
              if (*(_QWORD*)(*(_QWORD*)v188 + 200LL) != 0) {
                v211 = 128;
              }
              else {
                v211 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v188 + v211, v212);
            }
            v209 = *v195;
            *v195 = 0;
            if (v209 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v188 + 200LL) != 0) {
                v210 = 128;
              }
              else {
                v210 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v188 + v210, v209);
            }
            v195 += 5;
          } while (v195 != v196);
          v195 = v382_.v382;
          v197 = v370;
        }
        v382_.v382 = (__int64*)v198;
        v382_.v383 = (__int64*)v194;
        v382_.v384 = v197;
        if (v195 != nullptr) {
          v216 = 128;
          if (*(_QWORD*)(*(_QWORD*)v188 + 200LL) == 0) {
            v216 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v188 + v216, (__int64)v195);
        }
      }
      v217 = v388_.v388;
      if ((v388_.v388 & 1) == 0 ||
          (v388_.v388 & 0xFFFFFFFFFFFFFFFELL) - 1 <= 0x7F) {
        v218 = fw_memory_g_heap_manager_ptr;
        v219 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0);
        v220 = (__int64)v388_.v390;
        v221 = v219;
        if ((v217 & 1) != 0) {
          v222 = v388_.v389;
        }
        else {
          v222 = v217 >> 1;
        }
        if (v222 != -1) {
          if ((v217 & 1) != 0) {
            v223 = v388_.v390;
          }
          else {
            v223 = (char*)&v388_.v388 + 1;
          }
          memmove(v219, (__int64)v223, v222 + 1);
        }
        if ((v217 & 1) != 0 && v220 != 0) {
          v224 = 128;
          if (*(_QWORD*)(*(_QWORD*)v218 + 200LL) == 0) {
            v224 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v218 + v224, v220);
        }
        v388_.v390 = (char*)v221;
        v388_.v388 = 137;
        v388_.v389 = v222;
      }
      if (*(_QWORD*)(a1 + 608) != *(_QWORD*)(a1 + 600)) {
        v225 = 0;
        v226 = 0;
        v227 = fw_memory_g_heap_manager_ptr;
        do {
          v228 = v379_.v381;
          v229 = (__int64)v372_.v372;
          v230 = v372_.v373;
          v372_.v372 = (__int64*)v374_.v377;
          v372_.v373 = v374_.v378;
          v231 = v374_.v374;
          v382_.v386 = v225;
          v382_.v387 = 0;
          v374_.v377 = v229;
          v374_.v378 = v230;
          v379_.v381 = v374_.v376;
          v374_.v376 = v228;
          v382_.v385 = &v382_.v382[5 * v225];
          v233 = v379_.v379;
          v232 = v379_.v380;
          v379_.v379 = v374_.v374;
          v379_.v380 = v374_.v375;
          v374_.v374 = v233;
          v374_.v375 = v232;
          if (v379_.v380 != 0) {
            v234 = v231[1];
            if ((v230 & (v230 - 1)) != 0) {
              if (v234 >= v230) {
                v234 %= v230;
              }
            }
            else {
              v234 &= v230 - 1;
            }
            *(_QWORD*)(v229 + 8 * v234) = &v379_.v379;
            v232 = v374_.v375;
          }
          if (v232 != 0) {
            v235 = v374_.v374[1];
            if ((v372_.v373 & (v372_.v373 - 1)) != 0) {
              if (v235 >= v372_.v373) {
                v235 %= v372_.v373;
              }
            }
            else {
              v235 &= v372_.v373 - 1;
            }
            v372_.v372[v235] = (__int64)&v374_.v374;
            if (v374_.v375 != 0) {
              v236 = v374_.v374;
              while (v236 != nullptr) {
                v240 = (__int64)v236;
                v236 = (_QWORD*)*v236;
                if ((*(_BYTE*)(v240 + 16) & 1) != 0 &&
                    *(_QWORD*)(v240 + 32) != 0) {
                  v241 = v240;
                  v242 = *(_QWORD*)(v240 + 32);
                  if (*(_QWORD*)(*(_QWORD*)v227 + 200LL) != 0) {
                    v243 = 128;
                  }
                  else {
                    v243 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v227 + v243, v242);
                  v240 = v241;
                }
                if (*(_QWORD*)(*(_QWORD*)v227 + 200LL) != 0) {
                  v239 = 128;
                }
                else {
                  v239 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v227 + v239, v240);
              }
              v237 = v372_.v373;
              v374_.v374 = nullptr;
              if (v372_.v373 != 0) {
                if (v372_.v373 >= 8) {
                  v244 = v372_.v373 & 0xFFFFFFFFFFFFFFF8LL;
                  v238 = 0;
                  do {
                    v372_.v372[v238] = 0;
                    v372_.v372[v238 + 1] = 0;
                    v372_.v372[v238 + 2] = 0;
                    v372_.v372[v238 + 3] = 0;
                    v372_.v372[v238 + 4] = 0;
                    v372_.v372[v238 + 5] = 0;
                    v372_.v372[v238 + 6] = 0;
                    v245 = &v372_.v372[v238];
                    v238 += 8;
                    v245[7] = 0;
                  } while (v244 != v238);
                }
                else {
                  v238 = 0;
                }
                v246 = v237 & 7;
                if (v246 != 0) {
                  v247 = v238;
                  do {
                    --v246;
                    v372_.v372[v247++] = 0;
                  } while (v246 != 0);
                }
              }
              v374_.v375 = 0;
            }
          }
          Layout_c12ec0((void*)((__int64*)&v391_.v391), (_QWORD*)a1);
          v248 = v391_.v391;
          v249 = v391_.v392;
          for (i = v391_.v391; i != v249; ++i) {
            v251 = *i;
            GameHr_c2a120(v251, (__int64)&v372_.v372,
                          *(_DWORD**)(*(_QWORD*)(a1 + 600) + 16 * v225),
                          *(_QWORD*)(*(_QWORD*)(a1 + 600) + 16 * v225 + 8));
          }
          if (v248 != nullptr) {
            if (*(_QWORD*)(*(_QWORD*)v227 + 200LL) != 0) {
              v252 = 128;
            }
            else {
              v252 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v227 + v252, (__int64)v248);
          }
          v225 = ++v226;
        } while (v226 < (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 608) -
                                                     *(_QWORD*)(a1 + 600)) >>
                                           4));
      }
      v253 = v374_.v374;
      if (v382_.v382 == v382_.v383 || v374_.v374 == nullptr) {
        goto LABEL_475;
      }
    LABEL_393:
      v254 = v382_.v382;
      v367 = v253;
      v371 = v382_.v383;
      if (v382_.v382 == v382_.v383) {
        goto LABEL_392;
      }
      v364 = (__int64)v253 + 17;
    LABEL_399:
      v256 = v254[1];
      if (v256 == 0 || v254[3] == 0) {
        goto LABEL_398;
      }
      v258 = *((unsigned __int8*)v367 + 16);
      v259 = (v258 & 1) == 0;
      v260 = v258 >> 1;
      v261 = v259 ? v364 : v367[4];
      v262 = v259 ? v260 : v367[3];
      v263 = std___1___hash_memory(v261, v262);
      v264 = v256 - 1;
      v265 = v263;
      if ((v256 & (v256 - 1)) != 0) {
        v266 = v263;
        if (v263 >= v256) {
          v266 = v263 % v256;
        }
      }
      else {
        v266 = v263 & v264;
      }
      v267 = *v254;
      v268 = *(__int64**)(*v254 + 8 * v266);
      if (v268 == nullptr) {
        goto LABEL_398;
      }
      v269 = *v268;
      if (*v268 == 0) {
        goto LABEL_398;
      }
      if ((v256 & v264) == 0) {
        while (1) {
          v274 = *(_QWORD*)(v269 + 8);
          if (v274 == v265) {
            v275 = *(unsigned __int8*)(v269 + 16);
            v276 = *(_QWORD*)(v269 + 24);
            if ((v275 & 1) == 0) {
              v276 = v275 >> 1;
            }
            if (v276 == v262) {
              v277 = (v275 & 1) != 0 ? *(_QWORD*)(v269 + 32) : v269 + 17;
              if (memcmp(v277, v261, v262) == 0) {
                goto LABEL_440;
              }
            }
          }
          else if ((v274 & v264) != v266) {
            goto LABEL_398;
          }
          v269 = *(_QWORD*)v269;
          if (v269 == 0) {
            goto LABEL_398;
          }
        }
      }
      while (1) {
        v270 = *(_QWORD*)(v269 + 8);
        if (v270 == v265) {
          v271 = *(unsigned __int8*)(v269 + 16);
          v272 = *(_QWORD*)(v269 + 24);
          if ((v271 & 1) == 0) {
            v272 = v271 >> 1;
          }
          if (v272 == v262) {
            v273 = (v271 & 1) != 0 ? *(_QWORD*)(v269 + 32) : v269 + 17;
            if (memcmp(v273, v261, v262) == 0) {
            LABEL_440:
              if ((v256 & v264) != 0) {
                if (v265 >= v256) {
                  v265 %= v256;
                }
              }
              else {
                v265 &= v264;
              }
              v278 = *(_QWORD*)v269;
              v279 = *(__int64**)(v267 + 8 * v265);
              do {
                v280 = v279;
                v279 = (__int64*)*v279;
              } while (v279 != (__int64*)v269);
              if (v280 != v254 + 2) {
                v281 = v280[1];
                if ((v256 & v264) != 0) {
                  if (v281 >= v256) {
                    v281 %= v256;
                  }
                  if (v281 == v265) {
                  LABEL_451:
                    if (v278 != 0) {
                    LABEL_466:
                      v282 = *(_QWORD*)(v278 + 8);
                      if ((v256 & v264) == 0) {
                      LABEL_467:
                        v282 &= v264;
                        if (v282 != v265) {
                          goto LABEL_468;
                        }
                        goto LABEL_469;
                      }
                    LABEL_460:
                      if (v282 >= v256) {
                        v282 %= v256;
                      }
                      if (v282 != v265) {
                      LABEL_468:
                        *(_QWORD*)(*v254 + 8 * v282) = v280;
                        v278 = *(_QWORD*)v269;
                      }
                    }
                  LABEL_469:
                    *v280 = v278;
                    *(_QWORD*)v269 = 0;
                    --v254[3];
                    if ((*(_BYTE*)(v269 + 16) & 1) != 0) {
                      v284 = *(_QWORD*)(v269 + 32);
                      if (v284 != 0) {
                        v285 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v285 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v285,
                            v284);
                      }
                    }
                    v255 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v255 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v255, v269);
                  LABEL_398:
                    v254 += 5;
                    if (v254 != v371) {
                      goto LABEL_399;
                    }
                  LABEL_392:
                    v253 = (_QWORD*)*v367;
                    if (*v367 != 0) {
                      goto LABEL_393;
                    }
                    v253 = v374_.v374;
                  LABEL_475:
                    v286 = *(_QWORD*)(a1 + 536);
                    v287 = *(_QWORD*)(a1 + 544);
                    v288 = *(_DWORD*)(a1 + 568);
                    v289 = (__int64**)(a1 + 552);
                    v290 = v374_.v375;
                    *(_DWORD*)(a1 + 568) = v374_.v376;
                    v291 = (__int64)v372_.v372;
                    v292 = v372_.v373;
                    v372_.v372 = (__int64*)v286;
                    v372_.v373 = v287;
                    v293 = *(_QWORD**)(a1 + 552);
                    v294 = *(_QWORD*)(a1 + 560);
                    *(_QWORD*)(a1 + 536) = v291;
                    *(_QWORD*)(a1 + 544) = v292;
                    *(_QWORD*)(a1 + 552) = v253;
                    *(_QWORD*)(a1 + 560) = v290;
                    v374_.v376 = v288;
                    v374_.v374 = v293;
                    v374_.v375 = v294;
                    if (v290 != 0) {
                      v295 = v253[1];
                      if ((v292 & (v292 - 1)) != 0) {
                        if (v295 >= v292) {
                          v295 %= v292;
                        }
                      }
                      else {
                        v295 &= v292 - 1;
                      }
                      *(_QWORD*)(v291 + 8 * v295) = v289;
                      v294 = v374_.v375;
                    }
                    if (v294 != 0) {
                      v296 = v374_.v374[1];
                      if ((v372_.v373 & (v372_.v373 - 1)) != 0) {
                        if (v296 >= v372_.v373) {
                          v296 %= v372_.v373;
                        }
                      }
                      else {
                        v296 &= v372_.v373 - 1;
                      }
                      v372_.v372[v296] = (__int64)&v374_.v374;
                    }
                    v297 = v382_.v383;
                    v298 = *(__int64**)(a1 + 576);
                    *(_QWORD*)(a1 + 576) = v382_.v382;
                    v299 = *(__int64**)(a1 + 584);
                    *(_QWORD*)(a1 + 584) = v297;
                    v382_.v382 = v298;
                    v382_.v383 = v299;
                    v300 = v382_.v384;
                    v382_.v384 = *(_QWORD*)(a1 + 592);
                    LOBYTE(v298) = v388_.v388;
                    *(_QWORD*)(a1 + 592) = v300;
                    if (((unsigned __int8)v298 & 1) != 0 &&
                        v388_.v390 != nullptr) {
                      v301 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v301 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v301,
                          (__int64)v388_.v390);
                    }
                    v391_.v391 = (__int64*)&v382_.v382;
                    GameHr_c180a0(&v391_.v391);
                    v302 = v379_.v379;
                    if (v379_.v379 != nullptr) {
                      v303 = fw_memory_g_heap_manager_ptr;
                      do {
                        v305 = (__int64)v302;
                        v302 = (_QWORD*)*v302;
                        if ((*(_BYTE*)(v305 + 16) & 1) != 0 &&
                            *(_QWORD*)(v305 + 32) != 0) {
                          v306 = v305;
                          v307 = *(_QWORD*)(v305 + 32);
                          if (*(_QWORD*)(*(_QWORD*)v303 + 200LL) != 0) {
                            v308 = 128;
                          }
                          else {
                            v308 = 56;
                          }
                          nn_mem_StandardAllocator_Free(*(_QWORD*)v303 + v308,
                                                        v307);
                          v305 = v306;
                        }
                        if (*(_QWORD*)(*(_QWORD*)v303 + 200LL) != 0) {
                          v304 = 128;
                        }
                        else {
                          v304 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*(_QWORD*)v303 + v304,
                                                      v305);
                      } while (v302 != nullptr);
                    }
                    v309 = v374_.v377;
                    v374_.v377 = 0;
                    if (v309 != 0) {
                      v310 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v310 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v310, v309);
                    }
                    v311 = v374_.v374;
                    if (v374_.v374 != nullptr) {
                      v312 = fw_memory_g_heap_manager_ptr;
                      do {
                        v314 = (__int64)v311;
                        v311 = (_QWORD*)*v311;
                        if ((*(_BYTE*)(v314 + 16) & 1) != 0 &&
                            *(_QWORD*)(v314 + 32) != 0) {
                          v315 = v314;
                          v316 = *(_QWORD*)(v314 + 32);
                          if (*(_QWORD*)(*(_QWORD*)v312 + 200LL) != 0) {
                            v317 = 128;
                          }
                          else {
                            v317 = 56;
                          }
                          nn_mem_StandardAllocator_Free(*(_QWORD*)v312 + v317,
                                                        v316);
                          v314 = v315;
                        }
                        if (*(_QWORD*)(*(_QWORD*)v312 + 200LL) != 0) {
                          v313 = 128;
                        }
                        else {
                          v313 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*(_QWORD*)v312 + v313,
                                                      v314);
                      } while (v311 != nullptr);
                    }
                    v318 = (__int64)v372_.v372;
                    v372_.v372 = nullptr;
                    if (v318 != 0) {
                      v319 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v319 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v319, v318);
                    }
                    for (j = *v289; j != nullptr; j = (__int64*)*j) {
                      if ((j[2] & 1) != 0) {
                        v321 = (const char*)j[4];
                      }
                      else {
                        v321 = (char*)j + 17;
                      }
                      v322 = strlen(v321);
                      wld_map_Layout_Internal_LoadMapModelFile(
                          a1, (__int64)v321, v322, 0);
                    }
                    v323 = *(unsigned __int8*)(a1 + 192);
                    v324 = (v323 & 1) == 0;
                    v325 = v323 >> 1;
                    v326 = *(_QWORD*)(a1 + 600);
                    if (v324) {
                      v327 = v325;
                    }
                    else {
                      v327 = *(_QWORD*)(a1 + 200);
                    }
                    if (v324) {
                      v328 = a1 + 193;
                    }
                    else {
                      v328 = *(_QWORD*)(a1 + 208);
                    }
                    v329 = *(_QWORD*)(a1 + 608) - v326;
                    if (v329 != 0) {
                      v330 = v329 >> 4;
                      v331 = 1;
                      v332 = 0;
                      while (1) {
                        v333 = (__int64*)(v326 + 16 * v332);
                        if (v333[1] == v327 && memcmp(*v333, v328, v327) == 0) {
                          break;
                        }
                        v332 = v331++;
                        if (v330 <= v332) {
                          goto LABEL_546;
                        }
                      }
                      v334 = *(_QWORD*)(a1 + 576);
                      if (v334 != 0) {
                        for (k = *(__int64**)(v334 + 40 * v332 + 16);
                             k != nullptr; k = (__int64*)*k) {
                          if ((k[2] & 1) != 0) {
                            v336 = (const char*)k[4];
                          }
                          else {
                            v336 = (char*)k + 17;
                          }
                          v337 = strlen(v336);
                          wld_map_Layout_Internal_LoadMapModelFile(
                              a1, (__int64)v336, v337, 1);
                        }
                      }
                    }
                  LABEL_546:
                    *(_DWORD*)(a1 + 240) = 3;
                    return;
                  }
                }
                else if ((v281 & v264) == v265) {
                  goto LABEL_451;
                }
              }
              if (v278 != 0) {
                v282 = *(_QWORD*)(v278 + 8);
                if ((v256 & v264) != 0) {
                  v283 = *(_QWORD*)(v278 + 8);
                  if (v282 >= v256) {
                    v283 = v282 % v256;
                  }
                  if (v283 == v265) {
                  LABEL_459:
                    if ((v256 & v264) == 0) {
                      goto LABEL_467;
                    }
                    goto LABEL_460;
                  }
                }
                else if ((v282 & v264) == v265) {
                  goto LABEL_459;
                }
              }
              *(_QWORD*)(v267 + 8 * v265) = 0;
              v278 = *(_QWORD*)v269;
              if (*(_QWORD*)v269 != 0) {
                goto LABEL_466;
              }
              goto LABEL_469;
            }
          }
        }
        else {
          if (v270 >= v256) {
            v270 %= v256;
          }
          if (v270 != v266) {
            goto LABEL_398;
          }
        }
        v269 = *(_QWORD*)v269;
        if (v269 == 0) {
          goto LABEL_398;
        }
      }
    }
    v19 = *(__int64**)(a1 + 352);
    v20 = *(__int64**)(a1 + 360);
    while (v19 != v20) {
      v21 = *v19++;
      nn_os_AcquireReadLock(v21 + 696);
      v22 = *(_DWORD*)(v21 + 656);
      nn_os_ReleaseReadLock(v21 + 696);
      if ((v22 & 8) == 0) {
        return;
      }
    }
    if (*(_QWORD*)(a1 + 520) != 0) {
      v23 = *(_QWORD**)(a1 + 512);
      if (v23 != nullptr) {
        v24 = fw_memory_g_heap_manager_ptr;
        do {
          v25 = (_QWORD*)*v23;
          if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
            v26 = 128;
          }
          else {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v26, (__int64)v23);
          v23 = v25;
        } while (v25 != nullptr);
      }
      v27 = *(_QWORD*)(a1 + 504);
      *(_QWORD*)(a1 + 512) = 0;
      if (v27 != 0) {
        v28 = v27 & 7;
        if (v27 >= 8) {
          v124 = v27 & 0xFFFFFFFFFFFFFFF8LL;
          v29 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v29) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v29 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v29 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v29 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v29 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v29 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v29 + 48) = 0;
            v125 = *(_QWORD*)(a1 + 496) + 8 * v29;
            v29 += 8;
            *(_QWORD*)(v125 + 56) = 0;
          } while (v124 != v29);
        }
        else {
          v29 = 0;
        }
        if (v28 != 0) {
          v126 = 8 * v29;
          do {
            --v28;
            *(_QWORD*)(*(_QWORD*)(a1 + 496) + v126) = 0;
            v126 += 8;
          } while (v28 != 0);
        }
      }
      *(_QWORD*)(a1 + 520) = 0;
    }
    v127 = *(__int64**)(a1 + 352);
    v361 = *(__int64**)(a1 + 360);
    if (v127 == v361) {
    LABEL_284:
      *(_DWORD*)(a1 + 240) = 2;
      return;
    }
    v128 = (_QWORD*)(a1 + 512);
    while (1) {
      v129 = *v127;
      v362 = v127;
      v369 = ElfFile_631220((__int64*)(*v127 + 800), "world::data::s_data");
      v130 = (unsigned int*)ElfFile_631220((__int64*)(v129 + 800),
                                           "world::data::s_dataNum");
      v131 = *v130;
      v366 = v130;
      if ((_DWORD)v131 != 0) {
        break;
      }
    LABEL_180:
      v127 = v362 + 1;
      if (v362 + 1 == v361) {
        goto LABEL_284;
      }
    }
    v132 = 0;
    while (1) {
      v133 = (const char**)(v369 + 80 * v132);
      v134 = *v133;
      v135 = strlen(*v133);
      v136 = std___1___hash_memory((__int64)v134, v135);
      v137 = *(_QWORD*)(a1 + 504);
      v138 = v136;
      if (v137 != 0) {
        v363 = v131;
        v139 = v137 - 1;
        if ((v137 & (v137 - 1)) != 0) {
          v1 = v136;
          if (v136 >= v137) {
            v1 = v136 % v137;
          }
        }
        else {
          v1 = v139 & v136;
        }
        v140 = *(_QWORD**)(*(_QWORD*)(a1 + 496) + 8 * v1);
        if (v140 != nullptr) {
          v141 = (_QWORD*)*v140;
          if (*v140 != 0) {
            if ((v137 & v139) != 0) {
              v131 = v363;
              while (1) {
                v142 = v141[1];
                if (v142 == v138) {
                  if (v141[3] == v135 &&
                      memcmp(v141[2], (__int64)v134, v135) == 0) {
                    v128 = (_QWORD*)(a1 + 512);
                    goto LABEL_282;
                  }
                }
                else {
                  if (v142 >= v137) {
                    v142 %= v137;
                  }
                  if (v142 != v1) {
                    goto LABEL_206;
                  }
                }
                v141 = (_QWORD*)*v141;
                if (v141 == nullptr) {
                  goto LABEL_206;
                }
              }
            }
            do {
              v143 = v141[1];
              if (v143 == v138) {
                if (v141[3] == v135 &&
                    memcmp(v141[2], (__int64)v134, v135) == 0) {
                  v128 = (_QWORD*)(a1 + 512);
                  v131 = v363;
                  goto LABEL_282;
                }
              }
              else if ((v143 & v139) != v1) {
                break;
              }
              v141 = (_QWORD*)*v141;
            } while (v141 != nullptr);
          }
        LABEL_206:
          v128 = (_QWORD*)(a1 + 512);
        }
      }
      v144 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      v145 = *(_QWORD*)(a1 + 520);
      v146 = *(float*)(a1 + 528);
      v147 = v144;
      *v144 = 0;
      v144[1] = v138;
      v144[2] = v134;
      v144[3] = v135;
      v144[4] = v133;
      v148 = (float)(unsigned __int64)(v145 + 1);
      if (v137 != 0 && (float)(v146 * (float)v137) >= v148) {
        goto LABEL_273;
      }
      v149 = v148 / v146;
      v150 = (v137 & (v137 - 1)) != 0;
      if (v137 < 3) {
        v150 = true;
      }
      v151 = v150 | (2 * v137);
      v152 = vcvtps_u64_f32(v149);
      if (v151 <= v152) {
        v153 = v152;
      }
      else {
        v153 = v151;
      }
      if (v153 == 1) {
        v153 = 2;
      }
      else if ((v153 & (v153 - 1)) != 0) {
        primeEm = std___1___next_prime(v153);
        v137 = *(_QWORD*)(a1 + 504);
        v153 = primeEm;
      }
      if (v153 <= v137) {
        if (v153 >= v137) {
          goto LABEL_268;
        }
        v160 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 520) /
                              *(float*)(a1 + 528));
        if (v137 < 3 || (v137 & (v137 - 1)) != 0) {
          v160 = std___1___next_prime(v160);
        }
        else {
          v161 = 1LL << -(char)__clz(v160 - 1);
          if (v160 >= 2) {
            v160 = v161;
          }
        }
        if (v153 <= v160) {
          v153 = v160;
        }
        if (v153 >= v137) {
          goto LABEL_268;
        }
        if (v153 == 0) {
          v175 = *(_QWORD*)(a1 + 496);
          *(_QWORD*)(a1 + 496) = 0;
          if (v175 != 0) {
            v176 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v176 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v176,
                                          v175);
          }
          *(_QWORD*)(a1 + 504) = 0;
          goto LABEL_268;
        }
      }
      v155 = fw_memory_g_heap_manager_ptr;
      if (v153 >> 61 != 0) {
        goto LABEL_592;
      }
      v156 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v153, 16, 0);
      v157 = *(_QWORD*)(a1 + 496);
      *(_QWORD*)(a1 + 496) = v156;
      if (v157 != 0) {
        v158 = 128;
        if (*(_QWORD*)(*(_QWORD*)v155 + 200LL) == 0) {
          v158 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v155 + v158, v157);
      }
      *(_QWORD*)(a1 + 504) = v153;
      if (v153 >= 8) {
        v159 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v159) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v159 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v159 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v159 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v159 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v159 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v159 + 48) = 0;
          v162 = *(_QWORD*)(a1 + 496) + 8 * v159;
          v159 += 8;
          *(_QWORD*)(v162 + 56) = 0;
        } while ((v153 & 0x1FFFFFFFFFFFFFF8LL) != v159);
      }
      else {
        v159 = 0;
      }
      v163 = v153 & 7;
      if ((v153 & 7) != 0) {
        v164 = 8 * v159;
        do {
          --v163;
          *(_QWORD*)(*(_QWORD*)(a1 + 496) + v164) = 0;
          v164 += 8;
        } while (v163 != 0);
      }
      v165 = (_QWORD*)*v128;
      if (*v128 == 0) {
        goto LABEL_268;
      }
      v166 = v165[1];
      v167 = v153 - 1;
      if ((v153 & (v153 - 1)) != 0) {
        break;
      }
      v171 = v166 & v167;
      *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v171) = v128;
      while (1) {
        v172 = (_QWORD*)*v165;
        if (*v165 == 0) {
          break;
        }
        v173 = v172[1] & v167;
        if (v173 == v171) {
          v165 = (_QWORD*)*v165;
        }
        else {
          v174 = *(_QWORD*)(a1 + 496);
          if (*(_QWORD*)(v174 + 8 * v173) != 0) {
            *v165 = *v172;
            *v172 = **(_QWORD**)(*(_QWORD*)(a1 + 496) + 8 * v173);
            **(_QWORD**)(*(_QWORD*)(a1 + 496) + 8 * v173) = v172;
          }
          else {
            *(_QWORD*)(v174 + 8 * v173) = v165;
            v165 = v172;
            v171 = v173;
          }
        }
      }
    LABEL_268:
      v137 = *(_QWORD*)(a1 + 504);
      if ((v137 & (v137 - 1)) != 0) {
        if (v138 >= v137) {
          v1 = v138 % v137;
        }
        else {
          v1 = v138;
        }
      }
      else {
        v1 = (v137 - 1) & v138;
      }
    LABEL_273:
      v177 = *(_QWORD*)(a1 + 496);
      v178 = *(_QWORD**)(v177 + 8 * v1);
      if (v178 != nullptr) {
        *v147 = *v178;
        *v178 = v147;
      }
      else {
        v179 = (_QWORD*)*v128;
        *v128 = v147;
        *v147 = v179;
        *(_QWORD*)(v177 + 8 * v1) = v128;
        if (*v147 != 0) {
          v180 = *(_QWORD*)(*v147 + 8LL);
          if ((v137 & (v137 - 1)) != 0) {
            if (v180 >= v137) {
              v180 %= v137;
            }
          }
          else {
            v180 &= v137 - 1;
          }
          *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v180) = v147;
        }
      }
      ++*(_QWORD*)(a1 + 520);
      v131 = *v366;
    LABEL_282:
      if (++v132 >= v131) {
        goto LABEL_180;
      }
    }
    if (v166 >= v153) {
      v166 %= v153;
    }
    *(_QWORD*)(*(_QWORD*)(a1 + 496) + 8 * v166) = v128;
    v168 = (_QWORD*)*v165;
    if (*v165 == 0) {
      goto LABEL_268;
    }
    while (1) {
      v169 = v168[1];
      if (v169 >= v153) {
        v169 %= v153;
      }
      if (v169 != v166) {
        v170 = *(_QWORD*)(a1 + 496);
        if (*(_QWORD*)(v170 + 8 * v169) == 0) {
          *(_QWORD*)(v170 + 8 * v169) = v165;
          goto LABEL_245;
        }
        *v165 = *v168;
        *v168 = **(_QWORD**)(*(_QWORD*)(a1 + 496) + 8 * v169);
        **(_QWORD**)(*(_QWORD*)(a1 + 496) + 8 * v169) = v168;
        v168 = v165;
      }
      v169 = v166;
    LABEL_245:
      v165 = v168;
      v168 = (_QWORD*)*v168;
      v166 = v169;
      if (v168 == nullptr) {
        goto LABEL_268;
      }
    }
  }
  switch (v2) {
  case 4:
    if (*(int*)(*(_QWORD*)(a1 + 264) + 84LL) >= 8) {
      v30 = *(_QWORD**)(a1 + 280);
      if (v30 == nullptr ||
          ((v32 = v30[1], v31 = v30[2], v33 = v30[6], v31 == v32)
               ? (v34 = v33 == 0)
               : (v34 = false),
           v34)) {
        v35 = *(__int64**)(a1 + 304);
        v36 = *(__int64**)(a1 + 312);
        while (v35 != v36) {
          v37 = *v35++;
          if (*(int*)(v37 + 84) <= 7) {
            return;
          }
        }
        if (**(_BYTE**)(a1 + 272) == 1) {
          v38 = *(_QWORD*)(a1 + 288);
          if (v38 == 0 || *(_DWORD*)(v38 + 184) == 4) {
            *(_DWORD*)(a1 + 240) = 5;
            GameRoutine_c13060(a1);
            v39 = *(_QWORD**)(a1 + 288);
            if (v39 != nullptr) {
              Layout_c1b8c0(v39);
            }
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 80LL) + 289LL) = 1;
            v40 = *(unsigned __int64**)(a1 + 264);
            v41 = v40[52];
            if (*(_BYTE*)(v41 + 112) == 1) {
              v372_.v372 = *(__int64**)(a1 + 264);
              v372_.v373 = *v40;
              wld_map_MapEffectPlacer_PlaceCommon(
                  (__int64)&v372_.v372, (__int64*)(v41 + 8), 0x0.0p+0f);
            }
            Layout_c12ec0((void*)((__int64*)&v391_.v391), (_QWORD*)a1);
            v42 = v391_.v391;
            v43 = v391_.v392;
            if (v391_.v391 != v391_.v392) {
              v44 = v391_.v391;
              do {
                v45 = (__int64*)*v44;
                v46 = *(unsigned __int64**)(*v44 + 312);
                v47 = *(unsigned __int64**)(*v44 + 320);
                v48 = *(_QWORD*)(a1 + 272) + 24LL;
                v45[37] = *(_QWORD*)(*v44 + 288);
                v49 = *v45;
                v372_.v372 = (__int64*)v48;
                v374_.v374 = nullptr;
                v374_.v375 = 0x100000000LL;
                v393[0] = v49;
                if (v46 != v47) {
                  do {
                    v50 = *v46++;
                    v372_.v373 = v50;
                    GameHr_198d120(v393, (__int64)&v372_.v372);
                  } while (v46 != v47);
                  v46 = (unsigned __int64*)v45[39];
                }
                ++v44;
                v45[40] = (__int64)v46;
              } while (v44 != v43);
            }
            if (v42 != nullptr) {
              v338 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v338 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v338, (__int64)v42);
            }
            if (*(_QWORD*)(a1 + 144) != 0) {
              v339 = *(unsigned __int8*)(a1 + 40);
              v340 = (v339 & 1) == 0;
              v341 = v339 >> 1;
              if (v340) {
                v342 = v341;
              }
              else {
                v342 = *(_QWORD*)(a1 + 48);
              }
              v343 = *(unsigned __int8*)(a1 + 64);
              if (v340) {
                v344 = a1 + 41;
              }
              else {
                v344 = *(_QWORD*)(a1 + 56);
              }
              v345 = (v343 & 1) == 0;
              v346 = v343 >> 1;
              if (v345) {
                v347 = v346;
              }
              else {
                v347 = *(_QWORD*)(a1 + 72);
              }
              v348 = *(unsigned __int8*)(a1 + 88);
              if (v345) {
                v349 = a1 + 65;
              }
              else {
                v349 = *(_QWORD*)(a1 + 80);
              }
              v350 = (v348 & 1) == 0;
              v351 = v348 >> 1;
              if (v350) {
                v352 = a1 + 89;
              }
              else {
                v352 = *(_QWORD*)(a1 + 104);
              }
              if (v350) {
                v353 = v351;
              }
              else {
                v353 = *(_QWORD*)(a1 + 96);
              }
              GameRoutine_c131a0(a1 + 112, v344, v342, v349, v347, v352, v353);
              v354 = *(_QWORD**)(a1 + 144);
              *(_QWORD*)(a1 + 144) = 0;
              if (v354 == (_QWORD*)(a1 + 112)) {
                v355 = 32;
              }
              else {
                if (v354 == nullptr) {
                  return;
                }
                v355 = 40;
              }
              (*(void (**)(__int64))(*v354 + v355))((__int64)v354);
            }
          }
        }
      }
    }
    break;
  case 5:
    v93 = *(_DWORD*)(a1 + 244);
    if (v93 <= 2) {
      if (v93 == 1) {
        for (m = *(_QWORD**)(a1 + 472); m != nullptr; m = (_QWORD*)*m) {
          v121 = m[6];
          if (v121 != 0 && (*(_BYTE*)(v121 + 165) != 1 ||
                            !GameRoutine_ad7390((_QWORD*)v121))) {
            return;
          }
        }
        for (n = *(_QWORD**)(a1 + 392); n != nullptr; n = (_QWORD*)*n) {
          v122 = n[6];
          if (v122 != 0 && (*(_BYTE*)(v122 + 165) != 1 ||
                            !GameRoutine_ad7390((_QWORD*)v122))) {
            return;
          }
        }
        *(_DWORD*)(a1 + 244) = 2;
      }
      else if (v93 != 2) {
        return;
      }
      GameHr_c13200((__int64*)a1);
      return;
    }
    if (v93 == 3) {
      Layout_c12ec0((void*)((__int64*)&v372_.v372), (_QWORD*)a1);
      if (v372_.v372 == (__int64*)v372_.v373) {
        v118 = true;
      }
      else {
        v115 = v372_.v372 + 1;
        do {
          v116 = *(_DWORD*)(*(v115 - 1) + 84);
        } while (v116 != 9 && v115++ != (__int64*)v372_.v373);
        v118 = v116 != 9;
      }
      if (v372_.v372 != nullptr) {
        v356 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v356 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v356, (__int64)v372_.v372);
      }
      if (!v118) {
        return;
      }
      Layout_c12ec0((void*)((__int64*)&v372_.v372), (_QWORD*)a1);
      v357 = (__int64)v372_.v372;
      v358 = (__int64*)v372_.v373;
      if (v372_.v372 != (__int64*)v372_.v373) {
        v359 = v372_.v372;
        do {
          if (*(_DWORD*)(*v359 + 84) == 10) {
            GameHr_c29c40(*v359);
          }
          ++v359;
        } while (v359 != v358);
      }
      if (v357 != 0) {
        v360 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v360 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v360, v357);
      }
    }
    else if (v93 != 4) {
      if (v93 == 5) {
        Layout_c12ec0((void*)((__int64*)&v391_.v391), (_QWORD*)a1);
        v94 = v391_.v391;
        v95 = v391_.v392;
        if (v391_.v391 != v391_.v392) {
          v96 = v391_.v391;
          do {
            v97 = (__int64*)*v96;
            v98 = *(_QWORD**)(a1 + 256);
            v99 = *(_QWORD*)(a1 + 272) + 24LL;
            v100 = *(unsigned __int64**)(*v96 + 312);
            v101 = *(unsigned __int64**)(*v96 + 320);
            v97[37] = *(_QWORD*)(*v96 + 288);
            v102 = *v97;
            v372_.v372 = (__int64*)v99;
            v374_.v374 = v98;
            LODWORD(v374_.v375) = 0;
            HIDWORD(v374_.v375) = v98 == nullptr;
            v393[0] = v102;
            if (v100 != v101) {
              do {
                v103 = *v100++;
                v372_.v373 = v103;
                GameHr_198d120(v393, (__int64)&v372_.v372);
              } while (v100 != v101);
              v100 = (unsigned __int64*)v97[39];
            }
            ++v96;
            v97[40] = (__int64)v100;
          } while (v96 != v95);
        }
        if (v94 != nullptr) {
          v123 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v123 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v123, (__int64)v94);
        }
        *(_DWORD*)(a1 + 244) = 0;
      }
      return;
    }
    *(_DWORD*)(a1 + 244) = 5;
    return;
  case 6:
    v11 = *(_QWORD**)(a1 + 280);
    if (v11 == nullptr ||
        ((v13 = v11[1], v12 = v11[2], v14 = v11[6], v12 == v13)
             ? (v15 = v14 == 0)
             : (v15 = false),
         v15)) {
      v16 = *(__int64**)(a1 + 304);
      v17 = *(__int64**)(a1 + 312);
      while (v16 != v17) {
        v18 = *v16++;
        if (*(int*)(v18 + 84) <= 7) {
          return;
        }
      }
      *(_DWORD*)(a1 + 240) = 5;
    }
    break;
  default:
    break;
  }
}

_QWORD* wld_c31840(__int64 a1, unsigned __int8* a2, char* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  _QWORD* v26;
  char v27;
  __int64 v28;
  float v29;
  float v30;
  float v31;
  _BOOL8 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 primeEm;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  _QWORD* v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  unsigned __int64 v60;

  v4 = *a2;
  v7 = (v4 & 1) == 0;
  v8 = v4 >> 1;
  if (v7) {
    v9 = (__int64)(a2 + 1);
  }
  else {
    v9 = *((_QWORD*)a2 + 2);
  }
  if (v7) {
    v10 = v8;
  }
  else {
    v10 = *((_QWORD*)a2 + 1);
  }
  v11 = std___1___hash_memory(v9, v10);
  v12 = *(_QWORD*)(a1 + 8);
  v13 = v11;
  if (v12 != 0) {
    v14 = v12 - 1;
    if ((v12 & (v12 - 1)) != 0) {
      v3 = v11;
      if (v11 >= v12) {
        v3 = v11 % v12;
      }
    }
    else {
      v3 = v14 & v11;
    }
    v15 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
    if (v15 != nullptr) {
      v16 = (_QWORD*)*v15;
      if (*v15 != 0) {
        if ((v12 & v14) == 0) {
          while (1) {
            v21 = v16[1];
            if (v21 == v13) {
              v22 = *((unsigned __int8*)v16 + 16);
              v23 = v16[3];
              if ((v22 & 1) == 0) {
                v23 = v22 >> 1;
              }
              if (v23 == v10) {
                v24 = (v22 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
                if (memcmp(v24, v9, v10) == 0) {
                  return v16;
                }
              }
            }
            else if ((v21 & v14) != v3) {
              goto LABEL_41;
            }
            v16 = (_QWORD*)*v16;
            if (v16 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v17 = v16[1];
          if (v17 == v13) {
            v18 = *((unsigned __int8*)v16 + 16);
            v19 = v16[3];
            if ((v18 & 1) == 0) {
              v19 = v18 >> 1;
            }
            if (v19 == v10) {
              v20 = (v18 & 1) != 0 ? v16[4] : (__int64)v16 + 17;
              if (memcmp(v20, v9, v10) == 0) {
                return v16;
              }
            }
          }
          else {
            if (v17 >= v12) {
              v17 %= v12;
            }
            if (v17 != v3) {
              break;
            }
          }
          v16 = (_QWORD*)*v16;
        } while (v16 != nullptr);
      }
    }
  }
LABEL_41:
  v25 = (__int64*)fw_memory_g_heap_manager_ptr;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v27 = *a3;
  v16 = v26;
  *v26 = 0;
  v26[1] = v13;
  if ((v27 & 1) != 0) {
    fw_text_String_CopyTerminated(v26 + 2, *((_QWORD*)a3 + 2),
                                  *((_QWORD*)a3 + 1));
  }
  else {
    v28 = *((_QWORD*)a3 + 1);
    v26[2] = *(_QWORD*)a3;
    v26[3] = v28;
    v26[4] = *((_QWORD*)a3 + 2);
  }
  v29 = *(float*)(a1 + 32);
  v30 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v12 == 0 || (float)(v29 * (float)v12) < v30) {
    v31 = v30 / v29;
    v32 = true;
    if (v12 >= 3) {
      v32 = (v12 & (v12 - 1)) != 0;
    }
    v33 = v32 | (2 * v12);
    v34 = vcvtps_u64_f32(v31);
    if (v33 <= v34) {
      primeEm = v34;
    }
    else {
      primeEm = v33;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v36 = *(_QWORD*)(a1 + 8);
    if (primeEm <= v36) {
      if (primeEm >= v36) {
        goto LABEL_105;
      }
      v42 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v36 < 3 || (v36 & (v36 - 1)) != 0) {
        v42 = std___1___next_prime(v42);
      }
      else {
        v43 = 1LL << -(char)__clz(v42 - 1);
        if (v42 >= 2) {
          v42 = v43;
        }
      }
      if (primeEm <= v42) {
        primeEm = v42;
      }
      if (primeEm >= v36) {
        goto LABEL_105;
      }
      if (primeEm == 0) {
        v55 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v55 != 0) {
          v56 = 128;
          if (*(_QWORD*)(*v25 + 200) == 0) {
            v56 = 56;
          }
          nn_mem_StandardAllocator_Free(*v25 + v56, v55);
        }
        *(_QWORD*)(a1 + 8) = 0;
        goto LABEL_105;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v37 = fw_memory_HeapManager_Allocate(*v25, 8 * primeEm, 16, 0);
    v38 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v37;
    if (v38 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(*v25 + v39, v38);
    }
    v40 = primeEm & 7;
    *(_QWORD*)(a1 + 8) = primeEm;
    if (primeEm >= 8) {
      v41 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v41 + 48) = 0;
        v44 = *(_QWORD*)a1 + 8 * v41;
        v41 += 8;
        *(_QWORD*)(v44 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v41);
    }
    else {
      v41 = 0;
    }
    if ((primeEm & 7) != 0) {
      v45 = 8 * v41;
      do {
        --v40;
        *(_QWORD*)(*(_QWORD*)a1 + v45) = 0;
        v45 += 8;
      } while (v40 != 0);
    }
    v47 = a1 + 16;
    v46 = *(_QWORD**)(a1 + 16);
    if (v46 != nullptr) {
      v48 = v46[1];
      v49 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v48 >= primeEm) {
          v48 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v48) = v47;
        v50 = (_QWORD*)*v46;
        if (*v46 == 0) {
          goto LABEL_105;
        }
        while (1) {
          v51 = v50[1];
          if (v51 >= primeEm) {
            v51 %= primeEm;
          }
          if (v51 != v48) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v51) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = v46;
              goto LABEL_82;
            }
            *v46 = *v50;
            *v50 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v51);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v51) = v50;
            v50 = v46;
          }
          v51 = v48;
        LABEL_82:
          v46 = v50;
          v50 = (_QWORD*)*v50;
          v48 = v51;
          if (v50 == nullptr) {
            goto LABEL_105;
          }
        }
      }
      v52 = v48 & v49;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = v47;
      while (1) {
        v53 = (_QWORD*)*v46;
        if (*v46 == 0) {
          break;
        }
        v54 = v53[1] & v49;
        if (v54 == v52) {
          v46 = (_QWORD*)*v46;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v54) != 0) {
          *v46 = *v53;
          *v53 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v54);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v54) = v53;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v54) = v46;
          v46 = v53;
          v52 = v54;
        }
      }
    }
  LABEL_105:
    v12 = *(_QWORD*)(a1 + 8);
    if ((v12 & (v12 - 1)) != 0) {
      if (v13 >= v12) {
        v3 = v13 % v12;
      }
      else {
        v3 = v13;
      }
    }
    else {
      v3 = (v12 - 1) & v13;
    }
  }
  v57 = *(_QWORD*)a1;
  v58 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v58 != nullptr) {
    *v16 = *v58;
    *v58 = v16;
  }
  else {
    v59 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v16;
    *v16 = v59;
    *(_QWORD*)(v57 + 8 * v3) = a1 + 16;
    if (*v16 != 0) {
      v60 = *(_QWORD*)(*v16 + 8LL);
      if ((v12 & (v12 - 1)) != 0) {
        if (v60 >= v12) {
          v60 %= v12;
        }
      }
      else {
        v60 &= v12 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v60) = v16;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v16;
}

void wld_c37860(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4,
                unsigned __int64 a5, __int64 a6, unsigned __int64 a7,
                __int64 a8, char* a9, unsigned __int64 a10)
{
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64* v30;
  __int64* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _BYTE* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  char* v45;
  char v46;
  char v47;
  char v48;
  __int64 v49;
  unsigned __int64 v50;
  char* v51;
  char v52;
  char v53;
  char v54;
  __int64 v55;
  unsigned __int64 v56;
  char* v57;
  char v58;
  char v59;
  char v60;
  __int64 v61;
  __int64* v62;
  unsigned __int64 v63;
  char* v64;
  __int64 v65;
  char* v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  struct {
    __int64 v78;
    __int64 v79;
  } v78_;
  struct {
    _QWORD v80[2];
    _BYTE* v81;
  } v80_;
  struct {
    __int64 v82;
    unsigned __int64 v83;
    char* v84;
    char* v85;
    __int64 v86;
    char* v87;
    unsigned __int64 v88;
  } v82_;
  struct {
    __int64 v89;
    unsigned __int64 v90;
    char* v91;
  } v89_;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_60a060((char*)(a1 + 40), a2, a3),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_60a060((char*)(a1 + 64), a4, a5),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v76 = a6;
  v77 = a7;
  GameRoutine_60a060((char*)(a1 + 88), a6, a7),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_60a060((char*)(a1 + 112), (__int64)a9, a10),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v18 = *(_QWORD*)(a1 + 16);
  if (v18 != 0) {
    v18 = std___1___shared_weak_count_lock(v18),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if (v18 != 0) {
      v19 = *(_QWORD*)(a1 + 8);
    }
    else {
      v19 = 0;
    }
  }
  else {
    v19 = 0;
  }
  v74 = a5;
  v75 = v18;
  v72 = a3;
  v73 = a4;
  v71 = a2;
  if (a10 != 0) {
    if (a10 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0(),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if (a10 >= 0x17) {
      if ((a10 | 7) == 0x17) {
        v23 = 26;
      }
      else {
        v23 = (a10 | 7) + 1;
      }
      v20 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v23,
                                                  16, 0),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v82_.v83 = a10;
      v82_.v84 = v20;
      v82_.v82 = v23 | 1;
    }
    else {
      LOBYTE(v82_.v82) = 2 * a10;
      v20 = (char*)&v82_.v82 + 1;
    }
    memmove((__int64)v20, (__int64)a9, a10),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v20[a10] = 0;
    v24 = (_QWORD*)GameRoutine_1a0a680((__int64)&v82_.v82, 0, "MapLight_", 9u),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v26 = v24[1];
    v25 = v24[2];
    v80_.v80[0] = *v24;
    v80_.v80[1] = v26;
    v80_.v81 = (_BYTE*)v25;
    v24[1] = 0;
    v24[2] = 0;
    *v24 = 0;
    if ((v82_.v82 & 1) != 0 && v82_.v84 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v27,
                                    (__int64)v82_.v84),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v21 = LOBYTE(v80_.v80[0]);
    v22 = (__int64)v80_.v81;
  }
  else {
    v21 = 16;
    LOBYTE(v80_.v80[0]) = 16;
    v22 = 0x746867694C70614DLL;
    strcpy((char*)v80_.v80 + 1, "MapLight");
  }
  v28 = *(_QWORD*)(v19 + 288);
  if ((v21 & 1) != 0) {
    v29 = (char*)v22;
  }
  else {
    v29 = (char*)v80_.v80 + 1;
  }
  v30 = *(__int64**)(v28 + 888);
  v31 = *(__int64**)(v28 + 896);
  if ((v21 & 1) != 0) {
    v32 = v80_.v80[1];
  }
  else {
    v32 = v21 >> 1;
  }
  if (v30 != v31) {
    while (1) {
      v33 = *v30;
      if (strlen((const char*)(*v30 + 24)) == v32 &&
          memcmp(v33 + 24, (__int64)v29, v32) == 0) {
        break;
      }
      v30 += 2;
      if (v30 == v31) {
        v34 = 0;
        goto LABEL_39;
      }
    }
  }
  if (v30 == v31) {
    v34 = 0;
  LABEL_39:
    if ((v21 & 1) != 0) {
      v37 = v80_.v81;
    }
    else {
      v37 = (char*)v80_.v80 + 1;
    }
    v35 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 64, 16, 0),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    GameRoutine_c51cf0(v35, v37),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v36 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 32, 16, 0),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    *(_QWORD*)(v36 + 16) = 0;
    *(_QWORD*)(v36 + 24) = v35;
    *(_QWORD*)v36 = &GameData_1fd1e70;
    *(_QWORD*)(v36 + 8) = 0;
    if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      std___1___shared_weak_count___release_weak(v34),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    v78_.v78 = v35;
    v78_.v79 = v36;
    v38 = *(_QWORD*)(v19 + 288);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_c56f20((__int64*)(v38 + 888), &v78_.v78),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v39 = v78_.v79;
    if (v78_.v79 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v78_.v79 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      std___1___shared_weak_count___release_weak(v39),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    goto LABEL_48;
  }
  v35 = *v30;
  v34 = v30[1];
  if (v34 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                              memory_order_relaxed);
  }
  v36 = v34;
  if (v35 == 0) {
    goto LABEL_39;
  }
LABEL_48:
  v40 = *(_QWORD*)v35;
  v41 = *(_QWORD*)(v35 + 8);
  for (*(_BYTE*)(v35 + 60) = 0; v41 != v40; v41 -= 16) {
    v42 = *(_QWORD*)(v41 - 8);
    if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      std___1___shared_weak_count___release_weak(v42),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
  }
  *(_QWORD*)(v35 + 8) = v40;
  *(_DWORD*)(v35 + 56) = 0;
  if (v36 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                              memory_order_relaxed);
  }
  v43 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 24) = v35;
  *(_QWORD*)(a1 + 32) = v36;
  if (v43 != 0) {
    std___1___shared_weak_count___release_weak(v43),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if (v77 == 0) {
    goto LABEL_111;
  }
  if (a10 == 0) {
    goto LABEL_93;
  }
  wld_c3abd0(&v89_.v89, v71, v72, v73, v74, v76, v77, v17, (__int64)a9, a10),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v89_.v89 & 1) != 0) {
    v44 = v89_.v90;
  }
  else {
    v44 = (unsigned __int64)(unsigned __int8)v89_.v89 >> 1;
  }
  if ((v89_.v89 & 1) != 0) {
    v45 = v89_.v91;
  }
  else {
    v45 = (char*)&v89_.v89 + 1;
  }
  v46 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
      **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v45, v44, 2),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v47 = v89_.v89;
  v48 = v46;
  if ((v46 & 1) != 0) {
    if ((v89_.v89 & 1) != 0) {
      fw_text_String_CopyTerminated(&v82_.v82, (__int64)v89_.v91, v89_.v90),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v47 = v89_.v89;
    }
    else {
      v82_.v82 = v89_.v89;
      v82_.v83 = v89_.v90;
      v82_.v84 = v89_.v91;
    }
    v82_.v85 = (char*)v76;
    v82_.v86 = v77;
    v82_.v87 = a9;
    v82_.v88 = a10;
  }
  if ((v47 & 1) != 0 && v89_.v91 != nullptr) {
    v49 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v49,
                                  (__int64)v89_.v91),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if ((v48 & 1) == 0) {
  LABEL_93:
    wld_c3abd0(&v89_.v89, v71, v72, v73, v74, v76, v77, v17,
               (__int64)&GameData_1a9f09e, 0),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((v89_.v89 & 1) != 0) {
      v50 = v89_.v90;
    }
    else {
      v50 = (unsigned __int64)(unsigned __int8)v89_.v89 >> 1;
    }
    if ((v89_.v89 & 1) != 0) {
      v51 = v89_.v91;
    }
    else {
      v51 = (char*)&v89_.v89 + 1;
    }
    v52 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
        **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
        *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v51, v50, 2),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    v53 = v89_.v89;
    v54 = v52;
    if ((v52 & 1) != 0) {
      if ((v89_.v89 & 1) != 0) {
        fw_text_String_CopyTerminated(&v82_.v82, (__int64)v89_.v91, v89_.v90),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v53 = v89_.v89;
      }
      else {
        v82_.v82 = v89_.v89;
        v82_.v83 = v89_.v90;
        v82_.v84 = v89_.v91;
      }
      v82_.v87 = &GameData_1a9f09e;
      v82_.v88 = 0;
      v82_.v85 = (char*)v76;
      v82_.v86 = v77;
    }
    if ((v53 & 1) != 0 && v89_.v91 != nullptr) {
      v55 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v55,
                                    (__int64)v89_.v91),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
    if ((v54 & 1) == 0) {
    LABEL_111:
      if (a10 == 0) {
        goto LABEL_112;
      }
      wld_c3abd0(&v89_.v89, v71, v72, v73, v74, (__int64)&GameData_1a9f09e, 0,
                 v17, (__int64)a9, a10),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      if ((v89_.v89 & 1) != 0) {
        v56 = v89_.v90;
      }
      else {
        v56 = (unsigned __int64)(unsigned __int8)v89_.v89 >> 1;
      }
      if ((v89_.v89 & 1) != 0) {
        v57 = v89_.v91;
      }
      else {
        v57 = (char*)&v89_.v89 + 1;
      }
      v58 = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
          **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
          *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v57, v56, 2),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      v59 = v89_.v89;
      v60 = v58;
      if ((v58 & 1) != 0) {
        if ((v89_.v89 & 1) != 0) {
          fw_text_String_CopyTerminated(&v82_.v82, (__int64)v89_.v91, v89_.v90),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
          v59 = v89_.v89;
        }
        else {
          v82_.v82 = v89_.v89;
          v82_.v83 = v89_.v90;
          v82_.v84 = v89_.v91;
        }
        v82_.v85 = &GameData_1a9f09e;
        v82_.v86 = 0;
        v82_.v87 = a9;
        v82_.v88 = a10;
      }
      if ((v59 & 1) != 0 && v89_.v91 != nullptr) {
        v61 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v61 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v61,
                                      (__int64)v89_.v91),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
      }
      if ((v60 & 1) == 0) {
      LABEL_112:
        wld_c3abd0(&v89_.v89, v71, v72, v73, v74, (__int64)&GameData_1a9f09e, 0,
                   v17, (__int64)&GameData_1a9f09e, 0),
            v17 = COERCE_AS(__typeof__(v17),
                            PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
        v82_.v86 = 0;
        v82_.v87 = &GameData_1a9f09e;
        v82_.v88 = 0;
        v82_.v82 = v89_.v89;
        v82_.v83 = v89_.v90;
        v82_.v84 = v89_.v91;
        v82_.v85 = &GameData_1a9f09e;
      }
    }
  }
  v62 = game_g_frame_clock_ptr[0];
  if ((v82_.v82 & 1) != 0) {
    v63 = v82_.v83;
  }
  else {
    v63 = (unsigned __int64)(unsigned __int8)v82_.v82 >> 1;
  }
  if ((v82_.v82 & 1) != 0) {
    v64 = v82_.v84;
  }
  else {
    v64 = (char*)&v82_.v82 + 1;
  }
  if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
           **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
           *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v64, v63, 255) &
       1) == 0) {
    v68 = v75;
    *(_QWORD*)(a1 + 184) = 0;
    if ((v82_.v82 & 1) == 0) {
      goto LABEL_135;
    }
    goto LABEL_131;
  }
  v65 = *v62;
  v89_.v89 = 0;
  v89_.v90 = 0;
  if ((v82_.v82 & 1) != 0) {
    v66 = v82_.v84;
  }
  else {
    v66 = (char*)&v82_.v82 + 1;
  }
  if ((v82_.v82 & 1) != 0) {
    v67 = v82_.v83;
  }
  else {
    v67 = (unsigned __int64)(unsigned __int8)v82_.v82 >> 1;
  }
  *(_QWORD*)(a1 +
             184) =
      (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64*, __int64))(
          **(_QWORD**)(v65 + 13432) + 16LL))(*(_QWORD*)(v65 + 13432), v66, v67,
                                             &v89_.v89, 255),
             v17 = COERCE_AS(__typeof__(v17),
                             PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v68 = v75;
  if (v89_.v90 != 0) {
    std___1___shared_weak_count___release_weak(v89_.v90),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if ((v82_.v82 & 1) != 0) {
  LABEL_131:
    if (v82_.v84 != nullptr) {
      v69 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v69 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v69,
                                    (__int64)v82_.v84),
          v17 = COERCE_AS(__typeof__(v17),
                          PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    }
  }
LABEL_135:
  *(_DWORD*)(a1 + 136) = 1;
  if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    std___1___shared_weak_count___release_weak(v36),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    if ((v80_.v80[0] & 1) == 0) {
      goto LABEL_143;
    }
  }
  else if ((v80_.v80[0] & 1) == 0) {
    goto LABEL_143;
  }
  if (v80_.v81 != nullptr) {
    v70 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v70,
                                  (__int64)v80_.v81),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
LABEL_143:
  if (v68 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    std___1___shared_weak_count___release_weak(v68),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
}

__int64 wld_c38f00(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int64 v28;
  unsigned __int64 v29;
  char* v30;
  unsigned __int64 v31;
  _BOOL4 v32;
  _BOOL4 v33;
  __int64 v34;
  unsigned int v35;
  unsigned __int64* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  bool v46;
  __int64 v47;
  __int64 v48;
  _DWORD* v49;
  _DWORD* v50;
  _DWORD* v51;
  _DWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  char v62;
  __int64 v63;
  char* v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  _BOOL4 v67;
  _BOOL4 v68;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  bool v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  char v84;
  __int64 v85;
  char* v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  _BOOL4 v89;
  _BOOL4 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64* v105;
  int v106;
  __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  unsigned __int64 v110;
  __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64* v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  _QWORD* v126;
  __int64 v127;
  int v128;
  _DWORD* v129;
  unsigned __int64 v130;
  _QWORD* v131;
  _DWORD* v132;
  __int64 v133;
  unsigned __int64 v134;
  bool v135;
  unsigned __int64 v136;
  __int64 v137;
  unsigned __int64 v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  _QWORD* v143;
  _QWORD* v144;
  unsigned __int64 v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  _QWORD* v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  float v157;
  float v158;
  _BOOL8 v159;
  unsigned __int64 v160;
  unsigned __int64 v161;
  unsigned __int64 primeEm;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  _QWORD* v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  _QWORD* v176;
  unsigned __int64 v177;
  __int64 v178;
  unsigned __int64 v179;
  _QWORD* v180;
  unsigned __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  _QWORD* v186;
  _QWORD* v187;
  unsigned __int64 v188;
  _DWORD* v189;
  _DWORD* v190;
  __int64 v191;
  __int64 v192;
  _DWORD* v193;
  __int64* v194;
  _DWORD* i;
  __int64 v196;
  __int64 v197;
  _DWORD* v198;
  __int64 v199;
  __int64 v200;
  _DWORD* v201;
  _DWORD* v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  _QWORD* v206;
  _DWORD* v207;
  __int64 v208;
  unsigned __int64 v209;
  __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  _QWORD* v213;
  _QWORD* v214;
  _QWORD* v215;
  _QWORD* v216;
  __int64 v217;
  __int64 v218;
  __int64* v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  char v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  char v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64* v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64* v241;
  __int64 v242;
  _DWORD* v243;
  _DWORD* v244;
  __int64 v245;
  unsigned __int64 v246;
  _DWORD* v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64* v251;
  __int64 v252;
  _QWORD* v253;
  __int64* v254;
  _DWORD* v255;
  __int64 v256;
  __int64 v257;
  int v258;
  __int64 v259;
  __int64 v260;
  struct {
    __int64* v261;
    __int64 v262;
    __int64 v263;
  } v261_;
  struct {
    __int64 v264;
    __int64 v265;
    __int64 v266;
  } v264_;
  struct {
    __int64 v267;
    __int64 v268;
    __int64 v269;
  } v267_;
  unsigned int* v270;
  struct {
    _QWORD v271[7];
    __int16 v272;
    char gap226_[2];
    int v273;
    __int64 v274;
    __int64 v275;
  } v271_;
  unsigned int v276;
  int v277;
  unsigned __int64 v278;
  struct {
    unsigned __int64 v279[3];
    _DWORD* v280;
  } v279_;
  struct {
    unsigned __int64 v281[3];
    unsigned int* v282;
    _DWORD* v283;
  } v281_;
  _DWORD v284[3];

  v2 = *(__int64**)(result + 184);
  if (v2 == nullptr) {
    return result;
  }
  v3 = result;
  v4 = *(_QWORD*)(result + 16);
  if (v4 != 0) {
    v5 = std___1___shared_weak_count_lock(v4);
    v6 = v2[74];
    if (v6 == 0) {
      goto LABEL_479;
    }
  }
  else {
    v5 = 0;
    v6 = v2[74];
    if (v6 == 0) {
      goto LABEL_479;
    }
  }
  v7 = *(_QWORD*)(v3 + 32);
  v252 = v5;
  if (v7 != 0) {
    v250 = std___1___shared_weak_count_lock(v7);
    if (v250 != 0) {
      v8 = *(__int64**)(v3 + 24);
    }
    else {
      v8 = nullptr;
    }
    v6 = v2[74];
  }
  else {
    v250 = 0;
    v8 = nullptr;
  }
  v251 = v2;
  v9 = v2[72];
  v271_.v271[6] = 0;
  v271_.v273 = 0;
  v271_.v271[4] = -1;
  v271_.v271[5] = 0;
  v271_.v272 = 257;
  v271_.v274 = v6;
  v271_.v275 = v9;
  v271_.v271[0] = GameData_212ce30 + 2;
  __builtin_memset(&v271_.v271[1], 0, 24);
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       544, 16, 0);
  *(_QWORD*)v11 = 0;
  *(_BYTE*)(v11 + 12) = 0;
  v270 = (unsigned int*)v11;
  *(_DWORD*)(v11 + 8) = -1;
  *(_QWORD*)(v11 + 16) = v11 + 32;
  *(_QWORD*)(v11 + 24) = v11 + 32;
  GameRoutine_1fa0(v11, 0);
  GameRoutine_1fd0(v11, (__int64)v271_.v271);
  v260 = (__int64)v8;
  v261_.v261 = nullptr;
  v261_.v262 = 0;
  v261_.v263 = 0;
  v264_.v264 = 0;
  v264_.v265 = 0;
  v264_.v266 = 0;
  v267_.v267 = 0;
  v267_.v268 = 0;
  v267_.v269 = 0;
  v277 = 0;
  LOBYTE(v281_.v281[0]) = 14;
  strcpy((char*)v281_.v281 + 1, "version");
  v281_.v282 = (unsigned int*)&v277;
  if (GameRoutine_c05690(&v270, (__int64)v281_.v281)) {
    timeline_21c0(v270, v281_.v282);
  }
  if ((v281_.v281[0] & 1) != 0 && v281_.v281[2] != 0) {
    v12 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v12, v281_.v281[2]);
  }
  if (v277 == 0) {
    v22 = *v8;
    v23 = v8[1];
    __builtin_memset(v281_.v281, 0, sizeof(v281_.v281));
    LOWORD(v279_.v279[0]) = 0;
    v278 = (v23 - v22) >> 4;
    timeline_2020((unsigned __int16*)v270, v279_.v279);
    v24 = SLOWORD(v279_.v279[0]);
    v25 = fw_memory_HeapManager_Allocate(*v10, SLOWORD(v279_.v279[0]), 16, 0);
    memset(v25, 0, v24);
    Value_2500((__int64*)v270, v25, v24);
    GameRoutine_60a060((char*)v281_.v281, v25, SLOWORD(v279_.v279[0]));
    v26 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v26, v25);
    LOBYTE(v279_.v279[0]) = 16;
    v27 = v281_.v281[0];
    strcpy((char*)v279_.v279 + 1, "lightNum");
    v28 = v281_.v281[2];
    if ((v281_.v281[0] & 1) != 0) {
      v29 = v281_.v281[1];
    }
    else {
      v29 = (unsigned __int64)LOBYTE(v281_.v281[0]) >> 1;
    }
    if ((v281_.v281[0] & 1) != 0) {
      v30 = (char*)v281_.v281[2];
    }
    else {
      v30 = (char*)v281_.v281 + 1;
    }
    if (v29 >= 8) {
      v31 = 8;
    }
    else {
      v31 = v29;
    }
    v32 = memcmp((__int64)v279_.v279 + 1, (__int64)v30, v31) == 0;
    v33 = v29 == 8 && v32;
    if ((v27 & 1) != 0 && v28 != 0) {
      v34 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v34, v28);
    }
    if (v33) {
      timeline_2360((unsigned __int64*)v270, &v278);
    }
    if (v278 == 0) {
      goto LABEL_166;
    }
    v35 = 1;
    v257 = GameData_212e9d8[0] + 16;
    while (1) {
      v284[0] = 0;
      std___1_to_string_1a0ab70((void*)(v281_.v281), v35 - 1);
      v37 = (unsigned __int64*)GameRoutine_1a0a680((__int64)v281_.v281, 0,
                                                   "LightType", 9u);
      v38 = *v37;
      v39 = v37[1];
      v40 = v37[2];
      *v37 = 0;
      v37[1] = 0;
      v37[2] = 0;
      if ((v281_.v281[0] & 1) != 0 && v281_.v281[2] != 0) {
        v41 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v41 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v281_.v281[2]);
      }
      std___1_to_string_1a0ab70((void*)(v281_.v281), v35 - 1);
      v42 = (unsigned __int64*)GameRoutine_1a0a680((__int64)v281_.v281, 0,
                                                   "Light", 5u);
      v43 = *v42;
      v44 = v42[1];
      v1 = v42[2];
      *v42 = 0;
      v42[1] = 0;
      v42[2] = 0;
      if ((v281_.v281[0] & 1) != 0 && v281_.v281[2] != 0) {
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v281_.v281[2]);
      }
      if ((v38 & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)v281_.v281, v40, v39);
      }
      else {
        v281_.v281[0] = v38;
        v281_.v281[1] = v39;
        v281_.v281[2] = v40;
      }
      v281_.v282 = v284;
      v46 = GameRoutine_c05690(&v270, (__int64)v281_.v281);
      v47 = fw_memory_g_heap_manager_ptr;
      if (v46) {
        timeline_21c0(v270, v281_.v282);
      }
      if ((v281_.v281[0] & 1) != 0 && v281_.v281[2] != 0) {
        v48 = 128;
        if (*(_QWORD*)(*(_QWORD*)v47 + 200LL) == 0) {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v47 + v48, v281_.v281[2]);
      }
      if ((signed __int32)v284[0] > 2) {
        if (v284[0] == 3) {
          GameRoutine_c52ad0((void*)(v281_.v281), v260);
          v52 = v281_.v283;
          if ((v43 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v279_.v279, v1, v44);
          }
          else {
            v279_.v279[0] = v43;
            v279_.v279[1] = v44;
            v279_.v279[2] = v1;
          }
          v279_.v280 = v52;
          if (GameRoutine_c3ea50((__int64**)&v270, (__int64)v279_.v279)) {
            GameStringReads_c3ec70(v279_.v280, &v270);
          }
        LABEL_111:
          if ((v279_.v279[0] & 1) != 0 && v279_.v279[2] != 0) {
            v55 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v55 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v279_.v279[2]);
          }
          v54 = GameData_212e9d8[0] + 16;
        LABEL_117:
          v56 = v281_.v281[2];
          v281_.v281[0] = v54;
          v281_.v281[1] = 0;
          v281_.v281[2] = 0;
          if (v56 != 0) {
            std___1___shared_weak_count___release_weak(v56);
            v281_.v282 = nullptr;
            if (v281_.v281[2] != 0) {
              std___1___shared_weak_count___release_weak(v281_.v281[2]);
            }
          }
          goto LABEL_120;
        }
        if (v284[0] == 4) {
          GameRoutine_c52f90((void*)(v281_.v281), v260);
          v50 = v281_.v283;
          if ((v43 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v279_.v279, v1, v44);
          }
          else {
            v279_.v279[0] = v43;
            v279_.v279[1] = v44;
            v279_.v279[2] = v1;
          }
          v279_.v280 = v50;
          if (GameRoutine_c3ee60((__int64**)&v270, (__int64)v279_.v279)) {
            GameStringReads_c3f080(v279_.v280, &v270);
          }
          goto LABEL_111;
        }
      }
      else {
        if (v284[0] == 1) {
          GameRoutine_c52150((void*)(v281_.v281), v260);
          v51 = v281_.v283;
          if ((v43 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v279_.v279, v1, v44);
          }
          else {
            v279_.v279[0] = v43;
            v279_.v279[1] = v44;
            v279_.v279[2] = v1;
          }
          v279_.v280 = v51;
          if (GameRoutine_c3b3f0((__int64**)&v270, (__int64)v279_.v279)) {
            wld_c3b610((__int64)v279_.v280, &v270);
          }
          if ((v279_.v279[0] & 1) != 0 && v279_.v279[2] != 0) {
            v53 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v53 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v279_.v279[2]);
          }
          v54 = v257;
          goto LABEL_117;
        }
        if (v284[0] == 2) {
          GameRoutine_c525f0((void*)(v281_.v281), v260);
          v49 = v281_.v283;
          if ((v43 & 1) != 0) {
            fw_text_String_CopyTerminated((__int64*)v279_.v279, v1, v44);
          }
          else {
            v279_.v279[0] = v43;
            v279_.v279[1] = v44;
            v279_.v279[2] = v1;
          }
          v279_.v280 = v49;
          if (GameRoutine_c3e540((__int64**)&v270, (__int64)v279_.v279)) {
            wld_c3e760(v279_.v280, &v270);
          }
          goto LABEL_111;
        }
      }
    LABEL_120:
      v10 = (__int64*)fw_memory_g_heap_manager_ptr;
      if ((v43 & 1) != 0 && v1 != 0) {
        v57 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v57 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v1);
      }
      if ((v38 & 1) != 0 && v40 != 0) {
        v58 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v58 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v58, v40);
      }
      if (v278 <= v35++) {
        goto LABEL_166;
      }
    }
  }
  v276 = 0;
  LOBYTE(v281_.v281[0]) = 16;
  strcpy((char*)v281_.v281 + 1, "lightNum");
  v281_.v282 = &v276;
  if (GameRoutine_c05690(&v270, (__int64)v281_.v281)) {
    timeline_21c0(v270, v281_.v282);
  }
  if ((v281_.v281[0] & 1) != 0 && v281_.v281[2] != 0) {
    v13 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v13, v281_.v281[2]);
  }
  v14 = v276;
  if (v276 != 0) {
    if ((v276 & 0x80000000) != 0) {
      goto LABEL_516;
    }
    v15 = 8LL * v276;
    v16 = fw_memory_HeapManager_Allocate(*v10, v15, 16, 0);
    v17 = v15 - 8;
    v18 = v16 + 8 * v14;
    v19 = v16;
    v20 = (__int64*)v16;
    if ((~((_BYTE)v15 - 8) & 0x38) != 0) {
      v21 = ((unsigned __int8)((unsigned int)v17 >> 3) + 1) & 7;
      v20 = (__int64*)v16;
      do {
        *v20++ = v260;
        --v21;
      } while (v21 != 0);
    }
    if (v17 >= 0x38) {
      do {
        *v20 = v260;
        v20[1] = v260;
        v20[2] = v260;
        v20[3] = v260;
        v20[4] = v260;
        v20[5] = v260;
        v20[6] = v260;
        v20[7] = v260;
        v20 += 8;
      } while (v20 != (__int64*)v18);
    }
  }
  else {
    v18 = 0;
    v19 = 0;
  }
  __builtin_memset(v281_.v281, 0, sizeof(v281_.v281));
  LOWORD(v279_.v279[0]) = 0;
  timeline_2020((unsigned __int16*)v270, v279_.v279);
  v59 = SLOWORD(v279_.v279[0]);
  v60 = fw_memory_HeapManager_Allocate(*v10, SLOWORD(v279_.v279[0]), 16, 0);
  memset(v60, 0, v59);
  Value_2500((__int64*)v270, v60, v59);
  GameRoutine_60a060((char*)v281_.v281, v60, SLOWORD(v279_.v279[0]));
  v61 = 128;
  if (*(_QWORD*)(*v10 + 200) == 0) {
    v61 = 56;
  }
  nn_mem_StandardAllocator_Free(*v10 + v61, v60);
  v62 = v281_.v281[0];
  v279_.v279[0] = 0x73746867696C0CLL;
  v63 = v281_.v281[2];
  if ((v281_.v281[0] & 1) != 0) {
    v64 = (char*)v281_.v281[2];
  }
  else {
    v64 = (char*)v281_.v281 + 1;
  }
  if ((v281_.v281[0] & 1) != 0) {
    v65 = v281_.v281[1];
  }
  else {
    v65 = (unsigned __int64)LOBYTE(v281_.v281[0]) >> 1;
  }
  if (v65 >= 6) {
    v66 = 6;
  }
  else {
    v66 = v65;
  }
  v67 = memcmp((__int64)v279_.v279 + 1, (__int64)v64, v66) == 0;
  v68 = v65 == 6 && v67;
  if ((v62 & 1) != 0 && v63 != 0) {
    v69 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v69, v63);
  }
  if (!v68) {
    v79 = v19;
    if (v19 == 0) {
      goto LABEL_166;
    }
    goto LABEL_163;
  }
  v278 = 0;
  timeline_2360((unsigned __int64*)v270, &v278);
  v70 = v278;
  v71 = v18 - v19;
  v72 = (v18 - v19) >> 3;
  v73 = v278 >= v72;
  v74 = v278 - v72;
  if (v278 <= v72) {
    v77 = v19;
    if (!v73) {
      v18 = v19 + 8 * v278;
    }
    goto LABEL_485;
  }
  if (v278 >> 61 != 0) {
  LABEL_516:
    GameRoutine_c3f3f0();
  }
  if (v71 >> 2 > v278) {
    v70 = v71 >> 2;
  }
  if (v71 >= 0x7FFFFFFFFFFFFFF8LL) {
    v70 = 0x1FFFFFFFFFFFFFFFLL;
  }
  if (v70 >> 61 != 0) {
    goto LABEL_515;
  }
  v75 = fw_memory_HeapManager_Allocate(*v10, 8 * v70, 16, 0);
  v76 = v18 - v19;
  v77 = v75 + v71 - 8 * v72;
  v18 = v75 + v71 + 8 * v74;
  memcpy(v77, v19, v76);
  if (v19 != 0) {
    v78 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v78, v19);
  }
LABEL_485:
  if (v18 != v77) {
    v239 = (v18 - v77) >> 3;
    v240 = GameData_212e9d8[0];
    v241 = (__int64*)v77;
    v1 = 8;
    v259 = GameData_212e9d8[0] + 16;
    do {
      v284[0] = 0;
      LOBYTE(v281_.v281[0]) = 8;
      v281_.v282 = v284;
      strcpy((char*)v281_.v281 + 1, "type");
      if (GameRoutine_c05690(&v270, (__int64)v281_.v281)) {
        timeline_21c0(v270, v281_.v282);
      }
      if ((v281_.v281[0] & 1) != 0 && v281_.v281[2] != 0) {
        v242 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v242 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v242, v281_.v281[2]);
      }
      if ((signed __int32)v284[0] > 2) {
        if (v284[0] == 3) {
          GameRoutine_c52ad0((void*)(v281_.v281), *v241);
          v247 = v281_.v283;
          v279_.v279[0] = 0x6174614408LL;
          v279_.v280 = v281_.v283;
          if (GameRoutine_c3ea50((__int64**)&v270, (__int64)v279_.v279)) {
            GameStringReads_c3ec70(v247, &v270);
          }
        LABEL_509:
          v246 = v240 + 16;
        LABEL_510:
          v248 = v281_.v281[2];
          v281_.v281[0] = v246;
          v281_.v281[1] = 0;
          v281_.v281[2] = 0;
          if (v248 != 0) {
            std___1___shared_weak_count___release_weak(v248);
            v281_.v282 = nullptr;
            if (v281_.v281[2] != 0) {
              std___1___shared_weak_count___release_weak(v281_.v281[2]);
            }
          }
          goto LABEL_487;
        }
        if (v284[0] == 4) {
          GameRoutine_c52f90((void*)(v281_.v281), *v241);
          v244 = v281_.v283;
          v279_.v279[0] = 0x6174614408LL;
          v279_.v280 = v281_.v283;
          if (GameRoutine_c3ee60((__int64**)&v270, (__int64)v279_.v279)) {
            GameStringReads_c3f080(v244, &v270);
          }
          goto LABEL_509;
        }
      }
      else {
        if (v284[0] == 1) {
          GameRoutine_c52150((void*)(v281_.v281), *v241);
          v245 = (__int64)v281_.v283;
          v279_.v279[0] = 0x6174614408LL;
          v279_.v280 = v281_.v283;
          if (GameRoutine_c3b3f0((__int64**)&v270, (__int64)v279_.v279)) {
            wld_c3b610(v245, &v270);
          }
          v246 = v259;
          goto LABEL_510;
        }
        if (v284[0] == 2) {
          GameRoutine_c525f0((void*)(v281_.v281), *v241);
          v243 = v281_.v283;
          v279_.v279[0] = 0x6174614408LL;
          v279_.v280 = v281_.v283;
          if (GameRoutine_c3e540((__int64**)&v270, (__int64)v279_.v279)) {
            wld_c3e760(v243, &v270);
          }
          goto LABEL_509;
        }
      }
    LABEL_487:
      --v239;
      ++v241;
    } while (v239 != 0);
  }
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v79 = v77;
  if (v77 != 0) {
  LABEL_163:
    v80 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v80 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v80, v79);
  }
LABEL_166:
  strcpy((char*)v281_.v281, "&m_LightBindLctNames");
  BYTE5(v281_.v281[2]) = 0;
  HIWORD(v281_.v281[2]) = 0;
  v281_.v282 = (unsigned int*)&v261_.v261;
  GfxLoader_c3f420((__int64**)&v270, v281_.v281);
  __builtin_memset(v281_.v281, 0, sizeof(v281_.v281));
  LOWORD(v279_.v279[0]) = 0;
  timeline_2020((unsigned __int16*)v270, v279_.v279);
  v81 = SLOWORD(v279_.v279[0]);
  v82 = fw_memory_HeapManager_Allocate(*v10, SLOWORD(v279_.v279[0]), 16, 0);
  memset(v82, 0, v81);
  Value_2500((__int64*)v270, v82, v81);
  GameRoutine_60a060((char*)v281_.v281, v82, SLOWORD(v279_.v279[0]));
  v83 = 128;
  if (*(_QWORD*)(*v10 + 200) == 0) {
    v83 = 56;
  }
  nn_mem_StandardAllocator_Free(*v10 + v83, v82);
  v84 = v281_.v281[0];
  strcpy((char*)v279_.v279, "&m_LightBindLctFlags");
  BYTE5(v279_.v279[2]) = 0;
  HIWORD(v279_.v279[2]) = 0;
  v85 = v281_.v281[2];
  if ((v281_.v281[0] & 1) != 0) {
    v86 = (char*)v281_.v281[2];
  }
  else {
    v86 = (char*)v281_.v281 + 1;
  }
  if ((v281_.v281[0] & 1) != 0) {
    v87 = v281_.v281[1];
  }
  else {
    v87 = (unsigned __int64)LOBYTE(v281_.v281[0]) >> 1;
  }
  if (v87 >= 0x13) {
    v88 = 19;
  }
  else {
    v88 = v87;
  }
  v89 = memcmp((__int64)v279_.v279 + 1, (__int64)v86, v88) == 0;
  v90 = v87 == 19 && v89;
  if ((v84 & 1) != 0 && v85 != 0) {
    v91 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v91 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v91, v85);
  }
  if (v90) {
    v279_.v279[0] = 0;
    timeline_2360((unsigned __int64*)v270, v279_.v279);
    v93 = v264_.v264;
    v92 = v264_.v265;
    v94 = (v264_.v265 - v264_.v264) >> 2;
    if (v279_.v279[0] <= v94) {
      if (v279_.v279[0] < v94) {
        v92 = v264_.v264 + 4 * v279_.v279[0];
        v264_.v265 = v92;
      }
    }
    else {
      GameRoutine_c3f7a0(&v264_.v264, v279_.v279[0] - v94);
      v93 = v264_.v264;
      v92 = v264_.v265;
    }
    v95 = v92 - v93;
    if (v95 != 0) {
      v96 = v95 >> 2;
      v97 = 0;
      do {
        LOWORD(v281_.v281[0]) = 0;
        v281_.v282 = (unsigned int*)(v264_.v264 + v97);
        if (GameRoutine_c05690(&v270, (__int64)v281_.v281)) {
          timeline_21c0(v270, v281_.v282);
        }
        if ((v281_.v281[0] & 1) != 0 && v281_.v281[2] != 0) {
          if (*(_QWORD*)(*v10 + 200) != 0) {
            v98 = 128;
          }
          else {
            v98 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v98, v281_.v281[2]);
        }
        --v96;
        v97 += 4;
      } while (v96 != 0);
    }
  }
  v281_.v281[0] = 0x746867694C5F6D16LL;
  v281_.v281[1] = 1936154964;
  v281_.v282 = (unsigned int*)&v267_.v267;
  GfxLoader_c3f420((__int64**)&v270, v281_.v281);
  if (*(_QWORD*)(v3 + 168) != 0) {
    GameHr_c3b1a0(v3 + 144, *(_QWORD**)(v3 + 160));
    v99 = *(_QWORD*)(v3 + 152);
    *(_QWORD*)(v3 + 160) = 0;
    if (v99 != 0) {
      v100 = v99 & 7;
      if (v99 >= 8) {
        v102 = v99 & 0xFFFFFFFFFFFFFFF8LL;
        v101 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v101) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v101 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v101 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v101 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v101 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v101 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v101 + 48) = 0;
          v103 = *(_QWORD*)(v3 + 144) + 8 * v101;
          v101 += 8;
          *(_QWORD*)(v103 + 56) = 0;
        } while (v102 != v101);
      }
      else {
        v101 = 0;
      }
      if (v100 != 0) {
        v104 = 8 * v101;
        do {
          --v100;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + v104) = 0;
          v104 += 8;
        } while (v100 != 0);
      }
    }
    *(_QWORD*)(v3 + 168) = 0;
  }
  v105 = v261_.v261;
  v254 = (__int64*)v261_.v262;
  if (v261_.v261 == (__int64*)v261_.v262) {
    goto LABEL_440;
  }
  v106 = 0;
  LODWORD(v281_.v281[0]) = 0;
  v253 = (_QWORD*)(v3 + 160);
  while (2) {
    v108 = *(unsigned __int8*)v105;
    if ((v108 & 1) != 0) {
      v109 = v105[1];
    }
    else {
      v109 = v108 >> 1;
    }
    if (v109 == 0) {
      goto LABEL_218;
    }
    if (v264_.v264 == v264_.v265) {
      v258 = 0;
    }
    else {
      v258 = *(_DWORD*)(v264_.v264 + 4LL * v106);
    }
    v110 = *(_QWORD*)(v3 + 152);
    if (v110 == 0 || *(_QWORD*)(v3 + 168) == 0) {
      goto LABEL_270;
    }
    v112 = (v108 & 1) != 0 ? v105[2] : (__int64)v105 + 1;
    v113 = std___1___hash_memory(v112, v109);
    v114 = v110 - 1;
    v115 = v113;
    if ((v110 & (v110 - 1)) != 0) {
      v116 = v113;
      if (v113 >= v110) {
        v116 = v113 % v110;
      }
    }
    else {
      v116 = v113 & v114;
    }
    v117 = *(__int64**)(*(_QWORD*)(v3 + 144) + 8 * v116);
    if (v117 == nullptr || (v1 = *v117, *v117 == 0)) {
    LABEL_270:
      v132 = (_DWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0);
      *v132 = v106;
      v133 = (__int64)(v132 + 1);
      v255 = v132;
      v134 = *(unsigned __int8*)v105;
      v135 = (v134 & 1) == 0;
      v136 = v134 >> 1;
      if (v135) {
        v137 = (__int64)v105 + 1;
      }
      else {
        v137 = v105[2];
      }
      if (v135) {
        v138 = v136;
      }
      else {
        v138 = v105[1];
      }
      v139 = std___1___hash_memory(v137, v138);
      v140 = *(_QWORD*)(v3 + 152);
      v141 = v139;
      if (v140 != 0) {
        v142 = v140 - 1;
        if ((v140 & (v140 - 1)) != 0) {
          v1 = v139;
          if (v139 >= v140) {
            v1 = v139 % v140;
          }
        }
        else {
          v1 = v142 & v139;
        }
        v143 = *(_QWORD**)(*(_QWORD*)(v3 + 144) + 8 * v1);
        if (v143 != nullptr) {
          v144 = (_QWORD*)*v143;
          if (*v143 != 0) {
            if ((v140 & v142) == 0) {
              while (1) {
                v149 = v144[1];
                if (v149 == v141) {
                  v150 = *((unsigned __int8*)v144 + 16);
                  v151 = v144[3];
                  if ((v150 & 1) == 0) {
                    v151 = v150 >> 1;
                  }
                  if (v151 == v138) {
                    v152 = (v150 & 1) != 0 ? v144[4] : (__int64)v144 + 17;
                    if (memcmp(v152, v137, v138) == 0) {
                      goto LABEL_308;
                    }
                  }
                }
                else if ((v149 & v142) != v1) {
                  goto LABEL_309;
                }
                v144 = (_QWORD*)*v144;
                if (v144 == nullptr) {
                  goto LABEL_309;
                }
              }
            }
            do {
              v145 = v144[1];
              if (v145 == v141) {
                v146 = *((unsigned __int8*)v144 + 16);
                v147 = v144[3];
                if ((v146 & 1) == 0) {
                  v147 = v146 >> 1;
                }
                if (v147 == v138) {
                  v148 = (v146 & 1) != 0 ? v144[4] : (__int64)v144 + 17;
                  if (memcmp(v148, v137, v138) == 0) {
                  LABEL_308:
                    v10 = (__int64*)fw_memory_g_heap_manager_ptr;
                    goto LABEL_388;
                  }
                }
              }
              else {
                if (v145 >= v140) {
                  v145 %= v140;
                }
                if (v145 != v1) {
                  break;
                }
              }
              v144 = (_QWORD*)*v144;
            } while (v144 != nullptr);
          }
        }
      }
    LABEL_309:
      v10 = (__int64*)fw_memory_g_heap_manager_ptr;
      v153 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
      *v153 = 0;
      v153[1] = v141;
      v144 = v153;
      if ((*(_BYTE*)v105 & 1) != 0) {
        fw_text_String_CopyTerminated(v153 + 2, v105[2], v105[1]);
      }
      else {
        v154 = *v105;
        v155 = v105[2];
        v153[3] = v105[1];
        v153[4] = v155;
        v153[2] = v154;
      }
      v156 = *(_QWORD*)(v3 + 168);
      v157 = *(float*)(v3 + 176);
      v144[6] = 0;
      v144[7] = 0;
      v144[5] = 0;
      v158 = (float)(unsigned __int64)(v156 + 1);
      if (v140 != 0 && (float)(v157 * (float)v140) >= v158) {
      LABEL_379:
        v185 = *(_QWORD*)(v3 + 144);
        v186 = *(_QWORD**)(v185 + 8 * v1);
        if (v186 != nullptr) {
          *v144 = *v186;
          *v186 = v144;
        }
        else {
          v187 = (_QWORD*)*v253;
          *v253 = v144;
          *v144 = v187;
          *(_QWORD*)(v185 + 8 * v1) = v253;
          if (*v144 != 0) {
            v188 = *(_QWORD*)(*v144 + 8LL);
            if ((v140 & (v140 - 1)) != 0) {
              if (v188 >= v140) {
                v188 %= v140;
              }
            }
            else {
              v188 &= v140 - 1;
            }
            *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v188) = v144;
          }
        }
        ++*(_QWORD*)(v3 + 168);
      LABEL_388:
        v189 = (_DWORD*)v144[5];
        v190 = (_DWORD*)v144[7];
        if (v190 != v189) {
          v191 = v144[6];
          v192 = v191 - (_QWORD)v189;
          if ((_DWORD*)v191 == v189) {
            *(_QWORD*)(v191 + 8) = 0;
            *(_QWORD*)(v191 + 16) = 0;
            *(_QWORD*)(v191 + 24) = 0;
            *(_DWORD*)v191 = v258;
            v201 = (_DWORD*)fw_memory_HeapManager_Allocate(*v10, 4, 16, 0);
            v1 = (__int64)v255;
            *(_QWORD*)(v191 + 8) = v201;
            *(_QWORD*)(v191 + 16) = v201;
            *(_QWORD*)(v191 + 24) = v201 + 1;
            *v201 = *v255;
            *(_QWORD*)(v191 + 16) = v201 + 1;
            v144[6] = v192 + v191 + 32;
          }
          else {
            v193 = v189 + 8;
            *v189 = v258;
            v194 = (__int64*)(v189 + 2);
            v1 = (__int64)v255;
            GameRoutine_c3b000(v194, (__int64)v255, v133, 1u);
            for (i = (_DWORD*)v144[6]; i != v193; i -= 8) {
              v196 = *((_QWORD*)i - 3);
              if (v196 != 0) {
                *((_QWORD*)i - 2) = v196;
                if (*(_QWORD*)(*v10 + 200) != 0) {
                  v197 = 128;
                }
                else {
                  v197 = 56;
                }
                nn_mem_StandardAllocator_Free(*v10 + v197, v196);
              }
            }
            v144[6] = v193;
          }
          goto LABEL_214;
        }
        if (v190 == nullptr) {
        LABEL_414:
          v204 = fw_memory_HeapManager_Allocate(*v10, 32, 16, 0);
          v205 = v204 + 32;
          v206 = (_QWORD*)v204;
          v144[5] = v204;
          v144[6] = v204;
          v144[7] = v204 + 32;
          *(_QWORD*)(v204 + 24) = 0;
          *(_QWORD*)(v204 + 8) = 0;
          *(_QWORD*)(v204 + 16) = 0;
          *(_DWORD*)v204 = v258;
          v207 = (_DWORD*)fw_memory_HeapManager_Allocate(*v10, 4, 16, 0);
          v1 = (__int64)v255;
          v206[1] = v207;
          *v207++ = *v255;
          v206[2] = v207;
          v206[3] = v207;
          v144[6] = v205;
        LABEL_214:
          if (*(_QWORD*)(*v10 + 200) != 0) {
            v107 = 128;
          }
          else {
            v107 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v107, v1);
          goto LABEL_218;
        }
        v198 = (_DWORD*)v144[6];
        if (v190 == v198) {
          v144[6] = v189;
        }
        else {
          do {
            v199 = *((_QWORD*)v198 - 3);
            if (v199 != 0) {
              *((_QWORD*)v198 - 2) = v199;
              if (*(_QWORD*)(*v10 + 200) != 0) {
                v200 = 128;
              }
              else {
                v200 = 56;
              }
              nn_mem_StandardAllocator_Free(*v10 + v200, v199);
            }
            v198 -= 8;
          } while (v198 != v190);
          v202 = (_DWORD*)v144[5];
          v144[6] = v189;
          v189 = v202;
          if (v202 == nullptr) {
            goto LABEL_413;
          }
        }
        if (*(_QWORD*)(*v10 + 200) != 0) {
          v203 = 128;
        }
        else {
          v203 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v203, (__int64)v189);
      LABEL_413:
        v144[6] = 0;
        v144[7] = 0;
        v144[5] = 0;
        goto LABEL_414;
      }
      v159 = v140 < 3 || (v140 & (v140 - 1)) != 0;
      v160 = v159 | (2 * v140);
      v161 = vcvtps_u64_f32(v158 / v157);
      if (v160 <= v161) {
        primeEm = v161;
      }
      else {
        primeEm = v160;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        primeEm = std___1___next_prime(primeEm);
      }
      v163 = *(_QWORD*)(v3 + 152);
      if (primeEm <= v163) {
        if (primeEm >= v163) {
          goto LABEL_374;
        }
        v168 = vcvtps_u64_f32((float)*(unsigned __int64*)(v3 + 168) /
                              *(float*)(v3 + 176));
        if (v163 < 3 || (v163 & (v163 - 1)) != 0) {
          v168 = std___1___next_prime(v168);
        }
        else {
          v169 = 1LL << -(char)__clz(v168 - 1);
          if (v168 >= 2) {
            v168 = v169;
          }
        }
        if (primeEm <= v168) {
          primeEm = v168;
        }
        if (primeEm >= v163) {
          goto LABEL_374;
        }
        if (primeEm == 0) {
          v183 = *(_QWORD*)(v3 + 144);
          *(_QWORD*)(v3 + 144) = 0;
          if (v183 != 0) {
            v184 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v184 = 56;
            }
            nn_mem_StandardAllocator_Free(*v10 + v184, v183);
          }
          *(_QWORD*)(v3 + 152) = 0;
          goto LABEL_374;
        }
      }
      if (primeEm >> 61 != 0) {
        goto LABEL_515;
      }
      v164 = fw_memory_HeapManager_Allocate(*v10, 8 * primeEm, 16, 0);
      v165 = *(_QWORD*)(v3 + 144);
      *(_QWORD*)(v3 + 144) = v164;
      if (v165 != 0) {
        v166 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v166 = 56;
        }
        nn_mem_StandardAllocator_Free(*v10 + v166, v165);
      }
      *(_QWORD*)(v3 + 152) = primeEm;
      if (primeEm >= 8) {
        v167 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v167) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v167 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v167 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v167 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v167 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v167 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v167 + 48) = 0;
          v170 = *(_QWORD*)(v3 + 144) + 8 * v167;
          v167 += 8;
          *(_QWORD*)(v170 + 56) = 0;
        } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v167);
      }
      else {
        v167 = 0;
      }
      v171 = primeEm & 7;
      if ((primeEm & 7) != 0) {
        v172 = 8 * v167;
        do {
          --v171;
          *(_QWORD*)(*(_QWORD*)(v3 + 144) + v172) = 0;
          v172 += 8;
        } while (v171 != 0);
      }
      v173 = (_QWORD*)*v253;
      if (*v253 == 0) {
        goto LABEL_374;
      }
      v174 = v173[1];
      v175 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) == 0) {
        v179 = v174 & v175;
        *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v179) = v253;
        while (1) {
          v180 = (_QWORD*)*v173;
          if (*v173 == 0) {
            break;
          }
          v181 = v180[1] & v175;
          if (v181 == v179) {
            v173 = (_QWORD*)*v173;
          }
          else {
            v182 = *(_QWORD*)(v3 + 144);
            if (*(_QWORD*)(v182 + 8 * v181) != 0) {
              *v173 = *v180;
              *v180 = **(_QWORD**)(*(_QWORD*)(v3 + 144) + 8 * v181);
              **(_QWORD**)(*(_QWORD*)(v3 + 144) + 8 * v181) = v180;
            }
            else {
              *(_QWORD*)(v182 + 8 * v181) = v173;
              v173 = v180;
              v179 = v181;
            }
          }
        }
      LABEL_374:
        v140 = *(_QWORD*)(v3 + 152);
        if ((v140 & (v140 - 1)) != 0) {
          if (v141 >= v140) {
            v1 = v141 % v140;
          }
          else {
            v1 = v141;
          }
        }
        else {
          v1 = (v140 - 1) & v141;
        }
        goto LABEL_379;
      }
      if (v174 >= primeEm) {
        v174 %= primeEm;
      }
      *(_QWORD*)(*(_QWORD*)(v3 + 144) + 8 * v174) = v253;
      v176 = (_QWORD*)*v173;
      if (*v173 == 0) {
        goto LABEL_374;
      }
      while (1) {
        v177 = v176[1];
        if (v177 >= primeEm) {
          v177 %= primeEm;
        }
        if (v177 != v174) {
          v178 = *(_QWORD*)(v3 + 144);
          if (*(_QWORD*)(v178 + 8 * v177) == 0) {
            *(_QWORD*)(v178 + 8 * v177) = v173;
            goto LABEL_351;
          }
          *v173 = *v176;
          *v176 = **(_QWORD**)(*(_QWORD*)(v3 + 144) + 8 * v177);
          **(_QWORD**)(*(_QWORD*)(v3 + 144) + 8 * v177) = v176;
          v176 = v173;
        }
        v177 = v174;
      LABEL_351:
        v173 = v176;
        v176 = (_QWORD*)*v176;
        v174 = v177;
        if (v176 == nullptr) {
          goto LABEL_374;
        }
      }
    }
    if ((v110 & v114) == 0) {
      while (1) {
        v122 = *(_QWORD*)(v1 + 8);
        if (v122 == v115) {
          v123 = *(unsigned __int8*)(v1 + 16);
          v124 = *(_QWORD*)(v1 + 24);
          if ((v123 & 1) == 0) {
            v124 = v123 >> 1;
          }
          if (v124 == v109) {
            v125 = (v123 & 1) != 0 ? *(_QWORD*)(v1 + 32) : v1 + 17;
            if (memcmp(v125, v112, v109) == 0) {
              goto LABEL_264;
            }
          }
        }
        else if ((v122 & v114) != v116) {
          goto LABEL_270;
        }
        v1 = *(_QWORD*)v1;
        if (v1 == 0) {
          goto LABEL_270;
        }
      }
    }
    while (1) {
      v118 = *(_QWORD*)(v1 + 8);
      if (v118 == v115) {
        break;
      }
      if (v118 >= v110) {
        v118 %= v110;
      }
      if (v118 != v116) {
        goto LABEL_270;
      }
    LABEL_242:
      v1 = *(_QWORD*)v1;
      if (v1 == 0) {
        goto LABEL_270;
      }
    }
    v119 = *(unsigned __int8*)(v1 + 16);
    v120 = *(_QWORD*)(v1 + 24);
    if ((v119 & 1) == 0) {
      v120 = v119 >> 1;
    }
    if (v120 != v109) {
      goto LABEL_242;
    }
    v121 = (v119 & 1) != 0 ? *(_QWORD*)(v1 + 32) : v1 + 17;
    if (memcmp(v121, v112, v109) != 0) {
      goto LABEL_242;
    }
  LABEL_264:
    v127 = *(_QWORD*)(v1 + 40);
    v126 = *(_QWORD**)(v1 + 48);
    v10 = (__int64*)fw_memory_g_heap_manager_ptr;
    v128 = v258;
    if ((_QWORD*)v127 == v126) {
    LABEL_268:
      v130 = *(_QWORD*)(v1 + 56);
      if ((unsigned __int64)v126 < v130) {
        v126[2] = 0;
        v126[3] = 0;
        v131 = v126 + 4;
        *v126 = 0;
        v126[1] = 0;
      LABEL_438:
        v219 = v131 - 3;
        *(_QWORD*)(v1 + 48) = v131;
        *((_DWORD*)v131 - 8) = v128;
        goto LABEL_439;
      }
      v208 = ((__int64)v126 - v127) >> 5;
      v209 = v208 + 1;
      if ((unsigned __int64)(v208 + 1) >> 59 != 0) {
        GameRoutine_c3b170();
      }
      v210 = v130 - v127;
      if (v210 >> 4 > v209) {
        v209 = v210 >> 4;
      }
      v73 = (unsigned __int64)v210 >= 0x7FFFFFFFFFFFFFE0LL;
      v211 = 0x7FFFFFFFFFFFFFFLL;
      if (!v73) {
        v211 = v209;
      }
      if (v211 >> 59 == 0) {
        v256 = 32 * v211;
        v212 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32 * v211, 16, 0);
        v213 = (_QWORD*)((char*)v126 + v212 - v127);
        v214 = &v213[-4 * v208];
        *v213 = 0;
        v213[1] = 0;
        v213[2] = 0;
        v213[3] = 0;
        if ((_QWORD*)v127 != v126) {
          v249 = v212;
          v215 = (_QWORD*)v127;
          v216 = v214;
          do {
            *(_DWORD*)v216 = *(_DWORD*)v215;
            v216[1] = v215[1];
            v216[2] = v215[2];
            v216[3] = v215[3];
            v215[2] = 0;
            v215[3] = 0;
            v215[1] = 0;
            v215 += 4;
            v216 += 4;
          } while (v215 != v126);
          do {
            v217 = *(_QWORD*)(v127 + 8);
            if (v217 != 0) {
              *(_QWORD*)(v127 + 16) = v217;
              if (*(_QWORD*)(*v10 + 200) != 0) {
                v218 = 128;
              }
              else {
                v218 = 56;
              }
              nn_mem_StandardAllocator_Free(*v10 + v218, v217);
            }
            v127 += 32;
          } while ((_QWORD*)v127 != v126);
          v127 = *(_QWORD*)(v1 + 40);
          v212 = v249;
        }
        v131 = v213 + 4;
        *(_QWORD*)(v1 + 40) = v214;
        *(_QWORD*)(v1 + 48) = v131;
        *(_QWORD*)(v1 + 56) = v212 + v256;
        if (v127 != 0) {
          v220 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v220 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v220, v127);
        }
        v128 = v258;
        goto LABEL_438;
      }
    LABEL_515:
      GameRoutine_60a210();
    }
    v129 = *(_DWORD**)(v1 + 40);
    while (*v129 != v258) {
      v129 += 8;
      if (v129 == (_DWORD*)v126) {
        goto LABEL_268;
      }
    }
    v219 = (__int64*)(v129 + 2);
  LABEL_439:
    GameRoutine_7d6200(v219, v281_.v281);
  LABEL_218:
    v105 += 3;
    v106 = ++LODWORD(v281_.v281[0]);
    if (v105 != v254) {
      continue;
    }
    break;
  }
LABEL_440:
  v221 = v267_.v267;
  *(_BYTE*)(v3 + 192) = 1;
  if (v221 != 0) {
    v222 = v267_.v268;
    if (v221 == v267_.v268) {
      goto LABEL_451;
    }
    v223 = v267_.v268;
    do {
      v224 = *(_BYTE*)(v223 - 24);
      v223 -= 24;
      if ((v224 & 1) != 0) {
        v225 = *(_QWORD*)(v222 - 8);
        if (v225 != 0) {
          if (*(_QWORD*)(*v10 + 200) != 0) {
            v226 = 128;
          }
          else {
            v226 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v226, v225);
        }
      }
      v222 = v223;
    } while (v223 != v221);
    v267_.v268 = v221;
    v221 = v267_.v267;
    if (v267_.v267 != 0) {
    LABEL_451:
      v227 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v227 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v227, v221);
    }
  }
  if (v264_.v264 != 0) {
    v228 = *v10;
    v264_.v265 = v264_.v264;
    v229 = 128;
    if (*(_QWORD*)(v228 + 200) == 0) {
      v229 = 56;
    }
    nn_mem_StandardAllocator_Free(v228 + v229, v264_.v264);
  }
  v230 = (__int64)v261_.v261;
  if (v261_.v261 != nullptr) {
    v231 = v261_.v262;
    if (v261_.v261 == (__int64*)v261_.v262) {
      goto LABEL_469;
    }
    v232 = v261_.v262;
    do {
      v233 = *(_BYTE*)(v232 - 24);
      v232 -= 24;
      if ((v233 & 1) != 0) {
        v234 = *(_QWORD*)(v231 - 8);
        if (v234 != 0) {
          if (*(_QWORD*)(*v10 + 200) != 0) {
            v235 = 128;
          }
          else {
            v235 = 56;
          }
          nn_mem_StandardAllocator_Free(*v10 + v235, v234);
        }
      }
      v231 = v232;
    } while (v232 != v230);
    v261_.v262 = v230;
    v230 = (__int64)v261_.v261;
    if (v261_.v261 != nullptr) {
    LABEL_469:
      v236 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v236 = 56;
      }
      nn_mem_StandardAllocator_Free(*v10 + v236, v230);
    }
  }
  *(_QWORD*)v270 = 0;
  v237 = (__int64*)v270;
  v270 = nullptr;
  if (v237 != nullptr) {
    v238 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v238 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v238, (__int64)v237);
  }
  (*(void (**)(_QWORD*))(v271_.v271[0] + 24LL))(v271_.v271);
  v2 = v251;
  v5 = v252;
  if (v250 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v250 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v250 + 16LL))(v250);
    std___1___shared_weak_count___release_weak(v250);
  }
LABEL_479:
  result = GameRoutine_634d80(v2[1], (__int64)v2);
  *(_QWORD*)(v3 + 184) = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

void wld_c3b780(__int64 a1, __int64** a2)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  _BYTE* v19;
  __int64 v20;
  unsigned int* v21;
  __int64 v22;
  __int64 v23;
  unsigned int* v24;
  __int64 v25;
  __int64* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  __int64 v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  _BOOL4 v35;
  _BOOL4 v36;
  __int64 v37;
  unsigned int* v38;
  __int64 v39;
  unsigned int* v40;
  __int64 v41;
  unsigned int* v42;
  __int64 v43;
  unsigned int* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  char v54;
  __int64 v55;
  unsigned __int64 v56;
  char* v57;
  unsigned __int64 v58;
  _BOOL4 v59;
  _BOOL4 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64* v80;
  __int64 v81;
  __int64* v82;
  __int64 v83;
  __int64* v84;
  __int64 v85;
  __int64* v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  char v90;
  __int64 v91;
  unsigned __int64 v92;
  char* v93;
  unsigned __int64 v94;
  _BOOL4 v95;
  _BOOL4 v96;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  _QWORD* v100;
  __int64 v101;
  char* v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  char* v109;
  __int64 v110;
  char* v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64 v115;
  char* v116;
  __int64* v117;
  char* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  __int64 v129;
  __int64 v130;
  unsigned __int64 v131;
  __int64 v132;
  __int64 v133;
  char v134;
  __int64 v135;
  unsigned __int64 v136;
  char* v137;
  unsigned __int64 v138;
  _BOOL4 v139;
  _BOOL4 v140;
  __int64 v141;
  __int64* v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  unsigned __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64* v166;
  __int64 v167;
  __int64 v168;
  unsigned int* v169;
  __int64 v170;
  unsigned int* v171;
  __int64 v172;
  __int64 v173;
  int v174;
  int v175;
  int v176;
  struct {
    _QWORD v177[2];
    char* v178;
  } v177_;
  unsigned __int64 v179[3];
  struct {
    unsigned __int64 v180[2];
    char* v181;
    unsigned int* v182;
  } v180_;
  unsigned int v183;

  v4 = strlen((const char*)(a1 + 184));
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v5 = v4;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v4 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0);
    v177_.v177[1] = v5;
    v177_.v178 = v7;
    v177_.v177[0] = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v177_.v177[0]) = 2 * v4;
  v7 = (char*)v177_.v177 + 1;
  if (v4 != 0) {
  LABEL_9:
    memcpy((__int64)v7, a1 + 184, v5);
  }
  v7[v5] = 0;
  LOBYTE(v180_.v180[0]) = 8;
  v180_.v182 = (unsigned int*)v177_.v177;
  strcpy((char*)v180_.v180 + 1, "name");
  GameStringReads_c05cc0(a2, (__int64)v180_.v180);
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v9, (__int64)v180_.v181);
  }
  v10 = 0;
  if ((v177_.v177[0] & 1) != 0) {
    v11 = v177_.v178;
  }
  else {
    v11 = (char*)v177_.v177 + 1;
  }
  while (1) {
    v12 = &v11[v10];
    v13 = a1 + v10;
    if (v11[v10] == 0) {
      v19 = (_BYTE*)(v13 + 184);
      goto LABEL_38;
    }
    *(_BYTE*)(v13 + 184) = v11[v10];
    if (v12[1] == 0) {
      v19 = (_BYTE*)(a1 + v10 + 185);
      goto LABEL_38;
    }
    *(_BYTE*)(v13 + 185) = v12[1];
    v14 = a1 + v10;
    if (v12[2] == 0) {
      v19 = (_BYTE*)(v14 + 186);
      goto LABEL_38;
    }
    *(_BYTE*)(v14 + 186) = v12[2];
    if (v12[3] == 0) {
      v19 = (_BYTE*)(a1 + v10 + 187);
      goto LABEL_38;
    }
    *(_BYTE*)(v14 + 187) = v12[3];
    v15 = a1 + v10;
    if (v12[4] == 0) {
      v19 = (_BYTE*)(v15 + 188);
      goto LABEL_38;
    }
    *(_BYTE*)(v15 + 188) = v12[4];
    if (v12[5] == 0) {
      v19 = (_BYTE*)(a1 + v10 + 189);
      goto LABEL_38;
    }
    *(_BYTE*)(v15 + 189) = v12[5];
    v16 = a1 + v10;
    if (v12[6] == 0) {
      v19 = (_BYTE*)(v16 + 190);
      goto LABEL_38;
    }
    *(_BYTE*)(v16 + 190) = v12[6];
    if (v12[7] == 0) {
      v19 = (_BYTE*)(a1 + v10 + 191);
      goto LABEL_38;
    }
    *(_BYTE*)(v16 + 191) = v12[7];
    v17 = a1 + v10;
    v18 = (unsigned __int8)v12[8];
    if (v18 == 0) {
      break;
    }
    v10 += 9;
    *(_BYTE*)(v17 + 192) = v18;
    if ((_DWORD)v10 == 63) {
      v19 = (_BYTE*)(a1 + v10 + 184);
      goto LABEL_38;
    }
  }
  v19 = (_BYTE*)(v17 + 192);
LABEL_38:
  *v19 = 0;
  LOBYTE(v180_.v180[0]) = 16;
  v180_.v182 = (unsigned int*)(a1 + 16);
  strcpy((char*)v180_.v180 + 1, "position");
  GameStringReads_c3cd70((__int64)a2, (char*)v180_.v180);
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v20, (__int64)v180_.v181);
  }
  v180_.v182 = (unsigned int*)(a1 + 32);
  v180_.v180[0] = 0x66666F7475630CLL;
  if (GameRoutine_c05fb0(a2, (__int64)v180_.v180)) {
    v21 = v180_.v182;
    if ((timeline_21c0((unsigned int*)*a2, (unsigned int*)v179) & 1) != 0) {
      *v21 = v179[0];
    }
  }
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v22, (__int64)v180_.v181);
  }
  v180_.v182 = (unsigned int*)(a1 + 48);
  v180_.v180[0] = 0x726F6C6F630ALL;
  GameStringReads_c3cd70((__int64)a2, (char*)v180_.v180);
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v23, (__int64)v180_.v181);
  }
  v180_.v182 = (unsigned int*)(a1 + 72);
  v180_.v180[0] = 0x6168706C610ALL;
  if (GameRoutine_c05fb0(a2, (__int64)v180_.v180)) {
    v24 = v180_.v182;
    if ((timeline_21c0((unsigned int*)*a2, (unsigned int*)v179) & 1) != 0) {
      *v24 = v179[0];
    }
  }
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v25, (__int64)v180_.v181);
  }
  v26 = *a2;
  v180_.v180[1] = 0;
  v180_.v181 = nullptr;
  v180_.v180[0] = 0;
  LOWORD(v179[0]) = 0;
  timeline_2020((unsigned __int16*)v26, v179);
  v27 = SLOWORD(v179[0]);
  v28 = fw_memory_HeapManager_Allocate(*v6, SLOWORD(v179[0]), 16, 0);
  memset(v28, 0, v27);
  Value_2500(*a2, v28, v27);
  GameRoutine_60a060((char*)v180_.v180, v28, SLOWORD(v179[0]));
  v29 = 128;
  if (*(_QWORD*)(*v6 + 200) == 0) {
    v29 = 56;
  }
  nn_mem_StandardAllocator_Free(*v6 + v29, v28);
  v30 = v180_.v180[0];
  v179[0] = 0x6168706C4168630ELL;
  v179[1] = 0;
  v31 = (__int64)v180_.v181;
  if ((v180_.v180[0] & 1) != 0) {
    v32 = v180_.v180[1];
  }
  else {
    v32 = (unsigned __int64)LOBYTE(v180_.v180[0]) >> 1;
  }
  if ((v180_.v180[0] & 1) != 0) {
    v33 = v180_.v181;
  }
  else {
    v33 = (char*)v180_.v180 + 1;
  }
  if (v32 >= 7) {
    v34 = 7;
  }
  else {
    v34 = v32;
  }
  v35 = memcmp((__int64)v179 + 1, (__int64)v33, v34) == 0;
  v36 = v32 == 7 && v35;
  if ((v30 & 1) != 0 && v31 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v37, v31);
  }
  if (v36) {
    LOWORD(v180_.v180[0]) = 0;
    v180_.v182 = (unsigned int*)(a1 + 76);
    if (GameRoutine_c05fb0(a2, (__int64)v180_.v180)) {
      v38 = v180_.v182;
      if ((timeline_21c0((unsigned int*)*a2, (unsigned int*)v179) & 1) != 0) {
        *v38 = v179[0];
      }
    }
    if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
      v39 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v39, (__int64)v180_.v181);
    }
    LOWORD(v180_.v180[0]) = 0;
    v180_.v182 = (unsigned int*)(a1 + 80);
    if (GameRoutine_c05fb0(a2, (__int64)v180_.v180)) {
      v40 = v180_.v182;
      if ((timeline_21c0((unsigned int*)*a2, (unsigned int*)v179) & 1) != 0) {
        *v40 = v179[0];
      }
    }
    if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
      v41 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v41, (__int64)v180_.v181);
    }
    LOWORD(v180_.v180[0]) = 0;
    v180_.v182 = (unsigned int*)(a1 + 84);
    if (GameRoutine_c05fb0(a2, (__int64)v180_.v180)) {
      v42 = v180_.v182;
      if ((timeline_21c0((unsigned int*)*a2, (unsigned int*)v179) & 1) != 0) {
        *v42 = v179[0];
      }
    }
    if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
      v43 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v43, (__int64)v180_.v181);
    }
  }
  v180_.v182 = (unsigned int*)(a1 + 64);
  v180_.v180[0] = 0x69736E65746E6912LL;
  v180_.v180[1] = 31092;
  if (GameRoutine_c05fb0(a2, (__int64)v180_.v180)) {
    v44 = v180_.v182;
    if ((timeline_21c0((unsigned int*)*a2, (unsigned int*)v179) & 1) != 0) {
      *v44 = v179[0];
    }
  }
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v45, (__int64)v180_.v181);
  }
  v176 = *(_DWORD*)(a1 + 88);
  LOBYTE(v180_.v180[0]) = 8;
  strcpy((char*)v180_.v180 + 1, "unit");
  v180_.v182 = (unsigned int*)&v176;
  if (GameRoutine_c05690(a2, (__int64)v180_.v180)) {
    timeline_21c0((unsigned int*)*a2, v180_.v182);
  }
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v46 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v46, (__int64)v180_.v181);
  }
  BYTE3(v180_.v180[1]) = 0;
  *(_DWORD*)(a1 + 88) = v176;
  v175 = *(_DWORD*)(a1 + 96);
  LOBYTE(v180_.v180[0]) = 20;
  qmemcpy((char*)v180_.v180 + 1, "shadowFlag", 10);
  v180_.v182 = (unsigned int*)&v175;
  if (GameRoutine_c05690(a2, (__int64)v180_.v180)) {
    timeline_21c0((unsigned int*)*a2, v180_.v182);
  }
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v47 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v47, (__int64)v180_.v181);
  }
  *(_DWORD*)(a1 + 96) = v175;
  v180_.v180[0] = 0x50776F646168731CLL;
  strcpy((char*)&v180_.v180[1], "riority");
  v180_.v182 = (unsigned int*)(a1 + 100);
  if (GameRoutine_c05690(a2, (__int64)v180_.v180)) {
    timeline_21c0((unsigned int*)*a2, v180_.v182);
  }
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v48 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v48, (__int64)v180_.v181);
  }
  v180_.v182 = (unsigned int*)(a1 + 104);
  v180_.v180[0] = 0x726579616C0ALL;
  if (GameRoutine_c05690(a2, (__int64)v180_.v180)) {
    timeline_21c0((unsigned int*)*a2, v180_.v182);
  }
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v49 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v49, (__int64)v180_.v181);
  }
  v174 = *(_DWORD*)(a1 + 108);
  LOBYTE(v180_.v180[0]) = 16;
  strcpy((char*)v180_.v180 + 1, "mobility");
  v180_.v182 = (unsigned int*)&v174;
  if (GameRoutine_c05690(a2, (__int64)v180_.v180)) {
    timeline_21c0((unsigned int*)*a2, v180_.v182);
  }
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v50 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v50 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v50, (__int64)v180_.v181);
  }
  v180_.v180[1] = 0;
  v180_.v181 = nullptr;
  v180_.v180[0] = 0;
  LOWORD(v179[0]) = 0;
  *(_DWORD*)(a1 + 108) = v174;
  timeline_2020((unsigned __int16*)*a2, v179);
  v51 = SLOWORD(v179[0]);
  v52 = fw_memory_HeapManager_Allocate(*v6, SLOWORD(v179[0]), 16, 0);
  memset(v52, 0, v51);
  Value_2500(*a2, v52, v51);
  GameRoutine_60a060((char*)v180_.v180, v52, SLOWORD(v179[0]));
  v53 = 128;
  if (*(_QWORD*)(*v6 + 200) == 0) {
    v53 = 56;
  }
  nn_mem_StandardAllocator_Free(*v6 + v53, v52);
  v54 = v180_.v180[0];
  v179[0] = 0x7367617408LL;
  v55 = (__int64)v180_.v181;
  if ((v180_.v180[0] & 1) != 0) {
    v56 = v180_.v180[1];
  }
  else {
    v56 = (unsigned __int64)LOBYTE(v180_.v180[0]) >> 1;
  }
  if ((v180_.v180[0] & 1) != 0) {
    v57 = v180_.v181;
  }
  else {
    v57 = (char*)v180_.v180 + 1;
  }
  if (v56 >= 4) {
    v58 = 4;
  }
  else {
    v58 = v56;
  }
  v59 = memcmp((__int64)v179 + 1, (__int64)v57, v58) == 0;
  v60 = v56 == 4 && v59;
  if ((v54 & 1) != 0 && v55 != 0) {
    v61 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v61, v55);
  }
  if (v60) {
    v62 = *a2;
    v180_.v180[0] = 0;
    timeline_2360((unsigned __int64*)v62, v180_.v180);
    v63 = *(_QWORD*)(a1 + 112);
    v64 = *(_QWORD*)(a1 + 120);
    v65 = v180_.v180[0];
    v66 = v64 - v63;
    v67 = (__int64)(v64 - v63) >> 2;
    v68 = v180_.v180[0] - v67;
    if (v180_.v180[0] <= v67) {
      if (v180_.v180[0] >= v67) {
        goto LABEL_188;
      }
      v64 = v63 + 4 * v180_.v180[0];
    }
    else {
      v69 = *(_QWORD*)(a1 + 128);
      if (v68 > (__int64)(v69 - v64) >> 2) {
        if (v180_.v180[0] >> 62 != 0) {
          GameRoutine_66df80();
        }
        v70 = v69 - v63;
        if (v70 >> 1 > v180_.v180[0]) {
          v65 = v70 >> 1;
        }
        if ((unsigned __int64)v70 >= 0x7FFFFFFFFFFFFFFCLL) {
          v71 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v71 = v65;
        }
        if (v71 >> 62 != 0) {
          goto LABEL_375;
        }
        v72 = fw_memory_HeapManager_Allocate(*v6, 4 * v71, 16, 0);
        v73 = v72 + v66;
        v74 = v72 + 4 * v71;
        memset(v72 + v66, 0, 4 * v68);
        v64 = v73 + 4 * v68;
        v75 = v73 - 4 * v67;
        memcpy(v75, v63, v66);
        *(_QWORD*)(a1 + 112) = v75;
        *(_QWORD*)(a1 + 120) = v64;
        *(_QWORD*)(a1 + 128) = v74;
        if (v63 != 0) {
          v76 = 128;
          if (*(_QWORD*)(*v6 + 200) == 0) {
            v76 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v76, v63);
          v64 = *(_QWORD*)(a1 + 120);
        }
        goto LABEL_188;
      }
      memset(*(_QWORD*)(a1 + 120), 0, 4 * v68);
      v64 += 4 * v68;
    }
    *(_QWORD*)(a1 + 120) = v64;
  LABEL_188:
    v77 = v64 - *(_QWORD*)(a1 + 112);
    if (v77 != 0) {
      v78 = v77 >> 2;
      v79 = 0;
      do {
        timeline_21c0((unsigned int*)*a2,
                      (unsigned int*)(*(_QWORD*)(a1 + 112) + v79));
        --v78;
        v79 += 4;
      } while (v78 != 0);
    }
  }
  v180_.v182 = (unsigned int*)(a1 + 92);
  v180_.v180[0] = 0x656C62697369760ELL;
  v180_.v180[1] = 0;
  if (GameRoutine_c3d2d0(a2, (__int64)v180_.v180)) {
    v80 = *a2;
    LODWORD(v179[0]) = 0;
    timeline_21c0((unsigned int*)v80, (unsigned int*)v179);
    *(_BYTE*)v180_.v182 = LODWORD(v179[0]) != 0;
  }
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v81 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v81, (__int64)v180_.v181);
  }
  v180_.v182 = (unsigned int*)(a1 + 94);
  v180_.v180[0] = 0x66694470696B7316LL;
  v180_.v180[1] = 1702065510;
  if (GameRoutine_c3d2d0(a2, (__int64)v180_.v180)) {
    v82 = *a2;
    LODWORD(v179[0]) = 0;
    timeline_21c0((unsigned int*)v82, (unsigned int*)v179);
    *(_BYTE*)v180_.v182 = LODWORD(v179[0]) != 0;
  }
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v83 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v83 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v83, (__int64)v180_.v181);
  }
  v180_.v182 = (unsigned int*)(a1 + 95);
  v180_.v180[0] = 0x65705370696B7318LL;
  v180_.v180[1] = 0x72616C7563LL;
  if (GameRoutine_c3d2d0(a2, (__int64)v180_.v180)) {
    v84 = *a2;
    LODWORD(v179[0]) = 0;
    timeline_21c0((unsigned int*)v84, (unsigned int*)v179);
    *(_BYTE*)v180_.v182 = LODWORD(v179[0]) != 0;
  }
  if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
    v85 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v85 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v85, (__int64)v180_.v181);
  }
  v86 = *a2;
  v180_.v180[1] = 0;
  v180_.v181 = nullptr;
  v180_.v180[0] = 0;
  LOWORD(v179[0]) = 0;
  timeline_2020((unsigned __int16*)v86, v179);
  v87 = SLOWORD(v179[0]);
  v88 = fw_memory_HeapManager_Allocate(*v6, SLOWORD(v179[0]), 16, 0);
  memset(v88, 0, v87);
  Value_2500(*a2, v88, v87);
  GameRoutine_60a060((char*)v180_.v180, v88, SLOWORD(v179[0]));
  v89 = 128;
  if (*(_QWORD*)(*v6 + 200) == 0) {
    v89 = 56;
  }
  nn_mem_StandardAllocator_Free(*v6 + v89, v88);
  v90 = v180_.v180[0];
  v179[0] = 0x6974616D696E6114LL;
  v179[1] = 7564911;
  v91 = (__int64)v180_.v181;
  if ((v180_.v180[0] & 1) != 0) {
    v92 = v180_.v180[1];
  }
  else {
    v92 = (unsigned __int64)LOBYTE(v180_.v180[0]) >> 1;
  }
  if ((v180_.v180[0] & 1) != 0) {
    v93 = v180_.v181;
  }
  else {
    v93 = (char*)v180_.v180 + 1;
  }
  if (v92 >= 0xA) {
    v94 = 10;
  }
  else {
    v94 = v92;
  }
  v95 = memcmp((__int64)v179 + 1, (__int64)v93, v94) == 0;
  v96 = v92 == 10 && v95;
  if ((v90 & 1) != 0 && v91 != 0) {
    v97 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v97 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v97, v91);
  }
  v98 = *a2;
  if (v96) {
    v179[0] = 0;
    timeline_2360((unsigned __int64*)v98, v179);
    v99 = *(_QWORD*)(a1 + 136);
    v100 = *(_QWORD**)(a1 + 144);
    v101 = v179[0];
    v102 = (char*)v100 - v99;
    v103 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v100 - v99) >> 4);
    v104 = v179[0] - v103;
    if (v179[0] <= v103) {
      if (v179[0] >= v103) {
        v110 = *(_QWORD*)(a1 + 144);
        goto LABEL_271;
      }
      v110 = v99 + 48 * v179[0];
      if ((_QWORD*)v110 != v100) {
        do {
          v123 = *(v100 - 3);
          if (v123 != 0) {
            *(v100 - 2) = v123;
            if (*(_QWORD*)(*v6 + 200) != 0) {
              v124 = 128;
            }
            else {
              v124 = 56;
            }
            nn_mem_StandardAllocator_Free(*v6 + v124, v123);
          }
          v100 -= 6;
        } while (v100 != (_QWORD*)v110);
      }
    }
    else {
      v105 = *(_QWORD*)(a1 + 152);
      if (0xAAAAAAAAAAAAAAABLL * ((v105 - (__int64)v100) >> 4) < v104) {
        if (v179[0] > 0x555555555555555LL) {
          GameRoutine_c3d4f0();
        }
        v106 = 0xAAAAAAAAAAAAAAABLL * ((v105 - v99) >> 4);
        if (2 * v106 > v179[0]) {
          v101 = 2 * v106;
        }
        if (v106 >= 0x2AAAAAAAAAAAAAALL) {
          v107 = 0x555555555555555LL;
        }
        else {
          v107 = v101;
        }
        if (v107 > 0x555555555555555LL) {
          goto LABEL_375;
        }
        v108 = fw_memory_HeapManager_Allocate(*v6, 48 * v107, 16, 0);
        v109 = &v102[v108];
        v110 = (__int64)&v102[48 * v104 + v108];
        v111 = &v102[v108];
        do {
          *(_QWORD*)v111 = 0;
          *((_QWORD*)v111 + 1) = 0;
          v111[8] = 1;
          *((_QWORD*)v111 + 2) = 0;
          *((_QWORD*)v111 + 3) = 0;
          *((_QWORD*)v111 + 4) = 0;
          *((_QWORD*)v111 + 5) = 0;
          v111 += 48;
        } while (v111 != (char*)v110);
        v112 = 48 * v107;
        v113 = *(_QWORD*)(a1 + 136);
        v114 = *(__int64**)(a1 + 144);
        v115 = v108 + v112;
        v116 = &v109[v113 - (_QWORD)v114];
        if (v114 != (__int64*)v113) {
          v117 = *(__int64**)(a1 + 136);
          v118 = v116;
          do {
            v119 = *v117;
            v120 = v117[1];
            v118[16] = *((_BYTE*)v117 + 16);
            *(_QWORD*)v118 = v119;
            *((_QWORD*)v118 + 1) = v120;
            *((_QWORD*)v118 + 3) = v117[3];
            *((_QWORD*)v118 + 4) = v117[4];
            *((_QWORD*)v118 + 5) = v117[5];
            v117[4] = 0;
            v117[5] = 0;
            v117[3] = 0;
            v117 += 6;
            v118 += 48;
          } while (v117 != v114);
          do {
            v121 = *(_QWORD*)(v113 + 24);
            if (v121 != 0) {
              *(_QWORD*)(v113 + 32) = v121;
              if (*(_QWORD*)(*v6 + 200) != 0) {
                v122 = 128;
              }
              else {
                v122 = 56;
              }
              nn_mem_StandardAllocator_Free(*v6 + v122, v121);
            }
            v113 += 48;
          } while ((__int64*)v113 != v114);
          v113 = *(_QWORD*)(a1 + 136);
        }
        *(_QWORD*)(a1 + 136) = v116;
        *(_QWORD*)(a1 + 144) = v110;
        *(_QWORD*)(a1 + 152) = v115;
        if (v113 != 0) {
          v125 = 128;
          if (*(_QWORD*)(*v6 + 200) == 0) {
            v125 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v125, v113);
          v110 = *(_QWORD*)(a1 + 144);
        }
        goto LABEL_271;
      }
      v110 = (__int64)&v100[6 * v104];
      do {
        *v100 = 0;
        v100[1] = 0;
        *((_BYTE*)v100 + 8) = 1;
        v100[2] = 0;
        v100[3] = 0;
        v100[4] = 0;
        v100[5] = 0;
        v100 += 6;
      } while (v100 != (_QWORD*)v110);
    }
    *(_QWORD*)(a1 + 144) = v110;
  LABEL_271:
    v126 = v110 - *(_QWORD*)(a1 + 136);
    if (v126 != 0) {
      v127 = 0;
      v128 = 0xAAAAAAAAAAAAAAABLL * (v126 >> 4);
      do {
        v129 = *(_QWORD*)(a1 + 136);
        LOWORD(v180_.v180[0]) = 0;
        v180_.v182 = (unsigned int*)(v129 + v127);
        if (GameRoutine_c3d510(a2, (__int64)v180_.v180)) {
          GameStringReads_c3d730(v180_.v182, (unsigned int**)a2);
        }
        if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
          if (*(_QWORD*)(*v6 + 200) != 0) {
            v130 = 128;
          }
          else {
            v130 = 56;
          }
          nn_mem_StandardAllocator_Free(*v6 + v130, (__int64)v180_.v181);
        }
        --v128;
        v127 += 48;
      } while (v128 != 0);
    }
    v98 = *a2;
  }
  v180_.v180[1] = 0;
  v180_.v181 = nullptr;
  v180_.v180[0] = 0;
  LOWORD(v179[0]) = 0;
  timeline_2020((unsigned __int16*)v98, v179);
  v131 = SLOWORD(v179[0]);
  v132 = fw_memory_HeapManager_Allocate(*v6, SLOWORD(v179[0]), 16, 0);
  memset(v132, 0, v131);
  Value_2500(*a2, v132, v131);
  GameRoutine_60a060((char*)v180_.v180, v132, SLOWORD(v179[0]));
  v133 = 128;
  if (*(_QWORD*)(*v6 + 200) == 0) {
    v133 = 56;
  }
  nn_mem_StandardAllocator_Free(*v6 + v133, v132);
  v134 = v180_.v180[0];
  strcpy((char*)v179, " sharedAnimations");
  WORD1(v179[2]) = 0;
  HIDWORD(v179[2]) = 0;
  v135 = (__int64)v180_.v181;
  if ((v180_.v180[0] & 1) != 0) {
    v136 = v180_.v180[1];
  }
  else {
    v136 = (unsigned __int64)LOBYTE(v180_.v180[0]) >> 1;
  }
  if ((v180_.v180[0] & 1) != 0) {
    v137 = v180_.v181;
  }
  else {
    v137 = (char*)v180_.v180 + 1;
  }
  if (v136 >= 0x10) {
    v138 = 16;
  }
  else {
    v138 = v136;
  }
  v139 = memcmp((__int64)v179 + 1, (__int64)v137, v138) == 0;
  v140 = v136 == 16 && v139;
  if ((v134 & 1) != 0 && v135 != 0) {
    v141 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v141 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v141, v135);
  }
  if (v140) {
    v142 = *a2;
    v179[0] = 0;
    timeline_2360((unsigned __int64*)v142, v179);
    v143 = *(_QWORD*)(a1 + 160);
    v144 = *(_QWORD*)(a1 + 168);
    v145 = v179[0];
    v146 = v144 - v143;
    v147 = 0xCCCCCCCCCCCCCCCDLL * ((v144 - v143) >> 2);
    v148 = v179[0] - v147;
    if (v179[0] <= v147) {
      if (v179[0] < v147) {
        v144 = v143 + 20 * v179[0];
        *(_QWORD*)(a1 + 168) = v144;
      }
      goto LABEL_323;
    }
    v149 = *(_QWORD*)(a1 + 176);
    if (0xCCCCCCCCCCCCCCCDLL * ((v149 - v144) >> 2) >= v148) {
      v160 = v144 + 20 * v148;
      do {
        *(_DWORD*)(v144 + 8) = 0;
        *(_QWORD*)v144 = 0;
        *(_BYTE*)(v144 + 8) = 1;
        *(_QWORD*)(v144 + 12) = 1065353216;
        v144 += 20;
      } while (v144 != v160);
      *(_QWORD*)(a1 + 168) = v160;
      v144 = v160;
    LABEL_323:
      v161 = v144 - *(_QWORD*)(a1 + 160);
      if (v161 != 0) {
        v162 = 16;
        v163 = 0xCCCCCCCCCCCCCCCDLL * (v161 >> 2);
        do {
          v164 = *(_QWORD*)(a1 + 160);
          LOWORD(v180_.v180[0]) = 0;
          v180_.v182 = (unsigned int*)(v164 + v162 - 16);
          if (GameRoutine_c05690(a2, (__int64)v180_.v180)) {
            timeline_21c0((unsigned int*)*a2, v180_.v182);
          }
          if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
            if (*(_QWORD*)(*v6 + 200) != 0) {
              v165 = 128;
            }
            else {
              v165 = 56;
            }
            nn_mem_StandardAllocator_Free(*v6 + v165, (__int64)v180_.v181);
          }
          LOWORD(v180_.v180[0]) = 0;
          v180_.v182 = (unsigned int*)(v164 + v162 - 8);
          if (GameRoutine_c3d2d0(a2, (__int64)v180_.v180)) {
            v166 = *a2;
            v183 = 0;
            timeline_21c0((unsigned int*)v166, &v183);
            *(_BYTE*)v180_.v182 = v183 != 0;
          }
          if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
            if (*(_QWORD*)(*v6 + 200) != 0) {
              v167 = 128;
            }
            else {
              v167 = 56;
            }
            nn_mem_StandardAllocator_Free(*v6 + v167, (__int64)v180_.v181);
          }
          LOWORD(v180_.v180[0]) = 0;
          v180_.v182 = (unsigned int*)(v164 + v162 - 12);
          if (GameRoutine_c05690(a2, (__int64)v180_.v180)) {
            timeline_21c0((unsigned int*)*a2, v180_.v182);
          }
          if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
            if (*(_QWORD*)(*v6 + 200) != 0) {
              v168 = 128;
            }
            else {
              v168 = 56;
            }
            nn_mem_StandardAllocator_Free(*v6 + v168, (__int64)v180_.v181);
          }
          LOWORD(v180_.v180[0]) = 0;
          v180_.v182 = (unsigned int*)(v164 + v162 - 4);
          if (GameRoutine_c05fb0(a2, (__int64)v180_.v180)) {
            v169 = v180_.v182;
            if ((timeline_21c0((unsigned int*)*a2, &v183) & 1) != 0) {
              *v169 = v183;
            }
          }
          if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
            if (*(_QWORD*)(*v6 + 200) != 0) {
              v170 = 128;
            }
            else {
              v170 = 56;
            }
            nn_mem_StandardAllocator_Free(*v6 + v170, (__int64)v180_.v181);
          }
          LOWORD(v180_.v180[0]) = 0;
          v180_.v182 = (unsigned int*)(v164 + v162);
          if (GameRoutine_c05fb0(a2, (__int64)v180_.v180)) {
            v171 = v180_.v182;
            if ((timeline_21c0((unsigned int*)*a2, &v183) & 1) != 0) {
              *v171 = v183;
            }
          }
          if ((v180_.v180[0] & 1) != 0 && v180_.v181 != nullptr) {
            if (*(_QWORD*)(*v6 + 200) != 0) {
              v172 = 128;
            }
            else {
              v172 = 56;
            }
            nn_mem_StandardAllocator_Free(*v6 + v172, (__int64)v180_.v181);
          }
          --v163;
          v162 += 20;
        } while (v163 != 0);
      }
      goto LABEL_368;
    }
    if (v179[0] > 0xCCCCCCCCCCCCCCCLL) {
      GameRoutine_c3e520();
    }
    v150 = 0xCCCCCCCCCCCCCCCDLL * ((v149 - v143) >> 2);
    if (2 * v150 > v179[0]) {
      v145 = 2 * v150;
    }
    if (v150 >= 0x666666666666666LL) {
      v151 = 0xCCCCCCCCCCCCCCCLL;
    }
    else {
      v151 = v145;
    }
    if (v151 <= 0xCCCCCCCCCCCCCCCLL) {
      v152 = fw_memory_HeapManager_Allocate(*v6, 20 * v151, 16, 0);
      v153 = v152 + v146;
      v144 = v152 + v146 + 20 * v148;
      v154 = v152 + v146;
      do {
        *(_DWORD*)(v154 + 8) = 0;
        *(_QWORD*)v154 = 0;
        *(_BYTE*)(v154 + 8) = 1;
        *(_QWORD*)(v154 + 12) = 1065353216;
        v154 += 20;
      } while (v154 != v144);
      v155 = v152 + 20 * v151;
      v156 = *(_QWORD*)(a1 + 160);
      v157 = *(_QWORD*)(a1 + 168) - v156;
      v158 = v153 - v157;
      memcpy(v153 - v157, v156, v157);
      *(_QWORD*)(a1 + 160) = v158;
      *(_QWORD*)(a1 + 168) = v144;
      *(_QWORD*)(a1 + 176) = v155;
      if (v156 != 0) {
        v159 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v159 = 56;
        }
        nn_mem_StandardAllocator_Free(*v6 + v159, v156);
        v144 = *(_QWORD*)(a1 + 168);
      }
      goto LABEL_323;
    }
  LABEL_375:
    GameRoutine_60a210();
  }
LABEL_368:
  if ((v177_.v177[0] & 1) != 0 && v177_.v178 != nullptr) {
    v173 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v173 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v173, (__int64)v177_.v178);
  }
}

__int64 wld_c41bf0(__int64* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                   __int64 a6)
{
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  _BYTE* v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  _BYTE* v27;
  unsigned int* v28;
  struct {
    _QWORD v29[7];
    __int16 v30;
    char gap74_[2];
    int v31;
    __int64 v32;
    __int64 v33;
  } v29_;
  struct {
    __int64 v34[3];
    _BYTE* v35;
  } v34_;
  unsigned int v36;

  if (a6 != 0 && (v11 = *(_QWORD*)(a6 + 592)) != 0) {
    v29_.v29[6] = 0;
    v12 = *(_QWORD*)(a6 + 576);
    v29_.v31 = 0;
    v29_.v29[4] = -1;
    v29_.v29[5] = 0;
    v29_.v30 = 257;
    v29_.v32 = v11;
    v29_.v33 = v12;
    v29_.v29[0] = GameData_212ce30 + 2;
    __builtin_memset(&v29_.v29[1], 0, 24);
    v13 = (__int64*)fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         544, 16, 0);
    *(_QWORD*)v14 = 0;
    *(_BYTE*)(v14 + 12) = 0;
    v28 = (unsigned int*)v14;
    *(_DWORD*)(v14 + 8) = -1;
    *(_QWORD*)(v14 + 16) = v14 + 32;
    *(_QWORD*)(v14 + 24) = v14 + 32;
    GameRoutine_1fa0(v14, 0);
    GameRoutine_1fd0(v14, (__int64)v29_.v29);
    v15 = (_BYTE*)a1[16];
    GameHr_c51760((__int64)v15);
    if (v15[640] == 1) {
      Manager_c46910((__int64)(v15 + 320));
      v15[640] = 0;
    }
    if (v15[968] == 1) {
      Manager_c46910((__int64)(v15 + 648));
      v15[968] = 0;
    }
    if (v15[1296] == 1) {
      Manager_c46910((__int64)(v15 + 976));
      v15[1296] = 0;
    }
    v15[1632] = 0;
    v16 = a1[16];
    LOBYTE(v34_.v34[0]) = 30;
    v34_.v35 = (_BYTE*)v16;
    strcpy((char*)v34_.v34 + 1, "m_SceneLighting");
    if (GameRoutine_c49640((__int64**)&v28, (__int64)v34_.v34)) {
      GameHr_c49860(v16, (__int64)&v28);
    }
    strcpy((char*)v34_.v34, "(m_HadesSceneOverride");
    HIWORD(v34_.v34[2]) = 0;
    v34_.v35 = (_BYTE*)(v16 + 320);
    GfxLoader_c49e60((__int64**)&v28, v34_.v34);
    strcpy((char*)v34_.v34, "&m_RainSceneOverride");
    BYTE5(v34_.v34[2]) = 0;
    HIWORD(v34_.v34[2]) = 0;
    v34_.v35 = (_BYTE*)(v16 + 648);
    GfxLoader_c49e60((__int64**)&v28, v34_.v34);
    v17 = (char*)fw_memory_HeapManager_Allocate(*v13, 26, 16, 0);
    strcpy(v17, "m_SightmapSceneOverride");
    fw_text_String_CopyTerminated(v34_.v34, (__int64)v17, 0x17u);
    v34_.v35 = (_BYTE*)(v16 + 976);
    GfxLoader_c49e60((__int64**)&v28, v34_.v34);
    if ((v34_.v34[0] & 1) != 0 && v34_.v34[2] != 0) {
      v18 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v18, v34_.v34[2]);
    }
    v19 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*v13 + v19, (__int64)v17);
    v20 = (char*)fw_memory_HeapManager_Allocate(*v13, 32, 16, 0);
    strcpy(v20, "m_GreenCloudSceneOverride");
    fw_text_String_CopyTerminated(v34_.v34, (__int64)v20, 0x19u);
    v34_.v35 = (_BYTE*)(v16 + 1304);
    GfxLoader_c49e60((__int64**)&v28, v34_.v34);
    if ((v34_.v34[0] & 1) != 0 && v34_.v34[2] != 0) {
      v21 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v21, v34_.v34[2]);
    }
    v22 = 128;
    if (*(_QWORD*)(*v13 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*v13 + v22, (__int64)v20);
    strcpy((char*)v34_.v34, "*m_UseOcclusionCulling");
    HIBYTE(v34_.v34[2]) = 0;
    v34_.v35 = (_BYTE*)(v16 + 1632);
    if (GameRoutine_c3d2d0((__int64**)&v28, (__int64)v34_.v34)) {
      v36 = 0;
      timeline_21c0(v28, &v36);
      *v34_.v35 = v36 != 0;
    }
    if ((v34_.v34[0] & 1) != 0 && v34_.v34[2] != 0) {
      v23 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v23, v34_.v34[2]);
    }
    wld_GfxLoader_loadFogTexture((__int64)a1, a2, a3, a4, a5, 0);
    GameRoutine_b87160(*a1, (*(_BYTE*)(a1[16] + 1632) & 1) == 0, 1u);
    *(_QWORD*)v28 = 0;
    v24 = (__int64*)v28;
    v28 = nullptr;
    if (v24 != nullptr) {
      v25 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(*v13 + v25, (__int64)v24);
    }
    return (*(__int64 (**)(_QWORD*))(v29_.v29[0] + 24LL))(v29_.v29);
  }
  else {
    v27 = (_BYTE*)a1[16];
    GameHr_c51760((__int64)v27);
    if (v27[640] == 1) {
      Manager_c46910((__int64)(v27 + 320));
      v27[640] = 0;
    }
    if (v27[968] == 1) {
      Manager_c46910((__int64)(v27 + 648));
      v27[968] = 0;
    }
    if (v27[1296] == 1) {
      Manager_c46910((__int64)(v27 + 976));
      v27[1296] = 0;
    }
    v27[1632] = 0;
    wld_GfxLoader_loadFogTexture((__int64)a1, a2, a3, a4, a5, 0);
    *(_BYTE*)(a1[16] + 1632) = 0;
    return GameRoutine_b87160(*a1, (*(_BYTE*)(a1[16] + 1632) & 1) == 0, 1u);
  }
}

#pragma GCC visibility pop
