#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563380(_QWORD, _QWORD, _QWORD);
__int64 SpineFace_Unknown2(__int64 result);
__attribute__((swiftcall)) void GameRoutine_190bad0(PSEUDO_X8, __int64*,
                                                    __int64);
__int64 AssetTableFile_7e9d00(__int64, __int64, __int64*);
__int64 GameRoutine_1916dd0(__int64, int, __int64, float, __int64, char);
__int64 GameRoutine_19170a0(__int64 result, __int64);
__int64 GameRoutine_191c240(__int64 result, __int64*);
__int64 Pane_58f8a0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__n128 GameRoutine_191f160(__int64, unsigned __int8*);
__n128 SpineBuildArgument_Unknown16(__int64, __int64);
__n128 TrickEntity_7d1480(__int64);
__n128 cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument(__int64);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2002810[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dea8;
extern __int64* GameData_212fcd0;
extern __int64* GameData_212fd48[3];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_spine_g_resource_releaser_ptr;
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64 fw_memory_g_heap_manager_ptr;
void LayoutAccessor_1562680(__int64*, __int64, float);
__n128 SpineFace_1027910_alt1(__int64 a1) __asm__("SpineFace_1027910");
void SpineFace_1027c80(__int64 a1);
__int64 GameRoutine_190bf00(__int64, _QWORD*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 SpineFace_1027780(__int64 result);
_QWORD* game_191f160(_QWORD* result, unsigned __int8*);
void SpineBuildArgument_Unknown16_alt1(__int64, __int64) __asm__(
    "SpineBuildArgument_Unknown16");
void TrickEntity_7d1480_alt1(__int64) __asm__("TrickEntity_7d1480");
void cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument_alt1(
    __int64) __asm__("cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpineFace_1027910(__int64 a1);

__int64 SpineFace_1027780(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;

  v1 = *(_QWORD*)(result + 168);
  if (v1 != 0) {
    v2 = result;
    v3 = *game_spine_g_resource_releaser_ptr;
    v4 = *(_QWORD*)(v2 + 176);
    v7_.v7 = v1;
    v7_.v8 = v4;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    result = GameRoutine_190bf00(v3, &v7_.v7);
    v5 = v7_.v8;
    if (v7_.v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7_.v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      result = std___1___shared_weak_count___release_weak_alt1(v5);
    }
    v6 = *(_QWORD*)(v2 + 176);
    *(_QWORD*)(v2 + 168) = 0;
    *(_QWORD*)(v2 + 176) = 0;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      return std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
  return result;
}

void SpineFace_1027910(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  int v3;
  char v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  int* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  struct {
    __int64* v20;
    __int16 v21;
    char gap34_[22];
    __int16 v22;
    char gap58_[22];
    __int16 v23;
    char gap82_[22];
    __int16 v24;
    char gap106_[22];
    float v25;
    char gap132_[4];
    __int64 v26;
    __int64 v27;
  } v20_;
  struct {
    _QWORD v28[42];
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    int v35;
    char gap540_[4];
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
  } v28_;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char v49;
  int v50;

  v2 = GameData_212dea8;
  v3 = *(_DWORD*)(a1 + 216);
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v28_.v28[25] = 0;
  v28_.v28[27] = 0;
  memset(v28_.v28, 0, 192);
  v28_.v28[40] = 0;
  v28_.v28[41] = 0;
  v28_.v30 = 0;
  v28_.v31 = 0;
  v28_.v32 = 0;
  v28_.v33 = 0;
  v28_.v34 = 0;
  v28_.v35 = 1065353216;
  v28_.v36 = 0;
  v28_.v37 = 0;
  v28_.v38 = 0;
  v28_.v39 = 0;
  v28_.v40 = 0;
  v28_.v41 = 0;
  v28_.v42 = 0;
  v28_.v43 = 0;
  v28_.v44 = 0;
  v45 = GameData_212dea8 + 2;
  v46 = 0;
  if (v3 != 0) {
    v4 = 2;
  }
  else {
    v4 = 1;
  }
  v49 = v4;
  AssetTableFile_7e9d00((__int64)v28_.v28, (__int64)&v45,
                        game_vstring_kEmpty_ptr[0]);
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      120, 16, 0);
  *(_QWORD*)(v6 + 8) = 0;
  v7 = (atomic_ullong*)(v6 + 8);
  *(_QWORD*)(v6 + 16) = 0;
  v8 = v6;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  *(_QWORD*)v6 = GameData_2002810;
  *(_BYTE*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_DWORD*)(v6 + 71) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  v9 = GameData_212fd48[0] + 2;
  *(_QWORD*)(v6 + 104) = 0;
  *(_QWORD*)(v6 + 112) = 0;
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 24) = v9;
  v10 = v6 + 24;
  game_191f160(&v20_.v20, (unsigned __int8*)&v45);
  GameRoutine_191c240(v10, (__int64*)&v20_.v20);
  (*(void (**)(__int64, __int64))(*(_QWORD*)v10 + 64LL))(v10, v28_.v29);
  v20_.v21 = 0;
  v20_.v22 = 0;
  v20_.v23 = 0;
  v20_.v24 = 0;
  v20_.v25 = 0x1.0000000000000p+0f;
  v20_.v26 = 0;
  v20_.v27 = 0;
  v20_.v20 = GameData_212fcd0 + 2;
  SpineBuildArgument_Unknown16_alt1((__int64)&v20_.v20, v28_.v29);
  v11 = *(int**)(*game_g_frame_clock_ptr[0] + 16632);
  if (*(_QWORD*)(*game_g_frame_clock_ptr[0] + 16616) != 0) {
    v11 = *(int**)(*game_g_frame_clock_ptr[0] + 16616);
  }
  v20_.v25 = fminf((float)((float)*v11 / 0x1.ea00000000000p+10f) *
                       0x1.7333340000000p-2f,
                   0x1.0000000000000p+0f);
  atomic_fetch_add_explicit(v7, 1u, memory_order_relaxed);
  atomic_fetch_add_explicit(v7, 1u, memory_order_relaxed);
  v12 = v20_.v27;
  v20_.v26 = v10;
  v20_.v27 = v8;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  GameRoutine_190bad0((void*)(&v18_.v18),
                      (__int64*)*game_spine_g_resource_releaser_ptr,
                      (__int64)&v20_.v20);
  v13 = v18_.v18;
  v14 = v18_.v19;
  v15 = *(_QWORD*)(a1 + 176);
  v18_.v18 = 0;
  v18_.v19 = 0;
  *(_QWORD*)(a1 + 168) = v13;
  *(_QWORD*)(a1 + 176) = v14;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
  }
  v16 = v18_.v19;
  if (v18_.v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18_.v19 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
  }
  cspine_SpineModel_AsyncArgument_Destroy_AsyncArgument_alt1(
      (__int64)&v20_.v20);
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  TrickEntity_7d1480_alt1((__int64)v28_.v28);
  v45 = v2 + 2;
  if ((v46 & 1) != 0 && v48 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v17, v48);
  }
}

