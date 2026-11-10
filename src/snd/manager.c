#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Actor_101c40(_QWORD, float);
__int64 Crc32List_1207f0(_QWORD, _QWORD);
__int64 Crc32List_17be70(_QWORD, _QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_a1efd0(__int64);
__int64 Listener_112890(_QWORD, float);
__int64 Obj_1017b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, long double);
__int64 Obj_101910(_QWORD, _QWORD, _QWORD, _QWORD, long double);
__int64 Slot_1329a0(_QWORD, float);
__int64 Slot_132a00(_QWORD);
__int64 Slot_132b80(_QWORD);
__int64 Slot_132e00(_QWORD, float);
__int64 Slot_132ee0(_QWORD, float);
__int64 Slot_132fc0(_QWORD, float);
__int64 Slot_133160(_QWORD);
__int64 Slot_133220(_QWORD);
__int64 Slot_135520(_QWORD, _QWORD);
__int64 Slot_1357a0(_QWORD, _QWORD, _QWORD);
__int64 Slot_135b40(_QWORD, _QWORD, _QWORD);
__int64 Slot_136c00(_QWORD, _QWORD);
__int64 Slot_136e40(_QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Manager__destroyFx_alt1(_QWORD,
                                    _QWORD) __asm__("snd_Manager__destroyFx");
__int64 snd_fnd_WeakHandle_get(_QWORD, float);
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__n128 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int16 GameData_2198f28;
extern __int16* GameData_2134648[7];
extern __int64 (*GameData_1f56940[])();
extern __int64 (*GameData_1f569c0[])();
extern __int64 (*GameData_1f56a40[])();
extern __int64 (*GameData_1f56ac0[])();
extern __int64 (*GameData_1f56bc0[])();
extern __int64 (*GameData_1f56c50[])();
extern __int64 (*GameData_1f56d50[])();
extern __int64 (*GameData_1f56dd0[])();
extern __int64 (*GameData_1f56e50[])();
extern __int64 (*GameData_1f56ed0[])();
extern __int64 (*GameData_1f56fd0[])();
extern __int64 (*GameData_1f57050[])();
extern __int64 (*GameData_1f570e0[])();
extern __int64 snd_s_target;
extern __int64* snd_g_memory_ptr[2];
extern __int64* snd_s_target_ptr;
float snd_Fade_getTime(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD, _QWORD, _QWORD) __asm__("GameRoutine_60a310");
__int64 Manager_116630();
__int64 Manager_1187c0(__int64 a1, __int64 a2, char a3);
__int64 Manager_118d00(__int64 a1, unsigned int a2, int a3);
__n128 snd_Manager_stopImpl(__int64 a1, __int64 a2, __int64 a3);
__n128 snd_Manager_stopAllImpl(__int64 a1, __int64 a2);
__n128 snd_Manager_stopSoundKindImpl(__int64 a1, int a2, __int64 a3);
__int64 snd_Manager_countActiveVoice(__int64 a1, __int64 a2);
__int64 Manager_11e980(__int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__int64 Manager_11eb50(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                       unsigned int a5);
__n128 snd_Manager_setVolumeSlot(__int64 a1, __int64 a2, float a3);
__n128 snd_Manager_resetVolumeSlot(__int64 a1, __int64 a2);
__n128 snd_Manager_setLPFSlot(__int64 a1, __int64 a2, float a3);
__n128 snd_Manager_setSendAuxASlot(__int64 a1, __int64 a2, float a3);
void snd_Manager__destroyFx(__int64 a1, __int64 a2);
void snd_Manager__isActive(__int64 a1, __int64* a2);
__int64 snd_Manager_mainVoice_lambda15_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Manager_updateVoice_lambda13_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Manager_updateVoice_lambda14_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Manager_updateVoice_lambda15_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Manager_shieldingVoice_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Manager_stopImpl_lambda0_Invoke(__int64 a1, __int64* a2, float a3);
__int64 snd_Manager_stopSoundKindImpl_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Manager__isActive_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Manager_countActiveVoice_lambda0_Invoke(__int64 a1, _QWORD* a2);
bool snd_Manager_getVoiceNoActorCheck_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Manager_setVolumeSlot_lambda0_Invoke(__int64 a1, __int64* a2);
__n128 snd_Manager_resetVolumeSlot_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 snd_Manager_setLPFSlot_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 snd_Manager_setSendAuxASlot_lambda0_Invoke(__int64 a1, __int64* a2);
bool snd_Manager__searchSlot_lambda0_Invoke(__int64 a1, __int64 a2);
bool snd_Manager__destroyFx_lambda1_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Manager__destroyFx_lambda2_Invoke(__int64 a1,
                                              void (****a2)(_QWORD));
__int64 Manager_116630() { return *(unsigned __int8*)(snd_s_target + 17); }

__int64 Manager_1187c0(__int64 a1, __int64 a2, char a3)
{
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int16 v20;
  _QWORD v21[4];
  _QWORD* v22;
  __int64 v23;

  if ((a3 & 1) == 0) {
    return Crc32List_1207f0(*(_QWORD*)(a2 + 32), a2);
  }
  nn_os_LockMutex(&GameData_2198f28);
  v7 = v21;
  v21[0] = GameData_1f56ac0;
  v21[1] = a2;
  v8 = *(__int64**)(a1 + 40);
  v22 = v21;
  v9 = *v8;
  if (v9 == 0) {
    goto LABEL_11;
  }
  v10 = *(_QWORD*)(v9 + 5616);
  v7 = v21;
  v23 = v9;
  while (1) {
    (*(void (**)(_QWORD*, __int64*))(*v7 + 48LL))(v7, &v23);
    v7 = v22;
    if (v10 == 0) {
      break;
    }
    v23 = v10;
    v10 = *(_QWORD*)(v10 + 5616);
    if (v22 == nullptr) {
      GameRoutine_60a310(0, v6);
    }
  }
  if (v22 == v21) {
  LABEL_11:
    v11 = 32;
  }
  else {
    if (v22 == nullptr) {
      goto LABEL_13;
    }
    v11 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v7 + v11))(v7, v6);
LABEL_13:
  nn_os_UnlockMutex(&GameData_2198f28);
  nn_os_LockMutex(&GameData_2198f28);
  v12 = *(_QWORD*)(a1 + 72);
  v13 = (__int64*)(v12 + a2);
  v15 = *(_QWORD*)(v12 + a2);
  v14 = *(_QWORD*)(v12 + a2 + 8);
  if (v15 == 0) {
    *(_QWORD*)(a1 + 56) = v14;
    v16 = *v13;
    v17 = v13[1];
    if (v17 != 0) {
      goto LABEL_15;
    }
  LABEL_17:
    *(_QWORD*)(a1 + 64) = v16;
    goto LABEL_18;
  }
  *(_QWORD*)(v12 + v15 + 8) = v14;
  v12 = *(_QWORD*)(a1 + 72);
  v13 = (__int64*)(v12 + a2);
  v16 = *(_QWORD*)(v12 + a2);
  v17 = *(_QWORD*)(v12 + a2 + 8);
  if (v17 == 0) {
    goto LABEL_17;
  }
LABEL_15:
  *(_QWORD*)(v12 + v17) = v16;
  v13 = (__int64*)(*(_QWORD*)(a1 + 72) + a2);
LABEL_18:
  *v13 = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 72) + a2 + 8) = 0;
  nn_os_UnlockMutex(GameData_2134648[0]);
  (**(void (***)(__int64))a2)(a2);
  nn_os_LockMutex(a1 + 2400);
  v18 = *(_QWORD*)(a1 + 2384);
  v19 = (a2 - *(_QWORD*)(a1 + 2376)) / 0x1688uLL;
  v20 = *(_WORD*)(a1 + 2392) - 1;
  *(_WORD*)(a1 + 2392) = v20;
  *(_WORD*)(v18 + 2LL * v20) = v19;
  return nn_os_UnlockMutex(a1 + 2400);
}

