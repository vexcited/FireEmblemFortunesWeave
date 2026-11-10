#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, long double);
__int64 GameRoutine_1563280(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_1593d90(_QWORD, _QWORD);
extern __int16 GameData_21eea60;
long double GameRoutine_16df7a0(void);
__int64 ProcObeliskResumeMenu_Unknown2(__int64 a1);
__int64 ProcObeliskResumeMenu_Unknown84(__int64 a1);
__int64 GameRoutine_17e4db0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f8a870(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_212efc0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char* GameData_20660e0[8];
void __attribute__((noreturn)) GameRoutine_1726580(void);
void __attribute__((noreturn)) GameRoutine_60a210(void);
void __attribute__((noreturn)) String_60a1d0(void);
__int64 ProcObeliskResumeMenu_1726360(__int64* a1, __int64* a2);
__int64 ProcObeliskResumeMenu_1726d70(__int64 a1);
unsigned __int64 ProcObeliskResumeMenu_1727210(unsigned __int64 result,
                                               __int64 a2, unsigned int a3);
__int64 ProcObeliskResumeMenu_1727400(__int64* a1);
__int64
game_facility_anonymous_ProcObeliskResumeMenu_ACall_closure_Invoke(__int64 a1);
__int64 GameRoutine_158a7c0(_QWORD);
__int64 GameRoutine_1840e20(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_15744f0(_QWORD, _QWORD, _QWORD);
__int64 ProcObeliskResumeMenu_17276f0_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "ProcObeliskResumeMenu_17276f0");
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__n128 ProcObeliskResumeMenu_1726d70_alt1(_QWORD) __asm__(
    "ProcObeliskResumeMenu_1726d70");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool game_879ce0(__int64, _QWORD*, __int64);
char* GameRoutine_874b20(unsigned __int8, unsigned __int8, int, int);
extern __int64 (*GameData_2001310[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
struct PseudoSret LayoutAccessor_1560070(_QWORD, _QWORD);
__n128 ProcObeliskResumeMenu_Unknown89(__int64 a1);
__int64 ProcObeliskResumeMenu_Unknown102(__int64 a1);
__n128 ProcObeliskResumeMenu_1727070(__int64 a1);
__n128 ProcObeliskResumeMenu_17276f0(__int64 a1, unsigned __int8 a2, char a3);

__int64 ProcObeliskResumeMenu_Unknown2(__int64 a1)
{
  long double v2;
  __int64 result;
  long double v4;
  long double v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int16* v10;
  __int16* v11;

  v2 = GameRoutine_16df7a0();
  result = GameRoutine_1563280(a1 + 848, "In_L", 0, v2);
  if ((result & 1) == 0) {
    result = GameRoutine_1563280(a1 + 848, "In_R", 0, v4);
    if ((result & 1) == 0) {
      v6 = *(_QWORD*)(a1 + 1088);
      v7 = *(int*)(a1 + 1076);
      if (v7 < (*(_QWORD*)(a1 + 1096) - v6) >> 2) {
        v7 = *(int*)(v6 + 4 * v7);
      }
      v8 = *(_QWORD*)(a1 + 1216);
      v9 = 0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(a1 + 1224) - v8) >> 4);
      v10 = (__int16*)(v8 + 112LL * (int)v7);
      if (v9 <= v7) {
        v11 = &GameData_21eea60;
      }
      else {
        v11 = v10;
      }
      if (*(_DWORD*)(a1 + 1432) == *((unsigned __int8*)v11 + 12)) {
        LODWORD(v5) = 1.0;
        return GameRoutine_1562680(a1 + 848, "Wait", v5);
      }
    }
  }
  return result;
}

__int64 ProcObeliskResumeMenu_Unknown84(__int64 a1)
{
  __int64 v2;
  int v3;
  _QWORD v5[2];
  char v6;
  int v7;
  int v8;
  char v9;
  __int64 v10;

  v2 = GameRoutine_155fbe0(a1 + 848, "L_KeyHelp");
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v9 = 0;
  v10 = 0;
  v5[0] = "OpenStatus";
  v5[1] = "MID_KeyHelp_Status";
  v6 = 1;
  v7 = 2;
  v8 = v3;
  return GameRoutine_1593d90(v2, v5);
}

__n128 ProcObeliskResumeMenu_Unknown89(__int64 a1)
{
  __n128 result;

  if (*(_BYTE*)(a1 + 1440) == 1) {
    *(_BYTE*)(a1 + 1440) = 0;
    return ProcObeliskResumeMenu_1726d70_alt1(a1);
  }
  return result;
}

__int64 ProcObeliskResumeMenu_Unknown102(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int16* v7;
  __int16* v8;
  int v9;
  int v10;
  unsigned __int8 v14;
  __int64 v15;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;
  _QWORD v19[4];

  v3 = *(_QWORD*)(a1 + 1088);
  v4 = *(int*)(a1 + 1076);
  if (v4 < (*(_QWORD*)(a1 + 1096) - v3) >> 2) {
    v4 = *(int*)(v3 + 4 * v4);
  }
  v5 = *(_QWORD*)(a1 + 1216);
  v6 = 0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(a1 + 1224) - v5) >> 4);
  v7 = (__int16*)(v5 + 112LL * (int)v4);
  if (v6 <= v4) {
    v8 = &GameData_21eea60;
  }
  else {
    v8 = v7;
  }
  v9 = *((unsigned __int8*)v8 + 11);
  v10 = *((unsigned __int8*)v8 + 12);
  if (v9 == 1 && v10 == 1) {
    return 0;
  }
  v19[2] = v1;
  v19[3] = v2;
  if (v10 == 1 && v9 == 2) {
    v14 = 6;
  }
  else {
    v14 = 7;
  }
  v19[0] = GameRoutine_874b20(v14, *(_BYTE*)(a1 + 1200), v9, v10);
  v19[1] = strlen(v19[0]);
  v17_.v17[0] = GameData_2001310;
  v17_.v18 = v17_.v17;
  game_879ce0(a1, v19, (__int64)v17_.v17);
  if (v17_.v18 == v17_.v17) {
    v15 = 32;
    goto LABEL_21;
  }
  if (v17_.v18 != nullptr) {
    v15 = 40;
  LABEL_21:
    (*(void (**)(__int64))(*v17_.v18 + v15))((__int64)v17_.v18);
  }
  return 10;
}

