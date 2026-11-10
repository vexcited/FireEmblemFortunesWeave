#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1993840(__int64, __int64, __int64, __int64, __int64,
                            __int64);
_QWORD* PrimitiveDrawManager_19935e0(_QWORD*, __int64, __int64, unsigned int);
_QWORD* PrimitiveDrawManager_1994180(_QWORD* result);
extern __int128 GameData_1a82dd0;
extern __int64* GameData_212c790;
extern __int64 GameData_2241420;
extern __int64 game_map_MapColorPalette_g_texture_archives;
float32x4_t* GameRoutine_1994460(float32x4_t* result);
_QWORD* GmapCircleShadow_Unknown4(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5, __int64 a6);

_QWORD* GmapCircleShadow_Unknown4(__int64 a1, __int64 a2, __int64 a3,
                                  __int64 a4, __int64 a5, __int64 a6)
{

#pragma clang fp contract(off)
  __int64*** v6;
  __int64** v7;
  __int64* v8;
  __int64 v9;
  _QWORD* v10;
  __int64**** v11;
  __int64*** v12;
  __int64** v13;
  __int64* v14;
  __int64 v15;
  float32x4_t* v16;
  int v22;
  __int64 v23;
  float32x4_t** v24;
  float32x4_t** v25;
  float v26;
  float32x4_t* v27;
  float v28;
  unsigned __int64 v29;
  __int64 v30;
  __int128 v31;
  __int64 v32;
  __int64 v33;
  float32x4_t v34;
  int v35;
  int v36;
  float v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  float v42;
  __int64 v43;
  int v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  int v59;
  __int64 v60;
  __int64 v61;

  GameRoutine_1993840(**(_QWORD**)game_map_MapColorPalette_g_texture_archives,
                      a2, a3, a4, a5, a6);
  v6 = **(__int64*****)game_map_MapColorPalette_g_texture_archives;
  *((_DWORD*)v6 + 4330) = 0;
  v7 = *v6;
  *((_DWORD*)v7 + 4351) = 1;
  v8 = *v7;
  *((_OWORD*)v8 + 1090) = GameData_1a82dd0;
  v9 = *v8;
  v10 = *(_QWORD**)v9;
  *(_DWORD*)(v9 + 17332) = 0;
  v11 = (__int64****)*PrimitiveDrawManager_19935e0(
      v10, (__int64)"Gmap_UnitShadow", 15, 0);
  *((_BYTE*)v11 + 17395) = 1;
  v12 = *v11;
  *((_BYTE*)v12 + 17394) = 0;
  v13 = *v12;
  *((_BYTE*)v13 + 17393) = 1;
  v14 = *v13;
  *((_DWORD*)v14 + 4327) = 1;
  v15 = *v14;
  v16 = *(float32x4_t**)v15;
  *(_DWORD*)(v15 + 17296) = 0;
  GameRoutine_1994460(v16);
  v22 = *(_DWORD*)(GameData_2241420 + 584);
  if (v22 > *(_DWORD*)(GameData_2241420 + 576)) {
    v22 += 16;
  }
  v23 = *(_QWORD*)(*GameData_212c790 + 8);
  v24 = *(float32x4_t***)(v23 + 8);
  v25 = *(float32x4_t***)(v23 + 16);
  if (v24 != v25) {
    v26 = *(float*)(GameData_2241420 + 668) * (float)(v22 + 1);
    do {
      v27 = *v24;
      v28 = (*(float (**)(__int64*))(LANES128((*v24)[16]).n128_u64[1] + 16))(
          &LANES128((*v24)[16]).n128_i64[1]);
      if (v28 != 0x0.0p+0f) {
        v29 = LANES128(v27[6]).n128_u64[0];
        if (v29 == 0 || (unsigned int)*(unsigned __int8*)(v29 + 32) - 3 >= 2) {
          *(_QWORD*)&v31 = 0;
          DWORD2(v31) = 0;
          v30 = game_map_MapColorPalette_g_texture_archives;
          *((float*)&v31 + 3) = v28;
          v32 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
          v33 =
              *(_QWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         18736LL);
          v34 = vaddq_f32(v27[3], v27[4]);
          v35 =
              *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         19200LL);
          v36 =
              *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         17280LL);
          *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                     19200LL) = v35 + 1;
          v37 = LANES128(v34).n128_f32[2] + -0x1.c000000000000p+2f;
          if (v35 <= 262142) {
            *(float*)&v38 = LANES128(v34).n128_f32[0] + -0x1.c000000000000p+2f;
            *((float*)&v38 + 1) = v26 + LANES128(v34).n128_f32[1];
            v39 = *(_QWORD*)(v32 + 19136) + 40LL * (v35 + 1);
            *(float*)(v39 + 8) = v37;
            *(_QWORD*)(v39 + 16) = 0;
            *(_DWORD*)(v39 + 12) = 0;
            *(_OWORD*)(v39 + 24) = v31;
            *(_QWORD*)v39 = v38;
            v40 = v33 + 1440LL * v36 + 4LL * *(int*)(v33 + 1440LL * v36 + 256);
            ++*(_DWORD*)(v40 + 260);
            v30 = game_map_MapColorPalette_g_texture_archives;
          }
          v41 = *(_QWORD*)v30;
          v42 = LANES128(v34).n128_f32[2] + 0x1.c000000000000p+2f;
          v43 = *(_QWORD*)(*(_QWORD*)v30 + 18736LL);
          v44 = *(_DWORD*)(*(_QWORD*)v30 + 19200LL);
          v45 = *(_DWORD*)(*(_QWORD*)v30 + 17280LL);
          *(_DWORD*)(*(_QWORD*)v30 + 19200LL) = v44 + 1;
          if (v44 <= 262142) {
            *((float*)&v46 + 1) = v26 + LANES128(v34).n128_f32[1];
            v47 = *(_QWORD*)(v41 + 19136) + 40LL * (v44 + 1);
            *(float*)&v46 = LANES128(v34).n128_f32[0] + -0x1.c000000000000p+2f;
            *(_QWORD*)v47 = v46;
            *(float*)(v47 + 8) = v42;
            *(_QWORD*)(v47 + 12) = 0x3F80000000000000LL;
            *(_DWORD*)(v47 + 20) = 0;
            *(_OWORD*)(v47 + 24) = v31;
            v48 = v43 + 1440LL * v45 + 4LL * *(int*)(v43 + 1440LL * v45 + 256);
            ++*(_DWORD*)(v48 + 260);
            v30 = game_map_MapColorPalette_g_texture_archives;
          }
          v49 = *(_QWORD*)v30;
          LANES128(v34).n128_f32[0] =
              LANES128(v34).n128_f32[0] + 0x1.c000000000000p+2f;
          v50 = *(_QWORD*)(*(_QWORD*)v30 + 18736LL);
          v51 = *(_DWORD*)(*(_QWORD*)v30 + 19200LL);
          v52 = *(_DWORD*)(*(_QWORD*)v30 + 17280LL);
          *(_DWORD*)(*(_QWORD*)v30 + 19200LL) = v51 + 1;
          if (v51 <= 262142) {
            LODWORD(v53) = LANES128(v34).n128_u32[0];
            *((float*)&v53 + 1) = v26 + LANES128(v34).n128_f32[1];
            v54 = *(_QWORD*)(v49 + 19136) + 40LL * (v51 + 1);
            *(float*)(v54 + 8) = v42;
            *(_QWORD*)(v54 + 12) = 0x3F8000003F800000LL;
            *(_DWORD*)(v54 + 20) = 0;
            *(_OWORD*)(v54 + 24) = v31;
            *(_QWORD*)v54 = v53;
            v55 = v50 + 1440LL * v52 + 4LL * *(int*)(v50 + 1440LL * v52 + 256);
            ++*(_DWORD*)(v55 + 260);
            v30 = game_map_MapColorPalette_g_texture_archives;
          }
          v56 = *(_QWORD*)v30;
          v57 = *(_QWORD*)(v56 + 18736);
          v58 = *(_DWORD*)(v56 + 19200);
          v59 = *(_DWORD*)(v56 + 17280);
          *(_DWORD*)(v56 + 19200) = v58 + 1;
          if (v58 <= 262142) {
            LANES128(v34).n128_f32[1] = v26 + LANES128(v34).n128_f32[1];
            v60 = *(_QWORD*)(v56 + 19136) + 40LL * (v58 + 1);
            *(_QWORD*)v60 = LANES128(v34).n128_u64[0];
            *(float*)(v60 + 8) = v37;
            *(_QWORD*)(v60 + 12) = 1065353216;
            *(_DWORD*)(v60 + 20) = 0;
            *(_OWORD*)(v60 + 24) = v31;
            v61 = v57 + 1440LL * v59 + 4LL * *(int*)(v57 + 1440LL * v59 + 256);
            ++*(_DWORD*)(v61 + 260);
          }
        }
      }
      ++v24;
    } while (v24 != v25);
  }
  return PrimitiveDrawManager_1994180(
      **(_QWORD***)game_map_MapColorPalette_g_texture_archives);
}

#pragma GCC visibility pop
