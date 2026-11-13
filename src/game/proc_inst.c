#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_oe_SetCpuBoostMode(_QWORD);
__int64 nn_os_ClearEvent(_QWORD);
__int64 nn_os_SignalEvent(_QWORD);
extern __int64 GameData_212c638;
extern __int64 snd_g_fileIndex;
extern char GameData_21c9699;
__int64 ProcInst_Destructor();
__int64 ProcInst_DeletingDestructor();
__int64 GameRoutine_658d60(_QWORD);
__int64 ProcInst_657a50_alt1(_QWORD, _QWORD) __asm__("ProcInst_657a50");
__int64 ProcInst_657b10_alt1(_QWORD) __asm__("ProcInst_657b10");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_HashString32(_QWORD);
extern _UNKNOWN GameData_21c6868;
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 game_ProcGameSkipView_instance_;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
__int64 ProcInst_657850(__int64 a1, __int64 a2, __int64 a3, char a4,
                        __int64 a5);
__int64 ProcInst_657950(__int64 a1, __int64 a2, char a3, __int64 a4);
_BYTE* ProcInst_657a50(__int64 a1, char a2);
__int64 ProcInst_657b10(__int64 a1);
_QWORD* ProcInst_657b80(_QWORD* result, int a2);
__int64 ProcInst_657c40(__int64 result);
__int64 ProcInst_657ca0(__int64 result, char a2, float a3);
__int64 ProcInst_657d40(__int64 result, int a2, char a3);
__int64 GameRoutine_65b240(__int64*);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21c6898;
extern __int64 GameData_21c68a0;
extern __int64 GameData_21c68a8;
extern __int64 GameData_21c68b8;
extern __int64 GameData_21c68c0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcInst_657df0(__int64 a1);
__int64 ProcInst_6588e0(__int64 a1);
__int64 ProcInst_658a60(__int64 a1);
__int64 GameRoutine_658d60_alt1(__int64*) __asm__("GameRoutine_658d60");
__int64 GameRoutine_7435e0();
__int64 GameRoutine_9b86d0(__int64, char);
__int64 GameRoutine_a84710(__int64);
__int64 ProcRegistry_65a470(__int64 result);
extern _QWORD as_g_context_slots[16384];
extern __int64 GameData_21c6960;
extern __int64 GameData_21c6968;
extern __int64 GameData_21c6970;
extern __int64 GameData_21f8018;
extern __int64 game_g_frame_clock;
extern __int64 game_g_game_setting_ptr;
extern int GameData_21c68c8;
__int64 ProcInst_657e40(__int64 a1);
__int64 ProcInst_659c60();
__int64* GameRoutine_65abc0(__int64* result, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString32_alt1(__int64 result) __asm__("game_HashString32");
__int64 game_ProcInst_Register(__int64);
__int64 std___1___next_prime(_QWORD);
extern _UNKNOWN GameData_21c6950;
extern __int64 GameData_212c608[2];
extern __int64 GameData_21c6878;
extern __int64 GameData_21c6880;
extern __int64 GameData_21c6888;
extern __int64 GameData_21c68d8;
extern __int64 GameData_21c68e0;
extern __int64 GameData_21c68e8;
extern __int64 GameData_21c68f8;
extern __int64 GameData_21c6908;
extern __int64 GameData_21c6918;
extern __int64 GameData_21c6920;
extern __int64 GameData_21c6928;
extern __int64 GameData_21c6938;
extern __int64 GameData_21c6948;
extern __int64 game_g_proc_registry;
extern char GameData_21c68d0;
extern char GameData_21c6910;
extern int GameData_21c6890;
extern int GameData_21c68f0;
extern int GameData_21c6900;
extern int GameData_21c6930;
extern int GameData_21c6940;
extern int game_g_last_proc_id;
__int64 ProcInst_6595e0();

__int64 ProcInst_657850(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v6;
  _BYTE* v9;
  char v10;

  if (a5 != 0) {
    v6 = *(_QWORD*)(a5 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = a1;
      *(_QWORD*)(a1 + 56) = *(_QWORD*)(a5 + 40);
    }
    *(_QWORD*)(a5 + 40) = a1;
    *(_QWORD*)(a1 + 24) = a3;
    *(_QWORD*)(a1 + 32) = a5;
    *(_DWORD*)(a1 + 140) = game_HashString32(a3);
    *(_QWORD*)(a1 + 8) = a2;
    *(_QWORD*)(a1 + 16) = a2;
    *(_QWORD*)(a1 + 64) = 0;
    *(_QWORD*)(a1 + 72) = 24;
    *(_QWORD*)(a1 + 80) = 1;
    (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 136LL))(a1) & 1) != 0 &&
        (*(_WORD*)(a1 + 136) & 0x100) == 0) {
      *(_WORD*)(a1 + 136) |= 0x100u;
    }
    if ((a4 & 1) != 0) {
      v9 = *(_BYTE**)(a1 + 32);
      v10 = v9[138];
      if (v10 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v9 + 64LL))(*(_QWORD*)(a1 + 32));
        v10 = v9[138];
      }
      v9[138] = v10 + 1;
      *(_WORD*)(a1 + 136) |= 2u;
    }
  }
  else if ((*(_WORD*)(a1 + 136) & 1) == 0) {
    ProcInst_657a50_alt1(a1, 1);
  }
  return a1;
}

__int64 ProcInst_657950(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  int v7;
  int v8;
  char v11;
  __int64 v12;

  v4 = a4;
  v5 = a2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a1;
    v11 = a3;
    v7 = __cxa_guard_acquire(&GameData_21c6868);
    a3 = v11;
    v5 = a2;
    v4 = a4;
    v8 = v7;
    a1 = v12;
    if (v8 != 0) {
      GameData_21c67a8 = 3;
      GameData_21c67d0 = 0;
      GameData_21c67d8 = 0;
      GameData_21c67e0 = 0;
      GameData_21c67b0 = 0;
      GameData_21c67b8 = 0;
      GameData_21c67c0 = 0;
      GameData_21c67c8 = 0;
      GameData_21c6808 = 0;
      GameData_21c6810 = 0;
      GameData_21c6818 = 0;
      GameData_21c6820 = 0;
      GameData_21c6828 = 0;
      GameData_21c6850 = 0;
      GameData_21c6858 = 0;
      GameData_21c6860 = 0;
      GameData_21c6848 = 0;
      GameData_21c6838 = 0;
      GameData_21c6840 = 0;
      GameData_21c6830 = 0;
      GameData_21c67e8 = 14;
      GameData_21c67f0 = 0;
      GameData_21c67f8 = 16;
      GameData_21c6800 = 1;
      __cxa_guard_release(&GameData_21c6868);
      a1 = v12;
      a3 = v11;
      v5 = a2;
      v4 = a4;
    }
  }
  return ProcInst_657850(a1, (__int64)&GameData_21c67a8, v5, a3 & 1, v4);
}

