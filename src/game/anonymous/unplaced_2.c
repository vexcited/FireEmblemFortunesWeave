#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRecord_99f220(PSEUDO_X8);
__attribute__((swiftcall)) void GameUnitRecord_130c080(PSEUDO_X8, __int64);
__int64* GameRoutine_895f00(_QWORD*, unsigned __int8*);
__int64* GameRoutine_8960a0(__int64* result, unsigned __int64);
__int64* GameRoutine_89a1e0(__int64* result, unsigned __int64);
__int64 GameRoutine_19b6940();
__int64 GameRoutine_19b6a00();
__int64 GameRoutine_19b6b00();
__int64 GameRoutine_19b6b20();
__int64 GameRoutine_19b8080();
__int64 GameRoutine_19b8280();
__int64 GameRoutine_19b85b0();
__int64 GameRoutine_19b8620();
__int64 GameRoutine_19b88a0();
__int64 GameRoutine_19b8a70();
__int64 GameRoutine_19b8ba0();
__int64 GameRoutine_19b8ca0();
__int64 GameRoutine_19b8e60();
__int64 GameRoutine_19b9080();
__int64 GameRoutine_19b90a0();
__int64 GameRoutine_19b91a0();
__int64 GameRoutine_19b9200();
__int64 GameRoutine_19b9220();
__int64 ProcAfterEpisodeSeq_19b8ac0();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_ProcInst_Register(__int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_oe_SetUserInactivityDetectionTimeExtended(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_22730e8;
extern __int64 (*GameData_212c710[3])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d248)();
extern __int64 (*GameData_212d428[4])();
extern __int64 (*GameData_212d430[3])();
extern __int64 (*GameData_212d610[2])();
extern __int64 (*GameData_212d618)();
extern __int64 (*game_80a680_ptr[11])();
extern __int64 (*game_anonymous_ProcAfterEpisodeSeq_vtable[])();
extern __int64* GameData_212df70[4];
extern __int64* GameData_212fca0[2];
extern __int64* GameData_2130db8[4];
extern __int64 GameData_212c608[2];
extern __int64 GameData_21f16e0;
extern __int64 GameData_21f16e8;
extern __int64 GameData_21f16f0;
extern __int64 GameData_21f16f8;
extern __int64 GameData_2272788;
extern __int64 GameData_2272790;
extern __int64 GameData_2272798;
extern __int64 GameData_22727a0;
extern __int64 GameData_22727b0;
extern __int64 GameData_22727b8;
extern __int64 GameData_22727d0;
extern __int64 GameData_22727e0;
extern __int64 GameData_22727f0;
extern __int64 GameData_22727f8;
extern __int64 GameData_2272800;
extern __int64 GameData_2272810;
extern __int64 GameData_2272820;
extern __int64 GameData_2272830;
extern __int64 GameData_2272838;
extern __int64 GameData_2272840;
extern __int64 GameData_2272850;
extern __int64 GameData_2272860;
extern __int64 GameData_2272870;
extern __int64 GameData_2272878;
extern __int64 GameData_2272880;
extern __int64 GameData_2272890;
extern __int64 GameData_22728a0;
extern __int64 GameData_22728b0;
extern __int64 GameData_22728b8;
extern __int64 GameData_22728c0;
extern __int64 GameData_22728d0;
extern __int64 GameData_22728e0;
extern __int64 GameData_22728f0;
extern __int64 GameData_22728f8;
extern __int64 GameData_2272900;
extern __int64 GameData_2272910;
extern __int64 GameData_2272920;
extern __int64 GameData_2272930;
extern __int64 GameData_2272938;
extern __int64 GameData_2272950;
extern __int64 GameData_2272960;
extern __int64 GameData_2272970;
extern __int64 GameData_2272978;
extern __int64 GameData_2272980;
extern __int64 GameData_2272990;
extern __int64 GameData_22729a0;
extern __int64 GameData_22729b0;
extern __int64 GameData_22729b8;
extern __int64 GameData_22729c0;
extern __int64 GameData_22729d0;
extern __int64 GameData_22729e0;
extern __int64 GameData_22729f0;
extern __int64 GameData_22729f8;
extern __int64 GameData_2272a00;
extern __int64 GameData_2272a10;
extern __int64 GameData_2272a20;
extern __int64 GameData_2272a30;
extern __int64 GameData_2272a38;
extern __int64 GameData_2272a40;
extern __int64 GameData_2272a50;
extern __int64 GameData_2272a60;
extern __int64 GameData_2272a70;
extern __int64 GameData_2272a78;
extern __int64 GameData_2272a80;
extern __int64 GameData_2272a90;
extern __int64 GameData_2272aa0;
extern __int64 GameData_2272ab0;
extern __int64 GameData_2272ab8;
extern __int64 GameData_2272ac0;
extern __int64 GameData_2272ad0;
extern __int64 GameData_2272ae0;
extern __int64 GameData_2272af0;
extern __int64 GameData_2272af8;
extern __int64 GameData_2272b00;
extern __int64 GameData_2272b10;
extern __int64 GameData_2272b20;
extern __int64 GameData_2272b30;
extern __int64 GameData_2272b38;
extern __int64 GameData_2272b40;
extern __int64 GameData_2272b50;
extern __int64 GameData_2272b60;
extern __int64 GameData_2272b70;
extern __int64 GameData_2272b78;
extern __int64 GameData_2272b80;
extern __int64 GameData_2272b90;
extern __int64 GameData_2272ba0;
extern __int64 GameData_2272bb0;
extern __int64 GameData_2272bb8;
extern __int64 GameData_2272bc0;
extern __int64 GameData_2272bd0;
extern __int64 GameData_2272be0;
extern __int64 GameData_2272bf0;
extern __int64 GameData_2272bf8;
extern __int64 GameData_2272c00;
extern __int64 GameData_2272c10;
extern __int64 GameData_2272c20;
extern __int64 GameData_2272c30;
extern __int64 GameData_2272c38;
extern __int64 GameData_2272c40;
extern __int64 GameData_2272c50;
extern __int64 GameData_2272c60;
extern __int64 GameData_2272c70;
extern __int64 GameData_2272c78;
extern __int64 GameData_2272c80;
extern __int64 GameData_2272c90;
extern __int64 GameData_2272ca0;
extern __int64 GameData_2272cb0;
extern __int64 GameData_2272cb8;
extern __int64 GameData_2272cc0;
extern __int64 GameData_2272cd0;
extern __int64 GameData_2272ce0;
extern __int64 GameData_2272cf0;
extern __int64 GameData_2272cf8;
extern __int64 GameData_2272d00;
extern __int64 GameData_2272d10;
extern __int64 GameData_2272d20;
extern __int64 GameData_2272d30;
extern __int64 GameData_2272d38;
extern __int64 GameData_2272d40;
extern __int64 GameData_2272d50;
extern __int64 GameData_2272d60;
extern __int64 GameData_2272d70;
extern __int64 GameData_2272d78;
extern __int64 GameData_2272d80;
extern __int64 GameData_2272d90;
extern __int64 GameData_2272da0;
extern __int64 GameData_2272db0;
extern __int64 GameData_2272db8;
extern __int64 GameData_2272dc0;
extern __int64 GameData_2272dd0;
extern __int64 GameData_2272de0;
extern __int64 GameData_2272df0;
extern __int64 GameData_2272df8;
extern __int64 GameData_2272e00;
extern __int64 GameData_2272e10;
extern __int64 GameData_2272e20;
extern __int64 GameData_2272e30;
extern __int64 GameData_2272e38;
extern __int64 GameData_2272e50;
extern __int64 GameData_2272e60;
extern __int64 GameData_2272e70;
extern __int64 GameData_2272e78;
extern __int64 GameData_2272e90;
extern __int64 GameData_2272ea0;
extern __int64 GameData_2272eb0;
extern __int64 GameData_2272eb8;
extern __int64 GameData_2272ed0;
extern __int64 GameData_2272ee0;
extern __int64 GameData_2272ef0;
extern __int64 GameData_2272ef8;
extern __int64 GameData_2272f00;
extern __int64 GameData_2272f10;
extern __int64 GameData_2272f20;
extern __int64 GameData_2272f30;
extern __int64 GameData_2272f38;
extern __int64 GameData_2272f40;
extern __int64 GameData_2272f50;
extern __int64 GameData_2272f60;
extern __int64 GameData_2272f70;
extern __int64 GameData_2272f78;
extern __int64 GameData_2272f90;
extern __int64 GameData_2272fa0;
extern __int64 GameData_2272fb0;
extern __int64 GameData_2272fb8;
extern __int64 GameData_2272fd0;
extern __int64 GameData_2272fe0;
extern __int64 GameData_2272ff0;
extern __int64 GameData_2272ff8;
extern __int64 GameData_2273010;
extern __int64 GameData_2273020;
extern __int64 GameData_2273030;
extern __int64 GameData_2273038;
extern __int64 GameData_2273050;
extern __int64 GameData_2273060;
extern __int64 GameData_2273070;
extern __int64 GameData_2273078;
extern __int64 GameData_2273080;
extern __int64 GameData_2273090;
extern __int64 GameData_22730a0;
extern __int64 GameData_22730b0;
extern __int64 GameData_22730b8;
extern __int64 GameData_22730c0;
extern __int64 GameData_22730d0;
extern __int64 GameData_22730e0;
extern __int64 GameData_22730f0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char GameData_22727a8;
extern char GameData_22727e8;
extern char GameData_2272828;
extern char GameData_2272868;
extern char GameData_22728a8;
extern char GameData_22728e8;
extern char GameData_2272928;
extern char GameData_2272968;
extern char GameData_22729a8;
extern char GameData_22729e8;
extern char GameData_2272a28;
extern char GameData_2272a68;
extern char GameData_2272aa8;
extern char GameData_2272ae8;
extern char GameData_2272b28;
extern char GameData_2272b68;
extern char GameData_2272ba8;
extern char GameData_2272be8;
extern char GameData_2272c28;
extern char GameData_2272c68;
extern char GameData_2272ca8;
extern char GameData_2272ce8;
extern char GameData_2272d28;
extern char GameData_2272d68;
extern char GameData_2272da8;
extern char GameData_2272de8;
extern char GameData_2272e28;
extern char GameData_2272e68;
extern char GameData_2272ea8;
extern char GameData_2272ee8;
extern char GameData_2272f28;
extern char GameData_2272f68;
extern char GameData_2272fa8;
extern char GameData_2272fe8;
extern char GameData_2273028;
extern char GameData_2273068;
extern char GameData_22730a8;
extern int GameData_21f1700;
extern int GameData_22727c8;
extern int GameData_22727d8;
extern int GameData_2272808;
extern int GameData_2272818;
extern int GameData_2272848;
extern int GameData_2272858;
extern int GameData_2272888;
extern int GameData_2272898;
extern int GameData_22728c8;
extern int GameData_22728d8;
extern int GameData_2272908;
extern int GameData_2272918;
extern int GameData_2272948;
extern int GameData_2272958;
extern int GameData_2272988;
extern int GameData_2272998;
extern int GameData_22729c8;
extern int GameData_22729d8;
extern int GameData_2272a08;
extern int GameData_2272a18;
extern int GameData_2272a48;
extern int GameData_2272a58;
extern int GameData_2272a88;
extern int GameData_2272a98;
extern int GameData_2272ac8;
extern int GameData_2272ad8;
extern int GameData_2272b08;
extern int GameData_2272b18;
extern int GameData_2272b48;
extern int GameData_2272b58;
extern int GameData_2272b88;
extern int GameData_2272b98;
extern int GameData_2272bc8;
extern int GameData_2272bd8;
extern int GameData_2272c08;
extern int GameData_2272c18;
extern int GameData_2272c48;
extern int GameData_2272c58;
extern int GameData_2272c88;
extern int GameData_2272c98;
extern int GameData_2272cc8;
extern int GameData_2272cd8;
extern int GameData_2272d08;
extern int GameData_2272d18;
extern int GameData_2272d48;
extern int GameData_2272d58;
extern int GameData_2272d88;
extern int GameData_2272d98;
extern int GameData_2272dc8;
extern int GameData_2272dd8;
extern int GameData_2272e08;
extern int GameData_2272e18;
extern int GameData_2272e48;
extern int GameData_2272e58;
extern int GameData_2272e88;
extern int GameData_2272e98;
extern int GameData_2272ec8;
extern int GameData_2272ed8;
extern int GameData_2272f08;
extern int GameData_2272f18;
extern int GameData_2272f48;
extern int GameData_2272f58;
extern int GameData_2272f88;
extern int GameData_2272f98;
extern int GameData_2272fc8;
extern int GameData_2272fd8;
extern int GameData_2273008;
extern int GameData_2273018;
extern int GameData_2273048;
extern int GameData_2273058;
extern int GameData_2273088;
extern int GameData_2273098;
extern int GameData_22730c8;
extern int GameData_22730d8;
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void GameRoutine_7a6cc0(__int64*, unsigned __int64);
void __attribute__((noreturn)) String_60a1d0();
void game_anonymous_1261f00(__int64*, unsigned __int64);
void snd_Fade_Fade_10c830(__int64, float);
unsigned __int64 game_anonymous_898560(__int64 a1, __int64 a2);
_QWORD* game_anonymous_8999e0(_QWORD* result, unsigned __int64* a2, __int64 a3);
void game_anonymous_1261cc0(__int64 result, int* a2, int* a3, int* a4);
__int64 game_anonymous_1266080(__int64 a1, int* a2, int* a3, int* a4);
void game_anonymous_1266e00(unsigned __int64 result, __int64 a2);
__int64 game_anonymous_19b6150(__int64 a1);

unsigned __int64 game_anonymous_898560(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  unsigned __int64 result;
  unsigned __int64 v9;
  __int64 v10;
  __int64* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64** v25;
  __int64* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  _BOOL8 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  unsigned __int64 v50;
  struct {
    _QWORD v51[2];
    char* v52;
  } v51_;

  v4 = strlen(a1);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_108;
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16,
                                               0);
    v51_.v51[1] = v5;
    v51_.v52 = v6;
    v51_.v51[0] = v7 | 1;
  }
  else {
    LOBYTE(v51_.v51[0]) = 2 * v4;
    v6 = (char*)v51_.v51 + 1;
    if (v4 == 0) {
      goto LABEL_10;
    }
  }
  memcpy(v6, a1, v5);
