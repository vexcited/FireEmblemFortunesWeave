#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1993840(__int64, __int64, __int64, __int64, __int64,
                            __int64);
_QWORD* PrimitiveDrawManager_19935e0(_QWORD*, __int64, __int64, unsigned int);
_QWORD* PrimitiveDrawManager_1994180(_QWORD* result);
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, __int64);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13412c0(_QWORD, _QWORD, float);
__int64 GameRoutine_14d2480();
__int64 GameRoutine_1523f30();
__int64 GameRoutine_718280(void);
__int64 GameRoutine_ae0560(void);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 Troop_133e8b0(__int64 result);
__int64 UnitActor_819f40(__int64);
__int64 UnitActor_81a540(__int64, int, __int64);
__int64 UnitActor_81ab40(__int64, float, float);
__int64 UnitActor_81cda0(__int64, __int128*, float);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_14a3920(__int64 result);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(void);
__int64 game_HashString32_alt1(_QWORD, _QWORD) __asm__("game_HashString32");
__int64 game_ProcInst_Register(_QWORD);
__int64 game_gmap_14d2400();
__int64 game_gmap_14d24a0();
__int64 game_gmap_1523f70();
__int64 game_gmap_1524170();
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 GameRoutine_14a1520(_QWORD*, char);
__n64 game_gmap_1540e50(__int64**, __int128*, __int64*, __int128*, float, float,
                        float);
char* Impl_1327e40(__int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212ea30;
extern _UNKNOWN* GameData_2130228;
extern _UNKNOWN GameData_1acc6e7;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21c6868;
extern _UNKNOWN GameData_2251ae8;
extern _UNKNOWN GameData_2253450;
extern __int128 GameData_1a83090;
extern __int128 GameData_21a6120;
extern __int128 GameData_22532c0;
extern __int64 (*GameData_204a628[])();
extern __int64 (*GameData_204a7b8[])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d060[8])();
extern __int64 (*game_80a680_ptr[11])();
extern __int64 (*game_gmap_anonymous_ProcHeroMove_vtable[])();
extern __int64 (*game_gmap_anonymous_ProcHeroWarp_vtable[])();
extern __int64 (*game_gmap_anonymous_ProcSubquestDemoSeq_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d460[6];
extern __int64* GameData_212d718;
extern __int64* GameData_2130e00;
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131678;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21f1618;
extern __int64 GameData_22518f0;
extern __int64 GameData_22518f8;
extern __int64 GameData_2251910;
extern __int64 GameData_2251920;
extern __int64 GameData_2251930;
extern __int64 GameData_2251938;
extern __int64 GameData_2251950;
extern __int64 GameData_2251960;
extern __int64 GameData_2251970;
extern __int64 GameData_2251978;
extern __int64 GameData_2251980;
extern __int64 GameData_2251990;
extern __int64 GameData_22519a0;
extern __int64 GameData_22519b0;
extern __int64 GameData_22519b8;
extern __int64 GameData_22519c0;
extern __int64 GameData_22519d0;
extern __int64 GameData_22519e0;
extern __int64 GameData_22519f0;
extern __int64 GameData_22519f8;
extern __int64 GameData_2251a00;
extern __int64 GameData_2251a10;
extern __int64 GameData_2251a20;
extern __int64 GameData_2251a30;
extern __int64 GameData_2251a38;
extern __int64 GameData_2251a50;
extern __int64 GameData_2251a60;
extern __int64 GameData_2251a70;
extern __int64 GameData_2251a78;
extern __int64 GameData_2251a90;
extern __int64 GameData_2251aa0;
extern __int64 GameData_2251ab0;
extern __int64 GameData_2251ab8;
extern __int64 GameData_2251ac0;
extern __int64 GameData_2251ad0;
extern __int64 GameData_2251ae0;
extern __int64 GameData_22532d8;
extern __int64 GameData_22532e0;
extern __int64 GameData_22532e8;
extern __int64 GameData_22532f8;
extern __int64 GameData_2253308;
extern __int64 GameData_2253318;
extern __int64 GameData_2253320;
extern __int64 GameData_2253328;
extern __int64 GameData_2253338;
extern __int64 GameData_2253348;
extern __int64 GameData_2253358;
extern __int64 GameData_2253360;
extern __int64 GameData_2253368;
extern __int64 GameData_2253378;
extern __int64 GameData_2253388;
extern __int64 GameData_2253398;
extern __int64 GameData_22533a0;
extern __int64 GameData_22533a8;
extern __int64 GameData_22533b8;
extern __int64 GameData_22533c8;
extern __int64 GameData_22533d8;
extern __int64 GameData_22533e0;
extern __int64 GameData_22533e8;
extern __int64 GameData_22533f8;
extern __int64 GameData_2253408;
extern __int64 GameData_2253418;
extern __int64 GameData_2253420;
extern __int64 GameData_2253428;
extern __int64 GameData_2253438;
extern __int64 GameData_2253448;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern char GameData_22518e8;
extern char GameData_2251928;
extern char GameData_2251968;
extern char GameData_22519a8;
extern char GameData_22519e8;
extern char GameData_2251a28;
extern char GameData_2251a68;
extern char GameData_2251aa8;
extern char GameData_22532d0;
extern char GameData_2253310;
extern char GameData_2253350;
extern char GameData_2253390;
extern char GameData_22533d0;
extern char GameData_2253410;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_2251908;
extern int GameData_2251918;
extern int GameData_2251948;
extern int GameData_2251958;
extern int GameData_2251988;
extern int GameData_2251998;
extern int GameData_22519c8;
extern int GameData_22519d8;
extern int GameData_2251a08;
extern int GameData_2251a18;
extern int GameData_2251a48;
extern int GameData_2251a58;
extern int GameData_2251a88;
extern int GameData_2251a98;
extern int GameData_2251ac8;
extern int GameData_2251ad8;
extern int GameData_22532f0;
extern int GameData_2253300;
extern int GameData_2253330;
extern int GameData_2253340;
extern int GameData_2253370;
extern int GameData_2253380;
extern int GameData_22533b0;
extern int GameData_22533c0;
extern int GameData_22533f0;
extern int GameData_2253400;
extern int GameData_2253430;
extern int GameData_2253440;
float Camera_1315570(__int64);
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
float powf(long double, float);
float32x4_t* GameRoutine_1994460(float32x4_t* result);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void game_gmap_133f780_alt1(__int64 a1, _DWORD* a2,
                            char a3) __asm__("game_gmap_133f780");
float game_gmap_135bbf0(float32x4_t* a1, float32x4_t* a2, float32x4_t* a3);
__int64 game_gmap_14c4e70(__int64 result);
__int64 game_gmap_14c5130(__int64 result);
__int64 game_gmap_14d1e10(__int64 result);
__int64 game_gmap_1522780(__int64 a1);
unsigned int* game_gmap_1541180(unsigned int* result, unsigned int* a2,
                                __int128* a3, __int64 a4, __int64 a5,
                                __int64 a6, float a7);
__int64 GameRoutine_14a1520_alt1(__int64*, char) __asm__("GameRoutine_14a1520");
__int64 UnitActor_81a540_alt1(__int64, unsigned int,
                              __int64) __asm__("UnitActor_81a540");
__int64 game_gmap_133f780(__int64 result, _DWORD* a2, char a3);
_BYTE* ProcInst_657a50_alt1(__int64, char) __asm__("ProcInst_657a50");
__int64 GameRoutine_13412c0_alt1(float32x4_t*, float32x4_t*,
                                 float) __asm__("GameRoutine_13412c0");
__int64 GameRoutine_718280_alt1() __asm__("GameRoutine_718280");
__int64 GameRoutine_ae0560_alt1() __asm__("GameRoutine_ae0560");
__int64 ProcInst_657850_alt1(__int64, __int64, __int64, char,
                             __int64) __asm__("ProcInst_657850");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
const char*
game_HashString32_alt2(const char* result) __asm__("game_HashString32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64
GameRoutine_1130770_alt1(__int64, const char*,
                         __int64*) __asm__("GameRoutine_1130770");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__int64 game_gmap_133f780(__int64 result, _DWORD* a2, char a3)
{
  __int64 v3;
  __int64 v5;
  __int128 v6;
  __int64 v9;
  unsigned int v10;
  _DWORD* v11;
  __int64** v12;
  int v13;
  int v14;
  __int64* v16;
  __int64 v17;
  unsigned int v18;
  float32x4_t v19;
  unsigned int i;
  float32x4_t* v21;
  float v22;
  float v23;
  float32x4_t v24;
  float32x4_t v25;
  __int128 v26;
  __int128 v27;

  if (a2 == nullptr) {
    return result;
  }
  *(_QWORD*)result = a2;
  v3 = result;
  *(_DWORD*)(result + 48) = a2[8];
  v5 = result + 48;
  *(_DWORD*)(result + 52) = a2[9];
  v6 = *(_OWORD*)(result + 48);
  *((_QWORD*)&v6 + 1) = (unsigned int)a2[10];
  *(_OWORD*)(result + 48) = v6;
  UnitActor_81cda0(result + 112, (__int128*)(result + 48), 0x0.0p+0f);
  if ((a3 & 1) != 0) {
    v9 = *(_QWORD*)(v3 + 120);
    BYTE12(v27) = 0;
    *(_QWORD*)&v27 = 0xBF800000BF800000LL;
    DWORD2(v27) = 1065353216;
    v10 = UnitActor_819f40(v9);
    if (v10 != *(_DWORD*)(v3 + 128)) {
      UnitActor_81a540_alt1(v5 + 64, v10, (__int64)&v27);
    }
  }
  result = Troop_133e8b0(v3);
  v11 = *(_DWORD**)(v3 + 656);
  v12 = (__int64**)(v3 + 656);
  if (*(_QWORD*)v11 == 0) {
    goto LABEL_11;
  }
  v13 = *(_DWORD*)(*(_QWORD*)v11 + 16LL);
  v14 = v11[2];
  if (v13 == v14 && *(_BYTE*)(v3 + 652) == 5) {
    UnitActor_81d430((void*)((float32x4_t*)&v27), v5 + 64);
    v16 = *v12;
    v17 = **v12;
    if (v17 != 0 && *(_DWORD*)(v17 + 16) == *((_DWORD*)v16 + 2)) {
      v18 = *(_DWORD*)(v17 + 36);
      if (v18 != 0) {
        v19 = COERCE_AS(float32x4_t, v27);
        for (i = 0; i < v18; ++i) {
          if ((int)v18 > (int)i) {
            v21 = *(float32x4_t**)(v17 + 40 + 8LL * (int)i);
            if (v21 != nullptr) {
              v21[1] = v19;
              LANES128(v21[8]).n128_u8[0] = 1;
              v18 = *(_DWORD*)(v17 + 36);
            }
          }
        }
      }
    }
    result = game_14a3920((__int64)v16);
    goto LABEL_21;
  }
  if (v13 != v14) {
  LABEL_11:
    result = GameRoutine_14a1520_alt1((__int64*)(v3 + 656), 1);
    *(_BYTE*)(v3 + 652) = 0;
  }
LABEL_21:
  if (GameData_21f1618 == 0) {
    v22 = 0x0.0p+0f;
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                             COERCE_AS(float32x2_t, 1065353216LL)))
            .n64_f32[0] > 0x0.0p+0f) {
      v26 = GameData_1a83090;
      v27 = GameData_1a83090;
      v23 = math_Vec3_Angle((float32x4_t*)&v27, (float32x4_t*)&v26);
      LANES128(v24).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v25).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v24).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                    COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      *(int8x8_t*)&LANES128(v25).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                    COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      if (LANES128_OF(vmlsq_f32(vmulq_f32(v24, v25), v24, v25)).n128_f32[1] <
          0x0.0p+0f) {
        v23 = -v23;
      }
      v22 = v23 * 0x1.ca5dc00000000p+5f;
    }
    return UnitActor_81ab40(v5 + 64, v22, -0x1.0000000000000p+0f);
  }
  return result;
}

