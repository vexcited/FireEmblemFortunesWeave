#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_1593d90(__int64*, __int64);
__int64 GameRoutine_159dcc0(__int64 result, __int64);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_609140(__int64, __int64, ...);
__int64 GameRoutine_8229c0();
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 ProcManager_659d40(__int64 result);
__int64 fs_609260(__int64, const char*, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, const char*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN GameData_2259100;
extern _UNKNOWN GameData_2259130;
extern _UNKNOWN GameData_2259160;
extern __int64 (*GameData_210f390[])();
extern __int64 (*GameData_210f410[])();
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_22590d8;
extern __int64 GameData_22590e0;
extern __int64 GameData_22590e8;
extern __int64 GameData_22590f0;
extern __int64 GameData_22590f8;
extern __int64 GameData_2259108;
extern __int64 GameData_2259110;
extern __int64 GameData_2259118;
extern __int64 GameData_2259120;
extern __int64 GameData_2259128;
extern __int64 GameData_2259138;
extern __int64 GameData_2259140;
extern __int64 GameData_2259148;
extern __int64 GameData_2259150;
extern __int64 GameData_2259158;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_204a090;
extern char* GameData_204a190;
extern char GameData_1a9f09e;
int __cxa_guard_acquire(__int64);
int sscanf(const char*, const char*, ...);
unsigned __int64 strlen(const char*);
void GameHr_a51e10(__int64, unsigned int, int, int);
void GameRoutine_1566440(__int64, char);
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64* game_gmap_1351d00(__int64* result, __int64* a2, __int64* a3,
                           __int64* a4, __int64* a5);
bool game_gmap_1351e80(__int64* a1, __int64* a2);
void game_gmap_151d550(float* a1, __int64 a2, char a3);
void game_gmap_151d8a0(__int64 a1, __int64 a2, int a3);
__int64 game_gmap_151dae0(__int64 a1, __int64 a2, int a3);
void game_gmap_151de20(__int64 a1, __int64 a2, int a3);
char* game_gmap_165aa40(char* result, int a2);
__int64 game_gmap_165b180(__int64 a1, __int64 a2, char a3, unsigned int a4);
void game_gmap_17bd0e0(__int64 a1);
bool game_gmap_19022c0();

__int64* game_gmap_1351d00(__int64* result, __int64* a2, __int64* a3,
                           __int64* a4, __int64* a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = *a2;
  v6 = *result;
  v7 = *a3;
  v8 = *(_DWORD*)(*a2 + 84);
  v9 = *(_DWORD*)(*a3 + 84);
  if (v8 >= (signed __int32)*(_DWORD*)(*result + 84)) {
    if (v9 >= v8) {
      v5 = *a3;
    }
    else {
      *a2 = v7;
      *a3 = v5;
      v10 = *result;
      if ((signed __int32)*(_DWORD*)(*a2 + 84) <
          (signed __int32)*(_DWORD*)(*result + 84)) {
        *result = *a2;
        *a2 = v10;
        v5 = *a3;
      }
    }
  }
  else {
    if (v9 < v8) {
      *result = v7;
    LABEL_9:
      *a3 = v6;
      v5 = v6;
      goto LABEL_11;
    }
    *result = v5;
    *a2 = v6;
    v5 = *a3;
    if ((signed __int32)*(_DWORD*)(*a3 + 84) <
        (signed __int32)*(_DWORD*)(v6 + 84)) {
      *a2 = v5;
      goto LABEL_9;
    }
  }
LABEL_11:
  if ((signed __int32)*(_DWORD*)(*a4 + 84) <
      (signed __int32)*(_DWORD*)(v5 + 84)) {
    *a3 = *a4;
    *a4 = v5;
    v11 = *a2;
    if ((signed __int32)*(_DWORD*)(*a3 + 84) <
        (signed __int32)*(_DWORD*)(*a2 + 84)) {
      *a2 = *a3;
      *a3 = v11;
      v12 = *result;
      if ((signed __int32)*(_DWORD*)(*a2 + 84) <
          (signed __int32)*(_DWORD*)(*result + 84)) {
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  v13 = *a4;
  if ((signed __int32)*(_DWORD*)(*a5 + 84) <
      (signed __int32)*(_DWORD*)(*a4 + 84)) {
    *a4 = *a5;
    *a5 = v13;
    v14 = *a3;
    if ((signed __int32)*(_DWORD*)(*a4 + 84) <
        (signed __int32)*(_DWORD*)(*a3 + 84)) {
      *a3 = *a4;
      *a4 = v14;
      v15 = *a2;
      if ((signed __int32)*(_DWORD*)(*a3 + 84) <
          (signed __int32)*(_DWORD*)(*a2 + 84)) {
        *a2 = *a3;
        *a3 = v15;
        v16 = *result;
        if ((signed __int32)*(_DWORD*)(*a2 + 84) <
            (signed __int32)*(_DWORD*)(*result + 84)) {
          *result = *a2;
          *a2 = v16;
        }
      }
    }
  }
  return result;
}

bool game_gmap_1351e80(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v5 = *a1;
      v6 = a1[1];
      v7 = *(a2 - 1);
      v8 = *(_DWORD*)(v6 + 84);
      v9 = *(_DWORD*)(v7 + 84);
      if (v8 < (signed __int32)*(_DWORD*)(*a1 + 84)) {
        if (v9 >= v8) {
          *a1 = v6;
          a1[1] = v5;
          v22 = *(a2 - 1);
          if ((signed __int32)*(_DWORD*)(v22 + 84) <
              (signed __int32)*(_DWORD*)(v5 + 84)) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v7;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 >= v8) {
        return true;
      }
      a1[1] = v7;
      *(a2 - 1) = v6;
      v21 = a1[1];
    LABEL_49:
      v34 = *a1;
      if ((signed __int32)*(_DWORD*)(v21 + 84) <
          (signed __int32)*(_DWORD*)(*a1 + 84)) {
        *a1 = v21;
        a1[1] = v34;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      game_gmap_1351d00(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    v17 = *a1;
    v16 = a1[1];
    v18 = a1[2];
    v19 = *(_DWORD*)(v16 + 84);
    v20 = *(_DWORD*)(v18 + 84);
    if (v19 >= (signed __int32)*(_DWORD*)(*a1 + 84)) {
      if (v20 < v19) {
        a1[1] = v18;
        a1[2] = v16;
        if ((signed __int32)*(_DWORD*)(v18 + 84) <
            (signed __int32)*(_DWORD*)(v17 + 84)) {
          *a1 = v18;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 < v19) {
        *a1 = v18;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if ((signed __int32)*(_DWORD*)(v18 + 84) <
          (signed __int32)*(_DWORD*)(v17 + 84)) {
        a1[1] = v18;
        goto LABEL_44;
      }
    }
    v16 = v18;
  LABEL_46:
    v32 = *(a2 - 1);
    if ((signed __int32)*(_DWORD*)(v32 + 84) >=
        (signed __int32)*(_DWORD*)(v16 + 84)) {
      return true;
    }
    a1[2] = v32;
    *(a2 - 1) = v16;
    v33 = a1[1];
    v21 = a1[2];
    if ((signed __int32)*(_DWORD*)(v21 + 84) >=
        (signed __int32)*(_DWORD*)(v33 + 84)) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v33;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 1);
    v4 = *a1;
    if ((signed __int32)*(_DWORD*)(v3 + 84) <
        (signed __int32)*(_DWORD*)(*a1 + 84)) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  v11 = a1 + 2;
  v10 = a1[2];
  v12 = *a1;
  v13 = a1[1];
  v14 = *(_DWORD*)(v13 + 84);
  v15 = *(_DWORD*)(v10 + 84);
  if (v14 >= (signed __int32)*(_DWORD*)(*a1 + 84)) {
    if (v15 < v14) {
      a1[1] = v10;
      a1[2] = v13;
      if ((signed __int32)*(_DWORD*)(v10 + 84) <
          (signed __int32)*(_DWORD*)(v12 + 84)) {
        *a1 = v10;
        a1[1] = v12;
      }
    }
  }
  else {
    if (v15 >= v14) {
      *a1 = v13;
      a1[1] = v12;
      if ((signed __int32)*(_DWORD*)(v10 + 84) >=
          (signed __int32)*(_DWORD*)(v12 + 84)) {
        goto LABEL_32;
      }
      a1[1] = v10;
    }
    else {
      *a1 = v10;
    }
    a1[2] = v12;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    v27 = *v23;
    v28 = *v11;
    if ((signed __int32)*(_DWORD*)(*v23 + 84) <
        (signed __int32)*(_DWORD*)(v28 + 84)) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(__int64*)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        v31 = (char*)a1 + v29;
        v29 -= 8;
        v28 = *((_QWORD*)v31 - 2);
      } while ((signed __int32)*(_DWORD*)(v27 + 84) <
               (signed __int32)*(_DWORD*)(v28 + 84));
      v26 = (__int64*)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v11 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

void game_gmap_151d550(float* a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  const char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  const char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    char v18[16];
    const char* v19;
  } v18_;

  v18_.v18[0] = 16;
  strcpy(&v18_.v18[1], "DISTANCE");
  GameRoutine_1a09ce0((__int64)v18_.v18, "_SpotNameControl", 0x10u);
  if ((v18_.v18[0] & 1) != 0) {
    v6 = v18_.v19;
  }
  else {
    v6 = &v18_.v18[1];
  }
  v7 = fs_609260(a2 + 800, v6, 1);
  if ((a3 & 1) != 0) {
    v8 = *(_QWORD*)(v7 + 24);
    if (v8 != 0) {
      if (*(_BYTE*)v8 == 48 && *(_BYTE*)(v8 + 1) == 120) {
        sscanf((const char*)v8, "%x", a1 + 2);
      }
      else {
        sscanf((const char*)v8, "%f", a1 + 2);
      }
      if ((v18_.v18[0] & 1) == 0) {
        goto LABEL_19;
      }
    }
    else {
      a1[2] = 0x0.0p+0f;
      if ((v18_.v18[0] & 1) == 0) {
        goto LABEL_19;
      }
    }
  }
  else {
    GameRoutine_609140(v7, (__int64)"0x%x (%f)", *((_DWORD*)a1 + 2), a1[2]);
    if ((v18_.v18[0] & 1) == 0) {
      goto LABEL_19;
    }
  }
  if (v18_.v19 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v18_.v19);
  }
LABEL_19:
  v18_.v18[0] = 18;
  strcpy(&v18_.v18[1], "SCREENPOS");
  GameRoutine_1a09ce0((__int64)v18_.v18, "_SpotNameControl", 0x10u);
  if ((v18_.v18[0] & 1) != 0) {
    v10 = v18_.v19;
  }
  else {
    v10 = &v18_.v18[1];
  }
  v11 = fs_609260(a2 + 800, v10, 1);
  if ((a3 & 1) != 0) {
    v12 = *(_QWORD*)(v11 + 24);
    if (v12 != 0) {
      if (*(_BYTE*)v12 == 48 && *(_BYTE*)(v12 + 1) == 120) {
        sscanf((const char*)v12, "%x", a1 + 3);
      }
      else {
        sscanf((const char*)v12, "%f", a1 + 3);
      }
      if ((v18_.v18[0] & 1) == 0) {
        goto LABEL_37;
      }
    }
    else {
      a1[3] = 0x0.0p+0f;
      if ((v18_.v18[0] & 1) == 0) {
        goto LABEL_37;
      }
    }
  }
  else {
    GameRoutine_609140(v11, (__int64)"0x%x (%f)", *((_DWORD*)a1 + 3), a1[3]);
    if ((v18_.v18[0] & 1) == 0) {
      goto LABEL_37;
    }
  }
  if (v18_.v19 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v13,
                                  (__int64)v18_.v19);
  }
LABEL_37:
  strcpy(v18_.v18, "\nALPHA");
  GameRoutine_1a09ce0((__int64)v18_.v18, "_SpotNameControl", 0x10u);
  if ((v18_.v18[0] & 1) != 0) {
    v14 = v18_.v19;
  }
  else {
    v14 = &v18_.v18[1];
  }
  v15 = fs_609260(a2 + 800, v14, 1);
  if ((a3 & 1) == 0) {
    GameRoutine_609140(v15, (__int64)"0x%x (%f)", *((_DWORD*)a1 + 4), a1[4]);
    if ((v18_.v18[0] & 1) == 0) {
      return;
    }
    goto LABEL_51;
  }
  v16 = *(_QWORD*)(v15 + 24);
  if (v16 == 0) {
    a1[4] = 0x0.0p+0f;
    if ((v18_.v18[0] & 1) == 0) {
      return;
    }
    goto LABEL_51;
  }
  if (*(_BYTE*)v16 == 48 && *(_BYTE*)(v16 + 1) == 120) {
    sscanf((const char*)v16, "%x", a1 + 4);
  }
  else {
    sscanf((const char*)v16, "%f", a1 + 4);
  }
  if ((v18_.v18[0] & 1) != 0) {
  LABEL_51:
    if (v18_.v19 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v18_.v19);
    }
  }
}

void game_gmap_151d8a0(__int64 a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  char** v3;
  const char* v4;
  __int64 v7;
  float* v8;
  const char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  int v14;
  const char* v15;
  char** v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    _QWORD v24[2];
    const char* v25;
  } v24_;

  v3 = &GameData_204a090;
  v4 = "_NameDistance";
  v7 = 0;
  v8 = (float*)(a1 + 20);
  do {
    v9 = v3[v7];
    v10 = strlen(v9);
    if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v11 = v10;
    if (v10 >= 0x17) {
      v13 = a2;
      v14 = a3;
      v15 = v4;
      v16 = v3;
      if ((v10 | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (v10 | 7) + 1;
      }
      v18 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17, 16, 0);
      v19 = v17 | 1;
      v3 = v16;
      v4 = v15;
      a3 = v14;
      a2 = v13;
      v12 = (char*)v18;
      v24_.v24[1] = v11;
      v24_.v25 = (const char*)v18;
      v24_.v24[0] = v19;
    LABEL_11:
      memmove((__int64)v12, (__int64)v9, v11);
      goto LABEL_12;
    }
    v12 = (char*)v24_.v24 + 1;
    LOBYTE(v24_.v24[0]) = 2 * v10;
    if (v10 != 0) {
      goto LABEL_11;
    }
  LABEL_12:
    v12[v11] = 0;
    GameRoutine_1a09ce0((__int64)v24_.v24, v4, 0xDu);
    if ((v24_.v24[0] & 1) != 0) {
      v20 = v24_.v25;
    }
    else {
      v20 = (char*)v24_.v24 + 1;
    }
    v21 = fs_609260(a2 + 800, v20, 1);
    if ((a3 & 1) == 0) {
      GameRoutine_609140(v21, (__int64)"0x%x (%f)", *(_DWORD*)v8, *v8);
      if ((v24_.v24[0] & 1) == 0) {
        goto LABEL_2;
      }
    LABEL_26:
      if (v24_.v25 != nullptr) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v24_.v25);
      }
      goto LABEL_2;
    }
    v22 = *(_QWORD*)(v21 + 24);
    if (v22 == 0) {
      *v8 = 0x0.0p+0f;
      if ((v24_.v24[0] & 1) == 0) {
        goto LABEL_2;
      }
      goto LABEL_26;
    }
    if (*(_BYTE*)v22 == 48 && *(_BYTE*)(v22 + 1) == 120) {
      sscanf((const char*)v22, "%x", v8);
    }
    else {
      sscanf((const char*)v22, "%f", v8);
    }
    if ((v24_.v24[0] & 1) != 0) {
      goto LABEL_26;
    }
  LABEL_2:
    v7 += 2;
    ++v8;
  } while (v7 != 30);
}

__int64 game_gmap_151dae0(__int64 a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  char** v3;
  const char* v4;
  __int64 v7;
  float* v8;
  const char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  int v13;
  __int64 v14;
  const char* v15;
  char** v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _DWORD* v26;
  __int64 v27;
  __int64 result;
  _DWORD* v29;
  struct {
    _QWORD v31[2];
    const char* v32;
  } v31_;

  v3 = &GameData_204a090;
  v4 = "_IconSize";
  v7 = 0;
  v8 = (float*)(a1 + 80);
  do {
    v9 = v3[v7];
    v10 = strlen(v9);
    if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v11 = v10;
    if (v10 >= 0x17) {
      v13 = a3;
      v14 = a2;
      v15 = v4;
      v16 = v3;
      if ((v10 | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (v10 | 7) + 1;
      }
      v18 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17, 16, 0);
      v19 = v17 | 1;
      v3 = v16;
      v4 = v15;
      a2 = v14;
      a3 = v13;
      v12 = (char*)v18;
      v31_.v31[1] = v11;
      v31_.v32 = (const char*)v18;
      v31_.v31[0] = v19;
    LABEL_11:
      memmove((__int64)v12, (__int64)v9, v11);
      goto LABEL_12;
    }
    v12 = (char*)v31_.v31 + 1;
    LOBYTE(v31_.v31[0]) = 2 * v10;
    if (v10 != 0) {
      goto LABEL_11;
    }
  LABEL_12:
    v12[v11] = 0;
    GameRoutine_1a09ce0((__int64)v31_.v31, v4, 9u);
    if ((v31_.v31[0] & 1) != 0) {
      v20 = v31_.v32;
    }
    else {
      v20 = (char*)v31_.v31 + 1;
    }
    v21 = fs_609260(a2 + 800, v20, 1);
    if ((a3 & 1) != 0) {
      v22 = *(_QWORD*)(v21 + 24);
      if (v22 != 0) {
        if (*(_BYTE*)v22 == 48 && *(_BYTE*)(v22 + 1) == 120) {
          sscanf((const char*)v22, "%x", v8);
        }
        else {
          sscanf((const char*)v22, "%f", v8);
        }
        if ((v31_.v31[0] & 1) == 0) {
          goto LABEL_2;
        }
      }
      else {
        *v8 = 0x0.0p+0f;
        if ((v31_.v31[0] & 1) == 0) {
          goto LABEL_2;
        }
      }
    }
    else {
      GameRoutine_609140(v21, (__int64)"0x%x (%f)", *(_DWORD*)v8, *v8);
      if ((v31_.v31[0] & 1) == 0) {
        goto LABEL_2;
      }
    }
    if (v31_.v32 != nullptr) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v31_.v32);
    }
  LABEL_2:
    v7 += 2;
    ++v8;
  } while (v7 != 30);
  v24 = fs_609260(a2 + 800, "HideSpot_IconSize", 1);
  if ((a3 & 1) != 0) {
    v25 = *(_QWORD*)(v24 + 24);
    v26 = (_DWORD*)(a1 + 660);
    if (v25 != 0) {
      if (*(_BYTE*)v25 == 48 && *(_BYTE*)(v25 + 1) == 120) {
        sscanf((const char*)v25, "%x", v26);
      }
      else {
        sscanf((const char*)v25, "%f", v26);
      }
    }
    else {
      *v26 = 0;
    }
    result = *(_QWORD*)(fs_609260(a2 + 800, "HellGateSpot_IconSize", 1) + 24);
    v29 = (_DWORD*)(a1 + 664);
    if (result != 0) {
      if (*(_BYTE*)result == 48 && *(_BYTE*)(result + 1) == 120) {
        return sscanf((const char*)result, "%x", v29);
      }
      else {
        return sscanf((const char*)result, "%f", v29);
      }
    }
    else {
      *v29 = 0;
    }
  }
  else {
    GameRoutine_609140(v24, (__int64)"0x%x (%f)", *(_DWORD*)(a1 + 660),
                       *(float*)(a1 + 660));
    v27 = fs_609260(a2 + 800, "HellGateSpot_IconSize", 1);
    return GameRoutine_609140(v27, (__int64)"0x%x (%f)", *(_DWORD*)(a1 + 664),
                              *(float*)(a1 + 664));
  }
  return result;
}

