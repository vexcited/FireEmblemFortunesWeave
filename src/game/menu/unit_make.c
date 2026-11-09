#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_14a3920(void);
__int64 GameRoutine_155ca60(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_1630a00(_QWORD*);
__int64 GameRoutine_16337a0();
__int64 GameRoutine_179c320(_QWORD, _QWORD);
__int64 GameRoutine_19170a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1917400(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_7d1480(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 game_ProcInst_Register(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1ba4138;
extern _UNKNOWN GameData_225d4d8;
extern __int128 GameData_1a834a0;
extern __int128 GameData_1a836f0;
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_UnitMake_vtable[])();
extern __int64 (*game_menu_anonymous_UnitMakeDitherAlpha_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_2233d70;
extern __int64 GameData_225d460;
extern __int64 GameData_225d468;
extern __int64 GameData_225d470;
extern __int64 GameData_225d480;
extern __int64 GameData_225d490;
extern __int64 GameData_225d4a0;
extern __int64 GameData_225d4a8;
extern __int64 GameData_225d4b0;
extern __int64 GameData_225d4c0;
extern __int64 GameData_225d4d0;
extern __int64 GameData_225d4e0;
extern __int64 GameData_225d4e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern char GameData_225d458;
extern char GameData_225d498;
extern int GameData_225d478;
extern int GameData_225d488;
extern int GameData_225d4b8;
extern int GameData_225d4c8;
__int64 UnitMake_Destructor(__int64 a1);
__int64 UnitMake_Unknown12(__int64 result);
__int64 UnitMake_16318c0(__int64 result, int a2);
__int64* UnitMake_1631b00(__int64* result, int a2);
__int64 UnitMake_16325f0(__int64 result, char a2, char a3);
__int64 UnitMake_1633490(__int64 result);

__int64 UnitMake_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 i;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  *(_QWORD*)a1 = game_menu_UnitMake_vtable;
  v2 = *(_QWORD*)(game_g_frame_clock + 13224);
  v4 = *(_QWORD*)(v2 + 48);
  v3 = *(_QWORD*)(v2 + 56);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  v5 = *(_QWORD*)(*(_QWORD*)(v4 + 8) + 224LL);
  v6 = *(__int64**)(v5 + 32);
  v7 = *(__int64**)(v5 + 40);
  while (v6 != v7) {
    v8 = *v6++;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 72LL))(v8);
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1630a00((_QWORD*)a1);
  for (i = 1592; i != 1112; i -= 16) {
    v10 = *(_QWORD*)(a1 + i);
    if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
  v11 = *(_QWORD*)(a1 + 1112);
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = *(_QWORD*)(a1 + 1096);
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = *(_QWORD*)(a1 + 1080);
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
  }
  v14 = *(_QWORD*)(a1 + 1064);
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak(v14);
  }
  v15 = *(_QWORD**)(a1 + 1040);
  if (v15 == (_QWORD*)(a1 + 1008)) {
    v16 = 32;
  }
  else {
    if (v15 == nullptr) {
      goto LABEL_31;
    }
    v16 = 40;
  }
  (*(void (**)(void))(*v15 + v16))();

LABEL_31:
  v17 = *(_QWORD**)(a1 + 992);
  if (v17 == (_QWORD*)(a1 + 960)) {
    v18 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_36;
    }
    v18 = 40;
  }
  (*(void (**)(void))(*v17 + v18))();

LABEL_36:
  v19 = *(_QWORD**)(a1 + 944);
  if (v19 == (_QWORD*)(a1 + 912)) {
    v20 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_41;
    }
    v20 = 40;
  }
  (*(void (**)(void))(*v19 + v20))();

LABEL_41:
  v21 = *(_QWORD**)(a1 + 864);
  if (v21 == (_QWORD*)(a1 + 832)) {
    v22 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_46;
    }
    v22 = 40;
  }
  (*(void (**)(void))(*v21 + v22))();

LABEL_46:
  v23 = *(_QWORD**)(a1 + 816);
  if (v23 == (_QWORD*)(a1 + 784)) {
    v24 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_51;
    }
    v24 = 40;
  }
  (*(void (**)(void))(*v23 + v24))();

LABEL_51:
  v25 = *(_QWORD**)(a1 + 768);
  if (v25 == (_QWORD*)(a1 + 736)) {
    v26 = 32;
  }
  else {
    if (v25 == nullptr) {
      goto LABEL_56;
    }
    v26 = 40;
  }
  (*(void (**)(void))(*v25 + v26))();

