#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 DrawInfo_576a40(_QWORD, _QWORD, _QWORD);
__int64 DynamicRenderingTexture_575e40(_QWORD);
__int64 DynamicRenderingTexture_576440(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5716e0(_QWORD, _QWORD);
__int64 GameRoutine_5764b0(_QWORD, _QWORD);
__int64 GameRoutine_576a20(_QWORD, _QWORD);
__int64 GameRoutine_577d40(_QWORD, _QWORD);
__int64 GameRoutine_5791a0(__int64);
__int64 GameRoutine_5876c0(_QWORD, _QWORD);
__int64 GameRoutine_5892c0(_QWORD, _QWORD);
__int64 GameRoutine_58a130(_QWORD, _QWORD);
__int64 GameRoutine_58aa70(__int64 result, __int64, __int64);
__int64 GameRoutine_58bda0(_QWORD, _QWORD);
__int64 GameRoutine_58c1e0(__int64, __int64, __int64);
__int64 GameRoutine_58c380(__int64, __int64, __int64);
__int64 GameRoutine_58c400(__int64 result, __int64, __int64);
__int64 GameRoutine_58c480(__int64 result, __int64, __int64);
__int64 GameRoutine_58c720(__int64, __int64, __int64);
__int64 GameRoutine_58c810(_QWORD, _QWORD);
__int64 GameRoutine_58c820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58e740(void);
__int64 GameRoutine_58fe20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_58ffc0(_QWORD, _QWORD);
__int64 GameRoutine_5ae2f0(__int64 result);
__int64 GameRoutine_5af420(_QWORD, _QWORD);
__int64 GameRoutine_5af7e0(_QWORD, _QWORD);
__int64 GameRoutine_5afb30(_QWORD, _QWORD);
__int64 GameRoutine_5fcd30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe120(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 Material_5882b0(__int64, __int64);
__int64 Pane_58dc00(__int64 result, __int64);
__int64 Pane_58fd20(_QWORD);
__int64 Pane_58fef0(_QWORD, _QWORD);
__int64 Pane_590280(__int64, __int64, __int64);
extern _DWORD GameData_1b14170[3];
__int64 Window_Unknown3(__int64 a1, __int64 a2);
__int64 Window_Unknown4(__int64 a1, int a2);
__int64 Window_Unknown5(__int64 result, int a2, _DWORD* a3);
__int64 Window_Unknown10(__int64 a1);
__int64 Window_Unknown11(__int64 a1, int a2);
__int64 Window_Unknown17(__int64 a1, __int64 a2, char a3);
__int64 Window_Unknown26(__int64 a1, _QWORD* a2);
__int64 Window_5afc20(__int64 result, __int64 a2, __int64 a3);
__int64 Window_5afee0(__int64 result, __int64 a2, __int64 a3);
__int64 Window_Unknown28(__int64 result, __int64 a2, __int64 a3);
__int64 GameRoutine_58c850(void);
extern __int64 (*nn_ui2d_Window_vtable[])();
__int64 Window_Destructor(_QWORD* a1);

__int64 Window_Destructor(_QWORD* a1)
{
  *a1 = nn_ui2d_Window_vtable;
  return GameRoutine_58c850();
}

__int64 Window_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void (***v12)(_QWORD);

  Pane_58dc00(a1, a2);
  v4 = *(_QWORD*)(a1 + 288);
  if (v4 != 0) {
    GameRoutine_5791a0(v4);
  }
  LODWORD(v5) = *(char*)(a1 + 265);
  if ((int)v5 >= 1) {
    v6 = 8;
    v7 = 0;
    do {
      Material_5882b0(*(_QWORD*)(*(_QWORD*)(a1 + 272) + v6), a2);
      v5 = *(char*)(a1 + 265);
      ++v7;
      v6 += 16;
    } while (v7 < v5);
  }
  v8 = *(_QWORD*)(a1 + 272);
  if (v8 != 0) {
    v9 = (char)v5;
    if ((char)v5 >= 1) {
      v10 = *(_QWORD*)(a1 + 272);
      do {
        GameRoutine_5ae2f0(v10);
        --v9;
        v10 += 16;
      } while (v9 != 0);
    }
    GameRoutine_5791a0(v8);
  }
  v11 = *(_QWORD*)(a1 + 280);
  if (v11 != 0 && (*(_BYTE*)(v11 + 73) & 1) == 0) {
    Material_5882b0(v11, a2);
    v12 = *(void (****)(_QWORD))(a1 + 280);
    if (v12 != nullptr) {
      (**v12)(*(_QWORD*)(a1 + 280));
      GameRoutine_5791a0((__int64)v12);
    }
  }
  *(_QWORD*)(a1 + 280) = 0;
  return DynamicRenderingTexture_575e40(a1 + 248);
}

__int64 Window_Unknown4(__int64 a1, int a2)
{
  return *(unsigned int*)(a1 + 4LL * a2 + 232);
}

__int64 Window_Unknown5(__int64 result, int a2, _DWORD* a3)
{
  *(_DWORD*)(result + 4LL * a2 + 232) = *a3;
  return result;
}

__int64 Window_Unknown10(__int64 a1)
{
  return (unsigned int)*(unsigned __int8*)(a1 + 265) + 1;
}

__int64 Window_Unknown11(__int64 a1, int a2)
{
  (*(void (**)(__int64))(*(_QWORD*)a1 + 80LL))(a1);
  if (a2 == 0) {
    return *(_QWORD*)(a1 + 280);
  }
  if (a2 <= *(char*)(a1 + 265)) {
    return *(_QWORD*)(*(_QWORD*)(a1 + 272) + 16LL * (unsigned int)(a2 - 1) + 8);
  }
  return 0;
}

__int64 Window_Unknown17(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v3 = *(_QWORD*)(a1 + 280);
  if (v3 != 0 && (GameRoutine_5716e0(*(_QWORD*)(v3 + 40), a2) & 1) != 0) {
    return *(_QWORD*)(a1 + 280);
  }
  if (*(char*)(a1 + 265) < 1) {
  LABEL_9:
    if ((a3 & 1) == 0) {
      return 0;
    }
    v10 = a1 + 32;
    v11 = *(_QWORD*)(a1 + 40);
    if (v11 == v10) {
      return 0;
    }
    else {
      while (1) {
        result = (*(__int64 (**)(__int64, __int64, __int64))(
            *(_QWORD*)(v11 - 8) + 136LL))(v11 - 8, a2, 1);
        if (result != 0) {
          break;
        }
        v11 = *(_QWORD*)(v11 + 8);
        if (v11 == v10) {
          return 0;
        }
      }
    }
  }
  else {
    v8 = 0;
    v9 = 8;
    while ((GameRoutine_5716e0(
                *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 272) + v9) + 40LL), a2) &
            1) == 0) {
      ++v8;
      v9 += 16;
      if (v8 >= *(char*)(a1 + 265)) {
        goto LABEL_9;
      }
    }
    return *(_QWORD*)(*(_QWORD*)(a1 + 272) + v9);
  }
  return result;
}