float game_gmap_135bbf0(float32x4_t* a1, float32x4_t* a2, float32x4_t* a3)
{
  float32x4_t v3;
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  int8x16_t v8;
  float32x4_t v9;
  float v10;
  float v11;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;

  v3 = *a2;
  v4 = *a3;
  LANES128(v5).n128_u64[0] = 0x4040000040400000LL;
  LANES128(v5).n128_u64[1] = 0x4040000040400000LL;
  v6 = *a1;
  LANES128(v7).n128_u64[0] = 0x3E0000003E000000LL;
  LANES128(v7).n128_u64[1] = 0x3E0000003E000000LL;
  v9 = vmulq_f32(
      vaddq_f32(*a1, vaddq_f32(vmulq_f32(*a2, v5), vmulq_f32(*a3, v5))), v7);
  v8 = vmulq_f32(v6, v6);
  LANES128(v9).n128_u32[3] = 0;
  LANES128(v8).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  v10 = 0x0.0p+0f;
  v29 = v9;
  v11 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
            .n64_f32[0];
  if (v11 > 0x0.0p+0f) {
    if ((float)((float)((float)(LANES128(v6).n128_f32[0] *
                                LANES128(v3).n128_f32[2]) -
                        (float)(PSEUDO_UNFUSED(LANES128(v3).n128_f32[0] *
                                               LANES128(v6).n128_f32[2]))) *
                (float)((float)(LANES128(v6).n128_f32[0] *
                                LANES128(v4).n128_f32[2]) -
                        (float)(PSEUDO_UNFUSED(LANES128(v4).n128_f32[0] *
                                               LANES128(v6).n128_f32[2])))) >=
            0x0.0p+0f &&
        (float)((float)((float)((float)(LANES128(v6).n128_f32[0] *
                                        LANES128(v9).n128_f32[2]) -
                                (float)(PSEUDO_UNFUSED(
                                    LANES128(v9).n128_f32[0] *
                                    LANES128(v6).n128_f32[2]))) *
                        (float)((float)(LANES128(v6).n128_f32[0] *
                                        LANES128(v9).n128_f32[2]) -
                                (float)(PSEUDO_UNFUSED(
                                    LANES128(v9).n128_f32[0] *
                                    LANES128(v6).n128_f32[2])))) /
                v11) <= 0x1.0000000000000p-2f) {
      return sqrtf(v11);
    }
    else {
      LANES128(v13).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v13).n128_u64[1] = 0x3F0000003F000000LL;
      LANES128(v14).n128_u64[0] = 0x3E8000003E800000LL;
      LANES128(v14).n128_u64[1] = 0x3E8000003E800000LL;
      v21 = v9;
      v15 = vmulq_f32(v3, v13);
      LANES128(v15).n128_u32[3] = 0;
      v28 = v15;
      v16 = vmulq_f32(vaddq_f32(vaddq_f32(v3, v3), v4), v14);
      LANES128(v16).n128_u32[3] = 0;
      v27 = v16;
      v22 = vmulq_f32(vaddq_f32(v6, vaddq_f32(v3, vaddq_f32(v4, v4))), v14);
      v23 = vmulq_f32(vaddq_f32(v4, v6), v13);
      v17 = game_gmap_135bbf0(&v28, &v27, &v29);
      v18 = v22;
      LANES128(v18).n128_u32[3] = 0;
      v26 = vsubq_f32(v18, v21);
      v19 = v23;
      LANES128(v19).n128_u32[3] = 0;
      v24 = vsubq_f32(*a1, v21);
      v25 = vsubq_f32(v19, v21);
      return v17 + game_gmap_135bbf0(&v26, &v25, &v24);
    }
  }
  return v10;
}