_BYTE* ProcInst_657a50(__int64 a1, char a2)
{
  __int64 v3;
  _BYTE* result;
  __int16 v5;
  char v6;
  __int16 v7;

  if ((a2 & 1) == 0) {
    v3 = *(_QWORD*)(a1 + 56);
    if (v3 != 0) {
      ProcInst_657a50(v3, 0);
    }
  }
  result = *(_BYTE**)(a1 + 40);
  if (result != nullptr) {
    result = (_BYTE*)ProcInst_657a50(result, 0);
  }
  v5 = *(_WORD*)(a1 + 136);
  if ((v5 & 1) != 0) {
    if ((v5 & 2) == 0) {
      goto LABEL_8;
    }
  }
  else {
    result = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
    v5 = *(_WORD*)(a1 + 136) | 1;
    *(_WORD*)(a1 + 136) = v5;
    if ((v5 & 2) == 0) {
    LABEL_8:
      if ((v5 & 0x10) == 0) {
        return result;
      }
      goto LABEL_9;
    }
  }
  result = *(_BYTE**)(a1 + 32);
  v6 = result[138] - 1;
  result[138] = v6;
  if (v6 == 0) {
    result = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 72LL))(result);
  }
  v7 = *(_WORD*)(a1 + 136) & 0xFFFD;
  *(_WORD*)(a1 + 136) = v7;
  if ((v7 & 0x10) != 0) {
  LABEL_9:
    result = (_BYTE*)ProcInst_657b10_alt1(*(_QWORD*)(a1 + 32));
    *(_WORD*)(a1 + 136) &= ~0x10u;
  }
  return result;
}

__int64 ProcInst_657b10(__int64 a1)
{
  __int64 result;
  char v3;

  result = *(_QWORD*)(a1 + 32);
  if (result != 0) {
    result = ProcInst_657b10(result);
  }
  v3 = *(_BYTE*)(a1 + 139) - 1;
  *(_BYTE*)(a1 + 139) = v3;
  if (v3 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  }
  return result;
}

_QWORD* ProcInst_657b80(_QWORD* result, int a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;

  v2 = result[12];
  v3 = result[13];
  v5 = result;
  v6 = ((v3 - v2) << 6) - 1;
  if (v3 == v2) {
    v6 = 0;
  }
  v7 = result[16] + result[15];
  if (v6 == v7) {
    result = (_QWORD*)GameRoutine_658d60(result + 11);
    v2 = v5[12];
    v7 = v5[16] + v5[15];
  }
  *(_QWORD*)(*(_QWORD*)(v2 + 8 * (v7 >> 9)) + 8 * (v7 & 0x1FF)) = v5[2];
  ++v5[16];
  v8 = v5[1];
  if (v8 != 0) {
    while (1) {
      if (*(_BYTE*)v8 == 2) {
        if (*(_DWORD*)(v8 + 32) == a2) {
          v5[2] = v8;
          *((_WORD*)v5 + 68) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v8 == 0) {
        return result;
      }
      v8 += 64;
    }
  }
  return result;
}

__int64 ProcInst_657c40(__int64 result)
{
  int v1;
  int v2;
  float v3;

  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v2 = 2)
           : (v2 = 3),
       (v2 & v1) != 0)) {
    v3 = *(float*)(result + 144);
    if (v3 < 1.0) {
      v3 = 1.0;
    }
    *(_WORD*)(result + 136) = *(_WORD*)(result + 136) & 0xFF97 | 0x20;
    *(float*)(result + 144) = v3;
  }
  return result;
}

__int64 ProcInst_657ca0(__int64 result, char a2, float a3)
{
  int v3;
  int v4;
  int v5;
  float v6;
  __int16 v7;
  __int16 v8;

  v3 = (int)(float)(a3 * 60.0);
  if (v3 >= 1) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v5 = 2)
             : (v5 = 3),
         a2 == 0 || (v5 & v4) != 0)) {
      v6 = (float)(unsigned int)v3;
      v7 = *(_WORD*)(result + 136);
      v8 = v7 | 0x60;
      if (*(float*)(result + 144) >= v6) {
        v6 = *(float*)(result + 144);
      }
      if (a2 == 0) {
        v7 = *(_WORD*)(result + 136) & 0xFF9F;
      }
      if (a2 == 1) {
        v7 = *(_WORD*)(result + 136) & 0xFF9F | 0x20;
      }
      *(float*)(result + 144) = v6;
      if (a2 == 2) {
        v7 = v8;
      }
      *(_WORD*)(result + 136) = v7 & 0xFFF7;
    }
  }
  return result;
}

__int64 ProcInst_657d40(__int64 result, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  float v6;
  __int16 v7;
  __int16 v8;

  v3 = (int)(float)((float)a2 * 0.06f);
  if (v3 >= 1) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v5 = 2)
             : (v5 = 3),
         a3 == 0 || (v5 & v4) != 0)) {
      v6 = (float)(unsigned int)v3;
      v7 = *(_WORD*)(result + 136);
      v8 = v7 | 0x60;
      if (*(float*)(result + 144) >= v6) {
        v6 = *(float*)(result + 144);
      }
      if (a3 == 0) {
        v7 = *(_WORD*)(result + 136) & 0xFF9F;
      }
      if (a3 == 1) {
        v7 = *(_WORD*)(result + 136) & 0xFF9F | 0x20;
      }
      *(float*)(result + 144) = v6;
      if (a3 == 2) {
        v7 = v8;
      }
      *(_WORD*)(result + 136) = v7 & 0xFFF7;
    }
  }
  return result;
}

__int64 ProcInst_657df0(__int64 a1)
{
  __int64 result;
  char v3;

  result = *(_QWORD*)(a1 + 32);
  if (result != 0) {
    result = ProcInst_657df0(result);
  }
  v3 = *(_BYTE*)(a1 + 139);
  if (v3 == 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
    v3 = *(_BYTE*)(a1 + 139);
  }
  *(_BYTE*)(a1 + 139) = v3 + 1;
  return result;
}

