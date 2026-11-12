#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10e4bc0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* IKFoot_10e4480(_QWORD* result, unsigned __int64 a2, long double a3);
__int64 game_character_IKFoot_IKFoot_lambda0_Invoke(__int64 result, int* a2);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_200c180[])();
extern __int64 (*game_character_IKFoot_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
__n128 IKFoot_Destructor_alt1(_QWORD* a1) __asm__("IKFoot_Destructor");
__int64 GameRoutine_109f0c0(__int64 result, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128
GameRoutine_10e4bc0_alt1(__int64*,
                         unsigned __int64) __asm__("GameRoutine_10e4bc0");
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _DWORD* GameData_212ec98;
extern _UNKNOWN* GameData_200c198;
extern _UNKNOWN* GameData_200c1d8;
extern _UNKNOWN* GameData_200c218;
extern _UNKNOWN* GameData_200c258;
extern _UNKNOWN* GameData_200c298;
extern _UNKNOWN* GameData_200c2d8;
extern _UNKNOWN* GameData_200c2f8;
extern _UNKNOWN* GameData_200c318;
extern _UNKNOWN* GameData_200c358;
extern _UNKNOWN* GameData_200c398;
extern _UNKNOWN* GameData_200c3b8;
extern _UNKNOWN* GameData_200c3d8;
extern _UNKNOWN* GameData_200c3f8;
extern _UNKNOWN* GameData_200c418;
extern _UNKNOWN* GameData_200c438;
extern _UNKNOWN* GameData_200c458;
extern _UNKNOWN* GameData_200c478;
extern _UNKNOWN* GameData_212df10;
extern __int64 (*GameData_200c4d8[])();
extern __int64* GameData_212fe80;
extern __int64* GameData_2130088[8];
extern __int64 GameData_212d270;
extern char* GameData_200c190[96];
extern char* GameData_200c1a0[94];
extern char* GameData_200c1a8[93];
extern char* GameData_200c1d0[88];
extern char* GameData_200c1e0[86];
extern char* GameData_200c1e8[85];
extern char* GameData_200c210[80];
extern char* GameData_200c220[78];
extern char* GameData_200c228[77];
extern char* GameData_200c250[72];
extern char* GameData_200c260[70];
extern char* GameData_200c268[69];
extern char* GameData_200c290[64];
extern char* GameData_200c2a0[62];
extern char* GameData_200c2a8[61];
extern char* GameData_200c2d0[56];
extern char* GameData_200c2e0[54];
extern char* GameData_200c2e8[53];
extern char* GameData_200c2f0[52];
extern char* GameData_200c300[50];
extern char* GameData_200c308[49];
extern char* GameData_200c310[48];
extern char* GameData_200c320[46];
extern char* GameData_200c328[45];
extern char* GameData_200c350[40];
extern char* GameData_200c360[38];
extern char* GameData_200c368[37];
extern char* GameData_200c390[32];
extern char* GameData_200c3a0[30];
extern char* GameData_200c3a8[29];
extern char* GameData_200c3b0[28];
extern char* GameData_200c3c0[26];
extern char* GameData_200c3c8[25];
extern char* GameData_200c3d0[24];
extern char* GameData_200c3e0[22];
extern char* GameData_200c3e8[21];
extern char* GameData_200c3f0[20];
extern char* GameData_200c400[18];
extern char* GameData_200c408[17];
extern char* GameData_200c410[16];
extern char* GameData_200c420[14];
extern char* GameData_200c428[13];
extern char* GameData_200c430[12];
extern char* GameData_200c440[10];
extern char* GameData_200c448[9];
extern char* GameData_200c450[8];
extern char* GameData_200c460[6];
extern char* GameData_200c468[5];
extern char** GameData_200c1b0;
extern char** GameData_200c1f0;
extern char** GameData_200c230;
extern char** GameData_200c270;
extern char** GameData_200c2b0;
extern char** GameData_200c330;
extern char** GameData_200c370;
extern char** GameData_200c470;
extern int* GameData_212df08;
void GameRoutine_10b4f00(__int64, __int64, __int64*);
void IKFoot_10e4480_alt1(__int64*, unsigned __int64) __asm__("IKFoot_10e4480");
void __attribute__((noreturn)) GameRoutine_10e5410();
void __attribute__((noreturn)) GameRoutine_60a210();
void game_character_IKFoot_IKFoot(__int64 a1, _QWORD* a2, __int64 a3);
float IKFoot_Unknown3(__int64 a1, float32x4_t a2);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 IKFoot_Destructor(_QWORD* a1);
__int64 GameRoutine_112c460(__int64 result);
extern __int128 GameData_1a83610;
float GameRoutine_10a92a0(float32x4_t*, float, float);
float powf(float, float);
void GameRoutine_10a98e0(int8x16_t*, float, float, float);
void IKFoot_Unknown4(__int64 a1);

void game_character_IKFoot_IKFoot(__int64 a1, _QWORD* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __n128 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int8 explicit;
  int* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 j;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  char* v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  char** v45;
  char* v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
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
  __int64 i;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  char* v70;
  char* v71;
  __int64 v72;
  __int64 v73;
  _DWORD* v74;
  _DWORD* v75;
  _DWORD* v76;
  _DWORD* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64* v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  _QWORD* v92;
  __int64 v93;
  __int64 v94;
  int v95;
  unsigned __int64 v96;
  __int64* v97;
  _QWORD* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64* v110;
  __int64 v111;
  __n128 v112;
  char* v113;
  char* v114;
  __int64 v115;
  __int64 v116;
  char* v117;
  __int64 v118;
  char* v119;
  _QWORD* v120;
  char* v121;
  _QWORD* v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  struct {
    __int64 v127[2];
    char* v128;
    char* v129;
    __int64* v130;
  } v127_;

  v5 = GameData_2130088[0];
  *(_QWORD*)(a1 + 24) = a2;
  *(_DWORD*)(a1 + 32) = 0;
  *(_QWORD*)a1 = v5 + 2;
  *(_QWORD*)(a1 + 8) = a3;
  *(_WORD*)(a1 + 16) = 256;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  *(_DWORD*)(v7 + 24) = 0;
  v9 = GameData_212fe80;
  *(_QWORD*)(a1 + 48) = v7 + 24;
  *(_QWORD*)(a1 + 56) = v7;
  *(_QWORD*)(a1 + 64) = v7 + 24;
  *(_QWORD*)(a1 + 72) = v7;
  *(_QWORD*)v7 = v9 + 2;
  *(_QWORD*)(v7 + 8) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                            memory_order_relaxed);
  *(_QWORD*)(a1 + 80) = 0;
  v10 = (__int64*)(a1 + 80);
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)a1 = game_character_IKFoot_vtable;
  *(_QWORD*)(a1 + 40) = GameData_200c180;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 1050253722;
  if (a2 != nullptr) {
    v11 = a2[56];
    v12 = a2[50];
    v13 = a2[51];
    v14 = a2[49];
    v15 = v11 != 0 ? a2[56] : a2[51];
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
      LODWORD(v16) = *(_DWORD*)(v14 + 11784);
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        v8 = std___1___shared_weak_count___release_weak(v12);
      }
    }
    else {
      LODWORD(v16) = *(_DWORD*)(v14 + 11784);
    }
    v17 = (unsigned int)(v16 - 2) < 7 && v11 == 0;
    v16 = v17 ? 0LL : (unsigned int)v16;
    if ((unsigned int)(v16 - 2) > 6) {
      if (v13 == 0 || v11 != 0) {
        return;
      }
    }
    else if (v13 == 0 || v11 == 0) {
      return;
    }
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v19 = GameData_212df08;
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212df10) != 0) {
      *v19 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release(GameData_212df10);
    }
    v20 = *(_QWORD*)(v15 + 512);
    v21 = v20;
    do {
      v22 = *(_DWORD*)(v21 - 16);
      v21 -= 16;
      v20 -= 16;
    } while (v22 != *v19);
    v23 = *(_QWORD*)(*(_QWORD*)(v20 + 8) + 24LL);
    if (v23 != 0) {
      v24 = *(_QWORD*)GameData_212d270;
      PSEUDO_LOW_LANE128(v8, n128_u32,
                         *(_DWORD*)(*(_QWORD*)GameData_212d270 + 232LL));
      *(_DWORD*)(a1 + 116) = LANES128(v8).n128_u32[0];
      if ((unsigned int)v16 <= 0x20) {
        switch (v16) {
        case 0LL:
        case 1LL:
          v33 = *(_DWORD*)(v24 + 224);
          v34 = *(_QWORD*)(a1 + 80);
          v35 = *(_QWORD*)(a1 + 88);
          *(_DWORD*)(a1 + 116) = v33;
          v36 = 0xAAAAAAAAAAAAAAABLL * ((v35 - v34) >> 6);
          if (v36 > 1) {
            if (v35 - v34 != 384) {
              for (i = v34 + 384; v35 != i; v35 -= 192) {
                v66 = *(_QWORD*)(v35 - 160);
                if (v66 != 0) {
                  *(_QWORD*)(v35 - 152) = v66;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v67 = 128;
                  }
                  else {
                    v67 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v67);
                }
                v68 = *(_QWORD*)(v35 - 184);
                if (v68 != 0) {
                  *(_QWORD*)(v35 - 176) = v68;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v69 = 128;
                  }
                  else {
                    v69 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v69);
                }
              }
              *(_QWORD*)(a1 + 88) = i;
              v6 = (__int64*)fw_memory_g_heap_manager_ptr;
            }
          }
          else {
            GameRoutine_10e4bc0_alt1((__int64*)(a1 + 80), 2 - v36);
          }
          v60 = *v10;
          goto LABEL_73;
        case 2LL:
        case 3LL:
        case 8LL:
        case 14LL:
        case 24LL:
        case 25LL:
          v25 = *(_QWORD*)(a1 + 80);
          v26 = *(_QWORD*)(a1 + 88);
          *(_DWORD*)(a1 + 116) = 0;
          v27 = 0xAAAAAAAAAAAAAAABLL * ((v26 - v25) >> 6);
          if (v27 > 3) {
            if (v26 - v25 != 768) {
              for (j = v25 + 768; v26 != j; v26 -= 192) {
                v29 = *(_QWORD*)(v26 - 160);
                if (v29 != 0) {
                  *(_QWORD*)(v26 - 152) = v29;
                  if (*(_QWORD*)(*v6 + 200) != 0) {
                    v30 = 128;
                  }
                  else {
                    v30 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v6 + v30);
                }
                v31 = *(_QWORD*)(v26 - 184);
                if (v31 != 0) {
                  *(_QWORD*)(v26 - 176) = v31;
                  if (*(_QWORD*)(*v6 + 200) != 0) {
                    v32 = 128;
                  }
                  else {
                    v32 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v6 + v32);
                }
              }
              *(_QWORD*)(a1 + 88) = j;
            }
          }
          else {
            GameRoutine_10e4bc0_alt1((__int64*)(a1 + 80), 4 - v27);
          }
          v37 = *v10;
          v127_.v127[0] = (__int64)GameData_200c210[0];
          v127_.v127[1] = (__int64)GameData_200c218[0];
          v127_.v128 = GameData_200c220[0];
          v127_.v129 = GameData_200c228[0];
          GameRoutine_10b4f00(v37, v23, v127_.v127);
          v38 = *v10;
          v39 = (__int64*)GameData_200c230;
          goto LABEL_48;
        case 4LL:
        case 5LL:
        case 9LL:
        case 10LL:
        case 11LL:
        case 12LL:
        case 13LL:
        case 15LL:
        case 16LL:
        case 17LL:
        case 18LL:
        case 19LL:
        case 20LL:
        case 22LL:
        case 23LL:
        case 27LL:
        case 29LL:
        case 30LL:
        case 31LL:
          goto LABEL_76;
        case 6LL:
          IKFoot_10e4480_alt1((__int64*)(a1 + 80), 2u);
          v62 = *v10;
          v127_.v127[0] = (__int64)GameData_200c350[0];
          v127_.v127[1] = (__int64)GameData_200c358[0];
          v127_.v128 = GameData_200c360[0];
          v127_.v129 = GameData_200c368[0];
          GameRoutine_10b4f00(v62, v23, v127_.v127);
          v61 = *v10;
          v45 = GameData_200c370;
          goto LABEL_74;
        case 7LL:
          *(_DWORD*)(a1 + 116) = 0;
          IKFoot_10e4480_alt1((__int64*)(a1 + 80), 8u);
          v49 = *(_QWORD*)(a1 + 80);
          v127_.v127[0] = (__int64)GameData_200c390[0];
          v127_.v127[1] = (__int64)GameData_200c398[0];
          v127_.v128 = GameData_200c3a0[0];
          v127_.v129 = GameData_200c3a8[0];
          GameRoutine_10b4f00(v49, v23, v127_.v127);
          v50 = *(_QWORD*)(a1 + 80) + 192LL;
          v127_.v127[0] = (__int64)GameData_200c3b0[0];
          v127_.v127[1] = (__int64)GameData_200c3b8[0];
          v127_.v128 = GameData_200c3c0[0];
          v127_.v129 = GameData_200c3c8[0];
          GameRoutine_10b4f00(v50, v23, v127_.v127);
          v51 = *(_QWORD*)(a1 + 80) + 384LL;
          v127_.v127[0] = (__int64)GameData_200c3d0[0];
          v127_.v127[1] = (__int64)GameData_200c3d8[0];
          v127_.v128 = GameData_200c3e0[0];
          v127_.v129 = GameData_200c3e8[0];
          GameRoutine_10b4f00(v51, v23, v127_.v127);
          v52 = *(_QWORD*)(a1 + 80) + 576LL;
          v127_.v127[0] = (__int64)GameData_200c3f0[0];
          v127_.v127[1] = (__int64)GameData_200c3f8[0];
          v127_.v128 = GameData_200c400[0];
          v127_.v129 = GameData_200c408[0];
          GameRoutine_10b4f00(v52, v23, v127_.v127);
          v53 = *(_QWORD*)(a1 + 80) + 768LL;
          v127_.v127[0] = (__int64)GameData_200c410[0];
          v127_.v127[1] = (__int64)GameData_200c418[0];
          v127_.v128 = GameData_200c420[0];
          v127_.v129 = GameData_200c428[0];
          GameRoutine_10b4f00(v53, v23, v127_.v127);
          v54 = *(_QWORD*)(a1 + 80) + 960LL;
          v127_.v127[0] = (__int64)GameData_200c430[0];
          v127_.v127[1] = (__int64)GameData_200c438[0];
          v127_.v128 = GameData_200c440[0];
          v127_.v129 = GameData_200c448[0];
          GameRoutine_10b4f00(v54, v23, v127_.v127);
          v55 = *(_QWORD*)(a1 + 80) + 1152LL;
          v127_.v127[0] = (__int64)GameData_200c450[0];
          v127_.v127[1] = (__int64)GameData_200c458[0];
          v127_.v128 = GameData_200c460[0];
          v127_.v129 = GameData_200c468[0];
          GameRoutine_10b4f00(v55, v23, v127_.v127);
          v45 = GameData_200c470;
          v46 = GameData_200c470[0];
          v47 = GameData_200c478[0];
          v48 = *(_QWORD*)(a1 + 80) + 1344LL;
          break;
        case 21LL:
          *(_DWORD*)(a1 + 116) = *(_DWORD*)(v24 + 228);
          IKFoot_10e4480_alt1((__int64*)(a1 + 80), 2u);
          v59 = GameRoutine_109f0c0(v23, (__int64)"Jnt_L_Toe");
          v60 = *(_QWORD*)(a1 + 80);
          if (v59 != 0) {
          LABEL_73:
            v127_.v127[0] = (__int64)GameData_200c290[0];
            v127_.v127[1] = (__int64)GameData_200c298[0];
            v127_.v128 = GameData_200c2a0[0];
            v127_.v129 = GameData_200c2a8[0];
            GameRoutine_10b4f00(v60, v23, v127_.v127);
            v61 = *v10;
            v45 = GameData_200c2b0;
          }
          else {
            v127_.v127[0] = (__int64)GameData_200c1d0[0];
            v127_.v127[1] = (__int64)GameData_200c1d8[0];
            v127_.v128 = GameData_200c1e0[0];
            v127_.v129 = GameData_200c1e8[0];
            GameRoutine_10b4f00(v60, v23, v127_.v127);
            v61 = *v10;
            v45 = GameData_200c1f0;
          }
          goto LABEL_74;
        case 26LL:
          IKFoot_10e4480_alt1((__int64*)(a1 + 80), 4u);
          v64 = *v10;
          v127_.v127[0] = (__int64)GameData_200c250[0];
          v127_.v127[1] = (__int64)GameData_200c258[0];
          v127_.v128 = GameData_200c260[0];
          v127_.v129 = GameData_200c268[0];
          GameRoutine_10b4f00(v64, v23, v127_.v127);
          v38 = *v10;
          v39 = (__int64*)GameData_200c270;
        LABEL_48:
          v40 = v39[1];
          v127_.v127[0] = *v39;
          v127_.v127[1] = v40;
          v42 = (char*)v39[2];
          v41 = (char*)v39[3];
          v127_.v128 = v42;
          v127_.v129 = v41;
          GameRoutine_10b4f00(v38 + 192, v23, v127_.v127);
          v43 = *v10 + 384;
          v127_.v127[0] = (__int64)GameData_200c290[0];
          v127_.v127[1] = (__int64)GameData_200c298[0];
          v127_.v128 = GameData_200c2a0[0];
          v127_.v129 = GameData_200c2a8[0];
          GameRoutine_10b4f00(v43, v23, v127_.v127);
          v44 = *v10;
          v45 = GameData_200c2b0;
          goto LABEL_49;
        case 28LL:
          *(_DWORD*)(a1 + 116) = *(_DWORD*)(v24 + 224);
          IKFoot_10e4480_alt1((__int64*)(a1 + 80), 2u);
          v63 = *(_QWORD*)(a1 + 80);
          v127_.v127[0] = (__int64)GameData_200c190[0];
          v127_.v127[1] = (__int64)GameData_200c198[0];
          v127_.v128 = GameData_200c1a0[0];
          v127_.v129 = GameData_200c1a8[0];
          GameRoutine_10b4f00(v63, v23, v127_.v127);
          v61 = *(_QWORD*)(a1 + 80);
          v45 = GameData_200c1b0;
        LABEL_74:
          v46 = *v45;
          v47 = v45[1];
          v48 = v61 + 192;
          break;
        case 32LL:
          *(_DWORD*)(a1 + 116) = -1102263091;
          IKFoot_10e4480_alt1((__int64*)(a1 + 80), 4u);
          v56 = *(_QWORD*)(a1 + 80);
          v127_.v127[0] = (__int64)GameData_200c2d0[0];
          v127_.v127[1] = (__int64)GameData_200c2d8[0];
          v127_.v128 = GameData_200c2e0[0];
          v127_.v129 = GameData_200c2e8[0];
          GameRoutine_10b4f00(v56, v23, v127_.v127);
          v57 = *(_QWORD*)(a1 + 80) + 192LL;
          v127_.v127[0] = (__int64)GameData_200c2f0[0];
          v127_.v127[1] = (__int64)GameData_200c2f8[0];
          v127_.v128 = GameData_200c300[0];
          v127_.v129 = GameData_200c308[0];
          GameRoutine_10b4f00(v57, v23, v127_.v127);
          v58 = *(_QWORD*)(a1 + 80) + 384LL;
          v127_.v127[0] = (__int64)GameData_200c310[0];
          v127_.v127[1] = (__int64)GameData_200c318[0];
          v127_.v128 = GameData_200c320[0];
          v127_.v129 = GameData_200c328[0];
          GameRoutine_10b4f00(v58, v23, v127_.v127);
          v44 = *(_QWORD*)(a1 + 80);
          v45 = GameData_200c330;
        LABEL_49:
          v46 = *v45;
          v47 = v45[1];
          v48 = v44 + 576;
          break;
        default:
          abort();
        }
        v127_.v127[0] = (__int64)v46;
        v127_.v127[1] = (__int64)v47;
        v71 = v45[2];
        v70 = v45[3];
        v127_.v128 = v71;
        v127_.v129 = v70;
        GameRoutine_10b4f00(v48, v23, v127_.v127);
      }
    LABEL_76:
      v72 = *(_QWORD*)(a1 + 80);
      v73 = *(_QWORD*)(a1 + 88);
      if (v72 != v73) {
        if ((int)v16 > 20) {
          if ((int)v16 > 25) {
            if ((_DWORD)v16 == 26) {
              do {
                *(_DWORD*)(v72 + 108) = 1061997773;
                v72 += 192;
              } while (v72 != v73);
            }
            else if ((_DWORD)v16 == 32) {
              do {
                *(_QWORD*)(v72 + 104) = 0x3FB3333300000000LL;
                v72 += 192;
              } while (v72 != v73);
            }
          }
          else if ((_DWORD)v16 == 21) {
            do {
              *(_DWORD*)(v72 + 108) = 1065353216;
              v72 += 192;
            } while (v72 != v73);
          }
          else if ((_DWORD)v16 == 25) {
            do {
              *(_QWORD*)(v72 + 104) = 0x3ECCCCCD00000000LL;
              v72 += 192;
            } while (v72 != v73);
          }
        }
        else if ((unsigned int)(v16 - 2) < 2) {
          do {
            *(_QWORD*)(v72 + 104) = 0x3E75C28F3F000000LL;
            v72 += 192;
          } while (v72 != v73);
        }
        else if ((_DWORD)v16 == 7) {
          do {
            *(_DWORD*)(v72 + 104) = 0;
            v72 += 192;
          } while (v72 != v73);
        }
        else if ((_DWORD)v16 == 8) {
          do {
            *(_QWORD*)(v72 + 104) = 0x3EB333333E800000LL;
            v72 += 192;
          } while (v72 != v73);
        }
        v74 = *(_DWORD**)(a1 + 80);
        v75 = *(_DWORD**)(a1 + 88);
        if (v74 != v75) {
          v76 = v74 + 25;
          do {
            v77 = v76 - 25;
            if (*(_QWORD*)(v76 - 25) == 0 ||
                *(_QWORD*)(v76 - 21) - *(_QWORD*)(v76 - 23) != 96) {
              return;
            }
            *(_QWORD*)(v76 - 3) = a2;
            v78 = a2[49];
            v79 = a2[50];
            if (v79 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v79 + 8), 1u,
                                        memory_order_relaxed);
              PSEUDO_LOW_LANE128(v8, n128_u32, *(_DWORD*)(v78 + 32));
              *v76 = LANES128(v8).n128_u32[0];
              if (atomic_fetch_add((atomic_ullong* volatile)(v79 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v79 + 16LL))(v79);
                v8 = std___1___shared_weak_count___release_weak(v79);
              }
            }
            else {
              PSEUDO_LOW_LANE128(v8, n128_u32, *(_DWORD*)(v78 + 32));
              *v76 = LANES128(v8).n128_u32[0];
            }
            v76 += 48;
          } while (v77 + 48 != v75);
        }
        v81 = *(_QWORD*)(a1 + 64);
        v80 = *(_QWORD*)(a1 + 72);
        if (v80 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 16), 1u,
                                    memory_order_relaxed);
          v127_.v130 = v127_.v127;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 16), 1u,
                                    memory_order_relaxed);
          v127_.v127[0] = (__int64)GameData_200c4d8;
          v127_.v127[1] = a1;
          if (v127_.v130 == nullptr) {
          LABEL_201:
            v8 = std___1___shared_weak_count___release_weak(v80);
            goto LABEL_202;
          }
        }
        else {
          v127_.v127[0] = (__int64)GameData_200c4d8;
          v127_.v127[1] = a1;
          v127_.v130 = v127_.v127;
        }
        v83 = a2[34];
        v82 = a2[35];
        if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v82 - v83) >> 4) < 0x40) {
        LABEL_143:
          v84 = v82;
          if (v80 != 0) {
            goto LABEL_147;
          }
        LABEL_202:
          if (v127_.v130 == v127_.v127) {
            v126 = 32;
          }
          else {
            if (v127_.v130 == nullptr) {
            LABEL_207:
              if (v80 != 0) {
                std___1___shared_weak_count___release_weak(v80);
              }
              *(_BYTE*)(a1 + 16) = 1;
              return;
            }
            v126 = 40;
          }
          (*(void (**)(void*))(*v127_.v130 + v126))(v127_.v130);
          goto LABEL_207;
        }
        v84 = a2[34];
        if (v83 != v82) {
          v84 = a2[34];
          while (*(_DWORD*)v84 != 0) {
            v85 = *(_QWORD*)(v84 + 16);
            if (v85 == 0 || *(_QWORD*)(v85 + 8) == -1) {
              break;
            }
            v84 += 80LL;
            if (v84 == v82) {
              goto LABEL_143;
            }
          }
        }
        if (v84 == v82) {
          goto LABEL_142;
        }
        v86 = v6;
        v87 = v84 + 80;
        if (v84 + 80 == v82) {
        LABEL_141:
          v6 = v86;
        LABEL_142:
          if (v84 == v82) {
            goto LABEL_143;
          }
          while (1) {
            v98 = *(_QWORD**)(v82 - 16);
            if ((_QWORD*)(v82 - 48) == v98) {
              break;
            }
            if (v98 != nullptr) {
              v99 = 40;
            LABEL_157:
              (*(void (**)(__int64))(*v98 + v99))((__int64)v98);
            }
            v100 = *(_QWORD*)(v82 - 64);
            if (v100 != 0) {
              v8 = std___1___shared_weak_count___release_weak(v100);
            }
            v82 -= 80LL;
            if (v82 == v84) {
              a2[35] = v84;
              if (v80 == 0) {
                goto LABEL_202;
              }
            LABEL_147:
              if (*(_QWORD*)(v80 + 8) == -1) {
                goto LABEL_201;
              }
              v95 = *GameData_212ec98 + 1;
              v96 = a2[36];
              *GameData_212ec98 = v95;
              if (v84 < v96) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 16),
                                          1u, memory_order_relaxed);
                *(_DWORD*)v84 = v95;
                *(_QWORD*)(v84 + 8) = v81;
                *(_QWORD*)(v84 + 16) = v80;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 16),
                                          1u, memory_order_relaxed);
                v97 = v127_.v130;
                if (v127_.v130 != nullptr) {
                  if (v127_.v130 == v127_.v127) {
                    *(_QWORD*)(v84 + 64) = v84 + 32;
                    (*(void (**)(__int64*))(*v97 + 24))(v97);
                  }
                  else {
                    *(_QWORD*)(v84 + 64) = (*(__int64 (**)(__int64))(
                        *v127_.v130 + 16))((__int64)v127_.v130);
                  }
                }
                else {
                  *(_QWORD*)(v84 + 64) = 0;
                }
                std___1___shared_weak_count___release_weak(v80);
                v111 = v84 + 80;
                goto LABEL_200;
              }
              v101 = a2[34];
              v102 = v84 - v101;
              v103 = 1 - 0x3333333333333333LL * (v102 >> 4);
              if (v103 > 0x333333333333333LL) {
                GameRoutine_10e5410();
              }
              v104 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v96 - v101) >> 4);
              v105 = 2 * v104;
              if (2 * v104 <= v103) {
                v105 = 1 - 0x3333333333333333LL * (v102 >> 4);
              }
              if (v104 >= 0x199999999999999LL) {
                v106 = 0x333333333333333LL;
              }
              else {
                v106 = v105;
              }
              if (v106 != 0) {
                if (v106 > 0x333333333333333LL) {
                  GameRoutine_60a210();
                }
                v107 = 5 * v106;
                v108 = fw_memory_HeapManager_Allocate(*v6, 80 * v106, 16, 0);
                v102 += v108;
                v109 = v108 + 16 * v107;
              }
              else {
                v109 = 0;
              }
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 16), 1u,
                                        memory_order_relaxed);
              *(_DWORD*)v102 = v95;
              *(_QWORD*)(v102 + 8) = v81;
              *(_QWORD*)(v102 + 16) = v80;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v80 + 16), 1u,
                                        memory_order_relaxed);
              v110 = v127_.v130;
              if (v127_.v130 != nullptr) {
                if (v127_.v130 == v127_.v127) {
                  *(_QWORD*)(v102 + 64) = v102 + 32;
                  (*(void (**)(__int64*))(*v110 + 24))(v110);
                }
                else {
                  *(_QWORD*)(v102 + 64) = (*(__int64 (**)(__int64))(
                      *v127_.v130 + 16))((__int64)v127_.v130);
                }
              }
              else {
                *(_QWORD*)(v102 + 64) = 0;
              }
              v112 = std___1___shared_weak_count___release_weak(v80);
              v113 = (char*)a2[34];
              v114 = (char*)a2[35];
              v111 = v102 + 80;
              v115 = v102 + v113 - v114;
              if (v114 == v113) {
              LABEL_196:
                a2[34] = v115;
                a2[35] = v111;
                a2[36] = v109;
                if (v113 != nullptr) {
                  v125 = 128;
                  if (*(_QWORD*)(*v6 + 200) == 0) {
                    v125 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v6 + v125);
                }
              LABEL_200:
                a2[35] = v111;
                goto LABEL_201;
              }
              v116 = 0;
              do {
                v117 = &v113[v116];
                v118 = v115 + v116;
                *(_DWORD*)v118 = *(_DWORD*)&v113[v116];
                *(_QWORD*)(v118 + 8) = *(_QWORD*)&v113[v116 + 8];
                *(_QWORD*)(v118 + 16) = *(_QWORD*)&v113[v116 + 16];
                *((_QWORD*)v117 + 1) = 0;
                *((_QWORD*)v117 + 2) = 0;
                v119 = *(char**)&v113[v116 + 64];
                if (v119 != nullptr) {
                  if (v117 + 32 == v119) {
                    *(_QWORD*)(v118 + 64) = v118 + 32;
                    (*(void (**)(_QWORD, long double))(
                        **((_QWORD**)v117 + 8) + 24LL))(*((_QWORD*)v117 + 8),
                                                        *(long double*)&v112);
                  }
                  else {
                    *(_QWORD*)(v118 + 64) = v119;
                    *((_QWORD*)v117 + 8) = 0;
                  }
                }
                else {
                  *(_QWORD*)(v118 + 64) = 0;
                }
                v116 += 80;
              } while (&v113[v116] != v114);
              v120 = v113 + 32;
              while (2) {
                v122 = (_QWORD*)v120[4];
                if (v120 == v122) {
                  v123 = 32;
                LABEL_192:
                  (*(void (**)(void*))(*v122 + v123))(v122);
                }
                else if (v122 != nullptr) {
                  v123 = 40;
                  goto LABEL_192;
                }
                v124 = *(v120 - 2);
                if (v124 != 0) {
                  v112 = std___1___shared_weak_count___release_weak(v124);
                }
                v121 = (char*)(v120 + 6);
                v120 += 10;
                if (v121 == v114) {
                  v113 = (char*)a2[34];
                  goto LABEL_196;
                }
                continue;
              }
            }
          }
          v99 = 32;
          goto LABEL_157;
        }
        while (1) {
          if (*(_DWORD*)v87 != 0) {
            v88 = *(_QWORD*)(v87 + 16);
            if (v88 != 0 && *(_QWORD*)(v88 + 8) != -1) {
              break;
            }
          }
        LABEL_125:
          v87 += 80LL;
          if (v87 == v82) {
            v82 = a2[35];
            goto LABEL_141;
          }
        }
        *(_DWORD*)v84 = *(_DWORD*)v87;
        v89 = *(_QWORD*)(v87 + 8);
        v90 = *(_QWORD*)(v87 + 16);
        *(_QWORD*)(v87 + 8) = 0;
        *(_QWORD*)(v87 + 16) = 0;
        v91 = *(_QWORD*)(v84 + 16);
        *(_QWORD*)(v84 + 8) = v89;
        *(_QWORD*)(v84 + 16) = v90;
        if (v91 != 0) {
          v8 = std___1___shared_weak_count___release_weak(v91);
        }
        v92 = *(_QWORD**)(v84 + 64);
        *(_QWORD*)(v84 + 64) = 0;
        if (v92 == (_QWORD*)(v84 + 32)) {
          v93 = 32;
        }
        else {
          if (v92 == nullptr) {
          LABEL_136:
            v94 = *(_QWORD*)(v87 + 64);
            if (v94 != 0) {
              if (v87 + 32 == v94) {
                *(_QWORD*)(v84 + 64) = v84 + 32;
                (*(void (**)(_QWORD, unsigned __int64, long double))(
                    **(_QWORD**)(v87 + 64) + 24LL))(
                    *(_QWORD*)(v87 + 64), v84 + 32, *(long double*)&v8);
              }
              else {
                *(_QWORD*)(v84 + 64) = v94;
                *(_QWORD*)(v87 + 64) = 0;
              }
            }
            else {
              *(_QWORD*)(v84 + 64) = 0;
            }
            v84 += 80LL;
            goto LABEL_125;
          }
          v93 = 40;
        }
        (*(void (**)(void*))(*v92 + v93))(v92);
        goto LABEL_136;
      }
    }
  }
}