__int64 game_gmap_14c4e70(__int64 result)
{
  const char* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v1 = *(const char**)(*(_QWORD*)(result + 216) + 96LL);
    if (GameData_21ec7b8 == 0 && v1 != nullptr) {
      v3 = result;
      v4 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770_alt1(v4, v1, nullptr);
      v5 = *(_QWORD*)(v3 + 40);
      if (v5 != 0) {
        *(_QWORD*)(v5 + 48) = v4;
        *(_QWORD*)(v4 + 56) = *(_QWORD*)(v3 + 40);
      }
      *(_QWORD*)(v3 + 40) = v4;
      *(_QWORD*)(v4 + 24) = "talk::Seq";
      *(_QWORD*)(v4 + 32) = v3;
      *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32_alt2("talk::Seq");
      *(_QWORD*)(v4 + 64) = 0;
      *(_QWORD*)(v4 + 72) = 24;
      *(_QWORD*)(v4 + 80) = 1;
      *(_QWORD*)(v4 + 8) = &GameData_216de68;
      *(_QWORD*)(v4 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
      if ((result & 1) != 0 && (*(_WORD*)(v4 + 136) & 0x100) == 0) {
        *(_WORD*)(v4 + 136) |= 0x100u;
      }
      v6 = *(_BYTE**)(v4 + 32);
      v7 = v6[138];
      if (v7 == 0) {
        result =
            (*(__int64 (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
        v7 = v6[138];
      }
      v6[138] = v7 + 1;
      *(_WORD*)(v4 + 136) |= 2u;
    }
  }
  return result;
}

__int64 game_gmap_14c5130(__int64 result)
{
  __int64 v1;
  __int64 v2;
  const char* v3;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;

  v1 = *(_QWORD*)(result + 216);
  v2 = result;
  if (game_GameModeData_instance_ == 0 ||
      *(_BYTE*)(game_GameModeData_instance_ + 15) != 1 ||
      (v3 = *(const char**)(v1 + 112)) == nullptr || *v3 == 0) {
    v3 = *(const char**)(v1 + 104);
  }
  if (GameData_21ec7b8 == 0 && v3 != nullptr) {
    v5 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
    GameRoutine_1130770_alt1(v5, v3, nullptr);
    v6 = *(_QWORD*)(v2 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = v5;
      *(_QWORD*)(v5 + 56) = *(_QWORD*)(v2 + 40);
    }
    *(_QWORD*)(v2 + 40) = v5;
    *(_QWORD*)(v5 + 24) = "talk::Seq";
    *(_QWORD*)(v5 + 32) = v2;
    *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32_alt2("talk::Seq");
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 24;
    *(_QWORD*)(v5 + 80) = 1;
    *(_QWORD*)(v5 + 8) = &GameData_216de68;
    *(_QWORD*)(v5 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5);
    if ((result & 1) != 0 && (*(_WORD*)(v5 + 136) & 0x100) == 0) {
      *(_WORD*)(v5 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v5 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v5 + 136) |= 2u;
  }
  return result;
}

__int64 game_gmap_14d1e10(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  void* v14;
  _BYTE* v15;
  char v16;
  __int64 v17;
  __int64 v18;

  v1 = *(__int64**)(result + 264);
  if (v1 != nullptr) {
    v2 = *v1;
    if (*(_WORD*)(v2 + 376) != 0) {
      v3 = **(_QWORD**)(v2 + 384);
      if (*(_BYTE*)v3 != 77 || *(_BYTE*)(v3 + 1) != 73 ||
          *(_BYTE*)(v3 + 2) != 68 || *(_BYTE*)(v3 + 3) != 95 ||
          *(_BYTE*)(v3 + 4) != 69 || *(_BYTE*)(v3 + 5) != 86) {
        if (*GameData_212d460[0] != 0) {
          return result;
        }
        v12 = result;
        v6 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
        GameRoutine_1130770_alt1(v6, (const char*)v3, nullptr);
        v13 = *(_QWORD*)(v12 + 40);
        if (v13 != 0) {
          *(_QWORD*)(v13 + 48) = v6;
          *(_QWORD*)(v6 + 56) = *(_QWORD*)(v12 + 40);
        }
        *(_QWORD*)(v12 + 40) = v6;
        *(_QWORD*)(v6 + 24) = "talk::Seq";
        *(_QWORD*)(v6 + 32) = v12;
        *(_DWORD*)(v6 + 140) =
            (unsigned int)game_HashString32_alt2("talk::Seq");
        *(_QWORD*)(v6 + 64) = 0;
        *(_QWORD*)(v6 + 72) = 24;
        *(_QWORD*)(v6 + 80) = 1;
        v14 = GameData_2130228;
        *(_QWORD*)(v6 + 8) = GameData_2130228;
        *(_QWORD*)(v6 + 16) = v14;
        (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6);
        if ((result & 1) != 0 && (*(_WORD*)(v6 + 136) & 0x100) == 0) {
          *(_WORD*)(v6 + 136) |= 0x100u;
        }
        v15 = *(_BYTE**)(v6 + 32);
        v16 = v15[138];
        if (v16 == 0) {
        LABEL_21:
          result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v15 + 64LL))(v15);
          v16 = v15[138];
        }
      LABEL_22:
        v15[138] = v16 + 1;
        *(_WORD*)(v6 + 136) |= 2u;
        return result;
      }
      v4 = result;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2251ae8,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_2251ae8) != 0) {
        GameData_22518e8 = 19;
        GameData_2251908 = 500;
        GameData_2251910 = 0;
        GameData_2251970 = 0;
        GameData_2251978 = (__int64)game_gmap_14d2400;
        GameData_2251918 = 0;
        GameData_2251920 = 0;
        GameData_2251928 = 10;
        GameData_2251948 = 0;
        GameData_2251950 = 0;
        GameData_2251958 = 0;
        GameData_2251960 = 0;
        GameData_2251980 = 0;
        GameData_2251988 = 0;
        GameData_2251990 = 0;
        GameData_2251998 = 0;
        GameData_22519a0 = 0;
        GameData_22519c0 = 0;
        GameData_22519c8 = 0;
        GameData_22519d0 = 0;
        GameData_22519d8 = 0;
        GameData_22519e0 = 0;
        GameData_2251a00 = 0;
        GameData_2251a08 = 0;
        GameData_2251a10 = 0;
        GameData_2251a18 = 0;
        GameData_2251a20 = 0;
        GameData_2251a28 = 19;
        GameData_22519b0 = 0;
        GameData_22519b8 = (__int64)GameRoutine_14d2480;
        GameData_22518f0 = 0;
        GameData_22518f8 = (__int64)game_80a680_ptr[0];
        GameData_2251968 = 13;
        GameData_22519a8 = 13;
        GameData_22519e8 = 13;
        GameData_2251930 = 0;
        GameData_2251938 = (__int64)GameData_212c720;
        GameData_22519f0 = 0;
        GameData_22519f8 = (__int64)game_gmap_14d24a0;
        GameData_2251a48 = 500;
        GameData_2251a50 = 0;
        GameData_2251a58 = 0;
        GameData_2251a60 = 0;
        GameData_2251a68 = 10;
        GameData_2251a70 = 0;
        GameData_2251a78 = (__int64)GameData_212c720;
        GameData_2251a88 = 0;
        GameData_2251a90 = 0;
        GameData_2251a98 = 0;
        GameData_2251aa0 = 0;
        GameData_2251aa8 = 0;
        GameData_2251ad0 = 0;
        GameData_2251ad8 = 0;
        GameData_2251ae0 = 0;
        GameData_2251ac8 = 0;
        GameData_2251ab8 = 0;
        GameData_2251ac0 = 0;
        GameData_2251ab0 = 0;
        GameData_2251a30 = 0;
        GameData_2251a38 = (__int64)GameData_212d060[0];
        __cxa_guard_release_alt1((__int64)&GameData_2251ae8);
      }
      v5 = (__int64*)fw_memory_g_heap_manager_ptr;
      v6 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
      v7 = GameData_212c608[0];
      *(_QWORD*)(v6 + 88) = 0;
      *(_QWORD*)(v6 + 96) = 0;
      *(_QWORD*)(v6 + 104) = 0;
      *(_QWORD*)(v6 + 112) = 0;
      *(_QWORD*)(v6 + 120) = 0;
      *(_QWORD*)(v6 + 128) = 0;
      *(_WORD*)(v6 + 136) = 0;
      *(_QWORD*)(v6 + 16) = 0;
      *(_QWORD*)(v6 + 24) = "NULL";
      *(_QWORD*)(v6 + 32) = 0;
      v8 = v6 + 32;
      *(_QWORD*)(v6 + 138) = 0;
      *(_QWORD*)(v6 + 144) = 0;
      *(_QWORD*)(v6 + 40) = 0;
      *(_QWORD*)(v6 + 48) = 0;
      *(_QWORD*)(v6 + 56) = 0;
      *(_QWORD*)(v6 + 64) = 0;
      *(_QWORD*)(v6 + 72) = 0;
      *(_QWORD*)(v6 + 80) = 0;
      *(_QWORD*)v6 = v7 + 16;
      *(_QWORD*)(v6 + 8) = 0;
      game_ProcInst_Register_alt1(v6);
      *(_QWORD*)v6 = game_gmap_anonymous_ProcSubquestDemoSeq_vtable;
      v9 = strlen_alt1((const char*)v3);
      if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1();
      }
      v10 = v9;
      if (v9 >= 0x17) {
        if ((v9 | 7) == 0x17) {
          v17 = 26;
        }
        else {
          v17 = (v9 | 7) + 1;
        }
        v11 = fw_memory_HeapManager_Allocate_alt1(*v5, v17, 16, 0);
        *(_QWORD*)(v6 + 160) = v10;
        *(_QWORD*)(v6 + 168) = v11;
        *(_QWORD*)(v6 + 152) = v17 | 1;
      }
      else {
        v11 = v6 + 153;
        *(_BYTE*)(v6 + 152) = 2 * v9;
        if (v9 == 0) {
        LABEL_29:
          *(_BYTE*)(v11 + v10) = 0;
          v18 = *(_QWORD*)(v4 + 40);
          if (v18 != 0) {
            *(_QWORD*)(v18 + 48) = v6;
            *(_QWORD*)(v6 + 56) = *(_QWORD*)(v4 + 40);
          }
          *(_QWORD*)(v4 + 40) = v6;
          *(_QWORD*)(v6 + 24) = "ProcSubquestDemoSeq";
          *(_QWORD*)(v6 + 32) = v4;
          *(_DWORD*)(v6 + 140) =
              (unsigned int)game_HashString32_alt2("ProcSubquestDemoSeq");
          *(_QWORD*)(v6 + 64) = 0;
          *(_QWORD*)(v6 + 72) = 24;
          *(_QWORD*)(v6 + 80) = 1;
          *(_QWORD*)(v6 + 8) = &GameData_22518e8;
          *(_QWORD*)(v6 + 16) = &GameData_22518e8;
          (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6);
          if ((result & 1) != 0 && (*(_WORD*)(v6 + 136) & 0x100) == 0) {
            *(_WORD*)(v6 + 136) |= 0x100u;
          }
          v15 = *(_BYTE**)v8;
          v16 = *(_BYTE*)(*(_QWORD*)v8 + 138LL);
          if (v16 != 0) {
            goto LABEL_22;
          }
          goto LABEL_21;
        }
      }
      memcpy_alt1(v11, v3, v10);
      goto LABEL_29;
    }
  }
  return result;
}