__int64 Manager_118d00(__int64 a1, unsigned int a2, int a3)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 2192);
  if (result != 0) {
    result = Crc32List_17be70(result, a2);
  }
  if (a2 <= 0xA) {
    return snd_Manager__destroyFx_alt1(result,
                                       a1 + 480LL * a3 + 176 + 40 * a2 + 40);
  }
  return result;
}

__n128 snd_Manager_stopImpl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;

  nn_os_LockMutex(GameData_2134648[0]);
  v8 = v14;
  v14[2] = a3;
  v14[0] = GameData_1f56940;
  v14[1] = a2;
  v9 = *(__int64**)(a1 + 40);
  v15 = v14;
  v10 = *v9;
  if (v10 != 0) {
    v11 = *(_QWORD*)(v10 + 5616);
    v8 = v14;
    v16 = v10;
    while (1) {
      (*(void (**)(_QWORD*, __int64*))(*v8 + 48LL))(v8, &v16);
      v8 = v15;
      if (v11 == 0) {
        break;
      }
      v16 = v11;
      v11 = *(_QWORD*)(v11 + 5616);
      if (v15 == nullptr) {
        GameRoutine_60a310_alt1(0, v6, v7);
      }
    }
    if (v15 != v14) {
      if (v15 != nullptr) {
        v12 = 40;
      LABEL_10:
        (*(void (**)(_QWORD*, __int64, __int64))(*v8 + v12))(v8, v6, v7);
      }
      return nn_os_UnlockMutex_alt1(&GameData_2198f28);
    }
  }
  v12 = 32;
  goto LABEL_10;
}

