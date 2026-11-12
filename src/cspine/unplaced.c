#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1917fb0(_QWORD, _QWORD);
__int64 GameRoutine_604020(_QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_ad5000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad5280(_QWORD);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN* GameData_212fcd8;
extern __int64 (*SpineModel_1912d60_ptr[])();
extern __int64 (*SpineModel_1912dc0_ptr[])();
extern __int64 (*cspine_SpineModel_vtable[])();
extern __int64* game_g_frame_clock_ptr[3];
struct PseudoSret gfx_shader_Archive_CreateShader(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD);
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 cspine_1911b00_alt1(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6) __asm__("cspine_1911b00");
__int64 cspine_1919480(__int64 a1, __int64 a2, unsigned __int64 a3);
_QWORD* GameRoutine_604020_alt1(_QWORD* result) __asm__("GameRoutine_604020");
_QWORD* GameRoutine_ad5000_alt1(_QWORD*, __int64, unsigned __int64,
                                int) __asm__("GameRoutine_ad5000");
__attribute__((swiftcall)) void gfx_shader_Archive_CreateShader_alt1(
    PSEUDO_X8, __int64*, __int64, unsigned __int64, __int64,
    unsigned __int64) __asm__("gfx_shader_Archive_CreateShader");
__int64 GameHr_ad5280(_QWORD*);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void GameRoutine_1917fb0_alt1(__int64*,
                              unsigned __int64) __asm__("GameRoutine_1917fb0");
__int64 cspine_1911b00(__int64 a1);

__int64 cspine_1911b00(__int64 a1)
{
  _QWORD*** v2;
  __int64* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD** v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 i;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  _QWORD*** v40;
  __int64 j;
  __int64 v42;
  _QWORD* v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  _QWORD* v49;
  _QWORD** v50;
  _QWORD* v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  _QWORD** v57;
  _QWORD* v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  _QWORD* v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64* v70;
  _QWORD* v71;
  struct {
    _QWORD* v72;
    __int64 v73;
  } v72_;

  *(_QWORD*)a1 = cspine_SpineModel_vtable;
  memset_alt1(a1 + 8, 0, 0x1A0u);
  GameRoutine_604020_alt1((_QWORD*)(a1 + 424));
  *(_QWORD*)(a1 + 544) = -1;
  GameRoutine_604020_alt1((_QWORD*)(a1 + 552));
  *(_QWORD*)(a1 + 672) = -1;
  GameRoutine_604020_alt1((_QWORD*)(a1 + 680));
  *(_QWORD*)(a1 + 800) = -1;
  *(_QWORD*)(a1 + 808) = 0;
  v2 = (_QWORD***)(a1 + 952);
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  v3 = (__int64*)GameData_212fcd8;
  *(_QWORD*)(a1 + 856) = 1114636288;
  v4 = *v3;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 912) = 0;
  *(_QWORD*)(a1 + 920) = 0;
  *(_QWORD*)(a1 + 928) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 952) = 0;
  *(_DWORD*)(a1 + 864) = 1065353216;
  *(_QWORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 968) = 0;
  *(_QWORD*)(a1 + 976) = 0;
  *(_QWORD*)(a1 + 984) = 0;
  *(_QWORD*)(a1 + 992) = 0;
  *(_QWORD*)(a1 + 1000) = 0;
  *(_QWORD*)(a1 + 1008) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 1024) = 0;
  *(_QWORD*)(a1 + 1032) = 0;
  *(_DWORD*)(a1 + 1039) = 0;
  *(_BYTE*)(a1 + 1056) = 0;
  *(_QWORD*)(a1 + 872) = v4;
  *(_WORD*)(a1 + 1043) = 1;
  v5 = (__int64*)GameData_212c960;
  *(_QWORD*)(a1 + 1104) = 1065353216;
  v7 = *v5;
  v6 = v5[1];
  *(_QWORD*)(a1 + 1112) = 1065353216;
  *(_QWORD*)(a1 + 1184) = 1065353216;
  *(_QWORD*)(a1 + 1192) = 1065353216;
  *(_DWORD*)(a1 + 1236) = 1065353216;
  *(_DWORD*)(a1 + 1244) = 1065353216;
  *(_DWORD*)(a1 + 1268) = 1065353216;
  *(_DWORD*)(a1 + 1312) = 1065353216;
  *(_QWORD*)(a1 + 1360) = SpineModel_1912dc0_ptr;
  *(_OWORD*)(a1 + 1088) = (__typeof__(*(_OWORD*)(a1 + 1088))){0};
  *(_DWORD*)(a1 + 1120) = 0;
  *(_BYTE*)(a1 + 1136) = 0;
  *(_OWORD*)(a1 + 1168) = (__typeof__(*(_OWORD*)(a1 + 1168))){0};
  *(_DWORD*)(a1 + 1200) = 0;
  *(_BYTE*)(a1 + 1216) = 0;
  *(_BYTE*)(a1 + 1240) = 0;
  *(_BYTE*)(a1 + 1248) = 0;
  *(_QWORD*)(a1 + 1304) = 0;
  *(_QWORD*)(a1 + 1296) = 0;
  *(_QWORD*)(a1 + 1288) = 0;
  *(_QWORD*)(a1 + 1280) = 0;
  *(_QWORD*)(a1 + 1320) = 0;
  *(_QWORD*)(a1 + 1328) = 0;
  *(_QWORD*)(a1 + 1336) = 0;
  *(_QWORD*)(a1 + 1344) = 0;
  *(_QWORD*)(a1 + 1352) = 0;
  *(_QWORD*)(a1 + 1368) = 0;
  *(_QWORD*)(a1 + 1376) = 0;
  *(_QWORD*)(a1 + 1384) = 0;
  *(_QWORD*)(a1 + 1392) = SpineModel_1912d60_ptr;
  *(_QWORD*)(a1 + 1400) = 0;
  *(_QWORD*)(a1 + 1408) = 0;
  *(_QWORD*)(a1 + 1416) = 0;
  *(_QWORD*)(a1 + 1072) = v7;
  *(_QWORD*)(a1 + 1080) = v6;
  *(_QWORD*)(a1 + 1152) = v7;
  *(_QWORD*)(a1 + 1160) = v6;
  *(_QWORD*)(a1 + 1220) = 0xFF00000000LL;
  *(_QWORD*)(a1 + 1228) = 0xFF00000000LL;
  *(_QWORD*)(a1 + 1252) = 0xFF00000000LL;
  *(_QWORD*)(a1 + 1260) = 0xFF00000000LL;
  GameRoutine_1917fb0_alt1((__int64*)(a1 + 952), 2u);
  gfx_shader_Archive_CreateShader_alt1(
      (void*)(&v72_.v72), *(__int64**)(*game_g_frame_clock_ptr[0] + 13408),
      (__int64)"face", 4u, (__int64)"basic", 5u);
  v8 = *(_QWORD**)(a1 + 952);
  v9 = v72_.v72;
  v10 = v72_.v73;
  v72_.v72 = nullptr;
  v72_.v73 = 0;
  v11 = v8[1];
  *v8 = v9;
  v8[1] = v10;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  v12 = v72_.v73;
  if (v72_.v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v72_.v73 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  v13 = GameRoutine_ad5000_alt1(**v2, (__int64)"blend_type", 0xAu, 0);
  GameHr_ad5280(v13);
  gfx_shader_Archive_CreateShader_alt1(
      (void*)(&v72_.v72), *(__int64**)(*game_g_frame_clock_ptr[0] + 13408),
      (__int64)"face", 4u, (__int64)"basic", 5u);
  v14 = *v2;
  v15 = v72_.v72;
  v16 = (_QWORD*)v72_.v73;
  v72_.v72 = nullptr;
  v72_.v73 = 0;
  v17 = (__int64)v14[3];
  v14[2] = v15;
  v14[3] = v16;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
  }
  v18 = v72_.v73;
  if (v72_.v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v72_.v73 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak_alt1(v18);
  }
  v19 = (_QWORD*)(a1 + 976);
  v20 = GameRoutine_ad5000_alt1(*(_QWORD**)(*(_QWORD*)(a1 + 952) + 16LL),
                                (__int64)"blend_type", 0xAu, 1);
  GameHr_ad5280(v20);
  v21 = *(_QWORD*)(a1 + 984);
  v22 = *(_QWORD*)(a1 + 976);
  v23 = (v21 - v22) >> 4;
  if (v23 >= 0x10) {
    if (v21 - v22 != 256) {
      for (i = v22 + 256; v21 != i; v21 -= 16) {
        v25 = *(_QWORD*)(v21 - 8);
        if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
          std___1___shared_weak_count___release_weak_alt1(v25);
        }
      }
      *(_QWORD*)(a1 + 984) = i;
    }
  }
  else {
    GameRoutine_1917fb0_alt1((__int64*)(a1 + 976), 16 - v23);
  }
  v26 = 0;
  v27 = 0;
  v70 = (__int64*)(a1 + 1000);
  v71 = (_QWORD*)a1;
  do {
    gfx_shader_Archive_CreateShader_alt1(
        (void*)(&v72_.v72), *(__int64**)(*game_g_frame_clock_ptr[0] + 13408),
        (__int64)"face", 4u, (__int64)"filter", 6u);
    v32 = v72_.v72;
    v33 = v72_.v73;
    v34 = (_QWORD*)(*v19 + v27);
    v72_.v72 = nullptr;
    v72_.v73 = 0;
    v35 = v34[1];
    *v34 = v32;
    v34[1] = v33;
    if (v35 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
      std___1___shared_weak_count___release_weak_alt1(v35);
      v36 = v72_.v73;
      if (v72_.v73 == 0) {
        goto LABEL_24;
      }
    }
    else {
      v36 = v72_.v73;
      if (v72_.v73 == 0) {
        goto LABEL_24;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      std___1___shared_weak_count___release_weak_alt1(v36);
    }
  LABEL_24:
    v28 = GameRoutine_ad5000_alt1(*(_QWORD**)(*v19 + v27), (__int64)"gradation",
                                  9u, v26 & 1);
    v29 = GameRoutine_ad5000_alt1(v28, (__int64)"gradation_overlay", 0x11u,
                                  (v26 & 2) != 0);
    v30 = GameRoutine_ad5000_alt1(v29, (__int64)"levels", 6u, (v26 & 4) != 0);
    v31 = GameRoutine_ad5000_alt1(v30, (__int64)"linear_gradation", 0x10u,
                                  v26 >> 3);
    GameHr_ad5280(v31);
    v27 += 16;
    ++v26;
  } while (v27 != 256);
  v37 = *(_QWORD*)(a1 + 1008);
  v38 = *(_QWORD*)(a1 + 1000);
  v39 = (v37 - v38) >> 4;
  if (v39 > 2) {
    v40 = (_QWORD***)(a1 + 1000);
    if (v37 - v38 != 48) {
      for (j = v38 + 48; v37 != j; v37 -= 16) {
        v42 = *(_QWORD*)(v37 - 8);
        if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
          std___1___shared_weak_count___release_weak_alt1(v42);
        }
      }
      v71[126] = j;
    }
  }
  else {
    v40 = (_QWORD***)(a1 + 1000);
    GameRoutine_1917fb0_alt1(v70, 3 - v39);
  }
  gfx_shader_Archive_CreateShader_alt1(
      (void*)(&v72_.v72), *(__int64**)(*game_g_frame_clock_ptr[0] + 13408),
      (__int64)"face", 4u, (__int64)"Diffusion", 9u);
  v43 = *v40;
  v44 = v72_.v72;
  v45 = v72_.v73;
  v72_.v72 = nullptr;
  v72_.v73 = 0;
  v46 = v43[1];
  *v43 = v44;
  v43[1] = v45;
  if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
    std___1___shared_weak_count___release_weak_alt1(v46);
  }
  v47 = v72_.v73;
  if (v72_.v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v72_.v73 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
    std___1___shared_weak_count___release_weak_alt1(v47);
  }
  v48 = GameRoutine_ad5000_alt1(**v40, (__int64)"phase", 5u, 0);
  v49 = GameRoutine_ad5000_alt1(v48, (__int64)"gamma_to_linear", 0xFu, 0);
  GameHr_ad5280(v49);
  gfx_shader_Archive_CreateShader_alt1(
      (void*)(&v72_.v72), *(__int64**)(*game_g_frame_clock_ptr[0] + 13408),
      (__int64)"face", 4u, (__int64)"Diffusion", 9u);
  v50 = *v40;
  v51 = v72_.v72;
  v52 = (_QWORD*)v72_.v73;
  v72_.v72 = nullptr;
  v72_.v73 = 0;
  v53 = (__int64)v50[3];
  v50[2] = v51;
  v50[3] = v52;
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    std___1___shared_weak_count___release_weak_alt1(v53);
  }
  v54 = v72_.v73;
  if (v72_.v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v72_.v73 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
    std___1___shared_weak_count___release_weak_alt1(v54);
  }
  v55 = GameRoutine_ad5000_alt1((*v40)[2], (__int64)"phase", 5u, 1);
  v56 = GameRoutine_ad5000_alt1(v55, (__int64)"gamma_to_linear", 0xFu, 0);
  GameHr_ad5280(v56);
  gfx_shader_Archive_CreateShader_alt1(
      (void*)(&v72_.v72), *(__int64**)(*game_g_frame_clock_ptr[0] + 13408),
      (__int64)"face", 4u, (__int64)"Diffusion", 9u);
  v57 = *v40;
  v58 = v72_.v72;
  v59 = (_QWORD*)v72_.v73;
  v72_.v72 = nullptr;
  v72_.v73 = 0;
  v60 = (__int64)v57[5];
  v57[4] = v58;
  v57[5] = v59;
  if (v60 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
    std___1___shared_weak_count___release_weak_alt1(v60);
  }
  v61 = v72_.v73;
  if (v72_.v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v72_.v73 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
    std___1___shared_weak_count___release_weak_alt1(v61);
  }
  v62 = GameRoutine_ad5000_alt1(*(_QWORD**)(v71[125] + 32LL), (__int64)"phase",
                                5u, 2);
  v63 = GameRoutine_ad5000_alt1(v62, (__int64)"gamma_to_linear", 0xFu, 1);
  GameHr_ad5280(v63);
  gfx_shader_Archive_CreateShader_alt1(
      (void*)(&v72_.v72), *(__int64**)(*game_g_frame_clock_ptr[0] + 13408),
      (__int64)"face", 4u, (__int64)"filter", 6u);
  v64 = v72_.v72;
  v65 = v72_.v73;
  v66 = v71[129];
  v72_.v72 = nullptr;
  v72_.v73 = 0;
  v71[128] = v64;
  v71[129] = v65;
  if (v66 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66);
    std___1___shared_weak_count___release_weak_alt1(v66);
  }
  v67 = v72_.v73;
  if (v72_.v73 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v72_.v73 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
    std___1___shared_weak_count___release_weak_alt1(v67);
  }
  v68 = GameRoutine_ad5000_alt1((_QWORD*)v71[128], (__int64)"gamma_to_linear",
                                0xFu, 1);
  return GameHr_ad5280(v68);
}