LABEL_10:
  v6[v5] = 0;
  result = (unsigned __int64)GameRoutine_895f00(&GameData_21f16e0,
                                                (unsigned __int8*)v51_.v51);
  if ((v51_.v51[0] & 1) != 0 && v51_.v52 != nullptr) {
    v9 = result;
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v51_.v52);
    result = v9;
  }
  if (result != 0) {
    return result;
  }
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *v12 = 0;
  v12[1] = 0;
  v13 = strlen(a1);
  if (v13 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_108:
    String_60a1d0();
  }
  v14 = v13;
  if (v13 >= 0x17) {
    if ((v13 | 7) == 0x17) {
      v16 = 26;
    }
    else {
      v16 = (v13 | 7) + 1;
    }
    v15 = fw_memory_HeapManager_Allocate(*v11, v16, 16, 0);
    v12[3] = v14;
    v12[4] = v15;
    v12[2] = v16 | 1;
    goto LABEL_24;
  }
  v15 = (__int64)v12 + 17;
  *((_BYTE*)v12 + 16) = 2 * v13;
  if (v13 != 0) {
  LABEL_24:
    memcpy(v15, a1, v14);
  }
  *(_BYTE*)(v15 + v14) = 0;
  v12[5] = a2;
  v17 = *((unsigned __int8*)v12 + 16);
  v18 = v12[4];
  if ((v17 & 1) != 0) {
    v19 = (char*)v12[4];
  }
  else {
    v19 = (char*)v12 + 17;
  }
  if ((v17 & 1) != 0) {
    v20 = v12[3];
  }
  else {
    v20 = v17 >> 1;
  }
  v12[1] = std___1___hash_memory(v19, v20);
  result = std___1___hash_memory(v19, v20);
  v12[1] = result;
  v21 = GameData_21f16e8;
  if (GameData_21f16e8 != 0) {
    v22 = GameData_21f16e8 - 1;
    v23 = result;
    if ((GameData_21f16e8 & (GameData_21f16e8 - 1)) != 0) {
      v24 = result;
      if (result >= GameData_21f16e8) {
        v24 = result % GameData_21f16e8;
      }
    }
    else {
      v24 = v22 & result;
    }
    v25 = *(__int64***)(GameData_21f16e0 + 8 * v24);
    if (v25 != nullptr) {
      v26 = *v25;
      if (*v25 != nullptr) {
        if ((GameData_21f16e8 & v22) == 0) {
          while (1) {
            v31 = v26[1];
            if (v31 == v23) {
              v32 = *((unsigned __int8*)v26 + 16);
              v33 = v26[3];
              if ((v32 & 1) == 0) {
                v33 = v32 >> 1;
              }
              if (v33 == v20) {
                v34 = (v32 & 1) != 0 ? (__int64*)v26[4]
                                     : (__int64*)((char*)v26 + 17);
                result = memcmp(v34, v19, v20);
                if ((_DWORD)result == 0) {
                  goto LABEL_63;
                }
              }
            }
            else if ((v31 & v22) != v24) {
              goto LABEL_71;
            }
            v26 = (__int64*)*v26;
            if (v26 == nullptr) {
              goto LABEL_71;
            }
          }
        }
        do {
          v27 = v26[1];
          if (v27 == v23) {
            v28 = *((unsigned __int8*)v26 + 16);
            v29 = v26[3];
            if ((v28 & 1) == 0) {
              v29 = v28 >> 1;
            }
            if (v29 == v20) {
              v30 = (v28 & 1) != 0 ? (__int64*)v26[4]
                                   : (__int64*)((char*)v26 + 17);
              result = memcmp(v30, v19, v20);
              if ((_DWORD)result == 0) {
              LABEL_63:
                if ((v17 & 1) != 0 && v18 != 0) {
                  v35 = 128;
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                    v35 = 56;
                  }
                  nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v35,
                                                v18);
                }
                v36 = 128;
                if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                  v36 = 56;
                }
                return nn_mem_StandardAllocator_Free(
                    fw_memory_g_heap_manager + v36, v12);
              }
            }
          }
          else {
            if (v27 >= v21) {
              v27 %= v21;
            }
            if (v27 != v24) {
              break;
            }
          }
          v26 = (__int64*)*v26;
        } while (v26 != nullptr);
      }
    }
  }