__n128 snd_Manager_stopAllImpl(__int64 a1, __int64 a2)
{
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[4];
  _QWORD* v13;
  __int64 v14;

  nn_os_LockMutex(GameData_2134648[0]);
  v5 = v12;
  v12[0] = GameData_1f569c0;
  v12[1] = a2;
  v6 = *(__int64**)(a1 + 40);
  v13 = v12;
  v7 = *v6;
  if (v7 != 0) {
    v8 = *(_QWORD*)(v7 + 5616);
    v5 = v12;
    v14 = v7;
    while (1) {
      (*(void (**)(_QWORD*, __int64*))(*v5 + 48LL))(v5, &v14);
      v5 = v13;
      if (v8 == 0) {
        break;
      }
      v14 = v8;
      v8 = *(_QWORD*)(v8 + 5616);
      if (v13 == nullptr) {
        GameRoutine_60a310_alt1(0, v4, v9);
      }
    }
    if (v13 != v12) {
      if (v13 != nullptr) {
        v10 = 40;
      LABEL_10:
        (*(void (**)(_QWORD*, __int64))(*v5 + v10))(v5, v4);
      }
      return nn_os_UnlockMutex_alt1(&GameData_2198f28);
    }
  }
  v10 = 32;
  goto LABEL_10;
}

__n128 snd_Manager_stopSoundKindImpl(__int64 a1, int a2, __int64 a3)
{
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  int v15;
  __int64 v16;

  v15 = a2;
  nn_os_LockMutex(GameData_2134648[0]);
  v7 = v13;
  v13[2] = a3;
  v13[0] = GameData_1f56a40;
  v13[1] = &v15;
  v8 = *(__int64**)(a1 + 40);
  v14 = v13;
  v9 = *v8;
  if (v9 != 0) {
    v10 = *(_QWORD*)(v9 + 5616);
    v7 = v13;
    v16 = v9;
    while (1) {
      (*(void (**)(_QWORD*, __int64*))(*v7 + 48LL))(v7, &v16);
      v7 = v14;
      if (v10 == 0) {
        break;
      }
      v16 = v10;
      v10 = *(_QWORD*)(v10 + 5616);
      if (v14 == nullptr) {
        GameRoutine_60a310_alt1(0, v5, v6);
      }
    }
    if (v14 != v13) {
      if (v14 != nullptr) {
        v11 = 40;
      LABEL_10:
        (*(void (**)(_QWORD*, __int64, __int64))(*v7 + v11))(v7, v5, v6);
      }
      return nn_os_UnlockMutex_alt1(&GameData_2198f28);
    }
  }
  v11 = 32;
  goto LABEL_10;
}

