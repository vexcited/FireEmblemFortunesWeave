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
__n128 ProcReinforceCombat_Unknown23(__int64 a1, __int64 a2, __int64 a3,
                                     __int64 a4, __int64 a5, __int64 a6,
                                     __int64 a7, __int64 a8);

__n128 ProcReinforceCombat_Unknown23(__int64 a1, __int64 a2, __int64 a3,
                                     __int64 a4, __int64 a5, __int64 a6,
                                     __int64 a7, __int64 a8)
{

#pragma clang fp contract(off)
  __int64* v9;
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
  _QWORD* v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v36;
  struct {
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v38_;
  struct {
    __int128 v41;
    char gap48_[8];
    char v42;
    char gap57_[15];
    __int64 v43;
  } v41_;
  struct {
    float32x4_t v44;
    char gap96_[8];
    char v45;
    char gap105_[15];
    __int64 v46;
  } v44_;
  struct {
    _QWORD v47[3];
    __int64 v48;
    __int64 v49;
    __int64 v50;
    unsigned __int64 v51;
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
    __int64 v68;
  } v47_;
  struct {
    __int64 v69;
    __int64 v70;
    __int64 v71;
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
    __int64 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    int v85;
    char gap460_[4];
    const char* v86;
    int v87;
  } v69_;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v47_.v47[0] = 0;
  v47_.v49 = 0;
  v47_.v50 = 0;
  v47_.v51 = 0;
  v47_.v52 = 0;
  v47_.v55 = 0;
  v47_.v56 = 0;
  v47_.v57 = 0;
  v47_.v58 = 0;
  v47_.v61 = 0;
  v47_.v62 = 0;
  v47_.v63 = 0;
  v47_.v64 = 0;
  v69_.v86 = nullptr;
  v69_.v87 = 0;
  v47_.v67 = 0;
  v47_.v68 = 0;
  v69_.v69 = 0;
  v69_.v70 = 0;
  v69_.v71 = 0;
  v69_.v72 = 0;
  v69_.v73 = 0;
  v69_.v74 = 0;
  v69_.v75 = 0;
  v69_.v76 = 0;
  v69_.v77 = 0;
  v69_.v78 = 0;
  v69_.v79 = 0;
  v69_.v80 = 0;
  v69_.v81 = 0;
  v69_.v82 = 0;
  v69_.v83 = 0;
  v47_.v47[2] = 0x800000014LL;
  v47_.v48 = 0;
  v47_.v53 = 0x800000014LL;
  v47_.v54 = 0;
  v47_.v59 = 0x800000014LL;
  v47_.v60 = 0;
  v47_.v65 = 0x800000014LL;
  v47_.v66 = 0;
  v9 = (__int64*)GameData_212dce8;
  v10 = *(_QWORD*)GameData_212dce8;
  v69_.v84 = 0;
  v69_.v85 = 0;
  v47_.v47[1] =
      *(_QWORD*)(SceneManager_138e5e0(v10, 0, a3, a4, a5, a6, a7, a8) + 8),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v11 = fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       32, 16, 0),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *(_BYTE*)(v12 + 27) = 0;
  v38_.v38 = 33;
  v38_.v39 = 27;
  v38_.v40 = v12;
  *(_DWORD*)(v12 + 23) = 811567235;
  *(_QWORD*)v12 = 0xBCE5808AE6A688E6LL;
  *(_QWORD*)(v12 + 8) = 0xA683E35F968CE5B7LL;
  *(_QWORD*)(v12 + 16) = 0x83E38383E38B83E3LL;
  game_facility_140d160((void*)(&v41_.v41), (__int64)&v38_.v38),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  game_facility_140d000((void*)(&v44_.v44), (__int64)&v41_.v41),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v41_.v42 & 1) != 0 && v41_.v43 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v19),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if ((v38_.v38 & 1) != 0 && v38_.v40 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v20),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v47_.v47[0] =
      LANES64_OF(
          vzip1_s32(
              COERCE_AS(int32x2_t, LANES128(v44_.v44).n128_u64[0]),
              COERCE_AS(
                  int32x2_t,
                  LANES128_OF(vextq_s8(v44_.v44, v44_.v44, 8u)).n128_u64[0])))
          .n64_u64[0];
  v21 = *(_QWORD*)(*GameData_2131560[0] + 96);
  if (v21 != 0 || (v21 = *(_QWORD*)(*GameData_2131560[0] + 104)) != 0) {
    v21 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(v21 + 16) & 0xFFF));
  }
  v47_.v48 = v21;
  if ((v44_.v45 & 1) != 0 && v44_.v46 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v22),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v23 = *(_QWORD*)(SceneManager_138e5e0(*v9, 1, v13, v14, v15, v16, v17, v18) +
                   8),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v24 = *(_QWORD*)v11;
  v47_.v52 = v23;
  v25 = fw_memory_HeapManager_Allocate(v24, 32, 16, 0),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *(_BYTE*)(v25 + 27) = 0;
  v38_.v38 = 33;
  v38_.v39 = 27;
  v38_.v40 = v25;
  *(_DWORD*)(v25 + 23) = 828344451;
  *(_QWORD*)v25 = 0xBCE5808AE6A688E6LL;
  *(_QWORD*)(v25 + 8) = 0xA683E35F968CE5B7LL;
  *(_QWORD*)(v25 + 16) = 0x83E38383E38B83E3LL;
  game_facility_140d160((void*)(&v41_.v41), (__int64)&v38_.v38),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  game_facility_140d000((void*)(&v44_.v44), (__int64)&v41_.v41),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  if ((v41_.v42 & 1) != 0 && v41_.v43 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v26),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  if ((v38_.v38 & 1) != 0 && v38_.v40 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v27),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  v47_.v51 =
      LANES64_OF(
          vzip1_s32(
              COERCE_AS(int32x2_t, LANES128(v44_.v44).n128_u64[0]),
              COERCE_AS(
                  int32x2_t,
                  LANES128_OF(vextq_s8(v44_.v44, v44_.v44, 8u)).n128_u64[0])))
          .n64_u64[0];
  if ((v44_.v45 & 1) != 0 && v44_.v46 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v28),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  LANES128(v44_.v44).n128_u32[0] = 1525034596;
  LODWORD(v41_.v41) = -1193575789;
  v69_.v70 = GameRoutine_10d6d40(&v69_.v69, (int*)&v44_.v44, (int*)&v41_.v41),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v29 = *(_QWORD*)v11;
  LODWORD(v69_.v72) = v69_.v72 | 0x8004820;
  v69_.v86 = "Side";
  v30 = (_QWORD*)fw_memory_HeapManager_Allocate(v29, 792, 16, 0),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v30[2] = 0;
  v31 = (__int64)(v30 + 3);
  v32 = (unsigned __int64)v30;
  *v30 = GameData_212d1e8 + 2;
  v30[1] = 0;
  memset(v30 + 3, 0, 728),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  *(_QWORD*)(v32 + 256) = 0;
  *(_QWORD*)(v32 + 264) = 0;
  *(_QWORD*)(v32 + 352) = 0;
  *(_QWORD*)(v32 + 360) = 0;
  *(_QWORD*)(v32 + 448) = 0;
  *(_QWORD*)(v32 + 456) = 0;
  *(_DWORD*)(v32 + 367) = 0;
  *(_QWORD*)(v32 + 176) = 0;
  *(_QWORD*)(v32 + 184) = 0;
  *(_QWORD*)(v32 + 192) = 0;
  *(_QWORD*)(v32 + 200) = 0;
  *(_WORD*)(v32 + 208) = 0;
  *(_QWORD*)(v32 + 280) = 0;
  *(_QWORD*)(v32 + 288) = 0;
  *(_BYTE*)(v32 + 296) = 0;
  *(_QWORD*)(v32 + 240) = 0;
  *(_QWORD*)(v32 + 248) = 0;
  *(_DWORD*)(v32 + 328) = -1;
  *(_QWORD*)(v32 + 336) = 0;
  *(_QWORD*)(v32 + 344) = 0;
  *(_QWORD*)(v32 + 376) = 0;
  *(_QWORD*)(v32 + 384) = 0;
  *(_BYTE*)(v32 + 392) = 0;
  *(_QWORD*)(v32 + 144) = 0x43FA000043FA0000LL;
  *(_QWORD*)(v32 + 152) = 0xC3FA0000C3FA0000LL;
  *(_QWORD*)(v32 + 160) = 0x43FA000043FA0000LL;
  *(_QWORD*)(v32 + 168) = 0xC3FA0000C3FA0000LL;
  *(_QWORD*)(v32 + 232) = 0;
  *(_DWORD*)(v32 + 463) = 0;
  *(_DWORD*)(v32 + 424) = -1;
  *(_QWORD*)(v32 + 432) = 0;
  *(_QWORD*)(v32 + 440) = 0;
  *(_BYTE*)(v32 + 488) = 0;
  *(_QWORD*)(v32 + 472) = 0;
  *(_QWORD*)(v32 + 480) = 0;
  *(_DWORD*)(v32 + 271) = 0;
  *(_DWORD*)(v32 + 520) = -1;
  *(_DWORD*)(v32 + 559) = 0;
  *(_QWORD*)(v32 + 552) = 0;
  *(_QWORD*)(v32 + 544) = 0;
  *(_QWORD*)(v32 + 536) = 0;
  *(_QWORD*)(v32 + 528) = 0;
  *(_BYTE*)(v32 + 584) = 0;
  *(_QWORD*)(v32 + 576) = 0;
  *(_QWORD*)(v32 + 568) = 0;
  *(_DWORD*)(v32 + 616) = -1;
  *(_QWORD*)(v32 + 624) = 0;
  *(_QWORD*)(v32 + 632) = 0;
  *(_QWORD*)(v32 + 640) = 0;
  *(_QWORD*)(v32 + 648) = 0;
  *(_QWORD*)(v32 + 656) = 0;
  *(_QWORD*)(v32 + 664) = 0;
  *(_QWORD*)(v32 + 672) = 0;
  *(_QWORD*)(v32 + 680) = 0;
  *(_QWORD*)(v32 + 688) = 0;
  *(_QWORD*)(v32 + 696) = 0;
  *(_QWORD*)(v32 + 704) = 0;
  *(_QWORD*)(v32 + 300) = 0x6300000063LL;
  *(_QWORD*)(v32 + 396) = 0x6300000063LL;
  *(_QWORD*)(v32 + 492) = 0x6300000063LL;
  *(_QWORD*)(v32 + 712) = 0;
  *(_QWORD*)(v32 + 720) = 0;
  *(_QWORD*)(v32 + 728) = 0;
  *(_QWORD*)(v32 + 736) = 0;
  *(_DWORD*)(v32 + 744) = 0;
  *(_QWORD*)(v32 + 784) = 0;
  *(_QWORD*)(v32 + 776) = 0;
  *(_QWORD*)(v32 + 768) = 0;
  *(_QWORD*)(v32 + 760) = 0;
  *(_QWORD*)(v32 + 752) = 0;
  LANES128(v44_.v44).n128_u64[0] = v31;
  LANES128(v44_.v44).n128_u64[1] = v32;
  *(_QWORD*)(v32 + 320) = -4294967197LL;
  *(_QWORD*)(v32 + 416) = -4294967197LL;
  *(_QWORD*)(v32 + 512) = -4294967197LL;
  *(_QWORD*)(v32 + 588) = 0x6300000063LL;
  *(_QWORD*)(v32 + 608) = -4294967197LL;
  GameRoutine_10eb860(v31, (__int64)v47_.v47),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_1090da0(v31),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  GameRoutine_10d4da0(a1, (__int64*)&v44_.v44, a1 + 184),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  v36 = LANES128(v44_.v44).n128_u64[1];
  if (LANES128(v44_.v44).n128_u64[1] != 0 &&
      atomic_fetch_add(
          (atomic_ullong* volatile)(LANES128(v44_.v44).n128_u64[1] + 8),
          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v36 + 16LL))(v36),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
    std___1___shared_weak_count___release_weak(),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x4", "=r")),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x5", "=r")),
        v17 = COERCE_AS(__typeof__(v17),
                        PSEUDO_REGISTER(unsigned long long, "x6", "=r")),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x7", "=r"));
  }
  return GameRoutine_a0eb00((__int64)v47_.v47);
}

#pragma GCC visibility pop
