#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(_QWORD);
__int64 GameRoutine_155cda0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155d940(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_1563c50(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_17484f0(_QWORD*);
__int64 GameRoutine_1749800(__int64);
__int64 GameRoutine_1749970(__int64 result, long double);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_telop_TelopStatusChange_vtable[])();
extern __int64 GameData_22736d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
extern __int64 ui_LayoutAccessor_empty_;
__int64 TelopStatusChange_Unknown34(__int64 a1);
__int64 TelopStatusChange_Unknown35(__int64 result);
__int64 TelopStatusChange_Unknown39_alt1(
    __int64 result, long double a2) __asm__("TelopStatusChange_Unknown39");
__int64 TelopStatusChange_Unknown2(__int64 a1, long double a2);
__int64 TelopStatusChange_Destructor_alt1(__int64 a1) __asm__(
    "TelopStatusChange_Destructor");
__int64 TelopStatusChange_DeletingDestructor_alt1(__int64 a1) __asm__(
    "TelopStatusChange_DeletingDestructor");
__int64 TelopStatusChange_17484f0(_QWORD* a1);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 game_ProcInst_Register(_QWORD);
extern __int64* GameData_2130240[8];
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131678;
__int64 TelopStatusChange_174aca0(__int64 a1);
_QWORD* ui_LayoutAccessor_Setup_155dda0(__int64*, __int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_telop_1748da0(__int64, _QWORD*, __int64*, __int64, __int64,
                           _QWORD*);
__int64 game_telop_1749040(__int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 (*GameData_1fa9430[])();
void GameRoutine_97e2c0(__int64, _QWORD*);
void TelopStatusChange_Unknown33(_QWORD* a1);
__int64 LayoutAccessor_1563c50(__int64 result, __int64, char, float);
unsigned __int64 GameHr_1562680(unsigned __int64 result, char*, float);
void TelopReliance_1386f80(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
unsigned __int64 TelopStatusChange_Unknown39(unsigned __int64 result);
void TelopStatusChange_Destructor(__int64 a1);
void TelopStatusChange_DeletingDestructor(__int64 a1);

__int64 TelopStatusChange_17484f0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;

  v1 = a1[47];
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak_alt1(v1);
  }
  v3 = a1[45];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = a1[43];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  v5 = a1[41];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = a1[39];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = a1[37];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  v8 = a1[35];
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
  }
  v9 = a1[33];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  v10 = a1[31];
  if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak_alt1(v10);
  }
  v11 = a1[29];
  if (v11 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    result = a1[1];
    if (result == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak_alt1(v11);
  result = a1[1];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

__int64 TelopStatusChange_174aca0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
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
  __int64 result;

  v2 = GameData_212c608[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_WORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = "NULL";
  *(_QWORD*)(a1 + 138) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = v2 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register(a1);
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_DWORD*)(a1 + 320) = 3;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = a1 + 200;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_DWORD*)(a1 + 332) = 0;
  *(_QWORD*)(a1 + 324) = 0;
  *(_DWORD*)(a1 + 248) = 1065353216;
  *(_WORD*)(a1 + 336) = 1;
  *(_BYTE*)(a1 + 338) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_DWORD*)(a1 + 432) = 0x2000;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = a1 + 472;
  *(_QWORD*)(a1 + 472) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_DWORD*)(a1 + 520) = 1065353216;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_DWORD*)(a1 + 552) = 1065353216;
  *(_WORD*)(a1 + 560) = 0;
  *(_WORD*)(a1 + 584) = 0;
  *(_BYTE*)(a1 + 608) = 0;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 648) = 0;
  *(_QWORD*)(a1 + 632) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 640) = a1 + 648;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 680) = 0;
  *(_QWORD*)(a1 + 672) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_DWORD*)(a1 + 696) = 1065353216;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_DWORD*)(a1 + 728) = 1065353216;
  *(_WORD*)(a1 + 736) = 0;
  *(_WORD*)(a1 + 760) = 0;
  *(_BYTE*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 792) = 0;
  *(_BYTE*)(a1 + 800) = 0;
  v3 = GameData_2130240[0] + 2;
  *(_BYTE*)(a1 + 816) = 0;
  *(_BYTE*)(a1 + 820) = 0;
  *(_DWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_DWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 808) = v3;
  *(_QWORD*)a1 = game_telop_TelopStatusChange_vtable;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  v6 = fw_memory_HeapManager_Allocate(v5, 296, 16, 0);
  *(_QWORD*)(v6 + 16) = 0;
  v7 = GameData_2131678;
  *(_DWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_DWORD*)(v6 + 48) = 0x2000;
  v8 = v7 + 16;
  *(_DWORD*)(v6 + 104) = 0;
  *(_WORD*)(v6 + 108) = 256;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_WORD*)(v6 + 80) = 0;
  *(_DWORD*)(v6 + 112) = -1082130432;
  *(_WORD*)(v6 + 116) = 0;
  *(_WORD*)(v6 + 136) = 0;
  *(_BYTE*)(v6 + 160) = 0;
  *(_BYTE*)(v6 + 288) = 0;
  *(_QWORD*)(v6 + 272) = 0;
  *(_QWORD*)(v6 + 280) = 0;
  *(_QWORD*)(v6 + 256) = 0;
  *(_QWORD*)(v6 + 264) = 0;
  *(_QWORD*)(v6 + 240) = 0;
  *(_QWORD*)(v6 + 248) = 0;
  *(_QWORD*)(v6 + 224) = 0;
  *(_QWORD*)(v6 + 232) = 0;
  *(_QWORD*)(v6 + 208) = 0;
  *(_QWORD*)(v6 + 216) = 0;
  *(_QWORD*)(v6 + 192) = 0;
  *(_QWORD*)(v6 + 200) = 0;
  *(_QWORD*)(v6 + 176) = 0;
  *(_QWORD*)(v6 + 184) = 0;
  *(_QWORD*)(v6 + 168) = 0;
  *(_QWORD*)(v6 + 120) = 0;
  *(_DWORD*)(v6 + 127) = 0;
  *(_DWORD*)(v6 + 292) = 2;
  *(_QWORD*)(a1 + 1056) = v6;
  *(_QWORD*)(v6 + 24) = 0;
  v9 = v6 + 24;
  *(_QWORD*)v6 = v8;
  *(_QWORD*)(v6 + 8) = 0;
  v10 = *v4;
  *(_QWORD*)(a1 + 1048) = v9;
  v11 = fw_memory_HeapManager_Allocate(v10, 296, 16, 0);
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 16) = 0;
  *(_QWORD*)v11 = v8;
  v12 = v11;
  *(_DWORD*)(v11 + 32) = 0;
  *(_QWORD*)(v11 + 40) = 0;
  *(_DWORD*)(v11 + 48) = 0x2000;
  *(_DWORD*)(v11 + 104) = 0;
  *(_WORD*)(v11 + 108) = 256;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_WORD*)(v11 + 80) = 0;
  *(_DWORD*)(v11 + 112) = -1082130432;
  *(_WORD*)(v11 + 116) = 0;
  *(_WORD*)(v11 + 136) = 0;
  *(_BYTE*)(v11 + 160) = 0;
  *(_BYTE*)(v11 + 288) = 0;
  *(_QWORD*)(v11 + 272) = 0;
  *(_QWORD*)(v11 + 280) = 0;
  *(_QWORD*)(v11 + 256) = 0;
  *(_QWORD*)(v11 + 264) = 0;
  *(_QWORD*)(v11 + 240) = 0;
  *(_QWORD*)(v11 + 248) = 0;
  *(_QWORD*)(v11 + 224) = 0;
  *(_QWORD*)(v11 + 232) = 0;
  *(_QWORD*)(v11 + 208) = 0;
  *(_QWORD*)(v11 + 216) = 0;
  *(_QWORD*)(v11 + 192) = 0;
  *(_QWORD*)(v11 + 200) = 0;
  *(_QWORD*)(v11 + 176) = 0;
  *(_QWORD*)(v11 + 184) = 0;
  *(_QWORD*)(v11 + 168) = 0;
  *(_QWORD*)(v11 + 120) = 0;
  *(_DWORD*)(v11 + 127) = 0;
  *(_DWORD*)(v11 + 292) = 2;
  *(_QWORD*)(a1 + 1072) = v11;
  v13 = *v4;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(a1 + 1064) = v12 + 24;
  v14 = fw_memory_HeapManager_Allocate(v13, 296, 16, 0);
  *(_QWORD*)(v14 + 8) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_QWORD*)v14 = v8;
  v15 = v14;
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
  *(_QWORD*)(a1 + 1088) = v14;
  v16 = *v4;
  *(_QWORD*)(v15 + 24) = 0;
  *(_QWORD*)(a1 + 1080) = v15 + 24;
  v17 = fw_memory_HeapManager_Allocate(v16, 296, 16, 0);
  *(_QWORD*)(v17 + 8) = 0;
  *(_QWORD*)(v17 + 16) = 0;
  *(_QWORD*)v17 = v8;
  v18 = v17;
  *(_DWORD*)(v17 + 32) = 0;
  *(_QWORD*)(v17 + 40) = 0;
  *(_DWORD*)(v17 + 48) = 0x2000;
  *(_DWORD*)(v17 + 104) = 0;
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
  *(_QWORD*)(a1 + 1104) = v17;
  v19 = *v4;
  *(_QWORD*)(v18 + 24) = 0;
  *(_QWORD*)(a1 + 1096) = v18 + 24;
  v20 = fw_memory_HeapManager_Allocate(v19, 296, 16, 0);
  *(_QWORD*)(v20 + 8) = 0;
  *(_QWORD*)(v20 + 16) = 0;
  *(_QWORD*)v20 = v8;
  v21 = v20;
  *(_DWORD*)(v20 + 32) = 0;
  *(_QWORD*)(v20 + 40) = 0;
  *(_DWORD*)(v20 + 48) = 0x2000;
  *(_DWORD*)(v20 + 104) = 0;
  *(_WORD*)(v20 + 108) = 256;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_QWORD*)(v20 + 72) = 0;
  *(_WORD*)(v20 + 80) = 0;
  *(_DWORD*)(v20 + 112) = -1082130432;
  *(_WORD*)(v20 + 116) = 0;
  *(_WORD*)(v20 + 136) = 0;
  *(_BYTE*)(v20 + 160) = 0;
  *(_BYTE*)(v20 + 288) = 0;
  *(_QWORD*)(v20 + 272) = 0;
  *(_QWORD*)(v20 + 280) = 0;
  *(_QWORD*)(v20 + 256) = 0;
  *(_QWORD*)(v20 + 264) = 0;
  *(_QWORD*)(v20 + 240) = 0;
  *(_QWORD*)(v20 + 248) = 0;
  *(_QWORD*)(v20 + 224) = 0;
  *(_QWORD*)(v20 + 232) = 0;
  *(_QWORD*)(v20 + 208) = 0;
  *(_QWORD*)(v20 + 216) = 0;
  *(_QWORD*)(v20 + 192) = 0;
  *(_QWORD*)(v20 + 200) = 0;
  *(_QWORD*)(v20 + 176) = 0;
  *(_QWORD*)(v20 + 184) = 0;
  *(_QWORD*)(v20 + 168) = 0;
  *(_QWORD*)(v20 + 120) = 0;
  *(_DWORD*)(v20 + 127) = 0;
  *(_DWORD*)(v20 + 292) = 2;
  *(_QWORD*)(a1 + 1120) = v20;
  v22 = *v4;
  *(_QWORD*)(v21 + 24) = 0;
  *(_QWORD*)(a1 + 1112) = v21 + 24;
  v23 = fw_memory_HeapManager_Allocate(v22, 296, 16, 0);
  *(_QWORD*)(v23 + 8) = 0;
  *(_QWORD*)(v23 + 16) = 0;
  *(_QWORD*)v23 = v8;
  v24 = v23;
  *(_DWORD*)(v23 + 32) = 0;
  *(_QWORD*)(v23 + 40) = 0;
  *(_DWORD*)(v23 + 48) = 0x2000;
  *(_DWORD*)(v23 + 104) = 0;
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
  *(_QWORD*)(a1 + 1136) = v23;
  v25 = *v4;
  *(_QWORD*)(v24 + 24) = 0;
  *(_QWORD*)(a1 + 1128) = v24 + 24;
  v26 = fw_memory_HeapManager_Allocate(v25, 296, 16, 0);
  *(_QWORD*)(v26 + 8) = 0;
  *(_QWORD*)(v26 + 16) = 0;
  *(_QWORD*)v26 = v8;
  v27 = v26;
  *(_DWORD*)(v26 + 32) = 0;
  *(_QWORD*)(v26 + 40) = 0;
  *(_DWORD*)(v26 + 48) = 0x2000;
  *(_DWORD*)(v26 + 104) = 0;
  *(_WORD*)(v26 + 108) = 256;
  *(_QWORD*)(v26 + 56) = 0;
  *(_QWORD*)(v26 + 64) = 0;
  *(_QWORD*)(v26 + 72) = 0;
  *(_WORD*)(v26 + 80) = 0;
  *(_DWORD*)(v26 + 112) = -1082130432;
  *(_WORD*)(v26 + 116) = 0;
  *(_WORD*)(v26 + 136) = 0;
  *(_BYTE*)(v26 + 160) = 0;
  *(_BYTE*)(v26 + 288) = 0;
  *(_QWORD*)(v26 + 272) = 0;
  *(_QWORD*)(v26 + 280) = 0;
  *(_QWORD*)(v26 + 256) = 0;
  *(_QWORD*)(v26 + 264) = 0;
  *(_QWORD*)(v26 + 240) = 0;
  *(_QWORD*)(v26 + 248) = 0;
  *(_QWORD*)(v26 + 224) = 0;
  *(_QWORD*)(v26 + 232) = 0;
  *(_QWORD*)(v26 + 208) = 0;
  *(_QWORD*)(v26 + 216) = 0;
  *(_QWORD*)(v26 + 192) = 0;
  *(_QWORD*)(v26 + 200) = 0;
  *(_QWORD*)(v26 + 176) = 0;
  *(_QWORD*)(v26 + 184) = 0;
  *(_QWORD*)(v26 + 168) = 0;
  *(_QWORD*)(v26 + 120) = 0;
  *(_DWORD*)(v26 + 127) = 0;
  *(_DWORD*)(v26 + 292) = 2;
  *(_QWORD*)(a1 + 1152) = v26;
  v28 = *v4;
  *(_QWORD*)(v27 + 24) = 0;
  *(_QWORD*)(a1 + 1144) = v27 + 24;
  v29 = fw_memory_HeapManager_Allocate(v28, 296, 16, 0);
  *(_QWORD*)(v29 + 8) = 0;
  *(_QWORD*)(v29 + 16) = 0;
  *(_QWORD*)v29 = v8;
  v30 = v29;
  *(_DWORD*)(v29 + 32) = 0;
  *(_QWORD*)(v29 + 40) = 0;
  *(_DWORD*)(v29 + 48) = 0x2000;
  *(_DWORD*)(v29 + 104) = 0;
  *(_WORD*)(v29 + 108) = 256;
  *(_QWORD*)(v29 + 56) = 0;
  *(_QWORD*)(v29 + 64) = 0;
  *(_QWORD*)(v29 + 72) = 0;
  *(_WORD*)(v29 + 80) = 0;
  *(_DWORD*)(v29 + 112) = -1082130432;
  *(_WORD*)(v29 + 116) = 0;
  *(_WORD*)(v29 + 136) = 0;
  *(_BYTE*)(v29 + 160) = 0;
  *(_BYTE*)(v29 + 288) = 0;
  *(_QWORD*)(v29 + 272) = 0;
  *(_QWORD*)(v29 + 280) = 0;
  *(_QWORD*)(v29 + 256) = 0;
  *(_QWORD*)(v29 + 264) = 0;
  *(_QWORD*)(v29 + 240) = 0;
  *(_QWORD*)(v29 + 248) = 0;
  *(_QWORD*)(v29 + 224) = 0;
  *(_QWORD*)(v29 + 232) = 0;
  *(_QWORD*)(v29 + 208) = 0;
  *(_QWORD*)(v29 + 216) = 0;
  *(_QWORD*)(v29 + 192) = 0;
  *(_QWORD*)(v29 + 200) = 0;
  *(_QWORD*)(v29 + 176) = 0;
  *(_QWORD*)(v29 + 184) = 0;
  *(_QWORD*)(v29 + 168) = 0;
  *(_QWORD*)(v29 + 120) = 0;
  *(_DWORD*)(v29 + 127) = 0;
  *(_DWORD*)(v29 + 292) = 2;
  *(_QWORD*)(a1 + 1168) = v29;
  v31 = *v4;
  *(_QWORD*)(v30 + 24) = 0;
  *(_QWORD*)(a1 + 1160) = v30 + 24;
  v32 = fw_memory_HeapManager_Allocate(v31, 296, 16, 0);
  *(_QWORD*)(v32 + 8) = 0;
  *(_QWORD*)(v32 + 16) = 0;
  *(_QWORD*)v32 = v8;
  v33 = v32;
  *(_DWORD*)(v32 + 32) = 0;
  *(_QWORD*)(v32 + 40) = 0;
  *(_DWORD*)(v32 + 48) = 0x2000;
  *(_DWORD*)(v32 + 104) = 0;
  *(_BYTE*)(v32 + 108) = 0;
  *(_QWORD*)(v32 + 56) = 0;
  *(_QWORD*)(v32 + 64) = 0;
  *(_QWORD*)(v32 + 72) = 0;
  *(_WORD*)(v32 + 80) = 0;
  *(_BYTE*)(v32 + 109) = 1;
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
  *(_QWORD*)(a1 + 1184) = v32;
  v34 = *v4;
  *(_QWORD*)(v33 + 24) = 0;
  *(_QWORD*)(a1 + 1176) = v33 + 24;
  v35 = fw_memory_HeapManager_Allocate(v34, 296, 16, 0);
  *(_QWORD*)(v35 + 8) = 0;
  *(_QWORD*)(v35 + 16) = 0;
  *(_QWORD*)v35 = v8;
  *(_DWORD*)(v35 + 32) = 0;
  *(_QWORD*)(v35 + 40) = 0;
  *(_DWORD*)(v35 + 48) = 0x2000;
  *(_DWORD*)(v35 + 104) = 0;
  *(_BYTE*)(v35 + 108) = 0;
  *(_QWORD*)(v35 + 56) = 0;
  *(_QWORD*)(v35 + 64) = 0;
  *(_QWORD*)(v35 + 72) = 0;
  *(_WORD*)(v35 + 80) = 0;
  *(_BYTE*)(v35 + 109) = 1;
  *(_DWORD*)(v35 + 112) = -1082130432;
  *(_WORD*)(v35 + 116) = 0;
  *(_WORD*)(v35 + 136) = 0;
  *(_BYTE*)(v35 + 160) = 0;
  *(_BYTE*)(v35 + 288) = 0;
  *(_QWORD*)(v35 + 272) = 0;
  *(_QWORD*)(v35 + 280) = 0;
  *(_QWORD*)(v35 + 256) = 0;
  *(_QWORD*)(v35 + 264) = 0;
  *(_QWORD*)(v35 + 240) = 0;
  *(_QWORD*)(v35 + 248) = 0;
  *(_QWORD*)(v35 + 224) = 0;
  *(_QWORD*)(v35 + 232) = 0;
  *(_QWORD*)(v35 + 208) = 0;
  *(_QWORD*)(v35 + 216) = 0;
  *(_QWORD*)(v35 + 192) = 0;
  *(_QWORD*)(v35 + 200) = 0;
  *(_QWORD*)(v35 + 176) = 0;
  *(_QWORD*)(v35 + 184) = 0;
  *(_QWORD*)(v35 + 168) = 0;
  *(_QWORD*)(v35 + 120) = 0;
  *(_DWORD*)(v35 + 127) = 0;
  *(_DWORD*)(v35 + 292) = 2;
  *(_QWORD*)(a1 + 1200) = v35;
  *(_WORD*)(a1 + 1208) = 0;
  *(_QWORD*)(v35 + 24) = 0;
  result = v35 + 24;
  *(_QWORD*)(a1 + 1192) = result;
  *(_DWORD*)(a1 + 1212) = 4;
  *(_WORD*)(a1 + 1304) = 0;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1224) = 0;
  *(_QWORD*)(a1 + 1232) = 0;
  *(_QWORD*)(a1 + 1240) = 0;
  *(_QWORD*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1256) = 0;
  *(_QWORD*)(a1 + 1264) = 0;
  *(_QWORD*)(a1 + 1272) = 0;
  *(_QWORD*)(a1 + 1280) = 0;
  *(_QWORD*)(a1 + 1288) = 0;
  *(_DWORD*)(a1 + 1296) = 0;
  return result;
}

