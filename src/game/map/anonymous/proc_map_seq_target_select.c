#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 BattleSide_Destructor(_QWORD);
__int64 Camera_7bfee0(_QWORD, float);
__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_72a260(_QWORD);
__int64 GameRoutine_72b4a0(_QWORD);
__int64 GameRoutine_72b6c0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 game_UnitPool_Get(_QWORD, long double);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1f983e0[])();
extern __int64 (*GameData_1f98468[])();
extern __int64 (*game_map_anonymous_ProcMapSeqTargetSelect_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d220[5];
extern __int64 GameData_212d228[4];
extern __int64 GameData_212d230[3];
extern __int64 GameData_212d238[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_map_g_map_sequence;
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212d258[2];
extern __int64* GameData_212da50[3];
__int64 ProcMapSeqTargetSelect_Destructor(__int64 a1, long double a2);
__int64 GameRoutine_78d280(__int64, __int64);
__int64 GameRoutine_78e5d0(__int64, long double);
__int64 GameRoutine_78f220(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MapCombatPrediction_19f3aa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 VTarget_7797e0(_DWORD*, unsigned __int8);
__int64 fmodf(float, float);
__int64 game_map_VTarget_EnumerateSubTarget(__int64, unsigned int);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, float);
extern _UNKNOWN* GameData_212d208;
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cf830;
extern __int64 GameData_21d3f58;
long double Height_7c4d10(_QWORD, float);
struct PseudoSret snd_play_ff2d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                 double, float);
float game_map_anonymous_ProcMapSeqTargetSelect_UpdateFocus_closure_Invoke(
    __int64 a1, _DWORD* a2, long double a3);
__int64 ProcMapSeqTargetSelect_78e3c0(__int64 a1, unsigned __int8 a2);
__int64 ProcMapSeqTargetSelect_78ece0(__int64 a1, long double a2);
__int64 ProcMapSeqTargetSelect_78f500(__int64 a1);
__int64 GameRoutine_78d280_alt1(__int64, _BYTE*) __asm__("GameRoutine_78d280");
float fmodf_alt1(float, float) __asm__("fmodf");

float game_map_anonymous_ProcMapSeqTargetSelect_UpdateFocus_closure_Invoke(
    __int64 a1, _DWORD* a2, long double a3)
{
  int v3;
  float v4;
  float v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  float v10;

  if ((**(_BYTE**)(a1 + 8) & 1) == 0) {
    **(_DWORD**)(a1 + 16) = a2[8];
    **(_DWORD**)(a1 + 24) = a2[9];
    **(_DWORD**)(a1 + 32) = a2[10];
    v3 = **(_DWORD**)(a1 + 32);
    v4 = (float)(v3 + 2 * **(_DWORD**)(a1 + 16)) * 2.5;
    v5 = (float)(v3 + 2 * **(_DWORD**)(a1 + 24)) * 2.5;
    if (GameData_21ca2e8 != 0) {
      v10 = (float)(v3 + 2 * **(_DWORD**)(a1 + 24)) * 2.5;
      v6 = a1;
      v7 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456),
                         (float)(v3 + 2 * **(_DWORD**)(a1 + 16)) * 2.5);
      v5 = v10;
      a1 = v6;
    }
    else {
      LODWORD(v7) = 0;
    }
    v8 = *(_QWORD*)(a1 + 40);
    *(float*)v8 = v4;
    *(_DWORD*)(v8 + 4) = LODWORD(v7);
    a3 = *(long double*)v8;
    *((_QWORD*)&a3 + 1) = LODWORD(v5);
    *(long double*)v8 = a3;
    **(_BYTE**)(a1 + 8) = 1;
  }
  return *(float*)&a3;
}