__int64 snd_Manager_countActiveVoice(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  _QWORD v12[4];
  _QWORD* v13;
  unsigned int v14;
  __int64 v15;

  nn_os_LockMutex(GameData_2134648[0]);
  v6 = v12;
  v12[2] = a2;
  v14 = 0;
  v12[0] = GameData_1f56c50;
  v12[1] = &v14;
  v7 = *(__int64**)(a1 + 40);
  v13 = v12;
  v8 = *v7;
  if (*v7 != 0) {
    do {
      v15 = v8;
      v8 = *(_QWORD*)(v8 + 5616);
      if (v13 == nullptr) {
        GameRoutine_60a310_alt1(0, v4, v5);
      }
      (*(void (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v15);
    } while (v8 != 0);
    v6 = v13;
    if (v13 != v12) {
      if (v13 != nullptr) {
        v9 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*, __int64, __int64))(*v6 + v9))(v6, v4, v5);
      }
      v10 = v14;
      nn_os_UnlockMutex_alt1(GameData_2134648[0]);
      return v10;
    }
  }
  v9 = 32;
  goto LABEL_8;
}

__int64 Manager_11e980(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  long double v14;
  __int64 v16;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v8 = *(unsigned __int16*)(a1 + 32);
  v9 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex_alt1(a1 + 40);
  if (v8 >= v9) {
    v16 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v16);
    __udf(0);
  }
  v10 = *(unsigned __int16*)(a1 + 32);
  v11 = *(_QWORD*)(a1 + 24);
  v12 = *(unsigned __int16*)(v11 + 2 * v10);
  *(_WORD*)(a1 + 32) = v10 + 1;
  *(_WORD*)(v11 + 2 * v10) = -1;
  v13 = *(_QWORD*)(a1 + 16) + 5768LL * v12;
  *(__n128*)&v14 = nn_os_UnlockMutex_alt1(a1 + 40);
  Obj_101910(v13, a2, a3, a4, v14);
  return v13;
}

__int64 Manager_11eb50(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                       unsigned int a5)
{
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  long double v16;
  __int64 v18;

  nn_os_LockMutex(a1 + 40);
  nn_os_LockMutex(a1 + 40);
  v10 = *(unsigned __int16*)(a1 + 32);
  v11 = *(unsigned __int16*)(a1 + 34);
  nn_os_UnlockMutex_alt1(a1 + 40);
  if (v10 >= v11) {
    v18 = GameRoutine_a1efd0(a1 + 40);
    nn_diag_detail_AbortImpl_1a0a590(v18);
    __udf(0);
  }
  v12 = *(unsigned __int16*)(a1 + 32);
  v13 = *(_QWORD*)(a1 + 24);
  v14 = *(unsigned __int16*)(v13 + 2 * v12);
  *(_WORD*)(a1 + 32) = v12 + 1;
  *(_WORD*)(v13 + 2 * v12) = -1;
  v15 = *(_QWORD*)(a1 + 16) + 5768LL * v14;
  *(__n128*)&v16 = nn_os_UnlockMutex_alt1(a1 + 40);
  Obj_1017b0(v15, a2, a3, a4, a5, v16);
  return v15;
}

__n128 snd_Manager_setVolumeSlot(__int64 a1, __int64 a2, float a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[4];
  _QWORD* v13;
  float v14;
  __int64 v15;

  v14 = a3;
  nn_os_LockMutex(GameData_2134648[0]);
  v8 = v12;
  v12[0] = GameData_1f56d50;
  v12[1] = a1;
  v13 = v12;
  v12[2] = &v14;
  v12[3] = a2;
  v9 = **(_QWORD**)(a1 + 40);
  if (v9 != 0) {
    do {
      v15 = v9;
      v9 = *(_QWORD*)(v9 + 5616);
      if (v13 == nullptr) {
        GameRoutine_60a310_alt1(0, v5, v6);
      }
      (*(void (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v15);
    } while (v9 != 0);
    v8 = v13;
    if (v13 != v12) {
      if (v13 != nullptr) {
        v10 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*, __int64, __int64, __int64))(*v8 + v10))(v8, v5,
                                                                      v6, v7);
      }
      return nn_os_UnlockMutex_alt1(&GameData_2198f28);
    }
  }
  v10 = 32;
  goto LABEL_8;
}

