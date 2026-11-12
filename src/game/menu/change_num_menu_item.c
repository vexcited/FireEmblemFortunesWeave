#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_15744f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_159e7c0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_212d690;
extern __int64 GameData_2131cb0[36];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e030[4];
__int64 ChangeNumMenuItem_Unknown70(__int64 a1);
__int64 ChangeNumMenuItem_Unknown71(__int64 a1, int a2);
__int64 ChangeNumMenuItem_1711570(__int64 a1);
__int64 ChangeNumMenuItem_17116e0(__int64 a1);
__int64 ChangeNumMenuItem_17117b0(__int64 a1);
__int64 ChangeNumMenuItem_1711830(__int64 a1);
__int64 ChangeNumMenuItem_17119f0(__int64 a1, char a2);
__int64 ChangeNumMenuItem_Unknown72(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64
    ChangeNumMenuItem_17119f0_alt1(_QWORD,
                                   _QWORD) __asm__("ChangeNumMenuItem_17119f0");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 ChangeNumMenuItem_17118b0(_DWORD* a1, char a2);
__int64 ChangeNumMenuItem_1711bd0(_DWORD* a1, char a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameRoutine_1572370_alt1(__int64, char) __asm__("GameRoutine_1572370");
__int64 GameRoutine_157ced0(__int64, unsigned int, char);
__int64 LayoutAccessor_15744f0(__int64, char, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
extern __int64* GameData_212d678[2];
void GameRoutine_159da00(__int64*, unsigned int, unsigned int);
__int64 ChangeNumMenuItem_17110f0(__int64 a1);

__int64 ChangeNumMenuItem_Unknown70(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e030[0], GameData_2131cb0[0], 0);
    if (result != 0) {
      return *(unsigned int*)(result + 1492);
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_Unknown71(__int64 a1, int a2)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212e030[0], GameData_2131cb0[0], 0);
    if (result != 0) {
      *(_DWORD*)(a1 + 288) = *(_DWORD*)(result + 1492);
      *(_DWORD*)(result + 1492) = a2;
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_17110f0(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  signed int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  unsigned int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  struct {
    __int64* v38;
    __int64 v39;
  } v38_;
  struct {
    __int64* v40;
    __int64 v41;
  } v40_;
  struct {
    __int64 v42;
    __int64 v43;
  } v42_;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = *(__int64**)(a1 + 48);
      v4 = result;
      if (v3 == nullptr) {
        goto LABEL_64;
      }
      LayoutAccessor_1560070((void*)(&v42_.v42), *(__int64**)(a1 + 48),
                             "L_Base");
      v5 = v42_.v42;
      result = v42_.v43;
      v6 = *(_QWORD*)(a1 + 208);
      v42_.v42 = 0;
      v42_.v43 = 0;
      *(_QWORD*)(a1 + 200) = v5;
      *(_QWORD*)(a1 + 208) = result;
      if (v6 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v6);
        if (v42_.v43 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v42_.v43);
        }
        result = *(_QWORD*)(a1 + 208);
      }
      if (result == 0) {
        goto LABEL_64;
      }
      result = std___1___shared_weak_count_lock_alt1(result);
      if (result == 0) {
        goto LABEL_64;
      }
      v7 = result;
      if (*(_QWORD*)(a1 + 200) == 0) {
      LABEL_62:
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          result = std___1___shared_weak_count___release_weak_alt1(v7);
        }
      LABEL_64:
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak_alt1(v4);
        }
        return result;
      }
      v8 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
      v10 = *(_QWORD*)(a1 + 200);
      v9 = *(_QWORD*)(a1 + 208);
      v11 = v8;
      if (*(_DWORD*)(a1 + 192) == *(_DWORD*)(a1 + 196)) {
        if (v9 == 0) {
        LABEL_29:
          LayoutAccessor_1560070((void*)(&v42_.v42), v3, "L_Cost");
          v24 = v42_.v42;
          v23 = v42_.v43;
          v25 = *(_QWORD*)(a1 + 224);
          v42_.v42 = 0;
          v42_.v43 = 0;
          *(_QWORD*)(a1 + 216) = v24;
          *(_QWORD*)(a1 + 224) = v23;
          if (v25 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v25);
            if (v42_.v43 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v42_.v43);
            }
            v23 = *(_QWORD*)(a1 + 224);
          }
          if (v23 != 0) {
            v26 = std___1___shared_weak_count_lock_alt1(v23);
            if (v26 != 0) {
              v27 = v26;
              v28 = *(__int64**)(a1 + 216);
              if (v28 != nullptr) {
                v29 = ui_LayoutAccessor_FindPane_alt1(v28, "Icon");
                if (v29 != 0) {
                  v29 = __dynamic_cast(v29, GameData_212d670[0],
                                       GameData_212d678[0], 0);
                }
                GameRoutine_157ced0(v29, 5u, 1);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
                std___1___shared_weak_count___release_weak_alt1(v27);
              }
            }
          }
          v30 = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(a1 + 208));
          LayoutAccessor_1560070((void*)(&v40_.v40), *(__int64**)(a1 + 200),
                                 "L_ArrowL");
          v31 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
              *(_QWORD*)(a1 + 8));
          if (v40_.v41 != 0) {
            v32 = std___1___shared_weak_count_lock_alt1(v40_.v41);
            if (v32 != 0) {
              v33 = v32;
              if (v40_.v40 != nullptr) {
                GameRoutine_159da00(v40_.v40, v31, 0xEu);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
                std___1___shared_weak_count___release_weak_alt1(v33);
              }
            }
            if (v40_.v41 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v40_.v41);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
            std___1___shared_weak_count___release_weak_alt1(v30);
          }
          v34 = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(a1 + 208));
          LayoutAccessor_1560070((void*)(&v38_.v38), *(__int64**)(a1 + 200),
                                 "L_ArrowR");
          v35 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
              *(_QWORD*)(a1 + 8));
          if (v38_.v39 != 0) {
            v36 = std___1___shared_weak_count_lock_alt1(v38_.v39);
            if (v36 != 0) {
              v37 = v36;
              if (v38_.v38 != nullptr) {
                GameRoutine_159da00(v38_.v38, v35, 0xFu);
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
                std___1___shared_weak_count___release_weak_alt1(v37);
              }
            }
            if (v38_.v39 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v38_.v39);
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
            std___1___shared_weak_count___release_weak_alt1(v34);
          }
          result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 576LL))(
              a1, (unsigned int)v11);
          goto LABEL_62;
        }
        v12 = *(_QWORD*)(a1 + 208);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                  memory_order_relaxed);
        v13 = std___1___shared_weak_count_lock_alt1(v12);
        if (v13 == 0) {
        LABEL_28:
          std___1___shared_weak_count___release_weak_alt1(v9);
          goto LABEL_29;
        }
        v14 = v13;
        if (v10 != 0) {
          GameRoutine_1572370_alt1(v10, 0);
        }
      }
      else {
        if (v9 == 0) {
          goto LABEL_29;
        }
        v15 = *(_QWORD*)(a1 + 208);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                  memory_order_relaxed);
        v16 = *(_DWORD*)(a1 + 192);
        v17 = std___1___shared_weak_count_lock_alt1(v15);
        if (v17 != 0) {
          v18 = v17;
          if (v10 != 0) {
            LayoutAccessor_15744f0(v10, 1, v11 > v16);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
            std___1___shared_weak_count___release_weak_alt1(v18);
          }
        }
        std___1___shared_weak_count___release_weak_alt1(v9);
        v9 = *(_QWORD*)(a1 + 208);
        if (v9 == 0) {
          goto LABEL_29;
        }
        v19 = *(_QWORD*)(a1 + 200);
        v20 = *(_QWORD*)(a1 + 208);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                  memory_order_relaxed);
        v21 = *(_DWORD*)(a1 + 196);
        v22 = std___1___shared_weak_count_lock_alt1(v20);
        if (v22 == 0) {
          goto LABEL_28;
        }
        v14 = v22;
        if (v19 != 0) {
          LayoutAccessor_15744f0(v19, 0, v11 < v21);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak_alt1(v14);
      }
      goto LABEL_28;
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_1711570(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  result = (*(__int64 (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  if (*(_DWORD*)(a1 + 192) != *(_DWORD*)(a1 + 196)) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
    v4 = *(_QWORD*)(a1 + 208);
    if (v4 != 0) {
      v5 = *(_QWORD*)(a1 + 200);
      v6 = result;
      v7 = *(_QWORD*)(a1 + 208);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      v8 = *(_DWORD*)(a1 + 192);
      v9 = std___1___shared_weak_count_lock(v7);
      if (v9 != 0) {
        v10 = v9;
        if (v5 != 0) {
          GameRoutine_15744f0(v5, 1, v6 > v8);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          std___1___shared_weak_count___release_weak(v10);
        }
      }
      result = std___1___shared_weak_count___release_weak(v4);
      v11 = *(_QWORD*)(a1 + 208);
      if (v11 != 0) {
        v12 = *(_QWORD*)(a1 + 200);
        v13 = *(_QWORD*)(a1 + 208);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                  memory_order_relaxed);
        v14 = *(_DWORD*)(a1 + 196);
        v15 = std___1___shared_weak_count_lock(v13);
        if (v15 != 0) {
          v16 = v15;
          if (v12 != 0) {
            GameRoutine_15744f0(v12, 0, v6 < v14);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
            std___1___shared_weak_count___release_weak(v16);
          }
        }
        return std___1___shared_weak_count___release_weak(v11);
      }
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_17116e0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  result = (*(__int64 (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  if (*(_DWORD*)(a1 + 192) != *(_DWORD*)(a1 + 196)) {
    v4 = *(_QWORD*)(a1 + 208);
    if (v4 != 0) {
      v5 = *(_QWORD*)(a1 + 200);
      v6 = *(_QWORD*)(a1 + 208);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                memory_order_relaxed);
      v7 = std___1___shared_weak_count_lock(v6);
      if (v7 != 0) {
        v8 = v7;
        if (v5 != 0) {
          GameRoutine_1572370(v5, 0);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
      }
      return std___1___shared_weak_count___release_weak(v4);
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_17117b0(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 208);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = *(_QWORD*)(a1 + 200);
      if (result != 0) {
        result = GameRoutine_1562680(result, "Default", 1.0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_1711830(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 208);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = *(_QWORD*)(a1 + 200);
      if (result != 0) {
        result = GameRoutine_1562680(result, "Select", 1.0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  return result;
}

__int64 ChangeNumMenuItem_17118b0(_DWORD* a1, char a2)
{
  int v5;
  unsigned int v6;
  __int64 v7;
  _QWORD v8[2];
  _BYTE v9[200];

  if (a1[48] == a1[49]) {
    snd_Fade_Fade_10c830(v9, 0.0f);
    snd_play_ff2d0((void*)(v8), "SE_SYS_List_Stop", "SE_SYS_List_Stop", v9, 0,
                   65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v9);
    return 0;
  }
  v5 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 560LL))(a1);
  v6 = a1[49];
  if (v5 >= (int)v6) {
    if ((a2 & 1) == 0) {
      if (a1[72] != v6) {
        snd_Fade_Fade_10c830(v9, 0.0f);
        snd_play_ff2d0((void*)(v8), "SE_SYS_List_Stop", "SE_SYS_List_Stop", v9,
                       0, 65537, 0, 0.0f, 1.0f);
        snd_Fade_Destroy_Fade(v9);
      }
      (*(void (**)(_DWORD*, _QWORD))(*(_QWORD*)a1 + 568LL))(a1, v6);
      return 0;
    }
    v7 = (unsigned int)a1[48];
  }
  else {
    v7 = (unsigned int)(v5 + 1);
  }
  (*(void (**)(_DWORD*, __int64))(*(_QWORD*)a1 + 568LL))(a1, v7);
  ChangeNumMenuItem_17119f0_alt1(a1, 0);
  return 1;
}

__int64 ChangeNumMenuItem_17119f0(__int64 a1, char a2)
{
  signed int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  int v23;
  __int64 v24;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  if (*(_DWORD*)(a1 + 192) != *(_DWORD*)(a1 + 196)) {
    v5 = *(_QWORD*)(a1 + 208);
    if (v5 != 0) {
      v6 = *(_QWORD*)(a1 + 200);
      v7 = *(_QWORD*)(a1 + 208);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
      v8 = std___1___shared_weak_count_lock(v7);
      if (v8 != 0) {
        v9 = v8;
        if (v6 != 0) {
          GameRoutine_159e7c0(v6, a2 & 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
        }
      }
      std___1___shared_weak_count___release_weak(v5);
      v10 = *(_QWORD*)(a1 + 208);
      if (v10 != 0) {
        v11 = *(_QWORD*)(a1 + 200);
        v12 = *(_QWORD*)(a1 + 208);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                  memory_order_relaxed);
        v13 = *(_DWORD*)(a1 + 192);
        v14 = std___1___shared_weak_count_lock(v12);
        if (v14 != 0) {
          v15 = v14;
          if (v11 != 0) {
            GameRoutine_15744f0(v11, 1, v4 > v13);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
            std___1___shared_weak_count___release_weak(v15);
          }
        }
        std___1___shared_weak_count___release_weak(v10);
        v16 = *(_QWORD*)(a1 + 208);
        if (v16 != 0) {
          v17 = *(_QWORD*)(a1 + 200);
          v18 = *(_QWORD*)(a1 + 208);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
          v19 = *(_DWORD*)(a1 + 196);
          v20 = std___1___shared_weak_count_lock(v18);
          if (v20 != 0) {
            v21 = v20;
            if (v17 != 0) {
              GameRoutine_15744f0(v17, 0, v4 < v19);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
              std___1___shared_weak_count___release_weak(v21);
            }
          }
          std___1___shared_weak_count___release_weak(v16);
        }
      }
    }
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 576LL))(a1, (unsigned int)v4);
  result = *(_QWORD*)(a1 + 272);
  if (result != 0) {
    v24 = a1;
    v23 = v4;
    return (*(__int64 (**)(__int64, __int64*, int*))(*(_QWORD*)result + 48LL))(
        result, &v24, &v23);
  }
  return result;
}

__int64 ChangeNumMenuItem_1711bd0(_DWORD* a1, char a2)
{
  unsigned int v2;
  int v5;
  unsigned int v6;
  __int64 v7;
  _QWORD v9[2];
  _BYTE v10[200];

  if (a1[48] != a1[49]) {
    v5 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 560LL))(a1);
    v6 = a1[48];
    if (v5 <= (int)v6) {
      if ((a2 & 1) == 0) {
        if (a1[72] != v6) {
          snd_Fade_Fade_10c830(v10, 0.0f);
          snd_play_ff2d0((void*)(v9), "SE_SYS_List_Stop", "SE_SYS_List_Stop",
                         v10, 0, 65537, 0, 0.0f, 1.0f);
          snd_Fade_Destroy_Fade(v10);
        }
        (*(void (**)(_DWORD*, _QWORD))(*(_QWORD*)a1 + 568LL))(a1, v6);
        return 0;
      }
      v7 = (unsigned int)a1[49];
    }
    else {
      v7 = (unsigned int)(v5 - 1);
    }
    (*(void (**)(_DWORD*, __int64))(*(_QWORD*)a1 + 568LL))(a1, v7);
    v2 = 1;
    ChangeNumMenuItem_17119f0_alt1(a1, 1);
    return v2;
  }
  snd_Fade_Fade_10c830(v10, 0.0f);
  snd_play_ff2d0((void*)(v9), "SE_SYS_List_Stop", "SE_SYS_List_Stop", v10, 0,
                 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v10);
  return 0;
}

__int64 ChangeNumMenuItem_Unknown72(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 224);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = *(_QWORD*)(a1 + 216);
      if (result != 0) {
        result = ui_LayoutAccessor_FindPane(result, "T_Num");
        if (result != 0) {
          result =
              __dynamic_cast(result, GameData_212d670[0], GameData_212d690, 0);
          if (result != 0) {
            result = GameRoutine_156c910(result, "%d", 1);
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