void game_gmap_151de20(__int64 a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  char** v3;
  const char* v4;
  __int64 v7;
  float* v8;
  const char* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  int v14;
  const char* v15;
  char** v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    _QWORD v24[2];
    const char* v25;
  } v24_;

  v3 = &GameData_204a190;
  v4 = "_RouteSize";
  v7 = 0;
  v8 = (float*)(a1 + 140);
  do {
    v9 = v3[v7];
    v10 = strlen(v9);
    if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v11 = v10;
    if (v10 >= 0x17) {
      v13 = a2;
      v14 = a3;
      v15 = v4;
      v16 = v3;
      if ((v10 | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (v10 | 7) + 1;
      }
      v18 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17, 16, 0);
      v19 = v17 | 1;
      v3 = v16;
      v4 = v15;
      a3 = v14;
      a2 = v13;
      v12 = (char*)v18;
      v24_.v24[1] = v11;
      v24_.v25 = (const char*)v18;
      v24_.v24[0] = v19;
    LABEL_11:
      memmove((__int64)v12, (__int64)v9, v11);
      goto LABEL_12;
    }
    v12 = (char*)v24_.v24 + 1;
    LOBYTE(v24_.v24[0]) = 2 * v10;
    if (v10 != 0) {
      goto LABEL_11;
    }
  LABEL_12:
    v12[v11] = 0;
    GameRoutine_1a09ce0((__int64)v24_.v24, v4, 0xAu);
    if ((v24_.v24[0] & 1) != 0) {
      v20 = v24_.v25;
    }
    else {
      v20 = (char*)v24_.v24 + 1;
    }
    v21 = fs_609260(a2 + 800, v20, 1);
    if ((a3 & 1) == 0) {
      GameRoutine_609140(v21, (__int64)"0x%x (%f)", *(_DWORD*)v8, *v8);
      if ((v24_.v24[0] & 1) == 0) {
        goto LABEL_2;
      }
    LABEL_26:
      if (v24_.v25 != nullptr) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v24_.v25);
      }
      goto LABEL_2;
    }
    v22 = *(_QWORD*)(v21 + 24);
    if (v22 == 0) {
      *v8 = 0x0.0p+0f;
      if ((v24_.v24[0] & 1) == 0) {
        goto LABEL_2;
      }
      goto LABEL_26;
    }
    if (*(_BYTE*)v22 == 48 && *(_BYTE*)(v22 + 1) == 120) {
      sscanf((const char*)v22, "%x", v8);
    }
    else {
      sscanf((const char*)v22, "%f", v8);
    }
    if ((v24_.v24[0] & 1) != 0) {
      goto LABEL_26;
    }
  LABEL_2:
    v7 += 2;
    ++v8;
  } while (v7 != 18);
}