__int64 ProcObeliskResumeMenu_1726360(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
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
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;

  v2 = *a1;
  v3 = a1[1];
  v4 = v3 - *a1;
  v5 = 0x6DB6DB6DB6DB6DB7LL * (v4 >> 4) + 1;
  if (v5 > 0x249249249249249LL) {
    GameRoutine_1726580();
  }
  if (0xDB6DB6DB6DB6DB6ELL * ((a1[2] - v2) >> 4) > v5) {
    v5 = 0xDB6DB6DB6DB6DB6ELL * ((a1[2] - v2) >> 4);
  }
  if ((unsigned __int64)(0x6DB6DB6DB6DB6DB7LL * ((a1[2] - v2) >> 4)) >=
      0x124924924924924LL) {
    v5 = 0x249249249249249LL;
  }
  if (v5 > 0x249249249249249LL) {
    GameRoutine_60a210();
  }
  v8 = fw_memory_g_heap_manager_ptr;
  v9 = 112 * v5;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       112 * v5, 16, 0);
  v11 = a2[3];
  v12 = v10 + v4;
  v13 = a2[4];
  v14 = *((_BYTE*)a2 + 40);
  *(_QWORD*)(v12 + 16) = a2[2];
  *(_QWORD*)(v12 + 24) = v11;
  v15 = *a2;
  v16 = a2[1];
  *(_QWORD*)(v12 + 32) = v13;
  LODWORD(v13) = *(_DWORD*)((char*)a2 + 42);
  *(_BYTE*)(v12 + 40) = v14;
  *(_QWORD*)v12 = v15;
  *(_QWORD*)(v12 + 8) = v16;
  LOWORD(v16) = *((_WORD*)a2 + 23);
  *(_DWORD*)(v12 + 42) = v13;
  v17 = v10 + v9;
  v18 = v10 + v4 + 112;
  *(_WORD*)(v12 + 46) = v16;
  *(_WORD*)(v12 + 48) = *((_WORD*)a2 + 24);
  *(_WORD*)(v12 + 50) = *((_WORD*)a2 + 25);
  *(_WORD*)(v12 + 52) = *((_WORD*)a2 + 26);
  v19 = a2[12];
  *(_QWORD*)(v12 + 88) = a2[11];
  *(_QWORD*)(v12 + 96) = v19;
  *(_BYTE*)(v12 + 104) = *((_BYTE*)a2 + 104);
  v20 = a2[8];
  *(_QWORD*)(v12 + 56) = a2[7];
  *(_QWORD*)(v12 + 64) = v20;
  v21 = a2[10];
  *(_QWORD*)(v12 + 72) = a2[9];
  *(_QWORD*)(v12 + 80) = v21;
  if (v2 != v3) {
    v22 = v2;
    v23 = v10;
    do {
      v24 = *(_QWORD*)(v22 + 8);
      *(_QWORD*)v23 = *(_QWORD*)v22;
      *(_QWORD*)(v23 + 8) = v24;
      v25 = *(_QWORD*)(v22 + 16);
      v26 = *(_QWORD*)(v22 + 24);
      v27 = *(_QWORD*)(v22 + 32);
      *(_BYTE*)(v23 + 40) = *(_BYTE*)(v22 + 40);
      *(_QWORD*)(v23 + 24) = v26;
      *(_QWORD*)(v23 + 32) = v27;
      *(_QWORD*)(v23 + 16) = v25;
      *(_WORD*)(v23 + 42) = *(_WORD*)(v22 + 42);
      *(_WORD*)(v23 + 44) = *(_WORD*)(v22 + 44);
      *(_WORD*)(v23 + 46) = *(_WORD*)(v22 + 46);
      *(_WORD*)(v23 + 48) = *(_WORD*)(v22 + 48);
      *(_WORD*)(v23 + 50) = *(_WORD*)(v22 + 50);
      *(_WORD*)(v23 + 52) = *(_WORD*)(v22 + 52);
      v28 = *(_QWORD*)(v22 + 56);
      v29 = *(_QWORD*)(v22 + 72);
      *(_QWORD*)(v23 + 64) = *(_QWORD*)(v22 + 64);
      *(_QWORD*)(v23 + 72) = v29;
      *(_QWORD*)(v23 + 56) = v28;
      v30 = *(_QWORD*)(v22 + 80);
      v31 = *(_QWORD*)(v22 + 88);
      v32 = *(_QWORD*)(v22 + 96);
      v33 = *(_BYTE*)(v22 + 104);
      v22 += 112;
      *(_BYTE*)(v23 + 104) = v33;
      *(_QWORD*)(v23 + 88) = v31;
      *(_QWORD*)(v23 + 96) = v32;
      *(_QWORD*)(v23 + 80) = v30;
      v23 += 112;
    } while (v22 != v3);
  }
  *a1 = v10;
  a1[1] = v18;
  a1[2] = v17;
  if (v2 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v34, v2);
  }
  return v18;
}

