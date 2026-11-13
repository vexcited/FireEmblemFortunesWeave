#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Cursor_7319a0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_1140e80(PSEUDO_X8, _DWORD*);
__attribute__((swiftcall)) void GameRoutine_edf510(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void g3d_ada070(PSEUDO_X8, __int64, __int64,
                                           __int64);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64* GameRoutine_100cc60(__int64*, unsigned int);
__int64* GameRoutine_1140d20(__int64, int, __int64*);
__int64* GameRoutine_1141380(__int64* result, __int64*);
__int64* game_UnitPool_Get(_BYTE*);
__int64 Camera_7bfc60(__int64, __int128*);
__int64 DeployData_f25a60(unsigned int*, unsigned int*);
__int64 GameRoutine_1141380_alt1(_QWORD) __asm__("GameRoutine_1141380");
__int64 GameRoutine_15d1fa0(void);
__int64 GameRoutine_cec4a0(_QWORD, _QWORD);
__int64 GameRoutine_f066e0(_QWORD*);
__int64 GameRoutine_f097d0(__int64);
__int64 GameRoutine_f0af90(_QWORD*, _QWORD*);
__int64 GameRoutine_facea0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_fba950(__int64, char*, int, __int64);
__int64 Manager_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Manager_136ac50(_QWORD, _QWORD, _QWORD, long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_170ecf0(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_Unit_IsHeld(_QWORD);
__int64 game_map_1141200_alt1(_QWORD, _QWORD,
                              _QWORD) __asm__("game_map_1141200");
__int64 game_map_1141500_alt1(_QWORD, _QWORD,
                              _QWORD) __asm__("game_map_1141500");
__int64 game_map_11416c0_alt1(_QWORD, _QWORD,
                              _QWORD) __asm__("game_map_11416c0");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_g3d_5eb5c0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN GameData_1bfa05c;
extern _UNKNOWN GameData_1fd1588;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_20015c8[])();
extern __int64 (*GameData_2001618[])();
extern __int64 (*decltype_c81af0_ptr[6])();
extern __int64 (*game_map_MapAccessDestroyEventBase_vtable[])();
extern __int64 (*game_map_MapAccessNotTrickEventBase_vtable[])();
extern __int64 (*game_map_MapAccessTrickEventBase_vtable[])();
extern __int64 (*game_map_MapBreakdownEvent_vtable[])();
extern __int64 (*game_map_MapDestroyEvent_vtable[])();
extern __int64 (*game_map_MapDoorEvent_vtable[])();
extern __int64 (*game_map_MapEscapeAfterEvent_vtable[])();
extern __int64 (*game_map_MapEscapeBeforeEvent_vtable[])();
extern __int64 (*game_map_MapGimmickEvent_vtable[])();
extern __int64 (*game_map_MapTreasureboxEvent_vtable[])();
extern __int64 (*game_map_MapWarpCommandAfterEvent_vtable[])();
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cfd8[7];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212eba8[8];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212d020[5];
extern __int64 GameData_2131678;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd130;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_220b6f0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64 ui_Manager_instance_;
float CharacterLoadCostCalculator_170f460(_QWORD);
float Height_7c4d10(__int64, float, float);
float game_map_CursorDrawInfo_GetHeightTop(__int64, int, int, int, int,
                                           __int64);
float game_zview_CharacterLoadCostCalculator_collectCharaPolygon(_QWORD,
                                                                 _QWORD);
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
unsigned __int64* game_map_f0ee60(unsigned __int64* result, __int64);
unsigned __int64 HeightCellMap_1003040(unsigned __int64 result,
                                       unsigned __int8*, int, int);
void GameRoutine_ad69c0(_QWORD*);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_65c760();
void __attribute__((noreturn)) GameRoutine_74e1f0();
void __attribute__((noreturn)) GameRoutine_cefa90(_QWORD);
void __attribute__((noreturn)) GameRoutine_face80(void);
float32x4_t* game_map_f54f00(float32x4_t* a1, float a2);
void game_map_fac600();
void game_map_fe96c0(__int64 a1);
void game_map_fe9ba0(float32x4_t* a1);
__attribute__((swiftcall)) void game_map_fe9ec0(PSEUDO_X8 x8_, __int64 a1);
void game_map_100bdf0_alt1(__int64 a1, __int64 a2,
                           unsigned __int64 a3) __asm__("game_map_100bdf0");
__int64* game_map_100c050(__int64* result);
__int64 game_map_1048e00(unsigned int* a1);
void game_map_1141200(_QWORD* a1, int a2, __int64* a3);
void game_map_1141500(_QWORD* a1, int a2, __int64* a3);
void game_map_11416c0(_QWORD* a1, int a2, __int64* a3);
__int64 game_map_1141940_alt1(_DWORD* a1,
                              __int64 a2) __asm__("game_map_1141940");
__int64 game_map_1141b20(_DWORD* a1);
void game_map_1141d00(_QWORD* a1, __int64* a2);
__int64 game_map_1141e80(_DWORD* a1);
__int64 game_map_1142060(_DWORD* a1);
__n128 game_map_1142240(__int64 (***a1)(), __int64* a2);
__n128 game_map_1142440(__int64 (***a1)(), __int64* a2);
__n128 game_map_1142640(__int64 (***a1)(), __int64* a2);
__int64 game_map_15c0290(__int64 a1, int a2);
_DWORD* game_map_1a01b50(float a1, float a2, __int64 a3, __int64 a4, __int64 a5,
                         __int64 a6, __int64 a7);
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 CharacterLoadCostCalculator_170f460_alt1(__int64 result) __asm__(
    "CharacterLoadCostCalculator_170f460");
__int64 GameHr_facea0(__int64 result, unsigned __int64, __int64, char);
__int64 GameRoutine_cec4a0_alt1(__int64 result,
                                unsigned int) __asm__("GameRoutine_cec4a0");
__int64 GameRoutine_f0af90_alt1(__int64*,
                                _QWORD*) __asm__("GameRoutine_f0af90");
__int64 game_zview_CharacterLoadCostCalculator_collectCharaPolygon_alt1(
    __int64 result, __int64) __asm__("game_zview_CharacterLoadCostCalculator_"
                                     "collectCharaPolygon");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool nn_g3d_5eb5c0_alt1(__int64, float32x4_t*) __asm__("nn_g3d_5eb5c0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_ad69c0(_QWORD*);
void __attribute__((noreturn))
GameRoutine_cefa90_alt1() __asm__("GameRoutine_cefa90");
void __attribute__((noreturn))
GameRoutine_face80_alt1() __asm__("GameRoutine_face80");
void game_170ecf0_alt1(__int64, int) __asm__("game_170ecf0");
void game_map_100bdf0(__int64 a1, const char* a2, unsigned __int64 a3);
void game_map_1141940(__int64 a1, __int64 a2);

float32x4_t* game_map_f54f00(float32x4_t* a1, float a2)
{

#pragma clang fp contract(off)
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  unsigned __int64 v11;

  v3 = a2 *
       (float)((float)(*(float*)(*(_QWORD*)
                                     game_script_hub_g_frame_counter_ptr[0] +
                                 160LL) *
                       0x1.0aef000000000p+4f) /
               0x1.f400000000000p+9f);
  v4 = LANES128(a1[14]).n128_f32[2];
  if (v4 <= 0x0.0p+0f) {
    v9 = 0x0.0p+0f;
    if (LANES128(a1[14]).n128_u8[0] != 0) {
      v9 = 0x1.0000000000000p+0f;
    }
  }
  else {
    v5 = v3 / v4;
    v6 = LANES128(a1[14]).n128_f32[1];
    if (LANES128(a1[14]).n128_u8[0] != 0) {
      v7 = fmaxf(v5 + v6, 0x1.51eb860000000p-2f);
      v8 = 0x1.0000000000000p+0f;
    }
    else {
      v10 = v6 - v5;
      v8 = 0x1.570a3c0000000p-1f;
      v7 = fmaxf(v10, 0x0.0p+0f);
    }
    v9 = fminf(v7, v8);
  }
  LANES128(a1[14]).n128_f32[1] = v9;
  v11 = LANES128(*(a1)).n128_u64[0];
  LANES128(a1[12]).n128_f32[0] = v3 + LANES128(a1[12]).n128_f32[0];
  (*(void (**)(float32x4_t*))(v11 + 40))(a1);
  return GameRoutine_f54fe0(a1);
}

void game_map_fac600()
{

#pragma clang fp contract(off)
  __int64* v0;
  __int64* v1;
  __int64* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  float32x4_t* v9;
  float32x4_t v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  float32x4_t v13;
  int8x16_t v14;
  bool v15;
  __int64 v16;
  signed __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int32 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  _DWORD* v30;
  int v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _BOOL4 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  float v50;
  float v51;
  float* v52;
  float v53;
  float v54;
  float v55;
  float v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  float v63;
  float v64;
  float* v65;
  float v66;
  float v67;
  float v68;
  float v69;
  unsigned int v70;
  float v71;
  float v72;
  float v73;
  bool v74;
  __int64 v75;
  char* v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  float32x4_t v86;
  unsigned __int32 v87;
  __int64 v88;
  struct {
    float32x4_t v89;
    float v90;
    float v91;
    char gap56_[72];
    int v92;
  } v89_;
  struct {
    _BYTE v93[248];
    _DWORD v94[6];
  } v93_;

  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
  v86 = COERCE_FLOAT32X4_T(((long double (*)(__int64)) *
                            (_QWORD*)(*(_QWORD*)(GameData_21f3cb0 + 16) +
                                      40LL))(GameData_21f3cb0 + 16)),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
  v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
  v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
  v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
  GameRoutine_edf510((void*)((__int64)v93_.v93), GameData_21f3cb0 + 16),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
  v0 = &GameData_220b6f0;
  v1 = *(__int64**)(GameData_220b6f0 + 8);
  v2 = *(__int64**)(GameData_220b6f0 + 16);
  if (v1 == v2) {
    v5 = 0;
    v4 = 0;
  }
  else {
    v3 = 0;
    v4 = 0;
    v5 = 0;
    do {
      v8 = *v1;
      *(_DWORD*)((char*)v93_.v94 + 3) = 0;
      v93_.v94[0] = 0;
      v9 = *(float32x4_t**)(v8 + 16);
      v10 = v9[35];
      v11 = LANES128(v9[35]).n128_u64[0];
      v12 = LANES128(v9[35]).n128_u64[1];
      LANES128(v89_.v89).n128_u64[0] = v11;
      LANES128(v89_.v89).n128_u64[1] = v12;
      v13 = vsubq_f32(v10, v86);
      v14 = vmulq_f32(v13, v13);
      LANES128(v14).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
              .n64_u64[0];
      v87 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                .n64_u32[0];
      v89_.v90 = *(float*)(v8 + 544) * 0x1.3333340000000p+0f;
      v15 = nn_g3d_5eb5c0_alt1((__int64)v93_.v93, &v89_.v89),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v4 < v3) {
        *(_QWORD*)v4 = v8;
        *(_DWORD*)(v4 + 12) = 0;
        v6 = v93_.v94[0];
        *(_BYTE*)(v4 + 16) = v15;
        *(_DWORD*)(v4 + 17) = v6;
        v7 = *(_DWORD*)((char*)v93_.v94 + 3);
        *(_DWORD*)(v4 + 8) = v87;
        *(_DWORD*)(v4 + 20) = v7;
        v4 += 24LL;
      }
      else {
        v16 = v5;
        v17 = v4 - v5;
        v18 = 1 - 0x5555555555555555LL * (v17 >> 3);
        if (v18 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_face80_alt1(),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v19 = v16;
        v20 = v87;
        v21 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v3 - v16) >> 3);
        if (2 * v21 > v18) {
          v18 = 2 * v21;
        }
        if (v21 >= 0x555555555555555LL) {
          v22 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v22 = v18;
        }
        if (v22 != 0) {
          if (v22 > 0xAAAAAAAAAAAAAAALL) {
          LABEL_124:
            GameRoutine_60a210_alt1(),
                v54 = COERCE_AS(__typeof__(v54),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v56 = COERCE_AS(__typeof__(v56),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v67 = COERCE_AS(__typeof__(v67),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v69 = COERCE_AS(__typeof__(v69),
                                PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v23 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    24 * v22, 16, 0),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
          v20 = v87;
        }
        else {
          v23 = 0;
        }
        v24 = v23 + v17;
        *(_QWORD*)v24 = v8;
        v3 = v23 + 24 * v22;
        *(_DWORD*)(v24 + 8) = v20;
        *(_DWORD*)(v24 + 12) = 0;
        *(_BYTE*)(v24 + 16) = v15;
        v4 = v23 + v17 + 24;
        *(_DWORD*)(v24 + 17) = 0;
        *(_DWORD*)(v24 + 20) = 0;
        v25 = v23 + v17 + 24 * (v17 / -24);
        memcpy_alt1(v25, v19, v17),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v19 != 0) {
          v26 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v26 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v19),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v56 = COERCE_AS(__typeof__(v56),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v69 = COERCE_AS(__typeof__(v69),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v5 = v25;
      }
      v1 += 2;
    } while (v1 != v2);
    if (v5 == v4) {
      v0 = &GameData_220b6f0;
    }
    else {
      v27 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v4 - v5) >> 3);
      GameHr_facea0(v5, v4, (2 * __clz(v27)) ^ 0x7E, 1),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      v28 = v27 & 7;
      v29 = 0;
      v0 = GameData_212eba8[0];
      if (v27 >= 8) {
        v30 = (_DWORD*)(v5 + 108);
        do {
          *(v30 - 24) = v29;
          *(v30 - 18) = v29 + 1;
          *(v30 - 12) = v29 + 2;
          *(v30 - 6) = v29 + 3;
          *v30 = v29 + 4;
          v30[6] = v29 + 5;
          v30[12] = v29 + 6;
          v31 = v29 + 7;
          v29 += 8;
          v30[18] = v31;
          v30 += 48;
        } while (v29 != (v27 & 0xFFFFFFFFFFFFFFF8LL));
      }
      if ((v27 & 7) != 0) {
        v32 = 24 * v29 + 12;
        do {
          *(_DWORD*)(v5 + v32) = v29;
          LODWORD(v29) = v29 + 1;
          v32 += 24;
          --v28;
        } while (v28 != 0);
      }
    }
  }
  game_170ecf0_alt1((__int64)&v89_.v89, 0),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
      v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
      v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
      v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
  v88 = v5;
  if (v5 == v4) {
    goto LABEL_119;
  }
  v33 = v5;
  v34 = 0;
  v35 = nullptr;
  v36 = 0;
  v37 = *(_QWORD*)(*v0 + 56);
  do {
    v38 = *(_QWORD*)v33;
    if (v37 != 0) {
      if (v38 == v37) {
        v39 = true;
        v40 = *(_QWORD*)(v38 + 384);
        if ((v40 & 0x200000000LL) != 0) {
          goto LABEL_50;
        }
      }
      else {
        v39 = *(_QWORD*)(v38 + 600) == v37;
        v40 = *(_QWORD*)(v38 + 384);
        if ((v40 & 0x200000000LL) != 0) {
          goto LABEL_50;
        }
      }
    }
    else {
      v39 = false;
      v40 = *(_QWORD*)(v38 + 384);
      if ((v40 & 0x200000000LL) != 0) {
        goto LABEL_50;
      }
    }
    if ((v40 & 0x1000000000LL) != 0 ||
        *(float*)(v33 + 8) > 0x1.c200000000000p+11f) {
      if (*(_BYTE*)(v33 + 16) == 1) {
        if (*(float*)(v33 + 8) <= 0x1.c200000000000p+7f) {
          LOBYTE(v39) = 1;
        }
        if (!v39) {
          goto LABEL_34;
        }
      }
      else if (!v39) {
        goto LABEL_34;
      }
    }
  LABEL_50:
    if ((unsigned __int64)v35 >= v34) {
      v41 = (char*)v35 - v36;
      v42 = ((__int64)v35 - v36) >> 3;
      v43 = v42 + 1;
      if ((unsigned __int64)(v42 + 1) >> 61 != 0) {
      LABEL_125:
        GameRoutine_cefa90_alt1(),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      if ((__int64)(v34 - v36) >> 2 > v43) {
        v43 = (__int64)(v34 - v36) >> 2;
      }
      if (v34 - v36 >= 0x7FFFFFFFFFFFFFF8LL) {
        v44 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v44 = v43;
      }
      if (v44 != 0) {
        if (v44 >> 61 != 0) {
          goto LABEL_124;
        }
        v45 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v44, 16, 0),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v45 = 0;
      }
      v34 = v45 + 8 * v44;
      v46 = (unsigned __int64)v35 - v36;
      v47 = (__int64)&v41[v45 + -8 * v42];
      *(_QWORD*)&v41[v45] = v38;
      v35 = (__int64*)&v41[v45 + 8];
      memcpy_alt1(v47, v36, v46),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v36 != 0) {
        v48 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v36),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v36 = v47;
    }
    else {
      *v35++ = v38;
    }
    GameRoutine_cec4a0_alt1(v38, 0),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
    v49 = *(_QWORD*)v33;
    v50 = 0x0.0p+0f;
    v51 = 0x0.0p+0f;
    v52 = (float*)((char*)&GameData_1bfa05c + 12 * v89_.v92);
    v53 = *v52;
    if (*v52 > 0x0.0p+0f) {
      game_zview_CharacterLoadCostCalculator_collectCharaPolygon_alt1(
          (__int64)&v89_.v89, *(_QWORD*)(*(_QWORD*)(v49 + 8) + 232LL)),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      v51 = v54 / v53;
    }
    v55 = v52[2];
    if (v55 > 0x0.0p+0f) {
      CharacterLoadCostCalculator_170f460_alt1(v49),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      v50 = v56 / v55;
    }
    v89_.v90 = 0x0.0p+0f;
    v89_.v91 = v50;
    LANES128(v89_.v89).n128_f32[0] = v51 + LANES128(v89_.v89).n128_f32[0];
    LANES128(v89_.v89).n128_f32[1] = LANES128(v89_.v89).n128_f32[1] + 0x0.0p+0f;
    LANES128(v89_.v89).n128_f32[2] = v50 + LANES128(v89_.v89).n128_f32[2];
    LANES128(v89_.v89).n128_f32[3] = v51;
  LABEL_34:
    v33 += 24;
  } while (v33 != v4);
  v57 = v88;
  do {
    v58 = *(_QWORD*)v57;
    if ((__int64*)v36 != v35) {
      v59 = (unsigned __int64)v35 - v36 - 8;
      v60 = (__int64*)v36;
      if ((~(_BYTE)v59 & 0x18) != 0) {
        v61 = ((unsigned __int8)((unsigned int)v59 >> 3) + 1) & 3;
        v60 = (__int64*)v36;
        do {
          v62 = *v60++;
          if (v62 == v58) {
            goto LABEL_74;
          }
        } while (--v61 != 0);
      }
      if (v59 >= 0x18) {
        while (*v60 != v58 && v60[1] != v58 && v60[2] != v58 && v60[3] != v58) {
          v60 += 4;
          if (v60 == v35) {
            goto LABEL_81;
          }
        }
        goto LABEL_74;
      }
    }
  LABEL_81:
    if (*(float*)(v57 + 8) > 0x1.c200000000000p+7f &&
        *(_BYTE*)(v57 + 16) != 1) {
      goto LABEL_92;
    }
    v63 = 0x0.0p+0f;
    v64 = 0x0.0p+0f;
    v65 = (float*)((char*)&GameData_1bfa05c + 12 * v89_.v92);
    v66 = *v65;
    if (*v65 > 0x0.0p+0f) {
      game_zview_CharacterLoadCostCalculator_collectCharaPolygon_alt1(
          (__int64)&v89_.v89, *(_QWORD*)(*(_QWORD*)(v58 + 8) + 232LL)),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      v64 = v67 / v66;
    }
    v68 = v65[2];
    if (v68 > 0x0.0p+0f) {
      CharacterLoadCostCalculator_170f460_alt1(v58),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      v63 = v69 / v68;
    }
    v70 = 0;
    v89_.v90 = 0x0.0p+0f;
    v71 = v64 + LANES128(v89_.v89).n128_f32[0];
    v72 = LANES128(v89_.v89).n128_f32[1] + 0x0.0p+0f;
    v73 = v63 + LANES128(v89_.v89).n128_f32[2];
    v89_.v91 = v63;
    v74 = (float)(v64 + LANES128(v89_.v89).n128_f32[0]) <
          LANES128(v89_.v89).n128_f32[1];
    LANES128(v89_.v89).n128_f32[0] = v64 + LANES128(v89_.v89).n128_f32[0];
    LANES128(v89_.v89).n128_f32[1] = LANES128(v89_.v89).n128_f32[1] + 0x0.0p+0f;
    LANES128(v89_.v89).n128_f32[2] = v63 + LANES128(v89_.v89).n128_f32[2];
    LANES128(v89_.v89).n128_f32[3] = v64;
    if (v74) {
      v71 = v72;
    }
    if (v71 < v73) {
      v71 = v73;
    }
    if (v71 >= 0x1.0000000000000p+0f) {
    LABEL_92:
      v70 = 1;
    }
    v75 = *(_QWORD*)v57;
    if ((unsigned __int64)v35 < v34) {
      *v35++ = v75;
    }
    else {
      v76 = (char*)v35 - v36;
      v77 = ((__int64)v35 - v36) >> 3;
      v78 = v77 + 1;
      if ((unsigned __int64)(v77 + 1) >> 61 != 0) {
        goto LABEL_125;
      }
      if ((__int64)(v34 - v36) >> 2 > v78) {
        v78 = (__int64)(v34 - v36) >> 2;
      }
      if (v34 - v36 >= 0x7FFFFFFFFFFFFFF8LL) {
        v79 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v79 = v78;
      }
      if (v79 != 0) {
        if (v79 >> 61 != 0) {
          goto LABEL_124;
        }
        v80 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v79, 16, 0),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else {
        v80 = 0;
      }
      v34 = v80 + 8 * v79;
      v81 = (unsigned __int64)v35 - v36;
      v82 = (__int64)&v76[v80 + -8 * v77];
      *(_QWORD*)&v76[v80] = v75;
      v35 = (__int64*)&v76[v80 + 8];
      memcpy_alt1(v82, v36, v81),
          v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
          v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
          v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
          v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v36 != 0) {
        v83 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v83 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, v36),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
            v56 =
                COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
            v67 =
                COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
            v69 =
                COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v36 = v82;
    }
    GameRoutine_cec4a0_alt1(v75, v70),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
  LABEL_74:
    v57 += 24;
  } while (v57 != v4);
  if (v36 != 0) {
    v84 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v84 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v84, v36),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
  }
LABEL_119:
  if (v88 != 0) {
    v85 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v85 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v85, v88),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s0", "=w")),
        v56 = COERCE_AS(__typeof__(v56), PSEUDO_REGISTER(float, "s0", "=w")),
        v67 = COERCE_AS(__typeof__(v67), PSEUDO_REGISTER(float, "s0", "=w")),
        v69 = COERCE_AS(__typeof__(v69), PSEUDO_REGISTER(float, "s0", "=w"));
  }
}

