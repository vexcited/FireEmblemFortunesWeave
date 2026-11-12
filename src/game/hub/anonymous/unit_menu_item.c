#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_anonymous_FastTravelMenuItem_vtable[])();
extern __int64 (*game_hub_anonymous_UnitMenuItem_vtable[])();
extern __int64 (*game_menu_BasicMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 UnitMenuItem_Destructor(__int64 a1);
_QWORD* GameRoutine_169a430(__int64, char*);
__int64 UnitMenuItem_ACall(_QWORD* a1);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
double ui_LayoutAccessor_GetPaneTranslate(__int64*, const char*);
extern __int64 ui_LayoutAccessor_empty_;
float ui_LayoutAccessor_GetPaneSize(__int64*, const char*);
void UnitMenuItem_Unknown17(__int64 a1);

__int64 UnitMenuItem_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_hub_anonymous_UnitMenuItem_vtable;
  if (*(_QWORD*)(a1 + 120) != 0) {
    *(_QWORD*)(a1 + 120) = 0;
  }
  v2 = *(_QWORD*)(a1 + 144);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)a1 = game_hub_anonymous_FastTravelMenuItem_vtable;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  result = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_BasicMenuItem_vtable;
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v5);
    }
  }
  return result;
}

void UnitMenuItem_Unknown17(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64* v7;
  int v8;
  double v9;
  int v10;
  int v11;
  __int64* v12;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s2", "=w")),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((*(_BYTE*)(a1 + 152) & 1) == 0) {
    *(_BYTE*)(a1 + 152) = 1;
    v2 = *(_QWORD*)(a1 + 56);
    if (v2 != 0) {
      v3 = std___1___shared_weak_count_lock(v2),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s2", "=w")),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v3 != 0) {
        v4 = v3;
        v5 = (atomic_ullong*)(v3 + 8);
        v6 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v6 != nullptr) {
          LABEL_7:
            v7 = LayoutAccessor_155fbe0(v6, "L_State"),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s2", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
            *(float*)(a1 + 156) = ui_LayoutAccessor_GetPaneSize(v7, "Bg"),
                           v10 = COERCE_AS(__typeof__(v10),
                                           PSEUDO_REGISTER(float, "s1", "=w")),
                           v11 = COERCE_AS(__typeof__(v11),
                                           PSEUDO_REGISTER(float, "s2", "=w")),
                           v8 = COERCE_AS(__typeof__(v8),
                                          PSEUDO_REGISTER(float, "s1", "=w"));
            *(_DWORD*)(a1 + 160) = v8;
            v9 = ui_LayoutAccessor_GetPaneTranslate(v7, "T_TxtState"),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(float, "s1", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s2", "=w")),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
            *(_DWORD*)(a1 + 164) = LODWORD(v9);
            *(_DWORD*)(a1 + 168) = v10;
            *(_DWORD*)(a1 + 172) = v11;
            return;
          }
        }
        else {
          v12 = v6;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v4),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(float, "s2", "=w")),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s1", "=w"));
          v6 = v12;
          if (v12 != nullptr) {
            goto LABEL_7;
          }
        }
      }
    }
    v6 = &ui_LayoutAccessor_empty_;
    goto LABEL_7;
  }
}

__int64 UnitMenuItem_ACall(_QWORD* a1)
{
  char v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  struct {
    _QWORD v7[2];
    char v8;
  } v7_;

  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  result = 1;
  if ((v2 & 1) != 0) {
    v4 = a1[17];
    v7_.v8 = 1;
    v6 = *(_QWORD*)(v4 + 48);
    v5 = *(_QWORD*)(v4 + 56);
    v7_.v7[0] = v6;
    v7_.v7[1] = v5;
    GameRoutine_169a430((__int64)a1, (char*)v7_.v7);
    return 12;
  }
  return result;
}

#pragma GCC visibility pop