__n128 snd_Manager_resetVolumeSlot(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;
  __int64 v13;

  nn_os_LockMutex(GameData_2134648[0]);
  v6 = v11;
  v11[2] = a2;
  v11[0] = GameData_1f56dd0;
  v11[1] = a1;
  v7 = *(__int64**)(a1 + 40);
  v12 = v11;
  v8 = *v7;
  if (*v7 != 0) {
    do {
      v13 = v8;
      v8 = *(_QWORD*)(v8 + 5616);
      if (v12 == nullptr) {
        GameRoutine_60a310_alt1(0, v4, v5);
      }
      (*(void (**)(_QWORD*, __int64*))(*v12 + 48LL))(v12, &v13);
    } while (v8 != 0);
    v6 = v12;
    if (v12 != v11) {
      if (v12 != nullptr) {
        v9 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*, __int64, __int64))(*v6 + v9))(v6, v4, v5);
      }
      return nn_os_UnlockMutex_alt1(&GameData_2198f28);
    }
  }
  v9 = 32;
  goto LABEL_8;
}

__n128 snd_Manager_setLPFSlot(__int64 a1, __int64 a2, float a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[4];
  _QWORD* v13;
  float v14;
  __int64 v15;

  v14 = a3;
  nn_os_LockMutex(GameData_2134648[0]);
  v8 = v12;
  v12[0] = GameData_1f56e50;
  v12[1] = a1;
  v13 = v12;
  v12[2] = &v14;
  v12[3] = a2;
  v9 = **(_QWORD**)(a1 + 40);
  if (v9 != 0) {
    do {
      v15 = v9;
      v9 = *(_QWORD*)(v9 + 5616);
      if (v13 == nullptr) {
        GameRoutine_60a310_alt1(0, v5, v6);
      }
      (*(void (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v15);
    } while (v9 != 0);
    v8 = v13;
    if (v13 != v12) {
      if (v13 != nullptr) {
        v10 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*, __int64, __int64, __int64))(*v8 + v10))(v8, v5,
                                                                      v6, v7);
      }
      return nn_os_UnlockMutex_alt1(&GameData_2198f28);
    }
  }
  v10 = 32;
  goto LABEL_8;
}

__n128 snd_Manager_setSendAuxASlot(__int64 a1, __int64 a2, float a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[4];
  _QWORD* v13;
  float v14;
  __int64 v15;

  v14 = a3;
  nn_os_LockMutex(GameData_2134648[0]);
  v8 = v12;
  v12[0] = GameData_1f56ed0;
  v12[1] = a1;
  v13 = v12;
  v12[2] = &v14;
  v12[3] = a2;
  v9 = **(_QWORD**)(a1 + 40);
  if (v9 != 0) {
    do {
      v15 = v9;
      v9 = *(_QWORD*)(v9 + 5616);
      if (v13 == nullptr) {
        GameRoutine_60a310_alt1(0, v5, v6);
      }
      (*(void (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v15);
    } while (v9 != 0);
    v8 = v13;
    if (v13 != v12) {
      if (v13 != nullptr) {
        v10 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*, __int64, __int64, __int64))(*v8 + v10))(v8, v5,
                                                                      v6, v7);
      }
      return nn_os_UnlockMutex_alt1(&GameData_2198f28);
    }
  }
  v10 = 32;
  goto LABEL_8;
}