__int64 ProcMapSeqTargetSelect_78e3c0(__int64 a1, unsigned __int8 a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  unsigned __int8 v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  char v11;
  char v12;
  unsigned __int64 v13;
  unsigned __int8 v14;
  unsigned __int64 v15;
  unsigned __int8 v16;
  unsigned int v17;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;

  v3 = GameData_212cff0[0];
  v4 = *GameData_212cff0[0];
  if (*GameData_212cfc8[0] == 0) {
    goto LABEL_20;
  }
  v5 = *(_QWORD**)(*GameData_212cfc8[0] + 432);
  v6 = a2;
  v7 = v5[2];
  v5 += 2;
  v8 = (*(float (**)(_QWORD*))(v7 + 16))(v5);
  v9 = (*(float (**)(_QWORD*))(*v5 + 16LL))(v5);
  v10 = fmodf_alt1(v9, 0x1.6800000000000p+8f);
  if (v8 < 0x0.0p+0f) {
    v10 = v10 + 0x1.6800000000000p+8f;
  }
  if (v10 >= 0x1.6800000000000p+5f) {
    if (v10 >= 0x1.0e00000000000p+7f) {
      a2 = v6;
      if (v10 < 0x1.c200000000000p+7f) {
        goto LABEL_20;
      }
      if (v10 >= 0x1.3b00000000000p+8f) {
        v12 = 1;
        v11 = 0;
      }
      else {
        v12 = 0;
        v11 = 1;
      }
      goto LABEL_9;
    }
    v11 = 0;
    v12 = 0;
  }
  else {
    v11 = 0;
    v12 = 1;
  }
  a2 = v6;
LABEL_9:
  v13 = 0x100000008000402uLL >> ((8 * a2 - 8) & 0xF8);
  if ((((_BYTE)v13 - 1) & 0xF8) != 0) {
    v14 = 0;
  }
  else {
    v14 = 0x100000008000402uLL >> (8 * ((unsigned __int8)v13 - 1));
  }
  v15 = 0x100000008000402uLL >> (8 * (v14 - 1));
  if (((v14 - 1) & 0xF8) != 0) {
    LOBYTE(v15) = 0;
  }
  if ((v12 & 1) != 0) {
    v16 = v14;
  }
  else {
    v16 = v15;
  }
  if ((v11 & 1) != 0) {
    a2 = 0x100000008000402uLL >> ((8 * a2 - 8) & 0xF8);
  }
  else {
    a2 = v16;
  }
LABEL_20:
  v17 = VTarget_7797e0((_DWORD*)(v4 + 8), a2);
  if ((v17 & 0x80000000) != 0 || v17 == *(_DWORD*)(a1 + 272)) {
    return 0;
  }
  v19 = *v3;
  *(_DWORD*)(a1 + 272) = v17;
  game_map_VTarget_EnumerateSubTarget(v19 + 8, v17);
  v20 = *(_DWORD*)(a1 + 276);
  if ((v20 & 0x80000000) != 0 ||
      (v21 = *v3, *(char*)(*v3 + 12LL * v20 + 12413) < 0) ||
      *(char*)(*v3 + 12LL * v20 + 12414) < 0) {
    v20 = *(_DWORD*)(a1 + 272);
    if ((v20 & 0x80000000) != 0) {
      v23 = GameData_212d208;
      goto LABEL_34;
    }
    v21 = *v3;
    v22 = 64;
  }
  else {
    v22 = 12408;
  }
  v23 = (_BYTE*)(v21 + v22 + 12LL * v20 + 4);
LABEL_34:
  GameRoutine_78d280_alt1(a1, v23);
  return 1;
}

__int64 ProcMapSeqTargetSelect_78ece0(__int64 a1, long double a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  void* v8;
  __int64 v9;
  void* v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v17;
  _BYTE v18[200];

  v3 = GameData_212cff0[0];
  v4 = *GameData_212cff0[0];
  if (*(_DWORD*)(*GameData_212cff0[0] + 36) == -1) {
  LABEL_13:
    *(_BYTE*)(a1 + 23272) =
        *(_QWORD*)(a1 + 22936) - *(_QWORD*)(a1 + 22928) < 0x11u;
    GameRoutine_78e5d0(a1, a2);
    snd_Fade_Fade_10c830(v18, 0.0);
    *(struct PseudoSret*)(&v17) =
        snd_play_ff2d0("SE_SYS_Cursor_Target", "SE_SYS_Cursor_Target", v18, 0,
                       65537, 0, 0.0, 1.0);
    snd_Fade_Destroy_Fade(v18);
    return 1;
  }
  if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    v5 = game_UnitPool_Get(*GameData_212cfd0[0] + 8, a2);
    v4 = *v3;
    v6 = v5;
  }
  else {
    v6 = 0;
  }
  v7 = *(_DWORD*)(a1 + 272);
  v8 = GameData_212d208;
  v9 = v4 + 12LL * (unsigned int)v7 + 68;
  if (v7 <= -1) {
    v10 = GameData_212d208;
  }
  else {
    v10 = (void*)v9;
  }
  MapCombatPrediction_19f3aa0(a1 + 22920, v6, v10, 0, 0);
  v11 = *(_QWORD*)(a1 + 23000);
  if (v11 != 0) {
    v12 = *(_DWORD*)(a1 + 272);
    v13 = *(_QWORD*)(a1 + 23008);
    if (v12 <= -1) {
      v14 = (__int64)v8;
    }
    else {
      v14 = *v3 + 12LL * (unsigned int)v12 + 68;
    }
    GameRoutine_78f220(a1, v14, *(_QWORD*)(a1 + 23000), *(_QWORD*)(a1 + 23008));
    v15 = GameData_21d3f58;
    *(_QWORD*)(GameData_21d3f58 + 176) = v11;
    *(_QWORD*)(v15 + 184) = v13;
    *(_BYTE*)(v15 + 192) = 0;
    goto LABEL_13;
  }
  return 0;
}