__int64 Window_Unknown26(__int64 a1, _QWORD* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  unsigned __int64 v18;
  __int128 v19;
  __int64 v20;
  __int128 v21;
  __int128 v22;
  _OWORD* v23;
  __int128 v24;
  __int128 v25;
  __int64 (*v26)(_QWORD*, __int64, _QWORD);
  unsigned int v27;
  __int64 v28;
  unsigned __int64* v29;
  unsigned __int64* v30;
  __int64 v31;
  unsigned __int64* v32;
  unsigned __int64* v33;
  unsigned __int64* v34;
  __int128 v35;
  __int128 v36;
  __int128 v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;

  GameRoutine_58e740();
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)a1 + 248LL))(a1, a2);
  result = Pane_58fd20(a1);
  if ((result & 1) != 0) {
    return result;
  }
  GameRoutine_58bda0(*(_QWORD*)(a1 + 280), a2);
  GameRoutine_5876c0(*(_QWORD*)(a1 + 280), a2);
  if (*(char*)(a1 + 265) >= 1) {
    v5 = 8;
    v6 = 0;
    do {
      GameRoutine_58bda0(*(_QWORD*)(*(_QWORD*)(a1 + 272) + v5), a2);
      GameRoutine_5876c0(*(_QWORD*)(*(_QWORD*)(a1 + 272) + v5), a2);
      ++v6;
      v5 += 16;
    } while (v6 < *(char*)(a1 + 265));
  }
  result = GameRoutine_5892c0(*(_QWORD*)(a1 + 280), a2);
  if (result != 0) {
    result = GameRoutine_58a130(*(_QWORD*)(a1 + 280), a2);
    if (result != 0) {
      v7 = *(unsigned __int8*)(a1 + 264);
      if (v7 != 2) {
        if (v7 == 1) {
          result = GameRoutine_5af7e0(a1, a2);
        }
        else if (*(_BYTE*)(a1 + 264) == 0) {
          result = GameRoutine_5af420(a1, a2);
          if ((*(_BYTE*)(a1 + 98) & 2) == 0) {
          LABEL_29:
            v26 = (__int64 (*)(_QWORD*, __int64, _QWORD))a2[45];
            if (v26 != nullptr) {
              return v26(a2, a1, a2[46]);
            }
            return result;
          }
        LABEL_21:
          GameRoutine_58ffc0(a1, a2);
          v41 = 0u;
          v40 = 0u;
          v39 = 0u;
          v38 = 0u;
          Pane_58fef0(a1, &v38);
          v37 = 0u;
          v36 = 0u;
          v35 = 0u;
          result = GameRoutine_58fe20(a1, &v35, a2);
          if (*(char*)(a1 + 265) >= 1) {
            v11 = 8;
            v12 = 0;
            do {
              result = GameRoutine_5892c0(
                  *(_QWORD*)(*(_QWORD*)(a1 + 272) + v11), a2);
              v13 = v39;
              v14 = v40;
              v15 = v41;
              ++v12;
              v11 += 16;
              *(_OWORD*)result = v38;
              *(_OWORD*)(result + 16) = v13;
              *(_OWORD*)(result + 32) = v14;
              *(_OWORD*)(result + 48) = v15;
              v16 = v36;
              v17 = v37;
              *(_OWORD*)(result + 64) = v35;
              *(_OWORD*)(result + 80) = v16;
              *(_OWORD*)(result + 96) = v17;
            } while (v12 < *(char*)(a1 + 265));
          }
          if (*(_DWORD*)(a1 + 296) != 0) {
            v18 = 0;
            do {
              v19 = v39;
              v20 = *(unsigned int*)(*(_QWORD*)(a1 + 288) + 4 * v18);
              v21 = v40;
              v22 = v41;
              ++v18;
              v23 = (_OWORD*)(*(_QWORD*)(a2[25] + 56LL) + v20);
              *v23 = v38;
              v23[1] = v19;
              v23[2] = v21;
              v23[3] = v22;
              v24 = v36;
              v25 = v37;
              v23[4] = v35;
              v23[5] = v24;
              v23[6] = v25;
            } while (v18 < *(unsigned int*)(a1 + 296));
          }
          goto LABEL_29;
        }
        if ((*(_BYTE*)(a1 + 98) & 2) == 0) {
          goto LABEL_29;
        }
        goto LABEL_21;
      }
      result = GameRoutine_5afb30(a1, a2);
      if ((*(_BYTE*)(a1 + 98) & 2) == 0) {
        goto LABEL_29;
      }
      goto LABEL_21;
    }
  }
  if ((*(_BYTE*)a2[25] & 2) != 0 && *(_BYTE*)(a1 + 265) == 1) {
    v8 = *(unsigned __int8*)(a1 + 264);
    if (v8 <= 2) {
      v9 = (*(_QWORD*)(a2[23] + 104LL) + 559LL) & -*(_QWORD*)(a2[23] + 104LL);
      if (v8 - 1 >= 2) {
        v27 = GameData_1b14170[*(unsigned __int8*)(a1 + 264)] & 0xFFFFFFFE;
        do {
          v28 = a2[25];
          if ((*(_BYTE*)v28 & 1) != 0) {
            atomic_fetch_add(*(atomic_ullong* volatile*)(v28 + 64), v9);
            if ((*(_BYTE*)v28 & 1) != 0) {
              v30 = *(unsigned __int64**)(v28 + 64);
              v29 = *(unsigned __int64**)(v28 + 72);
              atomic_load(v30);
              atomic_load(v29);
            }
          }
          else {
            *(_QWORD*)(v28 + 64) += v9;
          }
          v31 = a2[25];
          if ((*(_BYTE*)v31 & 1) != 0) {
            atomic_fetch_add(*(atomic_ullong* volatile*)(v31 + 64), v9);
            if ((*(_BYTE*)v31 & 1) != 0) {
              v33 = *(unsigned __int64**)(v31 + 64);
              v32 = *(unsigned __int64**)(v31 + 72);
              atomic_load(v33);
              atomic_load(v32);
            }
          }
          else {
            *(_QWORD*)(v31 + 64) += v9;
          }
          v27 -= 2;
        } while (v27 != 0);
      }
      v10 = a2[25];
      if ((*(_BYTE*)v10 & 1) != 0) {
        atomic_fetch_add(*(atomic_ullong* volatile*)(v10 + 64), v9);
        if ((*(_BYTE*)v10 & 1) != 0) {
          v34 = *(unsigned __int64**)(v10 + 72);
          atomic_load(*(unsigned __int64**)(v10 + 64));
          atomic_load(v34);
        }
      }
      else {
        *(_QWORD*)(v10 + 64) += v9;
      }
    }
  }
  return result;
}

