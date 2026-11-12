#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern _DWORD GameData_1b7bcc8[7];
extern _DWORD GameData_1b7d8bc[7];
extern __int64 GameData_212bf68;
extern __int64 GameData_21759e0;
extern __int64 GameData_21a60d8;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_112290(_QWORD);
__int64 GameRoutine_149a90(_QWORD);
struct PseudoSret GameRoutine_17d8560(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_193ab40(_QWORD);
__int64 GameRoutine_193ac30(_QWORD, _QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a0c0(void);
__int64 GameRoutine_1a0a4e0(_QWORD, long double);
struct PseudoSret GameRoutine_1a0a790(_QWORD);
__int64 GameRoutine_1a0ba50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_53c20(_QWORD);
__int64 GameRoutine_60a020(_QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 GameRoutine_a2c9c0(__int64, __int64, __n128 result);
__int64 GameRoutine_a4a400(_QWORD, _QWORD);
__int64 GameRoutine_a4ac60(_QWORD, _QWORD);
__int64 GameRoutine_a542c0(_QWORD, _QWORD);
__int64 GameRoutine_a98560(_QWORD);
__int64 GameRoutine_a991b0(_QWORD, _QWORD);
__int64 GameRoutine_a993a0(_QWORD, _QWORD, _QWORD);
struct PseudoSret GameRoutine_a99c80(_QWORD, _QWORD);
__int64 GameRoutine_ad6560(float, float, float);
__int64 GameRoutine_ad6bb0(_QWORD);
__int64 GameRoutine_ad7440(_QWORD);
void __attribute__((noreturn)) GameRoutine_adab70(_QWORD);
__int64 GameRoutine_adac20(_QWORD);
__int64 GameRoutine_b362c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b4d840(__int64*, __int64);
__int64 GameRoutine_b528e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b5fb80(_QWORD, _QWORD);
__int64 GameRoutine_b711f0(__int64, __int64);
__int64 GameRoutine_b791d0(__int64, __int64);
_QWORD* GameRoutine_ba3910(__int64, __int64);
__int64 GameRoutine_bb8af0(__int64, int*);
__int64 GameRoutine_bf1600(_QWORD, _QWORD);
__int64 GameRoutine_c686d0(_QWORD, _QWORD);
__int64 GameRoutine_c69950(_QWORD);
__int64 GameRoutine_c69ba0(_QWORD);
__int64 GameRoutine_c6dc40(_QWORD, _QWORD);
__int64 GameRoutine_c6ef90(_QWORD, float);
float GameRoutine_d8e20(_QWORD);
struct PseudoSret GameRoutine_d98c0(_QWORD);
__attribute__((swiftcall)) void
GameRoutine_17d8560_alt1(PSEUDO_X8, int, __int64,
                         _QWORD*) __asm__("GameRoutine_17d8560");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_ad6bb0_alt1(_QWORD*) __asm__("GameRoutine_ad6bb0");
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* msg_MessageManager_empty_text_;
void GameRoutine_adac20_alt1(_QWORD*) __asm__("GameRoutine_adac20");
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_a51e10(__int64 a1, unsigned int a2, int a3, int a4);
void GameHr_ad69c0(_QWORD* a1);

void GameHr_a2d1c0(__int64 a1, __int64 a2, char a3, __n128 a4)
{
  int v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;

  v4 = *(_DWORD*)(a1 + 624);
  if (v4 != 0) {
    *(_DWORD*)(a1 + 624) = v4 - 1;
    if ((a3 & 1) == 0) {
    LABEL_24:
      *(_BYTE*)(a1 + 2848) = 0;
      return;
    }
    GameRoutine_a2c9c0(a1, a2, a4);
    v6 = *(unsigned __int8*)(a1 + 712);
    v7 = *(unsigned __int8*)(a1 + 2456);
    if ((v6 & 1) != 0) {
      v8 = *(_QWORD*)(a1 + 720);
    }
    else {
      v8 = v6 >> 1;
    }
    v9 = *(_QWORD*)(a1 + 2464);
    if ((v7 & 1) == 0) {
      v9 = v7 >> 1;
    }
    if (v8 == v9 &&
        ((v10 = *(_BYTE**)(a1 + 728), (v6 & 1) != 0)
             ? (v11 = *(_QWORD*)(a1 + 728))
             : (v11 = a1 + 713),
         (v7 & 1) != 0 ? (v12 = *(_QWORD*)(a1 + 2472)) : (v12 = a1 + 2457),
         (unsigned int)GameRoutine_1a09cf0(v11, v12) == 0)) {
      if ((v6 & 1) != 0) {
        *(_QWORD*)(a1 + 720) = 0;
      }
      else {
        *(_BYTE*)(a1 + 712) = 0;
        v10 = (_BYTE*)(a1 + 713);
      }
      *v10 = 0;
      if ((*(_BYTE*)(a1 + 2456) & 1) == 0) {
        goto LABEL_17;
      }
    }
    else if ((v7 & 1) == 0) {
    LABEL_17:
      v13 = (_BYTE*)(a1 + 2457);
      *(_BYTE*)(a1 + 2456) = 0;
    LABEL_23:
      *v13 = 0;
      *(_DWORD*)(a1 + 2192) = -1;
      goto LABEL_24;
    }
    v13 = *(_BYTE**)(a1 + 2472);
    *(_QWORD*)(a1 + 2464) = 0;
    goto LABEL_23;
  }
}

__int64 GameHr_a31610(__int64 a1, __int64 a2)
{
  long double v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 result;
  _BYTE* v14;
  _QWORD v15[2];

  *(float*)&v4 = GameRoutine_d8e20(*(_QWORD*)(a1 + 8));
  if (*(float*)&v4 > 0.0) {
    *(_DWORD*)(a1 + 2892) = LODWORD(v4);
  }
  v5 = *(unsigned __int8*)(a1 + 2824);
  v6 = (_QWORD*)(a1 + 2824);
  v7 = (_QWORD*)(a1 + 2896);
  if ((*(_BYTE*)(a1 + 2896) & 1) != 0) {
    v9 = (v5 & 1) == 0;
    v10 = v5 >> 1;
    if (v9) {
      v11 = a1 + 2825;
    }
    else {
      v11 = *(_QWORD*)(a1 + 2840);
    }
    if (v9) {
      v12 = v10;
    }
    else {
      v12 = *(_QWORD*)(a1 + 2832);
    }
    GameRoutine_64dde0(v7, v11, v12, v4);
  }
  else if ((v5 & 1) != 0) {
    GameRoutine_64df20(v7, *(_QWORD*)(a1 + 2840), *(_QWORD*)(a1 + 2832), v4);
  }
  else {
    v8 = *(_QWORD*)(a1 + 2832);
    *v7 = *v6;
    *(_QWORD*)(a1 + 2904) = v8;
    *(_QWORD*)(a1 + 2912) = *(_QWORD*)(a1 + 2840);
  }
  *(struct PseudoSret*)(v15) = GameRoutine_d98c0(*(_QWORD*)(a1 + 8));
  result = GameRoutine_112290(v15);
  if (result != 0) {
    result = GameRoutine_149a90(result - 5592);
    if ((result & 1) == 0) {
      result = (*(__int64 (**)(_QWORD, __int64, _QWORD))(
          **(_QWORD**)(a1 + 8) + 48LL))(*(_QWORD*)(a1 + 8), a2, 0);
    }
  }
  if ((*(_BYTE*)v6 & 1) != 0) {
    v14 = *(_BYTE**)(a1 + 2840);
    *(_QWORD*)(a1 + 2832) = 0;
  }
  else {
    v14 = (_BYTE*)(a1 + 2825);
    *(_BYTE*)(a1 + 2824) = 0;
  }
  *v14 = 0;
  return result;
}

__int64 GameHr_a50100(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  int v6;
  int v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v17;

  v5 = *(_QWORD*)(*(_QWORD*)(*a1 + 14600) + 800LL);
  v6 = GameRoutine_a4ac60(v5, a3);
  if (v6 < 0) {
    return 0xFFFFFFFFLL;
  }
  v7 = *(_DWORD*)(v5 + 44);
  if (v7 == -1) {
    return 0xFFFFFFFFLL;
  }
  v8 = *(_DWORD**)(*(_QWORD*)(v5 + 24) + 24LL * v7);
  if (*v8 <= v6) {
    return 0xFFFFFFFFLL;
  }
  v9 = (unsigned int)v8[2 * v6 + 2];
  if ((v9 & 0x80000000) != 0) {
    return 0xFFFFFFFFLL;
  }
  v10 = *a1;
  v17 = a2;
  v11 = GameRoutine_a542c0(v10 + 14648, &v17);
  if (v11 == 0) {
    return 0xFFFFFFFFLL;
  }
  v12 = *(_QWORD*)(v11 + 40);
  if (v12 == 0) {
    return 0xFFFFFFFFLL;
  }
  v13 = *(_QWORD*)(v12 + 800);
  v14 = GameRoutine_a4a400(v13, a2);
  if (v14 < 0) {
    return 0xFFFFFFFFLL;
  }
  v15 = *(_QWORD*)(*(_QWORD*)(v13 + 24) + 24LL * *(int*)(v13 + 40));
  return *(unsigned __int8*)(v15 + v9 +
                             (unsigned int)(*(_DWORD*)(v15 + 4) * v14) + 8);
}

void GameHr_a51e10(__int64 a1, unsigned int a2, int a3, int a4)
{
  char v6;
  const char* v7;
  unsigned int v8;
  const char* v9;
  __int64 v10;
  struct {
    __int64 v11[2];
    const char* v12;
  } v11_;
  char v13[4];
  __int64 v14;
  char v15;
  __int64 v16;

  v15 = 0;
  v16 = GameData_21759e0;
  v13[0] = 2;
  v14 = 0x200000000LL;
  if (a4 != 0) {
    if (a4 != 2) {
      goto LABEL_6;
    }
    v6 = 3;
  }
  else {
    v6 = 0;
  }
  v13[0] = v6;
LABEL_6:
  GameRoutine_17d8560_alt1((void*)(v11_.v11), a3, (__int64)&v16, v13);
  if ((v11_.v11[0] & 1) != 0) {
    v7 = v11_.v12;
  }
  else {
    v7 = (char*)v11_.v11 + 1;
  }
  if (a2 <= 7) {
    v8 = a2;
  }
  else {
    v8 = 0;
  }
  if (v7 != nullptr) {
    v9 = v7;
  }
  else {
    v9 = msg_MessageManager_empty_text_;
  }
  GameRoutine_60a020_alt1(a1 + 24LL * v8, v9);
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  (__int64)v11_.v12);
  }
}

__int64 GameHr_a69620(__int64* a1, __int64* a2)
{
  __int64* v2;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  _BYTE v18[32];
  __int64* v19;

  v2 = (__int64*)a1[6];
  v17 = *a1;
  if (v2 == nullptr) {
    v7 = *a2;
    v19 = nullptr;
    *a1 = v7;
    v5 = a1 + 2;
    goto LABEL_10;
  }
  v5 = a1 + 2;
  if (v2 != a1 + 2) {
    a1[6] = 0;
    v19 = v2;
    v6 = *a2;
    a1[6] = 0;
    *a1 = v6;
    goto LABEL_10;
  }
  v19 = (__int64*)v18;
  (*(void (**)(__int64*, _BYTE*))(*v2 + 24))(v2, v18);
  v8 = (__int64*)a1[6];
  v9 = *a2;
  a1[6] = 0;
  *a1 = v9;
  if (v8 == v2) {
    v10 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_10;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v8 + v10))((__int64)v8);
LABEL_10:
  v11 = (_QWORD*)a2[6];
  v12 = a2 + 2;
  if (v11 != nullptr) {
    if (v11 != v12) {
      a1[6] = (__int64)v11;
      *a2 = v17;
      goto LABEL_20;
    }
    a1[6] = (__int64)v5;
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)a2[6] + 24LL))(a2[6], v5);
  }
  else {
    a1[6] = 0;
  }
  v13 = (_QWORD*)a2[6];
  a2[6] = 0;
  *a2 = v17;
  if (v13 == v12) {
    v14 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_20;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
LABEL_20:
  result = (__int64)v19;
  if (v19 == nullptr) {
    a2[6] = 0;
    return result;
  }
  if (v19 != (__int64*)v18) {
    a2[6] = (__int64)v19;
    return result;
  }
  a2[6] = (__int64)v12;
  (*(void (**)(__int64, __int64*))(*(_QWORD*)result + 24LL))(result, a2 + 2);
  result = (__int64)v19;
  if (v19 == (__int64*)v18) {
    v16 = 32;
  }
  else {
    if (v19 == nullptr) {
      return result;
    }
    v16 = 40;
  }
  return (*(__int64 (**)(__int64))(*v19 + v16))((__int64)v19);
}

