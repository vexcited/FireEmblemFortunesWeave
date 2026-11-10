#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1091720(_QWORD, long double);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_a19f00(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_isActive_100100(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212d4e8;
extern __int64 GameData_212fe68;
extern __int64 GameData_21ec7b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212d4e0;
struct PseudoSret GameRoutine_1095750(_QWORD, _QWORD, _QWORD, float);
__int64 CombatCharacterSound_1091900(_QWORD* a1);
void CombatCharacterSound_1091c00(__int64 a1, int* a2);
__int64 CombatCharacterSound_DeletingDestructor(_QWORD* a1);

__int64 CombatCharacterSound_1091900(_QWORD* a1)
{
  __int64 v1;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int8 explicit;
  int* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  _QWORD* v18;
  _QWORD* v19;

  v1 = a1[3];
  if (v1 == 0) {
    return v1;
  }
  if (*(_QWORD*)(v1 + 8) == -1 || a1[4] == 0) {
    return 0;
  }
  v1 = a1[5];
  if (v1 != 0) {
    return v1;
  }
  v4 = a1[1];
  v5 = *(_QWORD**)(v4 + 80);
  if (v5 != nullptr) {
    v6 = *(_QWORD*)(v4 + 88);
    if (v5[1] == -1 || v6 == 0) {
      v5 = nullptr;
    }
    else {
      v5 = *(_QWORD**)(v6 + 8);
    }
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4e8,
                                  memory_order_acquire);
  v9 = GameData_212d4e0;
  if ((explicit & 1) == 0) {
    v18 = v5;
    v19 = a1;
    v17 = __cxa_guard_acquire(GameData_212d4e8);
    v9 = GameData_212d4e0;
    v5 = v18;
    a1 = v19;
    if (v17 != 0) {
      *GameData_212d4e0 = wld_Crc32(0, "CharacterSound", 14);
      __cxa_guard_release(GameData_212d4e8);
      v9 = GameData_212d4e0;
      v5 = v18;
      a1 = v19;
    }
  }
  v10 = *v9;
  v12 = v5[63];
  v11 = v5[64];
  v13 = v11;
  v14 = v11;
  while (v14 != v12) {
    v15 = *(_DWORD*)(v14 - 16);
    v14 -= 16;
    v13 -= 16;
    if (v15 == v10) {
      if (v11 != v13) {
        v16 = *(_QWORD*)(v13 + 8);
        goto LABEL_24;
      }
      break;
    }
  }
  v16 = 0;
LABEL_24:
  a1[5] = v16;
  return v16;
}

void CombatCharacterSound_1091c00(__int64 a1, int* a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  long double v12;
  __int64 v13;
  int v15;
  const char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  int* v22;
  __int64 v23;
  __int64 v24;
  int v25;

  if (GameData_21ec7b0 != 0) {
    v2 = a2[3];
    if (v2 <= 3) {
      v3 = GameData_21ec7b0 + 24LL * v2;
      v4 = *(_QWORD*)(v3 + 32);
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
        v5 = *(_QWORD*)(v3 + 40);
        v6 = *(_QWORD*)(v4 + 8) == -1 || v5 == 0;
        if (v6 || (v7 = *(_QWORD*)(v5 + 80)) == 0 ||
            (*(_QWORD*)(v7 + 8) != -1 ? (v8 = *(_QWORD*)(v5 + 88) == 0)
                                      : (v8 = true),
             v8)) {
          std___1___shared_weak_count___release_weak(v4);
          return;
        }
        v9 = *(_QWORD*)(v4 + 8);
        *(__n128*)&v12 = std___1___shared_weak_count___release_weak(v4);
        v13 = *(_QWORD*)(a1 + 8);
        if (v9 != -1 && v5 == v13) {
          v15 = *a2;
          if ((*a2 & 0x40) == 0) {
            if ((v15 & 9) != 0) {
              v16 = "Dodge";
            }
            else if ((v15 & 0x80) != 0) {
              if (a2[3] == a2[2]) {
                return;
              }
              if ((GameRoutine_1091720(*(_QWORD*)(GameData_21ec7b0 + 8), v12) &
                   1) != 0) {
                v16 = "Thanks_Senior";
              }
              else {
                v16 = "Thanks";
              }
              v13 = *(_QWORD*)(a1 + 8);
            }
            else if ((v15 & 4) != 0 ||
                     (v22 = &a2[3 * a2[3]])[26] >= v22[24] >> 1) {
              v16 = "Damage_H";
            }
            else {
              v16 = "Damage_L";
            }
            v17 = *(_QWORD*)(v13 + 80);
            if (v17 != 0) {
              v18 = *(_QWORD*)(v13 + 88);
              if (*(_QWORD*)(v17 + 8) != -1 && v18 != 0) {
                v20 = *(_QWORD*)(v18 + 136);
                if (GameData_21ec7b0 != 0 &&
                        (v21 = *(_QWORD*)(GameData_21ec7b0 + 8)) != 0 &&
                        (*(_BYTE*)(v21 + 113) & 0x80) != 0 ||
                    (snd_isActive_100100(v20 + 104) & 1) != 0) {
                  v24 = 0;
                  v25 = 0x2000;
                }
                else {
                  *(struct PseudoSret*)(&v24) = GameRoutine_1095750(
                      v20, "V_AV_<VoiceID>_<Arg>", v16, 1.0);
                  GameRoutine_112180(v20 + 104, &v24);
                  v24 = 0;
                  v25 = 0x2000;
                  GameRoutine_112180(&v24, v20 + 104);
                }
                if ((snd_fnd_WeakHandle_isValid(&v24) & 1) != 0) {
                  v23 = *(_QWORD*)(v18 + 88);
                  if (*(_DWORD*)(v23 + 96) <= 1u) {
                    GameRoutine_112180(v23 + 320, &v24);
                    GameRoutine_a19f00(v23 + 272, v23 + 320);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

__int64 CombatCharacterSound_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;

  *a1 = GameData_212fe68 + 16;
  v1 = a1[3];
  if (v1 != 0) {
    std___1___shared_weak_count___release_weak(v1);
  }
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