void TelopStatusChange_Unknown33(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[3];
  struct {
    __int64 v18;
    __int64 v19;
  } v18_;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
  *(_QWORD*)(v2 + 16) = 0;
  v3 = a1[153];
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  a1[153] = v2;
  *(_QWORD*)v2 = GameData_1fa9430;
  *(_QWORD*)(v2 + 8) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 48) = v2 + 56;
  *(_DWORD*)(v2 + 104) = 1065353216;
  *(_QWORD*)(v2 + 24) = 0;
  a1[152] = v2 + 24;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = (__int64*)a1[152];
  v5 = a1[22];
  v20_.v20 = 0;
  v20_.v21 = 0;
  if (v5 != 0 && (v6 = std___1___shared_weak_count_lock_alt1(v5), v20_.v21 = v6,
                  v6 != 0)) {
    v7 = v6;
    v20_.v20 = a1[21];
    ui_LayoutAccessor_Setup_155dda0(v4, &v20_.v20);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v7);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(v4, &v20_.v20);
  }
  v8 = (_QWORD*)a1[154];
  v9 = a1[153];
  v18_.v18 = a1[152];
  v18_.v19 = v9;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v10 = a1[155];
    v11 = *(_QWORD*)((char*)a1 + 1286);
    v12 = *(_QWORD*)((char*)a1 + 1292);
    v17[0] = *(_QWORD*)((char*)a1 + 1278);
    v17[1] = v11;
    *(_QWORD*)((char*)&v17[1] + 6) = v12;
    game_telop_1748da0((__int64)(a1 + 103), v8, &v18_.v18, v10,
                       (__int64)(a1 + 157), v17);
    std___1___shared_weak_count___release_weak_alt1(v9);
  }
  else {
    v13 = a1[155];
    v14 = *(_QWORD*)((char*)a1 + 1286);
    v15 = *(_QWORD*)((char*)a1 + 1292);
    v17[0] = *(_QWORD*)((char*)a1 + 1278);
    v17[1] = v14;
    *(_QWORD*)((char*)&v17[1] + 6) = v15;
    game_telop_1748da0((__int64)(a1 + 103), v8, &v18_.v18, v13,
                       (__int64)(a1 + 157), v17);
  }
  game_telop_1749040((__int64)(a1 + 103));
  v16 = a1[154];
  v18_.v18 = v16;
  v18_.v19 = 0;
  if (v16 != 0) {
    v18_.v19 = *(_QWORD*)(v16 + 392);
  }
  GameRoutine_97e2c0((__int64)(a1 + 163), &v18_.v18);
}

