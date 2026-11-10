#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1079e10(__int64);
__int64 GameRoutine_1098db0(_QWORD);
extern __int64 (*game_combat_ActionArts_vtable[])();
__int64 ActionArts_Unknown6(__int64 a1);
__int64 ActionArts_DeletingDestructor(_QWORD* a1);
__int64 CharacterModel_1070c00(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212ff18;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_212d448[9];
extern int* GameData_212ff10;
struct PseudoSret GameRoutine_108d740(_QWORD, _QWORD);
void CharacterSelfie_10a6ac0(__int64);
float ActionArts_Unknown7(__int64 a1);
__int64 ActionArts_Unknown2(_QWORD* a1);
__n128 game_combat_ActionArts_OnEnter_lambda0_Invoke(__int64 a1);

__int64 ActionArts_Unknown6(__int64 a1)
{
  __int64 result;
  int v3;
  int v5;

  result = GameRoutine_1079e10(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 368LL));
  if ((result & 1) != 0) {
    v3 = *(_DWORD*)(a1 + 16);
    if (v3 != 1 && v3 != 3) {
      if (v3 == 2) {
        v5 = 3;
      }
      else {
        v5 = 1;
      }
      *(_DWORD*)(a1 + 16) = v5;
    }
  }
  return result;
}

float ActionArts_Unknown7(__int64 a1)
{
  __int64 v1;
  int v3;
  __int64* v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v16;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  __int64 v30;
  unsigned __int8 explicit;
  int* v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  float v39;
  float result;

  v1 = *(_QWORD*)(a1 + 24);
  v3 = *(_DWORD*)(v1 + 64);
  v4 = GameData_212d448[0];
  if (*(_BYTE*)(a1 + 88) == 1 && *GameData_212d448[0] != 0) {
    v5 = *(_DWORD*)(v1 + 12);
    if (v5 <= 3) {
      v6 = *GameData_212d448[0] + 24LL * v5;
      v7 = *(_QWORD*)(v6 + 32);
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                  memory_order_relaxed);
        v8 = *(_QWORD*)(v6 + 40);
        v9 = *(_QWORD*)(v7 + 8) == -1 || v8 == 0;
        if (v9 || (v10 = *(_QWORD*)(v8 + 80)) == 0 ||
            (*(_QWORD*)(v10 + 8) != -1 ? (v11 = *(_QWORD*)(v8 + 88) == 0)
                                       : (v11 = true),
             v11 || *(_QWORD*)(v7 + 8) == -1)) {
          std___1___shared_weak_count___release_weak(v7);
        }
        else {
          std___1___shared_weak_count___release_weak(v7);
          v12 = *(_QWORD*)(v8 + 80);
          if (v12 != 0) {
            v13 = *(_QWORD*)(v12 + 8);
            v14 = *(_QWORD*)(v8 + 88);
            if (v13 != -1 && v14 != 0) {
              *(_BYTE*)(*(_QWORD*)(v14 + 8) + 289LL) = 1;
            }
          }
        }
      }
    }
  }
  v16 = 0.0f;
  if ((*(_BYTE*)v1 & 4) != 0) {
    if (v3 > 603384317) {
      if (v3 != 603384318 && v3 != 989295323 && v3 != 603384504) {
        goto LABEL_47;
      }
    }
    else if (v3 != -2068235574 && v3 != 309207023 && v3 != 309207209) {
      goto LABEL_47;
    }
    v21 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 88LL);
    v22 = *(_QWORD*)(v21 + 392);
    v23 = *(_QWORD*)(v21 + 400);
    if (v23 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                memory_order_relaxed);
      v24 = *(_QWORD*)(v22 + 11608);
      if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v25 = v24;
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak(v23);
        v24 = v25;
      }
    }
    else {
      v24 = *(_QWORD*)(v22 + 11608);
    }
    if ((*(_BYTE*)(CharacterModel_1070c00(v24, (unsigned int)v3) + 96) & 1) !=
        0) {
      v16 = 0.066667f;
    }
    else {
      v16 = 0.0f;
    }
  }
LABEL_47:
  v26 = *(_QWORD*)(a1 + 8);
  v27 = *(_QWORD*)(v26 + 80);
  if (v27 == 0 || ((v28 = *(_QWORD*)(v26 + 88), *(_QWORD*)(v27 + 8) != -1)
                       ? (v29 = v28 == 0)
                       : (v29 = true),
                   v29)) {
    v30 = 0;
  }
  else {
    v30 = *(_QWORD*)(v28 + 8);
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff18,
                                  memory_order_acquire);
  v32 = GameData_212ff10;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212ff18) != 0) {
    *v32 = wld_Crc32(0, "CharacterSelfie", 15);
    __cxa_guard_release(GameData_212ff18);
  }
  v33 = *(_QWORD*)(v30 + 512);
  v34 = v33;
  do {
    v35 = *(_DWORD*)(v34 - 16);
    v34 -= 16;
    v33 -= 16;
  } while (v35 != *v32);
  v36 = *(_QWORD*)(v33 + 8);
  if (v16 <= 0.0f) {
    CharacterSelfie_10a6ac0(*(_QWORD*)(v33 + 8));
  }
  else {
    if (*v4 != 0) {
      v37 = *v4;
      v38 = nn_os_ConvertToTimeSpan(
                *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                           344LL)) /
                1000 -
            *(_QWORD*)(v37 + 136);
      v39 = 1000000.0f;
    }
    else {
      v38 = nn_os_ConvertToTimeSpan(
                *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                           344LL)) /
            1000000;
      v39 = 1000.0f;
    }
    result = v16 + (float)((float)v38 / v39);
    *(float*)(v36 + 144) = result;
  }
  return result;
}

__int64 ActionArts_DeletingDestructor(_QWORD* a1)
{
  *a1 = game_combat_ActionArts_vtable;
  return GameRoutine_1098db0(a1 + 4);
}

__int64 ActionArts_Unknown2(_QWORD* a1)
{
  __int64 v1;

  *a1 = game_combat_ActionArts_vtable;
  GameRoutine_1098db0((__int64)(a1 + 4));
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

__n128 game_combat_ActionArts_OnEnter_lambda0_Invoke(__int64 a1)
{
  __n128 result;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(struct PseudoSret*)(&v3) = GameRoutine_108d740(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 376LL),
      "Btl_Charge_Smoke");
  v2 = v4;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    return std___1___shared_weak_count___release_weak(v2);
  }
  return result;
}

#pragma GCC visibility pop