__int64 ProcInst_657e40(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int16 v10;
  float v11;
  unsigned __int8* v12;
  __int16 v13;
  unsigned int v14;
  bool v15;
  int v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int8* v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  _QWORD* v39;
  unsigned __int64 v40;
  __int64 v41;
  _QWORD* v42;
  unsigned __int64 v43;
  __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 (*v48)(__int64);
  __int64 (*v49)(__int64);
  unsigned __int64 v50;
  __int64 v51;
  _QWORD* v52;
  __int64 (*v53)(__int64);
  unsigned __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 (*v57)(__int64);
  __int64 (*v58)(__int64);
  __int64 (*v59)(__int64, _QWORD);
  __int64 (*v60)(_QWORD);
  unsigned __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 (*v64)(__int64, _QWORD, _QWORD);
  __int64 (*v65)(_QWORD, _QWORD);
  __int64 (*v66)(__int64, _QWORD);
  __int64 (*v67)(_QWORD);
  unsigned __int64 v68;
  __int64 v69;
  _QWORD* v70;
  __int64 (*v71)(__int64);
  __int64 (*v72)(__int64);
  __int64 (*v73)(__int64);
  float v74;
  int v75;
  int v76;
  float v77;
  int v78;
  int v79;
  int v80;
  int v81;
  bool v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  __int16 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int8* v95;
  unsigned __int8* v96;
  unsigned int v97;
  int v98;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  bool v103;
  __int64 v104;
  __int64 v105;

  v2 = &as_g_context_slots[16199];
LABEL_2:
  result = *(_QWORD*)(a1 + 56);
  v4 = v2;
  if (result != 0) {
    result = ProcInst_657e40(result);
  }
  v5 = GameData_21c68a0;
  v6 = ((GameData_21c68a8 - GameData_21c68a0) << 6) - 1;
  if (GameData_21c68a8 == GameData_21c68a0) {
    v6 = 0;
  }
  *(_WORD*)(a1 + 136) |= 4u;
  v7 = GameData_21c68c0 + GameData_21c68b8;
  if (v6 == GameData_21c68c0 + GameData_21c68b8) {
    result = GameRoutine_65b240(&GameData_21c6898);
    v5 = GameData_21c68a0;
    v7 = GameData_21c68c0 + GameData_21c68b8;
  }
  *(_QWORD*)(*(_QWORD*)(v5 + 8 * (v7 >> 9)) + 8 * (v7 & 0x1FF)) = a1;
  ++GameData_21c68c0;
LABEL_11:
  while (2) {
    v10 = *(_WORD*)(a1 + 136);
    if ((v10 & 1) != 0 ||
        (*(unsigned __int8*)(a1 + 139) | *(unsigned __int8*)(a1 + 138)) != 0) {
      goto LABEL_221;
    }
    v11 = *(float*)(a1 + 144);
    if (v11 > 0x0.0p+0f) {
      if ((float)(0x1.e000000000000p+5f /
                  (float)*(int*)(game_g_frame_clock + 476)) <= 0x0.0p+0f) {
        v74 = 0x1.0000000000000p+0f;
      }
      else {
        v74 = 0x1.e000000000000p+5f / (float)*(int*)(game_g_frame_clock + 476);
      }
      if ((v10 & 0x20) == 0 || game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v75 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v76 = 2)
               : (v76 = 3),
           (v76 & v75) != 0)) {
        if ((v10 & 0x40) == 0) {
          goto LABEL_147;
        }
        if (game_ProcGameSkipView_instance_ == 0 ||
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
            (((v78 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) !=
                     0
                 ? (v79 = 2)
                 : (v79 = 3),
             (v79 & v78) != 0)) {
          v77 = 0x0.0p+0f;
          v80 = *(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 952LL);
          if ((v80 & 3) != 0 ||
              (v80 & 0x80) != 0 &&
                  (game_ProcGameSkipView_instance_ == 0 ||
                   (*(_BYTE*)(game_ProcGameSkipView_instance_ + 156) & 1) !=
                       0)) {
          LABEL_157:
            *(float*)(a1 + 144) = v77;
            goto LABEL_221;
          }
          result = GameRoutine_7435e0();
          if ((result & 1) != 0) {
            v74 = v74 + v74;
          }
          v11 = *(float*)(a1 + 144);
        LABEL_147:
          v77 = v11 - v74;
          if (v77 < 0x0.0p+0f) {
            v77 = 0x0.0p+0f;
          }
          goto LABEL_157;
        }
      }
      *(_DWORD*)(a1 + 144) = 0;
      goto LABEL_221;
    }
    v12 = *(unsigned __int8**)(a1 + 16);
    v13 = v10 & 0xFFF6;
    *(_WORD*)(a1 + 136) = v10 & 0xFFF6;
    if ((v10 & 0x80) != 0) {
      if (v12 != nullptr) {
        v14 = *v12;
        v15 = v14 > 0x10;
        v16 = (1 << v14) & 0x1CE00;
        v17 = v15 || v16 == 0;
        if (!v17) {
          v12 += 64;
          *(_QWORD*)(a1 + 16) = v12;
        }
      }
      v13 = v10 & 0xFF76;
      *(_WORD*)(a1 + 136) = v10 & 0xFF76;
    }
    switch (*v12) {
    case 0u:
      result = (__int64)ProcInst_657a50(a1, 1);
      v91 = *(_WORD*)(a1 + 136);
      if ((v91 & 0x80) == 0) {
        goto LABEL_221;
      }
      goto LABEL_214;
    case 2u:
    case 7u:
    case 0x20u:
      goto LABEL_10;
    case 3u:
      goto LABEL_212;
    case 4u:
      v84 = (int)(float)((float)*((int*)v12 + 12) * 0x1.eb851e0000000p-5f);
      if (v84 < 1) {
        goto LABEL_212;
      }
      v85 = v12[32];
      if (game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
        v86 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
        v87 = (v86 & 8) != 0 ? 2 : 3;
        if (v12[32] != 0 && (v87 & v86) == 0) {
          goto LABEL_212;
        }
      }
      if (v11 < (float)(unsigned int)v84) {
        v11 = (float)(unsigned int)v84;
      }
      *(float*)(a1 + 144) = v11;
      if (v85 == 2) {
        goto LABEL_210;
      }
      if (v85 != 1) {
        goto LABEL_183;
      }
      goto LABEL_197;
    case 5u:
      v88 = *((_DWORD*)v12 + 12);
      if (v88 < 1) {
        goto LABEL_212;
      }
      v85 = v12[32];
      if (game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
        v89 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
        v90 = (v89 & 8) != 0 ? 2 : 3;
        if (v12[32] != 0 && (v90 & v89) == 0) {
          goto LABEL_212;
        }
      }
      if (v11 < (float)(unsigned int)v88) {
        v11 = (float)(unsigned int)v88;
      }
      *(float*)(a1 + 144) = v11;
      if (v85 == 2) {
      LABEL_210:
        v13 |= 0x60u;
      }
      else if (v85 == 1) {
      LABEL_197:
        v13 = v13 & 0xFF96 | 0x20;
      }
      else {
      LABEL_183:
        if (v85 == 0) {
          v13 &= 0xFF96u;
        }
      }
      *(_WORD*)(a1 + 136) = v13 & 0xFFF7;
      goto LABEL_212;
    case 6u:
      result = ProcRegistry_65a470(a1);
      goto LABEL_135;
    case 8u:
      v57 = *((__int64 (**)(__int64))v12 + 1);
      if (v57 != nullptr) {
        result = v57(a1);
      }
      v58 = *((__int64 (**)(__int64))v12 + 2);
      if (v58 != nullptr) {
        result = v58(result);
      }
      goto LABEL_135;
    case 9u:
      v49 = *((__int64 (**)(__int64))v12 + 1);
      if (v49 != nullptr) {
        result = v49(a1);
      }
      v46 = *((_QWORD*)v12 + 2);
      if (v46 != 0) {
        goto LABEL_69;
      }
      goto LABEL_70;
    case 0xAu:
      v40 = *((_QWORD*)v12 + 1);
      if (v40 == 0) {
        v73 = *((__int64 (**)(__int64))v12 + 2);
        if (v73 == nullptr) {
          goto LABEL_213;
        }
        result = v73(result);
        if ((result & 1) != 0) {
          goto LABEL_213;
        }
      LABEL_135:
        *(_QWORD*)(a1 + 16) += 64LL;
        continue;
      }
      v42 = (_QWORD*)a1;
    LABEL_101:
      result = ((__int64 (*)(_QWORD*))v40)(v42);
    LABEL_102:
      if ((result & 1) == 0) {
        goto LABEL_135;
      }
    LABEL_213:
      v91 = *(_WORD*)(a1 + 136);
      if ((v91 & 0x80) != 0) {
      LABEL_214:
        v95 = *(unsigned __int8**)(a1 + 16);
        if (v95 != nullptr) {
          v97 = *v95;
          v96 = v95 + 64;
          v98 = (1 << v97) & 0x1CE00;
          if (v97 <= 0x10 && v98 != 0) {
            *(_QWORD*)(a1 + 16) = v96;
          }
        }
        *(_WORD*)(a1 + 136) = v91 & 0xFF7F;
      }
    LABEL_221:
      v100 = GameData_21c68a8;
      v101 = GameData_21c68c0;
      v102 = ((GameData_21c68a8 - GameData_21c68a0) << 6) - 1;
      if (GameData_21c68a8 == GameData_21c68a0) {
        v102 = 0;
      }
      --GameData_21c68c0;
      v103 = (unsigned __int64)(v102 - (v101 + GameData_21c68b8) + 1) >= 0x400;
      v2 = v4;
      if (v103) {
        v104 = *(_QWORD*)(GameData_21c68a8 - 8);
        if (v104 != 0) {
          v105 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v105 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v105, v104);
          v100 = v4[277];
          v2 = v4;
        }
        v2[277] = v100 - 8;
      }
      if ((*(_WORD*)(a1 + 136) & 1) == 0) {
        a1 = *(_QWORD*)(a1 + 40);
        if (a1 != 0) {
          goto LABEL_2;
        }
      }
      return result;
    case 0xBu:
      v53 = *((__int64 (**)(__int64))v12 + 1);
      if (v53 != nullptr) {
        result = v53(a1);
        if ((result & 1) == 0) {
          goto LABEL_213;
        }
      }
      else {
        v72 = *((__int64 (**)(__int64))v12 + 2);
        if (v72 != nullptr) {
          result = v72(result);
          if ((result & 1) == 0) {
            goto LABEL_213;
          }
        }
      }
      goto LABEL_135;
    case 0xCu:
      v48 = *((__int64 (**)(__int64))v12 + 1);
      if (v48 != nullptr) {
        result = v48(a1);
        v12 = *(unsigned __int8**)(a1 + 16);
        if ((result & 1) == 0) {
          goto LABEL_10;
        }
      }
      else {
        v71 = *((__int64 (**)(__int64))v12 + 2);
        if (v71 != nullptr) {
          result = v71(result);
          v12 = *(unsigned __int8**)(a1 + 16);
          if ((result & 1) == 0) {
          LABEL_10:
            *(_QWORD*)(a1 + 16) = v12 + 64;
            continue;
          }
        }
      }
      v36 = *(_QWORD*)(a1 + 8);
      if (v36 != 0) {
        while (1) {
          if (*(_BYTE*)v36 == 2) {
            if (*(_DWORD*)(v36 + 32) == *((_DWORD*)v12 + 8)) {
              goto LABEL_129;
            }
          }
          else if (*(_BYTE*)v36 == 0) {
            goto LABEL_11;
          }
          v36 += 64;
        }
      }
      continue;
    case 0xDu:
      v61 = *((_QWORD*)v12 + 2);
      v62 = *((_QWORD*)v12 + 3);
      if ((v62 & 1 | v61) != 0) {
        v63 = (_QWORD*)(a1 + (v62 >> 1));
        if ((v62 & 1) != 0) {
          v61 = *(_QWORD*)(*v63 + v61);
        }
        result = ((__int64 (*)(_QWORD*))v61)(v63);
        v12 = *(unsigned __int8**)(a1 + 16);
      }
      goto LABEL_10;
    case 0xEu:
      v46 = *((_QWORD*)v12 + 2);
      v47 = *((_QWORD*)v12 + 3);
      if ((v47 & 1 | v46) == 0) {
        goto LABEL_213;
      }
      result = a1 + (v47 >> 1);
      if ((v47 & 1) != 0) {
        v46 = *(_QWORD*)(*(_QWORD*)result + v46);
      }
    LABEL_69:
      result = ((__int64 (*)(__int64))v46)(result);
    LABEL_70:
      if ((*(_WORD*)(a1 + 136) & 8) == 0) {
        goto LABEL_213;
      }
      continue;
    case 0xFu:
      v40 = *((_QWORD*)v12 + 2);
      v41 = *((_QWORD*)v12 + 3);
      if ((v41 & 1 | v40) == 0) {
        goto LABEL_213;
      }
      v42 = (_QWORD*)(a1 + (v41 >> 1));
      if ((v41 & 1) == 0) {
        goto LABEL_101;
      }
      result = (*(__int64 (**)(_QWORD*))(*v42 + v40))(v42);
      goto LABEL_102;
    case 0x10u:
      v54 = *((_QWORD*)v12 + 2);
      v55 = *((_QWORD*)v12 + 3);
      if ((v55 & 1 | v54) == 0) {
        goto LABEL_10;
      }
      v56 = (_QWORD*)(a1 + (v55 >> 1));
      if ((v55 & 1) != 0) {
        v54 = *(_QWORD*)(*v56 + v54);
      }
      result = ((__int64 (*)(_QWORD*))v54)(v56);
      if ((result & 1) == 0) {
        goto LABEL_213;
      }
      v12 = *(unsigned __int8**)(a1 + 16);
      goto LABEL_10;
    case 0x11u:
      v50 = *((_QWORD*)v12 + 2);
      v51 = *((_QWORD*)v12 + 3);
      if ((v51 & 1 | v50) != 0) {
        v52 = (_QWORD*)(a1 + (v51 >> 1));
        if ((v51 & 1) != 0) {
          v50 = *(_QWORD*)(*v52 + v50);
        }
        result = ((__int64 (*)(_QWORD*))v50)(v52);
        v12 = *(unsigned __int8**)(a1 + 16);
        if ((result & 1) == 0) {
          goto LABEL_10;
        }
      }
      v36 = *(_QWORD*)(a1 + 8);
      if (v36 == 0) {
        continue;
      }
      while (2) {
        if (*(_BYTE*)v36 == 2) {
          if (*(_DWORD*)(v36 + 32) != *((_DWORD*)v12 + 8)) {
            goto LABEL_79;
          }
        LABEL_129:
          *(_QWORD*)(a1 + 16) = v36;
          *(_WORD*)(a1 + 136) &= ~0x80u;
        }
        else if (*(_BYTE*)v36 != 0) {
        LABEL_79:
          v36 += 64;
          continue;
        }
        goto LABEL_11;
      }
    case 0x12u:
      v8 = *((_QWORD*)v12 + 1);
      v9 = *((_QWORD*)v12 + 3);
      *(_QWORD*)(a1 + 72) = *((_QWORD*)v12 + 2);
      *(_QWORD*)(a1 + 80) = v9;
      *(_QWORD*)(a1 + 64) = v8;
      goto LABEL_10;
    case 0x13u:
      v59 = *((__int64 (**)(__int64, _QWORD))v12 + 1);
      if (v59 != nullptr) {
        result = v59(a1, *((unsigned int*)v12 + 8));
      }
      v60 = *((__int64 (**)(_QWORD))v12 + 2);
      if (v60 != nullptr) {
        result = v60(*((unsigned int*)v12 + 8));
      }
      goto LABEL_135;
    case 0x14u:
      v64 = *((__int64 (**)(__int64, _QWORD, _QWORD))v12 + 1);
      if (v64 != nullptr) {
        result = v64(a1, *((unsigned int*)v12 + 8), *((unsigned int*)v12 + 12));
      }
      v65 = *((__int64 (**)(_QWORD, _QWORD))v12 + 2);
      if (v65 != nullptr) {
        result = v65(*((unsigned int*)v12 + 8), *((unsigned int*)v12 + 12));
      }
      goto LABEL_135;
    case 0x15u:
      v43 = *((_QWORD*)v12 + 2);
      v44 = *((_QWORD*)v12 + 3);
      if ((v44 & 1 | v43) != 0) {
        v45 = (_QWORD*)(a1 + (v44 >> 1));
        if ((v44 & 1) != 0) {
          v43 = *(_QWORD*)(*v45 + v43);
        }
        result =
            ((__int64 (*)(_QWORD*, _QWORD))v43)(v45, *((unsigned int*)v12 + 8));
        v12 = *(unsigned __int8**)(a1 + 16);
      }
      goto LABEL_10;
    case 0x16u:
      v68 = *((_QWORD*)v12 + 2);
      v69 = *((_QWORD*)v12 + 3);
      if ((v69 & 1 | v68) != 0) {
        v70 = (_QWORD*)(a1 + (v69 >> 1));
        if ((v69 & 1) != 0) {
          v68 = *(_QWORD*)(*v70 + v68);
        }
        result = ((__int64 (*)(_QWORD*, _QWORD, _QWORD))v68)(
            v70, *((unsigned int*)v12 + 8), *((unsigned int*)v12 + 12));
        v12 = *(unsigned __int8**)(a1 + 16);
      }
      goto LABEL_10;
    case 0x17u:
      v66 = *((__int64 (**)(__int64, _QWORD))v12 + 1);
      if (v66 != nullptr) {
        result = v66(a1, *((_QWORD*)v12 + 5));
      }
      v67 = *((__int64 (**)(_QWORD))v12 + 2);
      if (v67 != nullptr) {
        result = v67(*((_QWORD*)v12 + 5));
      }
      goto LABEL_135;
    case 0x18u:
      v37 = *((_QWORD*)v12 + 2);
      v38 = *((_QWORD*)v12 + 3);
      if ((v38 & 1 | v37) != 0) {
        v39 = (_QWORD*)(a1 + (v38 >> 1));
        if ((v38 & 1) != 0) {
          v37 = *(_QWORD*)(*v39 + v37);
        }
        result = ((__int64 (*)(_QWORD*, _QWORD))v37)(v39, *((_QWORD*)v12 + 5));
        v12 = *(unsigned __int8**)(a1 + 16);
      }
      goto LABEL_10;
    case 0x19u:
      v31 = *(_QWORD*)(a1 + 96);
      v32 = *(_QWORD*)(a1 + 104);
      v33 = *((_DWORD*)v12 + 8);
      v34 = ((v32 - v31) << 6) - 1;
      if (v32 == v31) {
        v34 = 0;
      }
      v35 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
      if (v34 == v35) {
        result = GameRoutine_658d60_alt1((__int64*)(a1 + 88));
        v31 = *(_QWORD*)(a1 + 96);
        v35 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
        v12 = *(unsigned __int8**)(a1 + 16);
      }
      *(_QWORD*)(*(_QWORD*)(v31 + 8 * (v35 >> 9)) + 8 * (v35 & 0x1FF)) = v12;
      ++*(_QWORD*)(a1 + 128);
      v36 = *(_QWORD*)(a1 + 8);
      if (v36 == 0) {
        continue;
      }
      while (2) {
        if (*(_BYTE*)v36 == 2) {
          if (*(_DWORD*)(v36 + 32) != v33) {
            goto LABEL_44;
          }
          goto LABEL_129;
        }
        if (*(_BYTE*)v36 != 0) {
        LABEL_44:
          v36 += 64;
          continue;
        }
        goto LABEL_11;
      }
    case 0x1Au:
      v19 = *(_QWORD*)(a1 + 120);
      v18 = *(_QWORD*)(a1 + 128);
      v21 = *(_QWORD*)(a1 + 96);
      v20 = *(_QWORD*)(a1 + 104);
      v22 = v18 - 1;
      v17 = v20 == v21;
      v23 = v18 + v19;
      v24 = ((v20 - v21) << 6) - 1;
      v25 = *(_QWORD*)(v21 + 8 * ((unsigned __int64)(v22 + v19) >> 9));
      if (v17) {
        v24 = 0;
      }
      v26 = *(unsigned __int8**)(v25 + 8 * ((v22 + v19) & 0x1FF));
      *(_QWORD*)(a1 + 128) = v22;
      *(_QWORD*)(a1 + 16) = v26;
      if ((unsigned __int64)(v24 - v23 + 1) >= 0x400) {
        v27 = *(_QWORD*)(v20 - 8);
        if (v27 != 0) {
          v28 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v28 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v27);
          v20 = *(_QWORD*)(a1 + 104);
          v26 = *(unsigned __int8**)(a1 + 16);
        }
        *(_QWORD*)(a1 + 104) = v20 - 8;
      }
      v29 = *v26;
      if (v29 != 9 && v29 != 14) {
        *(_QWORD*)(a1 + 16) = v26 + 64;
      }
      continue;
    case 0x1Bu:
      if ((GameData_21c9699 & 1) != 0) {
        goto LABEL_212;
      }
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                GameData_212c638 +
                                                            32LL) -
                                                 8LL) +
                                      40LL) +
                           16LL) +
                48LL) = 0;
      result = nn_oe_SetCpuBoostMode(1);
      v94 = snd_g_fileIndex;
      if (*(_DWORD*)(snd_g_fileIndex + 4736) != 1 &&
          (*(_BYTE*)(snd_g_fileIndex + 4742) & 1) == 0) {
        *(_DWORD*)(snd_g_fileIndex + 4736) = 1;
        result = nn_os_SignalEvent(v94 + 4144);
      }
      GameData_21c9699 = 1;
      goto LABEL_209;
    case 0x1Cu:
      if (GameData_21c9699 == 1) {
        result = nn_oe_SetCpuBoostMode(0);
        v92 = snd_g_fileIndex;
        if (*(_DWORD*)(snd_g_fileIndex + 4736) != 0) {
          *(_DWORD*)(snd_g_fileIndex + 4736) = 0;
          result = nn_os_ClearEvent(v92 + 4144);
        }
        v93 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
        GameData_21c9699 = 0;
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v93 + 40) + 16LL) + 48LL) = 1;
      LABEL_209:
        v12 = *(unsigned __int8**)(a1 + 16);
      }
    LABEL_212:
      *(_QWORD*)(a1 + 16) = v12 + 64;
      goto LABEL_213;
    case 0x1Du:
      result = GameRoutine_9b86d0(a1, 1);
      goto LABEL_235;
    case 0x1Eu:
      result = GameRoutine_9b86d0(a1, 0);
      goto LABEL_235;
    case 0x1Fu:
      result = GameData_21f8018;
      if (GameData_21f8018 != 0) {
        v81 = *(_DWORD*)(GameData_21f8018 + 160);
        v82 = __OFSUB__(v81, 1);
        v83 = v81 - 1;
        if (v83 < 0 != v82) {
          if ((*(_WORD*)(GameData_21f8018 + 136) & 1) == 0) {
            result = (__int64)ProcInst_657a50(GameData_21f8018, 1);
          }
        }
        else {
          *(_DWORD*)(GameData_21f8018 + 160) = v83;
          if (v83 == 0) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 152) + 8LL))(
                result + 152);
          }
        }
      }
    LABEL_235:
      *(_QWORD*)(a1 + 16) += 64LL;
      v91 = *(_WORD*)(a1 + 136);
      if ((v91 & 0x80) == 0) {
        goto LABEL_221;
      }
      goto LABEL_214;
    default:
      goto LABEL_213;
    }
  }
}

