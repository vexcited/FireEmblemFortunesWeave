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
__int64 cspine_1911b00(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6);
__int64 cspine_1919480(__int64 a1, __int64 a2, unsigned __int64 a3);

__int64 cspine_1911b00(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6)
{
  _QWORD** v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  long double v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 i;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  _QWORD** v47;
  __int64 j;
  __int64 v49;
  long double v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  long double v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  long double v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  long double v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v81;
  _QWORD* v82;
  __int64 v83;
  __int64 v84;

  *(_QWORD*)a1 = cspine_SpineModel_vtable;
  memset(a1 + 8, 0, 416, a4, a5, a6);
  GameRoutine_604020(a1 + 424);
  *(_QWORD*)(a1 + 544) = -1;
  GameRoutine_604020(a1 + 552);
  *(_QWORD*)(a1 + 672) = -1;
  GameRoutine_604020(a1 + 680);
  *(_QWORD*)(a1 + 800) = -1;
  *(_QWORD*)(a1 + 808) = 0;
  v7 = (_QWORD**)(a1 + 952);
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 848) = 0;
  v8 = (__int64*)GameData_212fcd8;
  *(_QWORD*)(a1 + 856) = 1114636288;
  v9 = *v8;
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
  *(_QWORD*)(a1 + 872) = v9;
  *(_WORD*)(a1 + 1043) = 1;
  v10 = (__int64*)GameData_212c960;
  *(_QWORD*)(a1 + 1104) = 1065353216;
  v12 = *v10;
  v11 = v10[1];
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
  *(_QWORD*)(a1 + 1072) = v12;
  *(_QWORD*)(a1 + 1080) = v11;
  *(_QWORD*)(a1 + 1152) = v12;
  *(_QWORD*)(a1 + 1160) = v11;
  *(_QWORD*)(a1 + 1220) = 0xFF00000000LL;
  *(_QWORD*)(a1 + 1228) = 0xFF00000000LL;
  *(_QWORD*)(a1 + 1252) = 0xFF00000000LL;
  *(_QWORD*)(a1 + 1260) = 0xFF00000000LL;
  GameRoutine_1917fb0(a1 + 952, 2);
  *(struct PseudoSret*)(&v83) = gfx_shader_Archive_CreateShader(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13408), "face", 4, "basic", 5);
  v14 = *(_QWORD**)(a1 + 952);
  v15 = v83;
  v16 = v84;
  v83 = 0;
  v84 = 0;
  v17 = v14[1];
  *v14 = v15;
  v14[1] = v16;
  if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    *(__n128*)&v13 = std___1___shared_weak_count___release_weak(v17);
  }
  v18 = v84;
  if (v84 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v18 + 16LL))(v18, v13);
    std___1___shared_weak_count___release_weak(v18);
  }
  v19 = GameRoutine_ad5000(**v7, "blend_type", 10, 0);
  GameRoutine_ad5280(v19);
  *(struct PseudoSret*)(&v83) = gfx_shader_Archive_CreateShader(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13408), "face", 4, "basic", 5);
  v21 = *v7;
  v22 = v83;
  v23 = v84;
  v83 = 0;
  v84 = 0;
  v24 = v21[3];
  v21[2] = v22;
  v21[3] = v23;
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    *(__n128*)&v20 = std___1___shared_weak_count___release_weak(v24);
  }
  v25 = v84;
  if (v84 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v25 + 16LL))(v25, v20);
    std___1___shared_weak_count___release_weak(v25);
  }
  v26 = (_QWORD*)(a1 + 976);
  v27 = GameRoutine_ad5000(*(_QWORD*)(*(_QWORD*)(a1 + 952) + 16LL),
                           "blend_type", 10, 1);
  GameRoutine_ad5280(v27);
  v28 = *(_QWORD*)(a1 + 984);
  v29 = *(_QWORD*)(a1 + 976);
  v30 = (v28 - v29) >> 4;
  if (v30 >= 0x10) {
    if (v28 - v29 != 256) {
      for (i = v29 + 256; v28 != i; v28 -= 16) {
        v32 = *(_QWORD*)(v28 - 8);
        if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
          std___1___shared_weak_count___release_weak(v32);
        }
      }
      *(_QWORD*)(a1 + 984) = i;
    }
  }
  else {
    GameRoutine_1917fb0(a1 + 976, 16 - v30);
  }
  v33 = 0;
  v34 = 0;
  v81 = a1 + 1000;
  v82 = (_QWORD*)a1;
  do {
    *(struct PseudoSret*)(&v83) = gfx_shader_Archive_CreateShader(
        *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13408), "face", 4, "filter", 6);
    v39 = v83;
    v40 = v84;
    v41 = (_QWORD*)(*v26 + v34);
    v83 = 0;
    v84 = 0;
    v42 = v41[1];
    *v41 = v39;
    v41[1] = v40;
    if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
      std___1___shared_weak_count___release_weak(v42);
      v43 = v84;
      if (v84 == 0) {
        goto LABEL_24;
      }
    }
    else {
      v43 = v84;
      if (v84 == 0) {
        goto LABEL_24;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak(v43);
    }
  LABEL_24:
    v35 = GameRoutine_ad5000(*(_QWORD*)(*v26 + v34), "gradation", 9, v33 & 1);
    v36 = GameRoutine_ad5000(v35, "gradation_overlay", 17, (v33 & 2) != 0);
    v37 = GameRoutine_ad5000(v36, "levels", 6, (v33 & 4) != 0);
    v38 = GameRoutine_ad5000(v37, "linear_gradation", 16, v33 >> 3);
    GameRoutine_ad5280(v38);
    v34 += 16;
    ++v33;
  } while (v34 != 256);
  v44 = *(_QWORD*)(a1 + 1008);
  v45 = *(_QWORD*)(a1 + 1000);
  v46 = (v44 - v45) >> 4;
  if (v46 > 2) {
    v47 = (_QWORD**)(a1 + 1000);
    if (v44 - v45 != 48) {
      for (j = v45 + 48; v44 != j; v44 -= 16) {
        v49 = *(_QWORD*)(v44 - 8);
        if (v49 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
          std___1___shared_weak_count___release_weak(v49);
        }
      }
      v82[126] = j;
    }
  }
  else {
    v47 = (_QWORD**)(a1 + 1000);
    GameRoutine_1917fb0(v81, 3 - v46);
  }
  *(struct PseudoSret*)(&v83) = gfx_shader_Archive_CreateShader(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13408), "face", 4, "Diffusion",
      9);
  v51 = *v47;
  v52 = v83;
  v53 = v84;
  v83 = 0;
  v84 = 0;
  v54 = v51[1];
  *v51 = v52;
  v51[1] = v53;
  if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
    *(__n128*)&v50 = std___1___shared_weak_count___release_weak(v54);
  }
  v55 = v84;
  if (v84 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v55 + 16LL))(v55, v50);
    std___1___shared_weak_count___release_weak(v55);
  }
  v56 = GameRoutine_ad5000(**v47, "phase", 5, 0);
  v57 = GameRoutine_ad5000(v56, "gamma_to_linear", 15, 0);
  GameRoutine_ad5280(v57);
  *(struct PseudoSret*)(&v83) = gfx_shader_Archive_CreateShader(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13408), "face", 4, "Diffusion",
      9);
  v59 = *v47;
  v60 = v83;
  v61 = v84;
  v83 = 0;
  v84 = 0;
  v62 = v59[3];
  v59[2] = v60;
  v59[3] = v61;
  if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
    *(__n128*)&v58 = std___1___shared_weak_count___release_weak(v62);
  }
  v63 = v84;
  if (v84 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v63 + 16LL))(v63, v58);
    std___1___shared_weak_count___release_weak(v63);
  }
  v64 = GameRoutine_ad5000((*v47)[2], "phase", 5, 1);
  v65 = GameRoutine_ad5000(v64, "gamma_to_linear", 15, 0);
  GameRoutine_ad5280(v65);
  *(struct PseudoSret*)(&v83) = gfx_shader_Archive_CreateShader(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13408), "face", 4, "Diffusion",
      9);
  v67 = *v47;
  v68 = v83;
  v69 = v84;
  v83 = 0;
  v84 = 0;
  v70 = v67[5];
  v67[4] = v68;
  v67[5] = v69;
  if (v70 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v70 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v70 + 16LL))(v70);
    *(__n128*)&v66 = std___1___shared_weak_count___release_weak(v70);
  }
  v71 = v84;
  if (v84 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v71 + 16LL))(v71, v66);
    std___1___shared_weak_count___release_weak(v71);
  }
  v72 = GameRoutine_ad5000(*(_QWORD*)(v82[125] + 32LL), "phase", 5, 2);
  v73 = GameRoutine_ad5000(v72, "gamma_to_linear", 15, 1);
  GameRoutine_ad5280(v73);
  *(struct PseudoSret*)(&v83) = gfx_shader_Archive_CreateShader(
      *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13408), "face", 4, "filter", 6);
  v75 = v83;
  v76 = v84;
  v77 = v82[129];
  v83 = 0;
  v84 = 0;
  v82[128] = v75;
  v82[129] = v76;
  if (v77 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77);
    *(__n128*)&v74 = std___1___shared_weak_count___release_weak(v77);
  }
  v78 = v84;
  if (v84 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v84 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v78 + 16LL))(v78, v74);
    std___1___shared_weak_count___release_weak(v78);
  }
  v79 = GameRoutine_ad5000(v82[128], "gamma_to_linear", 15, 1);
  return GameRoutine_ad5280(v79);
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