void snd_Manager__destroyFx(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  _QWORD* i;
  bool v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  long double v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[4];
  _QWORD* v29;
  _QWORD v30[4];
  _QWORD* v31;
  __int64 v32;
  char v33;
  _QWORD v34[4];
  _QWORD* v35;
  _QWORD v36[2];

  v2 = **(_QWORD**)(a2 + 24);
  if (v2 == 0) {
    return;
  }
  v3 = *(_QWORD*)(v2 + 5616);
  v4 = v34;
  v36[0] = **(_QWORD**)(a2 + 24);
  v34[0] = GameData_1f56fd0;
  v35 = v34;
  while (1) {
    (*(void (**)(_QWORD*, _QWORD*))(*v4 + 48LL))(v4, v36);
    v4 = v35;
    if (v3 == 0) {
      break;
    }
    v36[0] = v3;
    v3 = *(_QWORD*)(v3 + 5616);
    if (v35 == nullptr) {
    LABEL_36:
      GameRoutine_60a310_alt1(v4, v6, v7);
    }
  }
  if (v35 == v34) {
    v8 = 32;
    goto LABEL_10;
  }
  if (v35 != nullptr) {
    v8 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v35 + v8))((__int64)v35);
  }
  v9 = 200;
  v10 = snd_s_target_ptr;
  while (1) {
    v11 = *(__int64**)(a2 + 24);
    v32 = 0;
    v30[0] = GameData_1f57050;
    v30[1] = &v33;
    v4 = v30;
    v30[2] = &v32;
    v31 = v30;
    v12 = *v11;
    v33 = 0;
    do {
      if (v12 == 0) {
        break;
      }
      v13 = *(_QWORD*)(v12 + 5616);
      v36[0] = v12;
      if (v4 == nullptr) {
        goto LABEL_36;
      }
      v14 = (*(__int64 (**)(_QWORD*, _QWORD*))(*v4 + 48LL))(v4, v36);
      v4 = v31;
      v12 = v13;
    } while ((v14 & 1) == 0);
    if (v4 == v30) {
      v15 = 32;
      goto LABEL_20;
    }
    if (v4 != nullptr) {
      v15 = 40;
    LABEL_20:
      (*(void (**)(__int64))(*v4 + v15))((__int64)v4);
    }
    if (v33 != 1) {
      break;
    }
    (*(void (**)(__int64, __int64))(*(_QWORD*)*v10 + 56LL))(*v10, 1);
    if (v9 < 2) {
      break;
    }
    --v9;
  }
  nn_os_LockMutex(&GameData_2198f28);
  for (i = **(_QWORD***)(a2 + 24); i != nullptr; i = (_QWORD*)i[702]) {
    v17 = ((*(__int64 (**)(_QWORD*))(*i + 88LL))(i) & 1) == 0;
    v18 = (_QWORD*)*v10;
    if (v17) {
      v19 = 112;
    }
    else {
      v19 = 120;
    }
    if (v17) {
      v20 = 1048;
    }
    else {
      v20 = 1072;
    }
    v21 = (*(__int64 (**)(_QWORD*))(*i + v19))(i);
    v22 = (*(__int64 (**)(_QWORD*))(*i + 128LL))(i);
    (*(void (**)(_QWORD*, _QWORD, _QWORD*, _QWORD))(*v18 + v20))(v18, v21, i,
                                                                 v22);
  }
  *(__n128*)&v23 = nn_os_UnlockMutex_alt1(&GameData_2198f28);
  v4 = v28;
  v28[0] = GameData_1f570e0;
  v28[1] = a2;
  v24 = *(__int64**)(a2 + 24);
  v29 = v28;
  v25 = *v24;
  if (v25 == 0) {
    goto LABEL_40;
  }
  v26 = *(_QWORD*)(v25 + 5616);
  v4 = v28;
  v36[0] = v25;
  while (1) {
    (*(void (**)(_QWORD*, _QWORD*, long double))(*v4 + 48LL))(v4, v36, v23);
    v4 = v29;
    if (v26 == 0) {
      break;
    }
    v36[0] = v26;
    v26 = *(_QWORD*)(v26 + 5616);
    if (v29 == nullptr) {
      goto LABEL_36;
    }
  }
  if (v29 == v28) {
  LABEL_40:
    v27 = 32;
  LABEL_41:
    (*(void (**)(_QWORD*, __int64))(*v4 + v27))(v4, v6);
  }
  else if (v29 != nullptr) {
    v27 = 40;
    goto LABEL_41;
  }
}

void snd_Manager__isActive(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  char v12;
  long double v13;
  _QWORD v14[4];
  _QWORD* v15;
  char v16;
  __int64 v17;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  nn_os_LockMutex(GameData_2134648[0]);
  v6 = v14;
  v14[2] = v3;
  v16 = 0;
  v14[0] = GameData_1f56bc0;
  v14[1] = &v16;
  v7 = *(__int64**)(v2 + 40);
  v15 = v14;
  v8 = *v7;
  do {
    if (v8 == 0) {
      break;
    }
    v9 = *(_QWORD*)(v8 + 5616);
    v17 = v8;
    if (v6 == nullptr) {
      GameRoutine_60a310_alt1(0, v4, v5);
    }
    v10 = (*(__int64 (**)(_QWORD*, __int64*))(*v6 + 48LL))(v6, &v17);
    v6 = v15;
    v8 = v9;
  } while ((v10 & 1) == 0);
  if (v6 == v14) {
    v11 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_10;
    }
    v11 = 40;
  }
  (*(void (**)(_QWORD*, __int64, __int64))(*v6 + v11))(v6, v4, v5);