void game_map_fe96c0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  __int16 v12;
  unsigned int v13;
  unsigned int v14;
  float32x4_t v15;
  float v16;
  float v17;
  unsigned __int64 v18;
  float32x4_t v19;
  int v20;
  int v21;
  float32x4_t v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  int v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  __int128 v30;
  __int128 v31;
  _QWORD* v32;
  int v33;
  float32x4_t v34;
  int v35;
  int v36;
  int v37;
  __int128 v38;
  float v39;
  __int64 v40;
  unsigned __int32 v41;
  __int64 v42;
  __int128 v43;
  __int64* v44;
  __int64* v45;
  __int64* v46;
  __int64* v47;
  __int64* v48;
  _DWORD* v49;
  __int128 v50;
  unsigned __int64 v51;
  int v52;
  int v53;
  int i;
  int j;
  char v56;
  unsigned __int64 v57;
  char v58;
  _BYTE* v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  _BYTE* v67;
  _BYTE* v68;
  char v69;
  __int64 v70;
  float v71;
  float32x4_t v72;
  float v73;
  float32x4_t v74;
  float32x4_t v75;
  float32x4_t v76;
  int v77;
  _WORD v78[2];

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
  v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = GameData_212d020[0];
  if (*(_QWORD*)GameData_212d020[0] != 0 &&
      (GameRoutine_f066e0(*(_QWORD**)GameData_212d020[0]) & 1) == 0) {
    v3 = GameData_212cfc0[0];
    v4 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    v5 = *(_DWORD*)(v4 + 8);
    if (*(unsigned __int8*)(*GameData_212ce98[0] + 26) >
        (unsigned int)(unsigned __int8)(v5 -
                                        *(_BYTE*)(*GameData_212ce98[0] + 24))) {
      v6 = *(_DWORD*)(v4 + 12);
      if (*(unsigned __int8*)(*GameData_212ce98[0] + 27) >
          (unsigned int)(unsigned __int8)(v6 - *(_BYTE*)(*GameData_212ce98[0] +
                                                         25))) {
        v7 = *(_QWORD*)v2;
        v8 = *(_DWORD*)(a1 + 112);
        v9 = *(_DWORD*)(a1 + 116);
        LOBYTE(v77) = v5;
        BYTE1(v77) = v6;
        HIWORD(v77) = 0;
        HeightCellMap_1003040(*(_QWORD*)(v7 + 8) + 16LL, (unsigned __int8*)&v77,
                              v8, v9),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        v11 = v10;
        v12 = v77;
        *(float*)&v13 =
            (float)(*(_DWORD*)(a1 + 112) - 1) * 0x1.4000000000000p+1f;
        *(float*)&v14 =
            (float)(*(_DWORD*)(a1 + 116) - 1) * 0x1.4000000000000p+1f;
        *(_DWORD*)(a1 + 82) = v77;
        LANES128(v15).n128_u64[0] = v13;
        LANES128(v15).n128_u64[1] = v14;
        v75 = v15;
        v16 = (float)((float)((float)(unsigned int)((char)v12 + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f;
        v17 = (float)((float)((float)(unsigned int)((v12 >> 8) + 256) *
                              0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f;
        if (*GameData_212ce80[0] != 0) {
          v71 = (float)((float)((float)(unsigned int)((v12 >> 8) + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f;
          v73 = (float)((float)((float)(unsigned int)((char)v12 + 256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f;
          Height_7c4d10(*(_QWORD*)(*GameData_212ce80[0] + 61456), v16, v17),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v26 = COERCE_AS(__typeof__(v26),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v17 = v71;
          v16 = v73;
        }
        v18 = LODWORD(v17);
        LANES128(v19).n128_u64[0] = LODWORD(v16);
        LANES128(v19).n128_u64[1] = v18;
        v74 = v19;
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)(*(_QWORD*)(*v3 + 48) + 80LL) + 16LL))(
            (void*)(&v76), *(_QWORD*)(*v3 + 48) + 80LL),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        v20 = *(_DWORD*)(a1 + 112);
        v21 = *(_DWORD*)(a1 + 116);
        LANES128(v22).n128_u64[0] = LANES128(v76).n128_u32[0];
        v23 = *(_QWORD*)(*(_QWORD*)v2 + 8LL);
        v78[1] = 0;
        LANES128(v22).n128_u64[1] = LANES128(v76).n128_u64[1];
        v78[0] = *(_WORD*)(a1 + 82);
        v72 = v22;
        HeightCellMap_1003040(v23 + 72, (unsigned __int8*)v78, v20, v21),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        LODWORD(v24) = 0;
        v25 = *v3;
        HIDWORD(v24) = v26;
        v27 = vaddq_f32(v75, COERCE_AS(float32x4_t, v24));
        v28 = vaddq_f32(v74, v27);
        v29 = vaddq_f32(v72, v27);
        *(_QWORD*)(a1 + 64) = LANES128(v28).n128_u64[0];
        *(_QWORD*)(a1 + 48) = LANES128(v29).n128_u64[0];
        v31 = *(_OWORD*)(a1 + 48);
        v30 = *(_OWORD*)(a1 + 64);
        *((_QWORD*)&v30 + 1) = LANES128(v28).n128_u32[2];
        *((_QWORD*)&v31 + 1) = LANES128(v29).n128_u32[2];
        *(_OWORD*)(a1 + 48) = v31;
        *(_OWORD*)(a1 + 64) = v30;
        v32 = X8CALL_X0(
            _QWORD*,
            (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
                *(_QWORD*)(*(_QWORD*)(v25 + 48) + 16LL) + 16LL))(
                (void*)&v76, *(_QWORD*)(v25 + 48) + 16LL)),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        v33 = *(char*)(a1 + 82);
        v34 = vaddq_f32(v75, v76);
        v35 = *(char*)(a1 + 83);
        v36 = *(_DWORD*)(a1 + 112);
        v37 = *(_DWORD*)(a1 + 116);
        *(_QWORD*)(a1 + 32) = LANES128(v34).n128_u64[0];
        v38 = *(_OWORD*)(a1 + 32);
        *((_QWORD*)&v38 + 1) = LANES128(v34).n128_u32[2];
        *(_OWORD*)(a1 + 32) = v38;
        v39 = game_map_CursorDrawInfo_GetHeightTop((__int64)v32, v33, v35, v36,
                                                   v37, 0),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
        v26 = COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        v40 = *v3;
        *(float*)(a1 + 36) = v39;
        Cursor_7319a0((void*)(&v76), v40),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
        v41 = LANES128(v76).n128_u32[2];
        v42 = *(_QWORD*)v2;
        *(_QWORD*)(a1 + 16) = LANES128(v76).n128_u64[0];
        v43 = *(_OWORD*)(a1 + 16);
        *((_QWORD*)&v43 + 1) = v41;
        *(_OWORD*)(a1 + 16) = v43;
        if (*(_DWORD*)(v42 + 4368) >= 3u) {
          v44 = GameData_212cfd0[0];
          if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
            v45 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8)),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s0", "=w")),
            v26 =
                COERCE_AS(__typeof__(v26), PSEUDO_REGISTER(float, "s0", "=w"));
            if (v45 != nullptr && v45[49] != 0 &&
                (*((_BYTE*)v45 + 417) & 0x1C) == 0) {
              v46 = v45;
              if ((*(float (**)(__int64*))(v45[19] + 16))(v45 + 19) >
                      0x0.0p+0f &&
                  *(_DWORD*)(*(_QWORD*)v2 + 4368LL) == 6) {
                if (*(_BYTE*)(*v44 + 8) != 0) {
                  v47 = game_UnitPool_Get((_BYTE*)(*v44 + 8)),
                  v10 = COERCE_AS(__typeof__(v10),
                                  PSEUDO_REGISTER(float, "s0", "=w")),
                  v26 = COERCE_AS(__typeof__(v26),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
                  v48 = v46;
                }
                else {
                  v48 = v46;
                  v47 = nullptr;
                }
                if (v47 == v48) {
                  v49 = (_DWORD*)v48[29];
                  *(_DWORD*)(a1 + 16) = v49[76];
                  *(_DWORD*)(a1 + 20) = v49[77];
                  v50 = *(_OWORD*)(a1 + 16);
                  *((_QWORD*)&v50 + 1) = (unsigned int)v49[78];
                  *(_OWORD*)(a1 + 16) = v50;
                }
              }
            }
          }
        }
        v51 = *(_QWORD*)(a1 + 88);
        v52 = *(_DWORD*)(a1 + 112);
        *(_DWORD*)(a1 + 20) = v11;
        *(_QWORD*)(a1 + 96) = v51;
        if (v52 >= 1) {
          v53 = *(_DWORD*)(a1 + 116);
          if (v53 >= 1) {
            for (i = 0; i < v52; ++i) {
              if (v53 >= 1) {
                for (j = 0; j < v53; ++j) {
                  v56 = *(_BYTE*)(a1 + 82) + i;
                  v57 = *(_QWORD*)(a1 + 104);
                  v58 = *(_BYTE*)(a1 + 83) + j;
                  if (v51 < v57) {
                    *(_BYTE*)v51 = v56;
                    *(_BYTE*)(v51 + 1) = v58;
                    *(_WORD*)(v51 + 2) = 0;
                    v51 += 4LL;
                  }
                  else {
                    v59 = *(_BYTE**)(a1 + 88);
                    v60 = v51 - (_QWORD)v59;
                    v61 = (__int64)(v51 - (_QWORD)v59) >> 2;
                    v62 = v61 + 1;
                    if ((unsigned __int64)(v61 + 1) >> 62 != 0) {
                      GameRoutine_74e1f0(),
                          v10 = COERCE_AS(__typeof__(v10),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v26 = COERCE_AS(__typeof__(v26),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
                    }
                    v63 = v57 - (_QWORD)v59;
                    if (v63 >> 1 > v62) {
                      v62 = v63 >> 1;
                    }
                    if ((unsigned __int64)v63 >= 0x7FFFFFFFFFFFFFFCLL) {
                      v64 = 0x3FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v64 = v62;
                    }
                    if (v64 >> 62 != 0) {
                      GameRoutine_60a210_alt1(),
                          v10 = COERCE_AS(__typeof__(v10),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v26 = COERCE_AS(__typeof__(v26),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
                    }
                    v65 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v64, 16, 0),
                    v10 = COERCE_AS(__typeof__(v10),
                                    PSEUDO_REGISTER(float, "s0", "=w")),
                    v26 = COERCE_AS(__typeof__(v26),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                    v66 = v65 + v60;
                    *(_BYTE*)v66 = v56;
                    *(_BYTE*)(v66 + 1) = v58;
                    *(_WORD*)(v66 + 2) = 0;
                    if (v59 != (_BYTE*)v51) {
                      v67 = v59;
                      v68 = (_BYTE*)(v65 + v60 - 4 * v61);
                      do {
                        *v68 = *v67;
                        v68[1] = v67[1];
                        v68[2] = v67[2];
                        v69 = v67[3];
                        v67 += 4;
                        v68[3] = v69;
                        v68 += 4;
                      } while (v67 != (_BYTE*)v51);
                    }
                    v51 = v66 + 4;
                    *(_QWORD*)(a1 + 88) = v65 + v60 - 4 * v61;
                    *(_QWORD*)(a1 + 96) = v66 + 4;
                    *(_QWORD*)(a1 + 104) = v65 + 4 * v64;
                    if (v59 != nullptr) {
                      v70 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v70 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v70,
                          (_QWORD)(v59)),
                          v10 = COERCE_AS(__typeof__(v10),
                                          PSEUDO_REGISTER(float, "s0", "=w")),
                          v26 = COERCE_AS(__typeof__(v26),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
                    }
                  }
                  v53 = *(_DWORD*)(a1 + 116);
                  *(_QWORD*)(a1 + 96) = v51;
                }
                v52 = *(_DWORD*)(a1 + 112);
              }
            }
          }
        }
      }
    }
  }
}

void game_map_fe9ba0(float32x4_t* a1)
{

#pragma clang fp contract(off)
  unsigned __int8 v2;
  __int64 v3;
  _QWORD* v4;
  unsigned int v5;
  bool v6;
  int v7;
  char v9;
  __int64* v10;
  unsigned int v11;
  int v12;
  __int64 v14;
  unsigned __int32 v15;
  unsigned __int32 v16;
  unsigned __int64 v17;
  __int64 v18;
  int8x16_t v19;
  int v20;
  unsigned int v21;
  unsigned __int8 v22;
  float32x4_t v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int64 v29;
  __int128 v30;

  if ((LANES128(a1[5]).n128_u8[1] & 1) == 0) {
    LANES128(a1[5]).n128_u8[0] = 0;
  }
  LANES128(a1[5]).n128_u8[1] = 0;
  v2 = LANES128(a1[9]).n128_u8[12];
  v3 = GameData_212d020[0];
  v4 = *(_QWORD**)GameData_212d020[0];
  v5 = *(_DWORD*)(*(_QWORD*)GameData_212d020[0] + 4368LL);
  if ((v2 & 1) != 0) {
    v6 = v5 > 8;
    v7 = (1 << v5) & 0x105;
    if (!v6 && v7 != 0) {
      v9 = 0;
    LABEL_9:
      LANES128(a1[9]).n128_u8[12] = v9;
    }
  }
  else if (v5 >= 3) {
    if (*(_BYTE*)(*GameData_212cfd0[0] + 8) == 0 ||
        (v10 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8))) ==
            nullptr ||
        v10[49] == 0 || (*((_BYTE*)v10 + 417) & 0x1C) != 0 ||
        (*(float (**)(__int64*))(v10[19] + 16))(v10 + 19) <= 0x0.0p+0f) {
      v4 = *(_QWORD**)v3;
      if (*(_QWORD*)v3 == 0) {
        goto LABEL_27;
      }
      goto LABEL_23;
    }
    v4 = *(_QWORD**)v3;
    v9 = 1;
    v11 = *(_DWORD*)(*(_QWORD*)v3 + 4368LL);
    v6 = v11 > 8;
    v12 = (1 << v11) & 0x105;
    if (v6 || v12 == 0) {
      goto LABEL_9;
    }
  }
LABEL_23:
  if ((GameRoutine_f066e0(v4) & 1) == 0) {
    v14 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
    if (*(unsigned __int8*)(*GameData_212ce98[0] + 26) >
            (unsigned int)(unsigned __int8)(*(_BYTE*)(v14 + 8) -
                                            *(_BYTE*)(*GameData_212ce98[0] +
                                                      24)) &&
        *(unsigned __int8*)(*GameData_212ce98[0] + 27) >
            (unsigned int)(unsigned __int8)(*(_BYTE*)(v14 + 12) -
                                            *(_BYTE*)(*GameData_212ce98[0] +
                                                      25))) {
      v16 = *(_DWORD*)(v14 + 184);
      v15 = *(_DWORD*)(v14 + 188);
      LANES128(a1[7]).n128_u32[0] = v16;
      LANES128(a1[7]).n128_u32[1] = v15;
    }
  }
LABEL_27:
  game_map_fe96c0((__int64)a1);
  if (*GameData_212cfc8[0] != 0) {
    v17 = LANES128(a1[1]).n128_u64[1];
    v18 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
    *(_QWORD*)&v30 = LANES128(a1[1]).n128_u64[0];
    *((_QWORD*)&v30 + 1) = v17;
    Camera_7bfc60(v18, &v30);
  }
  v19 = vmulq_f32(a1[8], a1[8]);
  LANES128(v19).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
          .n64_f32[0] <= 0x0.0p+0f) {
    if (LANES128(a1[12]).n128_u8[8] == 1) {
      LANES128(a1[12]).n128_u8[8] = 0;
    }
    v22 = 0;
    if (LANES128(a1[11]).n128_u8[12] == 1) {
      LANES128(a1[11]).n128_u8[12] = 0;
    }
  }
  else {
    if ((signed __int32)LANES128(a1[7]).n128_u32[1] >=
        (signed __int32)LANES128(a1[7]).n128_u32[0]) {
      v20 = LANES128(a1[7]).n128_i32[0];
    }
    else {
      v20 = LANES128(a1[7]).n128_i32[1];
    }
    GameRoutine_fba950((__int64)&a1[10], &LANES128(a1[5]).n128_i8[2], v20,
                       (__int64)&a1[8]);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v29 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v29;
      __cxa_guard_release(&GameData_21a6130);
    }
    v21 = DWORD2(GameData_21a6120);
    v22 = LANES128(a1[12]).n128_u8[8];
    LANES128(a1[8]).n128_u64[0] = GameData_21a6120;
    v23 = a1[8];
    LANES128(v23).n128_u64[1] = v21;
    a1[8] = v23;
  }
  v24 =
      0x1.e000000000000p+5f / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
  if (v24 <= 0x0.0p+0f) {
    v25 = 0x1.119ce00000000p-6f;
  }
  else {
    v25 = v24 * 0x1.119ce00000000p-6f;
  }
  if ((v22 & 1) == 0) {
    v27 = fabsf(v25);
    goto LABEL_53;
  }
  v26 = LANES128(a1[12]).n128_f32[1];
  v27 = fabsf(v25);
  if (v26 <= 0x0.0p+0f) {
    if (v26 >= 0x0.0p+0f || (v26 = v27 + v26) <= 0x0.0p+0f) {
    LABEL_50:
      LANES128(a1[12]).n128_f32[1] = v26;
      if (v26 != 0x0.0p+0f) {
        goto LABEL_53;
      }
      goto LABEL_51;
    }
  }
  else {
    v26 = v26 - v27;
    if (v26 >= 0x0.0p+0f) {
      goto LABEL_50;
    }
  }
  LANES128(a1[12]).n128_u32[1] = 0;
LABEL_51:
  if (LANES128(a1[11]).n128_u8[12] == 1) {
    LANES128(a1[11]).n128_u8[12] = 0;
  }
LABEL_53:
  v28 = LANES128(a1[12]).n128_f32[0];
  if (v28 > 0x0.0p+0f) {
    v28 = v28 - v27;
    if (v28 >= 0x0.0p+0f) {
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  if (v28 < 0x0.0p+0f) {
    v28 = v27 + v28;
    if (v28 > 0x0.0p+0f) {
    LABEL_58:
      v28 = 0x0.0p+0f;
    }
  }
LABEL_59:
  LANES128(a1[12]).n128_f32[0] = v28;
}

__attribute__((swiftcall)) void game_map_fe9ec0(PSEUDO_X8 x8_, __int64 a1)
{
  _BYTE* a2 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  int v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  bool v6;
  _BYTE* v7;
  float v8;
  unsigned int v9;
  int v10;
  int v11;
  float v12;
  char v13;
  float v14;
  unsigned int v15;
  __int128 v16;

  v2 = *(_DWORD*)(a1 + 112);
  if (v2 <= *(_DWORD*)(a1 + 116)) {
    v2 = *(_DWORD*)(a1 + 116);
  }
  if (v2 < 2) {
    if (GameData_21cd130 == 0) {
      goto LABEL_19;
    }
    LODWORD(v3) = *(_DWORD*)(*(_QWORD*)(GameData_21cd130 + 48) + 8LL) +
                  32 * *(_DWORD*)(*(_QWORD*)(GameData_21cd130 + 48) + 12LL);
    v3 = (unsigned int)v3 >= 0x400 ? 0LL : (unsigned int)v3;
    v4 = *(unsigned __int8*)(*(_QWORD*)(GameData_21ca300 + 96) + v3 + 8);
    if (v4 != 0 &&
        ((v5 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v4, v4 <= 0xFA)
             ? (v6 = v5 == 2224)
             : (v6 = true),
         !v6 && *(_QWORD*)(v5 - 1832) != 0 &&
             (*(_BYTE*)(v5 - 1807) & 0x1C) == 0 &&
             (v7 = a2,
              v8 = (*(float (**)(__int64))(*(_QWORD*)(v5 - 2072) + 16LL))(v5 -
                                                                          2072),
              a2 = v7, v8 > 0.0f) &&
             (int)(v9 = *(_DWORD*)(v5 - 1632)) >= 2)) {
      *((_WORD*)v7 + 1) = 0;
      *((_DWORD*)v7 + 1) = v9;
      *((_QWORD*)v7 + 4) = v5 - 2224;
      v10 = *(char*)(v5 - 1640);
      v11 = *(char*)(v5 - 1639);
      *v7 = *(_BYTE*)(v5 - 1640);
      v7[1] = v11;
      v12 = (float)v9;
      v13 = 1;
      v14 = v12 * 2.5f;
      *(float*)&v15 = v14 + (float)((float)v11 * 5.0f);
      DWORD1(v16) = 0;
      *(float*)&v16 = v14 + (float)((float)v10 * 5.0f);
      *((_QWORD*)&v16 + 1) = v15;
      *((_OWORD*)v7 + 1) = v16;
    }
    else {
    LABEL_19:
      v13 = 0;
      *a2 = 0;
    }
    a2[48] = v13;
  }
  else {
    *a2 = 0;
    a2[48] = 0;
  }
}

void game_map_100bdf0(__int64 a1, const char* a2, unsigned __int64 a3)
{
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  struct {
    __int64 v23;
    __int64 v24;
    __int64 v25;
    _QWORD* v26;
  } v23_;
  struct {
    _QWORD v27[2];
    __int64 v28;
    __int64 v29;
    _QWORD* v30;
  } v27_;
  _QWORD* v31;

  v6 = strlen_alt1(a2);
  v27_.v30 = nullptr;
  g3d_ada070((void*)((__int64*)&v31), (__int64)a2, v6, (__int64)v27_.v27);
  if (v27_.v30 == v27_.v27) {
    v7 = 32;
  }
  else {
    if (v27_.v30 == nullptr) {
      goto LABEL_6;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v27_.v30 + v7))((__int64)v27_.v30);
LABEL_6:
  v23_.v25 = 0;
  v23_.v26 = nullptr;
  v23_.v23 = 0;
  v23_.v24 = 0;
  GameRoutine_60a060((char*)&v23_.v23, (__int64)a2, a3);
  v8 = (__int64)v31;
  v31 = nullptr;
  v9 = v23_.v26;
  v23_.v26 = (_QWORD*)v8;
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v9 != nullptr) {
    GameHr_ad69c0(v9);
    v11 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v11, (__int64)v9);
    v8 = (__int64)v23_.v26;
  }
  v12 = v23_.v23;
  v13 = v23_.v24;
  v23_.v23 = 0;
  v23_.v24 = 0;
  v27_.v27[0] = v12;
  v27_.v27[1] = v13;
  v14 = v23_.v25;
  v23_.v25 = 0;
  v27_.v28 = v14;
  v27_.v29 = v8;
  if (v8 != 0) {
    v15 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v10, 32, 16, 0);
    v15[2] = 0;
    v15[3] = v8;
    *v15 = &GameData_1fd1588;
    v15[1] = 0;
  }
  else {
    v15 = nullptr;
  }
  v27_.v30 = v15;
  v23_.v26 = nullptr;
  GameRoutine_f0af90_alt1((__int64*)(a1 + 88), v27_.v27);
  v16 = (__int64)v27_.v30;
  if (v27_.v30 != nullptr &&
      atomic_fetch_add((atomic_ullong* volatile)(v27_.v30 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt2(v16);
    if ((v27_.v27[0] & 1) == 0) {
      goto LABEL_21;
    }
  }
  else if ((v27_.v27[0] & 1) == 0) {
    goto LABEL_21;
  }
  if (v27_.v28 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v17, v27_.v28);
  }
LABEL_21:
  v18 = v23_.v26;
  v23_.v26 = nullptr;
  if (v18 != nullptr) {
    GameHr_ad69c0(v18);
    v19 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v19, (__int64)v18);
  }
  if ((v23_.v23 & 1) != 0 && v23_.v25 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v20, v23_.v25);
  }
  v21 = v31;
  v31 = nullptr;
  if (v21 != nullptr) {
    GameHr_ad69c0(v21);
    v22 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v10 + v22, (__int64)v21);
  }
}

__int64* game_map_100c050(__int64* result)
{
  __int64* v1;
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
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;

  if ((result[2] & 1) == 0) {
    v1 = result;
    v2 = (__int64*)fw_memory_g_heap_manager_ptr;
    v3 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
    *(_QWORD*)(v3 + 8) = 0;
    *(_QWORD*)(v3 + 16) = 0;
    *(_QWORD*)(v3 + 32) = 0;
    *(_QWORD*)(v3 + 40) = 0;
    *(_QWORD*)(v3 + 24) = v1;
    *(_QWORD*)(v3 + 48) = 0;
    *(_QWORD*)(v3 + 56) = 0;
    *(_QWORD*)v3 = GameData_20015c8;
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 296, 16, 0);
    *(_QWORD*)(v4 + 16) = 0;
    v5 = GameData_2131678;
    *(_DWORD*)(v4 + 32) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_DWORD*)(v4 + 48) = 0x2000;
    v6 = v5 + 16;
    *(_QWORD*)(v4 + 24) = 0;
    *(_DWORD*)(v4 + 104) = 0;
    *(_WORD*)(v4 + 108) = 256;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_WORD*)(v4 + 80) = 0;
    *(_DWORD*)(v4 + 112) = -1082130432;
    *(_WORD*)(v4 + 116) = 0;
    *(_WORD*)(v4 + 136) = 0;
    *(_BYTE*)(v4 + 160) = 0;
    *(_BYTE*)(v4 + 288) = 0;
    *(_QWORD*)(v4 + 272) = 0;
    *(_QWORD*)(v4 + 280) = 0;
    *(_QWORD*)(v4 + 256) = 0;
    *(_QWORD*)(v4 + 264) = 0;
    *(_QWORD*)(v4 + 240) = 0;
    *(_QWORD*)(v4 + 248) = 0;
    *(_QWORD*)(v4 + 224) = 0;
    *(_QWORD*)(v4 + 232) = 0;
    *(_QWORD*)(v4 + 208) = 0;
    *(_QWORD*)(v4 + 216) = 0;
    *(_QWORD*)(v4 + 192) = 0;
    *(_QWORD*)(v4 + 200) = 0;
    *(_QWORD*)(v4 + 176) = 0;
    *(_QWORD*)(v4 + 184) = 0;
    *(_QWORD*)(v4 + 168) = 0;
    *(_QWORD*)(v4 + 120) = 0;
    *(_DWORD*)(v4 + 127) = 0;
    *(_DWORD*)(v4 + 292) = 2;
    *(_QWORD*)(v3 + 80) = 0;
    *(_QWORD*)(v3 + 64) = v4 + 24;
    *(_QWORD*)(v3 + 72) = v4;
    v7 = *v2;
    *(_QWORD*)v4 = v6;
    *(_QWORD*)(v4 + 8) = 0;
    v8 = fw_memory_HeapManager_Allocate_alt1(v7, 296, 16, 0);
    *(_QWORD*)(v8 + 24) = 0;
    *(_QWORD*)(v8 + 8) = 0;
    *(_QWORD*)(v8 + 16) = 0;
    *(_QWORD*)v8 = v6;
    *(_DWORD*)(v8 + 32) = 0;
    *(_QWORD*)(v8 + 40) = 0;
    *(_DWORD*)(v8 + 48) = 0x2000;
    *(_DWORD*)(v8 + 104) = 0;
    *(_QWORD*)(v3 + 88) = v8 + 24;
    *(_QWORD*)(v3 + 96) = v8;
    v9 = *v2;
    *(_WORD*)(v8 + 108) = 256;
    *(_QWORD*)(v8 + 56) = 0;
    *(_QWORD*)(v8 + 64) = 0;
    *(_QWORD*)(v8 + 72) = 0;
    *(_WORD*)(v8 + 80) = 0;
    *(_DWORD*)(v8 + 112) = -1082130432;
    *(_WORD*)(v8 + 116) = 0;
    *(_WORD*)(v8 + 136) = 0;
    *(_BYTE*)(v8 + 160) = 0;
    *(_BYTE*)(v8 + 288) = 0;
    *(_QWORD*)(v8 + 272) = 0;
    *(_QWORD*)(v8 + 280) = 0;
    *(_QWORD*)(v8 + 256) = 0;
    *(_QWORD*)(v8 + 264) = 0;
    *(_QWORD*)(v8 + 240) = 0;
    *(_QWORD*)(v8 + 248) = 0;
    *(_QWORD*)(v8 + 224) = 0;
    *(_QWORD*)(v8 + 232) = 0;
    *(_QWORD*)(v8 + 208) = 0;
    *(_QWORD*)(v8 + 216) = 0;
    *(_QWORD*)(v8 + 192) = 0;
    *(_QWORD*)(v8 + 200) = 0;
    *(_QWORD*)(v8 + 176) = 0;
    *(_QWORD*)(v8 + 184) = 0;
    *(_QWORD*)(v8 + 168) = 0;
    *(_QWORD*)(v8 + 120) = 0;
    *(_DWORD*)(v8 + 127) = 0;
    *(_DWORD*)(v8 + 292) = 2;
    *(_QWORD*)(v3 + 104) = 0;
    v10 = fw_memory_HeapManager_Allocate_alt1(v9, 296, 16, 0);
    *(_QWORD*)(v10 + 24) = 0;
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    *(_QWORD*)v10 = v6;
    *(_DWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 40) = 0;
    *(_DWORD*)(v10 + 48) = 0x2000;
    *(_DWORD*)(v10 + 104) = 0;
    *(_QWORD*)(v3 + 112) = v10 + 24;
    *(_QWORD*)(v3 + 120) = v10;
    v11 = *v2;
    *(_WORD*)(v10 + 108) = 256;
    *(_QWORD*)(v10 + 56) = 0;
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 0;
    *(_WORD*)(v10 + 80) = 0;
    *(_DWORD*)(v10 + 112) = -1082130432;
    *(_WORD*)(v10 + 116) = 0;
    *(_WORD*)(v10 + 136) = 0;
    *(_BYTE*)(v10 + 160) = 0;
    *(_BYTE*)(v10 + 288) = 0;
    *(_QWORD*)(v10 + 272) = 0;
    *(_QWORD*)(v10 + 280) = 0;
    *(_QWORD*)(v10 + 256) = 0;
    *(_QWORD*)(v10 + 264) = 0;
    *(_QWORD*)(v10 + 240) = 0;
    *(_QWORD*)(v10 + 248) = 0;
    *(_QWORD*)(v10 + 224) = 0;
    *(_QWORD*)(v10 + 232) = 0;
    *(_QWORD*)(v10 + 208) = 0;
    *(_QWORD*)(v10 + 216) = 0;
    *(_QWORD*)(v10 + 192) = 0;
    *(_QWORD*)(v10 + 200) = 0;
    *(_QWORD*)(v10 + 176) = 0;
    *(_QWORD*)(v10 + 184) = 0;
    *(_QWORD*)(v10 + 168) = 0;
    *(_QWORD*)(v10 + 120) = 0;
    *(_DWORD*)(v10 + 127) = 0;
    *(_DWORD*)(v10 + 292) = 2;
    *(_QWORD*)(v3 + 128) = 0;
    v12 = fw_memory_HeapManager_Allocate_alt1(v11, 296, 16, 0);
    *(_QWORD*)(v12 + 24) = 0;
    *(_QWORD*)(v12 + 8) = 0;
    *(_QWORD*)(v12 + 16) = 0;
    *(_QWORD*)v12 = v6;
    *(_DWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_DWORD*)(v12 + 48) = 0x2000;
    *(_DWORD*)(v12 + 104) = 0;
    *(_QWORD*)(v3 + 136) = v12 + 24;
    *(_QWORD*)(v3 + 144) = v12;
    v13 = *v2;
    *(_WORD*)(v12 + 108) = 256;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_WORD*)(v12 + 80) = 0;
    *(_DWORD*)(v12 + 112) = -1082130432;
    *(_WORD*)(v12 + 116) = 0;
    *(_WORD*)(v12 + 136) = 0;
    *(_BYTE*)(v12 + 160) = 0;
    *(_BYTE*)(v12 + 288) = 0;
    *(_QWORD*)(v12 + 272) = 0;
    *(_QWORD*)(v12 + 280) = 0;
    *(_QWORD*)(v12 + 256) = 0;
    *(_QWORD*)(v12 + 264) = 0;
    *(_QWORD*)(v12 + 240) = 0;
    *(_QWORD*)(v12 + 248) = 0;
    *(_QWORD*)(v12 + 224) = 0;
    *(_QWORD*)(v12 + 232) = 0;
    *(_QWORD*)(v12 + 208) = 0;
    *(_QWORD*)(v12 + 216) = 0;
    *(_QWORD*)(v12 + 192) = 0;
    *(_QWORD*)(v12 + 200) = 0;
    *(_QWORD*)(v12 + 176) = 0;
    *(_QWORD*)(v12 + 184) = 0;
    *(_QWORD*)(v12 + 168) = 0;
    *(_QWORD*)(v12 + 120) = 0;
    *(_DWORD*)(v12 + 127) = 0;
    *(_DWORD*)(v12 + 292) = 2;
    *(_QWORD*)(v3 + 152) = 0;
    v14 = fw_memory_HeapManager_Allocate_alt1(v13, 296, 16, 0);
    v15 = v1[4];
    *(_QWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)v14 = v6;
    *(_DWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_DWORD*)(v14 + 48) = 0x2000;
    *(_DWORD*)(v14 + 104) = 0;
    *(_WORD*)(v14 + 108) = 256;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 0;
    *(_DWORD*)(v14 + 112) = -1082130432;
    *(_WORD*)(v14 + 116) = 0;
    *(_WORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 160) = 0;
    *(_BYTE*)(v14 + 288) = 0;
    *(_QWORD*)(v14 + 272) = 0;
    *(_QWORD*)(v14 + 280) = 0;
    *(_QWORD*)(v14 + 256) = 0;
    *(_QWORD*)(v14 + 264) = 0;
    *(_QWORD*)(v14 + 240) = 0;
    *(_QWORD*)(v14 + 248) = 0;
    *(_QWORD*)(v14 + 224) = 0;
    *(_QWORD*)(v14 + 232) = 0;
    *(_QWORD*)(v14 + 208) = 0;
    *(_QWORD*)(v14 + 216) = 0;
    *(_QWORD*)(v14 + 192) = 0;
    *(_QWORD*)(v14 + 200) = 0;
    *(_QWORD*)(v14 + 176) = 0;
    *(_QWORD*)(v14 + 184) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_DWORD*)(v14 + 127) = 0;
    *(_DWORD*)(v14 + 292) = 2;
    *(_QWORD*)(v3 + 168) = v14;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v3 + 160) = v14 + 24;
    *(_DWORD*)(v3 + 176) = 0;
    *(_QWORD*)(v3 + 184) = 0;
    *(_QWORD*)(v3 + 192) = 0;
    *(_QWORD*)(v3 + 200) = 0;
    v1[3] = v3 + 24;
    v1[4] = v3;
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak(v15);
    }
    v16 = fw_memory_HeapManager_Allocate_alt1(*v2, 208, 16, 0);
    *(_QWORD*)(v16 + 8) = 0;
    *(_QWORD*)(v16 + 16) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_QWORD*)(v16 + 40) = 0;
    *(_QWORD*)(v16 + 24) = v1;
    *(_QWORD*)(v16 + 48) = 0;
    *(_QWORD*)(v16 + 56) = 0;
    *(_QWORD*)v16 = GameData_20015c8;
    v17 = fw_memory_HeapManager_Allocate_alt1(*v2, 296, 16, 0);
    *(_QWORD*)(v17 + 24) = 0;
    *(_QWORD*)(v17 + 8) = 0;
    *(_QWORD*)(v17 + 16) = 0;
    *(_QWORD*)v17 = v6;
    *(_DWORD*)(v17 + 32) = 0;
    *(_QWORD*)(v17 + 40) = 0;
    *(_DWORD*)(v17 + 48) = 0x2000;
    *(_DWORD*)(v17 + 104) = 0;
    *(_QWORD*)(v16 + 64) = v17 + 24;
    *(_QWORD*)(v16 + 72) = v17;
    v18 = *v2;
    *(_WORD*)(v17 + 108) = 256;
    *(_QWORD*)(v17 + 56) = 0;
    *(_QWORD*)(v17 + 64) = 0;
    *(_QWORD*)(v17 + 72) = 0;
    *(_WORD*)(v17 + 80) = 0;
    *(_DWORD*)(v17 + 112) = -1082130432;
    *(_WORD*)(v17 + 116) = 0;
    *(_WORD*)(v17 + 136) = 0;
    *(_BYTE*)(v17 + 160) = 0;
    *(_BYTE*)(v17 + 288) = 0;
    *(_QWORD*)(v17 + 272) = 0;
    *(_QWORD*)(v17 + 280) = 0;
    *(_QWORD*)(v17 + 256) = 0;
    *(_QWORD*)(v17 + 264) = 0;
    *(_QWORD*)(v17 + 240) = 0;
    *(_QWORD*)(v17 + 248) = 0;
    *(_QWORD*)(v17 + 224) = 0;
    *(_QWORD*)(v17 + 232) = 0;
    *(_QWORD*)(v17 + 208) = 0;
    *(_QWORD*)(v17 + 216) = 0;
    *(_QWORD*)(v17 + 192) = 0;
    *(_QWORD*)(v17 + 200) = 0;
    *(_QWORD*)(v17 + 176) = 0;
    *(_QWORD*)(v17 + 184) = 0;
    *(_QWORD*)(v17 + 168) = 0;
    *(_QWORD*)(v17 + 120) = 0;
    *(_DWORD*)(v17 + 127) = 0;
    *(_DWORD*)(v17 + 292) = 2;
    *(_QWORD*)(v16 + 80) = 0;
    v19 = fw_memory_HeapManager_Allocate_alt1(v18, 296, 16, 0);
    *(_QWORD*)(v19 + 24) = 0;
    *(_QWORD*)(v19 + 8) = 0;
    *(_QWORD*)(v19 + 16) = 0;
    *(_QWORD*)v19 = v6;
    *(_DWORD*)(v19 + 32) = 0;
    *(_QWORD*)(v19 + 40) = 0;
    *(_DWORD*)(v19 + 48) = 0x2000;
    *(_DWORD*)(v19 + 104) = 0;
    *(_QWORD*)(v16 + 88) = v19 + 24;
    *(_QWORD*)(v16 + 96) = v19;
    v20 = *v2;
    *(_WORD*)(v19 + 108) = 256;
    *(_QWORD*)(v19 + 56) = 0;
    *(_QWORD*)(v19 + 64) = 0;
    *(_QWORD*)(v19 + 72) = 0;
    *(_WORD*)(v19 + 80) = 0;
    *(_DWORD*)(v19 + 112) = -1082130432;
    *(_WORD*)(v19 + 116) = 0;
    *(_WORD*)(v19 + 136) = 0;
    *(_BYTE*)(v19 + 160) = 0;
    *(_BYTE*)(v19 + 288) = 0;
    *(_QWORD*)(v19 + 272) = 0;
    *(_QWORD*)(v19 + 280) = 0;
    *(_QWORD*)(v19 + 256) = 0;
    *(_QWORD*)(v19 + 264) = 0;
    *(_QWORD*)(v19 + 240) = 0;
    *(_QWORD*)(v19 + 248) = 0;
    *(_QWORD*)(v19 + 224) = 0;
    *(_QWORD*)(v19 + 232) = 0;
    *(_QWORD*)(v19 + 208) = 0;
    *(_QWORD*)(v19 + 216) = 0;
    *(_QWORD*)(v19 + 192) = 0;
    *(_QWORD*)(v19 + 200) = 0;
    *(_QWORD*)(v19 + 176) = 0;
    *(_QWORD*)(v19 + 184) = 0;
    *(_QWORD*)(v19 + 168) = 0;
    *(_QWORD*)(v19 + 120) = 0;
    *(_DWORD*)(v19 + 127) = 0;
    *(_DWORD*)(v19 + 292) = 2;
    *(_QWORD*)(v16 + 104) = 0;
    v21 = fw_memory_HeapManager_Allocate_alt1(v20, 296, 16, 0);
    *(_QWORD*)(v21 + 24) = 0;
    *(_QWORD*)(v21 + 8) = 0;
    *(_QWORD*)(v21 + 16) = 0;
    *(_QWORD*)v21 = v6;
    *(_DWORD*)(v21 + 32) = 0;
    *(_QWORD*)(v21 + 40) = 0;
    *(_DWORD*)(v21 + 48) = 0x2000;
    *(_DWORD*)(v21 + 104) = 0;
    *(_QWORD*)(v16 + 112) = v21 + 24;
    *(_QWORD*)(v16 + 120) = v21;
    v22 = *v2;
    *(_WORD*)(v21 + 108) = 256;
    *(_QWORD*)(v21 + 56) = 0;
    *(_QWORD*)(v21 + 64) = 0;
    *(_QWORD*)(v21 + 72) = 0;
    *(_WORD*)(v21 + 80) = 0;
    *(_DWORD*)(v21 + 112) = -1082130432;
    *(_WORD*)(v21 + 116) = 0;
    *(_WORD*)(v21 + 136) = 0;
    *(_BYTE*)(v21 + 160) = 0;
    *(_BYTE*)(v21 + 288) = 0;
    *(_QWORD*)(v21 + 272) = 0;
    *(_QWORD*)(v21 + 280) = 0;
    *(_QWORD*)(v21 + 256) = 0;
    *(_QWORD*)(v21 + 264) = 0;
    *(_QWORD*)(v21 + 240) = 0;
    *(_QWORD*)(v21 + 248) = 0;
    *(_QWORD*)(v21 + 224) = 0;
    *(_QWORD*)(v21 + 232) = 0;
    *(_QWORD*)(v21 + 208) = 0;
    *(_QWORD*)(v21 + 216) = 0;
    *(_QWORD*)(v21 + 192) = 0;
    *(_QWORD*)(v21 + 200) = 0;
    *(_QWORD*)(v21 + 176) = 0;
    *(_QWORD*)(v21 + 184) = 0;
    *(_QWORD*)(v21 + 168) = 0;
    *(_QWORD*)(v21 + 120) = 0;
    *(_DWORD*)(v21 + 127) = 0;
    *(_DWORD*)(v21 + 292) = 2;
    *(_QWORD*)(v16 + 128) = 0;
    v23 = fw_memory_HeapManager_Allocate_alt1(v22, 296, 16, 0);
    *(_QWORD*)(v23 + 24) = 0;
    *(_QWORD*)(v23 + 8) = 0;
    *(_QWORD*)(v23 + 16) = 0;
    *(_QWORD*)v23 = v6;
    *(_DWORD*)(v23 + 32) = 0;
    *(_QWORD*)(v23 + 40) = 0;
    *(_DWORD*)(v23 + 48) = 0x2000;
    *(_DWORD*)(v23 + 104) = 0;
    *(_QWORD*)(v16 + 136) = v23 + 24;
    *(_QWORD*)(v16 + 144) = v23;
    v24 = *v2;
    *(_WORD*)(v23 + 108) = 256;
    *(_QWORD*)(v23 + 56) = 0;
    *(_QWORD*)(v23 + 64) = 0;
    *(_QWORD*)(v23 + 72) = 0;
    *(_WORD*)(v23 + 80) = 0;
    *(_DWORD*)(v23 + 112) = -1082130432;
    *(_WORD*)(v23 + 116) = 0;
    *(_WORD*)(v23 + 136) = 0;
    *(_BYTE*)(v23 + 160) = 0;
    *(_BYTE*)(v23 + 288) = 0;
    *(_QWORD*)(v23 + 272) = 0;
    *(_QWORD*)(v23 + 280) = 0;
    *(_QWORD*)(v23 + 256) = 0;
    *(_QWORD*)(v23 + 264) = 0;
    *(_QWORD*)(v23 + 240) = 0;
    *(_QWORD*)(v23 + 248) = 0;
    *(_QWORD*)(v23 + 224) = 0;
    *(_QWORD*)(v23 + 232) = 0;
    *(_QWORD*)(v23 + 208) = 0;
    *(_QWORD*)(v23 + 216) = 0;
    *(_QWORD*)(v23 + 192) = 0;
    *(_QWORD*)(v23 + 200) = 0;
    *(_QWORD*)(v23 + 176) = 0;
    *(_QWORD*)(v23 + 184) = 0;
    *(_QWORD*)(v23 + 168) = 0;
    *(_QWORD*)(v23 + 120) = 0;
    *(_DWORD*)(v23 + 127) = 0;
    *(_DWORD*)(v23 + 292) = 2;
    *(_QWORD*)(v16 + 152) = 0;
    v25 = fw_memory_HeapManager_Allocate_alt1(v24, 296, 16, 0);
    v26 = v1[6];
    *(_QWORD*)(v25 + 8) = 0;
    *(_QWORD*)(v25 + 16) = 0;
    *(_QWORD*)v25 = v6;
    *(_DWORD*)(v25 + 32) = 0;
    *(_QWORD*)(v25 + 40) = 0;
    *(_DWORD*)(v25 + 48) = 0x2000;
    *(_DWORD*)(v25 + 104) = 0;
    *(_WORD*)(v25 + 108) = 256;
    *(_QWORD*)(v25 + 56) = 0;
    *(_QWORD*)(v25 + 64) = 0;
    *(_QWORD*)(v25 + 72) = 0;
    *(_WORD*)(v25 + 80) = 0;
    *(_DWORD*)(v25 + 112) = -1082130432;
    *(_WORD*)(v25 + 116) = 0;
    *(_WORD*)(v25 + 136) = 0;
    *(_BYTE*)(v25 + 160) = 0;
    *(_BYTE*)(v25 + 288) = 0;
    *(_QWORD*)(v25 + 272) = 0;
    *(_QWORD*)(v25 + 280) = 0;
    *(_QWORD*)(v25 + 256) = 0;
    *(_QWORD*)(v25 + 264) = 0;
    *(_QWORD*)(v25 + 240) = 0;
    *(_QWORD*)(v25 + 248) = 0;
    *(_QWORD*)(v25 + 224) = 0;
    *(_QWORD*)(v25 + 232) = 0;
    *(_QWORD*)(v25 + 208) = 0;
    *(_QWORD*)(v25 + 216) = 0;
    *(_QWORD*)(v25 + 192) = 0;
    *(_QWORD*)(v25 + 200) = 0;
    *(_QWORD*)(v25 + 176) = 0;
    *(_QWORD*)(v25 + 184) = 0;
    *(_QWORD*)(v25 + 168) = 0;
    *(_QWORD*)(v25 + 120) = 0;
    *(_DWORD*)(v25 + 127) = 0;
    *(_DWORD*)(v25 + 292) = 2;
    *(_QWORD*)(v16 + 168) = v25;
    *(_QWORD*)(v25 + 24) = 0;
    *(_QWORD*)(v16 + 160) = v25 + 24;
    *(_DWORD*)(v16 + 176) = 0;
    *(_QWORD*)(v16 + 184) = 0;
    *(_QWORD*)(v16 + 192) = 0;
    *(_QWORD*)(v16 + 200) = 0;
    v1[5] = v16 + 24;
    v1[6] = v16;
    if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak(v26);
    }
    v27 = fw_memory_HeapManager_Allocate_alt1(*v2, 208, 16, 0);
    *(_QWORD*)(v27 + 8) = 0;
    *(_QWORD*)(v27 + 16) = 0;
    *(_QWORD*)(v27 + 32) = 0;
    *(_QWORD*)(v27 + 40) = 0;
    *(_QWORD*)(v27 + 24) = v1;
    *(_QWORD*)(v27 + 48) = 0;
    *(_QWORD*)(v27 + 56) = 0;
    *(_QWORD*)v27 = GameData_20015c8;
    v28 = fw_memory_HeapManager_Allocate_alt1(*v2, 296, 16, 0);
    v29 = GameData_2131678;
    *(_QWORD*)(v28 + 8) = 0;
    *(_QWORD*)(v28 + 16) = 0;
    *(_DWORD*)(v28 + 32) = 0;
    *(_QWORD*)(v28 + 40) = 0;
    *(_DWORD*)(v28 + 48) = 0x2000;
    v30 = v29 + 16;
    *(_QWORD*)(v28 + 24) = 0;
    *(_DWORD*)(v28 + 104) = 0;
    *(_WORD*)(v28 + 108) = 256;
    *(_QWORD*)(v28 + 56) = 0;
    *(_QWORD*)(v28 + 64) = 0;
    *(_QWORD*)(v28 + 72) = 0;
    *(_WORD*)(v28 + 80) = 0;
    *(_DWORD*)(v28 + 112) = -1082130432;
    *(_WORD*)(v28 + 116) = 0;
    *(_WORD*)(v28 + 136) = 0;
    *(_BYTE*)(v28 + 160) = 0;
    *(_BYTE*)(v28 + 288) = 0;
    *(_QWORD*)(v28 + 272) = 0;
    *(_QWORD*)(v28 + 280) = 0;
    *(_QWORD*)(v28 + 256) = 0;
    *(_QWORD*)(v28 + 264) = 0;
    *(_QWORD*)(v28 + 240) = 0;
    *(_QWORD*)(v28 + 248) = 0;
    *(_QWORD*)(v28 + 224) = 0;
    *(_QWORD*)(v28 + 232) = 0;
    *(_QWORD*)(v28 + 208) = 0;
    *(_QWORD*)(v28 + 216) = 0;
    *(_QWORD*)(v28 + 192) = 0;
    *(_QWORD*)(v28 + 200) = 0;
    *(_QWORD*)(v28 + 176) = 0;
    *(_QWORD*)(v28 + 184) = 0;
    *(_QWORD*)(v28 + 168) = 0;
    *(_QWORD*)(v28 + 120) = 0;
    *(_DWORD*)(v28 + 127) = 0;
    *(_DWORD*)(v28 + 292) = 2;
    *(_QWORD*)(v27 + 80) = 0;
    *(_QWORD*)(v27 + 64) = v28 + 24;
    *(_QWORD*)(v27 + 72) = v28;
    v31 = *v2;
    *(_QWORD*)v28 = v30;
    v32 = fw_memory_HeapManager_Allocate_alt1(v31, 296, 16, 0);
    *(_QWORD*)(v32 + 24) = 0;
    *(_QWORD*)(v32 + 8) = 0;
    *(_QWORD*)(v32 + 16) = 0;
    *(_QWORD*)v32 = v30;
    *(_DWORD*)(v32 + 32) = 0;
    *(_QWORD*)(v32 + 40) = 0;
    *(_DWORD*)(v32 + 48) = 0x2000;
    *(_DWORD*)(v32 + 104) = 0;
    *(_QWORD*)(v27 + 88) = v32 + 24;
    *(_QWORD*)(v27 + 96) = v32;
    v33 = *v2;
    *(_WORD*)(v32 + 108) = 256;
    *(_QWORD*)(v32 + 56) = 0;
    *(_QWORD*)(v32 + 64) = 0;
    *(_QWORD*)(v32 + 72) = 0;
    *(_WORD*)(v32 + 80) = 0;
    *(_DWORD*)(v32 + 112) = -1082130432;
    *(_WORD*)(v32 + 116) = 0;
    *(_WORD*)(v32 + 136) = 0;
    *(_BYTE*)(v32 + 160) = 0;
    *(_BYTE*)(v32 + 288) = 0;
    *(_QWORD*)(v32 + 272) = 0;
    *(_QWORD*)(v32 + 280) = 0;
    *(_QWORD*)(v32 + 256) = 0;
    *(_QWORD*)(v32 + 264) = 0;
    *(_QWORD*)(v32 + 240) = 0;
    *(_QWORD*)(v32 + 248) = 0;
    *(_QWORD*)(v32 + 224) = 0;
    *(_QWORD*)(v32 + 232) = 0;
    *(_QWORD*)(v32 + 208) = 0;
    *(_QWORD*)(v32 + 216) = 0;
    *(_QWORD*)(v32 + 192) = 0;
    *(_QWORD*)(v32 + 200) = 0;
    *(_QWORD*)(v32 + 176) = 0;
    *(_QWORD*)(v32 + 184) = 0;
    *(_QWORD*)(v32 + 168) = 0;
    *(_QWORD*)(v32 + 120) = 0;
    *(_DWORD*)(v32 + 127) = 0;
    *(_DWORD*)(v32 + 292) = 2;
    *(_QWORD*)(v27 + 104) = 0;
    v34 = fw_memory_HeapManager_Allocate_alt1(v33, 296, 16, 0);
    *(_QWORD*)(v34 + 24) = 0;
    *(_QWORD*)(v34 + 8) = 0;
    *(_QWORD*)(v34 + 16) = 0;
    *(_QWORD*)v34 = v30;
    *(_DWORD*)(v34 + 32) = 0;
    *(_QWORD*)(v34 + 40) = 0;
    *(_DWORD*)(v34 + 48) = 0x2000;
    *(_DWORD*)(v34 + 104) = 0;
    *(_QWORD*)(v27 + 112) = v34 + 24;
    *(_QWORD*)(v27 + 120) = v34;
    v35 = *v2;
    *(_WORD*)(v34 + 108) = 256;
    *(_QWORD*)(v34 + 56) = 0;
    *(_QWORD*)(v34 + 64) = 0;
    *(_QWORD*)(v34 + 72) = 0;
    *(_WORD*)(v34 + 80) = 0;
    *(_DWORD*)(v34 + 112) = -1082130432;
    *(_WORD*)(v34 + 116) = 0;
    *(_WORD*)(v34 + 136) = 0;
    *(_BYTE*)(v34 + 160) = 0;
    *(_BYTE*)(v34 + 288) = 0;
    *(_QWORD*)(v34 + 272) = 0;
    *(_QWORD*)(v34 + 280) = 0;
    *(_QWORD*)(v34 + 256) = 0;
    *(_QWORD*)(v34 + 264) = 0;
    *(_QWORD*)(v34 + 240) = 0;
    *(_QWORD*)(v34 + 248) = 0;
    *(_QWORD*)(v34 + 224) = 0;
    *(_QWORD*)(v34 + 232) = 0;
    *(_QWORD*)(v34 + 208) = 0;
    *(_QWORD*)(v34 + 216) = 0;
    *(_QWORD*)(v34 + 192) = 0;
    *(_QWORD*)(v34 + 200) = 0;
    *(_QWORD*)(v34 + 176) = 0;
    *(_QWORD*)(v34 + 184) = 0;
    *(_QWORD*)(v34 + 168) = 0;
    *(_QWORD*)(v34 + 120) = 0;
    *(_DWORD*)(v34 + 127) = 0;
    *(_DWORD*)(v34 + 292) = 2;
    *(_QWORD*)(v27 + 128) = 0;
    v36 = fw_memory_HeapManager_Allocate_alt1(v35, 296, 16, 0);
    *(_QWORD*)(v36 + 24) = 0;
    *(_QWORD*)(v36 + 8) = 0;
    *(_QWORD*)(v36 + 16) = 0;
    *(_QWORD*)v36 = v30;
    *(_DWORD*)(v36 + 32) = 0;
    *(_QWORD*)(v36 + 40) = 0;
    *(_DWORD*)(v36 + 48) = 0x2000;
    *(_DWORD*)(v36 + 104) = 0;
    *(_QWORD*)(v27 + 136) = v36 + 24;
    *(_QWORD*)(v27 + 144) = v36;
    v37 = *v2;
    *(_WORD*)(v36 + 108) = 256;
    *(_QWORD*)(v36 + 56) = 0;
    *(_QWORD*)(v36 + 64) = 0;
    *(_QWORD*)(v36 + 72) = 0;
    *(_WORD*)(v36 + 80) = 0;
    *(_DWORD*)(v36 + 112) = -1082130432;
    *(_WORD*)(v36 + 116) = 0;
    *(_WORD*)(v36 + 136) = 0;
    *(_BYTE*)(v36 + 160) = 0;
    *(_BYTE*)(v36 + 288) = 0;
    *(_QWORD*)(v36 + 272) = 0;
    *(_QWORD*)(v36 + 280) = 0;
    *(_QWORD*)(v36 + 256) = 0;
    *(_QWORD*)(v36 + 264) = 0;
    *(_QWORD*)(v36 + 240) = 0;
    *(_QWORD*)(v36 + 248) = 0;
    *(_QWORD*)(v36 + 224) = 0;
    *(_QWORD*)(v36 + 232) = 0;
    *(_QWORD*)(v36 + 208) = 0;
    *(_QWORD*)(v36 + 216) = 0;
    *(_QWORD*)(v36 + 192) = 0;
    *(_QWORD*)(v36 + 200) = 0;
    *(_QWORD*)(v36 + 176) = 0;
    *(_QWORD*)(v36 + 184) = 0;
    *(_QWORD*)(v36 + 168) = 0;
    *(_QWORD*)(v36 + 120) = 0;
    *(_DWORD*)(v36 + 127) = 0;
    *(_DWORD*)(v36 + 292) = 2;
    *(_QWORD*)(v27 + 152) = 0;
    v38 = fw_memory_HeapManager_Allocate_alt1(v37, 296, 16, 0);
    v39 = v1[8];
    *(_QWORD*)(v38 + 8) = 0;
    *(_QWORD*)(v38 + 16) = 0;
    *(_QWORD*)v38 = v30;
    *(_DWORD*)(v38 + 32) = 0;
    *(_QWORD*)(v38 + 40) = 0;
    *(_DWORD*)(v38 + 48) = 0x2000;
    *(_DWORD*)(v38 + 104) = 0;
    *(_WORD*)(v38 + 108) = 256;
    *(_QWORD*)(v38 + 56) = 0;
    *(_QWORD*)(v38 + 64) = 0;
    *(_QWORD*)(v38 + 72) = 0;
    *(_WORD*)(v38 + 80) = 0;
    *(_DWORD*)(v38 + 112) = -1082130432;
    *(_WORD*)(v38 + 116) = 0;
    *(_WORD*)(v38 + 136) = 0;
    *(_BYTE*)(v38 + 160) = 0;
    *(_BYTE*)(v38 + 288) = 0;
    *(_QWORD*)(v38 + 272) = 0;
    *(_QWORD*)(v38 + 280) = 0;
    *(_QWORD*)(v38 + 256) = 0;
    *(_QWORD*)(v38 + 264) = 0;
    *(_QWORD*)(v38 + 240) = 0;
    *(_QWORD*)(v38 + 248) = 0;
    *(_QWORD*)(v38 + 224) = 0;
    *(_QWORD*)(v38 + 232) = 0;
    *(_QWORD*)(v38 + 208) = 0;
    *(_QWORD*)(v38 + 216) = 0;
    *(_QWORD*)(v38 + 192) = 0;
    *(_QWORD*)(v38 + 200) = 0;
    *(_QWORD*)(v38 + 176) = 0;
    *(_QWORD*)(v38 + 184) = 0;
    *(_QWORD*)(v38 + 168) = 0;
    *(_QWORD*)(v38 + 120) = 0;
    *(_DWORD*)(v38 + 127) = 0;
    *(_DWORD*)(v38 + 292) = 2;
    *(_QWORD*)(v27 + 168) = v38;
    *(_QWORD*)(v38 + 24) = 0;
    *(_QWORD*)(v27 + 160) = v38 + 24;
    *(_DWORD*)(v27 + 176) = 0;
    *(_QWORD*)(v27 + 184) = 0;
    *(_QWORD*)(v27 + 192) = 0;
    *(_QWORD*)(v27 + 200) = 0;
    v1[7] = v27 + 24;
    v1[8] = v27;
    if (v39 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
      std___1___shared_weak_count___release_weak(v39);
    }
    v40 = fw_memory_HeapManager_Allocate_alt1(*v2, 72, 16, 0);
    *(_QWORD*)(v40 + 8) = 0;
    *(_QWORD*)(v40 + 16) = 0;
    *(_QWORD*)v40 = GameData_2001618;
    v41 = *v2;
    *(_QWORD*)(v40 + 24) = v1;
    v42 = fw_memory_HeapManager_Allocate_alt1(v41, 296, 16, 0);
    *(_QWORD*)(v42 + 8) = 0;
    *(_QWORD*)(v42 + 16) = 0;
    *(_QWORD*)v42 = v30;
    v43 = v42;
    *(_DWORD*)(v42 + 32) = 0;
    *(_QWORD*)(v42 + 40) = 0;
    *(_DWORD*)(v42 + 48) = 0x2000;
    *(_DWORD*)(v42 + 104) = 0;
    *(_WORD*)(v42 + 108) = 256;
    *(_QWORD*)(v42 + 56) = 0;
    *(_QWORD*)(v42 + 64) = 0;
    *(_QWORD*)(v42 + 72) = 0;
    *(_WORD*)(v42 + 80) = 0;
    *(_DWORD*)(v42 + 112) = -1082130432;
    *(_WORD*)(v42 + 116) = 0;
    *(_WORD*)(v42 + 136) = 0;
    *(_BYTE*)(v42 + 160) = 0;
    *(_BYTE*)(v42 + 288) = 0;
    *(_QWORD*)(v42 + 272) = 0;
    *(_QWORD*)(v42 + 280) = 0;
    *(_QWORD*)(v42 + 256) = 0;
    *(_QWORD*)(v42 + 264) = 0;
    *(_QWORD*)(v42 + 240) = 0;
    *(_QWORD*)(v42 + 248) = 0;
    *(_QWORD*)(v42 + 224) = 0;
    *(_QWORD*)(v42 + 232) = 0;
    *(_QWORD*)(v42 + 208) = 0;
    *(_QWORD*)(v42 + 216) = 0;
    *(_QWORD*)(v42 + 192) = 0;
    *(_QWORD*)(v42 + 200) = 0;
    *(_QWORD*)(v42 + 176) = 0;
    *(_QWORD*)(v42 + 184) = 0;
    *(_QWORD*)(v42 + 168) = 0;
    *(_QWORD*)(v42 + 120) = 0;
    *(_DWORD*)(v42 + 127) = 0;
    *(_DWORD*)(v42 + 292) = 2;
    *(_QWORD*)(v40 + 40) = v42;
    v44 = *v2;
    *(_QWORD*)(v43 + 24) = 0;
    *(_QWORD*)(v40 + 32) = v43 + 24;
    v45 = fw_memory_HeapManager_Allocate_alt1(v44, 296, 16, 0);
    v46 = v1[10];
    *(_QWORD*)(v45 + 8) = 0;
    *(_QWORD*)(v45 + 16) = 0;
    *(_QWORD*)v45 = v30;
    *(_DWORD*)(v45 + 32) = 0;
    *(_QWORD*)(v45 + 40) = 0;
    *(_DWORD*)(v45 + 48) = 0x2000;
    *(_DWORD*)(v45 + 104) = 0;
    *(_WORD*)(v45 + 108) = 256;
    *(_QWORD*)(v45 + 56) = 0;
    *(_QWORD*)(v45 + 64) = 0;
    *(_QWORD*)(v45 + 72) = 0;
    *(_WORD*)(v45 + 80) = 0;
    *(_DWORD*)(v45 + 112) = -1082130432;
    *(_WORD*)(v45 + 116) = 0;
    *(_WORD*)(v45 + 136) = 0;
    *(_BYTE*)(v45 + 160) = 0;
    *(_BYTE*)(v45 + 288) = 0;
    *(_QWORD*)(v45 + 272) = 0;
    *(_QWORD*)(v45 + 280) = 0;
    *(_QWORD*)(v45 + 256) = 0;
    *(_QWORD*)(v45 + 264) = 0;
    *(_QWORD*)(v45 + 240) = 0;
    *(_QWORD*)(v45 + 248) = 0;
    *(_QWORD*)(v45 + 224) = 0;
    *(_QWORD*)(v45 + 232) = 0;
    *(_QWORD*)(v45 + 208) = 0;
    *(_QWORD*)(v45 + 216) = 0;
    *(_QWORD*)(v45 + 192) = 0;
    *(_QWORD*)(v45 + 200) = 0;
    *(_QWORD*)(v45 + 176) = 0;
    *(_QWORD*)(v45 + 184) = 0;
    *(_QWORD*)(v45 + 168) = 0;
    *(_QWORD*)(v45 + 120) = 0;
    *(_DWORD*)(v45 + 127) = 0;
    *(_DWORD*)(v45 + 292) = 2;
    *(_QWORD*)(v40 + 56) = v45;
    *(_QWORD*)(v45 + 24) = 0;
    *(_QWORD*)(v40 + 48) = v45 + 24;
    *(_WORD*)(v40 + 64) = 0;
    v1[9] = v40 + 24;
    v1[10] = v40;
    if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
      std___1___shared_weak_count___release_weak(v46);
    }
    GameRoutine_100cc60((__int64*)v1[3], 0);
    GameRoutine_100cc60((__int64*)v1[5], 1u);
    result = GameRoutine_100cc60((__int64*)v1[7], 2u);
    *((_BYTE*)v1 + 16) = 1;
  }
  return result;
}

