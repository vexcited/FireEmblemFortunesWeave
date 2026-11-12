#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void llvm_libcxx_21_libcxx_include___vector_b34420(
    PSEUDO_X8, __int64, __int64, unsigned __int64, __int64, __int64, __int64);
__int64 GameHr_b310e0(__int64, __int64**);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern __int64 (*GameData_1fc81d8[])();
extern __int64 (*g3d_Material_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern char GameData_1ac00b9[11];
unsigned __int64 strlen(const char*);
void GameRoutine_7a8220(__int64*, _QWORD*);
void __attribute__((noreturn)) GameRoutine_1938be0();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) String_60a1d0();
void game_adc400(__int64, __int64, __int64, __int64, __int64, _QWORD*, __int64*,
                 _QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
char* gfx_render_b3cae0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, unsigned __int64 a6, __int64 a7,
                        unsigned __int64 a8, _QWORD* a9, _QWORD* a10);
__int64 gfx_render_b81e20(__int64 a1);
void gfx_render_19387a0(__int64* a1, unsigned __int64 a2, _QWORD* a3);

char* gfx_render_b3cae0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                        __int64 a5, unsigned __int64 a6, __int64 a7,
                        unsigned __int64 a8, _QWORD* a9, _QWORD* a10)
{
  _QWORD* v10;
  _QWORD* v11;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  bool v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  struct {
    _QWORD v56[2];
    __int64 v57;
  } v56_;

  v10 = a9;
  v11 = a10;
  *(_WORD*)(a1 + 352) = 0;
  v15 = a6;
  v16 = a5;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_BYTE*)(a1 + 376) = 18;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_WORD*)(a1 + 328) = 0;
  *(_BYTE*)(a1 + 410) = 0;
  *(_QWORD*)(a1 + 416) = a2;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 16) = a4;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 320) = a9;
  strcpy((char*)(a1 + 377), "<no_name>");
  *(_QWORD*)(a1 + 400) = 0x200000000LL;
  *(_WORD*)(a1 + 408) = 256;
  *(_QWORD*)a1 = g3d_Material_vtable;
  *(_QWORD*)(a1 + 8) = a3;
  GameRoutine_60a060((char*)(a1 + 328), a5, a6);
  GameRoutine_60a060((char*)(a1 + 352), a7, a8);
  v17 = **(_QWORD**)(a1 + 416);
  v18 = *(_QWORD*)(v17 + 112);
  if (v18 != 0) {
    v19 = v18 + 8;
    v20 = *(unsigned __int16*)(v18 + 12);
    v21 = v18 + 8 + 16 * v20;
    v22 = *(_DWORD*)v21;
    if ((signed __int32)*(_DWORD*)(v18 + 8) < (signed __int32)*(_DWORD*)v21) {
      do {
        if ((unsigned int)(v22 >> 3) <= 9) {
          v23 = ((unsigned __int8)GameData_1ac00b9[~(v22 >> 3) + 10] >>
                 (v22 & 7)) &
                1;
        }
        else {
          v23 = 0;
        }
        v20 = *(unsigned __int16*)(v18 + 12 + 16 * v20 + 2 * v23);
        v37 = v22 < (signed __int32)*(_DWORD*)(v19 + 16 * v20);
        v22 = *(_DWORD*)(v19 + 16 * v20);
      } while (v37);
      v21 = v19 + 16 * v20;
    }
    v24 = *(_QWORD*)(v21 + 8);
    if (*(_WORD*)v24 == 10) {
      v25 = *(_QWORD*)(v24 + 2);
      v26 = *(unsigned __int16*)(v24 + 10);
      if (v25 == 0x615065726F6E6749LL && v26 == 29555) {
        v28 = v21 - v18 - 24;
        if ((~v28 & 0xFFFFFFFF0LL) != 0) {
          v29 = *(_QWORD*)(v17 + 104);
          if (v29 != 0) {
            v55 = v29 + ((__int64)(int)(v28 >> 4) << 6);
            v31 = *(_QWORD*)(a1 + 424);
            v30 = *(_QWORD*)(a1 + 432);
            if (v31 != v30) {
              v32 = *(_QWORD*)(a1 + 432);
              do {
                v33 = *(_BYTE*)(v32 - 24);
                v32 -= 24;
                if ((v33 & 1) != 0) {
                  v34 = *(_QWORD*)(v30 - 8);
                  if (v34 != 0) {
                    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                      v35 = 128;
                    }
                    else {
                      v35 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        fw_memory_g_heap_manager + v35, v34);
                  }
                }
                v30 = v32;
              } while (v32 != v31);
            }
            *(_QWORD*)(a1 + 432) = v31;
            v10 = a9;
            v36 = *(unsigned int*)(v55 + 16);
            v37 = *(_BYTE*)(v55 + 20) == 0 || (int)v36 < 1;
            if (!v37) {
              v41 = 0;
              v54 = 8 * v36;
              while (1) {
                v42 = *(_QWORD*)(*(_QWORD*)(v55 + 8) + v41);
                v43 = strlen((const char*)(v42 + 2));
                if (v43 >= 0xFFFFFFFFFFFFFFF7LL) {
                  String_60a1d0();
                }
                v44 = v43;
                if (v43 >= 0x17) {
                  break;
                }
                v45 = (char*)v56_.v56 + 1;
                LOBYTE(v56_.v56[0]) = 2 * v43;
                if (v43 != 0) {
                  goto LABEL_41;
                }
              LABEL_42:
                v45[v44] = 0;
                GameRoutine_7a8220((__int64*)(a1 + 424), v56_.v56);
                if ((v56_.v56[0] & 1) != 0 && v56_.v57 != 0) {
                  v53 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v53 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v56_.v57);
                }
                v10 = a9;
                v41 += 8;
                if (v54 == v41) {
                  goto LABEL_31;
                }
              }
              v46 = v16;
              v47 = v15;
              v48 = a7;
              v49 = a8;
              if ((v43 | 7) == 0x17) {
                v50 = 26;
              }
              else {
                v50 = (v43 | 7) + 1;
              }
              v51 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                   v50, 16, 0);
              v52 = v50 | 1;
              a8 = v49;
              a7 = v48;
              v15 = v47;
              v16 = v46;
              v11 = a10;
              v45 = (char*)v51;
              v56_.v56[1] = v44;
              v56_.v57 = v51;
              v56_.v56[0] = v52;
            LABEL_41:
              memmove((__int64)v45, v42 + 2, v44);
              goto LABEL_42;
            }
          }
        }
      }
    }
  }
