#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18a7ae0(__int64, unsigned int*, __int64, char, int, __int64,
                            char);
__int64 GameRoutine_18ab530(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21f1e08;
__attribute__((swiftcall)) void
MenuItemMorphName_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2);
__int64 AsyncLoadThumbImage_1899d60(__int64, __int64);
__int64 Element_18863e0(__int64, const char**, char);
__int64 MenuItemSkill_189a700(__int64);
__int64 MenuItem_188bf10(__int64, _BYTE*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d890[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
void GameRoutine_156c5d0(__int64, __int64, char);
void MenuItemSkill_1899480(__int64, unsigned int, char, char);
_QWORD* MenuItemMorphName_18bb1d0(__int64 a1);

_QWORD* MenuItemMorphName_18bb1d0(__int64 a1)
{
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  _BYTE* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22[4];
  struct {
    const char* v23[2];
    unsigned __int64 v24;
    unsigned __int64 v25;
    int v26;
    int v27;
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
  } v23_;

  result = *(_QWORD**)(a1 + 16);
  if (result != nullptr) {
    result = (_QWORD*)std___1___shared_weak_count_lock_alt1((__int64)result);
    if (result != nullptr) {
      v3 = *(_QWORD*)(a1 + 8);
      v4 = (__int64)result;
      if (v3 == 0) {
        goto LABEL_27;
      }
      v5 = *(_DWORD*)(a1 + 24);
      v6 = v5 & 0xFFF;
      if ((v5 & 0xFFF) != 0) {
        v7 = (v5 >> 19) & 0x1F;
        v8 = (v5 >> 12) & 0x7F;
        v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8 * v6);
        v10 = *(unsigned __int8*)(v9 + 104);
        v11 = *(unsigned __int8*)(v9 + 273);
        if ((unsigned int)(v10 - 5) >= 2) {
          v12 = 0;
        }
        else {
          v12 = v7;
        }
        MenuItemSkill_1899480(*(_QWORD*)(a1 + 8), *(_DWORD*)(a1 + 48),
                              v12 - v8 + v11 < 1, v12 - v8 + v11 < 1);
        v13 = *(_DWORD*)(a1 + 24);
        if ((*(_BYTE*)(v3 + 1080) & 1) == 0) {
          *(_BYTE*)(v3 + 1080) = 1;
        }
        *(_DWORD*)(v3 + 1076) = v13;
        v23_.v24 = 0;
        v23_.v23[0] = (const char*)(GameData_212d890[0] + 2);
        LODWORD(v23_.v23[1]) = 20;
        result = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                        PSEUDO_X8, __int64, const char**))(
                                        *(_QWORD*)(v3 + 72) + 16LL))(
                                        (void*)v22, v3 + 72, v23_.v23));
        goto LABEL_27;
      }
      if (*(_QWORD*)(a1 + 32) == 0) {
        result = *(_QWORD**)(a1 + 16);
        if (result != nullptr) {
          result =
              (_QWORD*)std___1___shared_weak_count_lock_alt1((__int64)result);
          if (result != nullptr) {
            v18 = *(_QWORD*)(a1 + 8);
            v19 = (__int64)result;
            if (v18 != 0) {
              MenuItemSkill_1899480(*(_QWORD*)(a1 + 8), *(_DWORD*)(a1 + 48), 0,
                                    0);
              *(_BYTE*)(v18 + 1072) = 9;
              MenuItemSkill_189a700(v18);
              MenuItem_188bf10(v18, "MID_Sys_Empty");
              v20 = *(_QWORD*)(v18 + 1032);
              if (v20 != 0) {
                *(_BYTE*)(v20 + 88) |= 1u;
              }
              v23_.v23[0] = "NumNone";
              v23_.v23[1] = (_BYTE*)((_UNKNOWN*)0x7LL);
              result = (_QWORD*)Element_18863e0(v18, v23_.v23, 1);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
              result =
                  (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v19);
            }
          }
        }
        goto LABEL_27;
      }
      MenuItemSkill_1899480(*(_QWORD*)(a1 + 8), *(_DWORD*)(a1 + 48), 0, 0);
      *(_BYTE*)(v3 + 1072) = 9;
      AsyncLoadThumbImage_1899d60(
          v3, *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                         8LL * *(int*)((char*)((_UNKNOWN*)0x114LL) +
                                       game_g_shared_system_skills_ptr)));
      v14 = *(_BYTE**)(*(_QWORD*)(a1 + 32) + 32LL);
      if (v14 != nullptr) {
        v23_.v28 = -1;
        v23_.v29 = -1;
        v23_.v30 = -1;
        v23_.v31 = -1;
        v15 = *msg_MessageManager_instance__ptr[0];
        v23_.v32 = -1;
        v23_.v33 = -1;
        v23_.v34 = -1;
        v23_.v35 = -1;
        v23_.v36 = -1;
        v23_.v37 = -1;
        v23_.v38 = -1;
        v23_.v23[0] = (const char*)(GameData_212e348 + 2);
        v23_.v23[1] = (const char*)0xFFFF0001FFFF0000LL;
        v23_.v24 = 0xFFFF0004FFFF0002LL;
        v23_.v25 = 0xFFFF0006FFFF0005LL;
        v23_.v39 = -1;
        v23_.v40 = 8;
        v23_.v26 = -65529;
        v23_.v27 = -65528;
        v16 = GameRoutine_a4dbe0(v15, v14, 0);
        v17 = *(_QWORD*)(v3 + 1032);
        if (v17 == 0) {
          goto LABEL_26;
        }
      }
      else {
        v16 = &GameData_1a9f09e;
        v17 = *(_QWORD*)(v3 + 1032);
        if (v17 == 0) {
        LABEL_26:
          *(_BYTE*)(v3 + 1108) = 1;
          v23_.v23[0] = "NumNone";
          v23_.v23[1] = (_BYTE*)((_UNKNOWN*)0x7LL);
          result = (_QWORD*)Element_18863e0(v3, v23_.v23, 1);
        LABEL_27:
          if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
            return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v4);
          }
          return result;
        }
      }
      GameRoutine_156c5d0(v17, (__int64)v16, 0);
      v21 = *(_QWORD*)(v3 + 1032);
      if (v21 != 0) {
        *(_BYTE*)(v21 + 88) |= 1u;
      }
      goto LABEL_26;
    }
  }
  return result;
}