__int64 game_gmap_1522780(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v4;
  __int64 i;
  _DWORD* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
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
  __int64* v24;
  __int64* v25;
  __int64 v26;
  float v27;
  __int64 v28;
  float32x4_t* v29;
  __int64 v30;
  unsigned int v31;
  __int128 v32;
  _DWORD* v33;
  float32x4_t v34;
  float32x4_t v35;
  int16x4_t v36;
  int v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40[2];
  __int64 vars0;
  __int64 vars8;
  __int64 vars10;

  if (GameData_22532c0 != 0 || game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
      (GameRoutine_718280_alt1() & 1) != 0) {
    return 0;
  }
  v4 = GameData_212c790;
  for (i = *(_QWORD*)(*(_QWORD*)(*GameData_212c790 + 8) + 8LL);; i += 8) {
    v6 = *(_DWORD**)i;
    if ((*(_QWORD*)(*(_QWORD*)i + 96LL) | *(_QWORD*)(*(_QWORD*)i + 552LL)) ==
            0 &&
        v6[21] == -1) {
      break;
    }
  }
  v7 = *(_QWORD*)(*(_QWORD*)v6 + 120LL);
  if (v7 != GameRoutine_ae0560_alt1()) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2253450,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_2253450) != 0) {
      GameData_22532d0 = 13;
      GameData_22532d8 = 0;
      GameData_22532e0 = (__int64)GameRoutine_1523f30;
      GameData_2253350 = 13;
      GameData_22533d0 = 13;
      GameData_22532e8 = 0;
      GameData_22532f0 = 0;
      GameData_22532f8 = 0;
      GameData_2253300 = 0;
      GameData_2253308 = 0;
      GameData_2253318 = 0;
      GameData_2253320 = 16;
      GameData_2253310 = 14;
      GameData_2253328 = 1;
      GameData_2253330 = 0;
      GameData_2253338 = 0;
      GameData_2253340 = 0;
      GameData_2253348 = 0;
      GameData_2253358 = 0;
      GameData_2253360 = (__int64)game_gmap_1523f70;
      GameData_2253368 = 0;
      GameData_2253370 = 0;
      GameData_2253378 = 0;
      GameData_2253380 = 0;
      GameData_2253388 = 0;
      GameData_2253390 = 14;
      GameData_2253398 = 0;
      GameData_22533a0 = 16;
      GameData_22533a8 = 1;
      GameData_22533b0 = 0;
      GameData_22533b8 = 0;
      GameData_22533c0 = 0;
      GameData_22533c8 = 0;
      GameData_22533d8 = 0;
      GameData_22533e0 = (__int64)game_gmap_1524170;
      GameData_22533e8 = 0;
      GameData_22533f0 = 0;
      GameData_22533f8 = 0;
      GameData_2253400 = 0;
      GameData_2253408 = 0;
      GameData_2253410 = 0;
      GameData_2253438 = 0;
      GameData_2253440 = 0;
      GameData_2253448 = 0;
      GameData_2253430 = 0;
      GameData_2253420 = 0;
      GameData_2253428 = 0;
      GameData_2253418 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_2253450);
    }
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
    v10 = GameData_212c608[0];
    *(_QWORD*)(v9 + 96) = 0;
    *(_QWORD*)(v9 + 104) = 0;
    *(_QWORD*)(v9 + 112) = 0;
    *(_QWORD*)(v9 + 120) = 0;
    *(_QWORD*)(v9 + 128) = 0;
    *(_WORD*)(v9 + 136) = 0;
    *(_QWORD*)(v9 + 16) = 0;
    *(_QWORD*)(v9 + 24) = "NULL";
    *(_QWORD*)(v9 + 138) = 0;
    *(_QWORD*)(v9 + 144) = 0;
    *(_QWORD*)(v9 + 32) = 0;
    *(_QWORD*)(v9 + 40) = 0;
    *(_QWORD*)(v9 + 48) = 0;
    *(_QWORD*)(v9 + 56) = 0;
    *(_QWORD*)(v9 + 64) = 0;
    *(_QWORD*)(v9 + 72) = 0;
    *(_QWORD*)(v9 + 80) = 0;
    *(_QWORD*)(v9 + 88) = 0;
    *(_QWORD*)v9 = v10 + 16;
    *(_QWORD*)(v9 + 8) = 0;
    game_ProcInst_Register_alt1(v9);
    *((_QWORD*)&GameData_22532c0 + 1) = v9;
    *(_QWORD*)v9 = GameData_204a7b8;
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v11 = *(_QWORD*)(*v4 + 8);
      v12 = *(__int64**)(v11 + 8);
      v13 = *(__int64**)(v11 + 16);
      while (v12 != v13) {
        v14 = *v12;
        if ((*(_QWORD*)(*v12 + 96) | *(_QWORD*)(*v12 + 552)) == 0 &&
            *(_DWORD*)(v14 + 84) == -1) {
          goto LABEL_22;
        }
        ++v12;
      }
    }
    v14 = 0;
  LABEL_22:
    v15 = *v8;
    *(_QWORD*)(v9 + 152) = v14;
    *(_QWORD*)(v9 + 160) = 0;
    *(_QWORD*)v9 = game_gmap_anonymous_ProcHeroWarp_vtable;
    v16 = fw_memory_HeapManager_Allocate_alt1(v15, 296, 16, 0);
    result = v9;
    *(_DWORD*)(v16 + 48) = 0x2000;
    v17 = GameData_2131678;
    *(_QWORD*)(v16 + 8) = 0;
    *(_QWORD*)(v16 + 16) = 0;
    *(_DWORD*)(v16 + 32) = 0;
    *(_QWORD*)(v16 + 40) = 0;
    *(_DWORD*)(v16 + 104) = 0;
    *(_WORD*)(v16 + 108) = 256;
    *(_QWORD*)(v16 + 56) = 0;
    *(_QWORD*)(v16 + 64) = 0;
    *(_QWORD*)(v16 + 72) = 0;
    *(_WORD*)(v16 + 80) = 0;
    *(_WORD*)(v16 + 116) = 0;
    *(_WORD*)(v16 + 136) = 0;
    *(_BYTE*)(v16 + 160) = 0;
    *(_BYTE*)(v16 + 288) = 0;
    *(_QWORD*)(v16 + 272) = 0;
    *(_QWORD*)(v16 + 280) = 0;
    *(_QWORD*)(v16 + 256) = 0;
    *(_QWORD*)(v16 + 264) = 0;
    *(_QWORD*)(v16 + 240) = 0;
    *(_QWORD*)(v16 + 248) = 0;
    *(_QWORD*)(v16 + 224) = 0;
    *(_QWORD*)(v16 + 232) = 0;
    *(_QWORD*)(v16 + 208) = 0;
    *(_QWORD*)(v16 + 216) = 0;
    *(_QWORD*)(v16 + 192) = 0;
    *(_QWORD*)(v16 + 200) = 0;
    *(_QWORD*)(v16 + 176) = 0;
    *(_QWORD*)(v16 + 184) = 0;
    *(_QWORD*)(v16 + 168) = 0;
    *(_QWORD*)(v16 + 120) = 0;
    *(_DWORD*)(v16 + 127) = 0;
    *(_QWORD*)(v9 + 176) = v16;
    *(_DWORD*)(v9 + 184) = 0;
    *(_BYTE*)(v9 + 188) = 0;
    *(_QWORD*)v16 = v17 + 16;
    *(_DWORD*)(v16 + 112) = -1082130432;
    *(_DWORD*)(v16 + 292) = 2;
    *(_QWORD*)(v16 + 24) = 0;
    *(_QWORD*)(v9 + 168) = v16 + 24;
    if (a1 != 0) {
      v18 = *(_QWORD*)(a1 + 40);
      if (v18 != 0) {
        *(_QWORD*)(v18 + 48) = v9;
        *(_QWORD*)(v9 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v9;
      *(_QWORD*)(v9 + 24) = "ProcHeroWarp";
      *(_QWORD*)(v9 + 32) = a1;
      *(_DWORD*)(v9 + 140) =
          (unsigned int)game_HashString32_alt2("ProcHeroWarp");
      *(_QWORD*)(v9 + 64) = 0;
      *(_QWORD*)(v9 + 72) = 24;
      *(_QWORD*)(v9 + 80) = 1;
      *(_QWORD*)(v9 + 8) = &GameData_22532d0;
      *(_QWORD*)(v9 + 16) = &GameData_22532d0;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 32LL))(v9);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 136LL))(v9) & 1) != 0) {
        result = v9;
        if ((*(_WORD*)(v9 + 136) & 0x100) == 0) {
          *(_WORD*)(v9 + 136) |= 0x100u;
        }
        return result;
      }
    }
    else {
      if ((*(_WORD*)(v9 + 136) & 1) != 0) {
        return result;
      }
      ProcInst_657a50_alt1(v9, 1);
    }
    return v9;
  }
  v19 = vars0;
  v20 = vars8;
  vars8 = v19;
  vars10 = v20;
  v21 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
  v22 = GameData_212c608[0];
  *(_QWORD*)(v21 + 96) = 0;
  *(_QWORD*)(v21 + 104) = 0;
  *(_QWORD*)(v21 + 112) = 0;
  *(_QWORD*)(v21 + 120) = 0;
  *(_QWORD*)(v21 + 128) = 0;
  *(_WORD*)(v21 + 136) = 0;
  *(_QWORD*)(v21 + 16) = 0;
  *(_QWORD*)(v21 + 24) = "NULL";
  *(_QWORD*)(v21 + 138) = 0;
  *(_QWORD*)(v21 + 144) = 0;
  *(_QWORD*)(v21 + 32) = 0;
  *(_QWORD*)(v21 + 40) = 0;
  *(_QWORD*)(v21 + 48) = 0;
  *(_QWORD*)(v21 + 56) = 0;
  *(_QWORD*)(v21 + 64) = 0;
  *(_QWORD*)(v21 + 72) = 0;
  *(_QWORD*)(v21 + 80) = 0;
  *(_QWORD*)(v21 + 88) = 0;
  *(_QWORD*)v21 = v22 + 16;
  *(_QWORD*)(v21 + 8) = 0;
  game_ProcInst_Register_alt1(v21);
  *(_QWORD*)v21 = GameData_204a628;
  *(_QWORD*)&GameData_22532c0 = v21;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v23 = *(_QWORD*)(*GameData_212c790 + 8);
    v24 = *(__int64**)(v23 + 8);
    v25 = *(__int64**)(v23 + 16);
    while (v24 != v25) {
      v26 = *v24;
      if ((*(_QWORD*)(*v24 + 96) | *(_QWORD*)(*v24 + 552)) == 0 &&
          *(_DWORD*)(v26 + 84) == -1) {
        goto LABEL_43;
      }
      ++v24;
    }
  }
  v26 = 0;