LABEL_71:
  v37 = (float)(unsigned __int64)(GameData_21f16f8 + 1);
  if (v21 == 0 || (float)(*(float*)&GameData_21f1700 * (float)v21) < v37) {
    v38 = v37 / *(float*)&GameData_21f1700;
    v39 = true;
    if (v21 >= 3) {
      v39 = (v21 & (v21 - 1)) != 0;
    }
    v40 = v39 | (2 * v21);
    v41 = vcvtps_u64_f32(v38);
    if (v40 <= v41) {
      v42 = v41;
    }
    else {
      v42 = v40;
    }
    if (v42 == 1) {
      v42 = 2;
    }
    else if ((v42 & (v42 - 1)) != 0) {
      result = std___1___next_prime(v42);
      v21 = GameData_21f16e8;
      v42 = result;
    }
    if (v42 > v21) {
      goto LABEL_83;
    }
    if (v42 < v21) {
      result = vcvtps_u64_f32((float)(unsigned __int64)GameData_21f16f8 /
                              *(float*)&GameData_21f1700);
      if (v21 < 3 || (v21 & (v21 - 1)) != 0) {
        result = std___1___next_prime(result);
      }
      else {
        v43 = 1LL << (-(char)__clz(result - 1) & 63);
        if (result >= 2) {
          result = v43;
        }
      }
      if (v42 <= result) {
        v42 = result;
      }
      if (v42 < v21) {
      LABEL_83:
        result = (unsigned __int64)GameRoutine_8960a0(&GameData_21f16e0, v42);
      }
    }
  }
  v44 = GameData_21f16e8;
  v45 = v12[1];
  v46 = GameData_21f16e8 - 1;
  if ((v44 & (v44 - 1)) != 0) {
    if (v45 >= GameData_21f16e8) {
      v45 %= (unsigned __int64)GameData_21f16e8;
    }
  }
  else {
    v45 &= v46;
  }
  v47 = GameData_21f16e0;
  v48 = *(_QWORD**)(GameData_21f16e0 + 8 * v45);
  if (v48 != nullptr) {
    *v12 = *v48;
    *v48 = v12;
  }
  else {
    v49 = GameData_21f16f0;
    GameData_21f16f0 = (__int64)v12;
    *v12 = v49;
    *(_QWORD*)(v47 + 8 * v45) = &GameData_21f16f0;
    if (*v12 != 0) {
      v50 = *(_QWORD*)(*v12 + 8LL);
      if ((v44 & v46) != 0) {
        if (v50 >= v44) {
          v50 %= v44;
        }
      }
      else {
        v50 &= v46;
      }
      *(_QWORD*)(GameData_21f16e0 + 8 * v50) = v12;
    }
  }
  ++GameData_21f16f8;
  return result;
}