void SpineFace_1027c80(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(a1 + 168);
  if (*(_BYTE*)(v2 + 1041) == 1) {
    GameRoutine_1916dd0(v2, 0, (__int64)"Motion_Idle", 0x1.99999a0000000p-4f,
                        11, 1),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    GameRoutine_19170a0(*(_QWORD*)(a1 + 168), (__int64)"AHoodOff"),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(a1 + 192) = -1;
    (*(void (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 168) + 808LL) + 40LL))(
        *(_QWORD*)(*(_QWORD*)(a1 + 168) + 808LL)),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v3 = *(__int64**)(a1 + 160);
    *(_QWORD*)(a1 + 192) = v4;
    v5 = ui_LayoutAccessor_FindPane(v3, (__int64)"Face_View"),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v5 != 0) {
      v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v6 != 0) {
        v7 = v6;
        *(_QWORD*)(a1 + 208) =
            *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v6) + 24) + 8LL),
                        v4 = COERCE_AS(
                            __typeof__(v4),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v7) + 24) +
                   8LL) = a1 + 184,
                   v4 = COERCE_AS(
                       __typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        GameRoutine_1916dd0(*(_QWORD*)(a1 + 168), 0, (__int64)"Motion_Idol",
                            0x1.0000000000000p-1f, 11, 0),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v8 = Pane_58f8a0(v7),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v8 != 0) {
          *(_DWORD*)(*(_QWORD*)(v8 + 24) + 16LL * (*(_DWORD*)(v8 + 16) & 3) +
                     16) = -1082130432;
        }
      }
    }
    LayoutAccessor_1562680(*(__int64**)(a1 + 160), (__int64)"Face_Wait",
                           0x1.0000000000000p+0f),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 = *(unsigned __int8**)(a1 + 16);
    if (v9 != nullptr) {
      v10 = *v9;
      v11 = v10 > 0x10;
      v12 = (1 << v10) & 0x1CE00;
      if (!v11 && v12 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
}

__int64 SpineFace_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int8* v3;
  unsigned int v4;
  bool v5;
  int v6;

  v1 = result;
  if (*(_BYTE*)(result + 221) == 1) {
    result = GameRoutine_1563380(*(_QWORD*)(result + 160), "Face_Switch", 0);
    if ((result & 1) != 0) {
      v2 = *(_QWORD*)(v1 + 160);
      *(_BYTE*)(v1 + 221) = 0;
      result = GameRoutine_1562680(v2, "Face_Wait", 1.0);
    }
  }
  if (*(_BYTE*)(v1 + 220) == 1) {
    v3 = *(unsigned __int8**)(v1 + 16);
    if (v3 != nullptr) {
      v4 = *v3;
      v5 = v4 > 0x10;
      v6 = (1 << v4) & 0x1CE00;
      if (!v5 && v6 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

#pragma GCC visibility pop