__int64 ProcObeliskResumeMenu_1726d70(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  __int64 v11;
  char v12;
  _BYTE* v13;
  __int64 v14;
  _BYTE* v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  _BYTE* v19;
  __int64 v20;
  char v21;
  __int64 v22;
  _BYTE* v23;
  __int64 v24;
  char v25;
  _BYTE v26[15];
  _BYTE* v27;

  v2 = *(_QWORD*)(a1 + 1384);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = *(_BYTE**)(a1 + 1376);
      if (v4 != nullptr) {
        if ((v4[240] & 1) != 0 ||
            (v5 = v3,
             v6 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v4 + 160LL))(
                 *(_QWORD*)(a1 + 1376)),
             v3 = v5, (v6 & 1) != 0)) {
          *(_BYTE*)(a1 + 1440) = 1;
        }
        else if (*(_DWORD*)(a1 + 1076) != 0) {
          ProcObeliskResumeMenu_1727210(&v25, a1, 0xFFFFFFFFLL);
          ProcObeliskResumeMenu_1727400(&v25);
          if ((v25 & 1) != 0) {
            v13 = v27;
          }
          else {
            v13 = v26;
          }
          GameRoutine_17e4db0(v4, v13, 0);
          if ((v25 & 1) != 0 && v27 != nullptr) {
            v14 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v14 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v27);
          }
          v3 = v5;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = v3;
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  v8 = *(_QWORD*)(a1 + 1400);
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = *(_BYTE**)(a1 + 1392);
      if (v10 != nullptr) {
        if ((v10[240] & 1) != 0 ||
            (v11 = v9,
             v12 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v10 + 160LL))(
                 *(_QWORD*)(a1 + 1392)),
             v9 = v11, (v12 & 1) != 0)) {
          *(_BYTE*)(a1 + 1440) = 1;
        }
        else {
          ProcObeliskResumeMenu_1727210(&v25, a1, 0);
          ProcObeliskResumeMenu_1727400(&v25);
          if ((v25 & 1) != 0) {
            v15 = v27;
          }
          else {
            v15 = v26;
          }
          GameRoutine_17e4db0(v10, v15, 0);
          if ((v25 & 1) != 0 && v27 != nullptr) {
            v16 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v16 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v27);
          }
          v9 = v11;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v17 = v9;
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v17);
      }
    }
  }
  result = *(_QWORD*)(a1 + 1416);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v19 = *(_BYTE**)(a1 + 1408);
      if (v19 != nullptr) {
        if ((v19[240] & 1) != 0 ||
            (v20 = result,
             v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)v19 + 160LL))(
                 *(_QWORD*)(a1 + 1408)),
             result = v20, (v21 & 1) != 0)) {
          *(_BYTE*)(a1 + 1440) = 1;
        }
        else if (*(_DWORD*)(a1 + 1076) < *(_DWORD*)(a1 + 1072)) {
          ProcObeliskResumeMenu_1727210(&v25, a1, 1);
          ProcObeliskResumeMenu_1727400(&v25);
          if ((v25 & 1) != 0) {
            v23 = v27;
          }
          else {
            v23 = v26;
          }
          GameRoutine_17e4db0(v19, v23, 0);
          if ((v25 & 1) != 0 && v27 != nullptr) {
            v24 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v24 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v27);
          }
          result = v20;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v22 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        return std___1___shared_weak_count___release_weak(v22);
      }
    }
  }
  return result;
}

