#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 Slot_135980(_QWORD, _QWORD, long double);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, long double);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern int GameData_21ec578;
struct PseudoSret snd_findSlot_100a50(_QWORD);
__int64 ProcKeyWait_Unknown5();
_BYTE* ProcInst_657a50(__int64, char);
_QWORD* ProcInst_657b80(_QWORD* result, int);
__int64* game_8224a0(unsigned __int8);
__int64 GameRoutine_810e50();
__int64 GameRoutine_820990();
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString32(__int64 result);
__int64 game_ProcInst_Register(__int64);
__int64 game_sound_PlayTalkSendSe();
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN GameData_216f3a8;
extern __int64 (*game_talk_ProcHideUI_vtable[])();
extern __int64* GameData_212d460[6];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_2131dc8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
void ProcTalkLogMenu_17cf3a0(__int64, char);
void Seq_11351f0();
void ProcKeyWait_Unknown2(__int64 a1);
__attribute__((swiftcall)) void
snd_findSlot_100a50_alt1(PSEUDO_X8, int*) __asm__("snd_findSlot_100a50");
__int64 Slot_135980_alt1(_QWORD*, __int64) __asm__("Slot_135980");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

__int64 ProcKeyWait_Unknown5()
{
  __int64 result;
  __int64 v1;
  _QWORD v2[25];
  __int64 v3[2];

  snd_findSlot_100a50_alt1((void*)(v3), &GameData_21ec578);
  result = snd_fnd_WeakHandle_isValid_alt1(v3);
  if ((result & 1) != 0) {
    v1 = snd_fnd_WeakHandle_get_alt1((__int64)v3);
    snd_Fade_Fade_10c830_alt1((__int64)v2, 0x0.0p+0f);
    Slot_135980_alt1((_QWORD*)(v1 - 5592), (__int64)v2);
    return snd_Fade_Destroy_Fade_alt1(v2);
  }
  return result;
}

void ProcKeyWait_Unknown2(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  int v4;
  float v5;
  float v6;
  bool v7;
  float v8;
  float v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  char v19;
  __int64 v20;
  void* v21;
  int v22;
  unsigned __int8* v23;
  unsigned int v24;

  if (game_ProcGameSkipView_instance_ != 0) {
    v2 = *(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152);
    if ((unsigned int)(v2 - 1) <= 2) {
      v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v4 = (v3 & 8) != 0 ? 2 : 3;
      if ((v4 & v3) == 0) {
        if (v2 != 3) {
          return;
        }
      LABEL_47:
        if ((*(_WORD*)(a1 + 136) & 1) != 0) {
          return;
        }
      LABEL_73:
        ProcInst_657a50(a1, 1);
        return;
      }
    }
  }
  v5 = 0x1.e000000000000p+5f / (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
  v6 = v5 * 0x1.119ce00000000p-6f;
  v7 = v5 <= 0x0.0p+0f;
  v8 = 0x1.0b33320000000p+4f;
  v9 = v6 * 0x1.f400000000000p+9f;
  if (!v7) {
    v8 = v9;
  }
  *(float*)(a1 + 156) = *(float*)(a1 + 156) + v8;
  v10 = game_8224a0(0x13u);
  if (game_GameModeData_instance_ != 0) {
    v11 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v10);
    if (v11 != 0 && *(_DWORD*)(v11 + 32) == 1 &&
        (GameRoutine_810e50() & 1) == 0 &&
        *(float*)(a1 + 156) >= *(float*)(a1 + 152)) {
      goto LABEL_47;
    }
  }
  if (*GameData_212d460[0] == 0) {
  LABEL_67:
    Seq_11351f0();
    return;
  }
  v12 = *(_QWORD*)game_g_game_setting_ptr;
  if (*(_DWORD*)(*GameData_212d460[0] + 200) != 2) {
    v13 = *(_DWORD*)(v12 + 952);
    if ((v13 & 0x1000) != 0) {
      if (*(_QWORD*)GameData_2131dc8 != 0 &&
          *(_BYTE*)(*(_QWORD*)GameData_2131dc8 + 24LL) != 1) {
        return;
      }
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1712, 16, 0);
      ProcTalkLogMenu_17cf3a0(v14, 0);
      v20 = *(_QWORD*)(a1 + 40);
      if (v20 != 0) {
        *(_QWORD*)(v20 + 48) = v14;
        *(_QWORD*)(v14 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v14;
      *(_QWORD*)(v14 + 24) = "ProcTalkLogMenu";
      *(_QWORD*)(v14 + 32) = a1;
      *(_DWORD*)(v14 + 140) = game_HashString32((__int64)"ProcTalkLogMenu");
      *(_QWORD*)(v14 + 64) = 0;
      *(_QWORD*)(v14 + 72) = 24;
      *(_QWORD*)(v14 + 80) = 1;
      v21 = GameData_212c730;
      *(_QWORD*)(v14 + 8) = GameData_212c730;
      *(_QWORD*)(v14 + 16) = v21;
      (*(void (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v14 + 136LL))(v14) & 1) != 0 &&
          (*(_WORD*)(v14 + 136) & 0x100) == 0) {
        *(_WORD*)(v14 + 136) |= 0x100u;
      }
      v18 = *(_BYTE**)(v14 + 32);
      v19 = v18[138];
      if (v19 == 0) {
      LABEL_44:
        (*(void (**)(_BYTE*))(*(_QWORD*)v18 + 64LL))(v18);
        v19 = v18[138];
      }
    }
    else {
      if ((v13 & 0x40) == 0) {
        goto LABEL_16;
      }
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 152, 16, 0);
      v15 = GameData_212c608[0];
      *(_QWORD*)(v14 + 88) = 0;
      *(_QWORD*)(v14 + 96) = 0;
      *(_QWORD*)(v14 + 104) = 0;
      *(_QWORD*)(v14 + 112) = 0;
      *(_QWORD*)(v14 + 120) = 0;
      *(_QWORD*)(v14 + 128) = 0;
      *(_WORD*)(v14 + 136) = 0;
      *(_QWORD*)(v14 + 16) = 0;
      *(_QWORD*)(v14 + 24) = "NULL";
      *(_QWORD*)(v14 + 32) = 0;
      v16 = v14 + 32;
      *(_QWORD*)(v14 + 138) = 0;
      *(_QWORD*)(v14 + 144) = 0;
      *(_QWORD*)(v14 + 40) = 0;
      *(_QWORD*)(v14 + 48) = 0;
      *(_QWORD*)(v14 + 56) = 0;
      *(_QWORD*)(v14 + 64) = 0;
      *(_QWORD*)(v14 + 72) = 0;
      *(_QWORD*)(v14 + 80) = 0;
      *(_QWORD*)v14 = v15 + 16;
      *(_QWORD*)(v14 + 8) = 0;
      game_ProcInst_Register(v14);
      *(_QWORD*)v14 = game_talk_ProcHideUI_vtable;
      v17 = *(_QWORD*)(a1 + 40);
      if (v17 != 0) {
        *(_QWORD*)(v17 + 48) = v14;
        *(_QWORD*)(v14 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v14;
      *(_QWORD*)(v14 + 24) = "talk::ProcHideUI";
      *(_QWORD*)(v14 + 32) = a1;
      *(_DWORD*)(v14 + 140) = game_HashString32((__int64)"talk::ProcHideUI");
      *(_QWORD*)(v14 + 64) = 0;
      *(_QWORD*)(v14 + 72) = 24;
      *(_QWORD*)(v14 + 80) = 1;
      *(_QWORD*)(v14 + 8) = &GameData_216f3a8;
      *(_QWORD*)(v14 + 16) = &GameData_216f3a8;
      (*(void (**)(__int64))(*(_QWORD*)v14 + 32LL))(v14);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v14 + 136LL))(v14) & 1) != 0 &&
          (*(_WORD*)(v14 + 136) & 0x100) == 0) {
        *(_WORD*)(v14 + 136) |= 0x100u;
      }
      v18 = *(_BYTE**)v16;
      v19 = *(_BYTE*)(*(_QWORD*)v16 + 138LL);
      if (v19 == 0) {
        goto LABEL_44;
      }
    }
    v18[138] = v19 + 1;
    *(_WORD*)(v14 + 136) |= 2u;
    return;
  }