_QWORD* IKFoot_10e4480(_QWORD* result, unsigned __int64 a2, long double a3)
{
  __int64 v3;
  _QWORD* v4;
  unsigned __int64 v5;
  bool v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v3 = result[1];
  v4 = result;
  v5 = 0xAAAAAAAAAAAAAAABLL * ((v3 - *result) >> 6);
  v6 = a2 >= v5;
  v7 = a2 - v5;
  if (v7 != 0 && v6) {
    return (_QWORD*)GameRoutine_10e4bc0(result, v7);
  }
  if (!v6) {
    v8 = *result + 192 * a2;
    if (v8 != v3) {
      v9 = fw_memory_g_heap_manager_ptr;
      do {
        v10 = *(_QWORD*)(v3 - 160);
        if (v10 != 0) {
          *(_QWORD*)(v3 - 152) = v10;
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11, a3);
        }
        v12 = *(_QWORD*)(v3 - 184);
        if (v12 != 0) {
          *(_QWORD*)(v3 - 176) = v12;
          if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
            v13 = 128;
          }
          else {
            v13 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v13, a3);
        }
        v3 -= 192;
      } while (v3 != v8);
    }
    v4[1] = v8;
  }
  return result;
}

__int64 IKFoot_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 result;
  __int64 v12;

  v1 = a1[10];
  *a1 = game_character_IKFoot_vtable;
  a1[5] = GameData_200c180;
  if (v1 != 0) {
    v3 = a1[11];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_16;
    }
    do {
      v5 = *(_QWORD*)(v3 - 160);
      if (v5 != 0) {
        *(_QWORD*)(v3 - 152) = v5;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v4 + v6, v5);
      }
      v7 = *(_QWORD*)(v3 - 184);
      if (v7 != 0) {
        *(_QWORD*)(v3 - 176) = v7;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v4 + v8, v7);
      }
      v3 -= 192;
    } while (v3 != v1);
    v9 = a1[10];
    a1[11] = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_16:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(*(_QWORD*)v4 + v10, v1);
    }
  }
  result = a1[9];
  a1[5] = kaneko_WPHolder_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(result);
  }
  v12 = a1[7];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return std___1___shared_weak_count___release_weak_alt1(v12);
  }
  return result;
}