__int64 game_map_1048e00(unsigned int* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int16 v13;
  int v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  int v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  unsigned __int8 v68;
  __int64 v69;
  __int64 v70;
  char v72;
  struct {
    _BYTE v73[24];
    __int64 v74;
    char v75;
    char gap49_[7];
    __int64 v76;
    __int64 v77;
    __int64 v78;
    char v79;
    char gap81_[3];
    int v80;
    unsigned __int64 v81;
    _QWORD* v82;
    _QWORD* v83;
    unsigned __int64 v84;
  } v73_;
  unsigned __int64 v85;

  v85 = 0;
  *(_DWORD*)v73_.v73 = 15;
  v2 = game_UnitPool_GetFirst((int*)v73_.v73);
  if (v2 == 0) {
    goto LABEL_13;
  }
  v3 = *(_QWORD*)(v2 + 432);
  v4 = v2;
  if (v3 != 0) {
    goto LABEL_3;
  }
  v15 = *(_QWORD*)(v2 + 440);
  if (v15 != 0) {
    v16 = *(unsigned __int8*)(v15 + 16);
    if (v16 <= 8) {
      v17 = 24LL * (unsigned int)v16 + 556024;
      while (1) {
        if (v16 <= 2) {
          v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v17);
          if (v3 != 0) {
            break;
          }
        }
        ++v16;
        v17 += 24;
        if (v16 == 9) {
          goto LABEL_12;
        }
      }
      while (1) {
        do {
        LABEL_3:
          v5 = v3;
          game_map_f0ee60(&v85, v4);
          v3 = *(_QWORD*)(v5 + 432);
          v4 = v5;
        } while (v3 != 0);
        v6 = *(_QWORD*)(v5 + 440);
        if (v6 == 0) {
          break;
        }
        v7 = *(unsigned __int8*)(v6 + 16);
        if (v7 > 8) {
          break;
        }
        v8 = 24LL * (unsigned int)v7 + 556024;
        while (1) {
          if (v7 <= 2) {
            v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v8);
            if (v3 != 0) {
              break;
            }
          }
          ++v7;
          v8 += 24;
          if (v7 == 9) {
            goto LABEL_11;
          }
        }
        v4 = v5;
      }
    LABEL_11:
      v4 = v5;
    }
  }