LABEL_43:
  *(_QWORD*)(v21 + 152) = v26;
  *(_QWORD*)v21 = game_gmap_anonymous_ProcHeroMove_vtable;
  v40[1] = (unsigned __int64)&GameData_1acc6e7;
  v27 = 0x0.0p+0f;
  v40[0] = game_HashString_alt1((__int64)&GameData_1acc6e7);
  if (game_GameModeData_instance_ != 0) {
    v28 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v40);
    if (v28 != 0) {
      v27 = (float)*(int*)(v28 + 32);
    }
  }
  v29 = *(float32x4_t**)(v21 + 152);
  *(float*)(v21 + 160) = v27;
  *(float32x4_t*)(v21 + 176) = vaddq_f32(v29[3], v29[4]);
  *(_QWORD*)(v21 + 192) = 0;
  *(_QWORD*)(v21 + 200) = 0;
  *(_DWORD*)(v21 + 208) = 0;
  GameRoutine_13412c0_alt1(v29, (float32x4_t*)(v21 + 176),
                           0x1.0000000000000p+0f);
  v30 = *(_QWORD*)(v21 + 152);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v39 = v30;
    v37 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130);
    v30 = v39;
    if (v37 != 0) {
      v38 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v38;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
      v30 = v39;
    }
  }
  v31 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v30 + 64) = GameData_21a6120;
  v32 = *(_OWORD*)(v30 + 64);
  *((_QWORD*)&v32 + 1) = v31;
  *(_OWORD*)(v30 + 64) = v32;
  v33 = **(_DWORD***)(v21 + 152);
  *(_DWORD*)(v21 + 192) = v33[8];
  *(_DWORD*)(v21 + 196) = v33[9];
  v34 = *(float32x4_t*)(v21 + 192);
  LANES128(v34).n128_u64[1] = (unsigned int)v33[10];
  v35 = *(float32x4_t*)(v21 + 176);
  *(float32x4_t*)(v21 + 192) = v34;
  LANES64(v36).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(v35, v34))).n64_u64[0];
  if ((LANES64(v36).n64_u8[0] & 1) != 0 && (LANES64(v36).n64_u8[2] & 1) != 0 &&
      (LANES64(v36).n64_u8[4] & 1) != 0) {
    *(_DWORD*)(v21 + 208) = *(_DWORD*)(v21 + 160);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21c6868) != 0) {
    GameData_21c67a8 = 3;
    GameData_21c67d0 = 0;
    GameData_21c67d8 = 0;
    GameData_21c67e0 = 0;
    GameData_21c67b0 = 0;
    GameData_21c67b8 = 0;
    GameData_21c67c0 = 0;
    GameData_21c67c8 = 0;
    GameData_21c6808 = 0;
    GameData_21c6810 = 0;
    GameData_21c6818 = 0;
    GameData_21c6820 = 0;
    GameData_21c6828 = 0;
    GameData_21c6850 = 0;
    GameData_21c6858 = 0;
    GameData_21c6860 = 0;
    GameData_21c6848 = 0;
    GameData_21c6838 = 0;
    GameData_21c6840 = 0;
    GameData_21c6830 = 0;
    GameData_21c67e8 = 14;
    GameData_21c67f0 = 0;
    GameData_21c67f8 = 16;
    GameData_21c6800 = 1;
    __cxa_guard_release_alt1((__int64)&GameData_21c6868);
  }
  return ProcInst_657850_alt1(v21, (__int64)&GameData_21c67a8,
                              (__int64)"ProcHeroMove", 1, a1);
}