__int64 Window_5afc20(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v5 = result;
  v6 = *(_QWORD*)(*(_QWORD*)(result + 272) + 8LL);
  if ((*(_BYTE*)(v6 + 20) & 3) != 0) {
    if ((DrawInfo_576a40(a2, *(_QWORD*)(v6 + 32),
                         *(unsigned __int16*)(v6 + 74)) &
         1) != 0) {
      GameRoutine_58c810(v6, a3);
    }
    GameRoutine_576a20(a2, a3);
    GameRoutine_58c480(v6, a3, a2);
    result = GameRoutine_58c720(v6, a3, a2);
    if ((*(_BYTE*)(v5 + 98) & 2) != 0) {
      result = Pane_590280(v5, a3, a2);
    }
    if (*(_DWORD*)(v5 + 296) != 0) {
      GameRoutine_58aa70(v6, a2, a3);
      GameRoutine_58c380(v6, a3, a2);
      GameRoutine_58c400(v6, a3, a2);
      result = GameRoutine_5764b0(a3, a2);
      if (*(_DWORD*)(v5 + 296) != 0) {
        v7 = *(_QWORD*)(a2 + 184);
        v8 = 0;
        do {
          v9 = *(_QWORD*)(a2 + 200);
          v16 = 0;
          v17 = 0;
          v10 = *(_QWORD*)(*(_QWORD*)(v9 + 16) + 16LL * *(int*)(v9 + 48) + 8);
          v16 = *(_QWORD*)(*(_QWORD*)(v9 + 16) + 16LL * *(int*)(v9 + 48));
          v17 = v10;
          v11 = *(unsigned __int16*)(v6 + 74);
          v16 += *(unsigned int*)(*(_QWORD*)(v5 + 288) + 4 * v8);
          GameRoutine_5fe120(
              a3,
              *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v6 + 32) + 24LL) +
                               4 * v11),
              0, &v16, 560);
          result = GameRoutine_5fcd30(a3, 3, 1, v7 + 584, 6, 0);
          ++v8;
        } while (v8 < *(unsigned int*)(v5 + 296));
      }
    }
    else {
      v12 = *(char*)(v5 + 265);
      if (v12 >= 1) {
        v13 = 8;
        v14 = 0;
        do {
          v15 = *(_QWORD*)(v5 + 272);
          result = *(_QWORD*)(v15 + v13);
          if ((*(_BYTE*)(result + 20) & 3) != 0) {
            GameRoutine_58aa70(result, a2, a3);
            GameRoutine_58c380(*(_QWORD*)(v15 + v13), a3, a2);
            GameRoutine_58c400(*(_QWORD*)(v15 + v13), a3, a2);
            result = GameRoutine_5764b0(a3, a2);
            LOBYTE(v12) = *(_BYTE*)(v5 + 265);
          }
          ++v14;
          v13 += 16;
        } while (v14 < (char)v12);
      }
    }
  }
  if ((*(_BYTE*)(v5 + 266) & 4) == 0) {
    if (*(_BYTE*)(v5 + 264) == 1) {
      GameRoutine_58aa70(*(_QWORD*)(v5 + 280), a2, a3);
      GameRoutine_58c380(*(_QWORD*)(v5 + 280), a3, a2);
      GameRoutine_58c400(*(_QWORD*)(v5 + 280), a3, a2);
    }
    else {
      if (*(_BYTE*)(v5 + 264) != 0) {
        return result;
      }
      DynamicRenderingTexture_576440(a3, a2, *(_QWORD*)(v5 + 280));
      GameRoutine_58aa70(*(_QWORD*)(v5 + 280), a2, a3);
      if ((*(_BYTE*)(v5 + 98) & 2) != 0) {
        Pane_590280(v5, a3, a2);
      }
    }
    return GameRoutine_5764b0(a3, a2);
  }
  return result;
}

