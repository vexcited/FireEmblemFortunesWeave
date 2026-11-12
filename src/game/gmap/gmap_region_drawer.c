#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_gmap_GmapRegionDrawer_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* GmapRegionDrawer_Destructor(_QWORD* result);
__int64 GmapRegionDrawer_DeletingDestructor(_QWORD* a1);
bool GmapRegionDrawer_Unknown2(__int64 a1);
__int64 GmapRegionDrawer_Unknown5(__int64 a1);
__int64 GmapRegionDrawer_Unknown6(__int64 a1);
_QWORD* PrimitiveDrawManager_19935e0(_QWORD*, __int64, __int64, unsigned int);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__int64* GameRoutine_1993840(__int64);
__int64* PrimitiveDrawManager_1994180(__int64* result);
__int64 Impl_13261c0(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 strchr(const char*, int);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212ea30;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a832a0;
extern __int128 GameData_1a83880;
extern __int64* GameData_212d708;
extern __int64* GameData_2130e00;
extern __int64 game_map_MapColorPalette_g_texture_archives;
float powf(float, float);
float32x4_t* GameRoutine_1994460(float32x4_t* result);
unsigned __int64 strlen(const char*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GmapRegionDrawer_Unknown4(__int64 a1);

_QWORD* GmapRegionDrawer_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = result[1];
  *result = game_gmap_GmapRegionDrawer_vtable;
  if (v1 != 0) {
    v2 = result;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
    v2[1] = 0;
  }
  return result;
}

__int64 GmapRegionDrawer_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = a1[1];
  *a1 = game_gmap_GmapRegionDrawer_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v1);
    a1[1] = 0;
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a1);
}