unsigned int* game_gmap_1541180(unsigned int* result, unsigned int* a2,
                                __int128* a3, __int64 a4, __int64 a5,
                                __int64 a6, float a7)
{
  unsigned int* v10;
  __int64 v11;
  __int64 v12;
  _BOOL4 v13;
  __int64 v14;
  int v15;
  unsigned int*** v16;
  unsigned int** v17;
  unsigned int*** v18;
  unsigned int** v19;
  unsigned int** v20;
  unsigned int** v21;
  __int64* v22;
  __int64 v23;
  _QWORD* i;
  _QWORD* v25;
  _QWORD* j;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned int*** v30;
  unsigned int** v31;
  __int64* v32;
  __int64 v33;
  _QWORD* k;
  unsigned int** v35;
  __int64 v36;
  _BOOL4 v37;
  _QWORD** v38;
  char* v39;
  __int64 v40;
  float32x4_t** v41;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  float v51;
  long double v52;
  long double v53;
  unsigned __int64 v54;
  __int64 v55;
  int32x4_t v56;
  float v57;
  long double v58;
  float32x4_t v59;
  float32x4_t v60;
  float v61;
  float v62;
  long double v63;
  long double v64;
  unsigned int v65;
  __int128 v66;
  __int64 v67;
  int v68;
  unsigned int*** v69;
  unsigned int*** v70;
  unsigned int** v71;
  __int64* v72;
  __int64 v73;
  char* v74;
  _QWORD* m;
  __int64* v76;
  unsigned int** v77;
  unsigned int** v78;
  __int64 v79;
  unsigned int** v80;
  __int64 v81;
  long double v82;
  long double v83;
  unsigned __int64 v84;
  int32x4_t v85;
  float v86;
  long double v87;
  float32x4_t v88;
  float32x4_t v89;
  float v90;
  float v91;
  long double v92;
  long double v93;
  unsigned int v94;
  __int128 v95;
  __int128 v96;
  __int64 v97;
  float v98;
  __int64 v99;
  __int64 v100;
  int v101;
  float v102;
  float v103;
  float v104;
  unsigned int v105;
  float v106;
  unsigned int v107;
  long double v108;
  __int128 v109;
  long double v110;
  float v111;
  int32x4_t v112;
  float v113;
  __int128 v114;

  v10 = result;
  if (*((_BYTE*)result + 58) == 1) {
    v11 = *((_QWORD*)result + 9);
    v12 = *((_QWORD*)result + 10);
    if (v11 != v12) {
      while (*(unsigned int**)(*(_QWORD*)v11 + 8LL) != a2) {
        v11 += 8;
        if (v11 == v12) {
          v11 = *((_QWORD*)result + 10);
          break;
        }
      }
    }
    v13 = v11 != v12;
  }
  else {
    v13 = false;
  }
  v14 = *(_QWORD*)(GameData_21c96e8 + 8);
  v15 = *(_DWORD*)(v14 + 56);
  v16 = *(unsigned int****)(v14 + 8);
  if (v15 < 0) {
    for (i = v16 + 1;; ++i) {
      v25 = (_QWORD*)*(i - 1);
      if (v25[12] == 0 && v25[69] == 0) {
        break;
      }
    }
    v21 = (unsigned int**)v25[3];
    for (j = v16 + 1;; ++j) {
      v20 = (unsigned int**)*(j - 1);
      if (v20[12] == nullptr && v20[69] == nullptr) {
        break;
      }
    }
  }
  else {
    v17 = *v16;
    if (*((_DWORD*)*v16 + 21) != v15) {
      v18 = v16 + 1;
      do {
        v19 = *v18++;
        v17 = v19;
      } while (*((_DWORD*)v19 + 21) != v15);
    }
    v20 = *v16;
    v21 = (unsigned int**)v17[3];
    if (*((_DWORD*)*v16 + 21) != v15) {
      v22 = (__int64*)(v16 + 1);
      do {
        v23 = *v22++;
        v20 = (unsigned int**)v23;
      } while (*(_DWORD*)(v23 + 84) != v15);
    }
  }
  v27 = (char*)v20[4];
  if (v21 != (unsigned int**)v27) {
    v28 = v27 - (char*)v21 - 8;
    if ((~(_BYTE)v28 & 0x18) != 0) {
      v29 = ((unsigned __int8)((unsigned int)v28 >> 3) + 1) & 3;
      while (*v21 != a2) {
        ++v21;
        if (--v29 == 0) {
          goto LABEL_29;
        }
      }
    }
    else {
    LABEL_29:
      if (v28 >= 0x18) {
        v21 += 2;
        while (1) {
          if (*(v21 - 2) == a2) {
            v21 -= 2;
            goto LABEL_31;
          }
          if (*(v21 - 1) == a2) {
            --v21;
            goto LABEL_31;
          }
          if (*v21 == a2) {
            goto LABEL_31;
          }
          if (v21[1] == a2) {
            break;
          }
          v74 = (char*)(v21 + 2);
          v21 += 4;
          if (v74 == v27) {
            goto LABEL_30;
          }
        }
        ++v21;
      }
      else {
      LABEL_30:
        v21 = (unsigned int**)v27;
      }
    }
  }
LABEL_31:
  v30 = *(unsigned int****)(v14 + 16);
  if (v15 < 0) {
    if (v16 != v30) {
      for (k = v16 + 1;; ++k) {
        v31 = (unsigned int**)*(k - 1);
        if (v31[12] == nullptr && v31[69] == nullptr) {
          break;
        }
      }
      goto LABEL_42;
    }
  LABEL_48:
    if (v21 == *(unsigned int***)((char*)0x20LL)) {
      goto LABEL_91;
    }
  LABEL_49:
    v37 = true;
    if (!v13) {
      return result;
    }
    goto LABEL_50;
  }
  if (v16 == v30) {
    goto LABEL_48;
  }
  v31 = *v16;
  if (*((_DWORD*)*v16 + 21) != v15) {
    v32 = (__int64*)(v16 + 1);
    do {
      v33 = *v32++;
      v31 = (unsigned int**)v33;
    } while (*(_DWORD*)(v33 + 84) != v15);
  }
LABEL_42:
  if (v21 != (unsigned int**)v31[4]) {
    goto LABEL_49;
  }
  if (v15 < 0) {
    for (; v16 != v30; ++v16) {
      v35 = *v16;
      if ((*v16)[12] == nullptr && v35[69] == nullptr) {
        goto LABEL_97;
      }
    }
  LABEL_91:
    result = game_gmap_SpotMgr_GetCurrentSpot();
    goto LABEL_92;
  }
  if (v16 == v30) {
    goto LABEL_91;
  }
  while (1) {
    v36 = (__int64)*v16++;
    v35 = (unsigned int**)v36;
    if (*(_DWORD*)(v36 + 84) == v15) {
      break;
    }
    if (v16 == v30) {
      goto LABEL_91;
    }
  }
LABEL_97:
  result = *v35;
LABEL_92:
  v37 = a2 == result;
  if (!v13) {
    return result;
  }
LABEL_50:
  GameRoutine_1993840(***(_QWORD***)v10, (__int64)a2, (__int64)a3, a4, a5, a6);
  v38 = **(_QWORD****)v10;
  v39 = Impl_1327e40((__int64)a2);
  v40 = strlen(v39);
  v41 = (float32x4_t**)PrimitiveDrawManager_19935e0(*v38, (__int64)v39, v40, 0);
  GameRoutine_1994460(*v41);
  v47 = GameData_2130e00;
  if (v37) {
    v48 = 48;
  }
  else {
    v48 = 16;
  }
  if (v37) {
    v49 = 32;
  }
  else {
    v49 = 0;
  }
  v50 = 224;
  if (v37) {
    v50 = 240;
  }
  v108 = *(long double*)(*GameData_2130e00 + v50);
  v51 = *(float*)GameData_212ea30;
  v111 = powf(v108, *(float*)GameData_212ea30);
  v52 = v108;
  LODWORD(v52) = DWORD1(v108);
  v104 = powf(v52, v51);
  v53 = v108;
  LODWORD(v53) = DWORD2(v108);
  *(float*)&v54 = powf(v53, v51);
  v55 = *v47 + 400;
  HIDWORD(v54) = LANES64_OF(vdup_laneq_s32(*(int32x4_t*)&v108, 3)).n64_u32[0];
  LANES128(v56).n128_u64[0] = __PAIR64__(LODWORD(v104), LODWORD(v111));
  v57 = *((float*)v10 + 16);
  LANES128(v56).n128_u64[1] = v54;
  v58 = *(long double*)(v55 + v48);
  v112 = v56;
  v59 = *(float32x4_t*)(v55 + v49);
  v60 = vsubq_f32(*(float32x4_t*)&v58, v59);
  *(float*)&v58 = LANES128(v59).n128_f32[0] +
                  (float)(PSEUDO_UNFUSED(v57 * LANES128(v60).n128_f32[0]));
  v61 =
      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v55 + v49))) +
      vmuls_lane_f32(v57, COERCE_AS(float32x2_t, LANES128(v60).n128_u64[0]), 1);
  v62 = COERCE_FLOAT(*(_QWORD*)(v55 + v49 + 8)) + vmuls_lane_f32(v57, v60, 2);
  *(float*)&v105 = LANES128(v59).n128_f32[3] + vmuls_lane_f32(v57, v60, 3);
  LODWORD(v108) = COERCE_UNSIGNED_INT(powf(v58, v51));
  *(float*)&v63 = v61;
  v102 = powf(v63, v51);
  *(float*)&v64 = v62;
  *(float*)&v65 = powf(v64, v51);
  *(_QWORD*)&v66 = __PAIR64__(LODWORD(v102), LODWORD(v108));
  v67 = *(_QWORD*)(GameData_21c96e8 + 8);
  v68 = *(_DWORD*)(v67 + 56);
  v69 = *(unsigned int****)(v67 + 8);
  v70 = *(unsigned int****)(v67 + 16);
  *((_QWORD*)&v66 + 1) = __PAIR64__(v105, v65);
  v109 = v66;
  if (v68 < 0) {
    if (v69 == v70) {
      goto LABEL_102;
    }
    for (m = v69 + 1;; ++m) {
      v71 = (unsigned int**)*(m - 1);
      if (v71[12] == nullptr && v71[69] == nullptr) {
        break;
      }
    }
  }
  else {
    if (v69 == v70) {
      goto LABEL_102;
    }
    v71 = *v69;
    if (*((_DWORD*)*v69 + 21) != v68) {
      v72 = (__int64*)(v69 + 1);
      do {
        v73 = *v72++;
        v71 = (unsigned int**)v73;
      } while (*(_DWORD*)(v73 + 84) != v68);
    }
  }
  if (v71[4] != v71[3]) {
    if (v68 < 0) {
      do {
        do {
          v77 = *v69++;
        } while (v77[12] != nullptr);
      } while (v77[69] != nullptr);
    }
    else {
      v78 = *v69;
      v76 = (__int64*)(v69 + 1);
      v77 = v78;
      if (*((_DWORD*)v78 + 21) != v68) {
        do {
          v79 = *v76++;
          v77 = (unsigned int**)v79;
        } while (*(_DWORD*)(v79 + 84) != v68);
      }
    }
    if (a2 != *((unsigned int**)v77[4] - 1)) {
      goto LABEL_104;
    }
    goto LABEL_103;
  }
  if (v68 < 0) {
    if (v69 != v70) {
      while (1) {
        v80 = *v69;
        if ((*v69)[12] == nullptr && v80[69] == nullptr) {
          break;
        }
        if (++v69 == v70) {
          goto LABEL_102;
        }
      }
    LABEL_112:
      if (a2 != *v80) {
        goto LABEL_104;
      }
      goto LABEL_103;
    }
  }
  else {
    while (v69 != v70) {
      v81 = (__int64)*v69++;
      v80 = (unsigned int**)v81;
      if (*(_DWORD*)(v81 + 84) == v68) {
        goto LABEL_112;
      }
    }
  }