LABEL_10:
  v12 = v16;
  *(__n128*)&v13 = nn_os_UnlockMutex_alt1(GameData_2134648[0]);
  if ((v12 & 1) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v3 + 40LL))(v3, v13);
  }
}

__int64 snd_Manager_mainVoice_lambda15_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  (*(void (**)(_QWORD))(*(_QWORD*)*a2 + 48LL))(*a2);
  Slot_132a00(v2);
  return Slot_132b80(v2);
}

__int64 snd_Manager_updateVoice_lambda13_Invoke(__int64 a1, _QWORD* a2)
{
  return Listener_112890(*a2, *(float*)(a1 + 8));
}

__int64 snd_Manager_updateVoice_lambda14_Invoke(__int64 a1, _QWORD* a2)
{
  return Actor_101c40(*a2, *(float*)(a1 + 8));
}

__int64 snd_Manager_updateVoice_lambda15_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  Slot_1329a0(*a2, *(float*)(a1 + 8));
  Slot_132ee0(v2, *(float*)(a1 + 8));
  Slot_132e00(v2, *(float*)(a1 + 8));
  return Slot_132fc0(v2, *(float*)(a1 + 8));
}

__int64 snd_Manager_shieldingVoice_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  Slot_133160(*a2);
  return Slot_133220(v2);
}

__int64 snd_Manager_stopImpl_lambda0_Invoke(__int64 a1, __int64* a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  v5 = snd_fnd_WeakHandle_get(*(_QWORD*)(a1 + 16), a3);
  if (v5 != 0) {
    v6 = v5 - 5592;
  }
  else {
    v6 = 0;
  }
  return Slot_1357a0(v4, v3, v6);
}

__int64 snd_Manager_stopSoundKindImpl_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  return Slot_135b40(*a2, **(unsigned int**)(a1 + 8), *(_QWORD*)(a1 + 16));
}

__int64 snd_Manager__isActive_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  char v3;

  v3 = Slot_136c00(*a2, *(_QWORD*)(a1 + 16));
  if ((v3 & 1) != 0) {
    **(_BYTE**)(a1 + 8) = 1;
  }
  return v3 & 1;
}

__int64 snd_Manager_countActiveVoice_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 result;

  result = Slot_136e40(*a2, *(_QWORD*)(a1 + 16));
  **(_DWORD**)(a1 + 8) += result;
  return result;
}

bool snd_Manager_getVoiceNoActorCheck_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  **(_QWORD**)(a1 + 16) = Slot_135520(*a2, *(_QWORD*)(a1 + 8));
  return **(_QWORD**)(a1 + 16) != 0;
}

__int64 snd_Manager_setVolumeSlot_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  float v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  int v9;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v8 = 0;
  v9 = 0x2000;
  GameRoutine_112180(&v8, v2 + 3112);
  result = snd_fnd_WeakHandle_get(&v8, v5);
  v7 = result - 5592;
  if (result == 0) {
    v7 = 0;
  }
  if (v3 != v7) {
    return (
        *(__int64 (**)(__int64, _QWORD, float))(*(_QWORD*)(v3 + 40) + 72LL))(
        v3 + 40, *(_QWORD*)(a1 + 24), **(float**)(a1 + 16));
  }
  return result;
}

