#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* game_UnitPool_Find_6ead60(__int64*, int*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 Components_a870e0(__int64*, char);
__int64 GameRoutine_a83fa0(_QWORD*, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_809dc0(__int64, _QWORD*, __n128);
__int64 game_GameView_Update();
__int64 game_GetHero(unsigned __int8);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _DWORD* GameData_212d168;
extern _DWORD GameData_21d925c[32];
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN GameData_226b210;
extern __int64 (*GameData_20df440[])();
extern __int64 (*game_cutscene_anonymous_LateUpdateModule_vtable[])();
extern __int64* GameData_212dea8;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_212c638;
extern __int64 GameData_212cf70[7];
extern __int64 as_g_base_frame_counter;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern int GameData_21d92dc;
extern int GameData_226b208;
int __cxa_guard_acquire(__int64);
void Config_bc72a0(__int64, unsigned int);
void GameHr_ce5aa0(__int64);
void GameRoutine_98f140(__int64*, _QWORD*);
void GameRoutine_a8c0c0(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_98f290();
void __cxa_guard_release(__int64);
void game_cutscene_17fcd20(__int64, __int64, __int64, char);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_cutscene_1819800(__int64 a1, __int64 a2);

__int64 game_cutscene_1819800(__int64 a1, __int64 a2)
{
  char* v2;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64* v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __n128 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 i;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  bool v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  int v35;
  __int64 v36;
  _DWORD* v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  __int64 v50;
  _BYTE* v51;
  _BYTE* v52;
  bool v53;
  __int64* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 result;
  int v83;
  struct {
    __int64 v84[2];
    char gap16_[28];
    int v85;
  } v84_;

  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(a1 + 8) = 0;
  v2 = (char*)(a1 + 8);
  *(_DWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      128, 16, 0),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_BYTE*)v6 = 16;
  v7 = *(_QWORD*)(a1 + 48);
  *(_DWORD*)(v6 + 24) = 0;
  *(_BYTE*)(v6 + 28) = 0;
  *(_DWORD*)(v6 + 32) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_QWORD*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_WORD*)(v6 + 112) = 0;
  *(_QWORD*)(a1 + 48) = v6;
  strcpy((char*)(v6 + 1), "<noname>");
  *(_QWORD*)(v6 + 96) = 0;
  *(_QWORD*)(v6 + 104) = 0x3F80000000000000LL;
  *(_QWORD*)(v6 + 120) = as_g_base_frame_counter + 88;
  if (v7 != 0) {
    GameHr_ce5aa0(v7),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v8 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v8, v7),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v9 = fw_memory_HeapManager_Allocate(*v5, 12, 16, 0),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  game_cutscene_17fcd20(v9, *(_QWORD*)a2, *(_QWORD*)(a2 + 8),
                        *(_BYTE*)(a2 + 24)),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v10 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)(a1 + 72) = v9;
  if (v10 != 0) {
    if (*(_BYTE*)v10 == 1) {
      *(_BYTE*)v10 = 0;
      v11 = *(_DWORD*)(v10 + 4);
      v12 = eft_g_effectSystem_ptr[0];
      if (v11 != -1) {
        Config_bc72a0(*eft_g_effectSystem_ptr[0], v11),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      v13 = *(_DWORD*)(v10 + 8);
      if (v13 != -1) {
        Config_bc72a0(*v12, v13),
            v24 = COERCE_AS(__typeof__(v24),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
    }
    v14 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v14, v10),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v15 = fw_memory_HeapManager_Allocate(*v5, 232, 16, 0),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v16 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(v15 + 8) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_QWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_QWORD*)(v15 + 80) = 0;
  *(_QWORD*)(v15 + 88) = 0;
  *(_QWORD*)(v15 + 96) = 0;
  *(_QWORD*)(v15 + 104) = 0;
  *(_QWORD*)(v15 + 112) = 0;
  *(_QWORD*)(v15 + 120) = 0;
  *(_QWORD*)(v15 + 128) = 0;
  *(_QWORD*)(v15 + 136) = 0;
  *(_QWORD*)(v15 + 144) = 0;
  *(_QWORD*)(v15 + 152) = 0;
  *(_QWORD*)v15 = GameData_20df440;
  *(_QWORD*)(v15 + 160) = 0;
  *(_QWORD*)(v15 + 168) = 0;
  *(_QWORD*)(v15 + 176) = 0;
  *(_QWORD*)(v15 + 184) = 0;
  *(_QWORD*)(v15 + 192) = 0;
  *(_QWORD*)(v15 + 200) = 0;
  *(_QWORD*)(v15 + 208) = 0;
  *(_QWORD*)(v15 + 216) = 0;
  *(_QWORD*)(v15 + 224) = 0;
  *(_QWORD*)(a1 + 64) = v15;
  *(_DWORD*)(v15 + 228) = -1082130432;
  *(_QWORD*)(v15 + 24) = 0;
  *(_QWORD*)(a1 + 56) = v15 + 24;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    std___1___shared_weak_count___release_weak(v16),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  GameRoutine_60a060(v2, *(_QWORD*)a2, *(_QWORD*)(a2 + 8)),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v17 = fw_memory_HeapManager_Allocate(*v5, 40, 16, 0),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v19 = GameData_212dea8;
  *(_QWORD*)(v17 + 16) = 0;
  *(_QWORD*)(v17 + 24) = 0;
  *(_QWORD*)(v17 + 29) = 0;
  *(_QWORD*)v17 = v19 + 2;
  *(_QWORD*)(v17 + 8) = 0;
  v20 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = v17;
  if (v20 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v17 = *(_QWORD*)(a1 + 32);
  }
  v21 = *(_QWORD*)(a2 + 16);
  if (v21 != 0) {
    goto LABEL_31;
  }
  v22 = game_GetHero(9u),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v22 == 0) {
    goto LABEL_30;
  }
  for (i = v22; i != 0; i = *(_QWORD*)(i + 624)) {
    v24 = i;
  }
  if (*(_BYTE*)(v24 + 441) != 3) {
    goto LABEL_30;
  }
  v25 = *(_QWORD*)(v22 + 624);
  if (v25 == 0) {
    v25 = v22;
  }
  v84_.v84[0] = v25;
  v84_.v85 = 241;
  v26 = game_UnitPool_Find_6ead60(v84_.v84, &v84_.v85),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v26 == nullptr) {
    v27 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    if (*(_BYTE*)(v27 + 144) != 0) {
      v21 = v27 + 112;
      goto LABEL_31;
    }
  LABEL_30:
    v21 = GameData_212cf70[0];
    goto LABEL_31;
  }
  v21 = (__int64)(v26 + 263);