LABEL_56:
  v27 = *(_QWORD*)(a1 + 704);
  if (v27 != 0) {
    std___1___shared_weak_count___release_weak(v27);
  }
  GameRoutine_155ca60(a1 + 520);
  GameRoutine_155e140(a1 + 416);
  v28 = *(_QWORD*)(a1 + 512);
  if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  GameRoutine_1564060(a1 + 464);
  GameRoutine_1563f90(a1 + 440, *(_QWORD*)(a1 + 448));
  v29 = *(_QWORD*)(a1 + 424);
  if (v29 != 0) {
    std___1___shared_weak_count___release_weak(v29);
  }
  GameRoutine_155e140(a1 + 312);
  v30 = *(_QWORD*)(a1 + 408);
  if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak(v30);
  }
  GameRoutine_1564060(a1 + 360);
  GameRoutine_1563f90(a1 + 336, *(_QWORD*)(a1 + 344));
  v31 = *(_QWORD*)(a1 + 320);
  if (v31 != 0) {
    std___1___shared_weak_count___release_weak(v31);
  }
  v32 = *(_QWORD*)(a1 + 304);
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    std___1___shared_weak_count___release_weak(v32);
  }
  v33 = *(_QWORD*)(a1 + 288);
  if (v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    std___1___shared_weak_count___release_weak(v33);
  }
  GameData_225d4e8 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 UnitMake_Unknown12(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _BOOL4 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  if (v1 > v2) {
  LABEL_4:
    v3 = true;
  }
  else {
    while (*(_BYTE*)v2 != 2) {
      v2 -= 64LL;
      if (v1 > v2) {
        goto LABEL_4;
      }
    }
    v3 = *(_DWORD*)(v2 + 32) != 9;
  }
  if (v1 != 0 && v3) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 9) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64LL;
    }
  }
  return result;
}

__int64 UnitMake_16318c0(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  _BYTE v27[15];
  _BYTE* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  if (a2 != 7) {
    v29 = v3;
    v30 = v4;
    v31 = v2;
    v6 = (_QWORD*)result;
    if (*(_QWORD*)(result + 536) == 0) {
      goto LABEL_19;
    }
    v7 = *(_QWORD*)(result + 528);
    if (v7 == 0) {
      goto LABEL_19;
    }
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 != 0) {
      v9 = v6[65];
      if (v9 != 0) {
        LODWORD(v2) = *(unsigned __int8*)(v9 + 24);
        v10 = v9 + 152;
        if ((_DWORD)v2 == 0) {
          v10 = 0;
        }
        v11 = v10 != v6[67];
      }
      else {
        v11 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v11) {
          goto LABEL_12;
        }
      }
      else {
        v13 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v13);
        if (v11) {
          goto LABEL_12;
        }
      }
      if ((v2 & 1) == 0) {
      LABEL_19:
        v15 = 0;
        while (1) {
          v16 = a2 == v15 ? 6LL : 7LL;
          v17 = a2 == v15 ? "Select" : "Default";
          v18 = a2 == v15 ? 7LL : 8LL;
          v26 = 2 * v16;
          memcpy(v27, v17, v16);
          v27[v18 - 1] = 0;
          v19 = game_util_Format("Progress_PageName_%02d", v15);
          GameRoutine_1560070(&v24, v6 + 39, v19);
          result = v25;
          if (v25 == 0) {
            break;
          }
          v20 = std___1___shared_weak_count_lock(v25);
          v21 = v24;
          result = v25;
          if (v25 != 0) {
            result = std___1___shared_weak_count___release_weak(v25);
          }
          if (v20 != 0 && v21 != 0) {
            v22 = (v26 & 1) != 0 ? v28 : v27;
            result = GameRoutine_1562680(v21, v22, 1.0);
          }
          else if (v20 == 0) {
            break;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            break;
          }
          (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
          result = std___1___shared_weak_count___release_weak(v20);
          if ((v26 & 1) != 0) {
          LABEL_42:
            if (v28 != nullptr) {
              v23 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v23 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v28);
            }
          }
        LABEL_20:
          if (++v15 == 8) {
            return result;
          }
        }
        if ((v26 & 1) != 0) {
          goto LABEL_42;
        }
        goto LABEL_20;
      }
    LABEL_17:
      v14 = v6[78];
      if (v14 != 0) {
        *(float*)(v14 + 32) = (float)a2;
      }
      goto LABEL_19;
    }
  LABEL_12:
    v12 = v6[66];
    if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
      goto LABEL_19;
    }
    goto LABEL_17;
  }
  return result;
}