__n128 ProcObeliskResumeMenu_1727070(__int64 a1)
{
  int v1;
  int v2;
  _BOOL4 v4;
  __n128 result;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_DWORD*)(a1 + 1076);
  v2 = *(_DWORD*)(a1 + 1072);
  v4 = v1 != 0;
  ((void (*)(void))ProcObeliskResumeMenu_17276f0_alt1)();
  if (v1 < v2) {
    v4 = true;
  }
  ProcObeliskResumeMenu_17276f0_alt1(a1, 2, v1 < v2);
  LayoutAccessor_15744f0(a1 + 848, 1, v4);
  LayoutAccessor_15744f0(a1 + 848, 0, v4);
  *(struct PseudoSret*)(&v12) = LayoutAccessor_1560070(a1 + 848, "L_Img_01");
  if (v13 != 0) {
    v6 = std___1___shared_weak_count_lock(v13);
    v7 = v12;
    if (v13 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v13);
    }
    if (v6 != 0 && v7 != 0) {
      LANES128(result).n128_u32[0] = 1.0;
      LayoutAccessor_1562680(v7, "Wait", *(long double*)&result);
      v8 = *(int*)(a1 + 1076);
      if (*(_QWORD*)(a1 + 1360) > v8 &&
          ((*(_QWORD*)(*(_QWORD*)(a1 + 1352) + 8 * (v8 >> 6)) >> v8) & 1) !=
              0) {
        LayoutAccessor_1562cf0(v7, "ClearImg");
      }
      else {
        LayoutAccessor_1562cf0(v7, "ClearImg_Off");
        v9 = ui_LayoutAccessor_FindPane(v7, "Icon_Clan");
        if (v9 != 0) {
          v10 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d678[0], 0);
        }
        else {
          v10 = 0;
        }
        v11 = GameRoutine_158a7c0(*(unsigned __int8*)(a1 + 1200));
        GameRoutine_1840e20(v10, v11);
      }
    }
    else if (v6 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      return std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
  return result;
}

