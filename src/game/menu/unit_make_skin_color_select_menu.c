#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 GameRoutine_179c320(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 TrickEntity_7d1480(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern _UNKNOWN* GameData_212ea38;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dea8;
extern __int64* GameData_2131a88[7];
extern __int64 fw_memory_g_heap_manager_ptr;
float powf(float, float);
__int64 UnitMakeSkinColorSelectMenu_Unknown84_alt1(__int64 a1) __asm__(
    "UnitMakeSkinColorSelectMenu_Unknown84");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 GameHr_179c320(__int64, __int64);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void TrickEntity_7d1480_alt1(__int64) __asm__("TrickEntity_7d1480");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void UnitMakeSkinColorSelectMenu_Unknown84(__int64 a1);

void UnitMakeSkinColorSelectMenu_Unknown84(__int64 a1)
{

#pragma clang fp contract(off)
  char v2;
  int v3;
  __int64* v4;
  float v5;
  __int64* v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  struct {
    __int64* v22;
    __int64 v23;
  } v22_;
  _BYTE v24[480];
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  int v30;

  LayoutAccessor_1562cf0_alt1(a1 + 952, (unsigned int*)"2LineColor_Skin");
  if (*GameData_2131a88[0] != 0) {
    v2 = *(_BYTE*)(*GameData_2131a88[0] + 276);
    v3 = 0;
    v4 = GameData_212dea8;
    v5 = *(float*)GameData_212ea38;
    v6 = GameData_212dea8 + 2;
    do {
      v25 = v6;
      v30 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = v2;
      BYTE2(v30) = v3;
      GameHr_179c320((__int64)v24, (__int64)&v25);
      v7 = game_util_Format_alt1("L_MenuItem%02d", v3);
      LayoutAccessor_1560070_alt1((void*)(&v22_.v22), (__int64*)(a1 + 952), v7);
      if (v22_.v23 != 0) {
        v8 = std___1___shared_weak_count_lock_alt1(v22_.v23);
        v9 = v22_.v22;
        if (v22_.v23 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v22_.v23);
        }
        if (v8 != 0 && v9 != nullptr) {
          v10 = ui_LayoutAccessor_FindPane_alt1(v9, "Color");
          v11 =
              __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0);
          v12 = Pane_58f8a0_alt1(v11);
          LOBYTE(v13) = v24[256];
          v14 = v12;
          v15 = powf((float)v13 / 0x1.fe00000000000p+7f, v5);
          v16 = 0x0.0p+0f;
          v17 = 0x0.0p+0f;
          if (v15 >= 0x0.0p+0f) {
            v17 = v15;
            if (v15 > 0x1.0000000000000p+0f) {
              v17 = 0x1.0000000000000p+0f;
            }
          }
          LOBYTE(v15) = v24[257];
          v18 = powf((float)LODWORD(v15) / 0x1.fe00000000000p+7f, v5);
          if (v18 >= 0x0.0p+0f) {
            v16 = v18;
            if (v18 > 0x1.0000000000000p+0f) {
              v16 = 0x1.0000000000000p+0f;
            }
          }
          LOBYTE(v18) = v24[258];
          v19 = powf((float)LODWORD(v18) / 0x1.fe00000000000p+7f, v5);
          v20 = 0x0.0p+0f;
          if (v19 >= 0x0.0p+0f) {
            v20 = v19;
            if (v19 > 0x1.0000000000000p+0f) {
              v20 = 0x1.0000000000000p+0f;
            }
          }
          *(_DWORD*)(v14 + 12) =
              (v24[259] << 24) |
              ((int)(float)(v20 * 0x1.fe00000000000p+7f) << 16) |
              ((int)(float)(v16 * 0x1.fe00000000000p+7f) << 8) |
              (int)(float)(v17 * 0x1.fe00000000000p+7f);
        LABEL_20:
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
            std___1___shared_weak_count___release_weak_alt1(v8);
          }
          goto LABEL_22;
        }
        if (v8 != 0) {
          goto LABEL_20;
        }
      }
    LABEL_22:
      TrickEntity_7d1480_alt1((__int64)v24);
      v25 = v4 + 2;
      if ((v26 & 1) != 0 && v28 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v28);
      }
      ++v3;
    } while (v3 != 12);
  }
}

#pragma GCC visibility pop