_QWORD* game_anonymous_8999e0(_QWORD* result, unsigned __int64* a2, __int64 a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v4;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  float v23;
  float v24;
  float v25;
  _BOOL8 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  unsigned __int64 v38;

  v3 = result[11];
  v4 = *a2;
  v6 = result;
  v7 = *a2;
  if (v3 != 0 && result[13] != 0) {
    v9 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v10 = *a2;
      if (v4 >= v3) {
        v10 = v4 % v3;
      }
    }
    else {
      v10 = v9 & v4;
    }
    v11 = *(_QWORD**)(result[10] + 8 * v10);
    if (v11 != nullptr) {
      v12 = (_QWORD*)*v11;
      if (v12 != nullptr) {
        if ((v3 & v9) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == v4) {
              if (v12[2] == v4) {
                return result;
              }
            }
            else if ((v14 & v9) != v10) {
              goto LABEL_24;
            }
            v12 = (_QWORD*)*v12;
            if (v12 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v13 = v12[1];
          if (v13 == v4) {
            if (v12[2] == v4) {
              return result;
            }
          }
          else {
            if (v13 >= v3) {
              v13 %= v3;
            }
            if (v13 != v10) {
              break;
            }
          }
          v12 = (_QWORD*)*v12;
        } while (v12 != nullptr);
      }
    }
  }
LABEL_24:
  v15 = fw_memory_g_heap_manager_ptr;
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v16 = v6[11];
  v17 = result;
  result[2] = v7;
  result[3] = a3;
  *result = 0;
  result[1] = v7;
  if (v16 == 0) {
    goto LABEL_44;
  }
  v18 = v16 - 1;
  if ((v16 & (v16 - 1)) != 0) {
    if (v4 >= v16) {
      v7 = v4 % v16;
    }
  }
  else {
    v7 = v18 & v4;
  }
  v19 = *(_QWORD**)(v6[10] + 8 * v7);
  if (v19 == nullptr || (v20 = (_QWORD*)*v19) == nullptr) {
  LABEL_44:
    v23 = *((float*)v6 + 28);
    v24 = (float)(unsigned __int64)(v6[13] + 1LL);
    if (v16 == 0 || (float)(v23 * (float)v16) < v24) {
      v25 = v24 / v23;
      v26 = true;
      if (v16 >= 3) {
        v26 = (v16 & (v16 - 1)) != 0;
      }
      v27 = v26 | (2 * v16);
      v28 = vcvtps_u64_f32(v25);
      if (v27 <= v28) {
        v29 = v28;
      }
      else {
        v29 = v27;
      }
      if (v29 == 1) {
        v29 = 2;
      }
      else if ((v29 & (v29 - 1)) != 0) {
        result = (_QWORD*)std___1___next_prime(v29);
        v16 = v6[11];
        v29 = (unsigned __int64)result;
      }
      if (v29 > v16) {
        goto LABEL_56;
      }
      if (v29 < v16) {
        result = (_QWORD*)vcvtps_u64_f32((float)(unsigned __int64)v6[13] /
                                         *((float*)v6 + 28));
        if (v16 < 3 || (v16 & (v16 - 1)) != 0) {
          result = (_QWORD*)std___1___next_prime(result);
        }
        else {
          v30 = 1LL << (-(char)__clz((unsigned __int64)result - 1) & 63);
          if ((unsigned __int64)result >= 2) {
            result = (_QWORD*)v30;
          }
        }
        if (v29 <= (unsigned __int64)result) {
          v29 = (unsigned __int64)result;
        }
        if (v29 < v16) {
        LABEL_56:
          result = GameRoutine_89a1e0(v6 + 10, v29);
        }
      }
    }
    v32 = v6[11];
    v33 = v17[1];
    v34 = v32 - 1;
    if ((v32 & (v32 - 1)) != 0) {
      if (v33 >= v32) {
        v33 %= v32;
      }
    }
    else {
      v33 &= v34;
    }
    v35 = v6[10];
    v36 = *(_QWORD**)(v35 + 8 * v33);
    if (v36 != nullptr) {
      *v17 = *v36;
      *v36 = v17;
    }
    else {
      v37 = v6[12];
      v6[12] = v17;
      *v17 = v37;
      *(_QWORD*)(v35 + 8 * v33) = v6 + 12;
      if (*v17 != 0) {
        v38 = *(_QWORD*)(*v17 + 8LL);
        if ((v32 & v34) != 0) {
          if (v38 >= v32) {
            v38 %= v32;
          }
        }
        else {
          v38 &= v34;
        }
        *(_QWORD*)(v6[10] + 8 * v38) = v17;
      }
    }
    ++v6[13];
    return result;
  }
  if ((v16 & v18) == 0) {
    while (1) {
      v22 = v20[1];
      if (v22 == v4) {
        if (v20[2] == v4) {
          goto LABEL_63;
        }
      }
      else if ((v22 & v18) != v7) {
        goto LABEL_44;
      }
      v20 = (_QWORD*)*v20;
      if (v20 == nullptr) {
        goto LABEL_44;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == v4) {
      break;
    }
    if (v21 >= v16) {
      v21 %= v16;
    }
    if (v21 != v7) {
      goto LABEL_44;
    }
  LABEL_34:
    v20 = (_QWORD*)*v20;
    if (v20 == nullptr) {
      goto LABEL_44;
    }
  }
  if (v20[2] != v4) {
    goto LABEL_34;
  }
LABEL_63:
  v31 = 128;
  if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
    v31 = 56;
  }
  return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v31, result);
}

void game_anonymous_1261cc0(__int64 result, int* a2, int* a3, int* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  int v5;
  unsigned __int64 v6;
  unsigned __int64 v10;
  __int64** v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  float v18;
  _QWORD* v19;
  float v20;
  float v21;
  _BOOL8 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  unsigned __int64 v29;

  v5 = *a2;
  v6 = *(_QWORD*)(result + 8);
  if (v6 != 0) {
    v10 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = v5;
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
    }
    else {
      v4 = v10 & v5;
    }
    v11 = *(__int64***)(*(_QWORD*)result + 8 * v4);
    if (v11 != nullptr) {
      v12 = *v11;
      if (v12 != nullptr) {
        if ((v6 & v10) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == v5) {
              if (*((_DWORD*)v12 + 4) == v5) {
                return;
              }
            }
            else if ((v14 & v10) != v4) {
              goto LABEL_22;
            }
            v12 = (__int64*)*v12;
            if (v12 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = v12[1];
          if (v13 == v5) {
            if (*((_DWORD*)v12 + 4) == v5) {
              return;
            }
          }
          else {
            if (v13 >= v6) {
              v13 %= v6;
            }
            if (v13 != v4) {
              break;
            }
          }
          v12 = (__int64*)*v12;
        } while (v12 != nullptr);
      }
    }
  }