bool GmapRegionDrawer_Unknown2(__int64 a1)
{
  return (*(float (**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 16LL))(
             *(_QWORD*)(a1 + 8) + 8LL) > 0.0;
}

void GmapRegionDrawer_Unknown4(__int64 a1)
{
  __int64*********** v1;
  __int64********** v2;
  __int64********* v3;
  __int64******** v4;
  __int64******* v5;
  __int64****** v6;
  __int64***** v7;
  __int64**** v8;
  __int64*** v9;
  __int64** v10;
  __int64* v11;
  __int64 v12;
  float32x4_t* v13;
  __int64 v14;
  float32x4_t v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _OWORD* v23;
  __int64 v24;
  const char* v25;
  __int64 v26;
  const char* v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  const char* v32;
  _QWORD** v33;
  __int64 v34;
  const char* v35;
  char* v36;
  unsigned __int64 v37;
  _QWORD* v38;
  __int64* v39;
  float32x4_t** v40;
  __int64* v41;
  __int64 v42;
  __int128 v43;
  __int64 v44;
  __int128 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int128* v52;
  __int128 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int128 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  float v62;
  long double v63;
  float v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  int v70;
  __int128 v71;
  __int128 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int128 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  int v80;
  int v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int128 v85;
  __int64 v86;
  __int64 v87;
  int v88;
  int v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int128 v93;
  __int64 v94;
  int v95;
  __int64 v96;
  int v97;
  int v98;
  __int64 v99;
  __int64 v100;
  int v101;
  int v102;
  __int64 v103;
  float v104;
  float v105;
  __int128 v106;
  unsigned int v107;
  __int128 v108;
  __int128 v109;
  float32x4_t v110;
  float32x4_t v111;
  struct {
    _BYTE v112[40];
    int v113;
    char gap188_[36];
    unsigned __int8 v114;
  } v112_;

  v103 = *(_QWORD*)(a1 + 8);
  if ((*(float (**)(__int64))(*(_QWORD*)(v103 + 8) + 16LL))(v103 + 8) >
      0x0.0p+0f) {
    GameRoutine_1993840(
        **(_QWORD**)game_map_MapColorPalette_g_texture_archives);
    v1 = **(__int64*************)game_map_MapColorPalette_g_texture_archives;
    *((_DWORD*)v1 + 4328) = 0;
    v2 = *v1;
    *((_DWORD*)v2 + 4330) = 0;
    v3 = *v2;
    *((_DWORD*)v3 + 4351) = 0;
    v4 = *v3;
    *((_OWORD*)v4 + 1090) = GameData_1a82dd0;
    v5 = *v4;
    *((_DWORD*)v5 + 4333) = 0;
    v6 = *v5;
    *((_BYTE*)v6 + 17395) = 1;
    v7 = *v6;
    *((_BYTE*)v7 + 17394) = 0;
    v8 = *v7;
    *((_BYTE*)v8 + 17393) = 1;
    v9 = *v8;
    *((_BYTE*)v9 + 17397) = 1;
    v10 = *v9;
    *((_DWORD*)v10 + 4327) = 1;
    v11 = *v10;
    *((_DWORD*)v11 + 4324) = 1;
    v12 = *v11;
    v13 = *(float32x4_t**)v12;
    *(_DWORD*)(v12 + 17316) = 1;
    GameRoutine_1994460(v13);
    v14 = *GameData_2130e00;
    v15 = *(float32x4_t*)(*(_QWORD*)(*GameData_212d708 + 16) + 80LL);
    v110 = vaddq_f32(v15, COERCE_AS(float32x4_t, GameData_1a83880));
    v111 = vaddq_f32(v15, COERCE_AS(float32x4_t, GameData_1a832a0));
    collision_670c60((void*)((__int64)v112_.v112), &v111, &v110, 0x10000);
    v16 = *(_QWORD*)(v14 + 312);
    if ((int)(-1431655765 *
              ((unsigned __int64)(*(_QWORD*)(v14 + 320) - v16) >> 4)) >= 1) {
      v17 = 0;
      v18 = 0;
      v101 = v112_.v113;
      v102 = v112_.v114;
      v19 = *(float*)GameData_212ea30;
      do {
        v23 = (_OWORD*)(v16 + v17);
        v24 = *(_QWORD*)v23;
        v25 = *(const char**)(*(_QWORD*)v23 + 32LL);
        if (v25 != nullptr) {
          v106 = v23[1];
          v108 = v23[2];
          v26 = strchr(*(const char**)(*(_QWORD*)v23 + 32LL), 95);
          if (v26 != 0) {
            v27 = (const char*)(v26 + 1);
          }
          else {
            v27 = v25;
          }
          game_util_Format("SpotMask_%s", v27);
          v28 = *(_DWORD*)(*GameData_2130e00 + 656);
          if (v28 == 1) {
            if (v102 != 0 &&
                v101 == ((*(unsigned __int8*)(v24 + 41) << 16) |
                         (*(unsigned __int8*)(v24 + 40) << 24) |
                         (*(unsigned __int8*)(v24 + 42) << 8) | 0xFF)) {
              goto LABEL_27;
            }
          }
          else if (v28 == 0) {
            v29 = *(_QWORD*)(*GameData_212d708 + 16);
            v30 = *(_QWORD*)(v29 + 96);
            if (v30 != 0) {
              v31 = (unsigned __int8)Impl_13261c0(*(_QWORD*)(v29 + 96)) == 4
                        ? 0LL
                        : *(_QWORD*)(v30 + 136);
            }
            else {
              v31 = 0;
            }
            if (v31 == v24) {
            LABEL_27:
              GameRoutine_1993840(
                  **(_QWORD**)game_map_MapColorPalette_g_texture_archives);
              v32 = *(const char**)(v24 + 32);
              v33 = *(_QWORD***)game_map_MapColorPalette_g_texture_archives;
              v34 = strchr(v32, 95);
              if (v34 != 0) {
                v35 = (const char*)(v34 + 1);
              }
              else {
                v35 = v32;
              }
              v36 = game_util_Format("SpotMask_%s", v35);
              v37 = strlen(v36);
              v38 = *v33;
              v39 = GameData_2130e00;
              v40 = (float32x4_t**)PrimitiveDrawManager_19935e0(
                  v38, (__int64)v36, v37, 0);
              GameRoutine_1994460(*v40);
              v41 = (__int64*)fw_memory_g_heap_manager_ptr;
              v42 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
              v43 = COERCE_UNSIGNED_INT(
                  *(float*)&v106 -
                  (float)(0x1.0000000000000p-1f * *(float*)&v108));
              *((float*)&v43 + 2) =
                  *((float*)&v106 + 1) -
                  (float)(0x1.0000000000000p-1f * *((float*)&v108 + 1));
              *(_OWORD*)v42 = v43;
              v44 = fw_memory_HeapManager_Allocate(*v41, 32, 16, 0);
              v45 = COERCE_UNSIGNED_INT(
                  *(float*)&v106 -
                  (float)(0x1.0000000000000p-1f * *(float*)&v108));
              v46 = *(_QWORD*)(v42 + 8);
              v47 = (_QWORD*)v44;
              *((float*)&v45 + 2) =
                  *((float*)&v106 + 1) +
                  (float)(0x1.0000000000000p-1f * *((float*)&v108 + 1));
              *(_QWORD*)v44 = *(_QWORD*)v42;
              *(_QWORD*)(v44 + 8) = v46;
              v48 = *v41;
              *(_OWORD*)(v44 + 16) = v45;
              if (*(_QWORD*)(v48 + 200) != 0) {
                v49 = 128;
              }
              else {
                v49 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(v48 + v49, v42);
              *(float*)&v108 = *(float*)&v106 +
                               (float)(*(float*)&v108 * 0x1.0000000000000p-1f);
              v50 = fw_memory_HeapManager_Allocate(*v41, 64, 16, 0);
              v51 = v47[1];
              v52 = (__int128*)v50;
              *(_QWORD*)&v53 = (unsigned int)v108;
              *(_QWORD*)v50 = *v47;
              *(_QWORD*)(v50 + 8) = v51;
              v54 = v47[3];
              *(_QWORD*)(v50 + 16) = v47[2];
              *(_QWORD*)(v50 + 24) = v54;
              v55 = *v41;
              *((_QWORD*)&v53 + 1) = COERCE_UNSIGNED_INT(
                  *((float*)&v106 + 1) +
                  (float)(0x1.0000000000000p-1f * *((float*)&v108 + 1)));
              *(_OWORD*)(v50 + 32) = v53;
              if (*(_QWORD*)(v55 + 200) != 0) {
                v56 = 128;
              }
              else {
                v56 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(v55 + v56, (__int64)v47);
              v57 = (unsigned int)v108;
              v58 = *v41;
              *((float*)&v57 + 2) =
                  *((float*)&v106 + 1) -
                  (float)(0x1.0000000000000p-1f * *((float*)&v108 + 1));
              v52[3] = v57;
              v59 = (_QWORD*)fw_memory_HeapManager_Allocate(v58, 16, 16, 0);
              v60 = *v39;
              v59[1] = 0x3F8000003F800000LL;
              *v59 = 0;
              v61 = (__int64)v59;
              v62 = *(float*)v103;
              v109 = *(_OWORD*)(v60 + 640);
              v63 = ((long double (*)(__int64)) *
                     (_QWORD*)(*(_QWORD*)(v103 + 8) + 16LL))(v103 + 8);
              *(float*)&v107 = v62 * *(float*)&v63;
              v105 = powf(*(float*)&v109, v19);
              v104 = powf(*((float*)&v109 + 1), v19);
              v64 = powf(*((float*)&v109 + 2), v19);
              *(_QWORD*)&v71 = __PAIR64__(LODWORD(v104), LODWORD(v105));
              v65 = game_map_MapColorPalette_g_texture_archives;
              v66 = *(_QWORD*)game_map_MapColorPalette_g_texture_archives;
              v67 = *(_QWORD*)v61;
              v68 = *(_QWORD*)(*(_QWORD*)
                                   game_map_MapColorPalette_g_texture_archives +
                               18736LL);
              v69 = *(_DWORD*)(*(_QWORD*)
                                   game_map_MapColorPalette_g_texture_archives +
                               19200LL);
              v70 = *(_DWORD*)(*(_QWORD*)
                                   game_map_MapColorPalette_g_texture_archives +
                               17280LL);
              *((_QWORD*)&v71 + 1) = __PAIR64__(v107, LODWORD(v64));
              v72 = *v52;
              *(_DWORD*)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                         19200LL) = v69 + 1;
              if (v69 <= 262142) {
                v73 = *(_QWORD*)(v66 + 19136) + 40LL * (v69 + 1);
                *(_QWORD*)v73 = v72;
                *(_QWORD*)(v73 + 12) = v67;
                *(_DWORD*)(v73 + 20) = 0;
                *(_OWORD*)(v73 + 24) = v71;
                *(_DWORD*)(v73 + 8) = DWORD2(v72);
                v74 = v68 + 1440LL * v70 +
                      4LL * *(int*)(v68 + 1440LL * v70 + 256);
                ++*(_DWORD*)(v74 + 260);
                v65 = game_map_MapColorPalette_g_texture_archives;
              }
              v75 = *(_QWORD*)v65;
              v76 = v52[1];
              v77 = *(_QWORD*)v61;
              v78 = *(_DWORD*)(v61 + 12);
              v79 = *(_QWORD*)(*(_QWORD*)v65 + 18736LL);
              v80 = *(_DWORD*)(*(_QWORD*)v65 + 19200LL);
              v81 = *(_DWORD*)(*(_QWORD*)v65 + 17280LL);
              *(_DWORD*)(*(_QWORD*)v65 + 19200LL) = v80 + 1;
              if (v80 <= 262142) {
                HIDWORD(v77) = v78;
                v82 = *(_QWORD*)(v75 + 19136) + 40LL * (v80 + 1);
                *(_QWORD*)v82 = v76;
                *(_QWORD*)(v82 + 12) = v77;
                *(_DWORD*)(v82 + 20) = 0;
                *(_OWORD*)(v82 + 24) = v71;
                *(_DWORD*)(v82 + 8) = DWORD2(v76);
                v83 = v79 + 1440LL * v81 +
                      4LL * *(int*)(v79 + 1440LL * v81 + 256);
                ++*(_DWORD*)(v83 + 260);
                v65 = game_map_MapColorPalette_g_texture_archives;
              }
              v84 = *(_QWORD*)v65;
              v85 = v52[2];
              v86 = *(_QWORD*)(v61 + 8);
              v87 = *(_QWORD*)(*(_QWORD*)v65 + 18736LL);
              v88 = *(_DWORD*)(*(_QWORD*)v65 + 19200LL);
              v89 = *(_DWORD*)(*(_QWORD*)v65 + 17280LL);
              *(_DWORD*)(*(_QWORD*)v65 + 19200LL) = v88 + 1;
              if (v88 <= 262142) {
                v90 = *(_QWORD*)(v84 + 19136) + 40LL * (v88 + 1);
                *(_QWORD*)v90 = v85;
                *(_QWORD*)(v90 + 12) = v86;
                *(_DWORD*)(v90 + 20) = 0;
                *(_OWORD*)(v90 + 24) = v71;
                *(_DWORD*)(v90 + 8) = DWORD2(v85);
                v91 = v87 + 1440LL * v89 +
                      4LL * *(int*)(v87 + 1440LL * v89 + 256);
                ++*(_DWORD*)(v91 + 260);
                v65 = game_map_MapColorPalette_g_texture_archives;
              }
              v92 = *(_QWORD*)v65;
              v93 = v52[3];
              v94 = *(_QWORD*)(v61 + 8);
              v95 = *(_DWORD*)(v61 + 4);
              v96 = *(_QWORD*)(v92 + 18736);
              v97 = *(_DWORD*)(v92 + 19200);
              v98 = *(_DWORD*)(v92 + 17280);
              *(_DWORD*)(v92 + 19200) = v97 + 1;
              if (v97 <= 262142) {
                HIDWORD(v94) = v95;
                v99 = *(_QWORD*)(v92 + 19136) + 40LL * (v97 + 1);
                *(_QWORD*)v99 = v93;
                *(_QWORD*)(v99 + 12) = v94;
                *(_DWORD*)(v99 + 20) = 0;
                *(_OWORD*)(v99 + 24) = v71;
                *(_DWORD*)(v99 + 8) = DWORD2(v93);
                v100 = v96 + 1440LL * v98 +
                       4LL * *(int*)(v96 + 1440LL * v98 + 256);
                ++*(_DWORD*)(v100 + 260);
              }
              v20 = fw_memory_g_heap_manager_ptr;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v21 = 128;
              }
              else {
                v21 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v61);
              if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
                v22 = 128;
              }
              else {
                v22 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v20 + v22,
                                                 (__int64)v52);
              PrimitiveDrawManager_1994180(
                  **(__int64***)game_map_MapColorPalette_g_texture_archives);
            }
          }
        }
        v16 = *(_QWORD*)(v14 + 312);
        ++v18;
        v17 += 48;
      } while (v18 <
               (int)(-1431655765 *
                     ((unsigned __int64)(*(_QWORD*)(v14 + 320) - v16) >> 4)));
    }
    PrimitiveDrawManager_1994180(
        **(__int64***)game_map_MapColorPalette_g_texture_archives);
  }
}

