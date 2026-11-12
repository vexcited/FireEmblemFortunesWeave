#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern __int64* GameData_212d480[2];
extern __int64* GameData_2134208[5];
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0bae0(_QWORD);
__n128 GameRoutine_599ea0(_QWORD);
void __attribute__((noreturn)) GameRoutine_ee1b0(void);
__int64 GameRoutine_f35a0(__int64, __int64, __int64, __int64, __int64, __int64);
__int64 GameRoutine_f77e0(void);
__int64 GameRoutine_f8300(_QWORD, _QWORD, _QWORD);
__int16* LayoutPaneFactory_599ea0(__int16* result);
__int64 memset(__int64, int, unsigned __int64);
__int64 GameHr_590940(__int64 a1);

__int64 GameHr_f35a0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6)
{
  unsigned __int64 v7;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  char v31;
  char v32;
  __int64 v33;
  __int64 result;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  int v44;
  char v45;
  float v46;
  __int64 v47;

  *(_DWORD*)(a1 + 28) = 0;
  *(_BYTE*)(a1 + 136) = 0;
  v7 = *(int*)(a1 + 24);
  *(_QWORD*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_DWORD*)(a1 + 128) = 0;
  *(_BYTE*)(a1 + 144) = 0;
  *(_DWORD*)(a1 + 140) = 0;
  *(_DWORD*)(a1 + 80) = 1065353216;
  v9 = *(_QWORD*)(a1 + 8);
  v10 = *(char**)a1;
  v11 = v9 - *(_QWORD*)a1;
  v12 = v7 - v11;
  if (v7 > v11) {
    v13 = *(_QWORD*)(a1 + 16);
    if (v13 - v9 >= v12) {
      v33 = v9 + v12;
      GameRoutine_1a0ba50(v9, 0, v7 - v11, a4, a5, a6);
      *(_QWORD*)(a1 + 8) = v33;
      goto LABEL_21;
    }
    if ((v7 & 0x80000000) != 0) {
      GameRoutine_ee1b0();
    }
    v14 = v13 - (_QWORD)v10;
    v15 = GameData_212d480[0];
    v16 = 2 * v14;
    if (2 * v14 <= v7) {
      v16 = v7;
    }
    if (v14 >= 0x3FFFFFFFFFFFFFFFLL) {
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v16;
    }
    v18 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], v17, 32);
    v19 = v18 + v11;
    v20 = v18 + v17;
    v21 = v18 + v7;
    GameRoutine_1a0ba50(v19, 0, v12, v22, v23, v24);
    v25 = *(char**)a1;
    v26 = *(char**)(a1 + 8);
    v27 = *(_QWORD*)a1 - (_QWORD)v26;
    v28 = v19 + v27;
    if (*(char**)a1 == v26) {
      goto LABEL_16;
    }
    v29 = ((int)v26 - (int)v25) & 7LL;
    if (v29 != 0) {
      v30 = (char*)(v19 + v27);
      do {
        v31 = *v25++;
        --v29;
        *v30++ = v31;
      } while (v29 != 0);
      if (v27 > 0xFFFFFFFFFFFFFFF8LL) {
        goto LABEL_15;
      }
    }
    else {
      v30 = (char*)(v19 + v27);
      if (v27 > 0xFFFFFFFFFFFFFFF8LL) {
      LABEL_15:
        v25 = *(char**)a1;
      LABEL_16:
        *(_QWORD*)a1 = v28;
        *(_QWORD*)(a1 + 8) = v21;
        *(_QWORD*)(a1 + 16) = v20;
        if (v25 != nullptr) {
          (*(void (**)(__int64))(*(_QWORD*)*v15 + 24LL))(*v15);
        }
        goto LABEL_21;
      }
    }
    do {
      *v30 = *v25;
      v30[1] = v25[1];
      v30[2] = v25[2];
      v30[3] = v25[3];
      v30[4] = v25[4];
      v30[5] = v25[5];
      v30[6] = v25[6];
      v32 = v25[7];
      v25 += 8;
      v30[7] = v32;
      v30 += 8;
    } while (v25 != v26);
    goto LABEL_15;
  }
  if (v7 < v11) {
    *(_QWORD*)(a1 + 8) = &v10[v7];
  }
LABEL_21:
  v35 = *(_QWORD*)(a1 + 48);
  result = a1 + 48;
  v36 = *(int*)(a1 + 24);
  v37 = 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD*)(a1 + 56) - v35) >> 3);
  if (v36 <= v37) {
    if (v36 < v37) {
      *(_QWORD*)(a1 + 56) = v35 + 104LL * (int)v36;
    }
  }
  else {
    result = GameRoutine_f77e0();
  }
  v38 = *(_DWORD*)(a2 + 8);
  if (v38 != 0) {
    if (v38 == 2) {
      if (*(int*)(a1 + 24) >= 1) {
        v39 = 0;
        do {
          *(_BYTE*)(*(_QWORD*)a1 + v39) = v39;
          ++v39;
        } while (v39 < *(int*)(a1 + 24));
      }
      v40 = 1000;
      do {
        v41 = *(_DWORD*)(a1 + 24) - 1;
        v42 = GameRoutine_1a0bae0(result);
        v43 = *(_DWORD*)(a1 + 24) - 1;
        v44 = (int)(float)((float)((float)v41 + 0.9f) *
                           vcvts_n_f32_s32(v42, 0x1Fu));
        result = GameRoutine_1a0bae0(v42);
        --v40;
        v45 = *(_BYTE*)(*(_QWORD*)a1 + v44);
        v46 = (float)((float)v43 + 0.9f) * vcvts_n_f32_s32(result, 0x1Fu);
        *(_BYTE*)(*(_QWORD*)a1 + v44) = *(_BYTE*)(*(_QWORD*)a1 + (int)v46);
        *(_BYTE*)(*(_QWORD*)a1 + (int)v46) = v45;
      } while (v40 != 0);
    }
    else if (*(int*)(a1 + 24) >= 1) {
      v47 = 0;
      do {
        *(_BYTE*)(*(_QWORD*)a1 + v47) = v47;
        ++v47;
      } while (v47 < *(int*)(a1 + 24));
    }
  }
  return result;
}