__int64 ProcInst_6588e0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 (*v7)(__int64);
  unsigned __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  v2 = fw_memory_g_heap_manager_ptr;
  do {
    result = *(_QWORD*)(a1 + 56);
    if (result != 0) {
      result = ProcInst_6588e0(result);
    }
    if ((*(_WORD*)(a1 + 136) & 1) != 0) {
      break;
    }
    v4 = GameData_21c68a0;
    v5 = ((GameData_21c68a8 - GameData_21c68a0) << 6) - 1;
    if (GameData_21c68a8 == GameData_21c68a0) {
      v5 = 0;
    }
    v6 = GameData_21c68c0 + GameData_21c68b8;
    if (v5 == GameData_21c68c0 + GameData_21c68b8) {
      result = GameRoutine_65b240(&GameData_21c6898);
      v4 = GameData_21c68a0;
      v6 = GameData_21c68c0 + GameData_21c68b8;
    }
    *(_QWORD*)(*(_QWORD*)(v4 + 8 * (v6 >> 9)) + 8 * (v6 & 0x1FF)) = a1;
    ++GameData_21c68c0;
    if ((*(_WORD*)(a1 + 136) & 4) != 0) {
      v7 = *(__int64 (**)(__int64))(a1 + 64);
      if (v7 != nullptr) {
        result = v7(a1);
      }
      v8 = *(_QWORD*)(a1 + 72);
      v9 = *(_QWORD*)(a1 + 80);
      if ((v9 & 1 | v8) != 0) {
        v10 = (_QWORD*)(a1 + (v9 >> 1));
        if ((v9 & 1) != 0) {
          v8 = *(_QWORD*)(*v10 + v8);
        }
        result = ((__int64 (*)(_QWORD*))v8)(v10);
      }
    }
    v11 = GameData_21c68a8;
    v12 = GameData_21c68c0;
    v13 = ((GameData_21c68a8 - GameData_21c68a0) << 6) - 1;
    if (GameData_21c68a8 == GameData_21c68a0) {
      v13 = 0;
    }
    --GameData_21c68c0;
    if ((unsigned __int64)(v13 - (v12 + GameData_21c68b8) + 1) >= 0x400) {
      v14 = *(_QWORD*)(GameData_21c68a8 - 8);
      if (v14 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v15, v14);
        v11 = GameData_21c68a8;
      }
      GameData_21c68a8 = v11 - 8;
    }
    a1 = *(_QWORD*)(a1 + 40);
  } while (a1 != 0);
  return result;
}