float IKFoot_Unknown3(__int64 a1, float32x4_t a2)
{
  float v2;
  float32x4_t* v3;
  float v4;
  unsigned __int32 v5;
  float32x4_t v6;
  float32x4_t v7;
  int8x16_t v8;

  v2 = *(float*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (v2 > 0x0.0p+0f) {
    v3 = *(float32x4_t**)(*(_QWORD*)(a1 + 24) + 8LL);
    LANES128(a2).n128_u64[0] = LANES128(v3[19]).n128_u64[0];
    v4 = LANES128(a2).n128_f32[1] + (float)(*(float*)(a1 + 104) * v2);
    v5 = LANES128(v3[19]).n128_u32[2];
    LANES128(v6).n128_u64[0] =
        __PAIR64__(LODWORD(v4), LANES128(a2).n128_u32[0]);
    LANES128(v6).n128_u64[1] = v5;
    v7 = vsubq_f32(v3[19], v6);
    v8 = vmulq_f32(v7, v7);
    LANES128(v8).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
            .n64_f32[0] != 0x0.0p+0f) {
      LANES128(v3[19]).n128_u32[0] = LANES128(a2).n128_u32[0];
      LANES128(v3[19]).n128_f32[1] = v4;
      a2 = v3[19];
      LANES128(v3[18]).n128_u32[2] |= 1u;
      LANES128(a2).n128_u64[1] = v5;
      v3[19] = a2;
    }
  }
  return LANES128(a2).n128_f32[0];
}