LABEL_22:
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       56, 16, 0);
  v16 = *a3;
  v17 = *a4;
  v18 = *(float*)(result + 32);
  v19 = (_QWORD*)v15;
  *(_QWORD*)(v15 + 8) = v5;
  *(_DWORD*)(v15 + 16) = v5;
  *(_QWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_DWORD*)(v15 + 24) = v16;
  *(_DWORD*)(v15 + 28) = v17;
  v20 = (float)(unsigned __int64)(*(_QWORD*)(result + 24) + 1LL);
  if (v6 == 0 || (float)(v18 * (float)v6) < v20) {
    v21 = v20 / v18;
    v22 = true;
    if (v6 >= 3) {
      v22 = (v6 & (v6 - 1)) != 0;
    }
    v23 = v22 | (2 * v6);
    v24 = vcvtps_u64_f32(v21);
    if (v23 <= v24) {
      v25 = v24;
    }
    else {
      v25 = v23;
    }
    game_anonymous_1261f00((__int64*)result, v25);
    v6 = *(_QWORD*)(result + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = (v6 - 1) & v5;
    }
  }
  v26 = *(_QWORD*)result;
  v27 = *(_QWORD**)(*(_QWORD*)result + 8 * v4);
  if (v27 != nullptr) {
    *v19 = *v27;
    *v27 = v19;
  }
  else {
    v28 = *(_QWORD*)(result + 16);
    *(_QWORD*)(result + 16) = v19;
    *v19 = v28;
    *(_QWORD*)(v26 + 8 * v4) = result + 16;
    if (v28 != 0) {
      v29 = *(_QWORD*)(v28 + 8);
      if ((v6 & (v6 - 1)) != 0) {
        if (v29 >= v6) {
          v29 %= v6;
        }
      }
      else {
        v29 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)result + 8 * v29) = v19;
    }
  }
  ++*(_QWORD*)(result + 24);
}

__int64 game_anonymous_1266080(__int64 a1, int* a2, int* a3, int* a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v10;
  __int64* v11;
  __int64 result;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  float v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 primeEm;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  unsigned __int64 v33;

  v5 = *a2;
  v6 = *(_QWORD*)(a1 + 8);
  if (v6 != 0) {
    v10 = v6 - 1;
    if ((v6 & (v6 - 1)) != 0) {
      v4 = *a2;
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
    }
    else {
      v4 = v10 & v5;
    }
    v11 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v11 != nullptr) {
      result = *v11;
      if (*v11 != 0) {
        if ((v6 & v10) == 0) {
          while (1) {
            v14 = *(_QWORD*)(result + 8);
            if (v14 == v5) {
              if (*(_DWORD*)(result + 16) == (_DWORD)v5) {
                return result;
              }
            }
            else if ((v14 & v10) != v4) {
              goto LABEL_23;
            }
            result = *(_QWORD*)result;
            if (result == 0) {
              goto LABEL_23;
            }
          }
        }
        do {
          v13 = *(_QWORD*)(result + 8);
          if (v13 == v5) {
            if (*(_DWORD*)(result + 16) == (_DWORD)v5) {
              return result;
            }
          }
          else {
            if (v13 >= v6) {
              v13 %= v6;
            }
            if (v13 != v4) {
              break;
            }
          }
          result = *(_QWORD*)result;
        } while (result != 0);
      }
    }
  }
