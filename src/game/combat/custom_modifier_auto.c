#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_110c660(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212d448[9];
__int64 CustomModifier_Auto_Unknown3(__int64 a1);
__int64 GameRoutine_10be300(_QWORD, _QWORD);
__int64 GameRoutine_18c8060(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
bool GameRoutine_10bfbf0(__int64);
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_21a6160;
extern __int64* GameData_21320e8;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d270;
extern __int64 GameData_21d8778;
extern __int64 GameData_2235e30;
extern __int64 GameData_2235e68;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 CustomModifier_Auto_110c660(__int64 a1);
float CustomModifier_Auto_Unknown4(__int64 a1);
__int64 GameRoutine_18c8060_alt1(__int64) __asm__("GameRoutine_18c8060");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
bool GameRoutine_10bfbf0_alt1(float32x4_t*) __asm__("GameRoutine_10bfbf0");
float GameRoutine_10be300_alt1(__int64, __int64) __asm__("GameRoutine_10be300");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__int64 CustomModifier_Auto_Unknown3(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  bool v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  int v28;
  int v29;

  *(_DWORD*)(a1 + 32) = 1;
  v2 = GameData_212d448[0];
  v3 = *GameData_212d448[0];
  v4 = *(_QWORD*)(*GameData_212d448[0] + 32);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v3 + 40);
    v6 = *(_QWORD*)(v4 + 8) == -1 || v5 == 0;
    if (v6 || (v7 = *(_QWORD*)(v5 + 80)) == 0 ||
        (*(_QWORD*)(v7 + 8) != -1 ? (v8 = *(_QWORD*)(v5 + 88) == 0)
                                  : (v8 = true),
         v8 || *(_QWORD*)(v4 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v4);
    }
    else {
      std___1___shared_weak_count___release_weak(v4);
      v9 = *(_QWORD*)(v5 + 88);
      v10 = *(_QWORD*)(v9 + 392);
      v11 = *(_QWORD*)(v9 + 400);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v12 = *(unsigned int*)(v10 + 11784);
      v13 = v12 >= 0x22;
      v14 = 0x36C260000uLL >> v12;
      v15 = !v13;
      v16 = v15 & v14;
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
      }
      if (v16 != 0) {
        *(_DWORD*)(a1 + 32) |= 2u;
      }
    }
  }
  v17 = *v2;
  v18 = *(_QWORD*)(*v2 + 56);
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
    v19 = *(_QWORD*)(v17 + 64);
    v20 = *(_QWORD*)(v18 + 8) == -1 || v19 == 0;
    if (v20 || (v21 = *(_QWORD*)(v19 + 80)) == 0 ||
        (*(_QWORD*)(v21 + 8) != -1 ? (v22 = *(_QWORD*)(v19 + 88) == 0)
                                   : (v22 = true),
         v22 || *(_QWORD*)(v18 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v18);
    }
    else {
      std___1___shared_weak_count___release_weak(v18);
      v23 = *(_QWORD*)(v19 + 88);
      v24 = *(_QWORD*)(v23 + 392);
      v25 = *(_QWORD*)(v23 + 400);
      if (v25 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                  memory_order_relaxed);
      }
      v26 = *(unsigned int*)(v24 + 11784);
      v13 = v26 >= 0x22;
      v27 = 0x36C260000uLL >> v26;
      v28 = !v13;
      v29 = v28 & v27;
      if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        std___1___shared_weak_count___release_weak(v25);
      }
      if (v29 != 0) {
        *(_DWORD*)(a1 + 32) |= 4u;
      }
    }
  }
  return GameRoutine_110c660(a1);
}

