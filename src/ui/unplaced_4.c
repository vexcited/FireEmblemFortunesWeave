#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* Troop_133e4e0(__int64);
__attribute__((swiftcall)) void GameRoutine_159e180(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1561f50(__int64*, const char*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Pane_58f8a0(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool GameRoutine_1651fc0(__int64);
char* LayoutAccessor_1562060(char* result, __int64, const char*);
char* game_util_Format(const char*, ...);
extern _BYTE GameData_1bee1cc[80];
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212c790;
extern __int64 GameData_225e7a0;
extern char GameData_1a9f09e;
void GameRoutine_159da00(__int64*, unsigned int, unsigned int);
__int64 ui_1572370(__int64* a1, char a2);
__int64 ui_1685800(__int64* a1, unsigned __int8 a2);
__int64 ui_1839560(__int64 a1, char a2, unsigned int a3);

__int64 ui_1572370(__int64* a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v8;
  __int64 v9;
  _QWORD v10[2];
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  v10[0] = "L_ArrowL";
  v10[1] = 8;
  GameRoutine_159e180((void*)(&v11_.v11), a1, v10);
  if (v11_.v12 != 0) {
    v4 = std___1___shared_weak_count_lock(v11_.v12);
    v5 = v11_.v11;
    if (v11_.v12 != 0) {
      std___1___shared_weak_count___release_weak(v11_.v12);
    }
    if (v4 == 0 || v5 == 0) {
      if (v4 == 0) {
        goto LABEL_12;
      }
    }
    else {
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)v5 + 40LL))(v5, a2 & 1);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
LABEL_12:
  v10[0] = "L_ArrowR";
  v10[1] = 8;
  GameRoutine_159e180((void*)(&v11_.v11), a1, v10);
  result = v11_.v12;
  if (v11_.v12 == 0) {
    return result;
  }
  v8 = std___1___shared_weak_count_lock(v11_.v12);
  v9 = v11_.v11;
  result = v11_.v12;
  if (v11_.v12 != 0) {
    result = std___1___shared_weak_count___release_weak(v11_.v12);
  }
  if (v8 != 0 && v9 != 0) {
    result =
        (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v9 + 40LL))(v9, a2 & 1);
  }
  else if (v8 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

__int64 ui_1685800(__int64* a1, unsigned __int8 a2)
{
  __int64 result;
  __int64* v5;
  __int64 v6;
  _BOOL4 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BOOL4 v22;
  char* v23;
  __int64 v24;
  __int64* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  const char* v38;
  __int64 v39;
  __int64 v40;
  const char* v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  struct {
    __int64* v45;
    __int64 v46;
  } v45_;

  result = a1[4];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = (__int64*)a1[3];
      v6 = result;
      if (v5 == nullptr) {
        goto LABEL_70;
      }
      v7 = (a2 & 1) == 0 && *(_DWORD*)(GameData_225e7a0 + 300) == 1;
      v8 = v7 | a2 & (*((_DWORD*)a1 + 23) != 2);
      if (GameData_1bee1cc[8 * *(int*)(GameData_225e7a0 + 184) + 1] != 1) {
        goto LABEL_22;
      }
      v9 = *a1;
      v10 = *(_QWORD*)(*GameData_212c790 + 8);
      v11 = *(_DWORD*)(v10 + 56);
      v12 = *(__int64**)(v10 + 8);
      v13 = *(__int64**)(v10 + 16);
      if (v11 < 0) {
        if (v12 == v13) {
          goto LABEL_22;
        }
        while (1) {
          v14 = *v12;
          if (*(_QWORD*)(*v12 + 96) == 0 && *(_QWORD*)(v14 + 552) == 0) {
            break;
          }
          if (++v12 == v13) {
            goto LABEL_22;
          }
        }
      }
      else {
        if (v12 == v13) {
          goto LABEL_22;
        }
        while (1) {
          v15 = *v12++;
          v14 = v15;
          if (*(_DWORD*)(v15 + 84) == v11) {
            break;
          }
          if (v12 == v13) {
            goto LABEL_22;
          }
        }
      }
      v16 = *(_DWORD*)(v14 + 540);
      v17 = __OFSUB__(v16, 1);
      v18 = (unsigned int)(v16 - 1);
      if (((v18 & 0x80000000) != 0LL) == v17) {
        v19 = *(_QWORD*)(v14 + 24);
        v20 = *(_QWORD*)(v14 + 32) - v19;
        v21 = v19 + 8LL * (unsigned int)v18;
        if (v18 < v20 >> 3) {
          v14 = v21;
        }
      }
      if (*(_QWORD*)v14 == v9 && *(_QWORD*)(GameData_225e7a0 + 352) != v9) {
        v22 = *(_DWORD*)(GameData_225e7a0 + 300) == 0;
      LABEL_23:
        *((_BYTE*)a1 + 97) = v22;
        if ((v8 | v22) == 0) {
          result = LayoutAccessor_155e830((__int64)v5, 0);
          goto LABEL_70;
        }
        if ((LayoutAccessor_155ea30(v5) & 1) == 0) {
          *((_BYTE*)a1 + 88) = 1;
        }
        LayoutAccessor_155e830((__int64)v5, 1);
        v23 = game_util_Format("L_Unit%02d", *((_DWORD*)a1 + 21));
        LayoutAccessor_1560070((void*)(&v45_.v45), v5, v23);
        result = v45_.v46;
        if (v45_.v46 == 0) {
          goto LABEL_70;
        }
        v24 = std___1___shared_weak_count_lock(v45_.v46);
        v25 = v45_.v45;
        result = v45_.v46;
        if (v45_.v46 != 0) {
          result = std___1___shared_weak_count___release_weak(v45_.v46);
        }
        if (v24 != 0 && v25 != nullptr) {
          v26 = *((_DWORD*)a1 + 23);
          switch (v26) {
          case 2:
            v38 = "TypeEnemy";
            break;
          case 1:
            v38 = "TypeAlly";
            break;
          case 0:
            if ((*((_BYTE*)a1 + 97) & 1) != 0) {
              v27 = a1[7];
              v28 = a1[8];
              if (v28 != v27) {
                v29 = (v28 - v27) >> 4;
                v30 = 0;
                v31 = *GameData_212c790;
                do {
                  v32 = *(_QWORD*)(v31 + 8);
                  v33 = *(_DWORD*)(v32 + 56);
                  v34 = *(__int64**)(v32 + 8);
                  v35 = *(__int64**)(v32 + 16);
                  if (v33 < 0) {
                    for (; v34 != v35; ++v34) {
                      v36 = *v34;
                      if (*(_QWORD*)(*v34 + 96) == 0 &&
                          *(_QWORD*)(v36 + 552) == 0) {
                        goto LABEL_45;
                      }
                    }
                  }
                  else {
                    while (v34 != v35) {
                      v37 = *v34++;
                      v36 = v37;
                      if (*(_DWORD*)(v37 + 84) == v33) {
                        goto LABEL_45;
                      }
                    }
                  }
                  v36 = 0;
                LABEL_45:
                  if (*(_QWORD*)(v27 + 16 * v30 + 8) == v36) {
                    *((_DWORD*)a1 + 20) = v30;
                  }
                  ++v30;
                } while (v30 != v29);
              }
            }
            else {
              v27 = a1[7];
            }
            v39 = v27 + 16LL * *((int*)a1 + 20);
            if (*(_DWORD*)v39 == 1) {
              ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)"Face",
                                               0);
              result = LayoutAccessor_1562cf0((__int64)v25, "TypeAlly");
              goto LABEL_68;
            }
            if (*(_DWORD*)v39 == 0) {
              ui_LayoutAccessor_SetPaneVisible((__int64)v25, (__int64)"Face",
                                               1);
              v40 = *(_QWORD*)(v39 + 8);
              if ((*(_QWORD*)(v40 + 96) | *(_QWORD*)(v40 + 552)) == 0) {
                if (GameRoutine_1651fc0(v40)) {
                  v41 = "StatusPlayer_Fixed";
                }
                else {
                  v41 = "StatusPlayer_Default";
                }
                LayoutAccessor_1562cf0((__int64)v25, v41);
                v42 = LayoutAccessor_1561f50(v25, "Face");
                v43 = Troop_133e4e0(*(_QWORD*)(v39 + 8));
                result = GameHr_1840740(v42, 1u, (__int64)v43, 6u, 1);
                goto LABEL_68;
              }
              LayoutAccessor_1562cf0((__int64)v25, "StatusAlly_Default");
              v44 = LayoutAccessor_1561f50(v25, "Face");
              result = GameHr_1840a20(
                  v44, 1u, *(_QWORD*)(*(_QWORD*)(v39 + 8) + 552LL), 6u, 1);
            }
            goto LABEL_67;
          default:
            goto LABEL_68;
          }
          result = LayoutAccessor_1562cf0((__int64)v25, v38);
          goto LABEL_68;
        }
      LABEL_67:
        if (v24 != 0) {
        LABEL_68:
          if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
            result = std___1___shared_weak_count___release_weak(v24);
          }
        }
      LABEL_70:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          return std___1___shared_weak_count___release_weak(v6);
        }
        return result;
      }
    LABEL_22:
      v22 = false;
      goto LABEL_23;
    }
  }
  return result;
}