__int64 GameHr_a6b310(__int64* a1, __int64* a2)
{
  __int64* v2;
  __int64* v5;
  int v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  int v19;
  _BYTE v20[32];
  __int64* v21;

  v2 = (__int64*)a1[6];
  v18 = *a1;
  v19 = *((_DWORD*)a1 + 2);
  if (v2 == nullptr) {
    v6 = *((_DWORD*)a2 + 2);
    v7 = *a2;
    v21 = nullptr;
    v5 = a1 + 2;
    goto LABEL_5;
  }
  v5 = a1 + 2;
  if (v2 != a1 + 2) {
    a1[6] = 0;
    v21 = v2;
    v6 = *((_DWORD*)a2 + 2);
    v7 = *a2;
  LABEL_5:
    *a1 = v7;
    *((_DWORD*)a1 + 2) = v6;
    goto LABEL_6;
  }
  v21 = (__int64*)v20;
  (*(void (**)(__int64*, _BYTE*))(*v2 + 24))(v2, v20);
  v10 = *((_DWORD*)a2 + 2);
  v11 = *a2;
  v12 = (__int64*)a1[6];
  a1[6] = 0;
  *a1 = v11;
  *((_DWORD*)a1 + 2) = v10;
  if (v12 == v2) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_6;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
LABEL_6:
  v8 = (_QWORD*)a2[6];
  v9 = a2 + 2;
  if (v8 != nullptr) {
    if (v8 != v9) {
      a1[6] = (__int64)v8;
      *a2 = v18;
      *((_DWORD*)a2 + 2) = v19;
      goto LABEL_19;
    }
    a1[6] = (__int64)v5;
    (*(void (**)(__int64, __int64*))(*(_QWORD*)a2[6] + 24LL))(a2[6], v5);
  }
  else {
    a1[6] = 0;
  }
  v14 = (_QWORD*)a2[6];
  a2[6] = 0;
  *a2 = v18;
  *((_DWORD*)a2 + 2) = v19;
  if (v14 == v9) {
    v15 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_19;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v14 + v15))((__int64)v14);
LABEL_19:
  result = (__int64)v21;
  if (v21 == nullptr) {
    a2[6] = 0;
    return result;
  }
  if (v21 != (__int64*)v20) {
    a2[6] = (__int64)v21;
    return result;
  }
  a2[6] = (__int64)v9;
  (*(void (**)(__int64, __int64*))(*(_QWORD*)result + 24LL))(result, a2 + 2);
  result = (__int64)v21;
  if (v21 == (__int64*)v20) {
    v17 = 32;
  }
  else {
    if (v21 == nullptr) {
      return result;
    }
    v17 = 40;
  }
  return (*(__int64 (**)(__int64))(*v21 + v17))((__int64)v21);
}