__int64 Window_5afee0(__int64 result, __int64 a2, __int64 a3)
{
  int v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v3 = *(char*)(result + 265);
  v6 = result;
  if (v3 >= 1) {
    v7 = 8;
    v8 = 0;
    do {
      v9 = *(_QWORD*)(v6 + 272);
      v10 = *(_QWORD*)(v9 + v7);
      if ((*(_BYTE*)(v10 + 20) & 3) != 0) {
        if ((DrawInfo_576a40(a2, *(_QWORD*)(v10 + 32),
                             *(unsigned __int16*)(v10 + 74)) &
             1) != 0) {
          GameRoutine_58c810(v10, a3);
        }
        GameRoutine_576a20(a2, a3);
        GameRoutine_58c1e0(*(_QWORD*)(v9 + v7), a3, a2);
        GameRoutine_58aa70(*(_QWORD*)(v9 + v7), a2, a3);
        if ((*(_BYTE*)(v6 + 98) & 2) != 0) {
          v11 = GameRoutine_577d40(*(_QWORD*)(a2 + 184), 1);
          GameRoutine_58c820(a3, a2, v11);
        }
        result = GameRoutine_5764b0(a3, a2);
        LOBYTE(v3) = *(_BYTE*)(v6 + 265);
      }
      ++v8;
      v7 += 16;
    } while (v8 < (char)v3);
  }
  if ((*(_BYTE*)(v6 + 266) & 4) == 0) {
    DynamicRenderingTexture_576440(a3, a2, *(_QWORD*)(v6 + 280));
    GameRoutine_58aa70(*(_QWORD*)(v6 + 280), a2, a3);
    if ((*(_BYTE*)(v6 + 98) & 2) != 0) {
      Pane_590280(v6, a3, a2);
    }
    return GameRoutine_5764b0(a3, a2);
  }
  return result;
}

__int64 Window_Unknown28(__int64 result, __int64 a2, __int64 a3)
{
  if ((**(_BYTE**)(a2 + 200) & 2) == 0) {
    if ((*(_BYTE*)(result + 266) & 2 | *(_DWORD*)(result + 296)) != 0) {
      return Window_5afc20(result, a2, a3);
    }
    else {
      return Window_5afee0(result, a2, a3);
    }
  }
  return result;
}

#pragma GCC visibility pop