LABEL_31:
  game_adc400(a1, v16, v15, a7, a8, v10, (__int64*)(a1 + 424), v11);
  v38 = *(_QWORD*)(**(_QWORD**)(a1 + 416) + 8LL);
  v39 = strlen((const char*)(v38 + 2));
  return GameRoutine_60a060((char*)(a1 + 376), v38 + 2, v39);
}

__int64 gfx_render_b81e20(__int64 a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  struct {
    __int64* v11;
    __int64 v12;
  } v11_;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
  v3 = v2 + 3;
  v4 = (__int64)v2;
  v2[2] = 0;
  *v2 = GameData_1fc81d8;
  v2[1] = 0;
  v5 = (atomic_ullong*)(v2 + 1);
  memset((__int64)(v2 + 3), 0, 0x110u);
  *(_QWORD*)(v4 + 76) = 0x3F0000003F000000LL;
  *(_BYTE*)(v4 + 108) = 1;
  *(_QWORD*)(v4 + 84) = 0xBF0000003F000000LL;
  *(_QWORD*)(v4 + 92) = 0xBF000000BF000000LL;
  *(_DWORD*)(v4 + 104) = 64;
  *(_QWORD*)(v4 + 36) = 0x3A83126F3A83126FLL;
  *(_QWORD*)(v4 + 44) = 0x3A83126F3A83126FLL;
  *(_QWORD*)(v4 + 52) = 0x3A83126F3A83126FLL;
  *(_QWORD*)(v4 + 60) = 0x3A83126F3A83126FLL;
  *(_DWORD*)(v4 + 68) = 981668463;
  v6 = *(_QWORD*)(game_g_frame_clock + 13424);
  llvm_libcxx_21_libcxx_include___vector_b34420(
      (void*)((__int64)&v11_.v11), v6,
      (__int64)"Graphics/Textures/common_default", 0x20u,
      (__int64)"Cmn_Default_LSPV_BC", 19, 0);
  *(_QWORD*)(v4 + 136) = v11_.v11;
  *(_DWORD*)(v4 + 144) = v11_.v12;
  llvm_libcxx_21_libcxx_include___vector_b34420(
      (void*)((__int64)&v11_.v11), v6,
      (__int64)"Graphics/Textures/common_default", 0x20u,
      (__int64)"Cmn_Default_LSPV_NM", 19, 0);
  *(_QWORD*)(v4 + 152) = v11_.v11;
  *(_DWORD*)(v4 + 160) = v11_.v12;
  llvm_libcxx_21_libcxx_include___vector_b34420(
      (void*)((__int64)&v11_.v11), v6,
      (__int64)"Graphics/Textures/common_default", 0x20u,
      (__int64)"Cmn_Default_LSPV_SM", 19, 0);
  v7 = v11_.v11;
  *(_QWORD*)(v4 + 184) = 0;
  *(_QWORD*)(v4 + 192) = 0;
  *(_QWORD*)(v4 + 200) = 0;
  *(_QWORD*)(v4 + 208) = 0;
  *(_QWORD*)(v4 + 216) = 0;
  *(_QWORD*)(v4 + 224) = 0;
  *(_QWORD*)(v4 + 232) = 0;
  *(_QWORD*)(v4 + 240) = 0;
  *(_QWORD*)(v4 + 248) = 0;
  *(_QWORD*)(v4 + 256) = 0;
  *(_QWORD*)(v4 + 264) = 0;
  *(_QWORD*)(v4 + 272) = 0;
  *(_QWORD*)(v4 + 280) = 0;
  *(_DWORD*)(v4 + 288) = 0;
  *(_QWORD*)(v4 + 168) = v7;
  LODWORD(v7) = v11_.v12;
  v11_.v11 = v3;
  v11_.v12 = v4;
  *(_DWORD*)(v4 + 176) = (_DWORD)v7;
  *(_QWORD*)(v4 + 112) = 0x3F8000003F800000LL;
  *(_QWORD*)(v4 + 120) = 1065353216;
  *(_QWORD*)(v4 + 128) = 0x3F8000003F800000LL;
  v8 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 288LL);
  atomic_fetch_add_explicit(v5, 1u, memory_order_relaxed);
  result = GameHr_b310e0(v8 + 736, &v11_.v11);
  v10 = v11_.v12;
  if (v11_.v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11_.v12 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    result = std___1___shared_weak_count___release_weak(v10);
  }
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