LABEL_102:
  if (a2 == game_gmap_SpotMgr_GetCurrentSpot()) {
  LABEL_103:
    v110 = *(long double*)(*v47 + 256);
    v113 = powf(v110, v51);
    v82 = v110;
    LODWORD(v82) = DWORD1(v110);
    v106 = powf(v82, v51);
    v83 = v110;
    LODWORD(v83) = DWORD2(v110);
    *(float*)&v84 = powf(v83, v51);
    HIDWORD(v84) = LANES64_OF(vdup_laneq_s32(*(int32x4_t*)&v110, 3)).n64_u32[0];
    LANES128(v85).n128_u64[0] = __PAIR64__(LODWORD(v106), LODWORD(v113));
    v86 = *((float*)v10 + 16);
    LANES128(v85).n128_u64[1] = v84;
    v112 = v85;
    v88 = *(float32x4_t*)(*v47 + 464);
    v87 = *(long double*)(*v47 + 480);
    v89 = vsubq_f32(*(float32x4_t*)&v87, v88);
    *(float*)&v87 = LANES128(v88).n128_f32[0] +
                    (float)(PSEUDO_UNFUSED(v86 * LANES128(v89).n128_f32[0]));
    v90 = COERCE_FLOAT(HIDWORD(*(_QWORD*)(*v47 + 464))) +
          vmuls_lane_f32(v86, COERCE_AS(float32x2_t, LANES128(v89).n128_u64[0]),
                         1);
    v91 = COERCE_FLOAT(*(_QWORD*)(*v47 + 472)) + vmuls_lane_f32(v86, v89, 2);
    *(float*)&v107 = LANES128(v88).n128_f32[3] + vmuls_lane_f32(v86, v89, 3);
    LODWORD(v110) = COERCE_UNSIGNED_INT(powf(v87, v51));
    *(float*)&v92 = v90;
    v103 = powf(v92, v51);
    *(float*)&v93 = v91;
    *(float*)&v94 = powf(v93, v51);
    *(_QWORD*)&v95 = __PAIR64__(LODWORD(v103), LODWORD(v110));
    *((_QWORD*)&v95 + 1) = __PAIR64__(v107, v94);
    v109 = v95;
  }
