#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 HubCharacterNatives_cea6b0(_QWORD);
__int64 HubCharacterNatives_ceca80(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_CharacterControllerBase_vtable)();
extern __int64 (*game_hub_CharacterControllerMob_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CharacterControllerMob_Destructor(_QWORD* a1);
__int64 CharacterControllerMob_DeletingDestructor(_QWORD* a1);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21ec7c0;
void CharacterControllerMob_Unknown2(float32x4_t* a1);

__n128 CharacterControllerMob_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64 v5;

  *a1 = game_hub_CharacterControllerMob_vtable;
  HubCharacterNatives_ceca80(*(_QWORD*)(a1[1] + 24LL), 128, 0);
  v2 = *(_QWORD*)(a1[1] + 24LL);
  v3 = *(_QWORD*)(v2 + 352);
  if (v3 != *(_QWORD*)(v2 + 344)) {
    *(_QWORD*)(v2 + 352) = v3 - 4;
  }
  HubCharacterNatives_cea6b0(v2);
  v5 = a1[3];
  *a1 = &game_hub_CharacterControllerBase_vtable;
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 CharacterControllerMob_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = game_hub_CharacterControllerMob_vtable;
  HubCharacterNatives_ceca80(*(_QWORD*)(a1[1] + 24LL), 128, 0);
  v2 = *(_QWORD*)(a1[1] + 24LL);
  v3 = *(_QWORD*)(v2 + 352);
  if (v3 != *(_QWORD*)(v2 + 344)) {
    *(_QWORD*)(v2 + 352) = v3 - 4;
  }
  HubCharacterNatives_cea6b0(v2);
  v4 = a1[3];
  *a1 = &game_hub_CharacterControllerBase_vtable;
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5);
}

void CharacterControllerMob_Unknown2(float32x4_t* a1)
{

#pragma clang fp contract(off)
  float32x4_t v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __n128 v7;
  __int64 v9;
  float32x4_t* v10;
  unsigned __int64 v11;
  int v12;
  int16x4_t v14;
  float32x4_t v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int128 v19;
  __int128 v20;
  unsigned __int64 v21;
  unsigned __int8 v22;
  float v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __n128 v30;
  char v32;
  __int64 v33;
  __int64 v34;
  float32x4_t v35;
  float v36;
  char v37;
  float32x4_t v38;

  v1 = (__typeof__(v1)){0};
  if ((*(_DWORD*)(LANES128(*(a1)).n128_u64[1] + 184) & 0x200002) != 0x200000) {
    LODWORD(v3) = 0;
    goto LABEL_16;
  }
  v3 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v3 == 0) {
    goto LABEL_16;
  }
  v4 = *(_QWORD*)(GameData_21ec7c0 + 72);
  v5 = *(_QWORD*)(GameData_21ec7c0 + 80);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v6 = std___1___shared_weak_count_lock(v5);
  v7 = std___1___shared_weak_count___release_weak(v3);
  if (v6 == 0 || v4 == 0) {
    v1 = (__typeof__(v1)){0};
    LODWORD(v3) = 0;
    if (v6 == 0) {
      goto LABEL_16;
    }
  }
  else {
    v9 = *(_QWORD*)(v4 + 24);
    v10 = *(float32x4_t**)(*(_QWORD*)(v9 + 8) + 240LL);
    if (v10 != nullptr) {
      v1 = v10[3];
      LODWORD(v3) = 1;
    }
    else {
      LODWORD(v3) = 1;
      LODWORD(v11) = 0;
      *((float*)&v11 + 1) = *(float*)(v9 + 544) * 0x1.99999a0000000p-1f;
      v7 = *(__n128*)(*(_QWORD*)(v9 + 16) + 560LL);
      v1 = vaddq_f32(v7, COERCE_AS(float32x4_t, v11));
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v38 = v1;
    (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(
        v6, *(long double*)&v7);
    std___1___shared_weak_count___release_weak(v6);
    v1 = v38;
  }
LABEL_16:
  v12 = LANES128(a1[3]).n128_u8[0];
  if (v12 == (_DWORD)v3 && v12 != 0) {
    LANES64(v14).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(a1[2], v1)))).n64_u64[0];
    if ((LANES64(v14).n64_u8[0] & 1) == 0 &&
        (LANES64(v14).n64_u8[2] & 1) == 0 &&
        (LANES64(v14).n64_u8[4] & 1) == 0) {
      goto LABEL_35;
    }
    LANES128(a1[2]).n128_u64[0] = LANES128(v1).n128_u64[0];
    v15 = a1[2];
    LANES128(v15).n128_u64[1] = LANES128(v1).n128_u32[2];
    v1 = v15;
    a1[2] = v15;
    if ((v3 & 1) == 0) {
      goto LABEL_28;
    }
  LABEL_31:
    v17 = *(_QWORD*)(*(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 24) + 24LL);
    v18 = *(unsigned __int8*)(v17 + 336);
    *(_QWORD*)(v17 + 272) = 0;
    if (v18 == 1) {
      *(_QWORD*)(v17 + 288) = LANES128(v1).n128_u64[0];
      *(_QWORD*)(v17 + 304) = LANES128(v1).n128_u64[0];
      v19 = *(_OWORD*)(v17 + 288);
      v20 = *(_OWORD*)(v17 + 304);
      *((_QWORD*)&v19 + 1) = LANES128(v1).n128_u32[2];
      *((_QWORD*)&v20 + 1) = LANES128(v1).n128_u32[2];
      *(_OWORD*)(v17 + 288) = v19;
      *(_OWORD*)(v17 + 304) = v20;
    }
    else {
      LANES128(v1).n128_u32[3] = 0;
      *(_BYTE*)(v17 + 336) = 1;
      *(float32x4_t*)(v17 + 288) = v1;
      *(float32x4_t*)(v17 + 304) = v1;
    }
    *(_DWORD*)(v17 + 320) = 1065353216;
    goto LABEL_35;
  }
  if (v12 != (_DWORD)v3) {
    if (LANES128(a1[3]).n128_u8[0] == 0) {
      a1[2] = v1;
      LANES128(a1[3]).n128_u8[0] = 1;
      goto LABEL_31;
    }
    LANES128(a1[3]).n128_u8[0] = 0;
  LABEL_28:
    v16 = *(_QWORD*)(*(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 24) + 24LL);
    if (*(_BYTE*)(v16 + 336) == 1) {
      *(_BYTE*)(v16 + 336) = 0;
    }
  }