__int64* UnitMake_1631b00(__int64* result, int a2)
{
  __int64** v2;
  __int64* v3;
  __int64 v4;
  __int128 v5;
  __int64** v6;
  __int64 v7;
  unsigned int v8;
  unsigned int i;
  __int64 v10;
  unsigned int v11;
  unsigned int j;
  __int64 v13;
  __int64 v14;
  _DWORD* v15;
  _DWORD* v16;
  _DWORD* v17;
  _DWORD* v18;
  _DWORD* v19;
  _DWORD* v20;
  _DWORD* v21;
  _DWORD* v22;
  _DWORD* v23;
  _DWORD* v24;
  _DWORD* v25;
  _DWORD* v26;
  _DWORD* v27;
  _DWORD* v28;
  _DWORD* v29;
  _DWORD* v30;
  _DWORD* v31;
  _DWORD* v32;
  _DWORD* v33;
  _DWORD* v34;
  _DWORD* v35;
  _DWORD* v36;
  _DWORD* v37;
  _DWORD* v38;
  _DWORD* v39;
  _DWORD* v40;
  _DWORD* v41;
  _DWORD* v42;
  _DWORD* v43;
  __int64 v44;
  _DWORD* v45;
  _DWORD* v46;
  _DWORD* v47;
  _DWORD* v48;
  _DWORD* v49;
  _DWORD* v50;
  _DWORD* v51;
  _DWORD* v52;
  _DWORD* v53;
  _DWORD* v54;
  _DWORD* v55;
  _DWORD* v56;
  _DWORD* v57;
  _DWORD* v58;
  _DWORD* v59;
  _DWORD* v60;
  _DWORD* v61;
  _DWORD* v62;
  _DWORD* v63;
  _DWORD* v64;
  _DWORD* v65;
  _DWORD* v66;
  _DWORD* v67;
  _DWORD* v68;
  _DWORD* v69;
  _DWORD* v70;
  _DWORD* v71;
  _DWORD* v72;
  _DWORD* v73;

  v2 = (__int64**)(result + 140);
  v3 = result;
  if (a2 == 5) {
    v14 = **v2;
    if (v14 != 0 && *(_DWORD*)(v14 + 16) == *((_DWORD*)*v2 + 2)) {
      result = (__int64*)GameRoutine_14a1390(result + 140, 1);
    }
    v15 = (_DWORD*)v3[142];
    if (*(_QWORD*)v15 != 0 && *(_DWORD*)(*(_QWORD*)v15 + 16LL) == v15[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 142, 1);
    }
    v16 = (_DWORD*)v3[144];
    if (*(_QWORD*)v16 != 0 && *(_DWORD*)(*(_QWORD*)v16 + 16LL) == v16[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 144, 1);
    }
    v17 = (_DWORD*)v3[146];
    if (*(_QWORD*)v17 != 0 && *(_DWORD*)(*(_QWORD*)v17 + 16LL) == v17[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 146, 1);
    }
    v18 = (_DWORD*)v3[148];
    if (*(_QWORD*)v18 != 0 && *(_DWORD*)(*(_QWORD*)v18 + 16LL) == v18[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 148, 1);
    }
    v19 = (_DWORD*)v3[150];
    if (*(_QWORD*)v19 != 0 && *(_DWORD*)(*(_QWORD*)v19 + 16LL) == v19[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 150, 1);
    }
    v20 = (_DWORD*)v3[152];
    if (*(_QWORD*)v20 != 0 && *(_DWORD*)(*(_QWORD*)v20 + 16LL) == v20[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 152, 1);
    }
    v21 = (_DWORD*)v3[154];
    if (*(_QWORD*)v21 != 0 && *(_DWORD*)(*(_QWORD*)v21 + 16LL) == v21[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 154, 1);
    }
    v22 = (_DWORD*)v3[156];
    if (*(_QWORD*)v22 != 0 && *(_DWORD*)(*(_QWORD*)v22 + 16LL) == v22[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 156, 1);
    }
    v23 = (_DWORD*)v3[158];
    if (*(_QWORD*)v23 != 0 && *(_DWORD*)(*(_QWORD*)v23 + 16LL) == v23[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 158, 1);
    }
    v24 = (_DWORD*)v3[160];
    if (*(_QWORD*)v24 != 0 && *(_DWORD*)(*(_QWORD*)v24 + 16LL) == v24[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 160, 1);
    }
    v25 = (_DWORD*)v3[162];
    if (*(_QWORD*)v25 != 0 && *(_DWORD*)(*(_QWORD*)v25 + 16LL) == v25[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 162, 1);
    }
    v26 = (_DWORD*)v3[164];
    if (*(_QWORD*)v26 != 0 && *(_DWORD*)(*(_QWORD*)v26 + 16LL) == v26[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 164, 1);
    }
    v27 = (_DWORD*)v3[166];
    if (*(_QWORD*)v27 != 0 && *(_DWORD*)(*(_QWORD*)v27 + 16LL) == v27[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 166, 1);
    }
    v28 = (_DWORD*)v3[168];
    if (*(_QWORD*)v28 != 0 && *(_DWORD*)(*(_QWORD*)v28 + 16LL) == v28[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 168, 1);
    }
    v29 = (_DWORD*)v3[170];
    if (*(_QWORD*)v29 != 0 && *(_DWORD*)(*(_QWORD*)v29 + 16LL) == v29[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 170, 1);
    }
    v30 = (_DWORD*)v3[172];
    if (*(_QWORD*)v30 != 0 && *(_DWORD*)(*(_QWORD*)v30 + 16LL) == v30[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 172, 1);
    }
    v31 = (_DWORD*)v3[174];
    if (*(_QWORD*)v31 != 0 && *(_DWORD*)(*(_QWORD*)v31 + 16LL) == v31[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 174, 1);
    }
    v32 = (_DWORD*)v3[176];
    if (*(_QWORD*)v32 != 0 && *(_DWORD*)(*(_QWORD*)v32 + 16LL) == v32[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 176, 1);
    }
    v33 = (_DWORD*)v3[178];
    if (*(_QWORD*)v33 != 0 && *(_DWORD*)(*(_QWORD*)v33 + 16LL) == v33[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 178, 1);
    }
    v34 = (_DWORD*)v3[180];
    if (*(_QWORD*)v34 != 0 && *(_DWORD*)(*(_QWORD*)v34 + 16LL) == v34[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 180, 1);
    }
    v35 = (_DWORD*)v3[182];
    if (*(_QWORD*)v35 != 0 && *(_DWORD*)(*(_QWORD*)v35 + 16LL) == v35[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 182, 1);
    }
    v36 = (_DWORD*)v3[184];
    if (*(_QWORD*)v36 != 0 && *(_DWORD*)(*(_QWORD*)v36 + 16LL) == v36[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 184, 1);
    }
    v37 = (_DWORD*)v3[186];
    if (*(_QWORD*)v37 != 0 && *(_DWORD*)(*(_QWORD*)v37 + 16LL) == v37[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 186, 1);
    }
    v38 = (_DWORD*)v3[188];
    if (*(_QWORD*)v38 != 0 && *(_DWORD*)(*(_QWORD*)v38 + 16LL) == v38[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 188, 1);
    }
    v39 = (_DWORD*)v3[190];
    if (*(_QWORD*)v39 != 0 && *(_DWORD*)(*(_QWORD*)v39 + 16LL) == v39[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 190, 1);
    }
    v40 = (_DWORD*)v3[192];
    if (*(_QWORD*)v40 != 0 && *(_DWORD*)(*(_QWORD*)v40 + 16LL) == v40[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 192, 1);
    }
    v41 = (_DWORD*)v3[194];
    if (*(_QWORD*)v41 != 0 && *(_DWORD*)(*(_QWORD*)v41 + 16LL) == v41[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 194, 1);
    }
    v42 = (_DWORD*)v3[196];
    if (*(_QWORD*)v42 != 0 && *(_DWORD*)(*(_QWORD*)v42 + 16LL) == v42[2]) {
      result = (__int64*)GameRoutine_14a1390(v3 + 196, 1);
    }
    v43 = (_DWORD*)v3[198];
    if (*(_QWORD*)v43 != 0 && *(_DWORD*)(*(_QWORD*)v43 + 16LL) == v43[2]) {
      return (__int64*)GameRoutine_14a1390(v3 + 198, 1);
    }
  }
  else if (a2 == 4) {
    v4 = 0;
    v5 = GameData_1a834a0;
    do {
      v6 = &v2[2 * v4];
      result = *v6;
      v7 = **v6;
      if (v7 != 0 && *(_DWORD*)(v7 + 16) == *((_DWORD*)result + 2)) {
        v8 = *(_DWORD*)(v7 + 36);
        if (v8 == 0) {
          goto LABEL_204;
        }
        for (i = 0; i < v8; ++i) {
          if ((int)v8 > (int)i) {
            v10 = *(_QWORD*)(v7 + 40 + 8LL * (int)i);
            if (v10 != 0) {
              *(_OWORD*)(v10 + 32) = v5;
              *(_BYTE*)(v10 + 128) = 1;
              v8 = *(_DWORD*)(v7 + 36);
            }
          }
        }
        result = *v6;
        v7 = **v6;
        if (v7 != 0) {
        LABEL_204:
          if (*(_DWORD*)(v7 + 16) == *((_DWORD*)result + 2)) {
            v11 = *(_DWORD*)(v7 + 36);
            if (v11 != 0) {
              for (j = 0; j < v11; ++j) {
                if ((int)v11 > (int)j) {
                  v13 = *(_QWORD*)(v7 + 40 + 8LL * (int)j);
                  if (v13 != 0) {
                    *(_OWORD*)(v13 + 16) = GameData_1a836f0;
                    *(_BYTE*)(v13 + 128) = 1;
                    v11 = *(_DWORD*)(v7 + 36);
                  }
                }
              }
            }
          }
        }
        GameRoutine_14a3920();
        result = (__int64*)GameRoutine_14a1520(&v2[2 * v4], 1);
        v5 = GameData_1a834a0;
      }
      ++v4;
    } while (v4 != 30);
  }
  else {
    v44 = **v2;
    if (v44 != 0 && *(_DWORD*)(v44 + 16) == *((_DWORD*)*v2 + 2)) {
      result = (__int64*)GameRoutine_14a1520(result + 140, 1);
    }
    v45 = (_DWORD*)v3[142];
    if (*(_QWORD*)v45 != 0 && *(_DWORD*)(*(_QWORD*)v45 + 16LL) == v45[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 142, 1);
    }
    v46 = (_DWORD*)v3[144];
    if (*(_QWORD*)v46 != 0 && *(_DWORD*)(*(_QWORD*)v46 + 16LL) == v46[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 144, 1);
    }
    v47 = (_DWORD*)v3[146];
    if (*(_QWORD*)v47 != 0 && *(_DWORD*)(*(_QWORD*)v47 + 16LL) == v47[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 146, 1);
    }
    v48 = (_DWORD*)v3[148];
    if (*(_QWORD*)v48 != 0 && *(_DWORD*)(*(_QWORD*)v48 + 16LL) == v48[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 148, 1);
    }
    v49 = (_DWORD*)v3[150];
    if (*(_QWORD*)v49 != 0 && *(_DWORD*)(*(_QWORD*)v49 + 16LL) == v49[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 150, 1);
    }
    v50 = (_DWORD*)v3[152];
    if (*(_QWORD*)v50 != 0 && *(_DWORD*)(*(_QWORD*)v50 + 16LL) == v50[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 152, 1);
    }
    v51 = (_DWORD*)v3[154];
    if (*(_QWORD*)v51 != 0 && *(_DWORD*)(*(_QWORD*)v51 + 16LL) == v51[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 154, 1);
    }
    v52 = (_DWORD*)v3[156];
    if (*(_QWORD*)v52 != 0 && *(_DWORD*)(*(_QWORD*)v52 + 16LL) == v52[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 156, 1);
    }
    v53 = (_DWORD*)v3[158];
    if (*(_QWORD*)v53 != 0 && *(_DWORD*)(*(_QWORD*)v53 + 16LL) == v53[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 158, 1);
    }
    v54 = (_DWORD*)v3[160];
    if (*(_QWORD*)v54 != 0 && *(_DWORD*)(*(_QWORD*)v54 + 16LL) == v54[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 160, 1);
    }
    v55 = (_DWORD*)v3[162];
    if (*(_QWORD*)v55 != 0 && *(_DWORD*)(*(_QWORD*)v55 + 16LL) == v55[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 162, 1);
    }
    v56 = (_DWORD*)v3[164];
    if (*(_QWORD*)v56 != 0 && *(_DWORD*)(*(_QWORD*)v56 + 16LL) == v56[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 164, 1);
    }
    v57 = (_DWORD*)v3[166];
    if (*(_QWORD*)v57 != 0 && *(_DWORD*)(*(_QWORD*)v57 + 16LL) == v57[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 166, 1);
    }
    v58 = (_DWORD*)v3[168];
    if (*(_QWORD*)v58 != 0 && *(_DWORD*)(*(_QWORD*)v58 + 16LL) == v58[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 168, 1);
    }
    v59 = (_DWORD*)v3[170];
    if (*(_QWORD*)v59 != 0 && *(_DWORD*)(*(_QWORD*)v59 + 16LL) == v59[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 170, 1);
    }
    v60 = (_DWORD*)v3[172];
    if (*(_QWORD*)v60 != 0 && *(_DWORD*)(*(_QWORD*)v60 + 16LL) == v60[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 172, 1);
    }
    v61 = (_DWORD*)v3[174];
    if (*(_QWORD*)v61 != 0 && *(_DWORD*)(*(_QWORD*)v61 + 16LL) == v61[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 174, 1);
    }
    v62 = (_DWORD*)v3[176];
    if (*(_QWORD*)v62 != 0 && *(_DWORD*)(*(_QWORD*)v62 + 16LL) == v62[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 176, 1);
    }
    v63 = (_DWORD*)v3[178];
    if (*(_QWORD*)v63 != 0 && *(_DWORD*)(*(_QWORD*)v63 + 16LL) == v63[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 178, 1);
    }
    v64 = (_DWORD*)v3[180];
    if (*(_QWORD*)v64 != 0 && *(_DWORD*)(*(_QWORD*)v64 + 16LL) == v64[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 180, 1);
    }
    v65 = (_DWORD*)v3[182];
    if (*(_QWORD*)v65 != 0 && *(_DWORD*)(*(_QWORD*)v65 + 16LL) == v65[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 182, 1);
    }
    v66 = (_DWORD*)v3[184];
    if (*(_QWORD*)v66 != 0 && *(_DWORD*)(*(_QWORD*)v66 + 16LL) == v66[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 184, 1);
    }
    v67 = (_DWORD*)v3[186];
    if (*(_QWORD*)v67 != 0 && *(_DWORD*)(*(_QWORD*)v67 + 16LL) == v67[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 186, 1);
    }
    v68 = (_DWORD*)v3[188];
    if (*(_QWORD*)v68 != 0 && *(_DWORD*)(*(_QWORD*)v68 + 16LL) == v68[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 188, 1);
    }
    v69 = (_DWORD*)v3[190];
    if (*(_QWORD*)v69 != 0 && *(_DWORD*)(*(_QWORD*)v69 + 16LL) == v69[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 190, 1);
    }
    v70 = (_DWORD*)v3[192];
    if (*(_QWORD*)v70 != 0 && *(_DWORD*)(*(_QWORD*)v70 + 16LL) == v70[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 192, 1);
    }
    v71 = (_DWORD*)v3[194];
    if (*(_QWORD*)v71 != 0 && *(_DWORD*)(*(_QWORD*)v71 + 16LL) == v71[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 194, 1);
    }
    v72 = (_DWORD*)v3[196];
    if (*(_QWORD*)v72 != 0 && *(_DWORD*)(*(_QWORD*)v72 + 16LL) == v72[2]) {
      result = (__int64*)GameRoutine_14a1520(v3 + 196, 1);
    }
    v73 = (_DWORD*)v3[198];
    if (*(_QWORD*)v73 != 0 && *(_DWORD*)(*(_QWORD*)v73 + 16LL) == v73[2]) {
      return (__int64*)GameRoutine_14a1520(v3 + 198, 1);
    }
  }
  return result;
}