unsigned __int64 ProcObeliskResumeMenu_1727210(unsigned __int64 result,
                                               __int64 a2, unsigned int a3)
{
  int v3;
  __int64 v4;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int8* v12;
  int v13;
  __int64 v14;
  const char* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v3 = *(_DWORD*)(a2 + 1076);
  v4 = *(_QWORD*)(a2 + 1088);
  v7 = result;
  if (v3 < (unsigned __int64)((*(_QWORD*)(a2 + 1096) - v4) >> 2)) {
    v3 = *(_DWORD*)(v4 + 4LL * v3);
  }
  if (a3 != 0) {
    game_menu_PageTab_Move(a2 + 1072, a3, 0);
    v3 = *(_DWORD*)(a2 + 1076);
    v8 = *(_QWORD*)(a2 + 1088);
    if (v3 < (unsigned __int64)((*(_QWORD*)(a2 + 1096) - v8) >> 2)) {
      v3 = *(_DWORD*)(v8 + 4LL * v3);
    }
    result = game_menu_PageTab_Move(a2 + 1072, -a3, 0);
  }
  if (*(_QWORD*)(a2 + 1360) <= (unsigned __int64)v3 ||
      ((*(_QWORD*)(*(_QWORD*)(a2 + 1352) + 8 * ((unsigned __int64)v3 >> 6)) >>
        v3) &
       1) == 0) {
    *(_BYTE*)v7 = 30;
    strcpy((char*)(v7 + 1), "Chapter_Default");
    return result;
  }
  v9 = *(_QWORD*)(a2 + 1216);
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(a2 + 1224) - v9) >> 4);
  v11 = (unsigned __int8*)(v9 + 112LL * v3);
  if (v10 <= v3) {
    v12 = (unsigned __int8*)&GameData_21eea60;
  }
  else {
    v12 = v11;
  }
  v13 = v12[11];
  if (v13 == 1) {
    v14 = v12[10];
    if (v14 == 10) {
      v15 = nullptr;
    }
    else {
      v15 = GameData_20660e0[v14];
    }
    v16 = game_util_Format("Chapter_%s_%d_%02d", v15, 1, v12[12]);
  }
  else {
    v16 = game_util_Format("Chapter_%d_%02d", v13, v12[12]);
  }
  v17 = v16;
  result = strlen(v16);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v18 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (result | 7) + 1;
    }
    v21 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v20, 16, 0);
    *(_QWORD*)(v7 + 8) = v18;
    *(_QWORD*)(v7 + 16) = v21;
    *(_QWORD*)v7 = v20 | 1;
    v19 = v21;
  }
  else {
    *(_BYTE*)v7 = 2 * result;
    v19 = v7 + 1;
    if (result == 0) {
      goto LABEL_28;
    }
  }
  result = memmove(v19, v17, v18);