__int64 GameHr_a72080(__int64 a1, long double a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v2 = (_QWORD*)(a1 + 32);
  v3 = *(_QWORD**)(a1 + 64);
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
    v5 = 56;
  }
  return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, a2);
}

_QWORD* GameHr_a853b0(__int64 a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* result;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if ((*(_BYTE*)(a1 + 296) & 1) != 0 && *(_QWORD*)(a1 + 312) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v3 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v3, a2);
  }
  if ((*(_BYTE*)(a1 + 272) & 1) != 0 && *(_QWORD*)(a1 + 288) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v4 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v4, a2);
  }
  if ((*(_BYTE*)(a1 + 248) & 1) != 0 && *(_QWORD*)(a1 + 264) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v5 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, a2);
  }
  if ((*(_BYTE*)(a1 + 224) & 1) != 0 && *(_QWORD*)(a1 + 240) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v6 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v6, a2);
  }
  if ((*(_BYTE*)(a1 + 184) & 1) != 0 && *(_QWORD*)(a1 + 200) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v7 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, a2);
  }
  if ((*(_BYTE*)(a1 + 160) & 1) != 0 && *(_QWORD*)(a1 + 176) != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v8 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v8, a2);
  }
  if ((*(_BYTE*)(a1 + 136) & 1) != 0 && *(_QWORD*)(a1 + 152) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v9 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9, a2);
  }
  result = *(_QWORD**)(a1 + 96);
  if (result == (_QWORD*)(a1 + 64)) {
    v11 = 32;
    goto LABEL_40;
  }
  if (result != nullptr) {
    v11 = 40;
  LABEL_40:
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v11))((__int64)result);
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v12, a2);
  }
  if ((*(_BYTE*)a1 & 1) != 0 && *(_QWORD*)(a1 + 16) != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v13 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v13, a2);
  }
  return result;
}

__int64 GameHr_a8fde0(__int64 result, __int64 a2, __int64 a3, float a4,
                      float a5)
{
  float v7;
  float v8;
  float v9;
  unsigned __int64* v11;
  float v12;
  float v13;
  unsigned __int64 v15;
  unsigned int v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned int i;
  __int64 v21;
  __int64 v22;
  float v23;
  unsigned int v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned int k;
  __int64 v32;
  unsigned int j;
  __int64 v34;
  __int64 v35;
  float v36;
  unsigned int v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  float v43;
  unsigned int v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned int m;
  __int64 v51;
  __int64 v52;
  float v53;
  unsigned int v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;

  v7 = *(float*)(a3 + 32);
  v8 = *(float*)(a2 + 32) + v7;
  if (v8 >= 0.00000011921f) {
    v9 = v7 / v8;
    v11 = (unsigned __int64*)result;
    if (v9 <= 1.0f) {
      v12 = v9;
    }
    else {
      v12 = 1.0f;
    }
    if (v9 >= 0.0f) {
      v13 = v12;
    }
    else {
      v13 = 0.0f;
    }
    if (v13 <= 0.0f) {
      v18 = *(_QWORD*)result;
      if ((*(_BYTE*)(a2 + 36) & 1) != 0) {
        if (v18 != 0) {
          v19 = 0;
          for (i = 0; i < v18; v19 = ++i) {
            v21 = *(_QWORD*)(v11[1] + 8 * v19);
            if (v21 != 0) {
              v22 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8 * v19);
              if (v22 != 0) {
                v23 = a4 * *(float*)(a2 + 32);
                if (v23 != 0.0f &&
                    *(_QWORD*)(v21 + 40) != *(_QWORD*)(v21 + 32)) {
                  v24 = 1;
                  v25 = 0;
                  do {
                    v27 = *(_QWORD*)(*(_QWORD*)(v22 + 32) + 8 * v25);
                    if (((*(__int64 (**)(__int64))(*(_QWORD*)v27 + 48LL))(v27) &
                         1) != 0 ||
                        (v28 = *(_QWORD*)(*(_QWORD*)(v22 + 32) + 8 * v25),
                         ((result = (*(__int64 (**)(__int64))(*(_QWORD*)v28 +
                                                              56LL))(v28)) &
                          1) != 0)) {
                      v26 = *(_QWORD*)(*(_QWORD*)(v21 + 32) + 8 * v25);
                      result = (*(__int64 (**)(__int64, __int64, _QWORD, float,
                                               float))(*(_QWORD*)v26 + 24LL))(
                          v26, v26, *(_QWORD*)(*(_QWORD*)(v22 + 32) + 8 * v25),
                          v23, a5);
                    }
                    v25 = v24++;
                  } while (v25 < (__int64)(*(_QWORD*)(v21 + 40) -
                                           *(_QWORD*)(v21 + 32)) >>
                           3);
                  v18 = *v11;
                }
              }
            }
          }
        }
      }
      else if (v18 != 0) {
        v32 = 0;
        for (j = 0; j < v18; v32 = ++j) {
          v34 = *(_QWORD*)(v11[1] + 8 * v32);
          if (v34 != 0) {
            v35 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8 * v32);
            if (v35 != 0) {
              v36 = a4 * *(float*)(a2 + 32);
              if (v36 != 0.0f && *(_QWORD*)(v34 + 40) != *(_QWORD*)(v34 + 32)) {
                v37 = 1;
                v38 = 0;
                do {
                  v39 = *(_QWORD*)(*(_QWORD*)(v35 + 32) + 8 * v38);
                  result =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v39 + 48LL))(v39);
                  if ((result & 1) != 0) {
                    v40 = *(_QWORD*)(*(_QWORD*)(v34 + 32) + 8 * v38);
                    result = (*(__int64 (**)(__int64, __int64, _QWORD, float,
                                             float))(*(_QWORD*)v40 + 24LL))(
                        v40, v40, *(_QWORD*)(*(_QWORD*)(v35 + 32) + 8 * v38),
                        v36, a5);
                  }
                  v38 = v37++;
                } while (v38 < (__int64)(*(_QWORD*)(v34 + 40) -
                                         *(_QWORD*)(v34 + 32)) >>
                         3);
                v18 = *v11;
              }
            }
          }
        }
      }
    }
    else if (v13 >= 1.0f) {
      v29 = *(_QWORD*)result;
      if ((*(_BYTE*)(a3 + 36) & 1) != 0) {
        if (v29 != 0) {
          v30 = 0;
          for (k = 0; k < v29; v30 = ++k) {
            v41 = *(_QWORD*)(v11[1] + 8 * v30);
            if (v41 != 0) {
              v42 = *(_QWORD*)(*(_QWORD*)(a3 + 8) + 8 * v30);
              if (v42 != 0) {
                v43 = a4 * *(float*)(a3 + 32);
                if (v43 != 0.0f &&
                    *(_QWORD*)(v41 + 40) != *(_QWORD*)(v41 + 32)) {
                  v44 = 1;
                  v45 = 0;
                  do {
                    v47 = *(_QWORD*)(*(_QWORD*)(v42 + 32) + 8 * v45);
                    if (((*(__int64 (**)(__int64))(*(_QWORD*)v47 + 48LL))(v47) &
                         1) != 0 ||
                        (v48 = *(_QWORD*)(*(_QWORD*)(v42 + 32) + 8 * v45),
                         ((result = (*(__int64 (**)(__int64))(*(_QWORD*)v48 +
                                                              56LL))(v48)) &
                          1) != 0)) {
                      v46 = *(_QWORD*)(*(_QWORD*)(v41 + 32) + 8 * v45);
                      result = (*(__int64 (**)(__int64, __int64, _QWORD, float,
                                               float))(*(_QWORD*)v46 + 24LL))(
                          v46, v46, *(_QWORD*)(*(_QWORD*)(v42 + 32) + 8 * v45),
                          v43, a5);
                    }
                    v45 = v44++;
                  } while (v45 < (__int64)(*(_QWORD*)(v41 + 40) -
                                           *(_QWORD*)(v41 + 32)) >>
                           3);
                  v29 = *v11;
                }
              }
            }
          }
        }
      }
      else if (v29 != 0) {
        v49 = 0;
        for (m = 0; m < v29; v49 = ++m) {
          v51 = *(_QWORD*)(v11[1] + 8 * v49);
          if (v51 != 0) {
            v52 = *(_QWORD*)(*(_QWORD*)(a3 + 8) + 8 * v49);
            if (v52 != 0) {
              v53 = a4 * *(float*)(a3 + 32);
              if (v53 != 0.0f && *(_QWORD*)(v51 + 40) != *(_QWORD*)(v51 + 32)) {
                v54 = 1;
                v55 = 0;
                do {
                  v56 = *(_QWORD*)(*(_QWORD*)(v52 + 32) + 8 * v55);
                  result =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v56 + 48LL))(v56);
                  if ((result & 1) != 0) {
                    v57 = *(_QWORD*)(*(_QWORD*)(v51 + 32) + 8 * v55);
                    result = (*(__int64 (**)(__int64, __int64, _QWORD, float,
                                             float))(*(_QWORD*)v57 + 24LL))(
                        v57, v57, *(_QWORD*)(*(_QWORD*)(v52 + 32) + 8 * v55),
                        v53, a5);
                  }
                  v55 = v54++;
                } while (v55 < (__int64)(*(_QWORD*)(v51 + 40) -
                                         *(_QWORD*)(v51 + 32)) >>
                         3);
                v29 = *v11;
              }
            }
          }
        }
      }
    }
    else {
      v15 = *(_QWORD*)result;
      if (*(_QWORD*)result != 0) {
        v16 = 1;
        v17 = 0;
        do {
          result = *(_QWORD*)(v11[1] + 8 * v17);
          if (result != 0 && *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8 * v17) != 0 &&
              *(_QWORD*)(*(_QWORD*)(a3 + 8) + 8 * v17) != 0) {
            result = GameRoutine_ad6560(v13, a4, a5);
            v15 = *v11;
          }
          v17 = v16++;
        } while (v15 > v17);
      }
    }
  }
  return result;
}