LABEL_12:
  game_map_f0ee60(&v85, v4);
LABEL_13:
  LOBYTE(v73_.v74) = 0;
  v73_.v75 = 0;
  v73_.v80 = 0;
  v73_.v82 = nullptr;
  v73_.v83 = nullptr;
  v73_.v84 = 0;
  v73_.v76 = 0;
  v73_.v77 = 0;
  v73_.v78 = 0;
  v73_.v79 = 0;
  memset(v73_.v73, 0, 20);
  v9 = (__int64*)GameData_212d020[0];
  v10 = GameRoutine_f097d0(*(_QWORD*)GameData_212d020[0]);
  *(_QWORD*)&v73_.v73[8] = v10;
  v11 = *GameData_212cfd8[0];
  v12 = GameData_212cfc0[0];
  if (*(int*)(*GameData_212cfd8[0] + 160) < 1) {
    if (v10 != 0) {
      v13 = *(unsigned __int8*)(v10 + 584);
      LOWORD(v14) = *(unsigned __int8*)(v10 + 585);
    }
    else {
      v18 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
      v14 = *(_DWORD*)(v18 + 12);
      v13 = *(unsigned __int8*)(v18 + 8);
    }
  }
  else {
    v13 = *(unsigned __int8*)(v11 + 180);
    v14 = *(_DWORD*)(v11 + 184);
  }
  v73_.v76 = 0;
  v73_.v77 = 0;
  *(_QWORD*)&v73_.v73[16] = 0;
  *(_DWORD*)&v73_.v73[4] = (unsigned __int16)(v13 | ((_WORD)v14 << 8));
  v73_.v81 = v85;
  v19 = DeployData_f25a60(a1 + 2, (unsigned int*)v73_.v73);
  v20 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v73_.v82 != nullptr) {
    v21 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v73_.v83 = v73_.v82;
    v22 = 128;
    if (*(_QWORD*)(v21 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v21 + v22, (__int64)v73_.v82);
  }
  v23 = GameRoutine_f097d0(*v9);
  LOBYTE(v73_.v74) = 0;
  v73_.v75 = 0;
  v73_.v80 = 0;
  v73_.v82 = nullptr;
  v73_.v83 = nullptr;
  v73_.v84 = 0;
  *(_DWORD*)&v73_.v73[16] = 0;
  v73_.v79 = 0;
  v73_.v77 = 0;
  v73_.v78 = 0;
  v73_.v76 = 0;
  *(_QWORD*)&v73_.v73[8] = v23;
  *(_QWORD*)v73_.v73 = 1;
  if (v23 != 0) {
    LOBYTE(v24) = *(_BYTE*)(v23 + 584);
    LOBYTE(v25) = *(_BYTE*)(v23 + 585);
  }
  else {
    v26 = *(_QWORD*)(*v12 + 48);
    v24 = *(_DWORD*)(v26 + 8);
    v25 = *(_DWORD*)(v26 + 12);
  }
  if (*(_DWORD*)(*v9 + 4368) != 1 &&
      (*(_DWORD*)(*GameData_212cfd0[0] + 24) & 0x80000000) == 0 &&
      *(int*)(*GameData_212cfd0[0] + 28) > -1) {
    LOBYTE(v24) = *(_DWORD*)(*GameData_212cfd0[0] + 24);
    LOBYTE(v25) = *(_DWORD*)(*GameData_212cfd0[0] + 28);
  }
  v27 = 0;
  v73_.v76 = 0;
  *(_DWORD*)&v73_.v73[4] = (unsigned __int8)v24 | ((unsigned __int8)v25 << 8);
  if ((char)v24 >= 1 && (char)v25 >= 1) {
    v28 = 32 * (v25 & 0x7F) + (v24 & 0x7F);
    if (v28 >= 0x400) {
      v29 = 0;
    }
    else {
      v29 = v28;
    }
    v30 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
    v31 = *(__int16*)(v30 + 2LL * (unsigned int)v29 + 4200);
    v32 = *(_QWORD*)(v30 + 8);
    if ((v31 < 0 || v32 == 0) &&
        ((v31 = *(__int16*)(v30 + 2 * v29 + 2152)) < 0 || v32 == 0)) {
      v33 = *(__int16*)(v30 + 104 + 2 * v29);
      v34 = v32 + 144LL * (unsigned int)v33;
      if (v33 <= -1) {
        v27 = 0;
      }
      else {
        v27 = v34;
      }
    }
    else {
      v27 = v32 + 144LL * (unsigned int)v31;
    }
  }
  v73_.v77 = v27;
  *(_QWORD*)&v73_.v73[16] = 0xFFFFFFFFLL;
  v73_.v81 = v85;
  v72 = DeployData_f25a60(a1 + 31868, (unsigned int*)v73_.v73);
  if (v73_.v82 != nullptr) {
    v35 = *v20;
    v73_.v83 = v73_.v82;
    v36 = 128;
    if (*(_QWORD*)(v35 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v35 + v36, (__int64)v73_.v82);
  }
  LOBYTE(v73_.v74) = 0;
  v73_.v75 = 0;
  v73_.v80 = 0;
  v73_.v83 = nullptr;
  v73_.v84 = 0;
  v73_.v82 = nullptr;
  *(_QWORD*)&v73_.v73[4] = 0;
  *(_QWORD*)&v73_.v73[12] = 0;
  v73_.v76 = 0;
  v73_.v77 = 0;
  v73_.v78 = 0;
  v73_.v79 = 0;
  *(_DWORD*)v73_.v73 = 3;
  v37 = *(_QWORD*)(*v9 + 104);
  if (v37 != 0) {
    v38 = *(_QWORD*)(*v9 + 96);
    v39 = *(_QWORD*)(*v9 + 104);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 16), 1u,
                              memory_order_relaxed);
    v40 = std___1___shared_weak_count_lock_alt1(v39);
    std___1___shared_weak_count___release_weak_alt2(v37);
    if (v40 != 0) {
      if (v38 != 0) {
        if (*(_QWORD*)v38 != 0) {
          v41 = *(unsigned __int16*)(*(_QWORD*)v38 + 584LL);
          *(_QWORD*)&v73_.v73[8] = *(_QWORD*)v38;
          *(_DWORD*)&v73_.v73[4] = v41;
        }
        v42 = *(unsigned __int8*)(v38 + 16);
        if (*(_BYTE*)(v38 + 16) != 0) {
          v73_.v74 = *(_QWORD*)(v38 + 8);
          v73_.v75 = 1;
        }
        v73_.v76 = *(_QWORD*)(v38 + 24);
        v73_.v77 = *(_QWORD*)(v38 + 32);
        v73_.v78 = *(_QWORD*)(v38 + 40);
        v73_.v79 = *(_BYTE*)(v38 + 48);
        v73_.v80 = *(_DWORD*)(v38 + 52);
        if ((v73_.v80 & 8) == 0 && v42 != 0) {
          *(_DWORD*)&v73_.v73[20] = 0x400000;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
        std___1___shared_weak_count___release_weak_alt2(v40);
      }
    }
  }
  *(_DWORD*)&v73_.v73[16] = 0;
  v43 = v73_.v83;
  v44 = v73_.v84;
  *(_DWORD*)v73_.v73 = 2;
  v73_.v81 = v85;
  v45 = *(_QWORD*)(*v12 + 48);
  v46 = *(int*)(v45 + 8);
  v47 = *(int*)(v45 + 12);
  if ((unsigned __int64)v73_.v83 >= v73_.v84) {
    v49 = (__int64)v73_.v82;
    v50 = (char*)v73_.v83 - (char*)v73_.v82;
    v51 = v73_.v83 - v73_.v82;
    v52 = v51 + 1;
    if ((unsigned __int64)(v51 + 1) >> 61 != 0) {
      goto LABEL_103;
    }
    if ((__int64)(v73_.v84 - (_QWORD)v73_.v82) >> 2 > v52) {
      v52 = (__int64)(v73_.v84 - (_QWORD)v73_.v82) >> 2;
    }
    if (v73_.v84 - (unsigned __int64)v73_.v82 >= 0x7FFFFFFFFFFFFFF8LL) {
      v53 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v53 = v52;
    }
    if (v53 != 0) {
      if (v53 >> 61 != 0) {
        goto LABEL_104;
      }
      v54 = fw_memory_HeapManager_Allocate_alt1(*v20, 8 * v53, 16, 0);
    }
    else {
      v54 = 0;
    }
    v44 = v54 + 8 * v53;
    v55 = v54 + v50 - 8 * v51;
    *(_QWORD*)(v54 + v50) = v46;
    v48 = (_QWORD*)(v54 + v50 + 8);
    memcpy_alt1(v55, v49, v50);
    v73_.v82 = (_QWORD*)v55;
    v73_.v83 = v48;
    v73_.v84 = v44;
    if (v49 != 0) {
      v56 = 128;
      if (*(_QWORD*)(*v20 + 200) == 0) {
        v56 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v20 + v56, v49);
    }
  }
  else {
    *v73_.v83 = v46;
    v48 = v43 + 1;
  }
  if ((unsigned __int64)v48 < v44) {
    *v48 = v47;
    v57 = (__int64)(v48 + 1);
  LABEL_97:
    v66 = v20;
    goto LABEL_98;
  }
  v58 = (__int64)v73_.v82;
  v59 = (char*)v48 - (char*)v73_.v82;
  v60 = v48 - v73_.v82;
  v61 = v60 + 1;
  if ((unsigned __int64)(v60 + 1) >> 61 != 0) {
  LABEL_103:
    GameRoutine_65c760();
  }
  if ((__int64)(v44 - (_QWORD)v73_.v82) >> 2 > v61) {
    v61 = (__int64)(v44 - (_QWORD)v73_.v82) >> 2;
  }
  if (v44 - (unsigned __int64)v73_.v82 >= 0x7FFFFFFFFFFFFFF8LL) {
    v62 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v62 = v61;
  }
  if (v62 != 0) {
    if (v62 >> 61 == 0) {
      v63 = fw_memory_HeapManager_Allocate_alt1(*v20, 8 * v62, 16, 0);
      goto LABEL_93;
    }
  LABEL_104:
    GameRoutine_60a210_alt1();
  }
  v63 = 0;
LABEL_93:
  v64 = v63 + 8 * v62;
  v65 = v63 + v59 - 8 * v60;
  *(_QWORD*)(v63 + v59) = v47;
  v57 = v63 + v59 + 8;
  memcpy_alt1(v65, v58, v59);
  v73_.v82 = (_QWORD*)v65;
  v73_.v84 = v64;
  if (v58 == 0) {
    goto LABEL_97;
  }
  v66 = v20;
  v67 = 128;
  if (*(_QWORD*)(*v20 + 200) == 0) {
    v67 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v20 + v67, v58);
LABEL_98:
  v73_.v83 = (_QWORD*)v57;
  v68 = DeployData_f25a60(a1 + 63734, (unsigned int*)v73_.v73);
  if (v73_.v82 != nullptr) {
    v69 = *v66;
    v73_.v83 = v73_.v82;
    v70 = 128;
    if (*(_QWORD*)(v69 + 200) == 0) {
      v70 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v69 + v70, (__int64)v73_.v82);
  }
  return ((unsigned __int8)(v19 | v72) | v68) & 1;
}