__int64 CustomModifier_Auto_110c660(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  __int64* v3;
  int v4;
  float v5;
  unsigned int v6;
  _BOOL4 v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  unsigned int v12;
  float v13;
  float v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  unsigned int v24;
  float v25;
  float v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  int v30;
  unsigned int v31;
  float v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  int v36;
  unsigned int v37;
  float v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  float v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  int v50;
  unsigned int v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  float v55;
  int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  unsigned int v60;
  float v61;
  int v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  float v67;
  int v68;
  int v69;
  int v70;
  int v71;
  unsigned int v72;
  unsigned int v73;
  int v74;
  unsigned int v75;
  float v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  int v80;
  unsigned int v81;
  float v82;
  int v83;
  unsigned int v84;
  unsigned int v85;
  int v86;
  unsigned int v87;
  float v88;
  int v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 result;
  __int64 v102;
  __int64 v103;
  __int64 v105;
  unsigned int v106;
  struct {
    float32x4_t v107;
    int v108;
    char gap52_[12];
    __int64 v109;
    __int64 v110;
    __int128 v111;
    __int128 v112;
    __int64 v113;
    int v114;
    char gap124_[4];
    __int64 v115;
    __int64 v116;
    int v117;
    char gap148_[12];
    __int128 v118;
    float32x4_t v119;
    char v120;
    char gap193_[3];
    char v121;
    char gap197_[3];
    char v122;
    char gap201_[3];
    char v123;
    char gap205_[3];
    __int64 v124;
    __int64 v125;
    __int64 v126;
  } v107_;
  struct {
    _QWORD v127[4];
    _QWORD* v128;
  } v127_;

  v1 = *(_QWORD*)(a1 + 8);
  v107_.v109 = 0;
  v107_.v110 = 0;
  v107_.v107 = (__typeof__(v107_.v107)){0};
  v107_.v108 = 0;
  v107_.v114 = 0;
  v107_.v115 = 0;
  v107_.v116 = 0;
  v105 = v1;
  v107_.v113 = 1109393408;
  v107_.v117 = 257;
  v107_.v111 = GameData_1a83090;
  v107_.v112 = GameData_1a83610;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a6170) != 0) {
    v102 = *((_QWORD*)GameData_212c550 + 1);
    *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
    *((_QWORD*)&GameData_21a6160 + 1) = v102;
    __cxa_guard_release_alt1((__int64)&GameData_21a6170);
  }
  v107_.v118 = GameData_21a6160;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a6170) != 0) {
    v103 = *((_QWORD*)GameData_212c550 + 1);
    *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
    *((_QWORD*)&GameData_21a6160 + 1) = v103;
    __cxa_guard_release_alt1((__int64)&GameData_21a6170);
  }
  v107_.v120 = 0;
  v107_.v121 = 0;
  v107_.v122 = 0;
  v107_.v123 = 0;
  v107_.v124 = 0;
  v107_.v125 = 0;
  v107_.v126 = 0;
  v107_.v119 = vsubq_f32(COERCE_AS(float32x4_t, 0),
                         COERCE_AS(float32x4_t, GameData_21a6160));
  GameRoutine_10be300_alt1((__int64)&v107_.v107, v105);
  v2 = 0;
  v3 = game_map_MapRandom_instance__ptr[0];
  while (2) {
    v4 = 10;
    v106 = v2;
    v5 = *(float*)(v105 + 84);
    v6 = *(_DWORD*)(a1 + 32);
    v7 = v5 >= -0x1.9000000000000p+4f;
    if ((v6 & 2) != 0) {
      while (1) {
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v8 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
        v9 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
        v10 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
        *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
        *((_DWORD*)v3 + 1) = v8;
        v11 = (v10 >> 8) ^ (v9 >> 19) ^ v10 ^ v9;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v9;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v11;
        v12 = v11 & 0x7FFFFFFF;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        v13 = (double)v12 / 0x1.fffffffc00000p+30;
        v14 = (float)(v13 * 0x1.4000000000000p+6f) + -0x1.4000000000000p+5f;
        if (v14 >= -0x1.e000000000000p+3f) {
          if (v14 > 0x1.e000000000000p+3f) {
            v14 = v14 + 0x1.4000000000000p+4f;
          }
        }
        else {
          v14 = v14 + -0x1.4000000000000p+4f;
        }
        if (v2 > 2) {
          goto LABEL_16;
        }
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v15 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
        v16 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
        v17 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
        *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
        *((_DWORD*)v3 + 1) = v15;
        v18 = (v17 >> 8) ^ (v16 >> 19) ^ v17 ^ v16;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v16;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v18;
        v19 = v18 & 0x7FFFFFFF;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        v2 = v19 -
             10 * ((unsigned int)((1717986919 * (unsigned __int64)v19) >> 32) >>
                   2);
        if (v2 - 1 < 3) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v20 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
          v21 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
          v22 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
          *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
          *((_DWORD*)v3 + 1) = v20;
          v23 = (v22 >> 8) ^ (v21 >> 19) ^ v22 ^ v21;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v21;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v23;
          v24 = v23 & 0x7FFFFFFF;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          v25 = (double)v24 / 0x1.fffffffc00000p+30;
          v26 = v25 * -0x1.4000000000000p+4f;
          if (v14 < -0x1.9000000000000p+4f) {
            goto LABEL_6;
          }
          goto LABEL_19;
        }
        if (v2 != 0) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v33 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
          v34 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
          v35 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
          *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
          *((_DWORD*)v3 + 1) = v33;
          v36 = (v35 >> 8) ^ (v34 >> 19) ^ v35 ^ v34;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v34;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v36;
          v37 = v36 & 0x7FFFFFFF;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          v38 = (double)v37 / 0x1.fffffffc00000p+30;
          v26 = v38 * 0x1.4000000000000p+4f;
          if (v14 < -0x1.9000000000000p+4f) {
            goto LABEL_6;
          }
        }
        else {
        LABEL_16:
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v27 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
          v28 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
          v29 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
          *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
          *((_DWORD*)v3 + 1) = v27;
          v30 = (v29 >> 8) ^ (v28 >> 19) ^ v29 ^ v28;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v28;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v30;
          v31 = v30 & 0x7FFFFFFF;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          v2 = 0;
          v32 = (double)v31 / 0x1.fffffffc00000p+30;
          v26 = (float)((float)(v32 * 0x1.4000000000000p+3f) +
                        -0x1.4000000000000p+2f) +
                -0x1.4000000000000p+5f;
          if (v14 < -0x1.9000000000000p+4f) {
            goto LABEL_6;
          }
        }
      LABEL_19:
        if (((v14 > 0x1.9000000000000p+4f) & (v6 >> 2)) == 0 &&
            (((v5 <= 0x1.9000000000000p+4f) ^ (v14 > 0x1.9000000000000p+4f)) &
             v7) == 0) {
          goto LABEL_39;
        }
      LABEL_6:
        if (--v4 == 0) {
          goto LABEL_40;
        }
      }
    }
    while (1) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v39 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
      v40 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
      v41 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
      *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
      *((_DWORD*)v3 + 1) = v39;
      v42 = (v41 >> 8) ^ (v40 >> 19) ^ v41 ^ v40;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v40;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v42;
      v43 = v42 & 0x7FFFFFFF;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      v44 = (double)v43 / 0x1.fffffffc00000p+30;
      v14 = (float)(v44 * 0x1.4000000000000p+6f) + -0x1.4000000000000p+5f;
      if (v14 >= -0x1.e000000000000p+3f) {
        if (v14 > 0x1.e000000000000p+3f) {
          v14 = v14 + 0x1.4000000000000p+4f;
        }
      }
      else {
        v14 = v14 + -0x1.4000000000000p+4f;
      }
      if (v2 > 2) {
        goto LABEL_31;
      }
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v45 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
      v46 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
      v47 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
      *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
      *((_DWORD*)v3 + 1) = v45;
      v48 = (v47 >> 8) ^ (v46 >> 19) ^ v47 ^ v46;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v46;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v48;
      v49 = v48 & 0x7FFFFFFF;
      nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
      v2 = v49 -
           10 * ((unsigned int)((1717986919 * (unsigned __int64)v49) >> 32) >>
                 2);
      if (v2 - 1 < 3) {
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v50 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
        v51 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
        v52 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
        *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
        *((_DWORD*)v3 + 1) = v50;
        v53 = (v52 >> 8) ^ (v51 >> 19) ^ v52 ^ v51;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v51;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v53;
        v54 = v53 & 0x7FFFFFFF;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        v55 = (double)v54 / 0x1.fffffffc00000p+30;
        v26 = v55 * -0x1.4000000000000p+4f;
        goto LABEL_33;
      }
      if (v2 != 0) {
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v62 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
        v63 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
        v64 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
        *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
        *((_DWORD*)v3 + 1) = v62;
        v65 = (v64 >> 8) ^ (v63 >> 19) ^ v64 ^ v63;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v63;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v65;
        v66 = v65 & 0x7FFFFFFF;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        v67 = (double)v66 / 0x1.fffffffc00000p+30;
        v26 = v67 * 0x1.4000000000000p+4f;
      }
      else {
      LABEL_31:
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v56 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
        v57 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
        v58 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
        *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
        *((_DWORD*)v3 + 1) = v56;
        v59 = (v58 >> 8) ^ (v57 >> 19) ^ v58 ^ v57;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v57;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v59;
        v60 = v59 & 0x7FFFFFFF;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        v2 = 0;
        v61 = (double)v60 / 0x1.fffffffc00000p+30;
        v26 = (float)((float)(v61 * 0x1.4000000000000p+3f) +
                      -0x1.4000000000000p+2f) +
              -0x1.4000000000000p+5f;
      }
    LABEL_33:
      v68 = (v14 >= -0x1.9000000000000p+4f) & (v6 >> 2);
      if (v14 <= 0x1.9000000000000p+4f) {
        LOBYTE(v68) = 0;
      }
      v69 =
          ((v5 <= 0x1.9000000000000p+4f) ^ (v14 > 0x1.9000000000000p+4f)) & v7;
      if (v14 < -0x1.9000000000000p+4f) {
        v69 = v5 < -0x1.9000000000000p+4f;
      }
      if ((v68 & 1) == 0 && v69 == 0) {
        break;
      }
      if (--v4 == 0) {
        goto LABEL_40;
      }
    }
  LABEL_39:
    LANES128(v107_.v107).n128_u64[1] = __PAIR64__(LODWORD(v26), LODWORD(v14));
  LABEL_40:
    if (!GameRoutine_10bfbf0_alt1(&v107_.v107)) {
      v2 = v106 + 1;
      if (v106 == 19) {
        v70 = 1;
        goto LABEL_44;
      }
      continue;
    }
    break;
  }
  v70 = v106;