LABEL_23:
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
  v15 = *a3;
  v16 = *a4;
  v17 = *(float*)(a1 + 32);
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v5;
  *(_DWORD*)(result + 16) = v15;
  *(_DWORD*)(result + 20) = v16;
  v18 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v6 == 0 || (float)(v17 * (float)v6) < v18) {
    v19 = v18 / v17;
    v20 = true;
    if (v6 >= 3) {
      v20 = (v6 & (v6 - 1)) != 0;
    }
    v21 = v20 | (2 * v6);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      v23 = v22;
    }
    else {
      v23 = v21;
    }
    if (v23 == 1) {
      v23 = 2;
    }
    else if ((v23 & (v23 - 1)) != 0) {
      v24 = result;
      primeEm = std___1___next_prime(v23);
      v6 = *(_QWORD*)(a1 + 8);
      v23 = primeEm;
      result = v24;
    }
    if (v23 > v6) {
      goto LABEL_35;
    }
    if (v23 < v6) {
      v27 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v6 < 3 || (v6 & (v6 - 1)) != 0) {
        v29 = result;
        v27 = std___1___next_prime(v27);
        result = v29;
      }
      else {
        v28 = 1LL << (-(char)__clz(v27 - 1) & 63);
        if (v27 >= 2) {
          v27 = v28;
        }
      }
      if (v23 <= v27) {
        v23 = v27;
      }
      if (v23 < v6) {
      LABEL_35:
        v26 = result;
        GameRoutine_7a6cc0((__int64*)a1, v23);
        result = v26;
      }
    }
    v6 = *(_QWORD*)(a1 + 8);
    if ((v6 & (v6 - 1)) != 0) {
      if (v6 <= v5) {
        v4 = v5 % v6;
      }
      else {
        v4 = v5;
      }
    }
    else {
      v4 = (v6 - 1) & v5;
    }
  }
  v30 = *(_QWORD*)a1;
  v31 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
  if (v31 != nullptr) {
    *(_QWORD*)result = *v31;
    *v31 = result;
  }
  else {
    v32 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = result;
    *(_QWORD*)result = v32;
    *(_QWORD*)(v30 + 8 * v4) = a1 + 16;
    if (*(_QWORD*)result != 0) {
      v33 = *(_QWORD*)(*(_QWORD*)result + 8LL);
      if ((v6 & (v6 - 1)) != 0) {
        if (v33 >= v6) {
          v33 %= v6;
        }
      }
      else {
        v33 &= v6 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v33) = result;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return result;
}

void game_anonymous_1266e00(unsigned __int64 result, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v5;
  unsigned __int64 primeEm;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64** v11;
  __int64* v12;
  __int64* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64** v17;
  __int64* v18;
  unsigned __int64 v19;
  __int64 v20;
  _QWORD* v21;
  float v22;
  _QWORD* v23;
  float v24;
  float v25;
  _BOOL8 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  unsigned __int64 v36;

  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 32) = *(_DWORD*)(a2 + 32);
  v5 = *(_QWORD*)(a2 + 8);
  if (v5 == 1) {
    v5 = 2;
  LABEL_17:
    GameRoutine_7a6cc0((__int64*)result, v5);
    goto LABEL_18;
  }
  if ((v5 & (v5 - 1)) != 0) {
    primeEm = std___1___next_prime(v5);
    v2 = *(_QWORD*)(result + 8);
    v5 = primeEm;
    v7 = primeEm >= v2;
    if (primeEm > v2) {
      goto LABEL_17;
    }
  }
  else {
    v2 = 0;
    v7 = true;
    if (v5 != 0) {
      goto LABEL_17;
    }
  }
  if (!v7) {
    v8 = vcvtps_u64_f32((float)*(unsigned __int64*)(result + 24) /
                        *(float*)(result + 32));
    if (v2 < 3 || (v2 & (v2 - 1)) != 0) {
      v10 = v5;
      v8 = std___1___next_prime(v8);
      v5 = v10;
    }
    else {
      v9 = 1LL << (-(char)__clz(v8 - 1) & 63);
      if (v8 >= 2) {
        v8 = v9;
      }
    }
    if (v5 <= v8) {
      v5 = v8;
    }
    if (v5 < v2) {
      goto LABEL_17;
    }
  }
LABEL_18:
  v11 = *(__int64***)(a2 + 16);
  if (v11 != nullptr) {
    v12 = (__int64*)(result + 16);
    v13 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v14 = *((int*)v11 + 4);
      v15 = *(_QWORD*)(result + 8);
      if (v15 != 0) {
        v16 = v15 - 1;
        if ((v15 & (v15 - 1)) != 0) {
          v2 = *((int*)v11 + 4);
          if (v15 <= v14) {
            v2 = v14 % v15;
          }
        }
        else {
          v2 = v16 & v14;
        }
        v17 = *(__int64***)(*(_QWORD*)result + 8 * v2);
        if (v17 != nullptr) {
          v18 = *v17;
          if (v18 != nullptr) {
            if ((v15 & v16) == 0) {
              while (1) {
                v20 = v18[1];
                if (v20 == v14) {
                  if (*((_DWORD*)v18 + 4) == (_DWORD)v14) {
                    goto LABEL_77;
                  }
                }
                else if ((v20 & v16) != v2) {
                  goto LABEL_40;
                }
                v18 = (__int64*)*v18;
                if (v18 == nullptr) {
                  goto LABEL_40;
                }
              }
            }
            do {
              v19 = v18[1];
              if (v19 == v14) {
                if (*((_DWORD*)v18 + 4) == (_DWORD)v14) {
                  goto LABEL_77;
                }
              }
              else {
                if (v19 >= v15) {
                  v19 %= v15;
                }
                if (v19 != v2) {
                  break;
                }
              }
              v18 = (__int64*)*v18;
            } while (v18 != nullptr);
          }
        }
      }
    LABEL_40:
      v21 = (_QWORD*)fw_memory_HeapManager_Allocate(*v13, 24, 16, 0);
      *v21 = 0;
      v21[1] = v14;
      v22 = *(float*)(result + 32);
      v23 = v21;
      v21[2] = v11[2];
      v24 = (float)(unsigned __int64)(*(_QWORD*)(result + 24) + 1LL);
      if (v15 == 0 || (float)(v22 * (float)v15) < v24) {
        v25 = v24 / v22;
        v26 = (v15 & (v15 - 1)) != 0;
        if (v15 < 3) {
          v26 = true;
        }
        v27 = v26 | (2 * v15);
        v28 = vcvtps_u64_f32(v25);
        if (v27 <= v28) {
          v29 = v28;
        }
        else {
          v29 = v27;
        }
        if (v29 == 1) {
          v29 = 2;
        }
        else if ((v29 & (v29 - 1)) != 0) {
          v30 = std___1___next_prime(v29);
          v15 = *(_QWORD*)(result + 8);
          v29 = v30;
        }
        if (v29 > v15) {
          goto LABEL_52;
        }
        if (v29 < v15) {
          v31 = vcvtps_u64_f32((float)*(unsigned __int64*)(result + 24) /
                               *(float*)(result + 32));
          if (v15 < 3 || (v15 & (v15 - 1)) != 0) {
            v31 = std___1___next_prime(v31);
          }
          else {
            v32 = 1LL << (-(char)__clz(v31 - 1) & 63);
            if (v31 >= 2) {
              v31 = v32;
            }
          }
          if (v29 <= v31) {
            v29 = v31;
          }
          if (v29 < v15) {
          LABEL_52:
            GameRoutine_7a6cc0((__int64*)result, v29);
          }
        }
        v15 = *(_QWORD*)(result + 8);
        if ((v15 & (v15 - 1)) != 0) {
          if (v15 <= v14) {
            v2 = v14 % v15;
          }
          else {
            v2 = v14;
          }
        }
        else {
          v2 = (v15 - 1) & v14;
        }
      }
      v33 = *(_QWORD*)result;
      v34 = *(_QWORD**)(*(_QWORD*)result + 8 * v2);
      if (v34 != nullptr) {
        *v23 = *v34;
        *v34 = v23;
      }
      else {
        v35 = *v12;
        *v12 = (__int64)v23;
        *v23 = v35;
        *(_QWORD*)(v33 + 8 * v2) = v12;
        if (*v23 != 0) {
          v36 = *(_QWORD*)(*v23 + 8LL);
          if ((v15 & (v15 - 1)) != 0) {
            if (v36 >= v15) {
              v36 %= v15;
            }
          }
          else {
            v36 &= v15 - 1;
          }
          *(_QWORD*)(*(_QWORD*)result + 8 * v36) = v23;
        }
      }
      ++*(_QWORD*)(result + 24);
    LABEL_77:
      v11 = (__int64**)*v11;
    } while (v11 != nullptr);
  }
}