void game_map_1141200(_QWORD* a1, int a2, __int64* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12[2];
    __int64 v13;
    __int64 v14;
    __int64 v15;
    char gap48_[32];
    char v16;
    char gap81_[15];
    __int64 v17;
  } v12_;
  char v18;

  GameRoutine_1141380(v12_.v12, a3);
  GameRoutine_1140d20((__int64)a1, a2, v12_.v12);
  if ((v12_.v16 & 1) != 0 && v12_.v17 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v12_.v17);
  }
  v6 = v12_.v14;
  if (v12_.v14 != 0) {
    v7 = v12_.v15;
    if (v12_.v14 == v12_.v15) {
      goto LABEL_13;
    }
    do {
      v8 = *(unsigned int*)(v7 - 8);
      v9 = v7 - 32;
      if ((_DWORD)v8 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr[v8])(&v18, v7 - 32);
      }
      *(_DWORD*)(v7 - 8) = -1;
      v7 -= 32;
    } while (v9 != v6);
    v12_.v15 = v6;
    v6 = v12_.v14;
    if (v12_.v14 != 0) {
    LABEL_13:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v6);
    }
  }
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v12_.v13);
  }
  *a1 = game_map_MapAccessTrickEventBase_vtable;
}

void game_map_1141500(_QWORD* a1, int a2, __int64* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12[2];
    __int64 v13;
    __int64 v14;
    __int64 v15;
    char gap48_[32];
    char v16;
    char gap81_[15];
    __int64 v17;
  } v12_;
  char v18;

  GameRoutine_1141380(v12_.v12, a3);
  GameRoutine_1140d20((__int64)a1, a2, v12_.v12);
  if ((v12_.v16 & 1) != 0 && v12_.v17 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v12_.v17);
  }
  v6 = v12_.v14;
  if (v12_.v14 != 0) {
    v7 = v12_.v15;
    if (v12_.v14 == v12_.v15) {
      goto LABEL_13;
    }
    do {
      v8 = *(unsigned int*)(v7 - 8);
      v9 = v7 - 32;
      if ((_DWORD)v8 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr[v8])(&v18, v7 - 32);
      }
      *(_DWORD*)(v7 - 8) = -1;
      v7 -= 32;
    } while (v9 != v6);
    v12_.v15 = v6;
    v6 = v12_.v14;
    if (v12_.v14 != 0) {
    LABEL_13:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v6);
    }
  }
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v12_.v13);
  }
  *a1 = game_map_MapAccessDestroyEventBase_vtable;
}

