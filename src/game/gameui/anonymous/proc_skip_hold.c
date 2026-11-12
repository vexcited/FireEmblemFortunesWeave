#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155ca60(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gameui_anonymous_ProcSkipHold_vtable[])();
extern __int64 GameData_22632e0;
__int64
ProcSkipHold_Destructor_alt1(__int64 a1) __asm__("ProcSkipHold_Destructor");
__int64* game_8224a0(unsigned __int8);
__int64 GameRoutine_155dbf0(float*);
__int64 LayoutAccessor_155cda0(__int64 result, const char*, const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
double game_868350();
extern __int64 GameData_2258178;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
float GameRoutine_155db10(__int64*);
void GameRoutine_159da00(__int64*, unsigned int, unsigned int);
void ProcSkipHold_Unknown2(__int64 a1);
__int64 LayoutAccessor_155ca60(__int64);
__int64 LayoutAccessor_155e140(__int64*);
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
void GameRoutine_1563f90_alt1(__int64, __int64) __asm__("GameRoutine_1563f90");
void GameRoutine_1564060_alt1(__int64*) __asm__("GameRoutine_1564060");
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void ProcSkipHold_Destructor(__int64 a1);

void ProcSkipHold_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_gameui_anonymous_ProcSkipHold_vtable;
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  LayoutAccessor_155e140((__int64*)(a1 + 168));
  LayoutAccessor_155ca60(a1 + 448);
  LayoutAccessor_155ca60(a1 + 272);
  LayoutAccessor_155e140((__int64*)(a1 + 168));
  v4 = *(_QWORD*)(a1 + 264);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
  }
  GameRoutine_1564060_alt1((__int64*)(a1 + 216));
  GameRoutine_1563f90_alt1(a1 + 192, *(_QWORD*)(a1 + 200));
  v5 = *(_QWORD*)(a1 + 176);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = *(_QWORD*)(a1 + 160);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  GameData_22632e0 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

void ProcSkipHold_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  int v2;
  __int64* v4;
  __int64 v5;
  double v7;
  __int64 v8;
  unsigned int v9;
  double v10;
  float v11;
  float v12;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BOOL4 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  const char* v24;

  v2 = *(_DWORD*)(a1 + 624);
  if (v2 == 2) {
    if ((GameRoutine_155dbf0((float*)(a1 + 272)) & 1) == 0) {
      return;
    }
    goto LABEL_26;
  }
  if (v2 != 1) {
    if (v2 == 0) {
      v4 = game_8224a0(0x19u);
      if (game_GameModeData_instance_ != 0) {
        v5 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v4);
        if (v5 != 0 && *(_DWORD*)(v5 + 32) == 1 &&
            game_ProcGameSkipView_instance_ != 0 &&
            (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 1) == 0 &&
            ((unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                               152) -
                     1 >
                 2 ||
             (*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0)) {
          v7 = game_868350();
          if (*(float*)&v7 > 0x0.0p+0f) {
            ++*(_DWORD*)(a1 + 624);
            if (GameData_2258178 != 0 &&
                (v8 = *(_QWORD*)(GameData_2258178 + 192)) != 0) {
              v9 = *(
                  _DWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_2258178 + 160) +
                                      8 * ((unsigned __int64)(v8 +
                                                              *(_QWORD*)(GameData_2258178 +
                                                                         184) -
                                                              1) >>
                                           10)) +
                           4 * ((v8 + *(_QWORD*)(GameData_2258178 + 184) - 1) &
                                0x3FF));
            }
            else {
              v9 = 0;
            }
            GameRoutine_159da00((__int64*)(a1 + 168), v9, 0xBu);
            LayoutAccessor_155e830(a1 + 168, 1);
            v24 = "In";
            goto LABEL_46;
          }
        }
      }
    }
    return;
  }
  v10 = game_868350();
  if (*(float*)&v10 <= 0x0.0p+0f) {
  LABEL_26:
    *(_DWORD*)(a1 + 624) = 0;
    LayoutAccessor_155e830(a1 + 168, 0);
    return;
  }
  v11 = *(float*)&v10;
  v12 = GameRoutine_155db10((__int64*)(a1 + 448));
  if (*(_QWORD*)(a1 + 464) == 0) {
    goto LABEL_37;
  }
  v13 = *(_QWORD*)(a1 + 456);
  if (v13 == 0) {
    goto LABEL_37;
  }
  v14 = v12;
  v15 = std___1___shared_weak_count_lock(v13);
  if (v15 == 0) {
    goto LABEL_31;
  }
  v16 = *(_QWORD*)(a1 + 448);
  if (v16 != 0) {
    v1 = *(unsigned __int8*)(v16 + 24);
    v17 = v16 + 152;
    if (v1 == 0) {
      v17 = 0;
    }
    v18 = v17 != *(_QWORD*)(a1 + 464);
  }
  else {
    v18 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v19 = v15;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
  if (!v18) {
    if ((v1 & 1) == 0) {
      goto LABEL_37;
    }
  }
  else {
  LABEL_31:
    v20 = *(_QWORD*)(a1 + 456);
    if (v20 == 0 || *(_QWORD*)(v20 + 8) == -1) {
      goto LABEL_37;
    }
  }
  v21 = *(_QWORD*)(a1 + 552);
  if (v21 != 0) {
    *(float*)(v21 + 32) = v11 * v14;
  }
LABEL_37:
  if (v11 >= 0x1.0000000000000p+0f ||
      game_ProcGameSkipView_instance_ != 0 &&
          (unsigned int)*(unsigned __int8*)(game_ProcGameSkipView_instance_ +
                                            152) -
                  1 <=
              2 &&
          (((v22 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v23 = 2)
               : (v23 = 3),
           (v23 & v22) == 0)) {
    v24 = "Out";
    ++*(_DWORD*)(a1 + 624);
  LABEL_46:
    LayoutAccessor_155cda0(a1 + 272, v24, nullptr);
  }
}

#pragma GCC visibility pop