char* game_gmap_165aa40(char* result, int a2)
{
  char* v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  char* v23;
  struct {
    __int64* v24;
    char* v25;
    __int128 v26;
    unsigned __int64 v27;
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
  } v24_;

  if ((a2 & 0x80000000) == 0) {
    v2 = result;
    if (a2 < (signed __int32)*((_DWORD*)result + 8)) {
      v3 = *((_QWORD*)result + 5);
      v4 = *((_QWORD*)result + 6);
      *((_DWORD*)result + 16) = a2;
      if (v3 != v4) {
        do {
          if (*(_DWORD*)(v3 + 64) != *((_DWORD*)result + 16)) {
            *(_BYTE*)(*(_QWORD*)v3 + 88LL) &= ~1u;
            *(_BYTE*)(*(_QWORD*)(v3 + 8) + 88LL) &= ~1u;
          }
          v3 += 72;
        } while (v3 != v4);
        v3 = *((_QWORD*)result + 5);
        v4 = *((_QWORD*)result + 6);
      }
      for (; v3 != v4; v3 += 72) {
        if (*(_DWORD*)(v3 + 64) == *((_DWORD*)v2 + 16)) {
          *(_BYTE*)(*(_QWORD*)v3 + 88LL) |= 1u;
          *(_BYTE*)(*(_QWORD*)(v3 + 8) + 88LL) |= 1u;
        }
        v6 = *(_QWORD*)(v3 + 16);
        if (*(_QWORD*)(v3 + 24) != v6) {
          v7 = 0;
          v8 = 0;
          do {
            v9 = *(__int64**)(v6 + v7);
            v10 = ui_LayoutAccessor_FindAlignment(
                v9, *(const char**)(*(_QWORD*)(v3 + 40) + 8 * v8));
            if (v10 != 0) {
              Alignment_56b600(v10);
              v11 = v9[1];
              if (v11 != 0) {
                v12 = std___1___shared_weak_count_lock(v11);
                if (v12 != 0) {
                  v13 = v12;
                  if (*v9 != 0) {
                    ControlCreator_13633c0(*v9);
                  }
                  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
                    std___1___shared_weak_count___release_weak(v13);
                  }
                }
              }
            }
            v6 = *(_QWORD*)(v3 + 16);
            ++v8;
            v7 += 16;
          } while (v8 < (*(_QWORD*)(v3 + 24) - v6) >> 4);
        }
      }
      v14 = *((__int64**)v2 + 1);
      v15 = ui_LayoutAccessor_FindAlignment(v14, "A_Info00");
      if (v15 != 0) {
        Alignment_56b600(v15);
        v16 = v14[1];
        if (v16 != 0) {
          v17 = std___1___shared_weak_count_lock(v16);
          if (v17 != 0) {
            v18 = v17;
            if (*v14 != 0) {
              ControlCreator_13633c0(*v14);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
              std___1___shared_weak_count___release_weak(v18);
            }
          }
        }
      }
      LayoutAccessor_1560070((void*)(&v24_.v24), *((__int64**)v2 + 1),
                             "L_KeyHelp");
      result = v24_.v25;
      if (v24_.v25 != nullptr) {
        v19 = std___1___shared_weak_count_lock((__int64)v24_.v25);
        v20 = v24_.v24;
        result = v24_.v25;
        if (v24_.v25 != nullptr) {
          result = (char*)std___1___shared_weak_count___release_weak(
              (__int64)v24_.v25);
        }
        if (v19 != 0 && v20 != nullptr) {
          BYTE12(v24_.v26) = 0;
          v24_.v27 = 0;
          v24_.v24 = (__int64*)&GameData_1a9f09e;
          v24_.v25 = &GameData_1a9f09e;
          LOBYTE(v24_.v26) = 1;
          *(_QWORD*)((char*)&v24_.v26 + 4) = 0x200000006LL;
          GameRoutine_1593d90(v20, (__int64)&v24_.v24);
          v21 = msg_MessageManager_instance__ptr[0];
          GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, a2 + 1,
                        0);
          v22 = *v21;
          v24_.v28 = -1;
          v24_.v29 = -1;
          v24_.v30 = -1;
          v24_.v31 = -1;
          v24_.v32 = -1;
          v24_.v33 = -1;
          v24_.v34 = -1;
          v24_.v35 = -1;
          v24_.v36 = -1;
          v24_.v37 = -1;
          v24_.v38 = -1;
          v24_.v39 = -1;
          v24_.v24 = GameData_212e348 + 2;
          v24_.v25 = (char*)0xFFFF0001FFFF0000LL;
          *(_QWORD*)&v24_.v26 = 0xFFFF0004FFFF0002LL;
          *((_QWORD*)&v24_.v26 + 1) = 0xFFFF0006FFFF0005LL;
          v24_.v40 = 8;
          v24_.v27 = 0xFFFF0008FFFF0007LL;
          v23 = GameRoutine_a4dbe0(v22, "MID_KeyHelp_GmapSpotPage", 0);
          result = (char*)GameRoutine_159dcc0((__int64)v20, (__int64)v23);
        }
        else if (v19 == 0) {
          return result;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          return (char*)std___1___shared_weak_count___release_weak(v19);
        }
      }
    }
  }
  return result;
}