__int64 UnitMake_16325f0(__int64 result, char a2, char a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_225d4e0 == 0) {
    v5 = result;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_225d4d8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_225d4d8) != 0) {
      GameData_225d458 = 14;
      GameData_225d470 = 0;
      GameData_225d478 = 0;
      GameData_225d480 = 0;
      GameData_225d488 = 0;
      GameData_225d490 = 0;
      GameData_225d498 = 0;
      GameData_225d4c0 = 0;
      GameData_225d4c8 = 0;
      GameData_225d4d0 = 0;
      GameData_225d4a0 = 0;
      GameData_225d4a8 = 0;
      GameData_225d4b0 = 0;
      GameData_225d4b8 = 0;
      GameData_225d460 = 0;
      GameData_225d468 = (__int64)GameRoutine_16337a0;
      __cxa_guard_release(&GameData_225d4d8);
    }
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        168, 16, 0);
    v7 = 888;
    v8 = v6;
    v9 = GameData_212c608[0];
    if ((a2 & 1) != 0) {
      v7 = 720;
    }
    *(_QWORD*)(v6 + 96) = 0;
    *(_QWORD*)(v6 + 104) = 0;
    *(_QWORD*)(v6 + 112) = 0;
    *(_QWORD*)(v6 + 120) = 0;
    *(_QWORD*)(v6 + 128) = 0;
    *(_WORD*)(v6 + 136) = 0;
    v10 = *(_QWORD*)(v5 + v7);
    *(_QWORD*)(v6 + 138) = 0;
    *(_QWORD*)(v6 + 144) = 0;
    *(_QWORD*)(v6 + 16) = 0;
    *(_QWORD*)(v6 + 24) = "NULL";
    *(_QWORD*)(v6 + 32) = 0;
    *(_QWORD*)(v6 + 40) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_QWORD*)(v6 + 80) = 0;
    *(_QWORD*)(v6 + 88) = 0;
    *(_QWORD*)v6 = v9 + 16;
    *(_QWORD*)(v6 + 8) = 0;
    result = game_ProcInst_Register();
    GameData_225d4e0 = v8;
    *(_QWORD*)(v8 + 152) = v10;
    *(_BYTE*)(v8 + 160) = a3 & 1;
    *(_DWORD*)(v8 + 164) = 0;
    *(_QWORD*)v8 = game_menu_anonymous_UnitMakeDitherAlpha_vtable;
    v11 = *(_QWORD*)(v5 + 32);
    if (v11 != 0) {
      v12 = *(_QWORD*)(v11 + 40);
      if (v12 != 0) {
        *(_QWORD*)(v12 + 48) = v8;
        *(_QWORD*)(v8 + 56) = *(_QWORD*)(v11 + 40);
      }
      *(_QWORD*)(v11 + 40) = v8;
      *(_QWORD*)(v8 + 24) = "UnitMakeDitherAlpha";
      *(_QWORD*)(v8 + 32) = v11;
      *(_DWORD*)(v8 + 140) = game_HashString32();
      *(_QWORD*)(v8 + 64) = 0;
      *(_QWORD*)(v8 + 72) = 24;
      *(_QWORD*)(v8 + 80) = 1;
      *(_QWORD*)(v8 + 8) = &GameData_225d458;
      *(_QWORD*)(v8 + 16) = &GameData_225d458;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 136LL))(v8);
      if ((result & 1) != 0 && (*(_WORD*)(v8 + 136) & 0x100) == 0) {
        *(_WORD*)(v8 + 136) |= 0x100u;
      }
    }
    else if ((*(_WORD*)(v8 + 136) & 1) == 0) {
      return GameRoutine_657a50(v8, 1);
    }
  }
  return result;
}

