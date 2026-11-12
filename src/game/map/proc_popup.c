#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void MapBattleHUD_18c4980(PSEUDO_X8, __int64 result,
                                                     char);
__int64 MapBattleHUD_18c47d0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_ProcInst_Register(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*game_map_ProcPopup_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 ProcPopup_18c7a10_alt1(__int64 a1, _QWORD* a2, __int64* a3, __int64 a4,
                               char a5, char a6) __asm__("ProcPopup_18c7a10");
__attribute__((swiftcall)) void
MapBattleHUD_18c4980_alt1(PSEUDO_X8, float32x4_t**,
                          char) __asm__("MapBattleHUD_18c4980");
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void MapBattleHUD_18c47d0_alt1(__int64*) __asm__("MapBattleHUD_18c47d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void ProcPopup_18c7a10(__int64 a1, _QWORD* a2, __int64* a3, __int64 a4, char a5,
                       char a6);

void ProcPopup_18c7a10(__int64 a1, _QWORD* a2, __int64* a3, __int64 a4, char a5,
                       char a6)
{

#pragma clang fp contract(off)
  char v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  __int64 v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int128 v24;
  __int64 v25;
  int16x4_t v26;
  unsigned __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int128 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37[2];
  float32x4_t* v38[2];
  float32x4_t v39;
  struct {
    unsigned __int64 v40;
    char v41;
  } v40_;

  v10 = a5 & 1;
  v11 = GameData_212c608[0];
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  v12 = a6 & 1;
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
  *(_QWORD*)a1 = v11 + 16;
  *(_QWORD*)(a1 + 8) = 0;
  game_ProcInst_Register_alt1(a1);
  *(_QWORD*)a1 = game_map_ProcPopup_vtable;
  *(_QWORD*)(a1 + 152) = *a2;
  v13 = a2[1];
  *(_QWORD*)(a1 + 160) = v13;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_QWORD*)(a1 + 184) = a3[1];
  v14 = *a3;
  *(_BYTE*)(a1 + 192) = 0;
  *(_BYTE*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 176) = v14;
  if (*(_BYTE*)(a4 + 8) == 1) {
    *(_QWORD*)(a1 + 192) = *(_QWORD*)a4;
    *(_BYTE*)(a1 + 200) = 1;
  }
  v15 = *(_QWORD*)(a1 + 160);
  *(_BYTE*)(a1 + 208) = v10;
  *(_BYTE*)(a1 + 209) = v12;
  if (v15 != 0) {
    v16 = std___1___shared_weak_count_lock_alt1(v15);
    if (v16 != 0) {
      v17 = *(_DWORD**)(a1 + 152);
      v18 = v16;
      if (v17 == nullptr) {
      LABEL_28:
        if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
          std___1___shared_weak_count___release_weak_alt1(v18);
        }
        return;
      }
      v19 = *(_DWORD*)(a1 + 176);
      v20 = *(unsigned __int8*)(a1 + 200);
      v21 = *(_QWORD*)(a1 + 192);
      v22 = *(unsigned __int8*)(a1 + 208);
      v23 = *(unsigned __int8*)(a1 + 209);
      LOBYTE(v40_.v40) = 0;
      v40_.v41 = 0;
      v17[48] = v19;
      v17[49] = *(_DWORD*)(a1 + 180);
      v24 = *((_OWORD*)v17 + 12);
      *((_QWORD*)&v24 + 1) = *(unsigned int*)(a1 + 184);
      *((_OWORD*)v17 + 12) = v24;
      if (v20 == 1) {
        v40_.v40 = v21;
        v40_.v41 = 1;
      }
      (*(void (**)(_DWORD*, unsigned __int64*, __int64, __int64))(
          *(_QWORD*)v17 + 192LL))(v17, &v40_.v40, v22, v23);
      v25 = *(_QWORD*)(a1 + 160);
      v38[0] = *(float32x4_t**)(a1 + 152);
      v38[1] = (float32x4_t*)v25;
      if (v25 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                  memory_order_relaxed);
        MapBattleHUD_18c4980_alt1((void*)(&v39), v38, *(_BYTE*)(a1 + 208));
        std___1___shared_weak_count___release_weak_alt1(v25);
      }
      else {
        MapBattleHUD_18c4980_alt1((void*)(&v39), v38, *(_BYTE*)(a1 + 208));
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
        v36 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v36;
        __cxa_guard_release_alt1((__int64)&GameData_21a6130);
      }
      LANES64(v26).n64_u64[0] =
          LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(
                         v39, COERCE_AS(float32x4_t, GameData_21a6120)))))
              .n64_u64[0];
      if ((LANES64(v26).n64_u8[0] & 1) != 0 ||
          (LANES64(v26).n64_u8[2] & 1) != 0 ||
          (LANES64(v26).n64_u8[4] & 1) != 0) {
        if (*(_BYTE*)(a1 + 200) != 0) {
          *(_QWORD*)(a1 + 192) = LANES128(v39).n128_u64[0];
        }
        else {
          *(_QWORD*)(a1 + 192) = LANES128(v39).n128_u64[0];
          *(_BYTE*)(a1 + 200) = 1;
        }
      }
      else if (*(_BYTE*)(a1 + 200) == 0) {
        v27 = 0;
        v28 = 0;
        v29 = 0;
      LABEL_23:
        v30 = *(_DWORD*)(a1 + 176);
        v31 = *(unsigned __int8*)(a1 + 208);
        v32 = *(unsigned __int8*)(a1 + 209);
        LOBYTE(v40_.v40) = 0;
        v40_.v41 = 0;
        v17[48] = v30;
        v17[49] = *(_DWORD*)(a1 + 180);
        v33 = *((_OWORD*)v17 + 12);
        *((_QWORD*)&v33 + 1) = *(unsigned int*)(a1 + 184);
        *((_OWORD*)v17 + 12) = v33;
        if (v28 != 0) {
          v40_.v40 = v29 | v27;
          v40_.v41 = 1;
        }
        (*(void (**)(_DWORD*, unsigned __int64*, __int64, __int64))(
            *(_QWORD*)v17 + 192LL))(v17, &v40_.v40, v31, v32);
        (*(void (**)(_DWORD*, float))(*(_QWORD*)v17 + 24LL))(
            v17, *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                           104LL));
        v34 = *(_QWORD*)(a1 + 152);
        v35 = *(_QWORD*)(a1 + 160);
        v37[0] = v34;
        v37[1] = v35;
        if (v35 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                                    memory_order_relaxed);
          MapBattleHUD_18c47d0_alt1(v37);
          std___1___shared_weak_count___release_weak_alt1(v35);
        }
        else {
          MapBattleHUD_18c47d0_alt1(v37);
        }
        goto LABEL_28;
      }
      v28 = 1;
      v27 = *(_QWORD*)(a1 + 192) & 0xFFFFFFFFFFFFFF00LL;
      v29 = (unsigned __int8)*(_QWORD*)(a1 + 192);
      goto LABEL_23;
    }
  }
}

#pragma GCC visibility pop