__int64 cspine_1919480(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  long double v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 result;
  __int64 v16;
  __int64 v17;

  v16 = 0;
  v17 = 0;
  *(_QWORD*)a1 = (*(__int64 (**)(_QWORD, __int64, unsigned __int64, __int64*))(
      **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 40LL))(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), a2, a3, &v16);
  if (v17 != 0) {
    *(__n128*)&v6 = std___1___shared_weak_count___release_weak(v17);
  }
  if (a3 != 0) {
    v7 = a2 - 1;
    v8 = a3;
    while (v8 != 0) {
      v9 = *(unsigned __int8*)(v7 + v8--);
      if (v9 == 47) {
        if (v8 != -1) {
          goto LABEL_13;
        }
        break;
      }
    }
    v8 = a3;
    while (v8 != 0) {
      v10 = *(unsigned __int8*)(v7 + v8--);
      if (v10 == 92) {
        goto LABEL_13;
      }
    }
  }
  v8 = -1;
LABEL_13:
  v11 = v8 + 1;
  v12 = a3 - (v8 + 1);
  if (a3 < v8 + 1) {
    String_60a250("string_view::substr");
  }
  v13 = a3 - v8;
  if (v12 >= v13) {
    v14 = v13;
  }
  else {
    v14 = v12;
  }
  result = GameRoutine_60a060(a1 + 96, a2 + v11, v14, v6);
  *(_BYTE*)(a1 + 120) = 1;
  return result;
}

#pragma GCC visibility pop