void game_map_11416c0(_QWORD* a1, int a2, __int64* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12[2];
    __int64 v13;
    __int64 v14;
    __int64 v15;
    char gap48_[32];
    char v16;
    char gap81_[15];
    __int64 v17;
  } v12_;
  char v18;

  GameRoutine_1141380(v12_.v12, a3);
  GameRoutine_1140d20((__int64)a1, a2, v12_.v12);
  if ((v12_.v16 & 1) != 0 && v12_.v17 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v12_.v17);
  }
  v6 = v12_.v14;
  if (v12_.v14 != 0) {
    v7 = v12_.v15;
    if (v12_.v14 == v12_.v15) {
      goto LABEL_13;
    }
    do {
      v8 = *(unsigned int*)(v7 - 8);
      v9 = v7 - 32;
      if ((_DWORD)v8 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr[v8])(&v18, v7 - 32);
      }
      *(_DWORD*)(v7 - 8) = -1;
      v7 -= 32;
    } while (v9 != v6);
    v12_.v15 = v6;
    v6 = v12_.v14;
    if (v12_.v14 != 0) {
    LABEL_13:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v6);
    }
  }
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v12_.v13);
  }
  *a1 = game_map_MapAccessNotTrickEventBase_vtable;
}

void game_map_1141940(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v12[2];
    __int64 v13;
  } v12_;
  struct {
    __int64 v14[2];
    __int64 v15;
    __int64 v16;
    __int64 v17;
    char gap72_[32];
    char v18;
    char gap105_[15];
    __int64 v19;
  } v14_;
  char v20;

  GameRoutine_1141380(v14_.v14, (__int64*)a2);
  game_map_1141200((_QWORD*)a1, 5, v14_.v14);
  if ((v14_.v18 & 1) != 0 && v14_.v19 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v14_.v19);
  }
  v5 = v14_.v16;
  if (v14_.v16 != 0) {
    v6 = v14_.v17;
    if (v14_.v16 == v14_.v17) {
      goto LABEL_13;
    }
    do {
      v7 = *(unsigned int*)(v6 - 8);
      v8 = v6 - 32;
      if ((_DWORD)v7 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr[v7])(&v20, v6 - 32);
      }
      *(_DWORD*)(v6 - 8) = -1;
      v6 -= 32;
    } while (v8 != v5);
    v14_.v17 = v5;
    v5 = v14_.v16;
    if (v14_.v16 != 0) {
    LABEL_13:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v5);
    }
  }
  if ((v14_.v14[0] & 1) != 0 && v14_.v15 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v14_.v15);
  }
  *(_QWORD*)a1 = game_map_MapTreasureboxEvent_vtable;
  GameRoutine_1140e80((void*)(v12_.v12), (_DWORD*)a1);
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 120LL))(a1, v12_.v12);
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v12_.v13);
  }
  *(_DWORD*)(a1 + 108) = *(_DWORD*)(a2 + 64);
}

