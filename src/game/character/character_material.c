#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_bd7800(void);
__int64 GameRoutine_bd7d60(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterMaterial_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CharacterMaterial_bd7600(_QWORD* result);
__int64 CharacterMaterial_Unknown7(__int64 a1);
__int64 CharacterMaterial_DeletingDestructor(_QWORD* a1);

_QWORD* CharacterMaterial_bd7600(_QWORD* result)
{
  double v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* i;
  __int64 v12;
  __int64* v13;
  __int64* j;
  __int64 v15;

  v2 = result[32];
  v3 = result;
  v4 = *(_QWORD*)(result[30] + 24LL);
  if (v2 != 0) {
    v5 = *(__int64**)(v4 + 312);
    v6 = *(__int64**)(v4 + 320);
    if (v5 == v6) {
      goto LABEL_6;
    }
    do {
      v7 = *v5;
      v5 += 2;
      result = (_QWORD*)(*(__int64 (**)(__int64, const char*, __int64,
                                        long double))(*(_QWORD*)v7 + 32LL))(
          v7, "HeadJointPos", 12, *(long double*)(v2 + 208));
    } while (v5 != v6);
    if (v3[32] != 0) {
      v5 = *(__int64**)(v4 + 312);
    LABEL_6:
      v8 = v3[33];
      if (v8 != 0) {
        v9 = *(__int64**)(v4 + 320);
        if (v5 != v9) {
          LODWORD(v1) = *(_DWORD*)(v8 + 212);
          do {
            v10 = *v5;
            v5 += 2;
            result = (_QWORD*)(*(__int64 (**)(__int64, const char*, __int64,
                                              double))(*(_QWORD*)v10 + 24LL))(
                v10, "RimBiasParams", 13, v1);
          } while (v5 != v9);
        }
        return result;
      }
      goto LABEL_13;
    }
  LABEL_12:
    v5 = *(__int64**)(v4 + 312);
  LABEL_13:
    for (i = *(__int64**)(v4 + 320); v5 != i;
         result =
             (_QWORD*)(*(__int64 (**)(__int64, const char*, __int64, double))(
                 *(_QWORD*)v12 + 16LL))(v12, "RimBiasEnabled", 14, 0.0)) {
      v12 = *v5;
      v5 += 2;
    }
    return result;
  }
  if (result[33] != 0) {
    goto LABEL_12;
  }
  v13 = *(__int64**)(v4 + 312);
  for (j = *(__int64**)(v4 + 320); v13 != j;
       result =
           (_QWORD*)(*(__int64 (**)(__int64, const char*, __int64, double))(
               *(_QWORD*)v15 + 16LL))(v15, "RimBiasEnabled", 14, 0.0)) {
    v15 = *v13;
    v13 += 2;
  }
  return result;
}

__int64 CharacterMaterial_Unknown7(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  float v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;

  GameRoutine_bd7800();
  v2 = *(_QWORD*)(a1 + 264);
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 240) + 24LL);
  if (v2 != 0) {
    v4 = *(float*)(v2 + 212);
  }
  else {
    v4 = 0.0;
  }
  v5 = *(__int64**)(v3 + 312);
  v6 = *(__int64**)(v3 + 320);
  while (v5 != v6) {
    v7 = *v5;
    v5 += 2;
    (*(void (**)(__int64, const char*, __int64, float))(*(_QWORD*)v7 + 16LL))(
        v7, "RootPositionY", 13, v4);
  }
  return GameRoutine_bd7d60(a1);
}

__int64 CharacterMaterial_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *a1 = game_character_CharacterMaterial_vtable;
  v2 = a1[28];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = a1[16];
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = a1[6];
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[7] = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
}

#pragma GCC visibility pop
