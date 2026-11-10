#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 (*GameData_1fb2880[])();
extern __int64 GameData_212bf68;
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_6c3470(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_996680(void);
__int64 GameRoutine_6c2b50_alt1(__int64) __asm__("GameRoutine_6c2b50");
__int64 GameRoutine_6c3470_alt1(__int64, __int64) __asm__("GameRoutine_6c3470");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memset(__int64, int, unsigned __int64);
extern __int64 (*game_gmap_TroopUnit_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_996680_alt1() __asm__("GameRoutine_996680");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_9966a0(__int64* a1, unsigned __int64 a2);

void GameHr_9966a0(__int64* a1, unsigned __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  unsigned __int64 v19;
  void (***v20)(_QWORD);
  void (***v21)(_QWORD);
  _QWORD* v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;

  v3 = (_QWORD*)a1[1];
  v2 = a1[2];
  if (0x3AEF6CA970586723LL * ((v2 - (__int64)v3) >> 4) >= a2) {
    if (a2 != 0) {
      v13 = 2224 * a2;
      v14 = &v3[278 * a2];
      do {
        memset((__int64)v3, 0, 0x8B0u);
        GameRoutine_6c2b50_alt1((__int64)v3);
        *v3 = game_gmap_TroopUnit_vtable;
        v3 += 278;
        v13 -= 2224;
      } while (v13 != 0);
      v3 = v14;
    }
    a1[1] = (__int64)v3;
  }
  else {
    v5 = (__int64)v3 - *a1;
    v6 = a2 + 0x3AEF6CA970586723LL * (v5 >> 4);
    if (v6 > 0x1D77B654B82C33LL) {
      GameRoutine_996680_alt1();
    }
    v7 = fw_memory_g_heap_manager_ptr;
    v8 = 0x3AEF6CA970586723LL * ((v2 - *a1) >> 4);
    v9 = 2 * v8;
    if (2 * v8 <= v6) {
      v9 = a2 + 0x3AEF6CA970586723LL * (v5 >> 4);
    }
    if (v8 >= 0xEBBDB2A5C1619LL) {
      v10 = 0x1D77B654B82C33LL;
    }
    else {
      v10 = v9;
    }
    if (v10 != 0) {
      if (v10 > 0x1D77B654B82C33LL) {
        GameRoutine_60a210_alt1();
      }
      v11 = a2;
      v12 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 2224 * v10, 16, 0);
      a2 = v11;
    }
    else {
      v12 = 0;
    }
    v15 = (_QWORD*)(v12 + v5);
    v16 = v15;
    v17 = 2224 * a2;
    v18 = &v15[278 * a2];
    do {
      memset((__int64)v16, 0, 0x8B0u);
      GameRoutine_6c2b50_alt1((__int64)v16);
      *v16 = game_gmap_TroopUnit_vtable;
      v16 += 278;
      v17 -= 2224;
    } while (v17 != 0);
    v19 = v12 + 2224 * v10;
    v20 = (void (***)(_QWORD))*a1;
    v21 = (void (***)(_QWORD))a1[1];
    v22 = (_QWORD*)((char*)v15 + *a1 - (_QWORD)v21);
    if (v21 != (void (***)(_QWORD))*a1) {
      v23 = *a1;
      v24 = v22;
      do {
        GameRoutine_6c3470_alt1((__int64)v24, v23);
        *v24 = game_gmap_TroopUnit_vtable;
        v23 += 2224;
        v24 += 278;
      } while ((void (***)(_QWORD))v23 != v21);
      do {
        (**v20)(v20);
        v20 += 278;
      } while (v20 != v21);
      v20 = (void (***)(_QWORD))*a1;
    }
    *a1 = (__int64)v22;
    a1[1] = (__int64)v18;
    a1[2] = v19;
    if (v20 != nullptr) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v25, (__int64)v20);
    }
  }
}

#pragma GCC visibility pop