__int64 game_gmap_165b180(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 result;
  __int64* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  int v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;
  struct {
    __int64 v20;
    __int64 v21;
  } v20_;

  result = *(_QWORD*)(a2 + 8);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v9 = *(__int64**)a2;
      v10 = result;
      if (*(_QWORD*)a2 == 0) {
      LABEL_13:
        if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
          return std___1___shared_weak_count___release_weak(v10);
        }
        return result;
      }
      v17 = a4;
      if ((a3 & 1) != 0) {
        v11 = "Default";
      }
      else {
        v11 = "Animal";
      }
      LayoutAccessor_1562cf0((__int64)v9, (unsigned int*)v11);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
      if ((result & 1) != 0) {
      LABEL_8:
        if ((a3 & 1) != 0) {
          v12 = *(_QWORD*)(a2 + 8);
          v18_.v18 = *(__int64**)a2;
          v18_.v19 = v12;
          if (v12 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                      memory_order_relaxed);
          }
          (*(void (**)(__int64, __int64**, _QWORD))(*(_QWORD*)a1 + 72LL))(
              a1, &v18_.v18, v17);
          result = v18_.v19;
          if (v18_.v19 != 0) {
            result = std___1___shared_weak_count___release_weak(v18_.v19);
          }
        }
        goto LABEL_13;
      }
      v13 = 0;
      while (1) {
        v14 = game_util_Format("L_Item%02d", v13);
        LayoutAccessor_1560070((void*)(&v20_.v20), v9, v14);
        result = v20_.v21;
        if (v20_.v21 != 0) {
          v15 = std___1___shared_weak_count_lock(v20_.v21);
          v16 = v20_.v20;
          result = v20_.v21;
          if (v20_.v21 != 0) {
            result = std___1___shared_weak_count___release_weak(v20_.v21);
          }
          if (v15 != 0 && v16 != 0) {
            result = LayoutAccessor_1562cf0(v16, (unsigned int*)v11);
          LABEL_25:
            if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
              result = std___1___shared_weak_count___release_weak(v15);
            }
            goto LABEL_17;
          }
          if (v15 != 0) {
            goto LABEL_25;
          }
        }
      LABEL_17:
        if (++v13 == 8) {
          goto LABEL_8;
        }
      }
    }
  }
  return result;
}