__int64 ui_1839560(__int64 a1, char a2, unsigned int a3)
{
  __int64 result;
  __int64 v7;
  __int64* v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v15;
  _BYTE* v16;
  int v17;
  char* v18;
  _BOOL4 v19;
  char v20;
  char* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64* v29;
    __int64 v30;
  } v29_;

  LayoutAccessor_1560070((void*)(&v29_.v29), (__int64*)(a1 + 24), "L_KeyA");
  result = v29_.v30;
  if (v29_.v30 != 0) {
    v7 = std___1___shared_weak_count_lock(v29_.v30);
    v8 = v29_.v29;
    result = v29_.v30;
    if (v29_.v30 != 0) {
      result = std___1___shared_weak_count___release_weak(v29_.v30);
    }
    v9 = v7 == 0 || v8 == nullptr;
    if (v9) {
      if (v7 == 0) {
        return result;
      }
    }
    else {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                memory_order_relaxed);
      v10 = std___1___shared_weak_count_lock(v7);
      if (v10 != 0) {
        v11 = v10;
        GameRoutine_159da00(v8, a3, 0);
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      }
      std___1___shared_weak_count___release_weak(v7);
      v12 = "MID_BtlMenu_Secede";
      switch (a2) {
      case 2:
        v12 = "MID_BtlMenu_Talk";
        break;
      case 4:
        v12 = "MID_BtlMenu_Assist";
        break;
      case 5:
        v12 = "MID_Sys_Singular_Arts";
        break;
      case 6:
        v15 = *(_QWORD*)(a1 + 168);
        if (v15 != 0) {
          v12 = "MID_Sys_Singular_Special";
          if (*(_BYTE*)(v15 + 104) == 3 &&
              ((*(_BYTE*)(v15 + 250) - 33) & 0xFE) == 0) {
            v12 = "MID_BtlMenu_SpecialGauge";
          }
        }
        else {
          v12 = "MID_Sys_Singular_Special";
        }
        break;
      case 8:
        v12 = "MID_BtlMenu_Gambit";
        break;
      case 9:
        v12 = "MID_BtlMenu_Rage";
        break;
      case 16:
        v12 = "MID_BtlMenu_Morph";
        break;
      case 18:
        v16 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)(a1 + 152) + 72LL) + 80LL);
        if (v16 != nullptr) {
          if (*v16 != 0) {
            v12 =
                *(const char**)(*(_QWORD*)(*(_QWORD*)(a1 + 152) + 72LL) + 80LL);
          }
          else {
            v12 = nullptr;
          }
        }
        else {
          v12 = nullptr;
        }
        break;
      case 22:
        break;
      case 24:
        v12 = "MID_BtlMenu_Treasurebox";
        break;
      case 26:
        v13 = (*(__int64 (**)(_QWORD))(
            **(_QWORD**)(*(_QWORD*)(a1 + 152) + 808LL) + 224LL))(
            *(_QWORD*)(*(_QWORD*)(a1 + 152) + 808LL));
        v14 = *(_BYTE**)(v13 + 200);
        v12 = &GameData_1a9f09e;
        if (v14 != nullptr && *v14 != 0) {
          v12 = *(const char**)(v13 + 200);
        }
        break;
      case 27:
        v12 = "MID_BtlMenu_Cannon";
        break;
      case 28:
        v12 = "MID_BtlMenu_Warp";
        break;
      default:
        v12 = "MID_BtlMenu_Attack";
        break;
      }
      LayoutAccessor_1562060((char*)v8, (__int64)"T_Key_Txt", v12);
      v17 = *(unsigned __int8*)(a1 + 192);
      v18 = (char*)GameData_212da30;
      v19 = a2 == 5;
      v20 = v19 & v17;
      v9 = (v19 & v17) == 0;
      v21 = (char*)GameData_212da30 + 36;
      if (!v9) {
        v21 = (char*)GameData_212da30 + 72;
      }
      v22 = *(_DWORD*)v21;
      v23 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Key");
      if (v23 != 0) {
        v24 = Pane_58f8a0(v23);
        if (v24 != 0) {
          *(_DWORD*)(v24 + 12) = v22;
        }
      }
      v25 = 36;
      if ((v20 & 1) != 0) {
        v25 = 72;
      }
      v26 = *(_DWORD*)&v18[v25];
      v27 = ui_LayoutAccessor_FindTextBox(v8, (__int64)"T_Key_Txt");
      if (v27 != 0) {
        v28 = Pane_58f8a0(v27);
        if (v28 != 0) {
          *(_DWORD*)(v28 + 12) = v26;
        }
      }
      result = ui_LayoutAccessor_FindAlignment(v8, "A_Key");
      if (result != 0) {
        result = Alignment_56b600(result);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      return std___1___shared_weak_count___release_weak(v7);
    }
  }
  return result;
}

#pragma GCC visibility pop