LABEL_104:
  *(float*)&v96 = LANES128(v112).n128_f32[0] +
                  (float)(*(float*)&v109 * *((float*)&v109 + 3));
  *(float*)&v97 = LANES128(v112).n128_f32[2] +
                  (float)(*((float*)&v109 + 3) * *((float*)&v109 + 2));
  *((float*)&v96 + 1) = LANES128(v112).n128_f32[1] +
                        (float)(*((float*)&v109 + 3) * *((float*)&v109 + 1));
  HIDWORD(v97) = LANES64_OF(vdup_laneq_s32(v112, 3)).n64_u32[0];
  *((_QWORD*)&v96 + 1) = v97;
  v114 = v96;
  v98 = Camera_1315570(*(_QWORD*)(*GameData_212d718 + 16));
  v99 = *v47;
  v100 = 8;
  if (v37) {
    v100 = 20;
  }
  v101 = *(_DWORD*)(v99 + v100 + 544);
  if (v101 > *(_DWORD*)(v99 + 576)) {
    v101 += 16;
  }
  game_gmap_1540e50(
      (__int64**)v10, a3, (__int64*)v10 + 5, &v114, v98,
      *(float*)(*v47 + 668) * (float)(v101 + 1),
      a7 * (float)(*(float*)(v99 + 496) +
                   (float)(PSEUDO_UNFUSED(
                       (float)(*(float*)(v99 + 500) - *(float*)(v99 + 496)) *
                       *((float*)v10 + 16)))));
  return (unsigned int*)PrimitiveDrawManager_1994180(***(_QWORD****)v10);
}

#pragma GCC visibility pop