LABEL_44:
  *(_QWORD*)(v105 + 8) = LANES128(v107_.v107).n128_u64[1];
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v71 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
  v72 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
  v73 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
  *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
  *((_DWORD*)v3 + 1) = v71;
  v74 = (v73 >> 8) ^ (v72 >> 19) ^ v73 ^ v72;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v72;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v74;
  v75 = v74 & 0x7FFFFFFF;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  *(_WORD*)(v105 + 112) = 257;
  v76 = (double)v75 / 0x1.fffffffc00000p+30;
  *(float*)(v105 + 4) =
      (float)(v76 * 0x1.0000000000000p+1f) + -0x1.0000000000000p+0f;
  if (v70 == 0) {
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
    v77 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
    v78 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
    v79 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
    *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
    *((_DWORD*)v3 + 1) = v77;
    v80 = (v79 >> 8) ^ (v78 >> 19) ^ v79 ^ v78;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v78;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v80;
    v81 = v80 & 0x7FFFFFFF;
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    v82 = (double)v81 / 0x1.fffffffc00000p+30;
    *(float*)(a1 + 20) =
        (float)(v82 * 0x1.0000000000000p+4f) + -0x1.0000000000000p+3f;
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
    v83 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3);
    v84 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4);
    v85 = *(_DWORD*)v3 ^ (*(_DWORD*)v3 << 11);
    *(_DWORD*)v3 = *((_DWORD*)v3 + 1);
    *((_DWORD*)v3 + 1) = v83;
    v86 = (v85 >> 8) ^ (v84 >> 19) ^ v85 ^ v84;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v84;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v86;
    v87 = v86 & 0x7FFFFFFF;
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    v88 = (double)v87 / 0x1.fffffffc00000p+30;
    *(float*)(a1 + 24) =
        (float)(v88 * 0x1.0000000000000p+4f) + -0x1.0000000000000p+3f;
  }
  v89 = *(_DWORD*)(*(_QWORD*)GameData_212d270 + 160LL);
  *(_DWORD*)(a1 + 28) = 0;
  *(_DWORD*)(a1 + 16) = v89;
  v90 = GameData_212d448[0];
  v91 = *GameData_212d448[0];
  if (*GameData_212d448[0] == 0) {
    goto LABEL_71;
  }
  v92 = *(_QWORD*)(v91 + 8);
  if (v92 == 0 || (*(_BYTE*)(v92 + 114) & 0x40) == 0) {
    goto LABEL_61;
  }
  v93 = *(_QWORD*)(v92 + 32);
  v94 = *(_QWORD*)(v92 + 40);
  if (v93 == v94) {
    if ((GameData_2235e30 & 0x40) == 0) {
      goto LABEL_61;
    }
    goto LABEL_58;
  }
  v95 = 954437177 * ((unsigned __int64)(v94 - v93) >> 4) - 1;
  v96 = *(_DWORD*)(v92 + 56);
  if (v96 < v95) {
    v95 = *(_DWORD*)(v92 + 56);
  }
  if (v96 < 0) {
    v95 = 0;
  }
  if (v93 != 0 && (*(_BYTE*)(v93 + 144LL * v95) & 0x40) != 0) {
  LABEL_58:
    if ((*(_BYTE*)(v92 + 116) & 1) == 0) {
      *(_DWORD*)(v105 + 12) = 1101004800;
      *(_DWORD*)(a1 + 24) = 0;
      *(_DWORD*)(a1 + 16) = 2139095039;
      v97 = *(_QWORD*)(v91 + 8);
      if (v97 != 0) {
        *(_DWORD*)(v97 + 112) |= 0x800000u;
      }
    }
  }