_QWORD* GameHr_a90790(__int64 a1, long double a2)
{
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v3 = (_QWORD*)(a1 + 112);
  v4 = *(_QWORD**)(a1 + 144);
  if (v4 == v3) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_6:
  result = *(_QWORD**)(a1 + 96);
  if (result == (_QWORD*)(a1 + 64)) {
    v7 = 32;
    goto LABEL_10;
  }
  if (result != nullptr) {
    v7 = 40;
  LABEL_10:
    result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v7))((__int64)result);
  }
  v8 = *(_QWORD*)(a1 + 56);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = (_QWORD*)GameRoutine_1a09c50(v8);
    if ((*(_BYTE*)(a1 + 24) & 1) == 0) {
      goto LABEL_19;
    }
  }
  else if ((*(_BYTE*)(a1 + 24) & 1) == 0) {
    goto LABEL_19;
  }
  if (*(_QWORD*)(a1 + 40) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v9 = 56;
    }
    result = (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v9, a2);
  }
LABEL_19:
  if ((*(_BYTE*)a1 & 1) != 0 && *(_QWORD*)(a1 + 16) != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v10 = 56;
    }
    return (_QWORD*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v10, a2);
  }
  return result;
}

__int64 GameHr_a90ae0(__int64 a1, _QWORD* a2, long double a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;

  if ((*(_BYTE*)a1 & 1) != 0 && *(_QWORD*)(a1 + 16) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v5 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v5, a3);
  }
  *(_QWORD*)(a1 + 8) = a2[1];
  v6 = *a2;
  *(_QWORD*)(a1 + 16) = a2[2];
  *(_QWORD*)a1 = v6;
  *(_WORD*)a2 = 0;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v7 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v7, a3);
  }
  v8 = a2[3];
  v9 = a2[5];
  *(_QWORD*)(a1 + 32) = a2[4];
  *(_QWORD*)(a1 + 40) = v9;
  *(_QWORD*)(a1 + 24) = v8;
  *((_WORD*)a2 + 12) = 0;
  v10 = a2[6];
  v11 = a2[7];
  a2[6] = 0;
  a2[7] = 0;
  v12 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)(a1 + 48) = v10;
  *(_QWORD*)(a1 + 56) = v11;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    GameRoutine_1a09c50(v12);
  }
  v13 = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(a1 + 96) = 0;
  if (v13 == (_QWORD*)(a1 + 64)) {
    v14 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_19;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
LABEL_19:
  v15 = (_QWORD*)a2[12];
  if (v15 != nullptr) {
    if (v15 == a2 + 8) {
      *(_QWORD*)(a1 + 96) = a1 + 64;
      (*(void (**)(_QWORD, __int64))(*(_QWORD*)a2[12] + 24LL))(a2[12], a1 + 64);
    }
    else {
      *(_QWORD*)(a1 + 96) = v15;
      a2[12] = 0;
    }
  }
  else {
    *(_QWORD*)(a1 + 96) = 0;
  }
  v16 = *(_QWORD**)(a1 + 144);
  *(_QWORD*)(a1 + 144) = 0;
  if (v16 == (_QWORD*)(a1 + 112)) {
    v17 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_29;
    }
    v17 = 40;
  }
  (*(void (**)(__int64))(*v16 + v17))((__int64)v16);
LABEL_29:
  v18 = (_QWORD*)a2[18];
  if (v18 != nullptr) {
    if (v18 == a2 + 14) {
      *(_QWORD*)(a1 + 144) = a1 + 112;
      (*(void (**)(_QWORD, __int64))(*(_QWORD*)a2[18] + 24LL))(a2[18],
                                                               a1 + 112);
    }
    else {
      *(_QWORD*)(a1 + 144) = v18;
      a2[18] = 0;
    }
  }
  else {
    *(_QWORD*)(a1 + 144) = 0;
  }
  return a1;
}

__int64 GameHr_a97380(__int64 result, __int64 a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  _QWORD v15[9];
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v2 = *(_DWORD*)(result + 208);
  v21 = a2;
  if (v2 == 0) {
    v3 = result;
    result = *(_QWORD*)(result + 32);
    if (result != 0) {
      result = GameRoutine_1a0a0c0();
      if (result != 0) {
        v4 = *(_QWORD*)(v3 + 24);
        v5 = result;
        if (v4 == 0) {
          goto LABEL_15;
        }
        GameRoutine_a993a0(v3 + 168, &v21, &v21);
        v6 = *(_QWORD*)(v4 + 296);
        v7 = 80;
        if (*(_QWORD*)(v21 + 32) == 0) {
          v7 = 72;
        }
        v8 = *(_QWORD*)(v21 + v7);
        v19 = 0;
        v20 = 0;
        v16 = v8;
        v17 = 0;
        v18 = 1;
        *(struct PseudoSret*)(v15) = GameRoutine_a99c80(v6, &v16);
        GameRoutine_193ac30(v3 + 40, v15);
        GameRoutine_193ab40(v15);
        v12 = *(_QWORD*)(v3 + 136);
        v13 = *(_QWORD*)(v3 + 144);
        v14 = 0xAAAAAAAAAAAAAAABLL * (v13 - v12);
        if (v13 == v12) {
          GameRoutine_a991b0(v3 + 136, 1 - v14);
          v12 = *(_QWORD*)(v3 + 136);
          v13 = *(_QWORD*)(v3 + 144);
        }
        else if (v14 >= 2) {
          v13 = v12 + 3;
          *(_QWORD*)(v3 + 144) = v12 + 3;
          goto LABEL_13;
        }
        if (v12 == v13) {
        LABEL_14:
          result = GameRoutine_a98560(v3);
          *(_DWORD*)(v3 + 208) = 1;
        LABEL_15:
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            return GameRoutine_1a09c50(v5);
          }
          return result;
        }
      LABEL_13:
        GameRoutine_1a0ba50(v12, 0, 3 * ((v13 - v12 - 3) / 3uLL) + 3, v9, v10,
                            v11);
        goto LABEL_14;
      }
    }
  }
  return result;
}

