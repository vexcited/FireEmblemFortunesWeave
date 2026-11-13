#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* GameRoutine_adf390(__int64* result, __int64, __int64,
                            unsigned __int64);
__int64* GameRoutine_cb27c0(__int64*, unsigned __int8*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_f71cb0(__int64, int);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 game_hub_f71fc0(__int64, __int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
bool llvm_libcxx_21_libcxx_include___memory_d2d4e0();
extern __int64* GameData_212ebb0[7];
extern __int64 GameData_212dbb8[9];
void GameHr_cb2900(__int64, __int64*);
void GameRoutine_6b7aa0(__int64, __int64*, __int64*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_8123d0();
__int64 game_hub_cac090(_QWORD* a1);
__int64 game_hub_df81b0(__int64 a1, __int64 a2);

__int64 game_hub_cac090(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v3;
  float32x4_t* v4;
  float v5;
  float32x4_t v6;
  float v7;
  float32x4_t v8;
  int16x4_t v9;
  float32x4_t v10;
  __int64* v11;
  __int64* v12;
  unsigned __int32 v13;
  unsigned __int8 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;

  result = a1[25];
  if (result != 0 && *(_QWORD*)(result + 8) != -1) {
    v3 = std___1___shared_weak_count_lock(result);
    v4 = (float32x4_t*)a1[24];
    v5 = *(float*)(a1[3] + 548LL);
    result = ((__int64 (*)())llvm_libcxx_21_libcxx_include___memory_d2d4e0)();
    LANES128(v6).n128_u32[0] = 0;
    LANES128(v6).n128_u64[1] = 0;
    v7 = v5 * 0x1.3333340000000p-1f;
    if ((result & 1) == 0) {
      v7 = v5;
    }
    LANES128(v6).n128_f32[1] = v7;
    v8 = vaddq_f32(v6, *(float32x4_t*)(*(_QWORD*)(a1[3] + 16LL) + 560LL));
    if (LANES128(v4[4]).n128_u8[0] == 1) {
      LANES64(v9).n64_u64[0] =
          LANES64_OF(vmovn_s32(vceqq_f32(v4[3], v8))).n64_u64[0];
      if ((LANES64(v9).n64_u8[0] & 1) != 0 &&
          (LANES64(v9).n64_u8[2] & 1) != 0 &&
          (LANES64(v9).n64_u8[4] & 1) != 0) {
        if (v3 == 0) {
          return result;
        }
        goto LABEL_20;
      }
      LANES128(v4[3]).n128_u64[0] = LANES128(v8).n128_u64[0];
      v10 = v4[3];
      LANES128(v10).n128_u64[1] = LANES128(v8).n128_u32[2];
      v4[3] = v10;
    }
    else {
      v4[3] = v8;
      LANES128(v4[4]).n128_u8[0] = 1;
    }
    v11 = GameData_212ebb0[0];
    v12 = (__int64*)GameData_212dbb8[0];
    v13 = GameRoutine_f71d40(*GameData_212ebb0[0], (__int64)&v4[3],
                             *(_QWORD*)GameData_212dbb8[0] + 64LL);
    v14 = LANES128(v4[4]).n128_u8[0];
    LANES128(v4[13]).n128_u32[1] = v13;
    if ((v14 & 1) == 0) {
      GameRoutine_8123d0();
    }
    v15 = *v12;
    v16 = *v11;
    v17 = GameRoutine_f71d40(v16, (__int64)&v4[3], v15 + 64);
    result = GameRoutine_f71cb0(v17, v17);
    if ((result & 1) != 0) {
      result = game_hub_f71fc0(v16, (__int64)&v4[3], v15 + 64);
      v18 = (_DWORD)result == 0 || (*(_BYTE*)(v16 + 32) & 2) != 0;
    }
    else {
      v18 = false;
    }
    LANES128(v4[13]).n128_u8[8] = v18;
    if (v3 != 0) {
    LABEL_20:
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  return result;
}

__int64 game_hub_df81b0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  bool v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  bool v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  bool v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  bool v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64* v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  bool v62;
  unsigned __int64 v63;
  __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64* v67;
  __int64 v68;
  __int64 v69;
  bool v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;

  GameRoutine_cb27c0((__int64*)a1, (unsigned __int8*)a2);
  if (a1 == a2) {
    {
      v7 = *(_QWORD*)(a2 + 160);
      __asm__ volatile("" ::"r"(v7));
    }
    *(_DWORD*)(a1 + 168) = *(_DWORD*)(a2 + 168);
    *(_QWORD*)(a1 + 160) = v7;
    *(_DWORD*)(a1 + 200) = *(_DWORD*)(a2 + 200);
  }
  else {
    {
      v4 = *(unsigned __int8*)(a2 + 88);
      __asm__ volatile("" ::"r"(v4));
    }
    if ((*(_BYTE*)(a1 + 88) & 1) != 0) {
      v8 = (v4 & 1) == 0;
      v9 = v4 >> 1;
      if (v8) {
        v10 = a2 + 89;
      }
      else {
        v10 = *(_QWORD*)(a2 + 104);
        __asm__ volatile("" ::"r"(v10));
      }
      if (v8) {
        v11 = v9;
      }
      else {
        v11 = *(_QWORD*)(a2 + 96);
        __asm__ volatile("" ::"r"(v11));
      }
      SpineModel_64dde0((__int64*)(a1 + 88), v10, v11);
    }
    else if ((v4 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 88), *(_QWORD*)(a2 + 104),
                         *(_QWORD*)(a2 + 96));
    }
    else {
      {
        v5 = *(_QWORD*)(a2 + 88);
        __asm__ volatile("" ::"r"(v5));
      }
      {
        v6 = *(_QWORD*)(a2 + 104);
        __asm__ volatile("" ::"r"(v6));
      }
      *(_QWORD*)(a1 + 96) = *(_QWORD*)(a2 + 96);
      *(_QWORD*)(a1 + 104) = v6;
      *(_QWORD*)(a1 + 88) = v5;
    }
    v12 = (__int64*)(a1 + 112);
    {
      v13 = *(unsigned __int8*)(a2 + 112);
      __asm__ volatile("" ::"r"(v13));
    }
    if ((*(_BYTE*)(a1 + 112) & 1) != 0) {
      v16 = (v13 & 1) == 0;
      v17 = v13 >> 1;
      if (v16) {
        v18 = a2 + 113;
      }
      else {
        v18 = *(_QWORD*)(a2 + 128);
        __asm__ volatile("" ::"r"(v18));
      }
      if (v16) {
        v19 = v17;
      }
      else {
        v19 = *(_QWORD*)(a2 + 120);
        __asm__ volatile("" ::"r"(v19));
      }
      SpineModel_64dde0(v12, v18, v19);
    }
    else if ((v13 & 1) != 0) {
      GameRoutine_64df20(v12, *(_QWORD*)(a2 + 128), *(_QWORD*)(a2 + 120));
    }
    else {
      {
        v14 = *(_QWORD*)(a2 + 112);
        __asm__ volatile("" ::"r"(v14));
      }
      {
        v15 = *(_QWORD*)(a2 + 128);
        __asm__ volatile("" ::"r"(v15));
      }
      *(_QWORD*)(a1 + 120) = *(_QWORD*)(a2 + 120);
      *(_QWORD*)(a1 + 128) = v15;
      *v12 = v14;
    }
    v20 = (__int64*)(a1 + 136);
    {
      v21 = *(unsigned __int8*)(a2 + 136);
      __asm__ volatile("" ::"r"(v21));
    }
    if ((*(_BYTE*)(a1 + 136) & 1) != 0) {
      v24 = (v21 & 1) == 0;
      v25 = v21 >> 1;
      if (v24) {
        v26 = a2 + 137;
      }
      else {
        v26 = *(_QWORD*)(a2 + 152);
        __asm__ volatile("" ::"r"(v26));
      }
      if (v24) {
        v27 = v25;
      }
      else {
        v27 = *(_QWORD*)(a2 + 144);
        __asm__ volatile("" ::"r"(v27));
      }
      SpineModel_64dde0(v20, v26, v27);
    }
    else if ((v21 & 1) != 0) {
      GameRoutine_64df20(v20, *(_QWORD*)(a2 + 152), *(_QWORD*)(a2 + 144));
    }
    else {
      {
        v22 = *(_QWORD*)(a2 + 136);
        __asm__ volatile("" ::"r"(v22));
      }
      {
        v23 = *(_QWORD*)(a2 + 152);
        __asm__ volatile("" ::"r"(v23));
      }
      *(_QWORD*)(a1 + 144) = *(_QWORD*)(a2 + 144);
      *(_QWORD*)(a1 + 152) = v23;
      *v20 = v22;
    }
    {
      v28 = *(_QWORD*)(a2 + 160);
      __asm__ volatile("" ::"r"(v28));
    }
    *(_DWORD*)(a1 + 168) = *(_DWORD*)(a2 + 168);
    *(_QWORD*)(a1 + 160) = v28;
    GameRoutine_adf390(
        (__int64*)(a1 + 176), *(_QWORD*)(a2 + 176), *(_QWORD*)(a2 + 184),
        (__int64)(*(_QWORD*)(a2 + 184) - *(_QWORD*)(a2 + 176)) >> 2);
    *(_DWORD*)(a1 + 200) = *(_DWORD*)(a2 + 200);
    GameRoutine_6b7aa0(
        a1 + 208, *(__int64**)(a2 + 208), *(__int64**)(a2 + 216),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a2 + 216) - *(_QWORD*)(a2 + 208)) >> 3));
    v29 = (__int64*)(a1 + 232);
    {
      v30 = *(unsigned __int8*)(a2 + 232);
      __asm__ volatile("" ::"r"(v30));
    }
    if ((*(_BYTE*)(a1 + 232) & 1) != 0) {
      v33 = (v30 & 1) == 0;
      v34 = v30 >> 1;
      if (v33) {
        v35 = a2 + 233;
      }
      else {
        v35 = *(_QWORD*)(a2 + 248);
        __asm__ volatile("" ::"r"(v35));
      }
      if (v33) {
        v36 = v34;
      }
      else {
        v36 = *(_QWORD*)(a2 + 240);
        __asm__ volatile("" ::"r"(v36));
      }
      SpineModel_64dde0(v29, v35, v36);
    }
    else if ((v30 & 1) != 0) {
      GameRoutine_64df20(v29, *(_QWORD*)(a2 + 248), *(_QWORD*)(a2 + 240));
    }
    else {
      {
        v31 = *(_QWORD*)(a2 + 232);
        __asm__ volatile("" ::"r"(v31));
      }
      {
        v32 = *(_QWORD*)(a2 + 248);
        __asm__ volatile("" ::"r"(v32));
      }
      *(_QWORD*)(a1 + 240) = *(_QWORD*)(a2 + 240);
      *(_QWORD*)(a1 + 248) = v32;
      *v29 = v31;
    }
    GameRoutine_6b7aa0(
        a1 + 256, *(__int64**)(a2 + 256), *(__int64**)(a2 + 264),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a2 + 264) - *(_QWORD*)(a2 + 256)) >> 3));
    {
      v37 = *(unsigned __int8*)(a2 + 280);
      __asm__ volatile("" ::"r"(v37));
    }
    if ((*(_BYTE*)(a1 + 280) & 1) != 0) {
      v40 = (v37 & 1) == 0;
      v41 = v37 >> 1;
      if (v40) {
        v42 = a2 + 281;
      }
      else {
        v42 = *(_QWORD*)(a2 + 296);
        __asm__ volatile("" ::"r"(v42));
      }
      if (v40) {
        v43 = v41;
      }
      else {
        v43 = *(_QWORD*)(a2 + 288);
        __asm__ volatile("" ::"r"(v43));
      }
      SpineModel_64dde0((__int64*)(a1 + 280), v42, v43);
    }
    else if ((v37 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 280), *(_QWORD*)(a2 + 296),
                         *(_QWORD*)(a2 + 288));
    }
    else {
      {
        v38 = *(_QWORD*)(a2 + 280);
        __asm__ volatile("" ::"r"(v38));
      }
      {
        v39 = *(_QWORD*)(a2 + 296);
        __asm__ volatile("" ::"r"(v39));
      }
      *(_QWORD*)(a1 + 288) = *(_QWORD*)(a2 + 288);
      *(_QWORD*)(a1 + 296) = v39;
      *(_QWORD*)(a1 + 280) = v38;
    }
    GameRoutine_6b7aa0(
        a1 + 304, *(__int64**)(a2 + 304), *(__int64**)(a2 + 312),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a2 + 312) - *(_QWORD*)(a2 + 304)) >> 3));
    {
      v44 = *(unsigned __int8*)(a2 + 328);
      __asm__ volatile("" ::"r"(v44));
    }
    if ((*(_BYTE*)(a1 + 328) & 1) != 0) {
      v47 = (v44 & 1) == 0;
      v48 = v44 >> 1;
      if (v47) {
        v49 = a2 + 329;
      }
      else {
        v49 = *(_QWORD*)(a2 + 344);
        __asm__ volatile("" ::"r"(v49));
      }
      if (v47) {
        v50 = v48;
      }
      else {
        v50 = *(_QWORD*)(a2 + 336);
        __asm__ volatile("" ::"r"(v50));
      }
      SpineModel_64dde0((__int64*)(a1 + 328), v49, v50);
    }
    else if ((v44 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 328), *(_QWORD*)(a2 + 344),
                         *(_QWORD*)(a2 + 336));
    }
    else {
      {
        v45 = *(_QWORD*)(a2 + 328);
        __asm__ volatile("" ::"r"(v45));
      }
      {
        v46 = *(_QWORD*)(a2 + 344);
        __asm__ volatile("" ::"r"(v46));
      }
      *(_QWORD*)(a1 + 336) = *(_QWORD*)(a2 + 336);
      *(_QWORD*)(a1 + 344) = v46;
      *(_QWORD*)(a1 + 328) = v45;
    }
    GameRoutine_6b7aa0(
        a1 + 352, *(__int64**)(a2 + 352), *(__int64**)(a2 + 360),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a2 + 360) - *(_QWORD*)(a2 + 352)) >> 3));
    {
      v51 = *(unsigned __int8*)(a2 + 376);
      __asm__ volatile("" ::"r"(v51));
    }
    if ((*(_BYTE*)(a1 + 376) & 1) != 0) {
      v54 = (v51 & 1) == 0;
      v55 = v51 >> 1;
      if (v54) {
        v56 = a2 + 377;
      }
      else {
        v56 = *(_QWORD*)(a2 + 392);
        __asm__ volatile("" ::"r"(v56));
      }
      if (v54) {
        v57 = v55;
      }
      else {
        v57 = *(_QWORD*)(a2 + 384);
        __asm__ volatile("" ::"r"(v57));
      }
      SpineModel_64dde0((__int64*)(a1 + 376), v56, v57);
    }
    else if ((v51 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a1 + 376), *(_QWORD*)(a2 + 392),
                         *(_QWORD*)(a2 + 384));
    }
    else {
      {
        v52 = *(_QWORD*)(a2 + 376);
        __asm__ volatile("" ::"r"(v52));
      }
      {
        v53 = *(_QWORD*)(a2 + 392);
        __asm__ volatile("" ::"r"(v53));
      }
      *(_QWORD*)(a1 + 384) = *(_QWORD*)(a2 + 384);
      *(_QWORD*)(a1 + 392) = v53;
      *(_QWORD*)(a1 + 376) = v52;
    }
    GameRoutine_6b7aa0(
        a1 + 400, *(__int64**)(a2 + 400), *(__int64**)(a2 + 408),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a2 + 408) - *(_QWORD*)(a2 + 400)) >> 3));
  }
  GameHr_cb2900(a1 + 424, (__int64*)(a2 + 424));
  GameHr_cb2900(a1 + 496, (__int64*)(a2 + 496));
  GameHr_cb2900(a1 + 568, (__int64*)(a2 + 568));
  if (a1 != a2) {
    v58 = (__int64*)(a1 + 640);
    {
      v59 = *(unsigned __int8*)(a2 + 640);
      __asm__ volatile("" ::"r"(v59));
    }
    if ((*(_BYTE*)(a1 + 640) & 1) != 0) {
      v62 = (v59 & 1) == 0;
      v63 = v59 >> 1;
      if (v62) {
        v64 = a2 + 641;
      }
      else {
        v64 = *(_QWORD*)(a2 + 656);
        __asm__ volatile("" ::"r"(v64));
      }
      if (v62) {
        v65 = v63;
      }
      else {
        v65 = *(_QWORD*)(a2 + 648);
        __asm__ volatile("" ::"r"(v65));
      }
      SpineModel_64dde0(v58, v64, v65);
    }
    else if ((v59 & 1) != 0) {
      GameRoutine_64df20(v58, *(_QWORD*)(a2 + 656), *(_QWORD*)(a2 + 648));
    }
    else {
      {
        v60 = *(_QWORD*)(a2 + 640);
        __asm__ volatile("" ::"r"(v60));
      }
      {
        v61 = *(_QWORD*)(a2 + 656);
        __asm__ volatile("" ::"r"(v61));
      }
      *(_QWORD*)(a1 + 648) = *(_QWORD*)(a2 + 648);
      *(_QWORD*)(a1 + 656) = v61;
      *v58 = v60;
    }
    {
      v66 = *(unsigned __int8*)(a2 + 664);
      __asm__ volatile("" ::"r"(v66));
    }
    v67 = (__int64*)(a1 + 664);
    if ((*(_BYTE*)(a1 + 664) & 1) != 0) {
      v70 = (v66 & 1) == 0;
      v71 = v66 >> 1;
      if (v70) {
        v72 = a2 + 665;
      }
      else {
        v72 = *(_QWORD*)(a2 + 680);
        __asm__ volatile("" ::"r"(v72));
      }
      if (v70) {
        v73 = v71;
      }
      else {
        v73 = *(_QWORD*)(a2 + 672);
        __asm__ volatile("" ::"r"(v73));
      }
      SpineModel_64dde0(v67, v72, v73);
    }
    else if ((v66 & 1) != 0) {
      GameRoutine_64df20(v67, *(_QWORD*)(a2 + 680), *(_QWORD*)(a2 + 672));
    }
    else {
      {
        v68 = *(_QWORD*)(a2 + 664);
        __asm__ volatile("" ::"r"(v68));
      }
      {
        v69 = *(_QWORD*)(a2 + 680);
        __asm__ volatile("" ::"r"(v69));
      }
      *(_QWORD*)(a1 + 672) = *(_QWORD*)(a2 + 672);
      *(_QWORD*)(a1 + 680) = v69;
      *v67 = v68;
    }
  }
  return a1;
}

#pragma GCC visibility pop
