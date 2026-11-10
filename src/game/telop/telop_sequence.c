#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1374ee0(_QWORD, _QWORD);
__int64 GameRoutine_173fe30(void);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 TelopSequence_1374e00_alt1(_QWORD) __asm__("TelopSequence_1374e00");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 TelopSequence_1374cc0(_BYTE* a1, char a2);
__int64 TelopSequence_1374e00(_BYTE* a1);
__int64 TelopSequence_1375be0(_QWORD* a1);
__attribute__((swiftcall)) void GameRoutine_1366bd0(PSEUDO_X8, __int64, __int64,
                                                    unsigned int*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void
    LayoutAccessor_1560070_alt1(PSEUDO_X8,
                                _QWORD) __asm__("LayoutAccessor_1560070");
__int64 GameRoutine_1553220(__int64 result);
__int64 GameRoutine_173f310(__int64, __int64*, char, __int64, __int64, float);
__int64 LayoutAccessor_155c910(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(_QWORD, _QWORD) __asm__(
    "ui_LayoutAccessor_SetPaneVisible");
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD, long double);
__int64 ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
__n128 GameRoutine_173ff00(__int64, __int64);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 GameData_2259540;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcFadeView_instance_;
void GameRoutine_15e1b80(__int64, unsigned int, unsigned int, unsigned int,
                         __int64);
void LayoutAccessor_1562680(__int64*, __int64, float);
void snd_Fade_Fade_10c830(__int64, float);
__int64 TelopSequence_1374920(__int64* a1);
__n128 TelopSequence_1375430(__int64* a1);
__int64 TelopSequence_13755a0(__int64* a1);
__int64 TelopSequence_1375790(__int64 result);

__int64 TelopSequence_1374920(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 result;
  _QWORD v11[25];

  v2 = (*(__int64 (**)(__int64*))(*a1 + 216))(a1);
  LayoutAccessor_1562680(a1 + 21, v2, 0x1.0000000000000p+0f);
  v4 = a1[46];
  v3 = a1[47];
  while (v4 != v3) {
    if ((*(_BYTE*)v4 & 1) != 0) {
      v5 = *(_QWORD*)(v4 + 16);
    }
    else {
      v5 = v4 + 1;
    }
    if (v5 != 0) {
      snd_Fade_Fade_10c830((__int64)v11, 0x0.0p+0f);
      snd_play_ff2d0(v5, v5, (__int64)v11, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v11);
    }
    v4 += 24;
  }
  v6 = a1[22];
  if (v6 == 0) {
    goto LABEL_15;
  }
  v7 = std___1___shared_weak_count_lock(v6);
  if (v7 == 0) {
    goto LABEL_15;
  }
  v8 = a1[21];
  if (v8 != 0) {
    LODWORD(v3) = *(_DWORD*)(v8 + 2372);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak_alt1();
    if (v8 != 0) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if (v8 == 0) {
  LABEL_15:
    LODWORD(v3) = 0;
  }
LABEL_16:
  v9 = (*(__int64 (**)(__int64*))(*a1 + 144))(a1);
  if (v9 != 5 && GameData_2259540 != 0) {
    GameRoutine_15e1b80(GameData_2259540, v3 - 1, v9, 1u, 0);
  }
  (*(void (**)(__int64*))(*a1 + 336))(a1);
  result = (*(__int64 (**)(__int64*))(*a1 + 312))(a1);
  if (*((_BYTE*)a1 + 820) == 1) {
    result = GameRoutine_1553220(*((unsigned int*)a1 + 204));
    if (*((_BYTE*)a1 + 820) == 1) {
      *((_BYTE*)a1 + 820) = 0;
    }
  }
  return result;
}

__int64 TelopSequence_1374cc0(_BYTE* a1, char a2)
{
  _BYTE* v2;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = a1 + 168;
  v5 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 408LL))(a1);
  GameRoutine_1560070(&v12, v2, v5);
  result = v13;
  if (v13 != 0) {
    v7 = std___1___shared_weak_count_lock(v13);
    if (v7 != 0) {
      v8 = v12;
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v9 = v7;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        std___1___shared_weak_count___release_weak(v9);
      }
      result = v13;
      if (v13 != 0) {
        result = std___1___shared_weak_count___release_weak(v13);
      }
      if (v8 != 0) {
        v10 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 408LL))(a1);
        result = ui_LayoutAccessor_IsPaneVisible(v2, v10);
        if ((a2 & 1) != (result & 1)) {
          LayoutAccessor_155d940(a1 + 440);
          if ((a2 & 1) != 0) {
            TelopSequence_1374e00_alt1(a1);
          }
          else {
            LayoutAccessor_155cda0(a1 + 440, "Out", 0);
            LayoutAccessor_155d940(a1 + 440);
            a1[800] = 0;
          }
          v11 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 408LL))(a1);
          return ui_LayoutAccessor_SetPaneVisible(v2, v11, a2 & 1);
        }
      }
    }
    else {
      result = v13;
      if (v13 != 0) {
        return std___1___shared_weak_count___release_weak(v13);
      }
    }
  }
  return result;
}