__int64 TelopStatusChange_Unknown34(__int64 a1)
{
  __int64 result;
  __int64 v2;
  int v3;

  result = GameRoutine_1749800(a1 + 824);
  v2 = GameData_22736d0;
  if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 2) {
    result = GameRoutine_155ea30(GameData_22736d0 + 168);
    if ((result & 1) != 0 || *(_DWORD*)(v2 + 624) != 1) {
      result = GameRoutine_155cda0(v2 + 272, "Out", 0);
      if (*(_DWORD*)(v2 + 624) == 1) {
        v3 = 2;
      }
      else {
        GameRoutine_155d940(v2 + 272);
        result = GameRoutine_155e830(v2 + 168, 0);
        v3 = 1;
      }
      *(_DWORD*)(v2 + 624) = v3;
    }
  }
  return result;
}

__int64 TelopStatusChange_Unknown35(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;

  if (*(_DWORD*)(result + 840) == 0) {
    v1 = result;
    v2 = *(_QWORD*)(result + 832);
    if (v2 != 0) {
      v3 = std___1___shared_weak_count_lock_alt1(v2);
      v4 = &ui_LayoutAccessor_empty_;
      if (v3 != 0) {
        if (*(_QWORD*)(v1 + 824) != 0) {
          v4 = *(__int64**)(v1 + 824);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v5 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          std___1___shared_weak_count___release_weak_alt1(v3);
          v4 = v5;
        }
      }
    }
    else {
      v4 = &ui_LayoutAccessor_empty_;
    }
    result = LayoutAccessor_1563c50((__int64)v4, (__int64)"In", 0,
                                    0x1.0000000000000p+0f);
    *(_DWORD*)(v1 + 840) = 1;
  }
  return result;
}