LABEL_16:
  if (*(_BYTE*)(v12 + 807) == 1 &&
      ((*(_BYTE*)(v12 + 804) & 1) != 0 ||
       *(_BYTE*)(v12 + 940) == 1 && (*(_BYTE*)(v12 + 805) & 1) != 0 &&
           (*(_BYTE*)(v12 + 806) & 1) != 0)) {
    goto LABEL_51;
  }
  if (*(_BYTE*)(v12 + 903) == 1 &&
      ((*(_BYTE*)(v12 + 900) & 1) != 0 || *(_BYTE*)(v12 + 940) == 1 &&
                                              (*(_BYTE*)(v12 + 901) & 1) != 0 &&
                                              *(_BYTE*)(v12 + 902) == 1)) {
    if (*(_BYTE*)(v12 + 807) != 0) {
    LABEL_51:
      if ((*(_BYTE*)(v12 + 804) & 1) != 0 ||
          *(_BYTE*)(v12 + 940) == 1 && *(_BYTE*)(v12 + 805) == 1 &&
              (*(_BYTE*)(v12 + 806) & 1) != 0) {
        if ((*(_BYTE*)(v12 + 764) & 0x10) == 0) {
          goto LABEL_63;
        }
      LABEL_55:
        ProcInst_657b80((_QWORD*)a1, 0);
        return;
      }
    }
    if (*(_BYTE*)(v12 + 903) == 1 &&
        ((*(_BYTE*)(v12 + 900) & 1) != 0 || *(_BYTE*)(v12 + 940) == 1 &&
                                                *(_BYTE*)(v12 + 901) == 1 &&
                                                *(_BYTE*)(v12 + 902) == 1) &&
        (*(_BYTE*)(v12 + 860) & 0x10) != 0) {
      goto LABEL_55;
    }
  }
LABEL_63:
  if ((*(_BYTE*)(v12 + 944) & 8) != 0) {
    v23 = *(unsigned __int8**)(a1 + 16);
    if (v23 != nullptr) {
      v24 = *v23;
      if (v24 <= 0x10 && ((1 << v24) & 0x1CE00) != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
  }
  else {
    v22 = *(_DWORD*)(v12 + 952);
    if ((v22 & 1) == 0 &&
        ((v22 & 2) == 0 || (unsigned int)GameRoutine_820990() == 1)) {
      goto LABEL_67;
    }
    game_sound_PlayTalkSendSe();
    if ((*(_WORD*)(a1 + 136) & 1) == 0) {
      goto LABEL_73;
    }
  }
}

#pragma GCC visibility pop