__int64 GameHr_a98a50(__int64 result, __int64 a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD v21[9];
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;

  v2 = *(_DWORD*)(result + 208);
  v27 = a2;
  if (v2 == 0) {
    v3 = result;
    result = *(_QWORD*)(result + 32);
    if (result != 0) {
      result = GameRoutine_1a0a0c0();
      if (result != 0) {
        v4 = *(_QWORD*)(v3 + 24);
        v5 = result;
        if (v4 != 0) {
          GameRoutine_a993a0(v3 + 168, &v27, &v27);
          v6 = 80;
          v7 = *(_QWORD*)(v4 + 296);
          v8 = *(_QWORD*)(v27 + 32);
          if (v8 == 0) {
            v8 = *(_QWORD*)(v27 + 24);
            v6 = 72;
          }
          v11 = v8 + 80;
          v9 = *(_QWORD*)(v8 + 80);
          v10 = *(_QWORD*)(v11 + 8);
          v12 = *(_QWORD*)(v27 + v6);
          v25 = 0;
          v26 = 0;
          v13 = v10 - v9;
          v22 = v12;
          v23 = 1;
          v24 = (unsigned int)((unsigned __int64)(v10 - v9) >> 5);
          *(struct PseudoSret*)(v21) = GameRoutine_a99c80(v7, &v22);
          GameRoutine_193ac30(v3 + 40, v21);
          GameRoutine_193ab40(v21);
          v17 = *(_QWORD*)(v3 + 136);
          v18 = *(_QWORD*)(v3 + 144);
          v19 = (unsigned int)(v13 >> 5);
          v20 = 0xAAAAAAAAAAAAAAABLL * (v18 - v17);
          if (v19 <= v20) {
            if (v19 < v20) {
              v18 = v17 + 3 * v19;
              *(_QWORD*)(v3 + 144) = v18;
            }
          }
          else {
            GameRoutine_a991b0(v3 + 136, v19 - v20);
            v17 = *(_QWORD*)(v3 + 136);
            v18 = *(_QWORD*)(v3 + 144);
          }
          if (v17 != v18) {
            GameRoutine_1a0ba50(v17, 0, 3 * ((v18 - v17 - 3) / 3uLL) + 3, v14,
                                v15, v16);
          }
          result = GameRoutine_a98560(v3);
          *(_DWORD*)(v3 + 208) = 3;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return GameRoutine_1a09c50(v5);
        }
      }
    }
  }
  return result;
}

_QWORD* GameHr_ad4ea0(_QWORD* a1, long double a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* result;
  __int64 v20;
  _QWORD* v21;

  v3 = a1[12];
  if (v3 != 0) {
    v21 = a1;
    (*(void (**)(__int64, _QWORD**))(*(_QWORD*)v3 + 48LL))(v3, &v21);
  }
  v4 = a1[28];
  v5 = (__int64*)GameData_212bf68;
  if (v4 != 0) {
    v6 = *(_QWORD*)GameData_212bf68;
    a1[29] = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    GameRoutine_1a0a4e0(v6 + v7, a2);
  }
  v8 = a1[25];
  if (v8 != 0) {
    v9 = *v5;
    a1[26] = v8;
    v10 = 128;
    if (*(_QWORD*)(v9 + 200) == 0) {
      v10 = 56;
    }
    GameRoutine_1a0a4e0(v9 + v10, a2);
  }
  v11 = a1[22];
  if (v11 != 0) {
    v12 = *v5;
    a1[23] = v11;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    GameRoutine_1a0a4e0(v12 + v13, a2);
  }
  v14 = a1[19];
  if (v14 != 0) {
    v15 = *v5;
    a1[20] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    GameRoutine_1a0a4e0(v15 + v16, a2);
  }
  v17 = (_QWORD*)a1[12];
  if (v17 == a1 + 8) {
    v18 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_24;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v17 + v18))((__int64)v17);
LABEL_24:
  result = (_QWORD*)a1[6];
  if (result == a1 + 2) {
    v20 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v20 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v20))((__int64)result);
}

void GameHr_ad69c0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v1 = a1[13];
  a1[12] = 0;
  a1[13] = 0;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = a1[11];
  a1[10] = 0;
  a1[11] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_ad6bb0_alt1(a1);
  v4 = (_QWORD*)a1[18];
  if (v4 == a1 + 14) {
    v5 = 32;
    goto LABEL_11;
  }
  if (v4 != nullptr) {
    v5 = 40;
  LABEL_11:
    (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
  }
  v6 = a1[13];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  v7 = a1[11];
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = (_QWORD*)a1[6];
  v9 = fw_memory_g_heap_manager_ptr;
  while (v8 != nullptr) {
    v11 = (__int64)v8;
    v8 = (_QWORD*)*v8;
    GameRoutine_adac20_alt1((_QWORD*)(v11 + 40));
    if ((*(_BYTE*)(v11 + 16) & 1) != 0) {
      v12 = *(_QWORD*)(v11 + 32);
      if (v12 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v13, v12);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
      v10 = 128;
    }
    else {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v10, v11);
  }
  v14 = a1[4];
  a1[4] = 0;
  if (v14 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v15, v14);
  }
}

__int64 GameHr_ad6bb0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;

  v1 = a1[1];
  if (v1 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v1 + 8), v1);
  }
  v3 = a1[2];
  if (v3 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v3 + 8), v3);
  }
  v4 = a1[3];
  if (v4 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v4 + 8), v4);
  }
  v5 = a1[13];
  a1[12] = 0;
  a1[13] = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    GameRoutine_1a09c50(v5);
  }
  v6 = a1[11];
  a1[10] = 0;
  a1[11] = 0;
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    GameRoutine_1a09c50(v6);
  }
  v7 = (_QWORD*)a1[18];
  if (v7 != nullptr) {
    a1[18] = 0;
    v8 = 40;
    if (v7 == a1 + 14) {
      v8 = 32;
    }
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  }
  return GameRoutine_ad7440(a1);
}

__int64 GameHr_ad8980(__int64 result)
{
  _QWORD* v1;
  __int64 i;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((*(_BYTE*)(result + 165) & 1) != 0) {
    return result;
  }
  v1 = *(_QWORD**)(result + 48);
  for (i = result; v1 != nullptr; v1 = (_QWORD*)*v1) {
    v3 = (__int64*)v1[9];
    v4 = (__int64*)v1[10];
    if (v3 != v4) {
      v5 = 16;
      v6 = 0;
      do {
        v7 = *v3;
        v8 = GameRoutine_1a09c70(*v3 + 4);
        v9 = v1[28];
        if (v6 >= (v1[29] - v9) >> 5) {
          GameRoutine_adab70(v8);
        }
        if (*(_BYTE*)(v7 + 52) != 0 && *(_DWORD*)(v9 + v5) == -1) {
          GameRoutine_b362c0(*(_QWORD*)(GameData_21a60d8 + 13424), v9 + v5 - 8,
                             v7 + 4, v8);
        }
        ++v3;
        v5 += 32;
        ++v6;
      } while (v3 != v4);
    }
  }
  result = *(_QWORD*)(i + 144);
  *(_BYTE*)(i + 165) = 1;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
    result = *(_QWORD*)(i + 144);
    *(_QWORD*)(i + 144) = 0;
    if (result == i + 112) {
      v10 = 32;
    }
    else {
      if (result == 0) {
        goto LABEL_18;
      }
      v10 = 40;
    }
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)result + v10))((__int64)result);
  }