__int64 GmapRegionDrawer_Unknown5(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;

  v1 = *(_QWORD*)(a1 + 8);
  v5 = 1065353216;
  if (*(_BYTE*)(v1 + 32) == 1) {
    result = (*(__int64 (**)(__int64, float, float))(*(_QWORD*)(v1 + 8) +
                                                     24LL))(v1 + 8, 1.0, 1.0);
    *(_DWORD*)(v1 + 16) = 0;
  }
  else {
    if (*(float*)(v1 + 16) <= 0.5) {
      result = (*(__int64 (**)(__int64, int*, __int64))(
          *(_QWORD*)(v1 + 8) + 8LL))(v1 + 8, &v5, v1 + 40);
      if ((result & 1) == 0) {
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 8) + 16LL))(v1 + 8);
      v3 = *(_QWORD*)(v1 + 8);
      v4 = v1 + 8;
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 8) + 16LL))(v1 + 8);
      v3 = *(_QWORD*)(v1 + 8);
      v4 = v1 + 8;
    }
    result = (*(__int64 (**)(__int64))(v3 + 24))(v4);
    *(_DWORD*)(v1 + 16) = 1056964608;
  }
  *(_DWORD*)(v1 + 20) = 0;
  *(_WORD*)(v1 + 32) = 256;
  return result;
}