__int64 ProcMapSeqTargetSelect_78f500(__int64 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64*** v9;
  __int64** v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v14;
  unsigned __int8* v15;
  unsigned int v16;
  bool v17;
  int v18;

  v1 = *(_QWORD*)(GameData_21cd0e8 + 24712);
  if (v1 == 0 || *(_QWORD*)(GameData_21cd0e8 + 24728) == 0) {
    return 0;
  }
  v3 = v1 - 1;
  v4 = *GameData_212cfc0[0];
  v5 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
  v6 = *(_DWORD*)(v5 + 8);
  v7 = (unsigned __int16)(v6 | ((unsigned __int16)*(_DWORD*)(v5 + 12) << 8));
  if ((v1 & (v1 - 1)) != 0) {
    v8 = v7;
    if (v1 <= v7) {
      v8 = (unsigned int)v7 % (unsigned int)v1;
    }
  }
  else {
    v8 = ((_DWORD)v1 - 1) & (unsigned int)v7;
  }
  v9 = *(__int64****)(*(_QWORD*)(GameData_21cd0e8 + 24704) + 8 * v8);
  if (v9 == nullptr) {
    return 0;
  }
  v10 = *v9;
  if (v10 == nullptr) {
    return 0;
  }
  if ((v1 & v3) == 0) {
    while (1) {
      v12 = v10[1];
      if (v12 == (__int64*)v7) {
        if (*((unsigned __int16*)v10 + 8) == (_DWORD)v7) {
          goto LABEL_25;
        }
      }
      else if (((unsigned __int64)v12 & v3) != v8) {
        return 0;
      }
      v10 = (__int64**)*v10;
      if (v10 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v11 = (unsigned __int64)v10[1];
    if (v11 == v7) {
      break;
    }
    if (v11 >= v1) {
      v11 %= v1;
    }
    if (v11 != v8) {
      return 0;
    }
  LABEL_14:
    v10 = (__int64**)*v10;
    if (v10 == nullptr) {
      return 0;
    }
  }
  if (*((unsigned __int16*)v10 + 8) != (_DWORD)v7) {
    goto LABEL_14;
  }
LABEL_25:
  v14 = GameData_21cd108;
  *(_BYTE*)(GameData_21cd108 + 313) = v6;
  *(_BYTE*)(v14 + 314) = *(_DWORD*)(*(_QWORD*)(v4 + 48) + 12LL);
  if (GameData_21cf830 != 0) {
    *(_DWORD*)(GameData_21cf830 + 152) = 26;
  }
  *(_BYTE*)(v4 + 24) = 0;
  *(_DWORD*)(a1 + 152) = 8;
  v15 = *(unsigned __int8**)(a1 + 16);
  if (v15 != nullptr) {
    v16 = *v15;
    v17 = v16 > 0x10;
    v18 = (1 << v16) & 0x1CE00;
    if (!v17 && v18 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  return 1;
}

__int64 ProcMapSeqTargetSelect_Destructor(__int64 a1, long double a2)
{
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
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
  unsigned int v30;
  __int128 v31;
  _QWORD* v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  void (***v50)(_QWORD);
  void (***v51)(_QWORD);
  void (***v52)(_QWORD);
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  __int64* v69;
  __int64 v70;
  _QWORD* v71;
  __int64 v72;
  __int64 v74;
  int v75;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqTargetSelect_vtable;
  *(_QWORD*)(a1 + 208) = GameData_1f983e0;
  v3 = *(_QWORD**)GameData_212d020[0];
  v4 = GameData_212cff0[0];
  if (*(_QWORD*)GameData_212d020[0] != 0) {
    if (v3[10] != 0) {
      v5 = v3[11];
      v3[10] = 0;
      v3[11] = 0;
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
      ++v3[23];
    }
    if (*(_BYTE*)(*v4 + 37100) == 1) {
      v6 = v3[16];
      if (*(_BYTE*)(v6 + 56) == 1) {
        *(_BYTE*)(v6 + 56) = 0;
      }
      if (v3[12] != 0) {
        v7 = v3[13];
        v3[12] = 0;
        v3[13] = 0;
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
        ++v3[22];
      }
    }
  }
  *(_QWORD*)(*(_QWORD*)GameData_212d220[0] + 152LL) = 0;
  if (*(_BYTE*)(*v4 + 37100) == 1 && *(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
    v8 = game_UnitPool_Get(*GameData_212cfd0[0] + 8, a2);
    if (v8 != 0) {
      v9 = *(_DWORD*)(a1 + 280);
      if ((v9 & 0x80000000) == 0) {
        v10 = *GameData_212ce98[0];
        v11 = *(_DWORD*)(a1 + 284);
        *(_BYTE*)(v8 + 584) = v9;
        *(_BYTE*)(v8 + 585) = v11;
        v12 = *(_QWORD*)(v10 + 96);
        GameRoutine_72b4a0(v12);
        GameRoutine_72b6c0(v12);
        GameRoutine_72a260(*(_QWORD*)(v10 + 152));
        *(_QWORD*)(a1 + 280) = -1;
      }
    }
  }
  v13 = GameData_212cfc8[0];
  v14 = *(_QWORD**)(*GameData_212cfc8[0] + 432);
  v15 = v14[59] + v14[58] - 1LL;
  Camera_7bfee0(v14, *(float*)(*(_QWORD*)(v14[55] + 8 * (v15 >> 10)) +
                               4 * (v15 & 0x3FF)));
  v17 = v14[55];
  v16 = v14[56];
  v18 = v16 - v17;
  v19 = v16 == v17;
  v21 = v14[58];
  v20 = v14[59];
  v22 = (v18 << 7) - 1;
  if (v19) {
    v22 = 0;
  }
  v14[59] = v20 - 1;
  if ((unsigned __int64)(v22 - (v20 + v21) + 1) >= 0x800) {
    v23 = *(_QWORD*)(v16 - 8);
    if (v23 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v23);
      v16 = v14[56];
    }
    v14[56] = v16 - 8;
  }
  v25 = *v13;
  v75 = 0;
  v26 = *(_QWORD*)(v25 + 432);
  if (*(_BYTE*)(v26 + 120) == 1) {
    (*(void (**)(__int64, double, double))(*(_QWORD*)(v26 + 96) + 24LL))(
        v26 + 96, 0.0, 0.0);
    *(_DWORD*)(v26 + 104) = 0;
  LABEL_35:
    *(_DWORD*)(v26 + 108) = 0;
    *(_WORD*)(v26 + 120) = 256;
    goto LABEL_36;
  }
  if (*(float*)(v26 + 104) > 0.75) {
    (*(void (**)(__int64))(*(_QWORD*)(v26 + 96) + 16LL))(v26 + 96);
    v27 = *(_QWORD*)(v26 + 96);
    v28 = v26 + 96;
  LABEL_34:
    (*(void (**)(__int64))(v27 + 24))(v28);
    *(_DWORD*)(v26 + 104) = 1061158912;
    goto LABEL_35;
  }
  if (((*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(v26 + 96) + 8LL))(
           v26 + 96, &v75, v26 + 128) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v26 + 96) + 16LL))(v26 + 96);
    v27 = *(_QWORD*)(v26 + 96);
    v28 = v26 + 96;
    goto LABEL_34;
  }

LABEL_36:
  v29 = *(_QWORD*)(*GameData_212cfc0[0] + 48);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v74 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v74;
    __cxa_guard_release(&GameData_21a6130);
  }
  *(_DWORD*)(v29 + 168) = 0;
  v30 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v29 + 144) = GameData_21a6120;
  v31 = *(_OWORD*)(v29 + 144);
  *((_QWORD*)&v31 + 1) = v30;
  *(_OWORD*)(v29 + 144) = v31;
  GameRoutine_1553220(1);
  v32 = *(_QWORD**)(a1 + 23248);
  if (v32 != nullptr) {
    v33 = fw_memory_g_heap_manager_ptr;
    do {
      v34 = (_QWORD*)*v32;
      if (*(_QWORD*)(*(_QWORD*)v33 + 200LL) != 0) {
        v35 = 128;
      }
      else {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v33 + v35, v32);
      v32 = v34;
    } while (v34 != nullptr);
  }
  v36 = *(_QWORD*)(a1 + 23232);
  *(_QWORD*)(a1 + 23232) = 0;
  if (v36 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                                  v36);
  }
  v38 = *(_QWORD**)(a1 + 23208);
  if (v38 != nullptr) {
    v39 = fw_memory_g_heap_manager_ptr;
    do {
      v40 = (_QWORD*)*v38;
      if (*(_QWORD*)(*(_QWORD*)v39 + 200LL) != 0) {
        v41 = 128;
      }
      else {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v39 + v41, v38);
      v38 = v40;
    } while (v40 != nullptr);
  }
  v42 = *(_QWORD*)(a1 + 23192);
  *(_QWORD*)(a1 + 23192) = 0;
  if (v42 != 0) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v43,
                                  v42);
  }
  v44 = *(_QWORD*)(a1 + 23168);
  if (v44 != 0) {
    *(_QWORD*)(a1 + 23176) = v44;
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                                  v44);
  }
  v46 = *(_QWORD*)(a1 + 23144);
  if (v46 != 0) {
    *(_QWORD*)(a1 + 23152) = v46;
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                                  v46);
  }
  v48 = *(_QWORD*)(a1 + 23120);
  if (v48 != 0) {
    *(_QWORD*)(a1 + 23128) = v48;
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v49,
                                  v48);
  }
  v50 = *(void (****)(_QWORD))(a1 + 23096);
  if (v50 != nullptr) {
    v51 = *(void (****)(_QWORD))(a1 + 23104);
    if (v50 == v51) {
      goto LABEL_73;
    }
    do {
      v51 -= 4637;
      (**v51)(v51);
    } while (v51 != v50);
    v52 = *(void (****)(_QWORD))(a1 + 23096);
    *(_QWORD*)(a1 + 23104) = v50;
    v50 = v52;
    if (v52 != nullptr) {
    LABEL_73:
      v53 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v50);
    }
  }
  v54 = *(_QWORD**)(a1 + 23072);
  *(_QWORD*)(a1 + 22920) = GameData_212d228[0] + 16;
  if (v54 != nullptr) {
    v55 = fw_memory_g_heap_manager_ptr;
    do {
      v56 = (_QWORD*)*v54;
      if (*(_QWORD*)(*(_QWORD*)v55 + 200LL) != 0) {
        v57 = 128;
      }
      else {
        v57 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v55 + v57, v54);
      v54 = v56;
    } while (v56 != nullptr);
  }
  v58 = *(_QWORD*)(a1 + 23056);
  *(_QWORD*)(a1 + 23056) = 0;
  if (v58 != 0) {
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v59,
                                  v58);
  }
  v60 = *(_QWORD*)(a1 + 22976);
  *(_QWORD*)(a1 + 22920) = GameData_212d230[0] + 16;
  if (v60 != 0) {
    *(_QWORD*)(a1 + 22984) = v60;
    v61 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v61 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v61,
                                  v60);
  }
  v62 = *(_QWORD*)(a1 + 22952);
  if (v62 != 0) {
    *(_QWORD*)(a1 + 22960) = v62;
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v63,
                                  v62);
  }
  v64 = *(_QWORD*)(a1 + 22928);
  if (v64 != 0) {
    *(_QWORD*)(a1 + 22936) = v64;
    v65 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v65,
                                  v64);
  }
  v66 = GameData_212d238[0] + 16;
  *(_QWORD*)(a1 + 11600) = GameData_212d238[0] + 16;
  v67 = *(_QWORD*)(a1 + 22904);
  v68 = GameData_212da50[0] + 2;
  *(_QWORD*)(a1 + 22896) = GameData_212da50[0] + 2;
  if (v67 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v67 + 8LL))(v67);
    *(_QWORD*)(a1 + 22904) = 0;
  }
  v69 = GameData_212d258[0] + 2;
  *(_QWORD*)(a1 + 11608) = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 13896);
  BattleSide_Destructor(a1 + 13136);
  BattleSide_Destructor(a1 + 12376);
  BattleSide_Destructor(a1 + 11616);
  v70 = *(_QWORD*)(a1 + 11592);
  *(_QWORD*)(a1 + 288) = v66;
  *(_QWORD*)(a1 + 11584) = v68;
  if (v70 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v70 + 8LL))(v70);
    *(_QWORD*)(a1 + 11592) = 0;
  }
  *(_QWORD*)(a1 + 296) = v69;
  BattleSide_Destructor(a1 + 2584);
  BattleSide_Destructor(a1 + 1824);
  BattleSide_Destructor(a1 + 1064);
  BattleSide_Destructor(a1 + 304);
  v71 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1f98468;
  if (v71 == (_QWORD*)(a1 + 160)) {
    v72 = 32;
  }
  else {
    if (v71 == nullptr) {
      goto LABEL_107;
    }
    v72 = 40;
  }
  (*(void (**)(__int64))(*v71 + v72))((__int64)v71);

LABEL_107:
  game_map_g_map_sequence = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
