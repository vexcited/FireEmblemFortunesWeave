#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_facility_140d000(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_facility_140d160(PSEUDO_X8, __int64);
__int64 GameRoutine_10d4da0(__int64, __int64*, __int64);
__int64 GameRoutine_10d6d40(__int64*, int*, int*);
__int64 SceneManager_138e5e0(__int64, __int64, __int64, __int64, __int64,
                             __int64, __int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__n128 GameRoutine_a0eb00(__int64);
__n128 memset(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d1e8;
extern __int64* GameData_2131560[2];
extern __int64 GameData_212dce8;
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_1090da0(__int64);
void GameRoutine_10eb860(__int64, __int64);
__n128 ProcReinforceCombat_Unknown23_alt1(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6,
    __int64 a7, __int64 a8) __asm__("ProcReinforceCombat_Unknown23");
_QWORD* GameHr_1090da0(__int64);
__attribute__((swiftcall)) void
game_facility_140d000_alt1(PSEUDO_X8,
                           float* result) __asm__("game_facility_140d000");
__int64 SceneManager_138e5e0_alt1(__int64) __asm__("SceneManager_138e5e0");
__int64 game_combat_CombatSequenceImpl_CombatSequenceImpl(__int64, __int64,
                                                          __int64);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_a0eb00_alt1(__int64) __asm__("GameRoutine_a0eb00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcReinforceCombat_Unknown23(__int64 a1);

void ProcReinforceCombat_Unknown23(__int64 a1)
{

#pragma clang fp contract(off)
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
  _QWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  struct {
    __int64 v21;
    __int64 v22;
    __int64 v23;
  } v21_;
  struct {
    __int128 v24;
    char gap48_[8];
    char v25;
    char gap57_[15];
    __int64 v26;
  } v24_;
  struct {
    int8x16_t v27;
    char gap96_[8];
    char v28;
    char gap105_[15];
    __int64 v29;
  } v27_;
  struct {
    _QWORD v30[3];
    __int64 v31;
    __int64 v32;
    __int64 v33;
    unsigned __int64 v34;
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
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
  } v30_;
  struct {
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    int v68;
    char gap460_[4];
    const char* v69;
    int v70;
  } v52_;

  v30_.v30[0] = 0;
  v30_.v32 = 0;
  v30_.v33 = 0;
  v30_.v34 = 0;
  v30_.v35 = 0;
  v30_.v38 = 0;
  v30_.v39 = 0;
  v30_.v40 = 0;
  v30_.v41 = 0;
  v30_.v44 = 0;
  v30_.v45 = 0;
  v30_.v46 = 0;
  v30_.v47 = 0;
  v52_.v69 = nullptr;
  v52_.v70 = 0;
  v30_.v50 = 0;
  v30_.v51 = 0;
  v52_.v52 = 0;
  v52_.v53 = 0;
  v52_.v54 = 0;
  v52_.v55 = 0;
  v52_.v56 = 0;
  v52_.v57 = 0;
  v52_.v58 = 0;
  v52_.v59 = 0;
  v52_.v60 = 0;
  v52_.v61 = 0;
  v52_.v62 = 0;
  v52_.v63 = 0;
  v52_.v64 = 0;
  v52_.v65 = 0;
  v52_.v66 = 0;
  v30_.v30[2] = 0x800000014LL;
  v30_.v31 = 0;
  v30_.v36 = 0x800000014LL;
  v30_.v37 = 0;
  v30_.v42 = 0x800000014LL;
  v30_.v43 = 0;
  v30_.v48 = 0x800000014LL;
  v30_.v49 = 0;
  v2 = (__int64*)GameData_212dce8;
  v3 = *(_QWORD*)GameData_212dce8;
  v52_.v67 = 0;
  v52_.v68 = 0;
  v30_.v30[1] = *(_QWORD*)(SceneManager_138e5e0_alt1(v3) + 8);
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  *(_BYTE*)(v5 + 27) = 0;
  v21_.v21 = 33;
  v21_.v22 = 27;
  v21_.v23 = v5;
  *(_DWORD*)(v5 + 23) = 811567235;
  *(_QWORD*)v5 = 0xBCE5808AE6A688E6LL;
  *(_QWORD*)(v5 + 8) = 0xA683E35F968CE5B7LL;
  *(_QWORD*)(v5 + 16) = 0x83E38383E38B83E3LL;
  game_facility_140d160((void*)(&v24_.v24), (__int64)&v21_.v21);
  game_facility_140d000_alt1((void*)((__int64)&v27_.v27), (float*)&v24_.v24);
  if ((v24_.v25 & 1) != 0 && v24_.v26 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v6, v24_.v26);
  }
  if ((v21_.v21 & 1) != 0 && v21_.v23 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v7, v21_.v23);
  }
  v30_.v30[0] =
      LANES64_OF(
          vzip1_s32(
              COERCE_AS(int32x2_t, LANES128(v27_.v27).n128_u64[0]),
              COERCE_AS(
                  int32x2_t,
                  LANES128_OF(vextq_s8(v27_.v27, v27_.v27, 8u)).n128_u64[0])))
          .n64_u64[0];
  v8 = *(_QWORD*)(*GameData_2131560[0] + 96);
  if (v8 != 0 || (v8 = *(_QWORD*)(*GameData_2131560[0] + 104)) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(v8 + 16) & 0xFFF));
  }
  v30_.v31 = v8;
  if ((v27_.v28 & 1) != 0 && v27_.v29 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v9, v27_.v29);
  }
  v10 = *(_QWORD*)(SceneManager_138e5e0_alt1(*v2) + 8);
  v11 = *(_QWORD*)v4;
  v30_.v35 = v10;
  v12 = fw_memory_HeapManager_Allocate(v11, 32, 16, 0);
  *(_BYTE*)(v12 + 27) = 0;
  v21_.v21 = 33;
  v21_.v22 = 27;
  v21_.v23 = v12;
  *(_DWORD*)(v12 + 23) = 828344451;
  *(_QWORD*)v12 = 0xBCE5808AE6A688E6LL;
  *(_QWORD*)(v12 + 8) = 0xA683E35F968CE5B7LL;
  *(_QWORD*)(v12 + 16) = 0x83E38383E38B83E3LL;
  game_facility_140d160((void*)(&v24_.v24), (__int64)&v21_.v21);
  game_facility_140d000_alt1((void*)((__int64)&v27_.v27), (float*)&v24_.v24);
  if ((v24_.v25 & 1) != 0 && v24_.v26 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v13, v24_.v26);
  }
  if ((v21_.v21 & 1) != 0 && v21_.v23 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v14, v21_.v23);
  }
  v30_.v34 =
      LANES64_OF(
          vzip1_s32(
              COERCE_AS(int32x2_t, LANES128(v27_.v27).n128_u64[0]),
              COERCE_AS(
                  int32x2_t,
                  LANES128_OF(vextq_s8(v27_.v27, v27_.v27, 8u)).n128_u64[0])))
          .n64_u64[0];
  if ((v27_.v28 & 1) != 0 && v27_.v29 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v15, v27_.v29);
  }
  LANES128(v27_.v27).n128_u32[0] = 1525034596;
  LODWORD(v24_.v24) = -1193575789;
  v52_.v53 = GameRoutine_10d6d40(&v52_.v52, (int*)&v27_.v27, (int*)&v24_.v24);
  v16 = *(_QWORD*)v4;
  LODWORD(v52_.v55) = v52_.v55 | 0x8004820;
  v52_.v69 = "Side";
  v17 = (_QWORD*)fw_memory_HeapManager_Allocate(v16, 792, 16, 0);
  v17[2] = 0;
  v18 = (__int64)(v17 + 3);
  v19 = (unsigned __int64)v17;
  *v17 = GameData_212d1e8 + 2;
  v17[1] = 0;
  memset_alt1((__int64)(v17 + 3), 0, 0x2D8u);
  *(_QWORD*)(v19 + 256) = 0;
  *(_QWORD*)(v19 + 264) = 0;
  *(_QWORD*)(v19 + 352) = 0;
  *(_QWORD*)(v19 + 360) = 0;
  *(_QWORD*)(v19 + 448) = 0;
  *(_QWORD*)(v19 + 456) = 0;
  *(_DWORD*)(v19 + 367) = 0;
  *(_QWORD*)(v19 + 176) = 0;
  *(_QWORD*)(v19 + 184) = 0;
  *(_QWORD*)(v19 + 192) = 0;
  *(_QWORD*)(v19 + 200) = 0;
  *(_WORD*)(v19 + 208) = 0;
  *(_QWORD*)(v19 + 280) = 0;
  *(_QWORD*)(v19 + 288) = 0;
  *(_BYTE*)(v19 + 296) = 0;
  *(_QWORD*)(v19 + 240) = 0;
  *(_QWORD*)(v19 + 248) = 0;
  *(_DWORD*)(v19 + 328) = -1;
  *(_QWORD*)(v19 + 336) = 0;
  *(_QWORD*)(v19 + 344) = 0;
  *(_QWORD*)(v19 + 376) = 0;
  *(_QWORD*)(v19 + 384) = 0;
  *(_BYTE*)(v19 + 392) = 0;
  *(_QWORD*)(v19 + 144) = 0x43FA000043FA0000LL;
  *(_QWORD*)(v19 + 152) = 0xC3FA0000C3FA0000LL;
  *(_QWORD*)(v19 + 160) = 0x43FA000043FA0000LL;
  *(_QWORD*)(v19 + 168) = 0xC3FA0000C3FA0000LL;
  *(_QWORD*)(v19 + 232) = 0;
  *(_DWORD*)(v19 + 463) = 0;
  *(_DWORD*)(v19 + 424) = -1;
  *(_QWORD*)(v19 + 432) = 0;
  *(_QWORD*)(v19 + 440) = 0;
  *(_BYTE*)(v19 + 488) = 0;
  *(_QWORD*)(v19 + 472) = 0;
  *(_QWORD*)(v19 + 480) = 0;
  *(_DWORD*)(v19 + 271) = 0;
  *(_DWORD*)(v19 + 520) = -1;
  *(_DWORD*)(v19 + 559) = 0;
  *(_QWORD*)(v19 + 552) = 0;
  *(_QWORD*)(v19 + 544) = 0;
  *(_QWORD*)(v19 + 536) = 0;
  *(_QWORD*)(v19 + 528) = 0;
  *(_BYTE*)(v19 + 584) = 0;
  *(_QWORD*)(v19 + 576) = 0;
  *(_QWORD*)(v19 + 568) = 0;
  *(_DWORD*)(v19 + 616) = -1;
  *(_QWORD*)(v19 + 624) = 0;
  *(_QWORD*)(v19 + 632) = 0;
  *(_QWORD*)(v19 + 640) = 0;
  *(_QWORD*)(v19 + 648) = 0;
  *(_QWORD*)(v19 + 656) = 0;
  *(_QWORD*)(v19 + 664) = 0;
  *(_QWORD*)(v19 + 672) = 0;
  *(_QWORD*)(v19 + 680) = 0;
  *(_QWORD*)(v19 + 688) = 0;
  *(_QWORD*)(v19 + 696) = 0;
  *(_QWORD*)(v19 + 704) = 0;
  *(_QWORD*)(v19 + 300) = 0x6300000063LL;
  *(_QWORD*)(v19 + 396) = 0x6300000063LL;
  *(_QWORD*)(v19 + 492) = 0x6300000063LL;
  *(_QWORD*)(v19 + 712) = 0;
  *(_QWORD*)(v19 + 720) = 0;
  *(_QWORD*)(v19 + 728) = 0;
  *(_QWORD*)(v19 + 736) = 0;
  *(_DWORD*)(v19 + 744) = 0;
  *(_QWORD*)(v19 + 784) = 0;
  *(_QWORD*)(v19 + 776) = 0;
  *(_QWORD*)(v19 + 768) = 0;
  *(_QWORD*)(v19 + 760) = 0;
  *(_QWORD*)(v19 + 752) = 0;
  LANES128(v27_.v27).n128_u64[0] = v18;
  LANES128(v27_.v27).n128_u64[1] = v19;
  *(_QWORD*)(v19 + 320) = -4294967197LL;
  *(_QWORD*)(v19 + 416) = -4294967197LL;
  *(_QWORD*)(v19 + 512) = -4294967197LL;
  *(_QWORD*)(v19 + 588) = 0x6300000063LL;
  *(_QWORD*)(v19 + 608) = -4294967197LL;
  GameRoutine_10eb860(v18, (__int64)v30_.v30);
  GameHr_1090da0(v18);
  game_combat_CombatSequenceImpl_CombatSequenceImpl(a1, (__int64)&v27_.v27,
                                                    a1 + 184);
  v20 = LANES128(v27_.v27).n128_i64[1];
  if (LANES128(v27_.v27).n128_u64[1] != 0 &&
      atomic_fetch_add(
          (atomic_ullong* volatile)(LANES128(v27_.v27).n128_u64[1] + 8),
          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak_alt1(v20);
  }
  GameRoutine_a0eb00_alt1((__int64)v30_.v30);
}

#pragma GCC visibility pop