__int64 GameHr_f5940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6)
{
  int v6;
  int v7;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  __int64 v18;
  int v19;
  float v20;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 result;

  v6 = *(_DWORD*)(a1 + 552);
  v7 = a3;
  *(_DWORD*)(a2 + 32) = a3;
  *(_DWORD*)(a2 + 24) = v6;
  GameRoutine_f35a0(a2, a1, a3, a4, a5, a6);
  v10 = GameData_2134208[0];
  if (*(int*)(a2 + 24) >= 1) {
    v11 = 96;
    v12 = 0;
    v13 = 0;
    do {
      *(_DWORD*)(*(_QWORD*)(a1 + 544) + v12 + 96) = GameRoutine_f8300(
          v10 + 1, *(_QWORD*)(*(_QWORD*)(a1 + 544) + v12 + 88),
          *(unsigned int*)(*(_QWORD*)(a1 + 544) + v12 + 96));
      *(_DWORD*)(*(_QWORD*)(a1 + 544) + v12 + 368) = GameRoutine_f8300(
          v10 + 1, *(_QWORD*)(*(_QWORD*)(a1 + 544) + v12 + 360),
          *(unsigned int*)(*(_QWORD*)(a1 + 544) + v12 + 368));
      v16 = GameRoutine_f8300(
          v10 + 1, *(_QWORD*)(*(_QWORD*)(a1 + 544) + v12 + 376),
          *(unsigned int*)(*(_QWORD*)(a1 + 544) + v12 + 384));
      *(_DWORD*)(*(_QWORD*)(a1 + 544) + v12 + 384) = v16;
      v17 = (_BYTE*)(*(_QWORD*)(a2 + 48) + v11);
      v18 = *(_QWORD*)(a1 + 544) + v12;
      v19 = *(_DWORD*)(v18 + 136);
      v20 = *(float*)(v18 + 140);
      *((_QWORD*)v17 - 12) = 0;
      *((_DWORD*)v17 - 22) = v7;
      *((_DWORD*)v17 - 16) = 1065353216;
      *(v17 - 8) = 0;
      *((_QWORD*)v17 - 6) = 0;
      *((_DWORD*)v17 - 10) = 0;
      *((_QWORD*)v17 - 3) = 0;
      *((_DWORD*)v17 - 4) = 0;
      *v17 = 0;
      *((_DWORD*)v17 - 1) = 0;
      if (v19 == 2 && v20 > -10000.0f) {
        if ((int)v20 != 0) {
          v22 = (int)v20 - 1;
        }
        else {
          v22 = 0;
        }
        *((_DWORD*)v17 - 23) =
            (int)(float)((float)((float)v22 + 0.9f) *
                         vcvts_n_f32_s32(GameRoutine_1a0bae0(v16), 0x1Fu));
      }
      v14 = v12 + *(_QWORD*)(a1 + 544);
      v12 += 528;
      *(_QWORD*)(*(_QWORD*)(a2 + 48) + v11 - 72) = v14;
      *(_DWORD*)(*(_QWORD*)(a2 + 48) + v11 - 84) =
          v13 + *(_DWORD*)(a2 + 36) + 1;
      LODWORD(v14) = v13 + *(_DWORD*)(a2 + 36);
      v15 = *(_QWORD*)(a2 + 48) + v11;
      ++v13;
      v11 += 104;
      *(_DWORD*)(v15 - 80) = v14 + 1;
    } while (v13 < *(int*)(a2 + 24));
  }
  v23 = GameRoutine_f8300(v10 + 1, *(_QWORD*)(a1 + 104),
                          *(unsigned int*)(a1 + 112));
  v24 = *(_QWORD*)(a1 + 376);
  v25 = *(unsigned int*)(a1 + 384);
  *(_DWORD*)(a1 + 112) = v23;
  v26 = GameRoutine_f8300(v10 + 1, v24, v25);
  v27 = *(_QWORD*)(a1 + 392);
  v28 = *(unsigned int*)(a1 + 400);
  *(_DWORD*)(a1 + 384) = v26;
  result = GameRoutine_f8300(v10 + 1, v27, v28);
  *(_DWORD*)(a1 + 400) = result;
  return result;
}

__int64 GameHr_590940(__int64 a1)
{
  *(_QWORD*)a1 = 0;
  LayoutPaneFactory_599ea0((__int16*)(a1 + 16));
  LayoutPaneFactory_599ea0((__int16*)(a1 + 32));
  LayoutPaneFactory_599ea0((__int16*)(a1 + 96));
  return memset(a1 + 8, 0, 0x221u);
}

#pragma GCC visibility pop