void gfx_render_19387a0(__int64* a1, unsigned __int64 a2, _QWORD* a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;

  v4 = (_QWORD*)a1[1];
  v3 = a1[2];
  if (0xAAAAAAAAAAAAAAABLL * ((v3 - (__int64)v4) >> 4) >= a2) {
    if (a2 != 0) {
      v14 = &v4[6 * a2];
      v15 = 48 * a2 - 48;
      if ((~(v15 / 0x30) & 7) != 0) {
        v16 = -(__int64)(((unsigned __int8)(v15 / 0x30) + 1) & 7);
        do {
          v17 = a3[5];
          v18 = __CFADD__(v16++, 1);
          v4[3] = a3[3];
          v4[5] = v17;
          v4[1] = a3[1];
          *v4 = *a3;
          v19 = a3[2];
          v4[4] = a3[4];
          v4[2] = v19;
          v4 += 6;
        } while (!v18);
      }
      if (v15 >= 0x150) {
        do {
          v20 = a3[5];
          v4[3] = a3[3];
          v4[5] = v20;
          v4[1] = a3[1];
          *v4 = *a3;
          v21 = a3[2];
          v4[4] = a3[4];
          v4[2] = v21;
          v23 = a3[4];
          v22 = a3[5];
          v24 = a3[3];
          v4[8] = a3[2];
          v4[10] = v23;
          v26 = *a3;
          v25 = a3[1];
          v4[11] = v22;
          v4[9] = v24;
          v4[6] = v26;
          v4[7] = v25;
          v27 = a3[1];
          v4[12] = *a3;
          v4[13] = v27;
          v28 = a3[2];
          v29 = a3[3];
          v30 = a3[5];
          v4[16] = a3[4];
          v4[17] = v30;
          v4[14] = v28;
          v4[15] = v29;
          v31 = a3[1];
          v4[18] = *a3;
          v4[19] = v31;
          v32 = a3[2];
          v33 = a3[3];
          v34 = a3[5];
          v4[22] = a3[4];
          v4[23] = v34;
          v4[20] = v32;
          v4[21] = v33;
          v35 = a3[1];
          v4[24] = *a3;
          v4[25] = v35;
          v36 = a3[2];
          v37 = a3[3];
          v38 = a3[5];
          v4[28] = a3[4];
          v4[29] = v38;
          v4[26] = v36;
          v4[27] = v37;
          v39 = a3[1];
          v4[30] = *a3;
          v4[31] = v39;
          v40 = a3[2];
          v41 = a3[3];
          v42 = a3[5];
          v4[34] = a3[4];
          v4[35] = v42;
          v4[32] = v40;
          v4[33] = v41;
          v43 = a3[1];
          v4[36] = *a3;
          v4[37] = v43;
          v44 = a3[2];
          v45 = a3[3];
          v46 = a3[5];
          v4[40] = a3[4];
          v4[41] = v46;
          v4[38] = v44;
          v4[39] = v45;
          v47 = a3[1];
          v4[42] = *a3;
          v4[43] = v47;
          v48 = a3[2];
          v49 = a3[3];
          v50 = a3[5];
          v4[46] = a3[4];
          v4[47] = v50;
          v4[44] = v48;
          v4[45] = v49;
          v4 += 48;
        } while (v4 != v14);
      }
      v4 = v14;
    }
    a1[1] = (__int64)v4;
  }
  else {
    v6 = (__int64)v4 - *a1;
    v7 = a2 - 0x5555555555555555LL * (v6 >> 4);
    if (v7 > 0x555555555555555LL) {
      GameRoutine_1938be0();
    }
    v8 = fw_memory_g_heap_manager_ptr;
    v9 = 0xAAAAAAAAAAAAAAABLL * ((v3 - *a1) >> 4);
    if (2 * v9 > v7) {
      v7 = 2 * v9;
    }
    if (v9 >= 0x2AAAAAAAAAAAAAALL) {
      v10 = 0x555555555555555LL;
    }
    else {
      v10 = v7;
    }
    if (v10 != 0) {
      if (v10 > 0x555555555555555LL) {
        GameRoutine_60a210();
      }
      v11 = a2;
      v12 = a3;
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v10, 16, 0);
      a3 = v12;
      a2 = v11;
    }
    else {
      v13 = 0;
    }
    v51 = (_QWORD*)(v13 + v6);
    v52 = v13 + v6 + 48 * a2;
    v53 = 48 * a2 - 48;
    if ((~(v53 / 0x30) & 7) != 0) {
      v55 = -(__int64)(((unsigned __int8)(v53 / 0x30) + 1) & 7);
      v54 = v51;
      do {
        v56 = a3[5];
        v18 = __CFADD__(v55++, 1);
        v54[3] = a3[3];
        v54[5] = v56;
        v54[1] = a3[1];
        *v54 = *a3;
        v57 = a3[2];
        v54[4] = a3[4];
        v54[2] = v57;
        v54 += 6;
      } while (!v18);
    }
    else {
      v54 = v51;
    }
    if (v53 >= 0x150) {
      do {
        v58 = a3[5];
        v54[3] = a3[3];
        v54[5] = v58;
        v54[1] = a3[1];
        *v54 = *a3;
        v59 = a3[2];
        v54[4] = a3[4];
        v54[2] = v59;
        v61 = a3[4];
        v60 = a3[5];
        v62 = a3[3];
        v54[8] = a3[2];
        v54[10] = v61;
        v64 = *a3;
        v63 = a3[1];
        v54[11] = v60;
        v54[9] = v62;
        v54[6] = v64;
        v54[7] = v63;
        v65 = a3[1];
        v54[12] = *a3;
        v54[13] = v65;
        v66 = a3[2];
        v67 = a3[3];
        v68 = a3[5];
        v54[16] = a3[4];
        v54[17] = v68;
        v54[14] = v66;
        v54[15] = v67;
        v69 = a3[1];
        v54[18] = *a3;
        v54[19] = v69;
        v70 = a3[2];
        v71 = a3[3];
        v72 = a3[5];
        v54[22] = a3[4];
        v54[23] = v72;
        v54[20] = v70;
        v54[21] = v71;
        v73 = a3[1];
        v54[24] = *a3;
        v54[25] = v73;
        v74 = a3[2];
        v75 = a3[3];
        v76 = a3[5];
        v54[28] = a3[4];
        v54[29] = v76;
        v54[26] = v74;
        v54[27] = v75;
        v77 = a3[1];
        v54[30] = *a3;
        v54[31] = v77;
        v78 = a3[2];
        v79 = a3[3];
        v80 = a3[5];
        v54[34] = a3[4];
        v54[35] = v80;
        v54[32] = v78;
        v54[33] = v79;
        v81 = a3[1];
        v54[36] = *a3;
        v54[37] = v81;
        v82 = a3[2];
        v83 = a3[3];
        v84 = a3[5];
        v54[40] = a3[4];
        v54[41] = v84;
        v54[38] = v82;
        v54[39] = v83;
        v85 = a3[1];
        v54[42] = *a3;
        v54[43] = v85;
        v86 = a3[2];
        v87 = a3[3];
        v88 = a3[5];
        v54[46] = a3[4];
        v54[47] = v88;
        v54[44] = v86;
        v54[45] = v87;
        v54 += 48;
      } while (v54 != (_QWORD*)v52);
    }
    v89 = v13 + 48 * v10;
    v90 = *a1;
    v91 = (unsigned __int64)v4 - *a1;
    v92 = (__int64)v51 - v91;
    memcpy((__int64)v51 - v91, *a1, v91);
    *a1 = v92;
    a1[1] = v52;
    a1[2] = v89;
    if (v90 != 0) {
      v93 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v93 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v93, v90);
    }
  }
}

#pragma GCC visibility pop