LABEL_28:
  *(_BYTE*)(v19 + v18) = 0;
  return result;
}

__int64 ProcObeliskResumeMenu_1727400(__int64* a1)
{
  unsigned __int64 v1;
  char* v2;
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 result;
  unsigned __int64 v11;
  char v12;
  __int64 v13;
  char* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 vars0;

  v1 = *(unsigned __int8*)a1;
  v3 = a1[1];
  v2 = (char*)a1[2];
  v5 = v1 & 1;
  v6 = v1 >> 1;
  if ((v1 & 1) != 0) {
    v7 = a1[1];
  }
  else {
    v7 = v1 >> 1;
  }
  if ((v1 & 1) != 0) {
    v8 = (char*)a1[2];
  }
  else {
    v8 = (char*)a1 + 1;
  }
  result = memchr(v8, 1, v7);
  if (result == 0 || result != (_QWORD)v8) {
    v11 = v7 + 24;
    if ((unsigned __int64)(v7 + 24) >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_65;
    }
    if (v11 > 0x16) {
      if ((v11 | 7) == 0x17) {
        v13 = 26;
      }
      else {
        v13 = (v11 | 7) + 1;
      }
      result =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13, 16, 0);
      v30 = v7 + 24;
      v31 = (char*)result;
      v29 = v13 | 1;
      v12 = v13 | 1;
    }
    else {
      v12 = 2 * v11;
      result = 0;
      v30 = 0;
      v31 = nullptr;
      v29 = (unsigned __int8)(2 * v11);
    }
    if ((v12 & 1) != 0) {
      v14 = (char*)result;
    }
    else {
      v14 = (char*)&v29 + 1;
    }
    qmemcpy(v14, "Layout/Textures/Chapter/", 24);
    if ((v12 & 1) != 0) {
      v15 = (char*)(result + 24);
    }
    else {
      v15 = (char*)&vars0 + 1;
    }
    if (v7 != 0) {
      result = memmove(v15, v8, v7);
    }
    v15[v7] = 0;
    if (v5 != 0 && v2 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v2);
    }
    v17 = v30;
    *a1 = v29;
    a1[1] = v17;
    v3 = v17;
    a1[2] = (__int64)v31;
    v18 = *(unsigned __int8*)a1;
    v2 = (char*)a1[2];
    v5 = v18 & 1;
    v6 = v18 >> 1;
  }
  if (v5 != 0) {
    v19 = v2;
  }
  else {
    v19 = (char*)a1 + 1;
  }
  if (v5 != 0) {
    v20 = v3;
  }
  else {
    v20 = v6;
  }
  if (v20 < 5) {
    goto LABEL_49;
  }
  v21 = &v19[v20];
  v22 = v20;
  result = (__int64)v19;
  while (1) {
    result = memchr(result, 46, v22 - 4);
    if (result == 0) {
      goto LABEL_49;
    }
    if (*(_DWORD*)result == 1953391150 && *(_BYTE*)(result + 4) == 120) {
      break;
    }
    v22 = (__int64)&v21[-++result];
    if ((__int64)&v21[-result] < 5) {
      goto LABEL_49;
    }
  }
  if ((char*)result == v21 || result - (_QWORD)v19 == -1) {
  LABEL_49:
    v24 = v20 + 5;
    if ((unsigned __int64)(v20 + 5) < 0xFFFFFFFFFFFFFFF7LL) {
      if (v24 >= 0x17) {
        if ((v24 | 7) == 0x17) {
          v26 = 26;
        }
        else {
          v26 = (v24 | 7) + 1;
        }
        v25 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v26, 16, 0);
        v30 = v20 + 5;
        v31 = v25;
        v29 = v26 | 1;
      }
      else {
        v30 = 0;
        v31 = nullptr;
        v29 = (unsigned __int8)(2 * v24);
        v25 = (char*)&v29 + 1;
        if (v20 == 0) {
        LABEL_58:
          strcpy(&v25[v20], ".bntx");
          if (v5 != 0 && v2 != nullptr) {
            v27 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v27 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v2);
          }
          v28 = v30;
          *a1 = v29;
          a1[1] = v28;
          a1[2] = (__int64)v31;
          return result;
        }
      }
      result = memmove(v25, v19, v20);
      goto LABEL_58;
    }
  LABEL_65:
    String_60a1d0();
  }
  return result;
}