__n128 snd_Manager_resetVolumeSlot_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  float v5;
  __int64 v6;
  __n128 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  double v11;
  double v12;
  __int64 v13;
  int v14;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v13 = 0;
  v14 = 0x2000;
  GameRoutine_112180(&v13, v2 + 3112);
  v6 = snd_fnd_WeakHandle_get(&v13, v5);
  v8 = v6 - 5592;
  if (v6 == 0) {
    v8 = 0;
  }
  if (v3 != v8) {
    v10 = *(_QWORD*)(v3 + 40);
    v9 = v3 + 40;
    (*(void (**)(__int64, _QWORD, float))(v10 + 72))(v9, *(_QWORD*)(a1 + 16),
                                                     1.0);
    *(float*)&v11 = snd_Fade_getTime(*(_QWORD*)(a1 + 16));
    snd_Fade_Fade_10c830(&v13, v11);
    (*(void (**)(__int64, __int64*, float))(*(_QWORD*)v9 + 96LL))(v9, &v13,
                                                                  1.0);
    snd_Fade_Destroy_Fade(&v13);
    *(float*)&v12 = snd_Fade_getTime(*(_QWORD*)(a1 + 16));
    snd_Fade_Fade_10c830(&v13, v12);
    (*(void (**)(__int64, __int64*, float))(*(_QWORD*)v9 + 112LL))(v9, &v13,
                                                                   1.0);
    return snd_Fade_Destroy_Fade(&v13);
  }
  return result;
}

__int64 snd_Manager_setLPFSlot_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  float v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  int v9;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v8 = 0;
  v9 = 0x2000;
  GameRoutine_112180(&v8, v2 + 3112);
  result = snd_fnd_WeakHandle_get(&v8, v5);
  v7 = result - 5592;
  if (result == 0) {
    v7 = 0;
  }
  if (v3 != v7) {
    return (
        *(__int64 (**)(__int64, _QWORD, float))(*(_QWORD*)(v3 + 40) + 480LL))(
        v3 + 40, *(_QWORD*)(a1 + 24), **(float**)(a1 + 16));
  }
  return result;
}

__int64 snd_Manager_setSendAuxASlot_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  float v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  int v9;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v8 = 0;
  v9 = 0x2000;
  GameRoutine_112180(&v8, v2 + 3112);
  result = snd_fnd_WeakHandle_get(&v8, v5);
  v7 = result - 5592;
  if (result == 0) {
    v7 = 0;
  }
  if (v3 != v7) {
    return (
        *(__int64 (**)(__int64, _QWORD, float))(*(_QWORD*)(v3 + 40) + 528LL))(
        v3 + 40, *(_QWORD*)(a1 + 24), **(float**)(a1 + 16));
  }
  return result;
}

bool snd_Manager__searchSlot_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(*(_QWORD*)a2 + 5648LL) == *(_DWORD*)(a1 + 8);
}

bool snd_Manager__destroyFx_lambda1_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  char v4;

  v2 = *a2;
  v4 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 184LL))(*a2);
  if ((v4 & 1) == 0) {
    **(_BYTE**)(a1 + 8) = 1;
    **(_QWORD**)(a1 + 16) = v2;
  }
  return (v4 & 1) == 0;
}

__int64 snd_Manager__destroyFx_lambda2_Invoke(__int64 a1, void (****a2)(_QWORD))
{
  _QWORD* v2;
  void (***v3)(_QWORD);
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = *a2;
  v4 = v2[2];
  v5 = (__int64*)((char*)*a2 + v4);
  v6 = v5[1];
  if (*v5 == 0) {
    *v2 = v6;
    v7 = *v5;
    v8 = v5[1];
    if (v8 != 0) {
      goto LABEL_3;
    }
  LABEL_5:
    v2[1] = v7;
    goto LABEL_6;
  }
  *(_QWORD*)(v4 + *v5 + 8) = v6;
  v4 = v2[2];
  v5 = (__int64*)((char*)v3 + v4);
  v7 = *(__int64*)((char*)v3 + v4);
  v8 = *(__int64*)((char*)v3 + v4 + 8);
  if (v8 == 0) {
    goto LABEL_5;
  }
LABEL_3:
  *(_QWORD*)(v4 + v8) = v7;
  v5 = (__int64*)((char*)v3 + v2[2]);
LABEL_6:
  *v5 = 0;
  *(void (***)(_QWORD))((char*)v3 + v2[2] + 8) = nullptr;
  (**v3)(v3);
  return (*(__int64 (**)(_QWORD, void (***)(_QWORD)))(
      **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v3);
}

#pragma GCC visibility pop