__attribute__((swiftcall)) void

MenuItemMorphName_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _DWORD* v7;
  __int64 v8;
  __int64 v9;

  if (*(_DWORD*)(a2 + 8) != 45) {
    goto LABEL_14;
  }
  if (GameData_21f1e08 == 0) {
    goto LABEL_14;
  }
  v3 = *(_QWORD*)(GameData_21f1e08 + 144);
  if (v3 == 0) {
    goto LABEL_14;
  }
  v4 = *(_QWORD*)(GameData_21f1e08 + 136);
  v5 = result;
  v6 = *(_QWORD*)(GameData_21f1e08 + 144);
  v7 = a3;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v8 = std___1___shared_weak_count_lock(v6);
  result = std___1___shared_weak_count___release_weak(v3);
  a3 = v7;
  if (v8 != 0) {
    if (v4 != 0) {
      if ((*(_WORD*)(v5 + 24) & 0xFFF) != 0 &&
          (v9 = *(_QWORD*)(v5 + 40)) != 0) {
        result =
            GameRoutine_18a7ae0(v4, (unsigned int*)(v5 + 24), v9, 0, 0, 0, 0);
      }
      else {
        if (*(_QWORD*)(v5 + 32) == 0) {
          goto LABEL_12;
        }
        result = GameRoutine_18ab530(v4);
      }
      a3 = v7;
    }
  LABEL_12:
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      result = std___1___shared_weak_count___release_weak(v8);
      a3 = v7;
    }
  }
LABEL_14:
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