void IKFoot_Unknown4(__int64 a1)
{
  __int64 v2;
  float v3;
  float v4;
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int128 v8;
  __int128 v9;
  __int64 v10;
  float v11;
  float v12;
  int8x16_t* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  float v19;
  float v20;
  float* v21;
  int v22;
  float v23;
  int8x16_t* v25;
  int8x16_t* v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  __int64 v36;
  int8x16_t* v37;
  int8x16_t v38;
  float v39;
  float32x4_t v40;
  float32x4_t v41;
  int8x16_t v42;
  int8x16_t v43;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w"));
  if (*(float*)(*(_QWORD*)(a1 + 8) + 8LL) <= 0x0.0p+0f) {
    return;
  }
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 104LL);
  v3 = *(float*)(v2 + 148);
  v4 = *(float*)(v2 + 188);
  v5 = *(_QWORD*)(a1 + 80);
  for (i = *(_QWORD*)(a1 + 88); v5 != i; *(_OWORD*)(v7 - 16) = v9) {
    v7 = *(_QWORD*)(v5 + 16);
    v5 += 192;
    v8 = *(_OWORD*)(*(_QWORD*)(v7 - 24) + 48LL);
    *(_QWORD*)(v7 - 16) = v8;
    v9 = *(_OWORD*)(v7 - 16);
    *((_QWORD*)&v9 + 1) = DWORD2(v8);
  }
  v10 = *(_QWORD*)(a1 + 120);
  if (v10 != 0) {
    GameRoutine_112c460(v10),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w"));
    v12 = v11;
  }
  else {
    v12 = 0x0.0p+0f;
  }
  v13 = *(int8x16_t**)(a1 + 80);
  v14 = 0xAAAAAAAAAAAAAAABLL *
        ((__int64)(*(_QWORD*)(a1 + 88) - (_QWORD)v13) >> 6);
  if ((int)v14 < 1) {
    v22 = -1;
    v20 = 0x1.9000000000000p+7f;
    v19 = -0x1.9000000000000p+6f;
  }
  else {
    v15 = v14 & 0x7FFFFFFF;
    v16 = -1;
    v17 = 164;
    v18 = 0;
    v19 = -0x1.9000000000000p+6f;
    v20 = 0x1.9000000000000p+7f;
    do {
      v21 = (float*)(*(_QWORD*)(a1 + 80) + v17);
      GameRoutine_10a92a0((float32x4_t*)(v21 - 41), *(float*)(a1 + 104), v4),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w"));
      v17 += 192;
      if (*v21 < v20) {
        v16 = v18;
        v20 = *v21;
      }
      ++v18;
      if (v19 < *v21) {
        v19 = *v21;
      }
    } while (v15 != v18);
    v13 = *(int8x16_t**)(a1 + 80);
    v22 = v16;
  }
  v23 = *(float*)(a1 + 116);
  if (v23 > 0x0.0p+0f && (float)(v19 - v20) > v23) {
    v20 = v19 - v23;
    v25 = &v13[12 * v22];
    LANES128(v25[10]).n128_f32[1] = v19 - v23;
    v25[11] = COERCE_AS(int8x16_t, GameData_1a83610);
    v13 = *(int8x16_t**)(a1 + 80);
  }
  v26 = *(int8x16_t**)(a1 + 88);
  if (v20 <= -0x1.9000000000000p+6f) {
    v20 = v3;
  }
  for (; v13 != v26; v13 += 12) {
    GameRoutine_10a98e0(v13, *(float*)(a1 + 32), v4,
                        *(float*)(*(_QWORD*)(a1 + 8) + 8LL)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v27 = *(float*)(a1 + 116);
  if (v27 == 0x0.0p+0f) {
    v28 = *(float*)(a1 + 108);
  }
  else {
    v29 = fabsf(v27);
    v30 = -v29;
    if (v29 >= (float)(v20 - v3)) {
      v29 = v20 - v3;
    }
    if ((float)(v20 - v3) < v30) {
      v29 = v30;
    }
    v28 = v12 + v29;
    *(float*)(a1 + 108) = v28;
  }
  v31 = *(float*)(a1 + 104);
  v32 = *(float*)(a1 + 32);
  if (v31 != v28) {
    v33 = *(float*)(a1 + 112);
    if (v33 > 0x0.0p+0f) {
      if (v33 >= 0x1.0000000000000p+0f) {
        goto LABEL_39;
      }
      if (v32 <= 0x0.0p+0f) {
        goto LABEL_40;
      }
      v34 = 0x1.0000000000000p+0f -
            powf(0x1.0000000000000p+0f - v33, v32 * 0x1.df851e0000000p+4f),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v34 <= 0x0.0p+0f) {
        goto LABEL_40;
      }
      if (v34 >= 0x1.0000000000000p+0f) {
      LABEL_39:
        v31 = v28;
      }
      else {
        v31 = v31 + (float)((float)(v28 - v31) * v34);
      }
    }
  LABEL_40:
    v35 = *(float*)(a1 + 108);
    *(float*)(a1 + 104) = v31;
    if (vabds_f32(v35, v31) < 0x1.a36e2e0000000p-14f) {
      v31 = v35;
      *(float*)(a1 + 104) = v35;
    }
    v32 = *(float*)(a1 + 32);
  }
  if (v32 > 0x1.0000000000000p+0f) {
    v36 = *(_QWORD*)(a1 + 24);
    if (v36 != 0 && *(_DWORD*)(v36 + 384) == 1) {
      v37 = *(int8x16_t**)(v36 + 8);
      v38 = v37[19];
      v39 = *(float*)(*(_QWORD*)(v36 + 104) + 148LL) +
            (float)(v31 * *(float*)(*(_QWORD*)(a1 + 8) + 8LL));
      LANES128(v40).n128_u32[0] = LANES128(v38).n128_u32[0];
      LANES128(v40).n128_f32[1] = v39;
      LANES128(v40).n128_u64[1] =
          LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u32[0];
      v41 = vsubq_f32(v38, v40);
      v42 = vmulq_f32(v41, v41);
      LANES128(v42).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v42).n128_u64[0])))
              .n64_f32[0] != 0x0.0p+0f) {
        LANES128(v37[19]).n128_u32[0] = LANES128(v38).n128_u32[0];
        LANES128(v37[19]).n128_f32[1] = v39;
        v43 = v37[19];
        LANES128(v37[18]).n128_u32[2] |= 1u;
        LANES128(v43).n128_u64[1] = LANES128(v38).n128_u32[2];
        v37[19] = v43;
      }
    }
  }
}

__int64 game_character_IKFoot_IKFoot_lambda0_Invoke(__int64 result, int* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD*)(v2 + 80);
  v4 = *(_QWORD*)(v2 + 88);
  if (v3 != v4) {
    v5 = *a2;
    do {
      *(_DWORD*)(v3 + 100) = v5;
      v3 += 192;
    } while (v3 != v4);
  }
  return result;
}

#pragma GCC visibility pop