LABEL_61:
  v98 = *(_QWORD*)(v91 + 128);
  if (v98 != 0 && (*(_BYTE*)(v98 + 488) & 1) == 0) {
    v127_.v128 = v127_.v127;
    v127_.v127[0] = GameData_21320e8 + 2;
    GameRoutine_18c8060_alt1((__int64)v127_.v127);
    if (v127_.v128 == v127_.v127) {
      v99 = 32;
    LABEL_67:
      (*(void (**)(__int64))(*v127_.v128 + v99))((__int64)v127_.v128);
    }
    else if (v127_.v128 != nullptr) {
      v99 = 40;
      goto LABEL_67;
    }
    if (*v90 != 0) {
      v100 = *(_QWORD*)(*v90 + 128);
      if (v100 != 0) {
        *(_QWORD*)(v100 + 472) = 0;
        *(_DWORD*)(v100 + 464) = 0;
      }
    }
  }
LABEL_71:
  result = v107_.v126;
  v107_.v126 = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

float CustomModifier_Auto_Unknown4(__int64 a1)
{
  float v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64* v9;
  _BYTE* v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float result;

  v2 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                         160LL) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  *(float*)(a1 + 28) = *(float*)(a1 + 28) + v2;
  v3 = *GameData_212d448[0];
  if (*GameData_212d448[0] == 0) {
    goto LABEL_19;
  }
  v4 = *(_QWORD*)(v3 + 8);
  if (v4 == 0) {
    goto LABEL_19;
  }
  v5 = *(_QWORD*)(v4 + 32);
  v6 = *(_QWORD*)(v4 + 40);
  if (v5 == v6) {
    v9 = &GameData_2235e30;
    v10 = (_BYTE*)GameData_2235e68;
    if (GameData_2235e68 != 0) {
      goto LABEL_10;
    }
  LABEL_13:
    if ((*((_BYTE*)v9 + 4) & 0x80) != 0 || (*(_BYTE*)(v4 + 112) & 0x40) != 0) {
      goto LABEL_19;
    }
    goto LABEL_15;
  }
  v7 = 954437177 * ((unsigned __int64)(v6 - v5) >> 4) - 1;
  v8 = *(_DWORD*)(v4 + 56);
  if (v8 < v7) {
    v7 = *(_DWORD*)(v4 + 56);
  }
  if (v8 < 0) {
    v7 = 0;
  }
  if (v5 == 0) {
    goto LABEL_19;
  }
  v9 = (__int64*)(v5 + 144LL * v7);
  v10 = (_BYTE*)v9[7];
  if (v10 == nullptr) {
    goto LABEL_13;
  }