__int64 TelopSequence_1374e00(_BYTE* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 408LL))(a1);
  if (result != 0) {
    v3 = result;
    GameRoutine_1560070(&v7, a1 + 168, result);
    result = v8;
    if (v8 != 0) {
      v4 = std___1___shared_weak_count_lock(v8);
      if (v4 != 0) {
        v5 = v7;
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v6 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v6);
        }
        result = v8;
        if (v8 != 0) {
          result = std___1___shared_weak_count___release_weak(v8);
        }
        if (v5 != 0 && (a1[800] & 1) == 0) {
          GameRoutine_1374ee0(a1, v3);
          result = LayoutAccessor_155cda0(a1 + 440, "In", 0);
          a1[800] = 1;
        }
      }
      else {
        result = v8;
        if (v8 != 0) {
          return std___1___shared_weak_count___release_weak(v8);
        }
      }
    }
  }
  return result;
}

__n128 TelopSequence_1375430(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __n128 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  _QWORD v10[2];
  __int64 v11[2];
  struct {
    const char* v12;
    __int64 v13;
  } v12_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = (*(__int64 (**)(__int64*))(*a1 + 432))(a1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v2 != 0) {
    LayoutAccessor_1560070((void*)(&v12_.v12), a1 + 21, v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v12_.v13 != 0) {
      v4 = std___1___shared_weak_count_lock(v12_.v13),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v5 = (__int64)v12_.v12;
      if (v4 != 0) {
        v6 = (__int64)v12_.v12;
      }
      else {
        v6 = 0;
      }
      if (v12_.v13 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1();
      }
      if (v6 != 0) {
        LayoutAccessor_1562cf0(v5, (__int64)"Title_System"),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v11[0] = v6;
        v11[1] = v4;
        if (v4 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                    memory_order_relaxed);
        }
        v12_.v12 = "In_Judege01";
        v12_.v13 = 11;
        v10[0] = "Out";
        v10[1] = 3;
        v7 = GameRoutine_173f310((__int64)a1, v11, 0, (__int64)&v12_.v12,
                                 (__int64)v10, -0x1.0000000000000p+0f),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        a1[99] = v7;
        if (v4 != 0) {
          std___1___shared_weak_count___release_weak_alt1(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v7 = a1[99];
        }
        result = GameRoutine_173ff00(v7, (__int64)"TitleTxt_Judege01");
        v8 = a1[99];
        if ((*(_BYTE*)(v8 + 248) & 1) != 0) {
          *(_QWORD*)(v8 + 256) = 12;
          v9 = *(char**)(v8 + 264);
        }
        else {
          *(_BYTE*)(v8 + 248) = 24;
          v9 = (char*)(v8 + 249);
        }
        strcpy(v9, "TitleTxt_Out");
      }
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(
            v4, *(long double*)&result),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        return std___1___shared_weak_count___release_weak_alt1();
      }
    }
  }
  return result;
}

__int64 TelopSequence_13755a0(__int64* a1)
{
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  (*(void (**)(__int64*))(*a1 + 232))(a1);
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v27 = 0x800000018LL;
  v2 = (*(__int64 (**)(__int64*))(*a1 + 176))(a1);
  v3 = *a1;
  v30 = v2;
  v4 = (*(__int64 (**)(__int64*))(v3 + 184))(a1);
  v5 = *a1;
  v31 = v4;
  v6 = (*(__int64 (**)(__int64*))(v5 + 192))(a1);
  v7 = *a1;
  v28 = v6;
  v8 = (*(__int64 (**)(__int64*))(v7 + 200))(a1);
  v9 = *((_BYTE*)a1 + 272);
  v10 = a1[36];
  v29 = v8;
  if ((v9 & 1) != 0) {
    v11 = v10;
  }
  else {
    v11 = (__int64)a1 + 273;
  }
  if ((a1[37] & 1) != 0) {
    v12 = a1[39];
  }
  else {
    v12 = (__int64)a1 + 297;
  }
  result = X8CALL_X0(__int64, GameRoutine_1366bd0((void*)(&v25), v11, v12,
                                                  (unsigned int*)&v27));
  v14 = v25;
  v15 = v26;
  v16 = a1[20];
  v25 = 0;
  v26 = 0;
  a1[19] = v14;
  a1[20] = v15;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    result = std___1___shared_weak_count___release_weak(v16);
  }
  v17 = v26;
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    result = std___1___shared_weak_count___release_weak(v17);
  }
  v18 = v36;
  if (v36 != 0) {
    v19 = v37;
    v20 = fw_memory_g_heap_manager_ptr;
    if (v36 == v37) {
      goto LABEL_24;
    }
    v21 = v37;
    do {
      v22 = *(_BYTE*)(v21 - 24);
      v21 -= 24;
      if ((v22 & 1) != 0 && *(_QWORD*)(v19 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v23);
      }
      v19 = v21;
    } while (v21 != v18);
    v37 = v18;
    if (v36 != 0) {
    LABEL_24:
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) == 0) {
        v24 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v24);
    }
  }
  return result;
}

