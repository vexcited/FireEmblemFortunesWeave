#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CharacterRotate_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
struct PseudoSret GameRoutine_d56a60(_QWORD, _QWORD, _QWORD, float);
__int64 CharacterRotate_Destructor(_QWORD* a1);

__int64 CharacterRotate_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[25];

  *a1 = game_zview_CharacterRotate_vtable;
  v2 = *(_QWORD*)(*(_QWORD*)(a1[1] + 8LL) + 40LL);
  if ((snd_fnd_WeakHandle_isValid(a1 + 15) & 1) != 0) {
    v3 = snd_fnd_WeakHandle_get(a1 + 15);
    snd_Fade_Fade_10c910(v17, 100);
    (*(void (**)(__int64, _QWORD*, _QWORD, double))(
        *(_QWORD*)(v3 - 5592) + 248LL))(v3 - 5592, v17, 0, 0.0);
    snd_Fade_Destroy_Fade(v17);
    *(struct PseudoSret*)(v17) =
        GameRoutine_d56a60(v2, "SE_FS_Add_Orhel_Sprint_StepNoise_End", 36, 1.0);
  }
  v4 = a1[43];
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[44] = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7, v4);
  }
  result = a1[26];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v9 = a1[24];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
  v10 = (__int64*)a1[11];
  a1[11] = 0;
  if (v10 != nullptr) {
    v11 = *v10;
    if (*v10 != 0) {
      v12 = v10[1];
      if (v11 == v12) {
        goto LABEL_21;
      }
      do {
        v13 = *(_QWORD*)(v12 - 8);
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
        v12 -= 16;
      } while (v12 != v11);
      v14 = *v10;
      v10[1] = v11;
      v11 = v14;
      if (v14 != 0) {
      LABEL_21:
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v15, v11);
      }
    }
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v16, v10);
  }
  return result;
}

#pragma GCC visibility pop