__int64 ProcInst_658a60(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  do {
    v3 = *(_QWORD*)(a1 + 56);
    result = *(_QWORD*)(a1 + 40);
    if (result != 0) {
      result = ProcInst_658a60(result);
    }
    if ((*(_WORD*)(a1 + 136) & 1) != 0) {
      v4 = *(_QWORD*)(a1 + 32);
      if (v4 != 0) {
        v5 = *(_QWORD*)(a1 + 56);
        if (*(_QWORD*)(v4 + 40) == a1) {
          *(_QWORD*)(v4 + 40) = v5;
        }
      }
      else {
        v5 = *(_QWORD*)(a1 + 56);
      }
      v6 = *(_QWORD*)(a1 + 48);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 56) = v5;
      }
      if (v5 != 0) {
        *(_QWORD*)(v5 + 48) = *(_QWORD*)(a1 + 48);
      }
      result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 8LL))(a1);
    }
    a1 = v3;
  } while (v3 != 0);
  return result;
}

__int64 ProcInst_6595e0()
{

#pragma clang fp contract(off)
  __int64* v0;
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 primeEm;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6950,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21c6950) != 0) {
    GameData_21c68f0 = 0;
    GameData_21c68f8 = 0;
    GameData_21c6900 = 0;
    GameData_21c6908 = 0;
    GameData_21c6910 = 0;
    GameData_21c6938 = 0;
    GameData_21c6940 = 0;
    GameData_21c6948 = 0;
    GameData_21c6918 = 0;
    GameData_21c6920 = 0;
    GameData_21c68d0 = 14;
    GameData_21c6928 = 0;
    GameData_21c6930 = 0;
    GameData_21c68d8 = 0;
    GameData_21c68e0 = 16;
    GameData_21c68e8 = 1;
    __cxa_guard_release(&GameData_21c6950);
  }
  game_g_last_proc_id = 0;
  v0 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (GameData_21c6888 != 0) {
    v1 = (_QWORD*)GameData_21c6880;
    if (GameData_21c6880 != 0) {
      do {
        v2 = (_QWORD*)*v1;
        if (*(_QWORD*)(*v0 + 200) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free(*v0 + v3, v1);
        v1 = v2;
      } while (v2 != nullptr);
    }
    GameData_21c6880 = 0;
    if (GameData_21c6878 != 0) {
      v4 = GameData_21c6878 & 7;
      if ((unsigned __int64)GameData_21c6878 >= 8) {
        v6 = GameData_21c6878 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = 0;
        do {
          *(_QWORD*)(game_g_proc_registry + 8 * v5) = 0;
          *(_QWORD*)(game_g_proc_registry + 8 * v5 + 8) = 0;
          *(_QWORD*)(game_g_proc_registry + 8 * v5 + 16) = 0;
          *(_QWORD*)(game_g_proc_registry + 8 * v5 + 24) = 0;
          *(_QWORD*)(game_g_proc_registry + 8 * v5 + 32) = 0;
          *(_QWORD*)(game_g_proc_registry + 8 * v5 + 40) = 0;
          *(_QWORD*)(game_g_proc_registry + 8 * v5 + 48) = 0;
          v7 = game_g_proc_registry + 8 * v5;
          v5 += 8;
          *(_QWORD*)(v7 + 56) = 0;
        } while (v6 != v5);
      }
      else {
        v5 = 0;
      }
      if (v4 != 0) {
        v8 = 8 * v5;
        do {
          --v4;
          *(_QWORD*)(game_g_proc_registry + v8) = 0;
          v8 += 8;
        } while (v4 != 0);
      }
    }
    GameData_21c6888 = 0;
  }
  primeEm = vcvtps_u64_f32(0x1.0000000000000p+8f / *(float*)&GameData_21c6890);
  if (primeEm == 1) {
    primeEm = 2;
  }
  else if ((primeEm & (primeEm - 1)) != 0) {
    primeEm = std___1___next_prime(primeEm);
  }
  v10 = GameData_21c6878;
  if (primeEm > GameData_21c6878) {
    goto LABEL_22;
  }
  if (primeEm < GameData_21c6878) {
    v11 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21c6888 /
                         *(float*)&GameData_21c6890);
    if ((unsigned __int64)GameData_21c6878 < 3 ||
        (GameData_21c6878 & (GameData_21c6878 - 1)) != 0) {
      v11 = std___1___next_prime(v11);
    }
    else {
      v12 = 1LL << (-(char)__clz(v11 - 1) & 63);
      if (v11 >= 2) {
        v11 = v12;
      }
    }
    if (primeEm <= v11) {
      primeEm = v11;
    }
    if (primeEm < v10) {
    LABEL_22:
      GameRoutine_65abc0(&game_g_proc_registry, primeEm);
    }
  }
  v13 = fw_memory_HeapManager_Allocate(*v0, 152, 16, 0);
  v14 = GameData_212c608[0];
  *(_QWORD*)(v13 + 96) = 0;
  *(_QWORD*)(v13 + 104) = 0;
  *(_QWORD*)(v13 + 112) = 0;
  *(_QWORD*)(v13 + 120) = 0;
  *(_QWORD*)(v13 + 128) = 0;
  *(_WORD*)(v13 + 136) = 0;
  *(_QWORD*)(v13 + 16) = 0;
  *(_QWORD*)(v13 + 24) = "NULL";
  *(_QWORD*)(v13 + 138) = 0;
  *(_QWORD*)(v13 + 144) = 0;
  *(_QWORD*)(v13 + 32) = 0;
  *(_QWORD*)(v13 + 40) = 0;
  *(_QWORD*)(v13 + 48) = 0;
  *(_QWORD*)(v13 + 56) = 0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 0;
  *(_QWORD*)(v13 + 80) = 0;
  *(_QWORD*)(v13 + 88) = 0;
  *(_QWORD*)v13 = v14 + 16;
  *(_QWORD*)(v13 + 8) = 0;
  game_ProcInst_Register(v13);
  GameData_21c6960 = v13;
  *(_QWORD*)(v13 + 24) = "HI";
  *(_DWORD*)(v13 + 140) = game_HashString32_alt1((__int64)"HI");
  *(_QWORD*)(v13 + 8) = &GameData_21c68d0;
  *(_QWORD*)(v13 + 16) = &GameData_21c68d0;
  *(_QWORD*)(v13 + 64) = 0;
  *(_QWORD*)(v13 + 72) = 24;
  *(_QWORD*)(v13 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 136LL))(v13) & 1) != 0 &&
      (*(_WORD*)(v13 + 136) & 0x100) == 0) {
    *(_WORD*)(v13 + 136) |= 0x100u;
  }
  v15 = fw_memory_HeapManager_Allocate(*v0, 152, 16, 0);
  *(_QWORD*)(v15 + 96) = 0;
  *(_QWORD*)(v15 + 104) = 0;
  *(_QWORD*)(v15 + 112) = 0;
  *(_QWORD*)(v15 + 120) = 0;
  *(_QWORD*)(v15 + 128) = 0;
  *(_WORD*)(v15 + 136) = 0;
  *(_QWORD*)v15 = v14 + 16;
  *(_QWORD*)(v15 + 8) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_QWORD*)(v15 + 24) = "NULL";
  *(_QWORD*)(v15 + 138) = 0;
  *(_QWORD*)(v15 + 144) = 0;
  *(_QWORD*)(v15 + 32) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_QWORD*)(v15 + 80) = 0;
  *(_QWORD*)(v15 + 88) = 0;
  game_ProcInst_Register(v15);
  GameData_21c6968 = v15;
  *(_QWORD*)(v15 + 24) = "DE";
  *(_DWORD*)(v15 + 140) = game_HashString32_alt1((__int64)"DE");
  *(_QWORD*)(v15 + 8) = &GameData_21c68d0;
  *(_QWORD*)(v15 + 16) = &GameData_21c68d0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 24;
  *(_QWORD*)(v15 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v15 + 32LL))(v15);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v15 + 136LL))(v15) & 1) != 0 &&
      (*(_WORD*)(v15 + 136) & 0x100) == 0) {
    *(_WORD*)(v15 + 136) |= 0x100u;
  }
  v16 = fw_memory_HeapManager_Allocate(*v0, 152, 16, 0);
  *(_QWORD*)(v16 + 96) = 0;
  *(_QWORD*)(v16 + 104) = 0;
  *(_QWORD*)(v16 + 112) = 0;
  *(_QWORD*)(v16 + 120) = 0;
  *(_QWORD*)(v16 + 128) = 0;
  *(_WORD*)(v16 + 136) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_QWORD*)(v16 + 24) = "NULL";
  *(_QWORD*)(v16 + 138) = 0;
  *(_QWORD*)(v16 + 144) = 0;
  *(_QWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_QWORD*)(v16 + 48) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_QWORD*)v16 = v14 + 16;
  *(_QWORD*)(v16 + 8) = 0;
  *(_QWORD*)(v16 + 80) = 0;
  *(_QWORD*)(v16 + 88) = 0;
  game_ProcInst_Register(v16);
  GameData_21c6970 = v16;
  *(_QWORD*)(v16 + 24) = "LO";
  *(_DWORD*)(v16 + 140) = game_HashString32_alt1((__int64)"LO");
  *(_QWORD*)(v16 + 8) = &GameData_21c68d0;
  *(_QWORD*)(v16 + 16) = &GameData_21c68d0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 24;
  *(_QWORD*)(v16 + 80) = 1;
  (*(void (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 136LL))(v16);
  if ((result & 1) != 0 && (*(_WORD*)(v16 + 136) & 0x100) == 0) {
    *(_WORD*)(v16 + 136) |= 0x100u;
  }
  return result;
}