__int64 game_map_1141b20(_DWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _QWORD v11[3];
  _BYTE v12[16];
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  char v18;

  GameRoutine_1141380_alt1(v12);
  game_map_1141200_alt1(a1, 6, v12);
  if ((v16 & 1) != 0 && v17 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2, (_QWORD)(v17));
  }
  v3 = v14;
  if (v14 != 0) {
    v4 = v15;
    if (v14 == v15) {
      goto LABEL_13;
    }
    do {
      v5 = *(unsigned int*)(v4 - 8);
      v6 = v4 - 32;
      if ((_DWORD)v5 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr[v5])(&v18, v4 - 32);
      }
      *(_DWORD*)(v4 - 8) = -1;
      v4 -= 32;
    } while (v6 != v3);
    v15 = v3;
    if (v14 != 0) {
    LABEL_13:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, (_QWORD)(v14));
    }
  }
  if ((v12[0] & 1) != 0 && v13 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v8, (_QWORD)(v13));
  }
  *(_QWORD*)a1 = game_map_MapDoorEvent_vtable;
  GameRoutine_1140e80((void*)(v11), a1);
  result = (*(__int64 (**)(_DWORD*, _QWORD*))(*(_QWORD*)a1 + 120LL))(a1, v11);
  if ((v11[0] & 1) != 0 && v11[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (_QWORD)(v11[2]));
  }
  return result;
}