__int64 UnitMake_1633490(__int64 result)
{
  __int64 v1;
  int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int128 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  unsigned int v25;
  __int64 v26;
  const char* v27;
  __int128* v28;
  __int64 v29;
  __int128 v30;
  __int64 v31;
  __int128 v32;
  unsigned int v33;
  __int128 v34;
  unsigned int v35;
  unsigned int v36;
  _BYTE v37[260];
  char v38;
  char v39;
  char v40;
  char v41;
  char v42;
  char v43;
  char v44;
  char v45;
  __int128 v46;
  __int128 v47;

  v1 = GameData_2233d70;
  if (GameData_2233d70 != 0) {
    v2 = *(_DWORD*)(result + 152);
    switch (v2) {
    case 1:
      v31 = 880;
      if (*(_BYTE*)(result + 276) == 1) {
        v31 = 712;
      }
      GameRoutine_179c320(v37, *(_QWORD*)(result + v31));
      v20 = *(_QWORD*)(v1 + 168);
      if (v20 == 0) {
        return GameRoutine_7d1480(v37);
      }
    LABEL_26:
      LOBYTE(v16) = v37[256];
      LOBYTE(v17) = v37[257];
      LOBYTE(v18) = v42;
      LOBYTE(v19) = v43;
      *(float*)&v32 = (float)v16 / 255.0;
      *(float*)&v33 = (float)v17 / 255.0;
      *(float*)&v34 = (float)v18 / 255.0;
      DWORD1(v32) = v33;
      LOBYTE(v33) = v37[258];
      *(float*)&v35 = (float)v33 / 255.0;
      DWORD2(v32) = v35;
      LOBYTE(v35) = v37[259];
      *(float*)&v36 = (float)v35 / 255.0;
      HIDWORD(v32) = v36;
      LOBYTE(v36) = v44;
      v47 = v32;
      *(float*)&v32 = (float)v19;
      LOBYTE(v19) = v45;
      *((float*)&v34 + 1) = *(float*)&v32 / 255.0;
      *((_QWORD*)&v34 + 1) = __PAIR64__((float)v19 / 255.0, (float)v36 / 255.0);
      v46 = v34;
      GameRoutine_1917400(v20, "_Skin", 5, &v47, 1, 1);
      v27 = "_Lip";
      v28 = &v46;
      v29 = 4;
      v26 = v20;
    LABEL_27:
      GameRoutine_1917400(v26, v27, v29, v28, 1, 1);
      return GameRoutine_7d1480(v37);
    case 3:
      v21 = 880;
      if (*(_BYTE*)(result + 276) == 1) {
        v21 = 712;
      }
      GameRoutine_179c320(v37, *(_QWORD*)(result + v21));
      v26 = *(_QWORD*)(v1 + 168);
      if (v26 == 0) {
        return GameRoutine_7d1480(v37);
      }
      LOBYTE(v22) = v38;
      LOBYTE(v23) = v39;
      LOBYTE(v24) = v40;
      v27 = "_Hair";
      v28 = &v47;
      v29 = 5;
      LOBYTE(v25) = v41;
      *(float*)&v30 = (float)v22 / 255.0;
      *((float*)&v30 + 1) = (float)v23 / 255.0;
      *((float*)&v30 + 2) = (float)v24 / 255.0;
      *((float*)&v30 + 3) = (float)v25 / 255.0;
      v47 = v30;
      goto LABEL_27;
    case 2:
      if (*(_DWORD*)(result + 164) >= 3u) {
        v3 = 3;
      }
      else {
        v3 = *(_DWORD*)(result + 164);
      }
      v4 = result;
      result = GameRoutine_19170a0(*(_QWORD*)(GameData_2233d70 + 168),
                                   (char*)&GameData_1ba4138 + 24 * v3 + 1, 8);
      v5 = v4;
      if (*(_DWORD*)(v4 + 168) != -1) {
        v6 = GameData_2233d70;
        v7 = 880;
        if (*(_BYTE*)(v4 + 276) == 1) {
          v7 = 712;
        }
        GameRoutine_179c320(v37, *(_QWORD*)(v4 + v7));
        v12 = *(_QWORD*)(v6 + 168);
        if (v12 != 0) {
          LOBYTE(v8) = v38;
          LOBYTE(v9) = v39;
          LOBYTE(v10) = v40;
          LOBYTE(v11) = v41;
          *(float*)&v13 = (float)v8 / 255.0;
          *((float*)&v13 + 1) = (float)v9 / 255.0;
          *((float*)&v13 + 2) = (float)v10 / 255.0;
          *((float*)&v13 + 3) = (float)v11 / 255.0;
          v47 = v13;
          GameRoutine_1917400(v12, "_Hair", 5, &v47, 1, 1);
        }
        result = GameRoutine_7d1480(v37);
        v5 = v4;
      }
      if (*(_DWORD*)(v5 + 160) != -1) {
        v14 = GameData_2233d70;
        v15 = 880;
        if (*(_BYTE*)(v5 + 276) == 1) {
          v15 = 712;
        }
        GameRoutine_179c320(v37, *(_QWORD*)(v5 + v15));
        v20 = *(_QWORD*)(v14 + 168);
        if (v20 == 0) {
          return GameRoutine_7d1480(v37);
        }
        goto LABEL_26;
      }
      break;
    default:
      break;
    }
  }
  return result;
}

#pragma GCC visibility pop
