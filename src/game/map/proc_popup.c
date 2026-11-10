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
__int64 ProcPopup_18c7a10(__int64 a1, _QWORD* a2, __int64* a3, __int64 a4,
                          char a5, char a6);

__int64 ProcPopup_18c7a10(__int64 a1, _QWORD* a2, __int64* a3, __int64 a4,
                          char a5, char a6)
{
  char v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  _DWORD* v16;
  __int64 v17;
  int v18;
  int v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int128 v23;
  __int64 v24;
  int16x4_t v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  __int128 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD v36[2];
  _QWORD v37[2];
  float32x4_t v38;
  unsigned __int64 v39;
  char v40;

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
  game_ProcInst_Register(a1);
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
  result = *(_QWORD*)(a1 + 160);
  *(_BYTE*)(a1 + 208) = v10;
  *(_BYTE*)(a1 + 209) = v12;
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v16 = *(_DWORD**)(a1 + 152);
      v17 = result;
      if (v16 == nullptr) {
      LABEL_28:
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          return std___1___shared_weak_count___release_weak(v17);
        }
        return result;
      }
      v18 = *(_DWORD*)(a1 + 176);
      v19 = *(unsigned __int8*)(a1 + 200);
      v20 = *(_QWORD*)(a1 + 192);
      v21 = *(unsigned __int8*)(a1 + 208);
      v22 = *(unsigned __int8*)(a1 + 209);
      LOBYTE(v39) = 0;
      v40 = 0;
      v16[48] = v18;
      v16[49] = *(_DWORD*)(a1 + 180);
      v23 = *((_OWORD*)v16 + 12);
      *((_QWORD*)&v23 + 1) = *(unsigned int*)(a1 + 184);
      *((_OWORD*)v16 + 12) = v23;
      if (v19 == 1) {
        v39 = v20;
        v40 = 1;
      }
      (*(void (**)(_DWORD*, unsigned __int64*, __int64, __int64))(
          *(_QWORD*)v16 + 192LL))(v16, &v39, v21, v22);
      v24 = *(_QWORD*)(a1 + 160);
      v37[0] = *(_QWORD*)(a1 + 152);
      v37[1] = v24;
      if (v24 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                  memory_order_relaxed);
        MapBattleHUD_18c4980((void*)(&v38), (__int64)v37, *(_BYTE*)(a1 + 208));
        std___1___shared_weak_count___release_weak(v24);
      }
      else {
        MapBattleHUD_18c4980((void*)(&v38), (__int64)v37, *(_BYTE*)(a1 + 208));
      }
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v35 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v35;
        __cxa_guard_release(&GameData_21a6130);
      }
      LANES64(v25).n64_u64[0] =
          LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(
                         v38, COERCE_AS(float32x4_t, GameData_21a6120)))))
              .n64_u64[0];
      if ((LANES64(v25).n64_u8[0] & 1) != 0 ||
          (LANES64(v25).n64_u8[2] & 1) != 0 ||
          (LANES64(v25).n64_u8[4] & 1) != 0) {
        if (*(_BYTE*)(a1 + 200) != 0) {
          *(_QWORD*)(a1 + 192) = LANES128(v38).n128_u64[0];
        }
        else {
          *(_QWORD*)(a1 + 192) = LANES128(v38).n128_u64[0];
          *(_BYTE*)(a1 + 200) = 1;
        }
      }
      else if (*(_BYTE*)(a1 + 200) == 0) {
        v26 = 0;
        v27 = 0;
        v28 = 0;
      LABEL_23:
        v29 = *(_DWORD*)(a1 + 176);
        v30 = *(unsigned __int8*)(a1 + 208);
        v31 = *(unsigned __int8*)(a1 + 209);
        LOBYTE(v39) = 0;
        v40 = 0;
        v16[48] = v29;
        v16[49] = *(_DWORD*)(a1 + 180);
        v32 = *((_OWORD*)v16 + 12);
        *((_QWORD*)&v32 + 1) = *(unsigned int*)(a1 + 184);
        *((_OWORD*)v16 + 12) = v32;
        if (v27 != 0) {
          v39 = v28 | v26;
          v40 = 1;
        }
        (*(void (**)(_DWORD*, unsigned __int64*, __int64, __int64))(
            *(_QWORD*)v16 + 192LL))(v16, &v39, v30, v31);
        (*(void (**)(_DWORD*, float))(*(_QWORD*)v16 + 24LL))(
            v16, *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                           104LL));
        v33 = *(_QWORD*)(a1 + 152);
        v34 = *(_QWORD*)(a1 + 160);
        v36[0] = v33;
        v36[1] = v34;
        if (v34 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                                    memory_order_relaxed);
          MapBattleHUD_18c47d0(v36);
          result = std___1___shared_weak_count___release_weak(v34);
        }
        else {
          result = MapBattleHUD_18c47d0(v36);
        }
        goto LABEL_28;
      }
      v27 = 1;
      v26 = *(_QWORD*)(a1 + 192) & 0xFFFFFFFFFFFFFF00LL;
      v28 = (unsigned __int8)*(_QWORD*)(a1 + 192);
      goto LABEL_23;
    }
  }
  return result;
}

#pragma GCC visibility pop