__int64 ProcInst_659c60()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  bool v6;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(_QWORD*)(GameData_21c6960 + 40);
  if (v0 != 0) {
    ProcInst_657a50(*(_QWORD*)(GameData_21c6960 + 40), 0),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    result = ProcInst_658a60(v0);
  }
  v2 = *(_QWORD*)(GameData_21c6968 + 40);
  if (v2 != 0) {
    ProcInst_657a50(*(_QWORD*)(GameData_21c6968 + 40), 0),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    result = ProcInst_658a60(v2);
  }
  v3 = *(_QWORD*)(GameData_21c6970 + 40);
  if (v3 != 0) {
    ProcInst_657a50(*(_QWORD*)(GameData_21c6970 + 40), 0),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    result = ProcInst_658a60(v3);
  }
  v4 = (__int64*)GameData_212c638;
  if (*(_QWORD*)GameData_212c638 != 0 && GameData_21c68c8 >= 1) {
    do {
      result = GameRoutine_a84710(*v4);
      v6 = __OFSUB__(GameData_21c68c8--, 1);
    } while (!((GameData_21c68c8 < 0) ^ v6 | (GameData_21c68c8 == 0)));
  }
  return result;
}

__int64 ProcInst_Destructor()
{
  __int64 result;
  __int64 v1;

  if ((GameData_21c9699 & 1) == 0) {
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                              GameData_212c638 +
                                                          32LL) -
                                               8LL) +
                                    40LL) +
                         16LL) +
              48LL) = 0;
    result = nn_oe_SetCpuBoostMode(1);
    v1 = snd_g_fileIndex;
    if (*(_DWORD*)(snd_g_fileIndex + 4736) != 1 &&
        (*(_BYTE*)(snd_g_fileIndex + 4742) & 1) == 0) {
      *(_DWORD*)(snd_g_fileIndex + 4736) = 1;
      result = nn_os_SignalEvent(v1 + 4144);
    }
    GameData_21c9699 = 1;
  }
  return result;
}

__int64 ProcInst_DeletingDestructor()
{
  __int64 result;
  __int64 v1;

  if (GameData_21c9699 == 1) {
    result = nn_oe_SetCpuBoostMode(0);
    v1 = snd_g_fileIndex;
    if (*(_DWORD*)(snd_g_fileIndex + 4736) != 0) {
      *(_DWORD*)(snd_g_fileIndex + 4736) = 0;
      result = nn_os_ClearEvent(v1 + 4144);
    }
    GameData_21c9699 = 0;
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                              GameData_212c638 +
                                                          32LL) -
                                               8LL) +
                                    40LL) +
                         16LL) +
              48LL) = 1;
  }
  return result;
}

#pragma GCC visibility pop