LABEL_18:
  v11 = *(_QWORD*)(i + 104);
  *(_QWORD*)(i + 96) = 0;
  *(_QWORD*)(i + 104) = 0;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    result = GameRoutine_1a09c50(v11);
  }
  v12 = *(_QWORD*)(i + 88);
  *(_QWORD*)(i + 80) = 0;
  *(_QWORD*)(i + 88) = 0;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return GameRoutine_1a09c50(v12);
  }
  return result;
}

__int64 GameHr_b71cc0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  _QWORD* v11;
  long double v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  char v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[2];
  char* v22;
  char v23[16];
  __int64 v24;
  _QWORD v25[2];
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  char v31;
  int v32;

  LODWORD(v3) = *(_DWORD*)(a3 + 84);
  v5 = result;
  if ((int)v3 >= 1) {
    v7 = 0;
    do {
      v8 = v7 + 1;
      strcpy(&v23[1], "ShadowMap");
      v27 = 0x1500000000LL;
      v32 = v7 + 1;
      v30 = 0x100000001LL;
      v31 = 1;
      v28 = *(_DWORD*)(a3 + 4 * v7);
      v29 = v28;
      v23[0] = 18;
      *(struct PseudoSret*)(v21) = GameRoutine_1a0a790((unsigned int)v7);
      if ((v21[0] & 1) != 0) {
        v9 = v22;
      }
      else {
        v9 = (char*)v21 + 1;
      }
      if ((v21[0] & 1) != 0) {
        v10 = v21[1];
      }
      else {
        v10 = (unsigned __int64)LOBYTE(v21[0]) >> 1;
      }
      v11 = (_QWORD*)GameRoutine_1a09ce0(v23, v9, v10);
      v14 = v11[1];
      v13 = v11[2];
      v25[0] = *v11;
      v25[1] = v14;
      v26 = v13;
      v11[1] = 0;
      v11[2] = 0;
      *v11 = 0;
      if ((v21[0] & 1) != 0 && v22 != nullptr) {
        v15 = 128;
        if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
          v15 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v15, v12);
      }
      if ((v23[0] & 1) != 0 && v24 != 0) {
        v16 = 128;
        if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
          v16 = 56;
        }
        GameRoutine_1a0a4e0(GameData_2265ee0 + v16, v12);
      }
      result = GameRoutine_b528e0(a2, v25, &v27);
      v18 = v25[0];
      *(_QWORD*)(v5 + 8 * v7) = result;
      if ((v18 & 1) != 0 && v26 != 0) {
        v19 = 128;
        if (*(_QWORD*)(GameData_2265ee0 + 200) == 0) {
          v19 = 56;
        }
        result = GameRoutine_1a0a4e0(GameData_2265ee0 + v19, v17);
      }
      v3 = *(int*)(a3 + 84);
      ++v7;
    } while (v8 < v3);
  }
  v20 = *(int*)(a3 + 80);
  if ((int)v20 < (int)v3) {
    do {
      *(_QWORD*)(v5 + 8 * v20++) = *(_QWORD*)(v5 + 8LL * *(int*)(a3 + 80) - 8);
    } while (v20 < *(int*)(a3 + 84));
  }
  return result;
}

__int64 GameHr_b86fb0(__int64 a1, int a2, float a3)
{
  __int64 v3;
  __int64 result;
  float v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  int v18;

  v3 = *(_QWORD*)(a1 + 360);
  result = *(_QWORD*)(v3 + 8);
  if (result == 0) {
    goto LABEL_7;
  }
  result = GameRoutine_1a0a0c0();
  if (result == 0) {
    goto LABEL_7;
  }
  if (*(_QWORD*)v3 != 0) {
    v8 = *(float*)(v3 + 76);
    *(_DWORD*)(v3 + 72) = a2;
    if (vabds_f32(v8, a3) > 0.00000011921f) {
      *(float*)(v3 + 76) = a3;
      *(_QWORD*)(v3 + 84) = 0;
      *(_QWORD*)(v3 + 96) = 0;
      *(_DWORD*)(v3 + 80) = -1;
      *(_DWORD*)(v3 + 92) = -1;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v13 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = GameRoutine_1a09c50(v13);
    v9 = *(_QWORD*)(a1 + 392);
    if (a2 != 0) {
    LABEL_8:
      v10 = *(_DWORD*)(v9 + 356);
      v11 = *(unsigned __int8*)(v9 + 360);
      if (v10 != a2 || (v11 & 1) == 0) {
        if (v10 != a2 && v11 != 0) {
          GameRoutine_c69ba0(v9);
        }
        *(_DWORD*)(v9 + 356) = a2;
        *(_BYTE*)(v9 + 360) = 1;
        GameRoutine_c6dc40(v9, v9 + 136);
        if (v11 != *(unsigned __int8*)(v9 + 360)) {
          GameRoutine_c69950(v9);
          GameRoutine_c686d0(v9, v9 + 136);
        }
      }
      return GameRoutine_c6ef90(*(_QWORD*)(a1 + 392), a3);
    }
  }
  else {
  LABEL_7:
    v9 = *(_QWORD*)(a1 + 392);
    if (a2 != 0) {
      goto LABEL_8;
    }
  }
  v14 = *(_DWORD*)(v9 + 2112);
  v15 = *(_QWORD*)(GameData_21a60d8 + 13224);
  if ((v14 & 0x80000000) == 0) {
    v16 = *(_DWORD*)(v9 + 552);
    if (v16 != -1) {
      *(_DWORD*)(v15 + 1560LL * v16 + 96LL * v14 + 296) = 0;
    }
  }
  v17 = *(_DWORD*)(v9 + 2116);
  if ((v17 & 0x80000000) == 0) {
    v18 = *(_DWORD*)(v9 + 568);
    if (v18 != -1) {
      *(_DWORD*)(v15 + 1560LL * v18 + 96LL * v17 + 296) = 0;
    }
  }
  *(_DWORD*)(v9 + 368) = 0;
  return result;
}

__int64 GameHr_bbc570(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _DWORD v25[4];
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(a1 + 1664) = 1;
  *(_DWORD*)(a1 + 1676) = 3;
  if ((*(_BYTE*)(v1 + 16700) & 1) != 0) {
    v3 = *(_QWORD*)(v1 + 16672);
    v4 = *(_DWORD*)(v3 + 24);
    v5 = *(_DWORD*)(v3 + 28);
  }
  else {
    v4 = *(_DWORD*)(v1 + 13304);
    v5 = *(_DWORD*)(v1 + 13308);
  }
  v21 = __PAIR64__(v5, v4);
  *(_BYTE*)(a1 + 1667) = 0;
  GameRoutine_bb8af0(a1, (int*)&v21);
  v6 = v21;
  GameRoutine_ba3910(*(_QWORD*)(a1 + 1552), v21);
  v7 = *(_QWORD*)(a1 + 1520);
  v24 = 0x100000001LL;
  memset(v25, 0, 11);
  v23 = v6;
  v8 = *(_QWORD*)(v7 + 184);
  v25[1] = 13;
  v9 = *(_QWORD*)(*(_QWORD*)v8 + 552LL);
  v26 = *(_QWORD*)(*(_QWORD*)v8 + 360LL);
  v10 = *(_QWORD*)(v9 + 16);
  LOBYTE(v25[2]) = 1;
  v27 = v10;
  *(struct PseudoSret*)(&v22) = GameRoutine_53c20(&v23);
  v11 = v22;
  v12 = *(_QWORD*)(v8 + 8);
  v22 = 0;
  *(_QWORD*)(v8 + 8) = v11;
  if (v12 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    v13 = v22;
    v22 = 0;
    if (v13 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
    }
  }
  *(_BYTE*)(v8 + 1032) = 1;
  v24 = 0x100000001LL;
  memset(v25, 0, 11);
  v14 = 0;
  v15 = *(__int64**)(a1 + 1568);
  v16 = *v15;
  v17 = *(unsigned int*)(*v15 + 13240);
  if ((unsigned int)v17 <= 6) {
    v14 = GameData_1b7bcc8[v17];
  }
  v25[1] = v14;
  v23 = *(_QWORD*)(v16 + 13312);
  v18 = *(_QWORD*)(GameData_21a60d8 + 552);
  v26 = *(_QWORD*)(GameData_21a60d8 + 360);
  v27 = *(_QWORD*)(v18 + 16);
  LOBYTE(v25[2]) = 1;
  *(struct PseudoSret*)(&v22) = GameRoutine_53c20(&v23);
  v19 = v22;
  result = v15[6];
  v22 = 0;
  v15[6] = v19;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    result = v22;
    v22 = 0;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  *((_BYTE*)v15 + 56) = 0;
  return result;
}

__int64 GameHr_bbf6f0(__int64* a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 result;
  __int64 v24;
  _QWORD v25[6];

  *a1 = a2;
  v4 = (__int64*)GameData_212bf68;
  v5 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 40, 16, 0);
  GameRoutine_b711f0(v5, a2);
  v6 = *v4;
  v7 = *a1;
  a1[1] = v5;
  v8 = GameRoutine_651b90(v6, 168, 16, 0);
  GameRoutine_b5fb80(v8, v7);
  v9 = *v4;
  v10 = *a1;
  a1[2] = v8;
  v11 = (__int64*)GameRoutine_651b90(v9, 752, 16, 0);
  GameRoutine_b4d840(v11, v10);
  v12 = *v4;
  v13 = *a1;
  a1[3] = (__int64)v11;
  v14 = GameRoutine_651b90(v12, 64, 16, 0);
  GameRoutine_b791d0(v14, v13);
  v15 = *v4;
  v16 = *a1;
  a1[4] = v14;
  v17 = (__int64*)GameRoutine_651b90(v15, 8, 16, 0);
  *v17 = v16;
  a1[5] = (__int64)v17;
  a1[6] = 0;
  v18 = 0;
  *((_BYTE*)a1 + 56) = 0;
  v25[1] = 0x100000001LL;
  memset(&v25[2], 0, 11);
  v19 = *a1;
  v20 = *(unsigned int*)(*a1 + 13240);
  if ((unsigned int)v20 <= 6) {
    v18 = GameData_1b7d8bc[v20];
  }
  HIDWORD(v25[2]) = v18;
  v25[0] = *(_QWORD*)(v19 + 13312);
  v21 = *(_QWORD*)(GameData_21a60d8 + 552);
  v25[4] = *(_QWORD*)(GameData_21a60d8 + 360);
  v25[5] = *(_QWORD*)(v21 + 16);
  LOBYTE(v25[3]) = 1;
  *(struct PseudoSret*)(&v24) = GameRoutine_53c20(v25);
  v22 = v24;
  result = a1[6];
  v24 = 0;
  a1[6] = v22;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    result = v24;
    v24 = 0;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  *((_BYTE*)a1 + 56) = 0;
  return result;
}

