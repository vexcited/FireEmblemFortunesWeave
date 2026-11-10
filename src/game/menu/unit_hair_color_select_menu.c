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
__int64 UnitHairColorSelectMenu_Unknown84(__int64 a1);

__int64 UnitHairColorSelectMenu_Unknown84(__int64 a1)
{
  __int64 result;
  char v3;
  int v4;
  __int64* v5;
  float v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BYTE v25[480];
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char v30;
  int v31;

  result = LayoutAccessor_1562cf0(a1 + 952, "2LineColor");
  if (*GameData_2131a88[0] != 0) {
    v3 = *(_BYTE*)(*GameData_2131a88[0] + 276);
    v4 = 0;
    v5 = GameData_212dea8;
    v6 = *(float*)GameData_212ea38;
    v7 = GameData_212dea8 + 2;
    do {
      v26 = v7;
      v31 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = v3;
      HIBYTE(v31) = v4;
      GameRoutine_179c320(v25, &v26);
      v8 = game_util_Format("L_MenuItem%02d", v4);
      LayoutAccessor_1560070((void*)(&v23), a1 + 952, v8);
      if (v24 != 0) {
        v9 = std___1___shared_weak_count_lock(v24);
        v10 = v23;
        if (v24 != 0) {
          std___1___shared_weak_count___release_weak();
        }
        if (v9 != 0 && v10 != 0) {
          v11 = ui_LayoutAccessor_FindPane(v10, "Color");
          v12 =
              __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
          v13 = Pane_58f8a0(v12);
          LOBYTE(v14) = v25[260];
          v15 = v13;
          v16 = powf((float)v14 / 0x1.fe00000000000p+7f, v6);
          v17 = 0.0f;
          v18 = 0.0f;
          if (v16 >= 0.0f) {
            v18 = v16;
            if (v16 > 1.0f) {
              v18 = 1.0f;
            }
          }
          LOBYTE(v16) = v25[261];
          v19 = powf((float)LODWORD(v16) / 0x1.fe00000000000p+7f, v6);
          if (v19 >= 0.0f) {
            v17 = v19;
            if (v19 > 1.0f) {
              v17 = 1.0f;
            }
          }
          LOBYTE(v19) = v25[262];
          v20 = powf((float)LODWORD(v19) / 0x1.fe00000000000p+7f, v6);
          v21 = 0.0f;
          if (v20 >= 0.0f) {
            v21 = v20;
            if (v20 > 1.0f) {
              v21 = 1.0f;
            }
          }
          *(_DWORD*)(v15 + 12) =
              (v25[263] << 24) |
              ((int)(float)(v21 * 0x1.fe00000000000p+7f) << 16) |
              ((int)(float)(v17 * 0x1.fe00000000000p+7f) << 8) |
              (int)(float)(v18 * 0x1.fe00000000000p+7f);
        LABEL_20:
          if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            std___1___shared_weak_count___release_weak();
          }
          goto LABEL_22;
        }
        if (v9 != 0) {
          goto LABEL_20;
        }
      }
    LABEL_22:
      result = TrickEntity_7d1480(v25);
      v26 = v5 + 2;
      if ((v27 & 1) != 0 && v29 != 0) {
        v22 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v22 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
      }
      ++v4;
    } while (v4 != 24);
  }
  return result;
}

#pragma GCC visibility pop