unsigned __int64 TelopStatusChange_Unknown39(unsigned __int64 result)
{
  __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;

  if (*(int*)(result + 840) >= 5) {
    v1 = *(_QWORD*)(result + 832);
    if (v1 != 0) {
      v2 = result;
      v3 = std___1___shared_weak_count_lock_alt1(v1);
      v4 = &ui_LayoutAccessor_empty_;
      if (v3 != 0) {
        if (*(_QWORD*)(v2 + 824) != 0) {
          v4 = *(__int64**)(v2 + 824);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v5 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
          std___1___shared_weak_count___release_weak_alt1(v3);
          v4 = v5;
        }
      }
    }
    else {
      v4 = &ui_LayoutAccessor_empty_;
    }
    return GameHr_1562680((unsigned __int64)v4, "Out", 0x1.0000000000000p+0f);
  }
  return result;
}

__int64 TelopStatusChange_Unknown2(__int64 a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  int v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  __int16 v10;

  v3 = game_g_game_setting_ptr;
  v4 = GameData_22736d0;
  if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 0xB) != 0) {
    LODWORD(a2) = 8.0;
    if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 0) {
      if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) != 0 &&
          *(_DWORD*)(v4 + 624) == 1) {
        LODWORD(a2) = 8.0;
        goto LABEL_21;
      }
      GameRoutine_155e830(v4 + 168, 1);
      GameRoutine_155cda0(v4 + 272, "In", 0);
      if (*(_DWORD*)(v4 + 624) == 1) {
        v5 = 0;
      }
      else {
        GameRoutine_155d940(v4 + 272);
        v5 = 1;
      }
      LODWORD(a2) = 8.0;
    LABEL_20:
      *(_DWORD*)(v4 + 624) = v5;
    }
  }
  else {
    LODWORD(a2) = 1.0;
    if (GameData_22736d0 != 0 && *(_DWORD*)(GameData_22736d0 + 624) != 2) {
      if ((GameRoutine_155ea30(GameData_22736d0 + 168) & 1) == 0 &&
          *(_DWORD*)(v4 + 624) == 1) {
        LODWORD(a2) = 1.0;
        goto LABEL_21;
      }
      GameRoutine_155cda0(v4 + 272, "Out", 0);
      if (*(_DWORD*)(v4 + 624) == 1) {
        v5 = 2;
      }
      else {
        GameRoutine_155d940(v4 + 272);
        GameRoutine_155e830(v4 + 168, 0);
        v5 = 1;
      }
      LODWORD(a2) = 1.0;
      goto LABEL_20;
    }
  }