LABEL_35:
  v21 = LANES128(*(a1)).n128_u64[1];
  if ((*(_BYTE*)(v21 + 184) & 2) != 0) {
    v32 = 0;
    goto LABEL_61;
  }
  v22 = LANES128(a1[3]).n128_u8[0];
  v23 = LANES128(a1[4]).n128_f32[0] -
        *(float*)(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 8LL) + 228LL);
  if (v23 < 0x0.0p+0f) {
    v23 = 0x0.0p+0f;
  }
  LANES128(a1[4]).n128_f32[0] = v23;
  if ((v22 & 1) != 0) {
  LABEL_56:
    LOBYTE(v25) = 0;
    goto LABEL_57;
  }
  v24 = *(_QWORD*)(v21 + 200);
  if (v24 == 0) {
  LABEL_42:
    if ((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 16LL) + 24LL) &
         0x1FFFFFFFFLL) == 0x100000001LL) {
      v27 = *(_QWORD*)(GameData_21ec7c0 + 80);
      if (v27 != 0) {
        v28 = *(_QWORD*)(GameData_21ec7c0 + 72);
        v29 = *(_QWORD*)(GameData_21ec7c0 + 80);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        v25 = std___1___shared_weak_count_lock(v29);
        v30 = std___1___shared_weak_count___release_weak(v27);
        if (v25 == 0 || v28 == 0) {
          if (v25 == 0) {
            goto LABEL_57;
          }
        }
        else {
          v33 = *(_QWORD*)(v28 + 24);
          v34 = *(_QWORD*)(LANES128(*(a1)).n128_u64[1] + 24);
          v35 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(v33 + 16) + 560LL),
                          *(float32x4_t*)(*(_QWORD*)(v34 + 16) + 560LL));
          v30 = vmulq_f32(v35, v35);
          LANES128(v30).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v30).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                  .n64_u64[0];
          v36 = (float)(*(float*)(v33 + 528) + *(float*)(v34 + 528)) +
                0x1.0000000000000p-1f;
          if (LANES128(v30).n128_f32[0] <= (float)(v36 * v36)) {
            LANES128(a1[4]).n128_u32[0] = 1065353216;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v25 + 16LL))(
              v25, *(long double*)&v30);
          std___1___shared_weak_count___release_weak(v25);
        }
      }
    }
    goto LABEL_56;
  }
  LOBYTE(v25) = 1;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                            memory_order_relaxed);
  v26 = *(_QWORD*)(v24 + 8);
  std___1___shared_weak_count___release_weak(v24);
  if (v26 == -1) {
    v21 = LANES128(*(a1)).n128_u64[1];
    goto LABEL_42;
  }
LABEL_57:
  v21 = LANES128(*(a1)).n128_u64[1];
  if (LANES128(a1[4]).n128_f32[0] > 0x0.0p+0f) {
    v37 = 1;
  }
  else {
    v37 = v25;
  }
  v32 = v37 & 1 | ((*(_BYTE*)(v21 + 184) & 0x10) != 0);
LABEL_61:
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v21 + 24) + 24LL) + 24LL) = v32;
}

#pragma GCC visibility pop