__int64 game_anonymous_19b6150(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  struct {
    __int64* v13;
    __int64 v14;
  } v13_;
  unsigned int v15;

  GameRecord_99f220((void*)(&v13_.v13));
  v2 = v13_.v14;
  v13_.v14 = 0;
  v3 = GameData_2272790;
  GameData_2272790 = v2;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
    v4 = v13_.v14;
    v13_.v13 = GameData_212df70[0] + 2;
    v13_.v14 = 0;
    if (v4 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v5 = *(_QWORD*)(game_GameModeData_instance_ + 176) + 192LL;
  }
  else {
    v5 = 0;
  }
  GameUnitRecord_130c080((void*)(&v13_.v13), v5);
  v6 = v13_.v14;
  v13_.v14 = 0;
  v7 = GameData_22727a0;
  GameData_22727a0 = v6;
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    v8 = v13_.v14;
    v13_.v13 = GameData_2130db8[0] + 2;
    v13_.v14 = 0;
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22730e8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22730e8) != 0) {
    GameData_22727a8 = 8;
    GameData_22727f0 = 0;
    GameData_22727f8 = (__int64)GameRoutine_19b6940;
    GameData_22727c8 = 0;
    GameData_22727d0 = 0;
    GameData_22727d8 = 0;
    GameData_22727e0 = 0;
    GameData_22727e8 = 13;
    GameData_2272800 = 0;
    GameData_2272808 = 0;
    GameData_2272810 = 0;
    GameData_2272818 = 0;
    GameData_2272820 = 0;
    GameData_2272840 = 0;
    GameData_2272848 = 0;
    GameData_2272850 = 0;
    GameData_2272858 = 0;
    GameData_2272860 = 0;
    GameData_2272868 = 13;
    GameData_2272880 = 0;
    GameData_2272888 = 0;
    GameData_2272890 = 0;
    GameData_2272828 = 14;
    GameData_2272898 = 0;
    GameData_22728a0 = 0;
    GameData_22728a8 = 13;
    GameData_22728c0 = 0;
    GameData_22728c8 = 0;
    GameData_22728d0 = 0;
    GameData_22728d8 = 0;
    GameData_22728e0 = 0;
    GameData_22728e8 = 13;
    GameData_2272900 = 0;
    GameData_2272908 = 0;
    GameData_2272910 = 0;
    GameData_2272918 = 0;
    GameData_2272920 = 0;
    GameData_2272928 = 8;
    GameData_22727b0 = 0;
    GameData_22727b8 = (__int64)GameData_212d618;
    GameData_2272830 = 0;
    GameData_2272838 = (__int64)GameRoutine_19b6a00;
    GameData_2272870 = 0;
    GameData_2272878 = (__int64)GameRoutine_19b6b00;
    GameData_22728b0 = 0;
    GameData_22728b8 = (__int64)GameRoutine_19b6b20;
    GameData_22728f0 = 0;
    GameData_22728f8 = (__int64)GameRoutine_19b8080;
    GameData_22729b8 = (__int64)GameRoutine_19b8280;
    GameData_22729a8 = 13;
    GameData_2272a28 = 13;
    GameData_2272aa8 = 13;
    GameData_2272ae8 = 13;
    GameData_2272b68 = 13;
    GameData_2272be8 = 13;
    GameData_2272c68 = 13;
    GameData_2272ce8 = 13;
    GameData_22729e8 = 14;
    GameData_2272a68 = 14;
    GameData_2272b28 = 14;
    GameData_2272ba8 = 14;
    GameData_2272c28 = 14;
    GameData_2272d28 = 14;
    GameData_2272948 = 0;
    GameData_2272950 = 0;
    GameData_2272958 = 0;
    GameData_2272960 = 0;
    GameData_2272990 = 0;
    GameData_2272998 = 0;
    GameData_22729a0 = 0;
    GameData_2272988 = 0;
    GameData_2272978 = 0;
    GameData_2272980 = 0;
    GameData_2272970 = 0;
    GameData_22729b0 = 0;
    GameData_22729c0 = 0;
    GameData_22729c8 = 0;
    GameData_22729d0 = 0;
    GameData_22729d8 = 0;
    GameData_22729e0 = 0;
    GameData_22729f0 = 0;
    GameData_2272a00 = 0;
    GameData_2272a08 = 0;
    GameData_2272a10 = 0;
    GameData_2272a18 = 0;
    GameData_2272a20 = 0;
    GameData_2272a30 = 0;
    GameData_2272a40 = 0;
    GameData_2272a48 = 0;
    GameData_2272a50 = 0;
    GameData_2272a58 = 0;
    GameData_2272a60 = 0;
    GameData_2272a70 = 0;
    GameData_2272a80 = 0;
    GameData_2272a88 = 0;
    GameData_2272a90 = 0;
    GameData_2272a98 = 0;
    GameData_2272aa0 = 0;
    GameData_2272ab0 = 0;
    GameData_2272ac0 = 0;
    GameData_2272ac8 = 0;
    GameData_2272ad0 = 0;
    GameData_2272ad8 = 0;
    GameData_2272ae0 = 0;
    GameData_2272af0 = 0;
    GameData_2272b00 = 0;
    GameData_2272b08 = 0;
    GameData_2272b10 = 0;
    GameData_2272b18 = 0;
    GameData_2272b20 = 0;
    GameData_2272b30 = 0;
    GameData_2272b40 = 0;
    GameData_2272b48 = 0;
    GameData_2272b50 = 0;
    GameData_2272b58 = 0;
    GameData_2272b60 = 0;
    GameData_2272b70 = 0;
    GameData_2272b80 = 0;
    GameData_2272b88 = 0;
    GameData_2272b90 = 0;
    GameData_2272b98 = 0;
    GameData_22729f8 = (__int64)GameRoutine_19b85b0;
    GameData_2272cf8 = (__int64)GameRoutine_19b9200;
    GameData_2272d98 = 250;
    GameData_2272ba0 = 0;
    GameData_2272bb0 = 0;
    GameData_2272bc0 = 0;
    GameData_2272bc8 = 0;
    GameData_2272a38 = (__int64)GameRoutine_19b8620;
    GameData_2272d38 = (__int64)GameRoutine_19b9220;
    GameData_2272bd0 = 0;
    GameData_2272bd8 = 0;
    GameData_2272be0 = 0;
    GameData_2272bf0 = 0;
    GameData_2272c00 = 0;
    GameData_2272c08 = 0;
    GameData_2272c10 = 0;
    GameData_2272a78 = (__int64)GameRoutine_19b88a0;
    GameData_2272c18 = 0;
    GameData_2272c20 = 0;
    GameData_2272c30 = 0;
    GameData_2272c40 = 0;
    GameData_2272c48 = 0;
    GameData_2272c50 = 0;
    GameData_2272c58 = 0;
    GameData_2272c60 = 0;
    GameData_2272c70 = 0;
    GameData_2272ab8 = (__int64)GameRoutine_19b8a70;
    GameData_2272930 = 0;
    GameData_2272938 = (__int64)GameData_212d610[0];
    GameData_2272c80 = 0;
    GameData_2272c88 = 0;
    GameData_2272c90 = 0;
    GameData_2272c98 = 0;
    GameData_2272ca0 = 0;
    GameData_2272cc0 = 0;
    GameData_2272cb8 = 0;
    GameData_2272af8 = (__int64)ProcAfterEpisodeSeq_19b8ac0;
    GameData_2272968 = 2;
    GameData_2272ca8 = 2;
    GameData_2272cb0 = 0;
    GameData_2272cd0 = 0;
    GameData_2272cd8 = 0;
    GameData_2272ce0 = 0;
    GameData_2272cf0 = 0;
    GameData_2272d00 = 0;
    GameData_2272d08 = 0;
    GameData_2272b38 = (__int64)GameRoutine_19b8ba0;
    GameData_2272d10 = 0;
    GameData_2272d18 = 0;
    GameData_2272d20 = 0;
    GameData_2272d30 = 0;
    GameData_2272d40 = 0;
    GameData_2272d48 = 0;
    GameData_2272d50 = 0;
    GameData_2272d58 = 0;
    GameData_2272d60 = 0;
    GameData_2272b78 = (__int64)GameRoutine_19b8ca0;
    GameData_2272d68 = 4;
    GameData_2272d80 = 0;
    GameData_2272d78 = 0;
    GameData_2272d70 = 0;
    GameData_2272d90 = 0;
    GameData_2272da0 = 0;
    GameData_2272da8 = 12;
    GameData_2272dd0 = 0;
    GameData_2272bb8 = (__int64)GameRoutine_19b8e60;
    GameData_2272dd8 = 0;
    GameData_2272de0 = 0;
    GameData_2272db0 = 0;
    GameData_2272db8 = 0;
    GameData_2272dc0 = 0;
    GameData_2272dc8 = 0;
    GameData_2272de8 = 2;
    GameData_2272df0 = 0;
    GameData_2272df8 = 0;
    GameData_2272bf8 = (__int64)GameRoutine_19b9080;
    GameData_2272e00 = 0;
    GameData_2272e08 = 2;
    GameData_2272e10 = 0;
    GameData_2272e18 = 0;
    GameData_2272e20 = 0;
    GameData_2272e28 = 8;
    GameData_2272c38 = (__int64)GameRoutine_19b90a0;
    GameData_2272c78 = (__int64)GameRoutine_19b91a0;
    GameData_2272cc8 = 1;
    GameData_2272d88 = 1;
    GameData_2272e30 = 0;
    GameData_2272e48 = 0;
    GameData_2272e50 = 0;
    GameData_2272e58 = 0;
    GameData_2272e60 = 0;
    GameData_2272e70 = 0;
    GameData_2272e38 = (__int64)GameData_212d428[0];
    GameData_2272e68 = 19;
    GameData_2272e88 = 2000;
    GameData_2272e90 = 0;
    GameData_2272e98 = 0;
    GameData_2272ea0 = 0;
    GameData_2272eb0 = 0;
    GameData_2272ea8 = 10;
    GameData_2272e78 = (__int64)game_80a680_ptr[0];
    GameData_2272f28 = 2;
    GameData_2272ec8 = 0;
    GameData_2272ed0 = 0;
    GameData_2272ed8 = 0;
    GameData_2272ee0 = 0;
    GameData_2272ee8 = 4;
    GameData_2272f00 = 0;
    GameData_2272ef8 = 0;
    GameData_2272ef0 = 0;
    GameData_2272f08 = 1;
    GameData_2272f10 = 0;
    GameData_2272f20 = 0;
    GameData_2272f30 = 0;
    GameData_2272f38 = 0;
    GameData_2272f40 = 0;
    GameData_2272f50 = 0;
    GameData_2272f58 = 0;
    GameData_2272f60 = 0;
    GameData_2272f68 = 8;
    GameData_2272f48 = 3;
    GameData_2272eb8 = (__int64)GameData_212c720;
    GameData_2272f18 = 3000;
    GameData_2272f70 = 0;
    GameData_2272f88 = 0;
    GameData_2272f90 = 0;
    GameData_2272f98 = 0;
    GameData_2272fa0 = 0;
    GameData_2272fa8 = 19;
    GameData_2272fb0 = 0;
    GameData_2272fb8 = (__int64)game_80a680_ptr[0];
    GameData_2272fc8 = 0;
    GameData_2272fd0 = 0;
    GameData_2272fd8 = 0;
    GameData_2272fe0 = 0;
    GameData_2272fe8 = 8;
    GameData_2272ff0 = 0;
    GameData_2272f78 = (__int64)GameData_212d430[0];
    GameData_2273008 = 0;
    GameData_2273010 = 0;
    GameData_2273018 = 0;
    GameData_2273020 = 0;
    GameData_2273028 = 8;
    GameData_2273030 = 0;
    GameData_2272ff8 = (__int64)GameData_212d248;
    GameData_2273048 = 0;
    GameData_2273050 = 0;
    GameData_2273058 = 0;
    GameData_2273060 = 0;
    GameData_2273068 = 4;
    GameData_2273080 = 0;
    GameData_2273078 = 0;
    GameData_2273070 = 0;
    GameData_2273088 = 1;
    GameData_2273090 = 0;
    GameData_22730a0 = 0;
    GameData_22730a8 = 0;
    GameData_22730d0 = 0;
    GameData_22730d8 = 0;
    GameData_22730e0 = 0;
    GameData_22730b0 = 0;
    GameData_22730b8 = 0;
    GameData_22730c0 = 0;
    GameData_22730c8 = 0;
    GameData_2273038 = (__int64)GameData_212c710[0];
    GameData_2273098 = 1000;
    __cxa_guard_release(&GameData_22730e8);
  }
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      456, 16, 0);
  v10 = GameData_212c608[0];
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_QWORD*)(v9 + 128) = 0;
  *(_WORD*)(v9 + 136) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 24) = "NULL";
  *(_QWORD*)(v9 + 138) = 0;
  *(_QWORD*)(v9 + 144) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)v9 = v10 + 16;
  *(_QWORD*)(v9 + 8) = 0;
  game_ProcInst_Register(v9);
  *(_QWORD*)(v9 + 176) = 0;
  *(_QWORD*)(v9 + 184) = 0;
  *(_DWORD*)(v9 + 192) = 0;
  *(_QWORD*)(v9 + 216) = 0;
  *(_QWORD*)(v9 + 224) = 0;
  *(_QWORD*)(v9 + 232) = 0;
  *(_QWORD*)(v9 + 240) = 0;
  *(_QWORD*)(v9 + 248) = 0;
  *(_QWORD*)(v9 + 256) = 0;
  *(_QWORD*)(v9 + 264) = 0;
  *(_QWORD*)(v9 + 272) = 0;
  GameData_22730f0 = v9;
  *(_QWORD*)(v9 + 296) = 0;
  *(_QWORD*)(v9 + 304) = 0;
  *(_QWORD*)(v9 + 312) = 0;
  *(_QWORD*)(v9 + 320) = 0;
  *(_QWORD*)(v9 + 328) = 0;
  *(_QWORD*)(v9 + 344) = 0;
  *(_QWORD*)(v9 + 352) = 0;
  *(_QWORD*)(v9 + 360) = 0;
  *(_QWORD*)(v9 + 368) = 0;
  *(_QWORD*)v9 = game_anonymous_ProcAfterEpisodeSeq_vtable;
  *(_DWORD*)(v9 + 152) = 12;
  *(_QWORD*)(v9 + 160) = v9 + 160;
  *(_QWORD*)(v9 + 168) = v9 + 160;
  *(_QWORD*)(v9 + 200) = &GameData_2272788;
  *(_QWORD*)(v9 + 208) = &GameData_2272798;
  *(_QWORD*)(v9 + 280) = v9 + 288;
  *(_QWORD*)(v9 + 288) = 0;
  *(_DWORD*)(v9 + 336) = 1065353216;
  *(_QWORD*)(v9 + 392) = -1;
  v11 = GameData_212fca0[0];
  *(_DWORD*)(v9 + 400) = 0;
  v11 += 2;
  *(_QWORD*)(v9 + 408) = 0;
  *(_QWORD*)(v9 + 416) = 0;
  *(_QWORD*)(v9 + 424) = 0;
  *(_DWORD*)(v9 + 448) = 0;
  *(_QWORD*)(v9 + 376) = 0;
  *(_QWORD*)(v9 + 384) = v11;
  *(_QWORD*)(v9 + 432) = v11;
  *(_QWORD*)(v9 + 440) = -1;
  v15 = (unsigned int)snd_fnd_calcCrc32("TITLE", 0);
  snd_Fade_Fade_10c830((__int64)&v13_.v13, 0x0.0p+0f);
  snd_startSlotVolume_100b50((int*)&v15, (__int64)&v13_.v13, 0x0.0p+0f);
  snd_Fade_Destroy_Fade(&v13_.v13);
  nn_oe_SetUserInactivityDetectionTimeExtended(1);
  return ProcInst_657850(v9, (__int64)&GameData_22727a8,
                         (__int64)"ProcAfterEpisodeSeq", 1, a1);
}

#pragma GCC visibility pop