LABEL_21:
  GameRoutine_1749970(a1 + 824, a2);
  if (*(_DWORD*)(a1 + 840) == 5) {
    v6 = *(unsigned __int8*)(a1 + 1304);
    if ((v6 & 1) != 0) {
      v7 = *(_QWORD*)(a1 + 1312);
    }
    else {
      v7 = v6 >> 1;
    }
    if (v7 != 0) {
      v8 = 4;
      v9 = *(_QWORD*)(a1 + 8);
      if (v9 != 0) {
        goto LABEL_33;
      }
    }
    else if ((*(_BYTE*)(*(_QWORD*)v3 + 952LL) & 1) != 0) {
      v8 = 6;
      v9 = *(_QWORD*)(a1 + 8);
      if (v9 != 0) {
        while (1) {
        LABEL_33:
          if (*(_BYTE*)v9 == 2) {
            if (*(_DWORD*)(v9 + 32) == v8) {
              v10 = *(_WORD*)(a1 + 136);
              *(_QWORD*)(a1 + 16) = v9;
              *(_WORD*)(a1 + 136) = v10 & 0xFF7F;
              break;
            }
          }
          else if (*(_BYTE*)v9 == 0) {
            break;
          }
          v9 += 64;
        }
      }
    }
  }
  if (*(_BYTE*)(a1 + 335) == 1 &&
      (*(_BYTE*)(*(_QWORD*)v3 + 944LL) & 0xB) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)a1 + 360LL))(a1);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 400LL))(a1);
}

void TelopStatusChange_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_telop_TelopStatusChange_vtable;
  if ((*(_BYTE*)(a1 + 1304) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 1320);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  v4 = *(_QWORD*)(a1 + 1224);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  TelopStatusChange_17484f0((_QWORD*)(a1 + 824));
  TelopReliance_1386f80(a1);
}

void TelopStatusChange_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_telop_TelopStatusChange_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1304) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 1320);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  v5 = *(_QWORD*)(a1 + 1224);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  TelopStatusChange_17484f0((_QWORD*)(a1 + 824));
  TelopReliance_1386f80(a1);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v6, a1);
}

#pragma GCC visibility pop