__int64 TelopSequence_1375790(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  unsigned __int64 v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[5];

  v4 = *(_QWORD*)(result + 152);
  if (*(_BYTE*)(v4 + 24) != 1) {
    return result;
  }
  v17[2] = v3;
  v17[3] = v1;
  v17[4] = v2;
  v5 = *(_QWORD*)(result + 160);
  v6 = result;
  v17[0] = v4;
  v17[1] = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(result + 168, v17);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(result + 168, v17);
  }
  LayoutAccessor_155e830(v6 + 168, 1);
  if (game_ProcFadeView_instance_ != 0) {
    v8 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160);
    }
    else {
      v7 = *(long double*)(v8 + 208);
    }
    LODWORD(v7) = HIDWORD(v7);
    v9 = 40;
    if (*((float*)&v7 + 3) == 1.0) {
      *(__n128*)&v7 = ((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(
          v8 + 160, *((float*)&v7 + 3));
      LODWORD(v7) = HIDWORD(v7);
      if (*((float*)&v7 + 3) == 1.0) {
        v9 = 1050;
      }
      else {
        v9 = 40;
      }
    }
  }
  else {
    v9 = 40;
  }
  ui_LayoutAccessor_SetPriority(v6 + 168, v9, v7);
  (*(void (**)(__int64))(*(_QWORD*)v6 + 408LL))(v6);
  LayoutAccessor_1560070_alt1((void*)(&v15), v6 + 168);
  if (v16 != 0) {
    v10 = std___1___shared_weak_count_lock(v16);
    v11 = v15;
    if (v16 != 0) {
      std___1___shared_weak_count___release_weak(v16);
    }
    if (v10 != 0 && v11 != 0) {
      LayoutAccessor_155c910(v6 + 440, v11);
      LayoutAccessor_155c910(v6 + 616, v11);
      LayoutAccessor_155cda0(v6 + 616, "Wait", 0);
      goto LABEL_22;
    }
    if (v10 != 0) {
    LABEL_22:
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 408LL))(v6);
  ui_LayoutAccessor_SetPaneVisible_alt1(v6 + 168, v12);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 264LL))(v6);
  v13 = *(unsigned __int8**)(v6 + 16);
  if (v13 != nullptr) {
    v14 = *v13;
    if (v14 <= 0x10 && ((1 << v14) & 0x1CE00) != 0) {
      *(_WORD*)(v6 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v6 + 136) |= 8u;
  return result;
}

__int64 TelopSequence_1375be0(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;

  if (a1[57] != 0) {
    v3 = a1[56];
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 != 0) {
        v5 = a1[55];
        if (v5 != 0) {
          v1 = *(unsigned __int8*)(v5 + 24);
          v6 = v5 + 152;
          if (v1 == 0) {
            v6 = 0;
          }
          v7 = v6 != a1[57];
        }
        else {
          v7 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v7) {
            goto LABEL_11;
          }
        }
        else {
          v9 = v4;
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          std___1___shared_weak_count___release_weak(v9);
          if (v7) {
            goto LABEL_11;
          }
        }
        if ((v1 & 1) == 0) {
          goto LABEL_18;
        }
        goto LABEL_16;
      }
    LABEL_11:
      v8 = a1[56];
      if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
        goto LABEL_18;
      }
    LABEL_16:
      v10 = a1[68];
      if (v10 != 0 && *(float*)(v10 + 60) != 0.0) {
        goto LABEL_20;
      }
    }
  }
LABEL_18:
  v11 = (*(__int64 (**)(_QWORD*))(*a1 + 216LL))(a1);
  if (a1[99] == 0 || (GameRoutine_173fe30() & 1) == 0) {
    v12 = LayoutAccessor_1563280(a1 + 21, v11, 0) ^ 1;
    return v12 & 1;
  }
LABEL_20:
  v12 = 0;
  return v12 & 1;
}

#pragma GCC visibility pop