__int64 GmapRegionDrawer_Unknown6(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;

  v1 = *(_QWORD*)(a1 + 8);
  v5 = 0;
  if (*(_BYTE*)(v1 + 32) == 1) {
    result = (*(__int64 (**)(__int64, double, double))(*(_QWORD*)(v1 + 8) +
                                                       24LL))(v1 + 8, 0.0, 0.0);
    *(_DWORD*)(v1 + 16) = 0;
  }
  else {
    if (*(float*)(v1 + 16) <= 0.5) {
      result = (*(__int64 (**)(__int64, int*, __int64))(
          *(_QWORD*)(v1 + 8) + 8LL))(v1 + 8, &v5, v1 + 40);
      if ((result & 1) == 0) {
        return result;
      }
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 8) + 16LL))(v1 + 8);
      v3 = *(_QWORD*)(v1 + 8);
      v4 = v1 + 8;
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)(v1 + 8) + 16LL))(v1 + 8);
      v3 = *(_QWORD*)(v1 + 8);
      v4 = v1 + 8;
    }
    result = (*(__int64 (**)(__int64))(v3 + 24))(v4);
    *(_DWORD*)(v1 + 16) = 1056964608;
  }
  *(_DWORD*)(v1 + 20) = 0;
  *(_WORD*)(v1 + 32) = 256;
  return result;
}

#pragma GCC visibility pop