__int64* GameHr_beeb60(__int64* result, long double a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = result[4];
  v3 = result;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    result = (__int64*)GameRoutine_1a09c50(v2);
    v4 = *v3;
    if (*v3 == 0) {
      return result;
    }
  }
  else {
    v4 = *result;
    if (*result == 0) {
      return result;
    }
  }
  v5 = v3[1];
  if (v4 == v5) {
  LABEL_23:
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v13 = 56;
    }
    return (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v13, a2);
  }
  do {
    v7 = *(_QWORD**)(v5 - 32);
    if ((_QWORD*)(v5 - 64) == v7) {
      v8 = 32;
    }
    else {
      if (v7 == nullptr) {
        goto LABEL_14;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  LABEL_14:
    v9 = *(_QWORD**)(v5 - 80);
    if ((_QWORD*)(v5 - 112) == v9) {
      v10 = 32;
    }
    else {
      if (v9 == nullptr) {
        goto LABEL_19;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
  LABEL_19:
    result = *(__int64**)(v5 - 128);
    v11 = v5 - 160;
    if ((__int64*)(v5 - 160) == result) {
      v6 = 32;
    LABEL_7:
      result =
          (__int64*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);
      goto LABEL_8;
    }
    if (result != nullptr) {
      v6 = 40;
      goto LABEL_7;
    }
  LABEL_8:
    v5 -= 160;
  } while (v11 != v4);
  v12 = *v3;
  v3[1] = v4;
  if (v12 != 0) {
    goto LABEL_23;
  }
  return result;
}

__int64 GameHr_bf1300(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _BYTE* v13;
  _QWORD* v14;
  __int64 v15;
  _BYTE* v16;
  _QWORD* v17;
  __int64 v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  __int64 v23;
  _BYTE* v24;
  __int64 v25;
  __int64 v26;
  _BYTE v27[32];
  _BYTE* v28;
  _BYTE v29[32];
  _BYTE* v30;
  _BYTE v31[32];
  _BYTE* v32;
  __int64 v33;
  __int64 v34;

  v2 = (_QWORD*)a1[4];
  if (v2 != nullptr) {
    if (v2 == a1) {
      v4 = a1;
      v5 = a1[4];
      v28 = v27;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, _BYTE*))(
          *v2 + 24LL))((void*)v2, v5, v27);
      a1 = v4;
    }
    else {
      v28 = (_BYTE*)a1[4];
      a1[4] = 0;
    }
  }
  else {
    v28 = nullptr;
  }
  v6 = (_QWORD*)a1[10];
  if (v6 != nullptr) {
    if (v6 == a1 + 6) {
      v30 = v29;
      v7 = a1;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _BYTE*))(
          *v6 + 24LL))((void*)v6, v6, v29);
      a1 = v7;
    }
    else {
      v30 = (_BYTE*)a1[10];
      a1[10] = 0;
    }
  }
  else {
    v30 = nullptr;
  }
  v8 = (_QWORD*)a1[16];
  if (v8 != nullptr) {
    if (v8 == a1 + 12) {
      v32 = v31;
      v9 = a1;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _BYTE*))(
          *v8 + 24LL))((void*)v8, v8, v31);
      a1 = v9;
    }
    else {
      v32 = (_BYTE*)a1[16];
      a1[16] = 0;
    }
  }
  else {
    v32 = nullptr;
  }
  v10 = a1[19];
  v33 = a1[18];
  v34 = v10;
  GameRoutine_bf1600(a1, a2);
  v11 = (_QWORD*)a2[4];
  a2[4] = 0;
  if (v11 == a2) {
    v12 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_21;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
LABEL_21:
  v13 = v28;
  if (v28 != nullptr) {
    if (v28 == v27) {
      a2[4] = a2;
      (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v13 + 24LL))(v13, a2);
    }
    else {
      a2[4] = v28;
      v28 = nullptr;
    }
  }
  else {
    a2[4] = 0;
  }
  v14 = (_QWORD*)a2[10];
  a2[10] = 0;
  if (v14 == a2 + 6) {
    v15 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_31;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v14 + v15))((__int64)v14);
LABEL_31:
  v16 = v30;
  if (v30 != nullptr) {
    if (v30 == v29) {
      a2[10] = a2 + 6;
      (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v16 + 24LL))(v16, a2 + 6);
    }
    else {
      a2[10] = v30;
      v30 = nullptr;
    }
  }
  else {
    a2[10] = 0;
  }
  v17 = (_QWORD*)a2[16];
  a2[16] = 0;
  if (v17 == a2 + 12) {
    v18 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_41;
    }
    v18 = 40;
  }
  (*(void (**)(__int64))(*v17 + v18))((__int64)v17);