void game_map_1141d00(_QWORD* a1, __int64* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v10[2];
    __int64 v11;
    __int64 v12;
    __int64 v13;
    char gap48_[32];
    char v14;
    char gap81_[15];
    __int64 v15;
  } v10_;
  char v16;

  GameRoutine_1141380(v10_.v10, a2);
  game_map_1141200(a1, 7, v10_.v10);
  if ((v10_.v14 & 1) != 0 && v10_.v15 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v10_.v15);
  }
  v4 = v10_.v12;
  if (v10_.v12 != 0) {
    v5 = v10_.v13;
    if (v10_.v12 == v10_.v13) {
      goto LABEL_13;
    }
    do {
      v6 = *(unsigned int*)(v5 - 8);
      v7 = v5 - 32;
      if ((_DWORD)v6 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr[v6])(&v16, v5 - 32);
      }
      *(_DWORD*)(v5 - 8) = -1;
      v5 -= 32;
    } while (v7 != v4);
    v10_.v13 = v4;
    v4 = v10_.v12;
    if (v10_.v12 != 0) {
    LABEL_13:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v4);
    }
  }
  if ((v10_.v10[0] & 1) != 0 && v10_.v11 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v10_.v11);
  }
  *a1 = game_map_MapGimmickEvent_vtable;
}

__int64 game_map_1141e80(_DWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _QWORD v11[3];
  _BYTE v12[16];
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  char v18;

  GameRoutine_1141380_alt1(v12);
  game_map_1141500_alt1(a1, 13, v12);
  if ((v16 & 1) != 0 && v17 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2, (_QWORD)(v17));
  }
  v3 = v14;
  if (v14 != 0) {
    v4 = v15;
    if (v14 == v15) {
      goto LABEL_13;
    }
    do {
      v5 = *(unsigned int*)(v4 - 8);
      v6 = v4 - 32;
      if ((_DWORD)v5 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr[v5])(&v18, v4 - 32);
      }
      *(_DWORD*)(v4 - 8) = -1;
      v4 -= 32;
    } while (v6 != v3);
    v15 = v3;
    if (v14 != 0) {
    LABEL_13:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, (_QWORD)(v14));
    }
  }
  if ((v12[0] & 1) != 0 && v13 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v8, (_QWORD)(v13));
  }
  *(_QWORD*)a1 = game_map_MapDestroyEvent_vtable;
  GameRoutine_1140e80((void*)(v11), a1);
  result = (*(__int64 (**)(_DWORD*, _QWORD*))(*(_QWORD*)a1 + 120LL))(a1, v11);
  if ((v11[0] & 1) != 0 && v11[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (_QWORD)(v11[2]));
  }
  return result;
}

__int64 game_map_1142060(_DWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _QWORD v11[3];
  _BYTE v12[16];
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  char v18;

  GameRoutine_1141380_alt1(v12);
  game_map_11416c0_alt1(a1, 10, v12);
  if ((v16 & 1) != 0 && v17 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2, (_QWORD)(v17));
  }
  v3 = v14;
  if (v14 != 0) {
    v4 = v15;
    if (v14 == v15) {
      goto LABEL_13;
    }
    do {
      v5 = *(unsigned int*)(v4 - 8);
      v6 = v4 - 32;
      if ((_DWORD)v5 != -1) {
        ((void (*)(char*, __int64))decltype_c81af0_ptr[v5])(&v18, v4 - 32);
      }
      *(_DWORD*)(v4 - 8) = -1;
      v4 -= 32;
    } while (v6 != v3);
    v15 = v3;
    if (v14 != 0) {
    LABEL_13:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, (_QWORD)(v14));
    }
  }
  if ((v12[0] & 1) != 0 && v13 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v8, (_QWORD)(v13));
  }
  *(_QWORD*)a1 = game_map_MapBreakdownEvent_vtable;
  GameRoutine_1140e80((void*)(v11), a1);
  result = (*(__int64 (**)(_DWORD*, _QWORD*))(*(_QWORD*)a1 + 120LL))(a1, v11);
  if ((v11[0] & 1) != 0 && v11[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (_QWORD)(v11[2]));
  }
  return result;
}

__n128 game_map_1142240(__int64 (***a1)(), __int64* a2)
{

#pragma clang fp contract(off)
  __n128 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 (**v14)();
  __n128 result;
  __int64 v16;
  struct {
    __int64 v17[2];
    __int64 v18;
  } v17_;
  struct {
    __int64 v19[3];
    __int64 v20;
    __int64 v21;
    char gap72_[32];
    char v22;
    char gap105_[15];
    __int64 v23;
  } v19_;
  char v24;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_1141380(v19_.v19, a2),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_map_11416c0(a1, 11, v19_.v19),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v19_.v22 & 1) != 0 && v19_.v23 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    v4 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5, (_QWORD)(v19_.v23)),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v6 = v19_.v20;
  if (v19_.v20 != 0) {
    v7 = v19_.v21;
    if (v19_.v20 == v19_.v21) {
      goto LABEL_13;
    }
    do {
      v8 = *(unsigned int*)(v7 - 8);
      v9 = v7 - 32;
      if ((_DWORD)v8 != -1) {
        ((void (*)(char*, __int64, long double))decltype_c81af0_ptr[v8])(
            &v24, v7 - 32, *(long double*)&v4),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      *(_DWORD*)(v7 - 8) = -1;
      v7 -= 32;
    } while (v9 != v6);
    v19_.v21 = v6;
    if (v19_.v20 != 0) {
    LABEL_13:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (_QWORD)(v19_.v20)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if ((v19_.v19[0] & 1) != 0 && v19_.v19[2] != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    v4 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v11, (_QWORD)(v19_.v19[2])),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  *a1 = game_map_MapEscapeBeforeEvent_vtable;
  if ((a2[9] & 1) != 0) {
    fw_text_String_CopyTerminated(v17_.v17, a2[11], a2[10]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v14 = *a1;
  }
  else {
    v12 = a2[10];
    v13 = a2[11];
    v17_.v17[0] = a2[9];
    v17_.v17[1] = v12;
    v17_.v18 = v13;
    v14 = game_map_MapEscapeBeforeEvent_vtable;
  }
  ((void (*)(__int64 (***)(void), __int64*, long double))v14[15])(
      a1, v17_.v17, *(long double*)&v4),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v17_.v17[0] & 1) != 0 && v17_.v18 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (_QWORD)(v17_.v18));
  }
  return result;
}

__n128 game_map_1142440(__int64 (***a1)(), __int64* a2)
{

#pragma clang fp contract(off)
  __n128 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 (**v14)();
  __n128 result;
  __int64 v16;
  struct {
    __int64 v17[2];
    __int64 v18;
  } v17_;
  struct {
    __int64 v19[3];
    __int64 v20;
    __int64 v21;
    char gap72_[32];
    char v22;
    char gap105_[15];
    __int64 v23;
  } v19_;
  char v24;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_1141380(v19_.v19, a2),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_map_11416c0(a1, 12, v19_.v19),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v19_.v22 & 1) != 0 && v19_.v23 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    v4 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5, (_QWORD)(v19_.v23)),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v6 = v19_.v20;
  if (v19_.v20 != 0) {
    v7 = v19_.v21;
    if (v19_.v20 == v19_.v21) {
      goto LABEL_13;
    }
    do {
      v8 = *(unsigned int*)(v7 - 8);
      v9 = v7 - 32;
      if ((_DWORD)v8 != -1) {
        ((void (*)(char*, __int64, long double))decltype_c81af0_ptr[v8])(
            &v24, v7 - 32, *(long double*)&v4),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      *(_DWORD*)(v7 - 8) = -1;
      v7 -= 32;
    } while (v9 != v6);
    v19_.v21 = v6;
    if (v19_.v20 != 0) {
    LABEL_13:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (_QWORD)(v19_.v20)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if ((v19_.v19[0] & 1) != 0 && v19_.v19[2] != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    v4 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v11, (_QWORD)(v19_.v19[2])),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  *a1 = game_map_MapEscapeAfterEvent_vtable;
  if ((a2[9] & 1) != 0) {
    fw_text_String_CopyTerminated(v17_.v17, a2[11], a2[10]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v14 = *a1;
  }
  else {
    v12 = a2[10];
    v13 = a2[11];
    v17_.v17[0] = a2[9];
    v17_.v17[1] = v12;
    v17_.v18 = v13;
    v14 = game_map_MapEscapeAfterEvent_vtable;
  }
  ((void (*)(__int64 (***)(void), __int64*, long double))v14[15])(
      a1, v17_.v17, *(long double*)&v4),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v17_.v17[0] & 1) != 0 && v17_.v18 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (_QWORD)(v17_.v18));
  }
  return result;
}

__n128 game_map_1142640(__int64 (***a1)(), __int64* a2)
{

#pragma clang fp contract(off)
  __n128 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 (**v14)();
  __n128 result;
  __int64 v16;
  struct {
    __int64 v17[2];
    __int64 v18;
  } v17_;
  struct {
    __int64 v19[3];
    __int64 v20;
    __int64 v21;
    char gap72_[32];
    char v22;
    char gap105_[15];
    __int64 v23;
  } v19_;
  char v24;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  GameRoutine_1141380(v19_.v19, a2),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_map_11416c0(a1, 30, v19_.v19),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v19_.v22 & 1) != 0 && v19_.v23 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    v4 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5, (_QWORD)(v19_.v23)),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v6 = v19_.v20;
  if (v19_.v20 != 0) {
    v7 = v19_.v21;
    if (v19_.v20 == v19_.v21) {
      goto LABEL_13;
    }
    do {
      v8 = *(unsigned int*)(v7 - 8);
      v9 = v7 - 32;
      if ((_DWORD)v8 != -1) {
        ((void (*)(char*, __int64, long double))decltype_c81af0_ptr[v8])(
            &v24, v7 - 32, *(long double*)&v4),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      *(_DWORD*)(v7 - 8) = -1;
      v7 -= 32;
    } while (v9 != v6);
    v19_.v21 = v6;
    if (v19_.v20 != 0) {
    LABEL_13:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      v4 = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (_QWORD)(v19_.v20)),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  if ((v19_.v19[0] & 1) != 0 && v19_.v19[2] != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    v4 = nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v11, (_QWORD)(v19_.v19[2])),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  *a1 = game_map_MapWarpCommandAfterEvent_vtable;
  if ((a2[9] & 1) != 0) {
    fw_text_String_CopyTerminated(v17_.v17, a2[11], a2[10]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v14 = *a1;
  }
  else {
    v12 = a2[10];
    v13 = a2[11];
    v17_.v17[0] = a2[9];
    v17_.v17[1] = v12;
    v17_.v18 = v13;
    v14 = game_map_MapWarpCommandAfterEvent_vtable;
  }
  ((void (*)(__int64 (***)(void), __int64*, long double))v14[15])(
      a1, v17_.v17, *(long double*)&v4),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v17_.v17[0] & 1) != 0 && v17_.v18 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (_QWORD)(v17_.v18));
  }
  return result;
}

__int64 game_map_15c0290(__int64 a1, int a2)
{
  __int64 v2;
  const char* v4;
  __int64 v5;
  _BYTE v6[200];

  if (a2 == 13) {
    v2 = *(_QWORD*)(a1 + 336);
    if (v2 != 0) {
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 368LL))(v2, 13);
    }
    snd_Fade_Fade_10c830(v6, 0.0f);
    v4 = "SE_SYS_List_Change";
  }
  else {
    snd_Fade_Fade_10c830(v6, 0.0f);
    v4 = "SE_SYS_NG";
  }
  snd_play_ff2d0((void*)(&v5), v4, v4, v6, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v6);
}

_DWORD* game_map_1a01b50(float a1, float a2, __int64 a3, __int64 a4, __int64 a5,
                         __int64 a6, __int64 a7)
{
  _DWORD* result;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  char v18;
  long double v19;
  float v20;
  unsigned int v21;
  float v22;
  float v23;
  float v24;
  int v25;
  __int64 v26;
  _DWORD* v27;

  result = *(_DWORD**)(a4 + 8);
  if (result != nullptr) {
    result = (_DWORD*)std___1___shared_weak_count_lock(result);
    if (result != nullptr) {
      v14 = result;
      result = *(_DWORD**)a4;
      if (*(_QWORD*)a4 != 0) {
        LayoutAccessor_1560070((void*)(&v26), result, a5);
        result = v27;
        if (v27 != nullptr) {
          v15 = std___1___shared_weak_count_lock(v27);
          v16 = v26;
          result = v27;
          if (v27 != nullptr) {
            result =
                (_DWORD*)std___1___shared_weak_count___release_weak_alt1(v27);
          }
          if (v15 != 0 && v16 != 0) {
            result = (_DWORD*)ui_LayoutAccessor_FindPane(v16, "MapChip_Unit");
            if (result != nullptr) {
              result = (_DWORD*)__dynamic_cast(result, GameData_212d670[0],
                                               GameData_212d678[0], 0);
              if (result != nullptr) {
                v17 = result;
                Manager_136a920(ui_Manager_instance_ + 1264, result, 0, 8, a6);
                v18 = *((_BYTE*)v17 + 88);
                *((float*)v17 + 20) = a1;
                *((float*)v17 + 21) = a1;
                *((_BYTE*)v17 + 88) = v18 | 0x10;
                result = (_DWORD*)Manager_136ac50(ui_Manager_instance_ + 1264,
                                                  8, a6, v19);
                if (result != nullptr) {
                  v20 = a1 * a2;
                  result = X8CALL_X0(
                      _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                   PSEUDO_X8, void*))(*(_QWORD*)result + 32LL))(
                                   (void*)&v26, (void*)result));
                  LOWORD(v21) = v26;
                  v22 = *((float*)v17 + 20);
                  v23 = (float)v21;
                  *((_BYTE*)v17 + 88) |= 0x10u;
                  if (v20 >= v23) {
                    v23 = v20;
                  }
                  v24 = v23 / v22;
                  *((float*)v17 + 18) = v24;
                  *((float*)v17 + 19) = v24;
                }
                if (a7 != 0) {
                  v25 = (game_Unit_IsHeld(a7) & 1) != 0
                            ? *(_DWORD*)((char*)((_UNKNOWN*)0xE8LL) +
                                         (_QWORD)GameData_212da30)
                            : *(_DWORD*)GameRoutine_15d1fa0();
                  result = (_DWORD*)(*(__int64 (**)(_DWORD*, _QWORD))(
                      *(_QWORD*)v17 + 88LL))(v17, 0);
                  if (result != nullptr) {
                    result[3] = v25;
                  }
                }
              }
            }
            goto LABEL_19;
          }
          if (v15 != 0) {
          LABEL_19:
            if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
              result =
                  (_DWORD*)std___1___shared_weak_count___release_weak_alt1(v15);
            }
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 2),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(_DWORD*))(*(_QWORD*)v14 + 16LL))(v14);
        return (_DWORD*)std___1___shared_weak_count___release_weak_alt1(v14);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