LABEL_31:
  if (v17 != v21) {
    v28 = *(unsigned __int8*)(v21 + 8);
    if ((*(_BYTE*)(v17 + 8) & 1) != 0) {
      v31 = (v28 & 1) == 0;
      v32 = v28 >> 1;
      if (v31) {
        v33 = v21 + 9;
      }
      else {
        v33 = *(_QWORD*)(v21 + 24);
      }
      if (v31) {
        v34 = v32;
      }
      else {
        v34 = *(_QWORD*)(v21 + 16);
      }
      SpineModel_64dde0((__int64*)(v17 + 8), v33, v34),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else if ((v28 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(v17 + 8), *(_QWORD*)(v21 + 24),
                         *(_QWORD*)(v21 + 16)),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else {
      v29 = *(_QWORD*)(v21 + 8);
      v30 = *(_QWORD*)(v21 + 24);
      *(_QWORD*)(v17 + 16) = *(_QWORD*)(v21 + 16);
      *(_QWORD*)(v17 + 24) = v30;
      *(_QWORD*)(v17 + 8) = v29;
    }
  }
  *(_BYTE*)(v17 + 32) = *(_BYTE*)(v21 + 32);
  *(_BYTE*)(v17 + 33) = *(_BYTE*)(v21 + 33);
  *(_BYTE*)(v17 + 34) = *(_BYTE*)(v21 + 34);
  *(_BYTE*)(v17 + 35) = *(_BYTE*)(v21 + 35);
  *(_BYTE*)(v17 + 36) = *(_BYTE*)(v21 + 36);
  *(_BYTE*)(a1 + 41) = *(_BYTE*)(a2 + 25);
  v35 = *(unsigned __int8*)(a2 + 26);
  *(_BYTE*)(a1 + 42) = v35;
  if (v35 == 1 && game_ProcFadeView_instance_ != 0) {
    PSEUDO_LOW_LANE128(v18, n128_u64, 0);
    game_809dc0(game_ProcFadeView_instance_, GameData_212c960, v18),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v36 = GameData_212c638;
  GameRoutine_a83fa0(*(_QWORD**)GameData_212c638, (__int64)"RealtimePlayer",
                     0xEu),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v37 = (_DWORD*)GameData_212d168;
  v38 = GameData_21d92dc;
  v39 = *GameData_212d168;
  ++GameData_21d92dc;
  GameData_21d925c[v38] = v39;
  *(_DWORD*)v37 = 7;
  game_GameView_Update(),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v40 = Components_a870e0(
      *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v36 + 32LL) - 8LL) + 48LL),
      0),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(a1 + 80) = v40;
  strcpy((char*)(v40 + 16), "CS_LateUpdateObject");
  *(_QWORD*)(v40 + 272) = 19;
  v41 = *(_QWORD*)(a1 + 80);
  nn_os_LockMutex((__int64)GameData_212df28),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v42 = fw_memory_HeapManager_Allocate(*v5, 40, 16, 0),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v44 = *(_QWORD*)(a1 + 56);
  v43 = *(_QWORD*)(a1 + 64);
  if (v43 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                              memory_order_relaxed);
    *(_BYTE*)(v42 + 16) = 0;
    *(_DWORD*)(v42 + 17) = 33686018;
    *(_QWORD*)v42 = game_cutscene_anonymous_LateUpdateModule_vtable;
    *(_QWORD*)(v42 + 8) = v41;
    *(_QWORD*)(v42 + 24) = v44;
    *(_QWORD*)(v42 + 32) = v43;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                              memory_order_relaxed);
    std___1___shared_weak_count___release_weak(v43),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  else {
    *(_BYTE*)(v42 + 16) = 0;
    *(_DWORD*)(v42 + 17) = 33686018;
    *(_QWORD*)v42 = game_cutscene_anonymous_LateUpdateModule_vtable;
    *(_QWORD*)(v42 + 8) = v41;
    *(_QWORD*)(v42 + 24) = v44;
    *(_QWORD*)(v42 + 32) = 0;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_226b210,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_226b210) != 0) {
    GameData_226b208 = wld_Crc32(0, "CS_LateUpdateModule", 0x13u),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    __cxa_guard_release((__int64)&GameData_226b210),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v45 = *(_QWORD*)(v41 + 504);
  v46 = *(_QWORD*)(v41 + 512);
  v47 = v46;
  LODWORD(v84_.v84[0]) = GameData_226b208;
  v84_.v84[1] = v42;
  while (v47 != v45) {
    v48 = *(_DWORD*)(v47 - 16);
    v47 -= 16;
    if (v48 == GameData_226b208) {
      if ((*(_BYTE*)(v42 + 16) & 1) != 0) {
        goto LABEL_68;
      }
      goto LABEL_62;
    }
  }
  if (v45 == v46 && (unsigned __int64)(*(_QWORD*)(v41 + 520) - v45) <= 0x6F) {
    v49 = fw_memory_HeapManager_Allocate(*v5, 112, 16, 0),
    v24 = COERCE_AS(__typeof__(v24),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    *(_QWORD*)(v41 + 504) = v49;
    *(_QWORD*)(v41 + 512) = v49;
    *(_QWORD*)(v41 + 520) = v49 + 112;
    if (v46 != 0) {
      v50 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v50 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v50, v45),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  GameRoutine_98f140((__int64*)(v41 + 504), v84_.v84),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if ((*(_BYTE*)(v42 + 16) & 1) == 0) {
  LABEL_62:
    *(_BYTE*)(v42 + 16) = 1;
    *(_BYTE*)(v42 + 17) &= ~2u;
    *(_BYTE*)(v42 + 18) &= ~2u;
    *(_BYTE*)(v42 + 19) &= ~2u;
    *(_BYTE*)(v42 + 20) &= ~2u;
    v51 = *(_BYTE**)(v42 + 8);
    v51[632] = 0;
    v51[664] = 0;
    v51[696] = 0;
    v51[728] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v42 + 64LL))(v42),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v52 = *(_BYTE**)(v42 + 8);
    v53 = v52[300] == 3 && v52[301] == 3;
    if (v53 || v52[302] == 1) {
      (*(void (**)(__int64))(*(_QWORD*)v42 + 72LL))(v42),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
LABEL_68:
  v54 = *(__int64**)(v41 + 536);
  v55 = *(_QWORD*)(v41 + 544);
  if ((unsigned __int64)v54 >= v55) {
    v57 = *(_QWORD*)(v41 + 528);
    v58 = (char*)v54 - v57;
    v59 = ((__int64)v54 - v57) >> 3;
    v60 = v59 + 1;
    if ((unsigned __int64)(v59 + 1) >> 61 != 0) {
      goto LABEL_106;
    }
    v61 = v55 - v57;
    if (v61 >> 2 > v60) {
      v60 = v61 >> 2;
    }
    if ((unsigned __int64)v61 >= 0x7FFFFFFFFFFFFFF8LL) {
      v62 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v62 = v60;
    }
    if (v62 != 0) {
      if (v62 >> 61 != 0) {
        goto LABEL_107;
      }
      v63 = fw_memory_HeapManager_Allocate(*v5, 8 * v62, 16, 0),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    else {
      v63 = 0;
    }
    v64 = v63 + 8 * v62;
    v65 = (unsigned __int64)v54 - v57;
    v66 = (__int64)&v58[v63 + -8 * v59];
    *(_QWORD*)&v58[v63] = v42;
    v56 = (__int64)&v58[v63 + 8];
    memcpy(v66, v57, v65),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    *(_QWORD*)(v41 + 528) = v66;
    *(_QWORD*)(v41 + 536) = v56;
    *(_QWORD*)(v41 + 544) = v64;
    if (v57 != 0) {
      v67 = 128;
      if (*(_QWORD*)(*v5 + 200) == 0) {
        v67 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v67, v57),
          v24 = COERCE_AS(__typeof__(v24),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  else {
    *v54 = v42;
    v56 = (__int64)(v54 + 1);
  }
  *(_QWORD*)(v41 + 536) = v56;
  v68 = *(__int64**)(v41 + 560);
  v69 = *(_QWORD*)(v41 + 568);
  if ((unsigned __int64)v68 < v69) {
    *v68 = v42;
    v70 = (__int64)(v68 + 1);
    goto LABEL_100;
  }
  v71 = *(_QWORD*)(v41 + 552);
  v72 = (char*)v68 - v71;
  v73 = ((__int64)v68 - v71) >> 3;
  v74 = v73 + 1;
  if ((unsigned __int64)(v73 + 1) >> 61 != 0) {
  LABEL_106:
    GameRoutine_98f290(),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v75 = v69 - v71;
  if (v75 >> 2 > v74) {
    v74 = v75 >> 2;
  }
  if ((unsigned __int64)v75 >= 0x7FFFFFFFFFFFFFF8LL) {
    v76 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v76 = v74;
  }
  if (v76 != 0) {
    if (v76 >> 61 == 0) {
      v77 = fw_memory_HeapManager_Allocate(*v5, 8 * v76, 16, 0),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      goto LABEL_96;
    }
  LABEL_107:
    GameRoutine_60a210(),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v77 = 0;
LABEL_96:
  v78 = v77 + 8 * v76;
  v79 = (unsigned __int64)v68 - v71;
  v80 = (__int64)&v72[v77 + -8 * v73];
  *(_QWORD*)&v72[v77] = v42;
  v70 = (__int64)&v72[v77 + 8];
  memcpy(v80, v71, v79),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_QWORD*)(v41 + 552) = v80;
  *(_QWORD*)(v41 + 560) = v70;
  *(_QWORD*)(v41 + 568) = v78;
  if (v71 != 0) {
    v81 = 128;
    if (*(_QWORD*)(*v5 + 200) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v81, v71),
        v24 = COERCE_AS(__typeof__(v24),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
LABEL_100:
  *(_QWORD*)(v41 + 560) = v70;
  GameRoutine_a8c0c0(v41),
      v24 = COERCE_AS(__typeof__(v24),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_BYTE*)(v41 + 576) = 1;
  result = nn_os_UnlockMutex((__int64)GameData_212df28),
  v24 = COERCE_AS(__typeof__(v24),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (*(int*)(a1 + 4) <= 1) {
    v83 = 1;
  }
  else {
    v83 = 5;
  }
  *(_DWORD*)(a1 + 4) = v83;
  return result;
}

#pragma GCC visibility pop