LABEL_41:
  v19 = v32;
  if (v32 == nullptr) {
    a2[16] = 0;
    goto LABEL_45;
  }
  if (v32 != v31) {
    a2[16] = v32;
    v32 = nullptr;
  LABEL_45:
    v20 = v34;
    a2[18] = v33;
    a2[19] = v20;
    goto LABEL_46;
  }
  a2[16] = a2 + 12;
  (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)v19 + 24LL))(v19, a2 + 12);
  v24 = v32;
  v25 = v34;
  a2[18] = v33;
  a2[19] = v25;
  if (v24 == v31) {
    v26 = 32;
  }
  else {
    if (v24 == nullptr) {
      goto LABEL_46;
    }
    v26 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v24 + v26))((__int64)v24);
LABEL_46:
  if (v30 == v29) {
    v21 = 32;
  }
  else {
    if (v30 == nullptr) {
      goto LABEL_51;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v30 + v21))((__int64)v30);
LABEL_51:
  result = (__int64)v28;
  if (v28 == v27) {
    v23 = 32;
  }
  else {
    if (v28 == nullptr) {
      return result;
    }
    v23 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v28 + v23))((__int64)v28);
}

_QWORD* GameHr_bf1600(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v3;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;

  v3 = (_QWORD*)a1[4];
  a1[4] = 0;
  if (v3 == a1) {
    v5 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v3 + v5))((__int64)v3);
LABEL_6:
  v6 = (_QWORD*)a2[4];
  if (v6 != nullptr) {
    if (v6 == a2) {
      a1[4] = a1;
      (*(void (**)(_QWORD, _QWORD*))(*(_QWORD*)a2[4] + 24LL))(a2[4], a1);
    }
    else {
      a1[4] = v6;
      a2[4] = 0;
    }
  }
  else {
    a1[4] = 0;
  }
  v7 = (_QWORD*)a1[10];
  a1[10] = 0;
  if (v7 == a1 + 6) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_16;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_16:
  v9 = (_QWORD*)a2[10];
  if (v9 != nullptr) {
    if (v9 == a2 + 6) {
      a1[10] = a1 + 6;
      (*(void (**)(_QWORD, _QWORD*))(*(_QWORD*)a2[10] + 24LL))(a2[10], a1 + 6);
    }
    else {
      a1[10] = v9;
      a2[10] = 0;
    }
  }
  else {
    a1[10] = 0;
  }
  v10 = (_QWORD*)a1[16];
  a1[16] = 0;
  if (v10 == a1 + 12) {
    v11 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_26;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
LABEL_26:
  v12 = (_QWORD*)a2[16];
  if (v12 != nullptr) {
    if (v12 == a2 + 12) {
      a1[16] = a1 + 12;
      (*(void (**)(_QWORD, _QWORD*))(*(_QWORD*)a2[16] + 24LL))(a2[16], a1 + 12);
    }
    else {
      a1[16] = v12;
      a2[16] = 0;
    }
  }
  else {
    a1[16] = 0;
  }
  a1[19] = a2[19];
  a1[18] = a2[18];
  return a1;
}

__int64 GameHr_bf9b40(__int64 result, long double a2)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = *(_QWORD**)(result + 16);
  v3 = (__int64*)result;
  v4 = GameData_212bf68;
  if (v2 != nullptr) {
    do {
      v6 = (_QWORD*)*v2;
      v7 = (_QWORD*)v2[22];
      if (v7 == v2 + 18) {
        v8 = 32;
      }
      else {
        if (v7 == nullptr) {
          goto LABEL_12;
        }
        v8 = 40;
      }
      (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
    LABEL_12:
      v9 = (_QWORD*)v2[16];
      if (v9 == v2 + 12) {
        v10 = 32;
        goto LABEL_16;
      }
      if (v9 != nullptr) {
        v10 = 40;
      LABEL_16:
        (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
      }
      v11 = v2[4];
      if (v11 != 0) {
        v12 = *(_QWORD*)v4;
        v2[5] = v11;
        if (*(_QWORD*)(v12 + 200) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        GameRoutine_1a0a4e0(v12 + v13, a2);
      }
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)v4 + v5, a2);
      v2 = v6;
    } while (v6 != nullptr);
  }
  v14 = *v3;
  *v3 = 0;
  if (v14 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v15 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v4 + v15, a2);
  }
  return result;
}

__int64* GameHr_bfa220(__int64* result, unsigned __int64* a2, long double a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v3 = result[1];
  if (v3 == 0 || result[3] == 0) {
    return result;
  }
  v5 = *a2;
  v6 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v7 = *a2;
    if (v5 >= v3) {
      v7 = v5 % v3;
    }
  }
  else {
    v7 = v5 & v6;
  }
  v8 = *result;
  v9 = *(__int64***)(*result + 8 * v7);
  if (v9 == nullptr) {
    return result;
  }
  v10 = *v9;
  if (*v9 == nullptr) {
    return result;
  }
  if ((v3 & v6) == 0) {
    while (1) {
      v12 = v10[1];
      if (v12 == v5) {
        if (v10[2] == v5) {
          goto LABEL_25;
        }
      }
      else if ((v12 & v6) != v7) {
        return result;
      }
      v10 = (__int64*)*v10;
      if (v10 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v5) {
      break;
    }
    if (v11 >= v3) {
      v11 %= v3;
    }
    if (v11 != v7) {
      return result;
    }
  LABEL_14:
    v10 = (__int64*)*v10;
    if (v10 == nullptr) {
      return result;
    }
  }
  if (v10[2] != v5) {
    goto LABEL_14;
  }
LABEL_25:
  if ((v3 & v6) != 0) {
    if (v5 >= v3) {
      v5 %= v3;
    }
  }
  else {
    v5 &= v6;
  }
  v13 = *(__int64**)(v8 + 8 * v5);
  do {
    v14 = v13;
    v13 = (__int64*)*v13;
  } while (v13 != v10);
  if (v14 == result + 2) {
    goto LABEL_42;
  }
  v15 = v14[1];
  if ((v3 & v6) != 0) {
    if (v15 >= v3) {
      v15 %= v3;
    }
  }
  else {
    v15 &= v6;
  }
  if (v15 != v5) {
  LABEL_42:
    if (*v10 == 0) {
      goto LABEL_43;
    }
    v16 = *(_QWORD*)(*v10 + 8);
    if ((v3 & v6) != 0) {
      if (v16 >= v3) {
        v16 %= v3;
      }
    }
    else {
      v16 &= v6;
    }
    if (v16 != v5) {
    LABEL_43:
      *(_QWORD*)(v8 + 8 * v5) = 0;
    }
  }
  v17 = *v10;
  if (*v10 != 0) {
    v18 = *(_QWORD*)(v17 + 8);
    if ((v3 & v6) != 0) {
      if (v18 >= v3) {
        v18 %= v3;
      }
    }
    else {
      v18 &= v6;
    }
    if (v18 != v5) {
      *(_QWORD*)(*result + 8 * v18) = v14;
      v17 = *v10;
    }
  }
  *v14 = v17;
  *v10 = 0;
  --result[3];
  v19 = (__int64*)v10[22];
  if (v19 == v10 + 18) {
    v20 = 32;
  LABEL_55:
    (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
  }
  else if (v19 != nullptr) {
    v20 = 40;
    goto LABEL_55;
  }
  v21 = (__int64*)v10[16];
  if (v21 == v10 + 12) {
    v22 = 32;
  LABEL_60:
    (*(void (**)(__int64))(*v21 + v22))((__int64)v21);
  }
  else if (v21 != nullptr) {
    v22 = 40;
    goto LABEL_60;
  }
  v23 = v10[4];
  v24 = GameData_212bf68;
  if (v23 != 0) {
    v25 = *(_QWORD*)GameData_212bf68;
    v10[5] = v23;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    GameRoutine_1a0a4e0(v25 + v26, a3);
  }
  v27 = 128;
  if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
    v27 = 56;
  }
  return (__int64*)GameRoutine_1a0a4e0(*(_QWORD*)v24 + v27, a3);
}

#pragma GCC visibility pop