LABEL_10:
  if ((*v10 & 4) != 0) {
  LABEL_19:
    v11 = *(float*)(GameData_21d8778 + 160);
    goto LABEL_20;
  }
LABEL_15:
  v11 = *(float*)(a1 + 16) - v2;
  *(float*)(a1 + 16) = v11;
  if (v11 <= 0x0.0p+0f) {
    v12 = *(_QWORD*)(v3 + 128);
    if (v12 != 0 && *(float*)(v12 + 464) > 0x0.0p+0f) {
      v11 = v2 + v11;
    LABEL_20:
      *(float*)(a1 + 16) = v11;
    }
  }
  if (v11 <= 0x0.0p+0f) {
    CustomModifier_Auto_110c660(a1);
  }
  v13 = *(_QWORD*)(a1 + 8);
  v14 = *(float*)(v13 + 8);
  v15 = *(_QWORD*)(v13 + 96);
  if (v15 != 0) {
    v16 = *(float*)(v15 + 64);
    if (*(_BYTE*)(v13 + 114) != 0) {
      v16 = -v16;
    }
    v14 = v14 + v16;
  }
  if (fabsf(v14) > 0x1.1800000000000p+6f) {
    *(float*)(a1 + 20) = *(float*)(a1 + 20) * 0x1.e666660000000p-1f;
    v15 = *(_QWORD*)(v13 + 96);
  }
  v17 = *(float*)(v13 + 12);
  v18 = v17;
  if (v15 != 0) {
    v18 = v17 + *(float*)(v15 + 68);
  }
  if (v18 > 0x1.4000000000000p+4f || v18 < -0x1.e000000000000p+5f) {
    *(float*)(a1 + 24) = *(float*)(a1 + 24) * 0x1.e666660000000p-1f;
    v17 = *(float*)(v13 + 12);
  }
  *(float*)(v13 + 8) = *(float*)(v13 + 8) + (float)(*(float*)(a1 + 20) * v2);
  result = v17 + (float)(*(float*)(a1 + 24) * v2);
  *(float*)(v13 + 12) = result;
  return result;
}

#pragma GCC visibility pop