void game_gmap_17bd0e0(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    _QWORD* v31;
    __int64 v32;
    _QWORD* v33;
  } v31_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259100,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2259100) != 0) {
    BYTE4(GameData_22590f0) = 0;
    GameData_22590f8 = 0;
    GameData_22590d8 = (__int64)&GameData_1a9f09e;
    GameData_22590e0 = (__int64)"MID_KeyHelp_Menu";
    LOBYTE(GameData_22590e8) = 1;
    *(__int64*)((char*)&GameData_22590e8 + 4) = 0xB0000000BLL;
    __cxa_guard_release((__int64)&GameData_2259100);
  }
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v4 = GameData_22590f0;
  v5 = v3;
  v3[2] = GameData_22590e8;
  v3[3] = v4;
  v3[4] = GameData_22590f8;
  v6 = GameData_22590e0;
  *v3 = GameData_22590d8;
  v3[1] = v6;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire((__int64)&GameData_2259130) != 0) {
    BYTE4(GameData_2259120) = 0;
    GameData_2259128 = 0;
    GameData_2259108 = (__int64)&GameData_1a9f09e;
    GameData_2259110 = (__int64)"MID_KeyHelp_GmapMap";
    LOBYTE(GameData_2259118) = 1;
    *(__int64*)((char*)&GameData_2259118 + 4) = 0xB00000007LL;
    __cxa_guard_release((__int64)&GameData_2259130);
  }
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, 80, 16, 0);
  v8 = GameData_2259128;
  v9 = v7;
  v10 = v7 + 10;
  v31_.v31 = v7;
  v31_.v33 = v7 + 10;
  v7[8] = GameData_2259120;
  v7[9] = v8;
  v11 = GameData_2259118;
  v12 = GameData_2259108;
  v7[6] = GameData_2259110;
  v7[7] = v11;
  v7[4] = v5[4];
  v7[5] = v12;
  v13 = v5[3];
  v7[2] = v5[2];
  v7[3] = v13;
  v14 = v5[1];
  *v7 = *v5;
  v7[1] = v14;
  v15 = 128;
  if (*(_QWORD*)(*v2 + 200) == 0) {
    v15 = 56;
  }
  nn_mem_StandardAllocator_Free(*v2 + v15, (__int64)v5);
  v31_.v32 = (__int64)v10;
  if ((GameRoutine_8229c0() & 1) != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2259160,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire((__int64)&GameData_2259160) != 0) {
      GameData_2259158 = 0;
      GameData_2259138 = (__int64)&GameData_1a9f09e;
      GameData_2259140 = (__int64)&GameData_1a9f09e;
      LOBYTE(GameData_2259148) = 1;
      *(__int64*)((char*)&GameData_2259148 + 4) = 0xB00000002LL;
      BYTE4(GameData_2259150) = 4;
      __cxa_guard_release((__int64)&GameData_2259160);
    }
    v16 = (_QWORD*)fw_memory_HeapManager_Allocate(*v2, 160, 16, 0);
    v17 = GameData_2259158;
    v18 = v16;
    v31_.v31 = v16;
    v16[13] = GameData_2259150;
    v16[14] = v17;
    v19 = GameData_2259148;
    v16[11] = GameData_2259140;
    v16[12] = v19;
    v20 = v9[5];
    v21 = GameData_2259138;
    v16[4] = v9[4];
    v16[5] = v20;
    v22 = v9[3];
    v16[2] = v9[2];
    v16[3] = v22;
    v23 = v9[8];
    v16[9] = v9[9];
    v16[10] = v21;
    v24 = v9[6];
    v16[7] = v9[7];
    v16[8] = v23;
    v16[6] = v24;
    v25 = v9[1];
    *v16 = *v9;
    v16[1] = v25;
    v26 = *v2;
    v27 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v27 = 56;
    }
    v31_.v33 = v16 + 20;
    nn_mem_StandardAllocator_Free(v26 + v27, (__int64)v9);
    v31_.v32 = (__int64)(v18 + 15);
  }
  GameRoutine_1566440((__int64)&v31_.v31, 0);
  v28 = (__int64)v31_.v31;
  *(_DWORD*)(a1 + 5856) |= 0x20000u;
  if (v28 != 0) {
    v29 = *v2;
    v31_.v32 = v28;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(v29 + v30, v28);
  }
}

bool game_gmap_19022c0()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  struct {
    _BYTE v9[32];
    _QWORD* v10;
  } v9_;

  v4_.v4[0] = GameData_210f410;
  v4_.v4[1] = &v6;
  v4_.v5 = v4_.v4;
  v7_.v8 = v7_.v7;
  v6 = 0;
  v7_.v7[0] = GameData_210f410;
  v7_.v7[1] = &v6;
  v0 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v0[3] = &v6;
  v9_.v10 = v0;
  *v0 = GameData_210f390;
  v0[2] = GameData_210f410;
  v0[6] = v0 + 2;
  ProcManager_659d40((__int64)v9_.v9);
  (*(void (**)(_QWORD*))(*v0 + 40LL))(v0);
  if (v7_.v8 == v7_.v7) {
    v1 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v7_.v8 + v1))((__int64)v7_.v8);
LABEL_6:
  if (v4_.v5 == v4_.v4) {
    v2 = 32;
    goto LABEL_10;
  }
  if (v4_.v5 != nullptr) {
    v2 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v4_.v5 + v2))((__int64)v4_.v5);
  }
  return v6 != 0;
}

#pragma GCC visibility pop