__n128 ProcObeliskResumeMenu_17276f0(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v6;
  __n128 result;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v6 = game_util_Format("L_Img_%02d", a2);
  *(struct PseudoSret*)(&v14) = LayoutAccessor_1560070(a1 + 848, v6);
  if (v15 != 0) {
    v8 = std___1___shared_weak_count_lock(v15);
    v9 = v14;
    if (v15 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v15);
    }
    if (v8 != 0 && v9 != 0) {
      LayoutAccessor_155e830(v9, a3 & 1);
      if ((a3 & 1) != 0) {
        LayoutAccessor_1562cf0(v9, "ClearImg");
        if (a2 == 2) {
          v10 = *(int*)(a1 + 1076) + 1LL;
          if (*(_QWORD*)(a1 + 1360) <= v10 ||
              ((*(_QWORD*)(*(_QWORD*)(a1 + 1352) + 8 * (v10 >> 6)) >> v10) &
               1) == 0) {
            LayoutAccessor_1562cf0(v9, "ClearImg_Off");
            v11 = ui_LayoutAccessor_FindPane(v9, "Icon_Clan");
            if (v11 != 0) {
              v12 = __dynamic_cast(v11, GameData_212d670[0],
                                   GameData_212d678[0], 0);
            }
            else {
              v12 = 0;
            }
            v13 = GameRoutine_158a7c0(*(unsigned __int8*)(a1 + 1200));
            GameRoutine_1840e20(v12, v13);
          }
        }
      }
    }
    else if (v8 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      return std___1___shared_weak_count___release_weak_alt1(v8);
    }
  }
  return result;
}

__int64

game_facility_anonymous_ProcObeliskResumeMenu_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  char v7;
  _BOOL4 v8;
  unsigned __int64 v9;
  __int16* v10;
  __int16* v11;
  int v12;
  int v13;
  _BOOL4 v15;
  char v16;
  int v17;
  int v18;
  char v19;
  __int64 v20;
  __int64 v21;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(v3 + 1088);
  v5 = *(int*)(v3 + 1076);
  if (v5 < (*(_QWORD*)(v3 + 1096) - v4) >> 2) {
    v5 = *(int*)(v4 + 4 * v5);
  }
  v6 = *(_QWORD*)(v3 + 1216);
  v7 = *(_BYTE*)(v3 + 1200);
  v8 = true;
  v9 = 0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(v3 + 1224) - v6) >> 4);
  v10 = (__int16*)(v6 + 112LL * (int)v5);
  v11 = &GameData_21eea60;
  if (v9 > v5) {
    v11 = v10;
  }
  v12 = *((unsigned __int8*)v11 + 11);
  v13 = *((unsigned __int8*)v11 + 12);
  if (v13 == 1) {
    if (v12 == 2) {
      v8 = *((_DWORD*)v11 + 18) == *(_DWORD*)(v3 + 1212);
    }
    else if (v12 == 1) {
      v8 = false;
    }
  }
  v20 = v1;
  v21 = v2;
  v15 = v8;
  v16 = v7;
  v17 = v12;
  v18 = v13;
  v19 = 1;
  GameRoutine_f8a870(*(_QWORD*)GameData_212efc0, &v15);
  return 4;
}

#pragma GCC visibility pop
