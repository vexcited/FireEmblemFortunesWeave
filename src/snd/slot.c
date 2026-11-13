#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Crc32List_11ed40(__int64, int*);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_119040(_QWORD);
__int64 GameRoutine_119060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_651190(unsigned __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 snd_HandlePtr_unregisterHandle(_QWORD);
__int64 snd_Obj_Destroy_Obj_126190(__int64);
__int64 snd_Param_update(_QWORD, float);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_fnd_WeakHandle_set(_QWORD, _QWORD);
__n128 Param_Destructor(_QWORD*);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 snd_Fade_Destroy_Fade(_QWORD);
extern _UNKNOWN* GameData_2134680;
extern __int64 (*GameData_1f58448[])();
extern __int64 (*GameData_1f584c8[])();
extern __int64 (*GameData_1f58548[])();
extern __int64 (*GameData_1f585c8[])();
extern __int64 (*GameData_1f58648[])();
extern __int64 (*GameData_1f586c8[])();
extern __int64 (*GameData_1f58748[])();
extern __int64 (*GameData_1f587c8[])();
extern __int64 (*GameData_1f58848[])();
extern __int64 (*GameData_1f588c8[])();
extern __int64 (*GameData_1f58948[])();
extern __int64 (*GameData_1f589c8[])();
extern __int64 (*GameData_1f58a48[])();
extern __int64 (*GameData_1f58ac8[])();
extern __int64 (*GameData_1f58b58[])();
extern __int64 (*GameData_1f58bd8[])();
extern __int64 (*GameData_1f58c58[])();
extern __int64 (*GameData_1f58cd8[])();
extern __int64 (*GameData_1f58d68[])();
extern __int64 (*GameData_1f58de8[])();
extern __int64 (*GameData_1f58e68[])();
extern __int64 (*GameData_1f58ef8[])();
extern __int64 (*GameData_1f59878[])();
extern __int64 (*GameData_1f598f8[])();
extern __int64 (*GameData_1f59978[])();
extern __int64 (*GameData_1f599f8[])();
extern __int64 (*GameData_1f59a78[])();
extern __int64 (*GameData_1f59af8[])();
extern __int64 (*GameData_1f59b78[])();
extern __int64 (*GameData_1f59bf8[])();
extern __int64 (*GameData_1f59c78[])();
extern __int64 (*GameData_1f59cf8[])();
extern __int64 (*GameData_1f59d78[])();
extern __int64 (*GameData_1f59df8[])();
extern __int64 (*GameData_1f59e78[])();
extern __int64 (*GameData_1f59ef8[])();
extern __int64 (*GameData_1f59f78[])();
extern __int64 (*GameData_1f59ff8[])();
extern __int64 (*GameData_1f5a078[])();
extern __int64 (*GameData_1f5a0f8[])();
extern __int64 (*GameData_1f5a178[])();
extern __int64 (*GameData_1f5a1f8[])();
extern __int64 (*GameData_1f5a278[])();
extern __int64 (*GameData_1f5a2f8[])();
extern __int64 (*GameData_1f5a378[])();
extern __int64 (*GameData_1f5a3f8[])();
extern __int64 (*GameData_1f5a478[])();
extern __int64 (*GameData_1f5a4f8[])();
extern __int64 (*GameData_1f5a578[])();
extern __int64 (*GameData_1f5a5f8[])();
extern __int64 (*GameData_1f5a678[])();
extern __int64 (*GameData_1f5a6f8[])();
extern __int64 (*GameData_1f5a778[])();
extern __int64 (*GameData_1f5a7f8[])();
extern __int64 (*GameData_1f5a878[])();
extern __int64 (*GameData_1f5a8f8[])();
extern __int64 (*GameData_1f5a978[])();
extern __int64 (*GameData_1f5a9f8[])();
extern __int64 (*GameData_1f5aa78[])();
extern __int64 (*GameData_1f5aaf8[])();
extern __int64 (*GameData_1f5ab78[])();
extern __int64 (*GameData_1f5abf8[])();
extern __int64 (*GameData_1f5ac78[])();
extern __int64 (*GameData_1f5acf8[])();
extern __int64* GameData_2134248[3];
extern __int64* GameData_2134678;
extern __int64* GameData_2134688[2];
extern __int64* snd_g_memory_ptr[2];
float snd_Fade_Fade_10cd70(_QWORD, _QWORD);
void GameRoutine_651250(void*, unsigned __int64);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 Slot_Destructor(__int64 a1);
void Slot_1327c0(__int64 a1);
__int64 Slot_Unknown6(__int64 result);
__n128 Slot_1329a0(__int64 a1, float a2);
__n128 Slot_132a00_alt1(__int64 a1) __asm__("Slot_132a00");
__n128 Slot_132ac0_alt1(__int64 a1) __asm__("Slot_132ac0");
__n128 Slot_132b80_alt1(__int64 a1) __asm__("Slot_132b80");
__int64 Slot_132c40(_QWORD* a1);
void Slot_132e00_alt1(__int64 a1, float a2) __asm__("Slot_132e00");
void Slot_132ee0_alt1(__int64 a1, float a2) __asm__("Slot_132ee0");
void Slot_132fc0_alt1(__int64 a1, float a2) __asm__("Slot_132fc0");
__n128 Slot_1330a0_alt1(__int64 a1) __asm__("Slot_1330a0");
__n128 Slot_133160_alt1(__int64 a1) __asm__("Slot_133160");
__n128 Slot_133220_alt1(__int64 a1) __asm__("Slot_133220");
__int64 Slot_1332e0(__int64 a1, __int64 a2);
__int64 Slot_133420(__int64 a1, __int64 a2);
__int64 Slot_133580(__int64 a1);
__int64 Slot_133660(__int64 a1, __int64 a2);
__int64 Slot_1337a0(__int64 a1, __int64 a2);
__int64 Slot_133900(__int64 a1, __int64 a2);
__int64 Slot_133a40(__int64 a1, __int64 a2);
__int64 Slot_135520_alt1(_QWORD* a1, __int64 a2) __asm__("Slot_135520");
__n128 Slot_1357a0_alt1(_QWORD* a1, __int64 a2,
                        __int64 a3) __asm__("Slot_1357a0");
__n128 Slot_135980_alt1(_QWORD* a1, __int64 a2) __asm__("Slot_135980");
__n128 Slot_135b40_alt1(_QWORD* a1, unsigned int a2,
                        __int64 a3) __asm__("Slot_135b40");
__n128 Slot_135d20_alt1(_QWORD* a1, __int64 a2) __asm__("Slot_135d20");
__n128 Slot_135ee0_alt1(_QWORD* a1) __asm__("Slot_135ee0");
__n128 Slot_1360a0(_QWORD** a1, __int64 a2, char a3);
__n128 Slot_136280(_QWORD** a1, __int64 a2);
__n128 Slot_136440(_QWORD** a1, __int64 a2);
__n128 Slot_136600(_QWORD** a1, __int64 a2);
void Slot_1367c0(_QWORD** a1, __int64 a2, float a3);
__int64 Slot_1369e0(_QWORD* a1);
__int64 Slot_136c00(_QWORD* a1, __int64 a2);
__int64 Slot_136e40_alt1(__int64** a1, __int64 a2) __asm__("Slot_136e40");
__int64 Slot_137080(__int64 a1);
__int64* Slot_Unknown8();
__int64 GameRoutine_190240(_QWORD);
__int64 SeqVoice_12dce0(_QWORD*, __int64);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_Param_isEnvelopeEnded(_QWORD);
__int64 snd_Param_isEnvelopeFading(_QWORD);
__int64 snd_Param_isEnvelopeReleased(_QWORD);
__int64 snd_Voice_isDead(_QWORD);
__int64 snd_Voice_startPitchChecked(_QWORD, _QWORD, float);
__int64 strlen(_QWORD);
void __attribute__((noreturn)) GameRoutine_a36650(_QWORD, _QWORD);
__int64 snd_Slot_addVoice_lambda0_Invoke(__int64 a1, __int64* a2);
bool snd_Slot_destroyVoice_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 snd_Slot_destroyVoice_lambda1_Invoke(__int64 a1, __int64* a2);
__int64 snd_Slot_countVoice_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 snd_Slot_addSeqVoice_lambda0_Invoke(__int64 a1, __int64* a2);
bool snd_Slot_destroySeqVoice_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 snd_Slot_destroySeqVoice_lambda1_Invoke(__int64 a1, __int64* a2);
__int64 snd_Slot_addVibVoice_lambda0_Invoke(__int64 a1, __int64* a2);
bool snd_Slot_destroyVibVoice_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 snd_Slot_destroyVibVoice_lambda1_Invoke(__int64 a1, __int64* a2);
void snd_Slot_checkPriority_lambda0_Invoke_1394a0(__int64 a1, _QWORD* a2);
void snd_Slot_checkPriority_lambda1_Invoke_139660(__int64 a1, _QWORD* a2);
void snd_Slot_checkPriority_lambda2_Invoke_139800(__int64 a1, _QWORD* a2);
void snd_Slot_checkPriority_lambda3_Invoke_139960(__int64 a1, _QWORD* a2);
void snd_Slot_checkPriority_lambda4_Invoke_139ad0(_QWORD** a1, _QWORD* a2);
void snd_Slot_checkPriority_lambda5_Invoke_139c70(_QWORD** a1, _QWORD* a2);
void snd_Slot_checkPriority_lambda6_Invoke_139e00(__int64 a1, _QWORD* a2);
void snd_Slot_checkPriority_lambda0_Invoke_13a010(__int64 a1, _QWORD* a2);
void snd_Slot_checkPriority_lambda1_Invoke_13a1d0(__int64 a1, _QWORD* a2);
__int64 snd_Slot_checkPriority_lambda2_Invoke_13a370(__int64 a1, _QWORD* a2);
__int64 snd_Slot_checkPriority_lambda3_Invoke_13a4c0(__int64 a1, _QWORD* a2);
__int64 snd_Slot_checkPriority_lambda4_Invoke_13a620(_QWORD** a1, _QWORD* a2);
__int64 snd_Slot_checkPriority_lambda5_Invoke_13a7a0(_QWORD** a1, _QWORD* a2);
void snd_Slot_checkPriority_lambda6_Invoke_13a910(__int64 a1, _QWORD* a2);
__int64 snd_Slot_checkPriority_lambda0_Invoke_13ab20(__int64 a1, _QWORD* a2);
__int64 snd_Slot_checkPriority_lambda1_Invoke_13aca0(__int64 a1, _QWORD* a2);
__int64 snd_Slot_checkPriority_lambda2_Invoke_13ae00(_QWORD** a1, _QWORD* a2);
void snd_Slot_checkPriority_lambda3_Invoke_13af50(__int64 a1, _QWORD* a2);
bool snd_Slot_getVoiceNoActorCheck_lambda0_Invoke(__int64 a1, _QWORD* a2);
bool snd_Slot_getVoiceNoActorCheck_lambda1_Invoke(__int64 a1, _QWORD* a2);
bool snd_Slot_getVoiceNoActorCheck_lambda2_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Slot_stop_lambda0_Invoke_13b530(__int64 a1, _QWORD* a2);
__int64 snd_Slot_stop_lambda1_Invoke_13b610(__int64 a1, _QWORD* a2);
__int64 snd_Slot_stop_lambda2_Invoke_13b6f0(__int64 a1, _QWORD* a2);
__int64 snd_Slot_stop_lambda0_Invoke_13b7d0(__int64 a1, _QWORD* a2);
__int64 snd_Slot_stop_lambda1_Invoke_13b8b0(__int64 a1, _QWORD* a2);
__int64 snd_Slot_stop_lambda2_Invoke_13b990(__int64 a1, _QWORD* a2);
__int64 snd_Slot_stopSoundKind_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 snd_Slot_stopSoundKind_lambda1_Invoke(__int64 a1, __int64* a2);
__int64 snd_Slot_stopSoundKind_lambda2_Invoke(__int64 a1, __int64* a2);
__int64 snd_Slot_kill_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Slot_kill_lambda1_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Slot_kill_lambda2_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Slot_mute_lambda0_Clone(__int64 a1);
void snd_Slot_mute_lambda0_CloneInto(__int64 a1, __int64 a2);
_QWORD* snd_Slot_mute_lambda0_Invoke(__int64 a1, _QWORD** a2);
__int64 snd_Slot_mute_lambda1_Clone(__int64 a1);
void snd_Slot_mute_lambda1_CloneInto(__int64 a1, __int64 a2);
_QWORD* snd_Slot_mute_lambda1_Invoke(__int64 a1, _QWORD** a2);
__int64 snd_Slot_mute_lambda2_Clone(__int64 a1);
void snd_Slot_mute_lambda2_CloneInto(__int64 a1, __int64 a2);
_QWORD* snd_Slot_mute_lambda2_Invoke(__int64 a1, _QWORD** a2);
_QWORD* snd_Slot_resumeMute_lambda0_Invoke(__int64 a1, _QWORD** a2);
_QWORD* snd_Slot_resumeMute_lambda1_Invoke(__int64 a1, _QWORD** a2);
_QWORD* snd_Slot_resumeMute_lambda2_Invoke(__int64 a1, _QWORD** a2);
_QWORD* snd_Slot_pause_lambda0_Invoke(__int64 a1, _QWORD** a2);
_QWORD* snd_Slot_pause_lambda1_Invoke(__int64 a1, _QWORD** a2);
_QWORD* snd_Slot_pause_lambda2_Invoke(__int64 a1, _QWORD** a2);
_QWORD* snd_Slot_resumePause_lambda0_Invoke(__int64 a1, _QWORD** a2);
_QWORD* snd_Slot_resumePause_lambda1_Invoke(__int64 a1, _QWORD** a2);
_QWORD* snd_Slot_resumePause_lambda2_Invoke(__int64 a1, _QWORD** a2);
__int64 snd_Slot_silent_lambda0_Destructor(_QWORD* a1);
void snd_Slot_silent_lambda0_DeletingDestructor(_QWORD* a1);
__int64 snd_Slot_silent_lambda0_Clone(__int64 a1);
float snd_Slot_silent_lambda0_CloneInto(__int64 a1, __int64 a2);
__int64 snd_Slot_silent_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Slot_silent_lambda1_Destructor(_QWORD* a1);
void snd_Slot_silent_lambda1_DeletingDestructor(_QWORD* a1);
__int64 snd_Slot_silent_lambda1_Clone(__int64 a1);
float snd_Slot_silent_lambda1_CloneInto(__int64 a1, __int64 a2);
__int64 snd_Slot_silent_lambda1_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Slot_silent_lambda2_Destructor(_QWORD* a1);
void snd_Slot_silent_lambda2_DeletingDestructor(_QWORD* a1);
__int64 snd_Slot_silent_lambda2_Clone(__int64 a1);
float snd_Slot_silent_lambda2_CloneInto(__int64 a1, __int64 a2);
__int64 snd_Slot_silent_lambda2_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Slot_isActive_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Slot_isActive_lambda1_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Slot_isActive_lambda2_Invoke(__int64 a1, _QWORD* a2);
__int64 snd_Slot_countActiveVoice_lambda0_Invoke_alt1(
    __int64 a1, _QWORD* a2) __asm__("snd_Slot_countActiveVoice_lambda0_Invoke");
__int64 snd_Slot_countActiveVoice_lambda1_Invoke(__int64 a1, _QWORD** a2);
__int64 snd_Slot_countActiveVoice_lambda2_Invoke_alt1(
    __int64 a1, _QWORD* a2) __asm__("snd_Slot_countActiveVoice_lambda2_Invoke");
__int64 GameRoutine_190240_alt1(__int64) __asm__("GameRoutine_190240");
__int64 GameRoutine_651190_alt1(__int64) __asm__("GameRoutine_651190");
__int64 snd_Fade_Destroy_Fade_alt2(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
bool snd_Voice_hasSends(__int64);
extern __int64 (*GameData_1f58f78[])();
extern __int64 (*GameData_1f58ff8[])();
extern __int64 (*GameData_1f59078[])();
extern __int64 (*GameData_1f590f8[])();
extern __int64 (*GameData_1f59178[])();
extern __int64 (*GameData_1f591f8[])();
extern __int64 (*GameData_1f59278[])();
extern __int64 (*GameData_1f592f8[])();
extern __int64 (*GameData_1f59378[])();
extern __int64 (*GameData_1f593f8[])();
extern __int64 (*GameData_1f59478[])();
extern __int64 (*GameData_1f594f8[])();
extern __int64 (*GameData_1f59578[])();
extern __int64 (*GameData_1f595f8[])();
extern __int64 (*GameData_1f59678[])();
extern __int64 (*GameData_1f596f8[])();
extern __int64 (*GameData_1f59778[])();
extern __int64 (*GameData_1f597f8[])();
extern __int64 snd_g_proxy;
extern __int64 snd_g_proxy_ptr[2];
void GameRoutine_133ba0(__int64, __int64, __int64, __int64, __int64);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void snd_Fade_Fade_10c830(__int64, float);
__int64 snd_Slot_checkPriority_1340a0(__int64 a1, __int64 a2);
__int64 snd_Slot_checkPriority_134880(__int64 a1, __int64 a2);
__int64 snd_Slot_checkPriority_135040(__int64 a1, __int64 a2);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_119040_alt1() __asm__("GameRoutine_119040");
__int64 GameRoutine_119060_alt1() __asm__("GameRoutine_119060");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 snd_fnd_WeakHandle_set_alt1(__int64,
                                    __int64) __asm__("snd_fnd_WeakHandle_set");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64
GameRoutine_190020_alt1(__int64*, const char*) __asm__("GameRoutine_190020");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) snd_a36650();
__int64 Slot_132a00(__int64 a1);
__int64 Slot_132ac0(__int64 a1);
__int64 Slot_132b80(__int64 a1);
__int64 Slot_132e00(__int64 a1, float a2);
__int64 Slot_132ee0(__int64 a1, float a2);
__int64 Slot_132fc0(__int64 a1, float a2);
__int64 Slot_1330a0(__int64 a1);
__int64 Slot_133160(__int64 a1);
__int64 Slot_133220(__int64 a1);
__int64 Slot_135520(_QWORD* a1, const char* a2);
__int64 Slot_1357a0(_QWORD* a1, __int64 a2, __int64 a3);
__int64 Slot_135980(_QWORD* a1, __int64 a2);
__int64 Slot_135b40(_QWORD* a1, unsigned int a2, __int64 a3);
__int64 Slot_135d20(_QWORD* a1, __int64 a2);
__int64 Slot_135ee0(_QWORD* a1);
__int64 Slot_136e40(__int64** a1, const char* a2);
unsigned __int64 snd_Slot_countActiveVoice_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2);
unsigned __int64 snd_Slot_countActiveVoice_lambda2_Invoke(__int64 a1,
                                                          _QWORD* a2);

__int64 Slot_Destructor(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int16 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 j;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int16 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _BYTE* k;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  unsigned __int16 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  unsigned __int64 v43;

  v2 = GameData_2134678;
  *(_QWORD*)a1 = GameData_2134678 + 2;
  v3 = v2 + 23;
  *(_QWORD*)(a1 + 5592) = v2 + 164;
  v4 = *(__int64**)(a1 + 5904);
  *(_QWORD*)(a1 + 40) = v3;
  v5 = (_QWORD*)(a1 + 40);
  for (i = *v4; i != 0; i = **(_QWORD**)(a1 + 5904)) {
    (*(void (**)(__int64))(*(_QWORD*)i + 264LL))(i);
    v14 = *(_QWORD*)(a1 + 5888);
    v9 = (__int64*)(v14 + i);
    v16 = *(_QWORD*)(v14 + i);
    v15 = *(_QWORD*)(v14 + i + 8);
    if (v16 != 0) {
      *(_QWORD*)(v14 + v16 + 8) = v15;
      v14 = *(_QWORD*)(a1 + 5888);
      v9 = (__int64*)(v14 + i);
      v7 = *(_QWORD*)(v14 + i);
      v8 = *(_QWORD*)(v14 + i + 8);
      if (v8 == 0) {
      LABEL_8:
        *(_QWORD*)(a1 + 5880) = v7;
        goto LABEL_5;
      }
    }
    else {
      *(_QWORD*)(a1 + 5872) = v15;
      v7 = *v9;
      v8 = v9[1];
      if (v8 == 0) {
        goto LABEL_8;
      }
    }
    *(_QWORD*)(v14 + v8) = v7;
    v9 = (__int64*)(*(_QWORD*)(a1 + 5888) + i);
  LABEL_5:
    *v9 = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 5888) + i + 8) = 0;
    v10 = *(_QWORD*)(a1 + 32);
    (**(void (***)(__int64))i)(i);
    nn_os_LockMutex(v10 + 2800);
    v11 = *(_QWORD*)(v10 + 2784);
    v12 = *(_WORD*)(v10 + 2792) - 1;
    v13 = i - *(_QWORD*)(v10 + 2776);
    *(_WORD*)(v10 + 2792) = v12;
    *(_WORD*)(v11 + 2LL * v12) = v13 / 0x1808;
    nn_os_UnlockMutex(v10 + 2800);
  }
  for (j = **(_QWORD**)(a1 + 5864); j != 0; j = **(_QWORD**)(a1 + 5864)) {
    (*(void (**)(__int64))(*(_QWORD*)j + 264LL))(j);
    v25 = *(_QWORD*)(a1 + 5848);
    v20 = (__int64*)(v25 + j);
    v27 = *(_QWORD*)(v25 + j);
    v26 = *(_QWORD*)(v25 + j + 8);
    if (v27 != 0) {
      *(_QWORD*)(v25 + v27 + 8) = v26;
      v25 = *(_QWORD*)(a1 + 5848);
      v20 = (__int64*)(v25 + j);
      v18 = *(_QWORD*)(v25 + j);
      v19 = *(_QWORD*)(v25 + j + 8);
      if (v19 == 0) {
      LABEL_16:
        *(_QWORD*)(a1 + 5840) = v18;
        goto LABEL_13;
      }
    }
    else {
      *(_QWORD*)(a1 + 5832) = v26;
      v18 = *v20;
      v19 = v20[1];
      if (v19 == 0) {
        goto LABEL_16;
      }
    }
    *(_QWORD*)(v25 + v19) = v18;
    v20 = (__int64*)(*(_QWORD*)(a1 + 5848) + j);
  LABEL_13:
    *v20 = 0;
    *(_QWORD*)(*(_QWORD*)(a1 + 5848) + j + 8) = 0;
    v21 = *(_QWORD*)(a1 + 32);
    (**(void (***)(__int64))j)(j);
    nn_os_LockMutex(v21 + 2560);
    v22 = *(_QWORD*)(v21 + 2544);
    v23 = *(_WORD*)(v21 + 2552) - 1;
    v24 = (unsigned __int64)(j - *(_QWORD*)(v21 + 2536)) >> 3;
    *(_WORD*)(v21 + 2552) = v23;
    *(_WORD*)(v22 + 2LL * v23) =
        (unsigned __int64)((v24 * (unsigned __int128)0x156AC0156AC0156BuLL) >>
                           64) >>
        6;
    nn_os_UnlockMutex(v21 + 2560);
  }
  for (k = **(_BYTE***)(a1 + 5824); k != nullptr; k = **(_BYTE***)(a1 + 5824)) {
    (*(void (**)(_BYTE*))(*(_QWORD*)k + 264LL))(k);
    v35 = *(_QWORD*)(a1 + 5808);
    v36 = (__int64*)&k[v35];
    v38 = *(_QWORD*)&k[v35];
    v37 = *(_QWORD*)&k[v35 + 8];
    if (v38 != 0) {
      *(_QWORD*)(v35 + v38 + 8) = v37;
      v35 = *(_QWORD*)(a1 + 5808);
      v36 = (__int64*)&k[v35];
      v39 = *(_QWORD*)&k[v35];
      v40 = *(_QWORD*)&k[v35 + 8];
      if (v40 != 0) {
        goto LABEL_24;
      }
    }
    else {
      *(_QWORD*)(a1 + 5792) = v37;
      v39 = *v36;
      v40 = v36[1];
      if (v40 != 0) {
      LABEL_24:
        *(_QWORD*)(v35 + v40) = v39;
        v36 = (__int64*)&k[*(_QWORD*)(a1 + 5808)];
        goto LABEL_27;
      }
    }
    *(_QWORD*)(a1 + 5800) = v39;
  LABEL_27:
    *v36 = 0;
    *(_QWORD*)&k[*(_QWORD*)(a1 + 5808) + 8] = 0;
    if (k[5891] == 1) {
      v29 = *(_QWORD*)(a1 + 32);
      (**(void (***)(_BYTE*))k)(k);
      v30 = v29 + 2640;
      nn_os_LockMutex(v29 + 2640);
      v31 = (_QWORD*)(v29 + 2624);
      v32 = *(_WORD*)(v29 + 2632) - 1;
      v33 = (unsigned __int64)&k[-*(_QWORD*)(v29 + 2616)] >> 4;
      *(_WORD*)(v29 + 2632) = v32;
    }
    else {
      v41 = (unsigned __int8)k[5892];
      v42 = *(_QWORD*)(a1 + 32);
      (**(void (***)(_BYTE*))k)(k);
      if (v41 != 1) {
        v30 = v42 + 2480;
        nn_os_LockMutex(v42 + 2480);
        v31 = (_QWORD*)(v42 + 2464);
        v32 = *(_WORD*)(v42 + 2472) - 1;
        v43 = (unsigned __int64)&k[-*(_QWORD*)(v42 + 2456)];
        *(_WORD*)(v42 + 2472) = v32;
        v34 = v43 / 0x17B8;
        goto LABEL_21;
      }
      v30 = v42 + 2720;
      nn_os_LockMutex(v42 + 2720);
      v31 = (_QWORD*)(v42 + 2704);
      v32 = *(_WORD*)(v42 + 2712) - 1;
      v33 = (unsigned __int64)&k[-*(_QWORD*)(v42 + 2696)] >> 4;
      *(_WORD*)(v42 + 2712) = v32;
    }
    v34 = (unsigned __int64)((v33 * (unsigned __int128)0xAC02B00AC02B00BuLL) >>
                             64) >>
          4;
  LABEL_21:
    *(_WORD*)(*v31 + 2LL * v32) = v34;
    nn_os_UnlockMutex(v30);
  }
  nn_os_FinalizeMutex(a1 + 5944);
  if ((*(_BYTE*)(a1 + 5704) & 1) == 0) {
    if ((*(_BYTE*)(a1 + 5680) & 1) == 0) {
      goto LABEL_33;
    }
  LABEL_37:
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], *(_QWORD*)(a1 + 5696));
    if ((*(_BYTE*)(a1 + 5624) & 1) == 0) {
      goto LABEL_35;
    }
    goto LABEL_34;
  }
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
      *snd_g_memory_ptr[0], *(_QWORD*)(a1 + 5720));
  if ((*(_BYTE*)(a1 + 5680) & 1) != 0) {
    goto LABEL_37;
  }

LABEL_33:
  if ((*(_BYTE*)(a1 + 5624) & 1) != 0) {
  LABEL_34:
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], *(_QWORD*)(a1 + 5640));
  }

LABEL_35:
  *(_QWORD*)(a1 + 5592) = GameData_2134248[0] + 2;
  snd_HandlePtr_unregisterHandle(a1 + 5592);
  Param_Destructor(v5);
  return snd_Obj_Destroy_Obj_126190(a1);
}

void Slot_1327c0(__int64 a1)
{
  Slot_Destructor(a1 - 5592);
  GameRoutine_651250((void*)(a1 - 5592), 0x1758u);
}

__int64 Slot_Unknown6(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v10;
    int v11;
  } v10_;

  v1 = result;
  if (*(_DWORD*)(result + 5652) != 0) {
    result = snd_fnd_WeakHandle_isValid_alt1((__int64*)(result + 5728));
    if ((result & 1) == 0) {
      v2 = Crc32List_11ed40(*(_QWORD*)(v1 + 32), (int*)(v1 + 5652));
      v10_.v10 = 0;
      v10_.v11 = 0x2000;
      if (v2 != 0) {
        v3 = v2 + 5592;
      }
      else {
        v3 = 0;
      }
      snd_fnd_WeakHandle_set_alt1((__int64)&v10_.v10, v3);
      result = GameRoutine_112180_alt1(v1 + 5728, (__int64)&v10_.v10);
    }
  }
  if (*(_DWORD*)(v1 + 5656) != 0) {
    result = snd_fnd_WeakHandle_isValid_alt1((__int64*)(v1 + 5744));
    if ((result & 1) == 0) {
      v4 = Crc32List_11ed40(*(_QWORD*)(v1 + 32), (int*)(v1 + 5656));
      v10_.v10 = 0;
      v10_.v11 = 0x2000;
      if (v4 != 0) {
        v5 = v4 + 5592;
      }
      else {
        v5 = 0;
      }
      snd_fnd_WeakHandle_set_alt1((__int64)&v10_.v10, v5);
      result = GameRoutine_112180_alt1(v1 + 5744, (__int64)&v10_.v10);
    }
  }
  if (*(_DWORD*)(v1 + 5660) != 0) {
    result = snd_fnd_WeakHandle_isValid_alt1((__int64*)(v1 + 5760));
    if ((result & 1) == 0) {
      v6 = Crc32List_11ed40(*(_QWORD*)(v1 + 32), (int*)(v1 + 5660));
      v10_.v10 = 0;
      v10_.v11 = 0x2000;
      if (v6 != 0) {
        v7 = v6 + 5592;
      }
      else {
        v7 = 0;
      }
      snd_fnd_WeakHandle_set_alt1((__int64)&v10_.v10, v7);
      result = GameRoutine_112180_alt1(v1 + 5760, (__int64)&v10_.v10);
    }
  }
  if (*(_DWORD*)(v1 + 5664) != 0) {
    result = snd_fnd_WeakHandle_isValid_alt1((__int64*)(v1 + 5776));
    if ((result & 1) == 0) {
      v8 = Crc32List_11ed40(*(_QWORD*)(v1 + 32), (int*)(v1 + 5664));
      v10_.v10 = 0;
      v10_.v11 = 0x2000;
      if (v8 != 0) {
        v9 = v8 + 5592;
      }
      else {
        v9 = 0;
      }
      snd_fnd_WeakHandle_set_alt1((__int64)&v10_.v10, v9);
      return GameRoutine_112180_alt1(v1 + 5776, (__int64)&v10_.v10);
    }
  }
  return result;
}

__n128 Slot_1329a0(__int64 a1, float a2)
{
  nn_os_LockMutex(a1 + 5944);
  snd_Param_update(a1 + 40, a2);
  return nn_os_UnlockMutex(a1 + 5944);
}

__int64 Slot_132a00(__int64 a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  __int64 v9;

  nn_os_LockMutex_alt1(a1 + 5944);
  v2 = v7_.v7;
  v7_.v7[0] = GameData_1f58448;
  v3 = *(__int64**)(a1 + 5816);
  v7_.v8 = v7_.v7;
  v4 = *v3;
  if (*v3 != 0) {
    do {
      v9 = v4;
      v4 = *(_QWORD*)(v4 + 5640);
      if (v7_.v8 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v7_.v8 + 48LL))(v7_.v8, &v9);
    } while (v4 != 0);
    v2 = v7_.v8;
    if (v7_.v8 != v7_.v7) {
      if (v7_.v8 != nullptr) {
        v5 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v2 + v5))(v2);
      }
      return nn_os_UnlockMutex_alt1(a1 + 5944);
    }
  }
  v5 = 32;
  goto LABEL_8;
}

__int64 Slot_132ac0(__int64 a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  __int64 v9;

  nn_os_LockMutex_alt1(a1 + 5944);
  v2 = v7_.v7;
  v7_.v7[0] = GameData_1f584c8;
  v3 = *(__int64**)(a1 + 5856);
  v7_.v8 = v7_.v7;
  v4 = *v3;
  if (*v3 != 0) {
    do {
      v9 = v4;
      v4 = *(_QWORD*)(v4 + 6080);
      if (v7_.v8 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v7_.v8 + 48LL))(v7_.v8, &v9);
    } while (v4 != 0);
    v2 = v7_.v8;
    if (v7_.v8 != v7_.v7) {
      if (v7_.v8 != nullptr) {
        v5 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v2 + v5))(v2);
      }
      return nn_os_UnlockMutex_alt1(a1 + 5944);
    }
  }
  v5 = 32;
  goto LABEL_8;
}

__int64 Slot_132b80(__int64 a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  __int64 v9;

  nn_os_LockMutex_alt1(a1 + 5944);
  v2 = v7_.v7;
  v7_.v7[0] = GameData_1f58548;
  v3 = *(__int64**)(a1 + 5896);
  v7_.v8 = v7_.v7;
  v4 = *v3;
  if (*v3 != 0) {
    do {
      v9 = v4;
      v4 = *(_QWORD*)(v4 + 6080);
      if (v7_.v8 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v7_.v8 + 48LL))(v7_.v8, &v9);
    } while (v4 != 0);
    v2 = v7_.v8;
    if (v7_.v8 != v7_.v7) {
      if (v7_.v8 != nullptr) {
        v5 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v2 + v5))(v2);
      }
      return nn_os_UnlockMutex_alt1(a1 + 5944);
    }
  }
  v5 = 32;
  goto LABEL_8;
}

__int64 Slot_132c40(_QWORD* a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  __int64 v21;

  GameRoutine_119040_alt1();
  nn_os_LockMutex_alt1((__int64)(a1 + 743));
  v2 = v19_.v19;
  v19_.v19[0] = GameData_1f585c8;
  v3 = (__int64*)a1[727];
  v19_.v20 = v19_.v19;
  v4 = *v3;
  if (*v3 != 0) {
    do {
      v21 = v4;
      v4 = *(_QWORD*)(v4 + 5640);
      if (v19_.v20 == nullptr) {
      LABEL_26:
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v19_.v20 + 48LL))(v19_.v20, &v21);
    } while (v4 != 0);
    v2 = v19_.v20;
    if (v19_.v20 != v19_.v19) {
      if (v19_.v20 != nullptr) {
        v5 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v2 + v5))((__int64)v2);
      }
      v6 = v17_.v17;
      v17_.v17[0] = GameData_1f58648;
      v7 = (__int64*)a1[732];
      v17_.v18 = v17_.v17;
      v8 = *v7;
      if (*v7 != 0) {
        do {
          v21 = v8;
          v8 = *(_QWORD*)(v8 + 6080);
          if (v17_.v18 == nullptr) {
            goto LABEL_26;
          }
          (*(void (**)(_QWORD*, __int64*))(*v17_.v18 + 48LL))(v17_.v18, &v21);
        } while (v8 != 0);
        v6 = v17_.v18;
        if (v17_.v18 != v17_.v17) {
          if (v17_.v18 != nullptr) {
            v9 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v6 + v9))((__int64)v6);
          }
          v10 = v15_.v15;
          v15_.v15[0] = GameData_1f586c8;
          v11 = (__int64*)a1[737];
          v15_.v16 = v15_.v15;
          v12 = *v11;
          if (*v11 != 0) {
            do {
              v21 = v12;
              v12 = *(_QWORD*)(v12 + 6080);
              if (v15_.v16 == nullptr) {
                goto LABEL_26;
              }
              (*(void (**)(_QWORD*, __int64*))(*v15_.v16 + 48LL))(v15_.v16,
                                                                  &v21);
            } while (v12 != 0);
            v10 = v15_.v16;
            if (v15_.v16 != v15_.v15) {
              if (v15_.v16 != nullptr) {
                v13 = 40;
              LABEL_24:
                (*(void (**)(_QWORD*))(*v10 + v13))(v10);
              }
              nn_os_UnlockMutex_alt1((__int64)(a1 + 743));
              return GameRoutine_119060_alt1();
            }
          }
          v13 = 32;
          goto LABEL_24;
        }
      }
      v9 = 32;
      goto LABEL_16;
    }
  }
  v5 = 32;
  goto LABEL_8;
}

__int64 Slot_132e00(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 (***v5)();
  __int64* v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 (**v10)();
    float v11;
    char gap12_[20];
    __int64 (***v12)();
  } v10_;
  __int64 v13;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 5944),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = &v10_.v10;
  v10_.v11 = a2;
  v10_.v10 = GameData_1f58748;
  v6 = *(__int64**)(a1 + 5816);
  v10_.v12 = &v10_.v10;
  v7 = *v6;
  if (*v6 != 0) {
    do {
      v13 = v7;
      v7 = *(_QWORD*)(v7 + 5640);
      if (v10_.v12 == nullptr) {
        GameRoutine_60a310_alt1(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v10_.v12)[6])(v10_.v12, &v13),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v7 != 0);
    v5 = v10_.v12;
    if (v10_.v12 != &v10_.v10) {
      if (v10_.v12 != nullptr) {
        v8 = 5;
      LABEL_8:
        ((void (*)(__int64 (***)(void), __int64))(*v5)[v8])(v5, v4),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      return nn_os_UnlockMutex_alt1(a1 + 5944);
    }
  }
  v8 = 4;
  goto LABEL_8;
}

__int64 Slot_132ee0(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 (***v5)();
  __int64* v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 (**v10)();
    float v11;
    char gap12_[20];
    __int64 (***v12)();
  } v10_;
  __int64 v13;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 5944),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = &v10_.v10;
  v10_.v11 = a2;
  v10_.v10 = GameData_1f587c8;
  v6 = *(__int64**)(a1 + 5856);
  v10_.v12 = &v10_.v10;
  v7 = *v6;
  if (*v6 != 0) {
    do {
      v13 = v7;
      v7 = *(_QWORD*)(v7 + 6080);
      if (v10_.v12 == nullptr) {
        GameRoutine_60a310_alt1(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v10_.v12)[6])(v10_.v12, &v13),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v7 != 0);
    v5 = v10_.v12;
    if (v10_.v12 != &v10_.v10) {
      if (v10_.v12 != nullptr) {
        v8 = 5;
      LABEL_8:
        ((void (*)(__int64 (***)(void), __int64))(*v5)[v8])(v5, v4),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      return nn_os_UnlockMutex_alt1(a1 + 5944);
    }
  }
  v8 = 4;
  goto LABEL_8;
}

__int64 Slot_132fc0(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 (***v5)();
  __int64* v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 (**v10)();
    float v11;
    char gap12_[20];
    __int64 (***v12)();
  } v10_;
  __int64 v13;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 5944),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = &v10_.v10;
  v10_.v11 = a2;
  v10_.v10 = GameData_1f58848;
  v6 = *(__int64**)(a1 + 5896);
  v10_.v12 = &v10_.v10;
  v7 = *v6;
  if (*v6 != 0) {
    do {
      v13 = v7;
      v7 = *(_QWORD*)(v7 + 6080);
      if (v10_.v12 == nullptr) {
        GameRoutine_60a310_alt1(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v10_.v12)[6])(v10_.v12, &v13),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v7 != 0);
    v5 = v10_.v12;
    if (v10_.v12 != &v10_.v10) {
      if (v10_.v12 != nullptr) {
        v8 = 5;
      LABEL_8:
        ((void (*)(__int64 (***)(void), __int64))(*v5)[v8])(v5, v4),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      return nn_os_UnlockMutex_alt1(a1 + 5944);
    }
  }
  v8 = 4;
  goto LABEL_8;
}

__int64 Slot_1330a0(__int64 a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  __int64 v9;

  nn_os_LockMutex_alt1(a1 + 5944);
  v2 = v7_.v7;
  v7_.v7[0] = GameData_1f588c8;
  v3 = *(__int64**)(a1 + 5816);
  v7_.v8 = v7_.v7;
  v4 = *v3;
  if (*v3 != 0) {
    do {
      v9 = v4;
      v4 = *(_QWORD*)(v4 + 5640);
      if (v7_.v8 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v7_.v8 + 48LL))(v7_.v8, &v9);
    } while (v4 != 0);
    v2 = v7_.v8;
    if (v7_.v8 != v7_.v7) {
      if (v7_.v8 != nullptr) {
        v5 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v2 + v5))(v2);
      }
      return nn_os_UnlockMutex_alt1(a1 + 5944);
    }
  }
  v5 = 32;
  goto LABEL_8;
}

__int64 Slot_133160(__int64 a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  __int64 v9;

  nn_os_LockMutex_alt1(a1 + 5944);
  v2 = v7_.v7;
  v7_.v7[0] = GameData_1f58948;
  v3 = *(__int64**)(a1 + 5816);
  v7_.v8 = v7_.v7;
  v4 = *v3;
  if (*v3 != 0) {
    do {
      v9 = v4;
      v4 = *(_QWORD*)(v4 + 5640);
      if (v7_.v8 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v7_.v8 + 48LL))(v7_.v8, &v9);
    } while (v4 != 0);
    v2 = v7_.v8;
    if (v7_.v8 != v7_.v7) {
      if (v7_.v8 != nullptr) {
        v5 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v2 + v5))(v2);
      }
      return nn_os_UnlockMutex_alt1(a1 + 5944);
    }
  }
  v5 = 32;
  goto LABEL_8;
}

__int64 Slot_133220(__int64 a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  __int64 v9;

  nn_os_LockMutex_alt1(a1 + 5944);
  v2 = v7_.v7;
  v7_.v7[0] = GameData_1f589c8;
  v3 = *(__int64**)(a1 + 5856);
  v7_.v8 = v7_.v7;
  v4 = *v3;
  if (*v3 != 0) {
    do {
      v9 = v4;
      v4 = *(_QWORD*)(v4 + 6080);
      if (v7_.v8 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v7_.v8 + 48LL))(v7_.v8, &v9);
    } while (v4 != 0);
    v2 = v7_.v8;
    if (v7_.v8 != v7_.v7) {
      if (v7_.v8 != nullptr) {
        v5 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*))(*v2 + v5))(v2);
      }
      return nn_os_UnlockMutex_alt1(a1 + 5944);
    }
  }
  v5 = 32;
  goto LABEL_8;
}

__int64 Slot_1332e0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  __int64 v12;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_119040_alt1(),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 5944),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(*(_QWORD*)(a1 + 5808) + a2) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 5808) + a2 + 8) = 0;
  if (**(_QWORD**)(a1 + 5824) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 5808) + *(_QWORD*)(a1 + 5800) + 8LL) = a2;
    *(_QWORD*)(*(_QWORD*)(a1 + 5808) + a2) = **(_QWORD**)(a1 + 5824);
  }
  else {
    *(_QWORD*)(a1 + 5792) = a2;
  }
  v5 = *(_QWORD*)(a1 + 5936);
  *(_QWORD*)(a1 + 5800) = a2;
  v6 = v10_.v10;
  v10_.v11 = v10_.v10;
  *(_QWORD*)(a2 + 5624) = v5;
  *(_DWORD*)(a1 + 5912) = 0;
  *(_DWORD*)(a1 + 5920) = 0;
  *(_QWORD*)(a1 + 5936) = v5 + 1;
  v10_.v10[0] = GameData_1f58a48;
  v10_.v10[1] = a1;
  v7 = **(_QWORD**)(a1 + 5816);
  if (v7 != 0) {
    do {
      v12 = v7;
      v7 = *(_QWORD*)(v7 + 5640);
      if (v10_.v11 == nullptr) {
        GameRoutine_60a310_alt1(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v10_.v11 + 48LL))(v10_.v11, &v12),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v7 != 0);
    v6 = v10_.v11;
    if (v10_.v11 != v10_.v10) {
      if (v10_.v11 != nullptr) {
        v8 = 40;
      LABEL_11:
        (*(void (**)(_QWORD*, __int64))(*v6 + v8))(v6, v4),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      nn_os_UnlockMutex_alt1(a1 + 5944),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return GameRoutine_119060_alt1();
    }
  }
  v8 = 32;
  goto LABEL_11;
}

__int64 Slot_133420(__int64 a1, __int64 a2)
{
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  __int64 v20;
  __int64 v21;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = a2;
  GameRoutine_119040_alt1(),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 5944),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = v18_.v18;
  v18_.v18[2] = a1;
  v18_.v18[0] = GameData_1f58ac8;
  v18_.v18[1] = &v20;
  v5 = *(__int64**)(a1 + 5816);
  v18_.v19 = v18_.v18;
  v6 = *v5;
  do {
    if (v6 == 0) {
      break;
    }
    v7 = *(_QWORD*)(v6 + 5640);
    v21 = v6;
    if (v4 == nullptr) {
    LABEL_14:
      GameRoutine_60a310_alt1(),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v8 = (*(__int64 (**)(_QWORD*, __int64*))(*v4 + 48LL))(v4, &v21),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = v18_.v19;
    v6 = v7;
  } while ((v8 & 1) == 0);
  if (v4 == v18_.v18) {
    v9 = 32;
    goto LABEL_9;
  }
  if (v4 != nullptr) {
    v9 = 40;
  LABEL_9:
    (*(void (**)(__int64))(*v4 + v9))((__int64)v4),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v10 = v16_.v16;
  *(_DWORD*)(a1 + 5912) = 0;
  *(_DWORD*)(a1 + 5920) = 0;
  v16_.v16[0] = GameData_1f58b58;
  v16_.v16[1] = a1;
  v11 = *(__int64**)(a1 + 5816);
  v16_.v17 = v16_.v16;
  v12 = *v11;
  if (v12 != 0) {
    v13 = *(_QWORD*)(v12 + 5640);
    v10 = v16_.v16;
    v21 = v12;
    while (1) {
      (*(void (**)(_QWORD*, __int64*))(*v10 + 48LL))(v10, &v21),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v10 = v16_.v17;
      if (v13 == 0) {
        break;
      }
      v21 = v13;
      v13 = *(_QWORD*)(v13 + 5640);
      if (v16_.v17 == nullptr) {
        goto LABEL_14;
      }
    }
    if (v16_.v17 != v16_.v16) {
      if (v16_.v17 != nullptr) {
        v14 = 40;
      LABEL_19:
        (*(void (**)(_QWORD*, __int64))(*v10 + v14))(v10, v3),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      nn_os_UnlockMutex_alt1(a1 + 5944),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return GameRoutine_119060_alt1();
    }
  }
  v14 = 32;
  goto LABEL_19;
}

__int64 Slot_133580(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  __int64 v11;

  v2 = COERCE_AS(__typeof__(v2),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_119040_alt1(),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 5944),
      v2 = COERCE_AS(__typeof__(v2),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = v9_.v9;
  *(_DWORD*)(a1 + 5912) = 0;
  *(_DWORD*)(a1 + 5920) = 0;
  v9_.v9[0] = GameData_1f58bd8;
  v9_.v9[1] = a1;
  v4 = *(__int64**)(a1 + 5816);
  v9_.v10 = v9_.v9;
  v5 = *v4;
  if (*v4 != 0) {
    do {
      v11 = v5;
      v5 = *(_QWORD*)(v5 + 5640);
      if (v9_.v10 == nullptr) {
        GameRoutine_60a310_alt1(),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v9_.v10 + 48LL))(v9_.v10, &v11),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v5 != 0);
    v3 = v9_.v10;
    if (v9_.v10 != v9_.v9) {
      if (v9_.v10 != nullptr) {
        v6 = 40;
      LABEL_8:
        (*(void (**)(_QWORD*, __int64))(*v3 + v6))(v3, v2),
            v2 = COERCE_AS(__typeof__(v2),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v7 = *(_DWORD*)(a1 + 5912);
      nn_os_UnlockMutex_alt1(a1 + 5944),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      GameRoutine_119060_alt1(),
          v2 = COERCE_AS(__typeof__(v2),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return v7;
    }
  }
  v6 = 32;
  goto LABEL_8;
}

__int64 Slot_133660(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  __int64 v12;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_119040_alt1(),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 5944),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(*(_QWORD*)(a1 + 5848) + a2) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 5848) + a2 + 8) = 0;
  if (**(_QWORD**)(a1 + 5864) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 5848) + *(_QWORD*)(a1 + 5840) + 8LL) = a2;
    *(_QWORD*)(*(_QWORD*)(a1 + 5848) + a2) = **(_QWORD**)(a1 + 5864);
  }
  else {
    *(_QWORD*)(a1 + 5832) = a2;
  }
  v5 = *(_QWORD*)(a1 + 5936);
  *(_QWORD*)(a1 + 5840) = a2;
  v6 = v10_.v10;
  v10_.v11 = v10_.v10;
  *(_QWORD*)(a2 + 5624) = v5;
  *(_DWORD*)(a1 + 5916) = 0;
  *(_DWORD*)(a1 + 5924) = 0;
  *(_QWORD*)(a1 + 5936) = v5 + 1;
  v10_.v10[0] = GameData_1f58c58;
  v10_.v10[1] = a1;
  v7 = **(_QWORD**)(a1 + 5856);
  if (v7 != 0) {
    do {
      v12 = v7;
      v7 = *(_QWORD*)(v7 + 6080);
      if (v10_.v11 == nullptr) {
        GameRoutine_60a310_alt1(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v10_.v11 + 48LL))(v10_.v11, &v12),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v7 != 0);
    v6 = v10_.v11;
    if (v10_.v11 != v10_.v10) {
      if (v10_.v11 != nullptr) {
        v8 = 40;
      LABEL_11:
        (*(void (**)(_QWORD*, __int64))(*v6 + v8))(v6, v4),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      nn_os_UnlockMutex_alt1(a1 + 5944),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return GameRoutine_119060_alt1();
    }
  }
  v8 = 32;
  goto LABEL_11;
}

__int64 Slot_1337a0(__int64 a1, __int64 a2)
{
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  __int64 v20;
  __int64 v21;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = a2;
  GameRoutine_119040_alt1(),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 5944),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = v18_.v18;
  v18_.v18[2] = a1;
  v18_.v18[0] = GameData_1f58cd8;
  v18_.v18[1] = &v20;
  v5 = *(__int64**)(a1 + 5856);
  v18_.v19 = v18_.v18;
  v6 = *v5;
  do {
    if (v6 == 0) {
      break;
    }
    v7 = *(_QWORD*)(v6 + 6080);
    v21 = v6;
    if (v4 == nullptr) {
    LABEL_14:
      GameRoutine_60a310_alt1(),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v8 = (*(__int64 (**)(_QWORD*, __int64*))(*v4 + 48LL))(v4, &v21),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = v18_.v19;
    v6 = v7;
  } while ((v8 & 1) == 0);
  if (v4 == v18_.v18) {
    v9 = 32;
    goto LABEL_9;
  }
  if (v4 != nullptr) {
    v9 = 40;
  LABEL_9:
    (*(void (**)(__int64))(*v4 + v9))((__int64)v4),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v10 = v16_.v16;
  *(_DWORD*)(a1 + 5916) = 0;
  *(_DWORD*)(a1 + 5924) = 0;
  v16_.v16[0] = GameData_1f58d68;
  v16_.v16[1] = a1;
  v11 = *(__int64**)(a1 + 5856);
  v16_.v17 = v16_.v16;
  v12 = *v11;
  if (v12 != 0) {
    v13 = *(_QWORD*)(v12 + 6080);
    v10 = v16_.v16;
    v21 = v12;
    while (1) {
      (*(void (**)(_QWORD*, __int64*))(*v10 + 48LL))(v10, &v21),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v10 = v16_.v17;
      if (v13 == 0) {
        break;
      }
      v21 = v13;
      v13 = *(_QWORD*)(v13 + 6080);
      if (v16_.v17 == nullptr) {
        goto LABEL_14;
      }
    }
    if (v16_.v17 != v16_.v16) {
      if (v16_.v17 != nullptr) {
        v14 = 40;
      LABEL_19:
        (*(void (**)(_QWORD*, __int64))(*v10 + v14))(v10, v3),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      nn_os_UnlockMutex_alt1(a1 + 5944),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return GameRoutine_119060_alt1();
    }
  }
  v14 = 32;
  goto LABEL_19;
}

__int64 Slot_133900(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  __int64 v12;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_119040_alt1(),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 5944),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(*(_QWORD*)(a1 + 5888) + a2) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 5888) + a2 + 8) = 0;
  if (**(_QWORD**)(a1 + 5904) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 5888) + *(_QWORD*)(a1 + 5880) + 8LL) = a2;
    *(_QWORD*)(*(_QWORD*)(a1 + 5888) + a2) = **(_QWORD**)(a1 + 5904);
  }
  else {
    *(_QWORD*)(a1 + 5872) = a2;
  }
  v5 = *(_QWORD*)(a1 + 5936);
  *(_QWORD*)(a1 + 5880) = a2;
  v6 = v10_.v10;
  v10_.v11 = v10_.v10;
  *(_QWORD*)(a2 + 5624) = v5;
  *(_QWORD*)(a1 + 5928) = 0;
  *(_QWORD*)(a1 + 5936) = v5 + 1;
  v10_.v10[0] = GameData_1f58de8;
  v10_.v10[1] = a1;
  v7 = **(_QWORD**)(a1 + 5896);
  if (v7 != 0) {
    do {
      v12 = v7;
      v7 = *(_QWORD*)(v7 + 6080);
      if (v10_.v11 == nullptr) {
        GameRoutine_60a310_alt1(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v10_.v11 + 48LL))(v10_.v11, &v12),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v7 != 0);
    v6 = v10_.v11;
    if (v10_.v11 != v10_.v10) {
      if (v10_.v11 != nullptr) {
        v8 = 40;
      LABEL_11:
        (*(void (**)(_QWORD*, __int64))(*v6 + v8))(v6, v4),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      nn_os_UnlockMutex_alt1(a1 + 5944),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return GameRoutine_119060_alt1();
    }
  }
  v8 = 32;
  goto LABEL_11;
}

__int64 Slot_133a40(__int64 a1, __int64 a2)
{
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  __int64 v20;
  __int64 v21;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = a2;
  GameRoutine_119040_alt1(),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1(a1 + 5944),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = v18_.v18;
  v18_.v18[2] = a1;
  v18_.v18[0] = GameData_1f58e68;
  v18_.v18[1] = &v20;
  v5 = *(__int64**)(a1 + 5896);
  v18_.v19 = v18_.v18;
  v6 = *v5;
  do {
    if (v6 == 0) {
      break;
    }
    v7 = *(_QWORD*)(v6 + 6080);
    v21 = v6;
    if (v4 == nullptr) {
    LABEL_14:
      GameRoutine_60a310_alt1(),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v8 = (*(__int64 (**)(_QWORD*, __int64*))(*v4 + 48LL))(v4, &v21),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = v18_.v19;
    v6 = v7;
  } while ((v8 & 1) == 0);
  if (v4 == v18_.v18) {
    v9 = 32;
    goto LABEL_9;
  }
  if (v4 != nullptr) {
    v9 = 40;
  LABEL_9:
    (*(void (**)(__int64))(*v4 + v9))((__int64)v4),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v10 = v16_.v16;
  *(_QWORD*)(a1 + 5928) = 0;
  v16_.v16[0] = GameData_1f58ef8;
  v16_.v16[1] = a1;
  v11 = *(__int64**)(a1 + 5896);
  v16_.v17 = v16_.v16;
  v12 = *v11;
  if (v12 != 0) {
    v13 = *(_QWORD*)(v12 + 6080);
    v10 = v16_.v16;
    v21 = v12;
    while (1) {
      (*(void (**)(_QWORD*, __int64*))(*v10 + 48LL))(v10, &v21),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v10 = v16_.v17;
      if (v13 == 0) {
        break;
      }
      v21 = v13;
      v13 = *(_QWORD*)(v13 + 6080);
      if (v16_.v17 == nullptr) {
        goto LABEL_14;
      }
    }
    if (v16_.v17 != v16_.v16) {
      if (v16_.v17 != nullptr) {
        v14 = 40;
      LABEL_19:
        (*(void (**)(_QWORD*, __int64))(*v10 + v14))(v10, v3),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      nn_os_UnlockMutex_alt1(a1 + 5944),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return GameRoutine_119060_alt1();
    }
  }
  v14 = 32;
  goto LABEL_19;
}

__int64 snd_Slot_checkPriority_1340a0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 (***v7)();
  __int64* v8;
  __int64 (**v9)();
  __int64 (***v10)();
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 (***v14)();
  __int64* v15;
  __int64 (**v16)();
  __int64 (***v17)();
  __int64 v18;
  __int64 (**v19)();
  __int64 v20;
  float* v21;
  float (*v22)(void);
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  const char* v39;
  _QWORD* v40;
  __int64 (***v41)();
  __int64* v42;
  __int64 (**v43)();
  __int64 (***v44)();
  __int64 v45;
  __int64 (**v46)();
  __int64 v47;
  __int64 (***v48)();
  __int64* v49;
  __int64 (**v50)();
  __int64 (***v51)();
  __int64 v52;
  __int64 (**v53)();
  __int64 v54;
  __int64 v55;
  const char* v56;
  bool v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  const char* v65;
  int v66;
  bool v67;
  __int64 v68;
  const char* v69;
  _QWORD* v70;
  __int64 v71;
  unsigned int v72;
  const char* v73;
  int v74;
  struct {
    _QWORD v76[4];
    _QWORD* v77;
  } v76_;
  _QWORD v78[25];
  struct {
    _QWORD v79[4];
    _QWORD* v80;
  } v79_;
  struct {
    _QWORD v81[4];
    _QWORD* v82;
  } v81_;
  __int64 v83;
  __int64 v84;
  int v85;
  __int64 v86;
  __int64 v87[2];

  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v60 = COERCE_AS(__typeof__(v60),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v87[0] = a2;
  nn_os_LockMutex(a1 + 5944),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v4 = *(_QWORD*)(a2 + 5648);
  v5 = *(_QWORD*)(a2 + 5656);
  v85 = 0;
  v6 = *(float*)(v4 + 200);
  v86 = v5;
  if (v6 > 0x0.0p+0f) {
    v83 = 0;
    v84 = 0;
    v7 = (__int64 (***)(void))GameRoutine_651190_alt1(48),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v8 = *(__int64**)(a1 + 5816);
    v9 = GameData_1f58f78;
    v10 = v7;
    *v7 = GameData_1f58f78;
    v7[1] = (__int64 (**)(void))&v86,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v7[2] = (__int64 (**)(void))&v85,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v7[3] = (__int64 (**)(void))v87,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v7[4] = (__int64 (**)(void))&v84,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v7[5] = (__int64 (**)(void))&v83,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v11 = *v8;
    if (v11 != 0) {
      do {
        v12 = *v10;
        v13 = *(_QWORD*)(v11 + 5640);
        v78[0] = v11;
        ((void (*)(__int64 (***)(void), _QWORD*))v12[6])(v10, v78),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v60 = COERCE_AS(__typeof__(v60),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v11 = v13;
      } while (v13 != 0);
      v9 = *v10;
    }
    ((void (*)(__int64 (***)(void)))v9[5])(v10),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v14 = (__int64 (***)(void))GameRoutine_651190_alt1(48),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v15 = *(__int64**)(a1 + 5856);
    v16 = GameData_1f58ff8;
    v14[2] = (__int64 (**)(void))&v85,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v14[3] = (__int64 (**)(void))v87,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v14[4] = (__int64 (**)(void))&v84,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v14[5] = (__int64 (**)(void))&v83,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v17 = v14;
    *v14 = GameData_1f58ff8;
    v14[1] = (__int64 (**)(void))&v86,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v18 = *v15;
    if (v18 != 0) {
      do {
        v19 = *v17;
        v20 = *(_QWORD*)(v18 + 6080);
        v78[0] = v18;
        ((void (*)(__int64 (***)(void), _QWORD*))v19[6])(v17, v78),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v60 = COERCE_AS(__typeof__(v60),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v18 = v20;
      } while (v20 != 0);
      v16 = *v17;
    }
    ((void (*)(__int64 (***)(void)))v16[5])(v17),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v83 == 0) {
      goto LABEL_19;
    }
    v21 = *(float**)(v83 + 5648);
    v22 = *(float (**)(void))(*(_QWORD*)(v83 + 40) + 1088LL),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (*(_BYTE*)(v83 + 5889) == 1) {
      v23 = *(_QWORD*)(v83 + 6096);
      if (((float (*)(__int64))v22)(v83 + 40) >=
          (float)(v21[50] / 0x1.0aac080000000p+4f)) {
        if (v21[52] > 0x0.0p+0f &&
            (*(float (**)(__int64))(*(_QWORD*)(v83 + 40) + 1088LL))(v83 + 40) <
                (float)(v21[52] / 0x1.0aac080000000p+4f)) {
          v24 = v87[0];
          *(float*)(v23 + 80) = *(float*)(v23 + 80) +
                                (float)((float)(v21[53] - *(float*)(v23 + 80)) *
                                        0x1.0000000000000p-2f);
        LABEL_18:
          v27 = *(_QWORD*)(v24 + 40);
          v26 = v24 + 40;
          (*(void (**)(__int64))(v27 + 432))(v26),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          (*(void (**)(__int64, float))(*(_QWORD*)v26 + 448LL))(v26, v21[54]),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        LABEL_20:
          v28 = v86;
          *(_BYTE*)(v86 + 88) = 0;
          *(_BYTE*)(v28 + 96) = 0;
          goto LABEL_21;
        }
        goto LABEL_19;
      }
      GameRoutine_133ba0(a1, v87[0], v23 + 88, (__int64)v21, v83),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v69 = "#SoundLibrary warning : SeqVoice Decimation Priority : %s\n";
    }
    else {
      v25 = *(_QWORD*)(v83 + 5656);
      if (((float (*)(__int64))v22)(v83 + 40) >=
          (float)(v21[50] / 0x1.0aac080000000p+4f)) {
        if (v21[52] > 0x0.0p+0f &&
            (*(float (**)(__int64))(*(_QWORD*)(v83 + 40) + 1088LL))(v83 + 40) <
                (float)(v21[52] / 0x1.0aac080000000p+4f)) {
          v24 = v87[0];
          *(float*)(v25 + 32) = *(float*)(v25 + 32) +
                                (float)((float)(v21[53] - *(float*)(v25 + 32)) *
                                        0x1.0000000000000p-2f);
          goto LABEL_18;
        }
      LABEL_19:
        *(_DWORD*)(v86 + 32) = 1065353216;
        goto LABEL_20;
      }
      GameRoutine_133ba0(a1, v87[0], v25 + 40, (__int64)v21, v83),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v69 = "#SoundLibrary warning : Voice Decimation Priority : %s\n";
    }
    v70 = *(_QWORD**)snd_g_proxy_ptr[0];
    v71 = GameRoutine_190240_alt1(v87[0] + 5680),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v37 = *v70;
    v38 = v71;
    v40 = v70;
    v39 = v69;
    goto LABEL_68;
  }
LABEL_21:
  if ((*(_DWORD*)(v4 + 156) & 0x80000000) != 0) {
    goto LABEL_51;
  }
  if (v85 != 0) {
    goto LABEL_39;
  }
  v29 = v81_.v81;
  v81_.v81[0] = GameData_1f59078;
  v81_.v81[1] = &v86;
  v81_.v82 = v81_.v81;
  v81_.v81[2] = &v85;
  v30 = **(_QWORD**)(a1 + 5816);
  if (v30 == 0) {
    goto LABEL_29;
  }
  do {
    v78[0] = v30;
    v30 = *(_QWORD*)(v30 + 5640);
    if (v81_.v82 == nullptr) {
    LABEL_74:
      GameRoutine_60a310_alt1(),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    (*(void (**)(_QWORD*, _QWORD*))(*v81_.v82 + 48LL))(v81_.v82, v78),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  } while (v30 != 0);
  v29 = v81_.v82;
  if (v81_.v82 == v81_.v81) {
  LABEL_29:
    v31 = 32;
  }
  else {
    if (v81_.v82 == nullptr) {
      goto LABEL_31;
    }
    v31 = 40;
  }
  (*(void (**)(__int64))(*v29 + v31))((__int64)v29),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_31:
  v32 = v79_.v79;
  v79_.v79[0] = GameData_1f590f8;
  v79_.v79[1] = &v86;
  v79_.v80 = v79_.v79;
  v79_.v79[2] = &v85;
  v33 = **(_QWORD**)(a1 + 5856);
  if (v33 == 0) {
    goto LABEL_37;
  }
  do {
    v78[0] = v33;
    v33 = *(_QWORD*)(v33 + 6080);
    if (v79_.v80 == nullptr) {
      goto LABEL_74;
    }
    (*(void (**)(_QWORD*, _QWORD*))(*v79_.v80 + 48LL))(v79_.v80, v78),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  } while (v33 != 0);
  v32 = v79_.v80;
  if (v79_.v80 == v79_.v79) {
  LABEL_37:
    v34 = 32;
  }
  else {
    if (v79_.v80 == nullptr) {
      goto LABEL_39;
    }
    v34 = 40;
  }
  (*(void (**)(__int64))(*v32 + v34))((__int64)v32),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_39:
  if (v85 <= *(_DWORD*)(v4 + 156)) {
    goto LABEL_51;
  }
  if (*(_DWORD*)(v4 + 192) == 0) {
    v83 = 0;
    v84 = -1;
    v41 = (__int64 (***)(void))GameRoutine_651190_alt1(40),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v42 = *(__int64**)(a1 + 5816);
    v43 = GameData_1f59178;
    v44 = v41;
    *v41 = GameData_1f59178;
    v41[1] = (__int64 (**)(void))&v86,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v41[2] = (__int64 (**)(void))v87,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v41[3] = (__int64 (**)(void))&v84,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v41[4] = (__int64 (**)(void))&v83,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v45 = *v42;
    if (v45 != 0) {
      do {
        v46 = *v44;
        v47 = *(_QWORD*)(v45 + 5640);
        v78[0] = v45;
        ((void (*)(__int64 (***)(void), _QWORD*))v46[6])(v44, v78),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v60 = COERCE_AS(__typeof__(v60),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v45 = v47;
      } while (v47 != 0);
      v43 = *v44;
    }
    ((void (*)(__int64 (***)(void)))v43[5])(v44),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v48 = (__int64 (***)(void))GameRoutine_651190_alt1(40),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v49 = *(__int64**)(a1 + 5856);
    v50 = GameData_1f591f8;
    v48[2] = (__int64 (**)(void))v87,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v48[3] = (__int64 (**)(void))&v84,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v48[4] = (__int64 (**)(void))&v83,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v51 = v48;
    *v48 = GameData_1f591f8;
    v48[1] = (__int64 (**)(void))&v86,
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v52 = *v49;
    if (v52 != 0) {
      do {
        v53 = *v51;
        v54 = *(_QWORD*)(v52 + 6080);
        v78[0] = v52;
        ((void (*)(__int64 (***)(void), _QWORD*))v53[6])(v51, v78),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v60 = COERCE_AS(__typeof__(v60),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v52 = v54;
      } while (v54 != 0);
      v50 = *v51;
    }
    ((void (*)(__int64 (***)(void)))v50[5])(v51),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v83 != 0) {
      v55 = snd_g_proxy;
      v56 = (const char*)GameRoutine_190240_alt1(v83 + 5680),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v55 + 384LL))(
          v55, "#SoundLibrary warning : Voice Stop LowPriority : %s\n", v56),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v57 = snd_Voice_hasSends(v83),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v58 = v83;
      if (!v57) {
        (*(void (**)(__int64))(*(_QWORD*)v83 + 264LL))(v83),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v60 = COERCE_AS(__typeof__(v60),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if ((*(_DWORD*)(a1 + 5668) & 0x80000000) != 0) {
          goto LABEL_72;
        }
        goto LABEL_52;
      }
      snd_Fade_Fade_10c830((__int64)v78, 0x0.0p+0f),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      (*(void (**)(__int64, _QWORD*, _QWORD, double))(*(_QWORD*)v58 + 248LL))(
          v58, v78, 0, 0x0.0p+0),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      snd_Fade_Destroy_Fade_alt2(v78),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  LABEL_51:
    if ((*(_DWORD*)(a1 + 5668) & 0x80000000) != 0) {
      goto LABEL_72;
    }
  LABEL_52:
    if ((int)Slot_133580(a1) <= *(_DWORD*)(a1 + 5668)) {
      goto LABEL_72;
    }
    v61 = v76_.v76;
    LODWORD(v83) = 0;
    v76_.v77 = v76_.v76;
    v84 = v87[0];
    v76_.v76[0] = GameData_1f59278;
    v76_.v76[1] = &v84;
    v76_.v76[2] = &v83;
    v62 = **(_QWORD**)(a1 + 5816);
    if (v62 == 0) {
      goto LABEL_59;
    }
    do {
      v78[0] = v62;
      v62 = *(_QWORD*)(v62 + 5640);
      if (v76_.v77 == nullptr) {
        goto LABEL_74;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v76_.v77 + 48LL))(v76_.v77, v78),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    } while (v62 != 0);
    v61 = v76_.v77;
    if (v76_.v77 == v76_.v76) {
    LABEL_59:
      v63 = 32;
    }
    else {
      if (v76_.v77 == nullptr) {
        goto LABEL_61;
      }
      v63 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v61 + v63))(v61, v59, v60),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  LABEL_61:
    if ((_DWORD)v83 != 0) {
      v64 = *(_QWORD*)snd_g_proxy_ptr[0];
      if (v84 == v87[0]) {
        v73 = (const char*)GameRoutine_190240_alt1(v87[0] + 5680),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v74 = (*(__int64 (**)(__int64))(*(_QWORD*)(v87[0] + 40) + 344LL))(
            v87[0] + 40),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v64 + 384LL))(
            v64, "#SoundLibrary warning : Slot LowPriority : %s : %d\n", v73,
            v74),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v60 = COERCE_AS(__typeof__(v60),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v72 = 0;
        goto LABEL_73;
      }
      v65 = (const char*)GameRoutine_190240_alt1(v84 + 5680),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v66 = (*(__int64 (**)(__int64))(*(_QWORD*)(v84 + 40) + 344LL))(v84 + 40),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v64 + 384LL))(
          v64,
          "#SoundLibrary warning : Slot Voice Stop LowPriority : %s : %d\n",
          v65, v66),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v67 = snd_Voice_hasSends(v84),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v68 = v84;
      if (v67) {
        snd_Fade_Fade_10c830((__int64)v78, 0x0.0p+0f),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v60 = COERCE_AS(__typeof__(v60),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        (*(void (**)(__int64, _QWORD*, _QWORD, double))(*(_QWORD*)v68 + 248LL))(
            v68, v78, 0, 0x0.0p+0),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v60 = COERCE_AS(__typeof__(v60),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        snd_Fade_Destroy_Fade_alt2(v78),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v60 = COERCE_AS(__typeof__(v60),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v84 + 264LL))(v84),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v60 = COERCE_AS(__typeof__(v60),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
  LABEL_72:
    v72 = 1;
    goto LABEL_73;
  }
  v35 = *(_QWORD**)snd_g_proxy_ptr[0];
  v36 = GameRoutine_190240_alt1(v87[0] + 5680),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v60 = COERCE_AS(__typeof__(v60),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v37 = *v35;
  v38 = v36;
  v39 = "#SoundLibrary warning : Voice First Priority : %s\n";
  v40 = v35;
LABEL_68:
  (*(void (**)(_QWORD*, const char*, __int64))(v37 + 384))(v40, v39, v38),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v72 = 0;
LABEL_73:
  nn_os_UnlockMutex(a1 + 5944),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  return v72;
}

__int64 snd_Slot_checkPriority_134880(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 (***v7)();
  __int64* v8;
  __int64 (**v9)();
  __int64 (***v10)();
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64 (***v14)();
  __int64* v15;
  __int64 (**v16)();
  __int64 (***v17)();
  __int64 v18;
  __int64 (**v19)();
  __int64 v20;
  float* v21;
  float (*v22)(void);
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  const char* v38;
  __int64 v39;
  __int64 (***v40)();
  __int64* v41;
  __int64 (**v42)();
  __int64 (***v43)();
  __int64 v44;
  __int64 (**v45)();
  __int64 v46;
  __int64 (***v47)();
  __int64* v48;
  __int64 (**v49)();
  __int64 (***v50)();
  __int64 v51;
  __int64 (**v52)();
  __int64 v53;
  __int64 v54;
  const char* v55;
  bool v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  const char* v64;
  int v65;
  bool v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned int v72;
  const char* v73;
  int v74;
  struct {
    _QWORD v76[4];
    _QWORD* v77;
  } v76_;
  _QWORD v78[25];
  struct {
    _QWORD v79[4];
    _QWORD* v80;
  } v79_;
  struct {
    _QWORD v81[4];
    _QWORD* v82;
  } v81_;
  __int64 v83;
  __int64 v84;
  int v85;
  __int64 v86;
  _QWORD v87[2];

  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v87[0] = a2;
  nn_os_LockMutex(a1 + 5944),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v4 = *(_QWORD*)(a2 + 5648);
  v5 = *(_QWORD*)(a2 + 6096);
  v85 = 0;
  v6 = *(float*)(v4 + 200);
  v86 = v5;
  if (v6 > 0x0.0p+0f) {
    v83 = 0;
    v84 = 0;
    v7 = (__int64 (***)(void))GameRoutine_651190_alt1(48),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v8 = *(__int64**)(a1 + 5816);
    v9 = GameData_1f592f8;
    v10 = v7;
    *v7 = GameData_1f592f8;
    v7[1] = (__int64 (**)(void))&v86,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v7[2] = (__int64 (**)(void))&v85,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v7[3] = (__int64 (**)(void))v87,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v7[4] = (__int64 (**)(void))&v84,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v7[5] = (__int64 (**)(void))&v83,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v11 = *v8;
    if (v11 != 0) {
      do {
        v12 = *v10;
        v13 = *(_QWORD*)(v11 + 5640);
        v78[0] = v11;
        ((void (*)(__int64 (***)(void), _QWORD*))v12[6])(v10, v78),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v11 = v13;
      } while (v13 != 0);
      v9 = *v10;
    }
    ((void (*)(__int64 (***)(void)))v9[5])(v10),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v14 = (__int64 (***)(void))GameRoutine_651190_alt1(48),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v15 = *(__int64**)(a1 + 5856);
    v16 = GameData_1f59378;
    v14[2] = (__int64 (**)(void))&v85,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v14[3] = (__int64 (**)(void))v87,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v14[4] = (__int64 (**)(void))&v84,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v14[5] = (__int64 (**)(void))&v83,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v17 = v14;
    *v14 = GameData_1f59378;
    v14[1] = (__int64 (**)(void))&v86,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v18 = *v15;
    if (v18 != 0) {
      do {
        v19 = *v17;
        v20 = *(_QWORD*)(v18 + 6080);
        v78[0] = v18;
        ((void (*)(__int64 (***)(void), _QWORD*))v19[6])(v17, v78),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v18 = v20;
      } while (v20 != 0);
      v16 = *v17;
    }
    ((void (*)(__int64 (***)(void)))v16[5])(v17),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v83 == 0) {
      goto LABEL_19;
    }
    v21 = *(float**)(v83 + 5648);
    v22 = *(float (**)(void))(*(_QWORD*)(v83 + 40) + 1088LL),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (*(_BYTE*)(v83 + 5889) == 1) {
      v23 = *(_QWORD*)(v83 + 6096);
      if (((float (*)(__int64))v22)(v83 + 40) >=
          (float)(v21[50] / 0x1.0aac080000000p+4f)) {
        if (v21[52] > 0x0.0p+0f &&
            (*(float (**)(__int64))(*(_QWORD*)(v83 + 40) + 1088LL))(v83 + 40) <
                (float)(v21[52] / 0x1.0aac080000000p+4f)) {
          v24 = v87[0];
          *(float*)(v23 + 80) = *(float*)(v23 + 80) +
                                (float)((float)(v21[53] - *(float*)(v23 + 80)) *
                                        0x1.0000000000000p-2f);
        LABEL_18:
          v27 = *(_QWORD*)(v24 + 40);
          v26 = v24 + 40;
          (*(void (**)(__int64))(v27 + 432))(v26),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          (*(void (**)(__int64, float))(*(_QWORD*)v26 + 448LL))(v26, v21[54]),
              v58 = COERCE_AS(__typeof__(v58),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v59 = COERCE_AS(__typeof__(v59),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        LABEL_20:
          v28 = v86;
          *(_BYTE*)(v86 + 136) = 0;
          *(_BYTE*)(v28 + 144) = 0;
          goto LABEL_21;
        }
        goto LABEL_19;
      }
      v68 = v87[0];
      v69 = v83;
      v70 = v23 + 88;
    }
    else {
      v25 = *(_QWORD*)(v83 + 5656);
      if (((float (*)(__int64))v22)(v83 + 40) >=
          (float)(v21[50] / 0x1.0aac080000000p+4f)) {
        if (v21[52] > 0x0.0p+0f &&
            (*(float (**)(__int64))(*(_QWORD*)(v83 + 40) + 1088LL))(v83 + 40) <
                (float)(v21[52] / 0x1.0aac080000000p+4f)) {
          v24 = v87[0];
          *(float*)(v25 + 32) = *(float*)(v25 + 32) +
                                (float)((float)(v21[53] - *(float*)(v25 + 32)) *
                                        0x1.0000000000000p-2f);
          goto LABEL_18;
        }
      LABEL_19:
        *(_DWORD*)(v86 + 80) = 1065353216;
        goto LABEL_20;
      }
      v68 = v87[0];
      v69 = v83;
      v70 = v25 + 40;
    }
    GameRoutine_133ba0(a1, v68, v70, (__int64)v21, v69),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v35 = *(__int64**)snd_g_proxy_ptr[0];
    v71 = GameRoutine_190240_alt1(v87[0] + 5680LL),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v37 = *v35;
    v39 = v71;
    v38 = "#SoundLibrary warning : SeqVoice Decimation Priority : %s\n";
    goto LABEL_68;
  }
LABEL_21:
  if ((*(_DWORD*)(v4 + 156) & 0x80000000) != 0) {
    goto LABEL_51;
  }
  if (v85 != 0) {
    goto LABEL_39;
  }
  v29 = v81_.v81;
  v81_.v81[0] = GameData_1f593f8;
  v81_.v81[1] = &v86;
  v81_.v82 = v81_.v81;
  v81_.v81[2] = &v85;
  v30 = **(_QWORD**)(a1 + 5816);
  if (v30 == 0) {
    goto LABEL_29;
  }
  do {
    v78[0] = v30;
    v30 = *(_QWORD*)(v30 + 5640);
    if (v81_.v82 == nullptr) {
    LABEL_74:
      GameRoutine_60a310_alt1(),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    (*(void (**)(_QWORD*, _QWORD*))(*v81_.v82 + 48LL))(v81_.v82, v78),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  } while (v30 != 0);
  v29 = v81_.v82;
  if (v81_.v82 == v81_.v81) {
  LABEL_29:
    v31 = 32;
  }
  else {
    if (v81_.v82 == nullptr) {
      goto LABEL_31;
    }
    v31 = 40;
  }
  (*(void (**)(__int64))(*v29 + v31))((__int64)v29),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_31:
  v32 = v79_.v79;
  v79_.v79[0] = GameData_1f59478;
  v79_.v79[1] = &v86;
  v79_.v80 = v79_.v79;
  v79_.v79[2] = &v85;
  v33 = **(_QWORD**)(a1 + 5856);
  if (v33 == 0) {
    goto LABEL_37;
  }
  do {
    v78[0] = v33;
    v33 = *(_QWORD*)(v33 + 6080);
    if (v79_.v80 == nullptr) {
      goto LABEL_74;
    }
    (*(void (**)(_QWORD*, _QWORD*))(*v79_.v80 + 48LL))(v79_.v80, v78),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  } while (v33 != 0);
  v32 = v79_.v80;
  if (v79_.v80 == v79_.v79) {
  LABEL_37:
    v34 = 32;
  }
  else {
    if (v79_.v80 == nullptr) {
      goto LABEL_39;
    }
    v34 = 40;
  }
  (*(void (**)(__int64))(*v32 + v34))((__int64)v32),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_39:
  if (v85 <= *(_DWORD*)(v4 + 156)) {
    goto LABEL_51;
  }
  if (*(_DWORD*)(v4 + 192) == 0) {
    v83 = 0;
    v84 = -1;
    v40 = (__int64 (***)(void))GameRoutine_651190_alt1(40),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v41 = *(__int64**)(a1 + 5816);
    v42 = GameData_1f594f8;
    v43 = v40;
    *v40 = GameData_1f594f8;
    v40[1] = (__int64 (**)(void))&v86,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v40[2] = (__int64 (**)(void))v87,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v40[3] = (__int64 (**)(void))&v84,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v40[4] = (__int64 (**)(void))&v83,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v44 = *v41;
    if (v44 != 0) {
      do {
        v45 = *v43;
        v46 = *(_QWORD*)(v44 + 5640);
        v78[0] = v44;
        ((void (*)(__int64 (***)(void), _QWORD*))v45[6])(v43, v78),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v44 = v46;
      } while (v46 != 0);
      v42 = *v43;
    }
    ((void (*)(__int64 (***)(void)))v42[5])(v43),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v47 = (__int64 (***)(void))GameRoutine_651190_alt1(40),
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v48 = *(__int64**)(a1 + 5856);
    v49 = GameData_1f59578;
    v47[2] = (__int64 (**)(void))v87,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v47[3] = (__int64 (**)(void))&v84,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v47[4] = (__int64 (**)(void))&v83,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v50 = v47;
    *v47 = GameData_1f59578;
    v47[1] = (__int64 (**)(void))&v86,
    v58 = COERCE_AS(__typeof__(v58),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v51 = *v48;
    if (v51 != 0) {
      do {
        v52 = *v50;
        v53 = *(_QWORD*)(v51 + 6080);
        v78[0] = v51;
        ((void (*)(__int64 (***)(void), _QWORD*))v52[6])(v50, v78),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v51 = v53;
      } while (v53 != 0);
      v49 = *v50;
    }
    ((void (*)(__int64 (***)(void)))v49[5])(v50),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v83 != 0) {
      v54 = snd_g_proxy;
      v55 = (const char*)GameRoutine_190240_alt1(v83 + 5680),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v54 + 384LL))(
          v54, "#SoundLibrary warning : SeqVoice Stop LowPriority : %s\n", v55),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v56 = snd_Voice_hasSends(v83),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v57 = v83;
      if (!v56) {
        (*(void (**)(__int64))(*(_QWORD*)v83 + 264LL))(v83),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        if ((*(_DWORD*)(a1 + 5668) & 0x80000000) != 0) {
          goto LABEL_72;
        }
        goto LABEL_52;
      }
      snd_Fade_Fade_10c830((__int64)v78, 0x0.0p+0f),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      (*(void (**)(__int64, _QWORD*, _QWORD, double))(*(_QWORD*)v57 + 248LL))(
          v57, v78, 0, 0x0.0p+0),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      snd_Fade_Destroy_Fade_alt2(v78),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
  LABEL_51:
    if ((*(_DWORD*)(a1 + 5668) & 0x80000000) != 0) {
      goto LABEL_72;
    }
  LABEL_52:
    if ((int)Slot_133580(a1) <= *(_DWORD*)(a1 + 5668)) {
      goto LABEL_72;
    }
    v60 = v76_.v76;
    LODWORD(v83) = 0;
    v76_.v77 = v76_.v76;
    v84 = v87[0];
    v76_.v76[0] = GameData_1f595f8;
    v76_.v76[1] = &v84;
    v76_.v76[2] = &v83;
    v61 = **(_QWORD**)(a1 + 5816);
    if (v61 == 0) {
      goto LABEL_59;
    }
    do {
      v78[0] = v61;
      v61 = *(_QWORD*)(v61 + 5640);
      if (v76_.v77 == nullptr) {
        goto LABEL_74;
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v76_.v77 + 48LL))(v76_.v77, v78),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    } while (v61 != 0);
    v60 = v76_.v77;
    if (v76_.v77 == v76_.v76) {
    LABEL_59:
      v62 = 32;
    }
    else {
      if (v76_.v77 == nullptr) {
        goto LABEL_61;
      }
      v62 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v60 + v62))(v60, v58, v59),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  LABEL_61:
    if ((_DWORD)v83 != 0) {
      v63 = *(_QWORD*)snd_g_proxy_ptr[0];
      if (v84 == v87[0]) {
        v73 = (const char*)GameRoutine_190240_alt1(v87[0] + 5680LL),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v74 = (*(__int64 (**)(__int64))(*(_QWORD*)(v87[0] + 40LL) + 344LL))(
            v87[0] + 40LL),
        v58 = COERCE_AS(__typeof__(v58),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v63 + 384LL))(
            v63, "#SoundLibrary warning : Slot LowPriority : %s : %d\n", v73,
            v74),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v72 = 0;
        goto LABEL_73;
      }
      v64 = (const char*)GameRoutine_190240_alt1(v84 + 5680),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v65 = (*(__int64 (**)(__int64))(*(_QWORD*)(v84 + 40) + 344LL))(v84 + 40),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v63 + 384LL))(
          v63,
          "#SoundLibrary warning : Slot SeqVoice Stop LowPriority : %s : %d\n",
          v64, v65),
          v58 = COERCE_AS(__typeof__(v58),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v59 = COERCE_AS(__typeof__(v59),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v66 = snd_Voice_hasSends(v84),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v67 = v84;
      if (v66) {
        snd_Fade_Fade_10c830((__int64)v78, 0x0.0p+0f),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        (*(void (**)(__int64, _QWORD*, _QWORD, double))(*(_QWORD*)v67 + 248LL))(
            v67, v78, 0, 0x0.0p+0),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        snd_Fade_Destroy_Fade_alt2(v78),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v84 + 264LL))(v84),
            v58 = COERCE_AS(__typeof__(v58),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v59 = COERCE_AS(__typeof__(v59),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
    }
  LABEL_72:
    v72 = 1;
    goto LABEL_73;
  }
  v35 = *(__int64**)snd_g_proxy_ptr[0];
  v36 = GameRoutine_190240_alt1(v87[0] + 5680LL),
  v58 = COERCE_AS(__typeof__(v58),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v37 = *v35;
  v38 = "#SoundLibrary warning : SeqVoice First Priority : %s\n";
  v39 = v36;
LABEL_68:
  (*(void (**)(__int64*, const char*, __int64))(v37 + 384))(v35, v38, v39),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v72 = 0;
LABEL_73:
  nn_os_UnlockMutex(a1 + 5944),
      v58 = COERCE_AS(__typeof__(v58),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  return v72;
}

__int64 snd_Slot_checkPriority_135040(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  float v6;
  __int64 (***v7)();
  __int64 (**v8)();
  __int64 (***v9)();
  __int64 v10;
  __int64 (**v11)();
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  __int64 (***v23)();
  __int64 (**v24)();
  __int64 (***v25)();
  __int64 v26;
  __int64 (**v27)();
  __int64 v28;
  __int64 v29;
  const char* v30;
  bool v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  const char* v38;
  bool v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  struct {
    _QWORD v44[4];
    _QWORD* v45;
  } v44_;
  _QWORD v46[25];
  struct {
    _QWORD v47[4];
    _QWORD* v48;
  } v47_;
  _QWORD* v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;

  v33 = COERCE_AS(__typeof__(v33),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v53 = a2;
  nn_os_LockMutex(a1 + 5944),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v4 = *(_QWORD*)(a2 + 5648);
  v5 = *(_QWORD*)(a2 + 6096);
  v51 = 0;
  v6 = *(float*)(v4 + 200);
  v52 = v5;
  if (v6 > 0x0.0p+0f) {
    v49 = nullptr;
    v50 = 0;
    v7 = (__int64 (***)(void))GameRoutine_651190_alt1(48),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v8 = GameData_1f59678;
    v9 = v7;
    *v7 = GameData_1f59678;
    v7[1] = (__int64 (**)(void))&v52,
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v7[2] = (__int64 (**)(void))&v51,
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v7[3] = (__int64 (**)(void))&v53,
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v7[4] = (__int64 (**)(void))&v50,
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v7[5] = (__int64 (**)(void))&v49,
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v10 = **(_QWORD**)(a1 + 5896);
    if (v10 != 0) {
      do {
        v11 = *v9;
        v12 = *(_QWORD*)(v10 + 6080);
        v46[0] = v10;
        ((void (*)(__int64 (***)(void), _QWORD*))v11[6])(v9, v46),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v10 = v12;
      } while (v12 != 0);
      v8 = *v9;
    }
    ((void (*)(__int64 (***)(void)))v8[5])(v9),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v49 != nullptr) {
      v13 = v49[706];
      if ((*(float (**)(void*))(v49[5] + 1088LL))((void*)&v49[5]) <
          (float)(*(float*)(v13 + 200) / 0x1.0aac080000000p+4f)) {
        v17 = *(_QWORD*)snd_g_proxy_ptr[0];
        v18 = GameRoutine_190240_alt1(v53 + 5680),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v19 = *(_QWORD*)v17;
        v20 = v18;
        v21 = "#SoundLibrary warning : VibVoice Decimation Priority : %s\n";
      LABEL_44:
        (*(void (**)(__int64, const char*, __int64))(v19 + 384))(v17, v21, v20),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v42 = 0;
      LABEL_48:
        nn_os_UnlockMutex(a1 + 5944),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        return v42;
      }
    }
  }
  if ((*(_DWORD*)(v4 + 156) & 0x80000000) != 0) {
    goto LABEL_29;
  }
  if (v51 == 0) {
    v14 = v47_.v47;
    v47_.v47[0] = GameData_1f596f8;
    v47_.v47[1] = &v52;
    v47_.v48 = v47_.v47;
    v47_.v47[2] = &v51;
    v15 = **(_QWORD**)(a1 + 5896);
    if (v15 == 0) {
      goto LABEL_16;
    }
    do {
      v46[0] = v15;
      v15 = *(_QWORD*)(v15 + 6080);
      if (v47_.v48 == nullptr) {
      LABEL_49:
        GameRoutine_60a310_alt1(),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      (*(void (**)(_QWORD*, _QWORD*))(*v47_.v48 + 48LL))(v47_.v48, v46),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    } while (v15 != 0);
    v14 = v47_.v48;
    if (v47_.v48 == v47_.v47) {
    LABEL_16:
      v16 = 32;
    }
    else {
      if (v47_.v48 == nullptr) {
        goto LABEL_18;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v14 + v16))((__int64)v14),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
LABEL_18:
  if (v51 > *(_DWORD*)(*(_QWORD*)(v53 + 5648) + 156LL)) {
    if (*(_DWORD*)(v4 + 192) != 0) {
      v17 = snd_g_proxy;
      v22 = GameRoutine_190240_alt1(v53 + 5680),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v19 = *(_QWORD*)v17;
      v21 = "#SoundLibrary warning : VibVoice First Priority : %s\n";
      v20 = v22;
      goto LABEL_44;
    }
    v49 = nullptr;
    v50 = -1;
    v23 = (__int64 (***)(void))GameRoutine_651190_alt1(40),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v24 = GameData_1f59778;
    v25 = v23;
    *v23 = GameData_1f59778;
    v23[1] = (__int64 (**)(void))&v52,
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v23[2] = (__int64 (**)(void))&v53,
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v23[3] = (__int64 (**)(void))&v50,
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v23[4] = (__int64 (**)(void))&v49,
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v26 = **(_QWORD**)(a1 + 5896);
    if (v26 != 0) {
      do {
        v27 = *v25;
        v28 = *(_QWORD*)(v26 + 6080);
        v46[0] = v26;
        ((void (*)(__int64 (***)(void), _QWORD*))v27[6])(v25, v46),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        v26 = v28;
      } while (v28 != 0);
      v24 = *v25;
    }
    ((void (*)(__int64 (***)(void)))v24[5])(v25),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v49 != nullptr) {
      v29 = snd_g_proxy;
      v30 = (const char*)GameRoutine_190240_alt1((__int64)(v49 + 710)),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v29 + 384LL))(
          v29, "#SoundLibrary warning : VibVoice Stop LowPriority : %s\n", v30),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v31 = snd_Voice_hasSends((__int64)v49),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v32 = v49;
      if (v31) {
        snd_Fade_Fade_10c830((__int64)v46, 0x0.0p+0f),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        (*(void (**)(_QWORD*, _QWORD*, _QWORD, double))(*v32 + 248LL))(
            v32, v46, 0, 0x0.0p+0),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        snd_Fade_Destroy_Fade_alt2(v46),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      else {
        (*(void (**)(_QWORD*))(*v49 + 264LL))(v49),
            v33 = COERCE_AS(__typeof__(v33),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      --*(_DWORD*)(a1 + 5928);
    }
  }
LABEL_29:
  if ((*(_DWORD*)(a1 + 5668) & 0x80000000) != 0 ||
      (int)Slot_133580(a1) <= *(_DWORD*)(a1 + 5668)) {
    goto LABEL_47;
  }
  v35 = v44_.v44;
  LODWORD(v49) = 0;
  v44_.v45 = v44_.v44;
  v50 = v53;
  v44_.v44[0] = GameData_1f597f8;
  v44_.v44[1] = &v50;
  v44_.v44[2] = &v49;
  v36 = **(_QWORD**)(a1 + 5896);
  if (v36 == 0) {
    goto LABEL_37;
  }
  do {
    v46[0] = v36;
    v36 = *(_QWORD*)(v36 + 6080);
    if (v44_.v45 == nullptr) {
      goto LABEL_49;
    }
    (*(void (**)(_QWORD*, _QWORD*))(*v44_.v45 + 48LL))(v44_.v45, v46),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  } while (v36 != 0);
  v35 = v44_.v45;
  if (v44_.v45 == v44_.v44) {
  LABEL_37:
    v37 = 32;
  }
  else {
    if (v44_.v45 == nullptr) {
      goto LABEL_39;
    }
    v37 = 40;
  }
  (*(void (**)(_QWORD*, __int64, __int64))(*v35 + v37))(v35, v33, v34),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_39:
  if ((_DWORD)v49 != 0) {
    v17 = *(_QWORD*)snd_g_proxy_ptr[0];
    if (v50 == v53) {
      v41 = GameRoutine_190240_alt1(v53 + 5680),
      v33 = COERCE_AS(__typeof__(v33),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v19 = *(_QWORD*)v17;
      v20 = v41;
      v21 = "#SoundLibrary warning : Slot LowPriority : %s\n";
      goto LABEL_44;
    }
    v38 = (const char*)GameRoutine_190240_alt1(v50 + 5680),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v17 + 384LL))(
        v17, "#SoundLibrary warning : Slot VibVoice Stop LowPriority : %s\n",
        v38),
        v33 = COERCE_AS(__typeof__(v33),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v39 = snd_Voice_hasSends(v50),
    v33 = COERCE_AS(__typeof__(v33),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v40 = v50;
    if (v39) {
      snd_Fade_Fade_10c830((__int64)v46, 0x0.0p+0f),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      (*(void (**)(__int64, _QWORD*, _QWORD, double))(*(_QWORD*)v40 + 248LL))(
          v40, v46, 0, 0x0.0p+0),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      snd_Fade_Destroy_Fade_alt2(v46),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    else {
      (*(void (**)(__int64))(*(_QWORD*)v50 + 264LL))(v50),
          v33 = COERCE_AS(__typeof__(v33),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    --*(_DWORD*)(a1 + 5928);
  }
LABEL_47:
  v42 = 1;
  goto LABEL_48;
}

__int64 Slot_135520(_QWORD* a1, const char* a2)
{
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  char v8;
  int v9;
  __int64 v10;
  __int64* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  char v15;
  int v16;
  __int64 v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  char v21;
  __int64 v22;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;
  struct {
    _QWORD v26[4];
    _QWORD* v27;
  } v26_;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;
  __int64 v30[3];
  __int64 v31;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1((__int64)(a1 + 743)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_190020_alt1(v30, a2),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28_.v28[0] = GameData_1f59878;
  v28_.v28[1] = v30;
  v4 = (__int64*)a1[732];
  v28_.v29 = v28_.v28;
  v5 = *v4;
  if (*v4 != 0) {
    v6 = v28_.v28;
    while (1) {
      v7 = *(_QWORD*)(v5 + 6080);
      v31 = v5;
      if (v6 == nullptr) {
      LABEL_45:
        GameRoutine_60a310_alt1(),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v8 = (*(__int64 (**)(_QWORD*, __int64*))(*v6 + 48LL))(v6, &v31),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v6 = v28_.v29;
      if ((v8 & 1) != 0) {
        break;
      }
      v5 = v7;
      if (v7 == 0) {
        v9 = 1;
        v5 = 0;
        if (v28_.v29 == v28_.v28) {
          goto LABEL_12;
        }
        goto LABEL_9;
      }
    }
    v9 = 0;
    if (v28_.v29 == v28_.v28) {
      goto LABEL_12;
    }
  LABEL_9:
    if (v28_.v29 == nullptr) {
      goto LABEL_14;
    }
    v10 = 40;
  }
  else {
    v9 = 1;
    v6 = v28_.v28;
  LABEL_12:
    v10 = 32;
  }
  (*(void (**)(__int64))(*v6 + v10))((__int64)v6),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_14:
  if (v9 != 0) {
    v26_.v26[0] = GameData_1f598f8;
    v26_.v26[1] = v30;
    v11 = (__int64*)a1[737];
    v26_.v27 = v26_.v26;
    v5 = *v11;
    if (*v11 != 0) {
      v12 = v26_.v26;
      while (1) {
        v13 = *(_QWORD*)(v5 + 6080);
        v31 = v5;
        if (v12 == nullptr) {
          goto LABEL_45;
        }
        v15 = (*(__int64 (**)(_QWORD*, __int64*))(*v12 + 48LL))(v12, &v31),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v12 = v26_.v27;
        if ((v15 & 1) != 0) {
          break;
        }
        v5 = v13;
        if (v13 == 0) {
          v16 = 1;
          v5 = 0;
          if (v26_.v27 == v26_.v26) {
            goto LABEL_26;
          }
          goto LABEL_23;
        }
      }
      v16 = 0;
      if (v26_.v27 == v26_.v26) {
        goto LABEL_26;
      }
    LABEL_23:
      if (v26_.v27 == nullptr) {
        goto LABEL_28;
      }
      v17 = 40;
    }
    else {
      v16 = 1;
      v12 = v26_.v26;
    LABEL_26:
      v17 = 32;
    }
    (*(void (**)(__int64))(*v12 + v17))((__int64)v12),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_28:
    if (v16 != 0) {
      v24_.v24[0] = GameData_1f59978;
      v24_.v24[1] = v30;
      v18 = (__int64*)a1[727];
      v24_.v25 = v24_.v24;
      v5 = *v18;
      if (*v18 != 0) {
        v19 = v24_.v24;
        v20 = *v18;
        while (1) {
          v5 = *(_QWORD*)(v20 + 5640);
          v31 = v20;
          if (v19 == nullptr) {
            goto LABEL_45;
          }
          v21 = (*(__int64 (**)(_QWORD*, __int64*))(*v19 + 48LL))(v19, &v31),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v19 = v24_.v25;
          if ((v21 & 1) != 0) {
            break;
          }
          v20 = v5;
          if (v5 == 0) {
            goto LABEL_36;
          }
        }
        v5 = v20;
        if (v24_.v25 == v24_.v24) {
          goto LABEL_40;
        }
      }
      else {
        v19 = v24_.v24;
      LABEL_36:
        if (v19 == v24_.v24) {
        LABEL_40:
          v22 = 32;
        LABEL_41:
          (*(void (**)(_QWORD*, __int64))(*v19 + v22))(v19, v14),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          goto LABEL_42;
        }
      }
      if (v19 == nullptr) {
        goto LABEL_42;
      }
      v22 = 40;
      goto LABEL_41;
    }
  }
LABEL_42:
  if ((v30[0] & 1) != 0) {
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
        *snd_g_memory_ptr[0], v30[2]),
        v14 = COERCE_AS(__typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  nn_os_UnlockMutex_alt1((__int64)(a1 + 743)),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return v5;
}

__int64 Slot_1357a0(_QWORD* a1, __int64 a2, __int64 a3)
{
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;
  __int64 v27;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  nn_os_LockMutex_alt1((__int64)(a1 + 743)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v6 = v25_.v25;
  v25_.v25[2] = a3;
  v25_.v25[0] = GameData_1f599f8;
  v25_.v25[1] = a2;
  v7 = (__int64*)a1[727];
  v25_.v26 = v25_.v25;
  v8 = *v7;
  if (*v7 != 0) {
    do {
      v27 = v8;
      v8 = *(_QWORD*)(v8 + 5640);
      if (v25_.v26 == nullptr) {
      LABEL_26:
        GameRoutine_60a310_alt1(),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v25_.v26 + 48LL))(v25_.v26, &v27),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    } while (v8 != 0);
    v6 = v25_.v26;
    if (v25_.v26 != v25_.v25) {
      if (v25_.v26 != nullptr) {
        v9 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v6 + v9))((__int64)v6),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v10 = v23_.v23;
      v23_.v23[2] = a3;
      v23_.v23[0] = GameData_1f59a78;
      v23_.v23[1] = a2;
      v11 = (__int64*)a1[732];
      v23_.v24 = v23_.v23;
      v12 = *v11;
      if (*v11 != 0) {
        do {
          v27 = v12;
          v12 = *(_QWORD*)(v12 + 6080);
          if (v23_.v24 == nullptr) {
            goto LABEL_26;
          }
          (*(void (**)(_QWORD*, __int64*))(*v23_.v24 + 48LL))(v23_.v24, &v27),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        } while (v12 != 0);
        v10 = v23_.v24;
        if (v23_.v24 != v23_.v23) {
          if (v23_.v24 != nullptr) {
            v15 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v10 + v15))((__int64)v10),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
          v16 = v21_.v21;
          v21_.v21[2] = a3;
          v21_.v21[0] = GameData_1f59af8;
          v21_.v21[1] = a2;
          v17 = (__int64*)a1[737];
          v21_.v22 = v21_.v21;
          v18 = *v17;
          if (*v17 != 0) {
            do {
              v27 = v18;
              v18 = *(_QWORD*)(v18 + 6080);
              if (v21_.v22 == nullptr) {
                goto LABEL_26;
              }
              (*(void (**)(_QWORD*, __int64*))(*v21_.v22 + 48LL))(v21_.v22,
                                                                  &v27),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            } while (v18 != 0);
            v16 = v21_.v22;
            if (v21_.v22 != v21_.v21) {
              if (v21_.v22 != nullptr) {
                v19 = 40;
              LABEL_24:
                (*(void (**)(_QWORD*, __int64, __int64))(*v16 + v19))(v16, v13,
                                                                      v14),
                    v13 = COERCE_AS(
                        __typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v14 = COERCE_AS(
                        __typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              }
              return nn_os_UnlockMutex_alt1((__int64)(a1 + 743));
            }
          }
          v19 = 32;
          goto LABEL_24;
        }
      }
      v15 = 32;
      goto LABEL_16;
    }
  }
  v9 = 32;
  goto LABEL_8;
}

__int64 Slot_135980(_QWORD* a1, __int64 a2)
{
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  __int64 v24;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1((__int64)(a1 + 743)),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = v22_.v22;
  v22_.v22[0] = GameData_1f59b78;
  v22_.v22[1] = a2;
  v5 = (__int64*)a1[727];
  v22_.v23 = v22_.v22;
  v6 = *v5;
  if (*v5 != 0) {
    do {
      v24 = v6;
      v6 = *(_QWORD*)(v6 + 5640);
      if (v22_.v23 == nullptr) {
      LABEL_26:
        GameRoutine_60a310_alt1(),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v22_.v23 + 48LL))(v22_.v23, &v24),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v6 != 0);
    v4 = v22_.v23;
    if (v22_.v23 != v22_.v22) {
      if (v22_.v23 != nullptr) {
        v7 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v4 + v7))((__int64)v4),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v8 = v20_.v20;
      v20_.v20[0] = GameData_1f59bf8;
      v20_.v20[1] = a2;
      v9 = (__int64*)a1[732];
      v20_.v21 = v20_.v20;
      v10 = *v9;
      if (*v9 != 0) {
        do {
          v24 = v10;
          v10 = *(_QWORD*)(v10 + 6080);
          if (v20_.v21 == nullptr) {
            goto LABEL_26;
          }
          (*(void (**)(_QWORD*, __int64*))(*v20_.v21 + 48LL))(v20_.v21, &v24),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        } while (v10 != 0);
        v8 = v20_.v21;
        if (v20_.v21 != v20_.v20) {
          if (v20_.v21 != nullptr) {
            v12 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v8 + v12))((__int64)v8),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v13 = v18_.v18;
          v18_.v18[0] = GameData_1f59c78;
          v18_.v18[1] = a2;
          v14 = (__int64*)a1[737];
          v18_.v19 = v18_.v18;
          v15 = *v14;
          if (*v14 != 0) {
            do {
              v24 = v15;
              v15 = *(_QWORD*)(v15 + 6080);
              if (v18_.v19 == nullptr) {
                goto LABEL_26;
              }
              (*(void (**)(_QWORD*, __int64*))(*v18_.v19 + 48LL))(v18_.v19,
                                                                  &v24),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            } while (v15 != 0);
            v13 = v18_.v19;
            if (v18_.v19 != v18_.v18) {
              if (v18_.v19 != nullptr) {
                v16 = 40;
              LABEL_24:
                (*(void (**)(_QWORD*, __int64))(*v13 + v16))(v13, v11),
                    v11 = COERCE_AS(
                        __typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              return nn_os_UnlockMutex_alt1((__int64)(a1 + 743));
            }
          }
          v16 = 32;
          goto LABEL_24;
        }
      }
      v12 = 32;
      goto LABEL_16;
    }
  }
  v7 = 32;
  goto LABEL_8;
}

__int64 Slot_135b40(_QWORD* a1, unsigned int a2, __int64 a3)
{
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;
  __int64 v27;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  nn_os_LockMutex_alt1((__int64)(a1 + 743)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v14 = COERCE_AS(__typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v6 = v25_.v25;
  v25_.v25[2] = a3;
  v25_.v25[0] = GameData_1f59cf8;
  v25_.v25[1] = a2;
  v7 = (__int64*)a1[727];
  v25_.v26 = v25_.v25;
  v8 = *v7;
  if (*v7 != 0) {
    do {
      v27 = v8;
      v8 = *(_QWORD*)(v8 + 5640);
      if (v25_.v26 == nullptr) {
      LABEL_26:
        GameRoutine_60a310_alt1(),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v25_.v26 + 48LL))(v25_.v26, &v27),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    } while (v8 != 0);
    v6 = v25_.v26;
    if (v25_.v26 != v25_.v25) {
      if (v25_.v26 != nullptr) {
        v9 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v6 + v9))((__int64)v6),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v10 = v23_.v23;
      v23_.v23[2] = a3;
      v23_.v23[0] = GameData_1f59d78;
      v23_.v23[1] = a2;
      v11 = (__int64*)a1[732];
      v23_.v24 = v23_.v23;
      v12 = *v11;
      if (*v11 != 0) {
        do {
          v27 = v12;
          v12 = *(_QWORD*)(v12 + 6080);
          if (v23_.v24 == nullptr) {
            goto LABEL_26;
          }
          (*(void (**)(_QWORD*, __int64*))(*v23_.v24 + 48LL))(v23_.v24, &v27),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        } while (v12 != 0);
        v10 = v23_.v24;
        if (v23_.v24 != v23_.v23) {
          if (v23_.v24 != nullptr) {
            v15 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v10 + v15))((__int64)v10),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
          v16 = v21_.v21;
          v21_.v21[2] = a3;
          v21_.v21[0] = GameData_1f59df8;
          v21_.v21[1] = a2;
          v17 = (__int64*)a1[737];
          v21_.v22 = v21_.v21;
          v18 = *v17;
          if (*v17 != 0) {
            do {
              v27 = v18;
              v18 = *(_QWORD*)(v18 + 6080);
              if (v21_.v22 == nullptr) {
                goto LABEL_26;
              }
              (*(void (**)(_QWORD*, __int64*))(*v21_.v22 + 48LL))(v21_.v22,
                                                                  &v27),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v14 = COERCE_AS(
                      __typeof__(v14),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
            } while (v18 != 0);
            v16 = v21_.v22;
            if (v21_.v22 != v21_.v21) {
              if (v21_.v22 != nullptr) {
                v19 = 40;
              LABEL_24:
                (*(void (**)(_QWORD*, __int64, __int64))(*v16 + v19))(v16, v13,
                                                                      v14),
                    v13 = COERCE_AS(
                        __typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v14 = COERCE_AS(
                        __typeof__(v14),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              }
              return nn_os_UnlockMutex_alt1((__int64)(a1 + 743));
            }
          }
          v19 = 32;
          goto LABEL_24;
        }
      }
      v15 = 32;
      goto LABEL_16;
    }
  }
  v9 = 32;
  goto LABEL_8;
}

__int64 Slot_135d20(_QWORD* a1, __int64 a2)
{
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  __int64 v24;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1((__int64)(a1 + 743)),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = v22_.v22;
  v22_.v22[0] = GameData_1f59e78;
  v22_.v22[1] = a2;
  v5 = (__int64*)a1[727];
  v22_.v23 = v22_.v22;
  v6 = *v5;
  if (*v5 != 0) {
    do {
      v24 = v6;
      v6 = *(_QWORD*)(v6 + 5640);
      if (v22_.v23 == nullptr) {
      LABEL_26:
        GameRoutine_60a310_alt1(),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v22_.v23 + 48LL))(v22_.v23, &v24),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v6 != 0);
    v4 = v22_.v23;
    if (v22_.v23 != v22_.v22) {
      if (v22_.v23 != nullptr) {
        v7 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v4 + v7))((__int64)v4),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v8 = v20_.v20;
      v20_.v20[0] = GameData_1f59ef8;
      v20_.v20[1] = a2;
      v9 = (__int64*)a1[732];
      v20_.v21 = v20_.v20;
      v10 = *v9;
      if (*v9 != 0) {
        do {
          v24 = v10;
          v10 = *(_QWORD*)(v10 + 6080);
          if (v20_.v21 == nullptr) {
            goto LABEL_26;
          }
          (*(void (**)(_QWORD*, __int64*))(*v20_.v21 + 48LL))(v20_.v21, &v24),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        } while (v10 != 0);
        v8 = v20_.v21;
        if (v20_.v21 != v20_.v20) {
          if (v20_.v21 != nullptr) {
            v12 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v8 + v12))((__int64)v8),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v13 = v18_.v18;
          v18_.v18[0] = GameData_1f59f78;
          v18_.v18[1] = a2;
          v14 = (__int64*)a1[737];
          v18_.v19 = v18_.v18;
          v15 = *v14;
          if (*v14 != 0) {
            do {
              v24 = v15;
              v15 = *(_QWORD*)(v15 + 6080);
              if (v18_.v19 == nullptr) {
                goto LABEL_26;
              }
              (*(void (**)(_QWORD*, __int64*))(*v18_.v19 + 48LL))(v18_.v19,
                                                                  &v24),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            } while (v15 != 0);
            v13 = v18_.v19;
            if (v18_.v19 != v18_.v18) {
              if (v18_.v19 != nullptr) {
                v16 = 40;
              LABEL_24:
                (*(void (**)(_QWORD*, __int64))(*v13 + v16))(v13, v11),
                    v11 = COERCE_AS(
                        __typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              return nn_os_UnlockMutex_alt1((__int64)(a1 + 743));
            }
          }
          v16 = 32;
          goto LABEL_24;
        }
      }
      v12 = 32;
      goto LABEL_16;
    }
  }
  v7 = 32;
  goto LABEL_8;
}

__int64 Slot_135ee0(_QWORD* a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  __int64 v21;

  nn_os_LockMutex_alt1((__int64)(a1 + 743));
  v2 = v19_.v19;
  v19_.v19[0] = GameData_1f59ff8;
  v3 = (__int64*)a1[727];
  v19_.v20 = v19_.v19;
  v4 = *v3;
  if (*v3 != 0) {
    do {
      v21 = v4;
      v4 = *(_QWORD*)(v4 + 5640);
      if (v19_.v20 == nullptr) {
      LABEL_26:
        GameRoutine_60a310_alt1();
      }
      (*(void (**)(_QWORD*, __int64*))(*v19_.v20 + 48LL))(v19_.v20, &v21);
    } while (v4 != 0);
    v2 = v19_.v20;
    if (v19_.v20 != v19_.v19) {
      if (v19_.v20 != nullptr) {
        v5 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v2 + v5))((__int64)v2);
      }
      v6 = v17_.v17;
      v17_.v17[0] = GameData_1f5a078;
      v7 = (__int64*)a1[732];
      v17_.v18 = v17_.v17;
      v8 = *v7;
      if (*v7 != 0) {
        do {
          v21 = v8;
          v8 = *(_QWORD*)(v8 + 6080);
          if (v17_.v18 == nullptr) {
            goto LABEL_26;
          }
          (*(void (**)(_QWORD*, __int64*))(*v17_.v18 + 48LL))(v17_.v18, &v21);
        } while (v8 != 0);
        v6 = v17_.v18;
        if (v17_.v18 != v17_.v17) {
          if (v17_.v18 != nullptr) {
            v9 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v6 + v9))((__int64)v6);
          }
          v10 = v15_.v15;
          v15_.v15[0] = GameData_1f5a0f8;
          v11 = (__int64*)a1[737];
          v15_.v16 = v15_.v15;
          v12 = *v11;
          if (*v11 != 0) {
            do {
              v21 = v12;
              v12 = *(_QWORD*)(v12 + 6080);
              if (v15_.v16 == nullptr) {
                goto LABEL_26;
              }
              (*(void (**)(_QWORD*, __int64*))(*v15_.v16 + 48LL))(v15_.v16,
                                                                  &v21);
            } while (v12 != 0);
            v10 = v15_.v16;
            if (v15_.v16 != v15_.v15) {
              if (v15_.v16 != nullptr) {
                v13 = 40;
              LABEL_24:
                (*(void (**)(_QWORD*))(*v10 + v13))(v10);
              }
              return nn_os_UnlockMutex_alt1((__int64)(a1 + 743));
            }
          }
          v13 = 32;
          goto LABEL_24;
        }
      }
      v9 = 32;
      goto LABEL_16;
    }
  }
  v5 = 32;
  goto LABEL_8;
}

__n128 Slot_1360a0(_QWORD** a1, __int64 a2, char a3)
{
  char v6;
  _BYTE* v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  long double v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  long double v16;
  __int64 v17;
  __int64 v18;
  _BYTE v20[200];
  char v21;
  _BYTE v22[200];
  char v23;
  _BYTE v24[200];
  char v25;
  __int64 v26;

  v6 = a3 & 1;
  nn_os_LockMutex(a1 + 743);
  snd_Fade_Fade_10cd70(v24, a2);
  v25 = a3;
  v7 = (_BYTE*)GameRoutine_651190(0xD8u);
  *(_QWORD*)v7 = GameData_1f5a178;
  *(float*)&v8 = snd_Fade_Fade_10cd70(v7 + 8, v24);
  v7[208] = v25;
  v9 = *a1[727];
  if (v9 != 0) {
    do {
      v10 = *(_QWORD*)(v9 + 5640);
      v26 = v9;
      (*(void (**)(_BYTE*, __int64*, long double))(*(_QWORD*)v7 + 48LL))(
          v7, &v26, v8);
      v9 = v10;
    } while (v10 != 0);
  }
  (*(void (**)(_BYTE*, long double))(*(_QWORD*)v7 + 40LL))(v7, v8);
  snd_Fade_Destroy_Fade(v24);
  snd_Fade_Fade_10cd70(v22, a2);
  v23 = v6;
  v11 = (_BYTE*)GameRoutine_651190(0xD8u);
  *(_QWORD*)v11 = GameData_1f5a1f8;
  *(float*)&v12 = snd_Fade_Fade_10cd70(v11 + 8, v22);
  v11[208] = v23;
  v13 = *a1[732];
  if (v13 != 0) {
    do {
      v14 = *(_QWORD*)(v13 + 6080);
      v26 = v13;
      (*(void (**)(_BYTE*, __int64*, long double))(*(_QWORD*)v11 + 48LL))(
          v11, &v26, v12);
      v13 = v14;
    } while (v14 != 0);
  }
  (*(void (**)(_BYTE*, long double))(*(_QWORD*)v11 + 40LL))(v11, v12);
  snd_Fade_Destroy_Fade(v22);
  snd_Fade_Fade_10cd70(v20, a2);
  v21 = v6;
  v15 = (_BYTE*)GameRoutine_651190(0xD8u);
  *(_QWORD*)v15 = GameData_1f5a278;
  *(float*)&v16 = snd_Fade_Fade_10cd70(v15 + 8, v20);
  v15[208] = v21;
  v17 = *a1[737];
  if (v17 != 0) {
    do {
      v18 = *(_QWORD*)(v17 + 6080);
      v26 = v17;
      (*(void (**)(_BYTE*, __int64*, long double))(*(_QWORD*)v15 + 48LL))(
          v15, &v26, v16);
      v17 = v18;
    } while (v18 != 0);
  }
  (*(void (**)(_BYTE*, long double))(*(_QWORD*)v15 + 40LL))(v15, v16);
  snd_Fade_Destroy_Fade(v20);
  return nn_os_UnlockMutex(a1 + 743);
}

__n128 Slot_136280(_QWORD** a1, __int64 a2)
{
  __int64 v4;
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  _BYTE v17[200];
  _BYTE v18[200];
  _BYTE v19[200];
  __int64 v20;

  nn_os_LockMutex(a1 + 743);
  snd_Fade_Fade_10cd70(v19, a2);
  v4 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v4 = GameData_1f5a2f8;
  *(float*)&v5 = snd_Fade_Fade_10cd70(v4 + 8, v19);
  v6 = *a1[727];
  if (v6 != 0) {
    do {
      v7 = *(_QWORD*)(v6 + 5640);
      v20 = v6;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v4 + 48LL))(
          v4, &v20, v5);
      v6 = v7;
    } while (v7 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 40LL))(v4, v5);
  snd_Fade_Destroy_Fade(v19);
  snd_Fade_Fade_10cd70(v18, a2);
  v8 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v8 = GameData_1f5a378;
  *(float*)&v9 = snd_Fade_Fade_10cd70(v8 + 8, v18);
  v10 = *a1[732];
  if (v10 != 0) {
    do {
      v11 = *(_QWORD*)(v10 + 6080);
      v20 = v10;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v8 + 48LL))(
          v8, &v20, v9);
      v10 = v11;
    } while (v11 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 40LL))(v8, v9);
  snd_Fade_Destroy_Fade(v18);
  snd_Fade_Fade_10cd70(v17, a2);
  v12 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v12 = GameData_1f5a3f8;
  *(float*)&v13 = snd_Fade_Fade_10cd70(v12 + 8, v17);
  v14 = *a1[737];
  if (v14 != 0) {
    do {
      v15 = *(_QWORD*)(v14 + 6080);
      v20 = v14;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v12 + 48LL))(
          v12, &v20, v13);
      v14 = v15;
    } while (v15 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 40LL))(v12, v13);
  snd_Fade_Destroy_Fade(v17);
  return nn_os_UnlockMutex(a1 + 743);
}

__n128 Slot_136440(_QWORD** a1, __int64 a2)
{
  __int64 v4;
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  _BYTE v17[200];
  _BYTE v18[200];
  _BYTE v19[200];
  __int64 v20;

  nn_os_LockMutex(a1 + 743);
  snd_Fade_Fade_10cd70(v19, a2);
  v4 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v4 = GameData_1f5a478;
  *(float*)&v5 = snd_Fade_Fade_10cd70(v4 + 8, v19);
  v6 = *a1[727];
  if (v6 != 0) {
    do {
      v7 = *(_QWORD*)(v6 + 5640);
      v20 = v6;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v4 + 48LL))(
          v4, &v20, v5);
      v6 = v7;
    } while (v7 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 40LL))(v4, v5);
  snd_Fade_Destroy_Fade(v19);
  snd_Fade_Fade_10cd70(v18, a2);
  v8 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v8 = GameData_1f5a4f8;
  *(float*)&v9 = snd_Fade_Fade_10cd70(v8 + 8, v18);
  v10 = *a1[732];
  if (v10 != 0) {
    do {
      v11 = *(_QWORD*)(v10 + 6080);
      v20 = v10;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v8 + 48LL))(
          v8, &v20, v9);
      v10 = v11;
    } while (v11 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 40LL))(v8, v9);
  snd_Fade_Destroy_Fade(v18);
  snd_Fade_Fade_10cd70(v17, a2);
  v12 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v12 = GameData_1f5a578;
  *(float*)&v13 = snd_Fade_Fade_10cd70(v12 + 8, v17);
  v14 = *a1[737];
  if (v14 != 0) {
    do {
      v15 = *(_QWORD*)(v14 + 6080);
      v20 = v14;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v12 + 48LL))(
          v12, &v20, v13);
      v14 = v15;
    } while (v15 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 40LL))(v12, v13);
  snd_Fade_Destroy_Fade(v17);
  return nn_os_UnlockMutex(a1 + 743);
}

__n128 Slot_136600(_QWORD** a1, __int64 a2)
{
  __int64 v4;
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  _BYTE v17[200];
  _BYTE v18[200];
  _BYTE v19[200];
  __int64 v20;

  nn_os_LockMutex(a1 + 743);
  snd_Fade_Fade_10cd70(v19, a2);
  v4 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v4 = GameData_1f5a5f8;
  *(float*)&v5 = snd_Fade_Fade_10cd70(v4 + 8, v19);
  v6 = *a1[727];
  if (v6 != 0) {
    do {
      v7 = *(_QWORD*)(v6 + 5640);
      v20 = v6;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v4 + 48LL))(
          v4, &v20, v5);
      v6 = v7;
    } while (v7 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 40LL))(v4, v5);
  snd_Fade_Destroy_Fade(v19);
  snd_Fade_Fade_10cd70(v18, a2);
  v8 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v8 = GameData_1f5a678;
  *(float*)&v9 = snd_Fade_Fade_10cd70(v8 + 8, v18);
  v10 = *a1[732];
  if (v10 != 0) {
    do {
      v11 = *(_QWORD*)(v10 + 6080);
      v20 = v10;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v8 + 48LL))(
          v8, &v20, v9);
      v10 = v11;
    } while (v11 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 40LL))(v8, v9);
  snd_Fade_Destroy_Fade(v18);
  snd_Fade_Fade_10cd70(v17, a2);
  v12 = GameRoutine_651190(0xD0u);
  *(_QWORD*)v12 = GameData_1f5a6f8;
  *(float*)&v13 = snd_Fade_Fade_10cd70(v12 + 8, v17);
  v14 = *a1[737];
  if (v14 != 0) {
    do {
      v15 = *(_QWORD*)(v14 + 6080);
      v20 = v14;
      (*(void (**)(__int64, __int64*, long double))(*(_QWORD*)v12 + 48LL))(
          v12, &v20, v13);
      v14 = v15;
    } while (v15 != 0);
  }
  (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 40LL))(v12, v13);
  snd_Fade_Destroy_Fade(v17);
  return nn_os_UnlockMutex(a1 + 743);
}

void Slot_1367c0(_QWORD** a1, __int64 a2, float a3)
{
  float* v6;
  long double v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  long double v11;
  __int64 v12;
  __int64 v13;
  float* v14;
  long double v15;
  __int64 v16;
  __int64 v17;
  _DWORD v18[52];
  _DWORD v19[52];
  _BYTE v20[200];
  __int64 v21;

  nn_os_LockMutex(a1 + 743);
  *(float*)&v19[50] = a3;
  snd_Fade_Fade_10cd70(v20, a2);
  v6 = (float*)GameRoutine_651190(0xD8u);
  *(_QWORD*)v6 = GameData_1f5a778;
  v6[2] = a3;
  *(float*)&v7 = snd_Fade_Fade_10cd70(v6 + 4, v20);
  v8 = *a1[727];
  if (v8 != 0) {
    do {
      v9 = *(_QWORD*)(v8 + 5640);
      v21 = v8;
      (*(void (**)(float*, __int64*, long double))(*(_QWORD*)v6 + 48LL))(
          v6, &v21, v7);
      v8 = v9;
    } while (v9 != 0);
  }
  (*(void (**)(float*, long double))(*(_QWORD*)v6 + 40LL))(v6, v7);
  snd_Fade_Destroy_Fade(v20);
  *(float*)&v18[50] = a3;
  snd_Fade_Fade_10cd70(v19, a2);
  v10 = (float*)GameRoutine_651190(0xD8u);
  *(_QWORD*)v10 = GameData_1f5a7f8;
  v10[2] = a3;
  *(float*)&v11 = snd_Fade_Fade_10cd70(v10 + 4, v19);
  v12 = *a1[732];
  if (v12 != 0) {
    do {
      v13 = *(_QWORD*)(v12 + 6080);
      v21 = v12;
      (*(void (**)(float*, __int64*, long double))(*(_QWORD*)v10 + 48LL))(
          v10, &v21, v11);
      v12 = v13;
    } while (v13 != 0);
  }
  (*(void (**)(float*, long double))(*(_QWORD*)v10 + 40LL))(v10, v11);
  snd_Fade_Destroy_Fade(v19);
  snd_Fade_Fade_10cd70(v18, a2);
  v14 = (float*)GameRoutine_651190(0xD8u);
  *(_QWORD*)v14 = GameData_1f5a878;
  v14[2] = a3;
  *(float*)&v15 = snd_Fade_Fade_10cd70(v14 + 4, v18);
  v16 = *a1[737];
  if (v16 != 0) {
    do {
      v17 = *(_QWORD*)(v16 + 6080);
      v21 = v16;
      (*(void (**)(float*, __int64*, long double))(*(_QWORD*)v14 + 48LL))(
          v14, &v21, v15);
      v16 = v17;
    } while (v17 != 0);
  }
  (*(void (**)(float*, long double))(*(_QWORD*)v14 + 40LL))(v14, v15);
  snd_Fade_Destroy_Fade(v18);
  nn_os_UnlockMutex(a1 + 743);
}

__int64 Slot_1369e0(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  char v5;
  int v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  _QWORD* v10;
  char v11;
  int v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  char v17;
  __int64 v18;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  struct {
    _QWORD v24[4];
    _QWORD* v25;
  } v24_;
  __int64 v26;

  nn_os_LockMutex_alt1((__int64)(a1 + 743));
  v24_.v24[0] = GameData_1f5a8f8;
  v2 = (__int64*)a1[727];
  v24_.v25 = v24_.v24;
  v3 = *v2;
  if (*v2 != 0) {
    v4 = v24_.v24;
    while (1) {
      v26 = v3;
      v3 = *(_QWORD*)(v3 + 5640);
      if (v4 == nullptr) {
      LABEL_44:
        GameRoutine_60a310_alt1();
      }
      v5 = (*(__int64 (**)(_QWORD*, __int64*))(*v4 + 48LL))(v4, &v26);
      v4 = v24_.v25;
      if ((v5 & 1) != 0) {
        break;
      }
      if (v3 == 0) {
        v6 = 1;
        if (v24_.v25 == v24_.v24) {
          goto LABEL_12;
        }
        goto LABEL_9;
      }
    }
    v6 = 0;
    if (v24_.v25 == v24_.v24) {
      goto LABEL_12;
    }
  LABEL_9:
    if (v24_.v25 == nullptr) {
      goto LABEL_14;
    }
    v7 = 40;
  }
  else {
    v6 = 1;
    v4 = v24_.v24;
  LABEL_12:
    v7 = 32;
  }
  (*(void (**)(__int64))(*v4 + v7))((__int64)v4);
LABEL_14:
  if (v6 == 0) {
    goto LABEL_37;
  }
  v22_.v22[0] = GameData_1f5a978;
  v8 = (__int64*)a1[732];
  v22_.v23 = v22_.v22;
  v9 = *v8;
  if (*v8 != 0) {
    v10 = v22_.v22;
    while (1) {
      v26 = v9;
      v9 = *(_QWORD*)(v9 + 6080);
      if (v10 == nullptr) {
        goto LABEL_44;
      }
      v11 = (*(__int64 (**)(_QWORD*, __int64*))(*v10 + 48LL))(v10, &v26);
      v10 = v22_.v23;
      if ((v11 & 1) != 0) {
        break;
      }
      if (v9 == 0) {
        v12 = 1;
        if (v22_.v23 == v22_.v22) {
          goto LABEL_26;
        }
        goto LABEL_23;
      }
    }
    v12 = 0;
    if (v22_.v23 == v22_.v22) {
      goto LABEL_26;
    }
  LABEL_23:
    if (v22_.v23 == nullptr) {
      goto LABEL_28;
    }
    v13 = 40;
  }
  else {
    v12 = 1;
    v10 = v22_.v22;
  LABEL_26:
    v13 = 32;
  }
  (*(void (**)(__int64))(*v10 + v13))((__int64)v10);
LABEL_28:
  if (v12 != 0) {
    v20_.v20[0] = GameData_1f5a9f8;
    v14 = (__int64*)a1[737];
    v20_.v21 = v20_.v20;
    v15 = *v14;
    if (*v14 != 0) {
      v16 = v20_.v20;
      while (1) {
        v26 = v15;
        v15 = *(_QWORD*)(v15 + 6080);
        if (v16 == nullptr) {
          goto LABEL_44;
        }
        v17 = (*(__int64 (**)(_QWORD*, __int64*))(*v16 + 48LL))(v16, &v26);
        v16 = v20_.v21;
        if ((v17 & 1) != 0) {
          break;
        }
        if (v15 == 0) {
          if (v20_.v21 == v20_.v20) {
            goto LABEL_39;
          }
          goto LABEL_35;
        }
      }
      LODWORD(v15) = 1;
      if (v20_.v21 == v20_.v20) {
        goto LABEL_39;
      }
    LABEL_35:
      if (v20_.v21 == nullptr) {
        goto LABEL_41;
      }
      v18 = 40;
    }
    else {
      v16 = v20_.v20;
    LABEL_39:
      v18 = 32;
    }
    (*(void (**)(_QWORD*))(*v16 + v18))(v16);
  }
  else {
  LABEL_37:
    LODWORD(v15) = 1;
  }
LABEL_41:
  nn_os_UnlockMutex_alt1((__int64)(a1 + 743));
  return (unsigned int)v15;
}

__int64 Slot_136c00(_QWORD* a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  char v7;
  int v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  char v14;
  int v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  _QWORD* v19;
  char v20;
  __int64 v21;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;
  struct {
    _QWORD v27[4];
    _QWORD* v28;
  } v27_;
  __int64 v29;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  nn_os_LockMutex_alt1((__int64)(a1 + 743)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27_.v27[0] = GameData_1f5aa78;
  v27_.v27[1] = a2;
  v4 = (__int64*)a1[727];
  v27_.v28 = v27_.v27;
  v5 = *v4;
  if (*v4 != 0) {
    v6 = v27_.v27;
    while (1) {
      v29 = v5;
      v5 = *(_QWORD*)(v5 + 5640);
      if (v6 == nullptr) {
      LABEL_44:
        GameRoutine_60a310_alt1(),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v7 = (*(__int64 (**)(_QWORD*, __int64*))(*v6 + 48LL))(v6, &v29),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v6 = v27_.v28;
      if ((v7 & 1) != 0) {
        break;
      }
      if (v5 == 0) {
        v8 = 1;
        if (v27_.v28 == v27_.v27) {
          goto LABEL_12;
        }
        goto LABEL_9;
      }
    }
    v8 = 0;
    if (v27_.v28 == v27_.v27) {
      goto LABEL_12;
    }
  LABEL_9:
    if (v27_.v28 == nullptr) {
      goto LABEL_14;
    }
    v9 = 40;
  }
  else {
    v8 = 1;
    v6 = v27_.v27;
  LABEL_12:
    v9 = 32;
  }
  (*(void (**)(__int64))(*v6 + v9))((__int64)v6),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_14:
  if (v8 == 0) {
    goto LABEL_37;
  }
  v25_.v25[0] = GameData_1f5aaf8;
  v25_.v25[1] = a2;
  v10 = (__int64*)a1[732];
  v25_.v26 = v25_.v25;
  v11 = *v10;
  if (*v10 != 0) {
    v12 = v25_.v25;
    while (1) {
      v29 = v11;
      v11 = *(_QWORD*)(v11 + 6080);
      if (v12 == nullptr) {
        goto LABEL_44;
      }
      v14 = (*(__int64 (**)(_QWORD*, __int64*))(*v12 + 48LL))(v12, &v29),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v12 = v25_.v26;
      if ((v14 & 1) != 0) {
        break;
      }
      if (v11 == 0) {
        v15 = 1;
        if (v25_.v26 == v25_.v25) {
          goto LABEL_26;
        }
        goto LABEL_23;
      }
    }
    v15 = 0;
    if (v25_.v26 == v25_.v25) {
      goto LABEL_26;
    }
  LABEL_23:
    if (v25_.v26 == nullptr) {
      goto LABEL_28;
    }
    v16 = 40;
  }
  else {
    v15 = 1;
    v12 = v25_.v25;
  LABEL_26:
    v16 = 32;
  }
  (*(void (**)(__int64))(*v12 + v16))((__int64)v12),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_28:
  if (v15 != 0) {
    v23_.v23[0] = GameData_1f5ab78;
    v23_.v23[1] = a2;
    v17 = (__int64*)a1[737];
    v23_.v24 = v23_.v23;
    v18 = *v17;
    if (*v17 != 0) {
      v19 = v23_.v23;
      while (1) {
        v29 = v18;
        v18 = *(_QWORD*)(v18 + 6080);
        if (v19 == nullptr) {
          goto LABEL_44;
        }
        v20 = (*(__int64 (**)(_QWORD*, __int64*))(*v19 + 48LL))(v19, &v29),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v19 = v23_.v24;
        if ((v20 & 1) != 0) {
          break;
        }
        if (v18 == 0) {
          if (v23_.v24 == v23_.v23) {
            goto LABEL_39;
          }
          goto LABEL_35;
        }
      }
      LODWORD(v18) = 1;
      if (v23_.v24 == v23_.v23) {
        goto LABEL_39;
      }
    LABEL_35:
      if (v23_.v24 == nullptr) {
        goto LABEL_41;
      }
      v21 = 40;
    }
    else {
      v19 = v23_.v23;
    LABEL_39:
      v21 = 32;
    }
    (*(void (**)(_QWORD*, __int64))(*v19 + v21))(v19, v13),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
  LABEL_37:
    LODWORD(v18) = 1;
  }
LABEL_41:
  nn_os_UnlockMutex_alt1((__int64)(a1 + 743)),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return (unsigned int)v18;
}

__int64 Slot_136e40(__int64** a1, const char* a2)
{
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;
  unsigned int v25;
  __int64 v26[3];
  __int64 v27;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  nn_os_LockMutex_alt1((__int64)(a1 + 743)),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  GameRoutine_190020_alt1(v26, a2),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v4 = v23_.v23;
  v23_.v23[2] = v26;
  v25 = 0;
  v23_.v23[0] = GameData_1f5abf8;
  v23_.v23[1] = &v25;
  v5 = a1[727];
  v23_.v24 = v23_.v23;
  v6 = *v5;
  if (*v5 != 0) {
    do {
      v27 = v6;
      v6 = *(_QWORD*)(v6 + 5640);
      if (v23_.v24 == nullptr) {
      LABEL_28:
        GameRoutine_60a310_alt1(),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v23_.v24 + 48LL))(v23_.v24, &v27),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    } while (v6 != 0);
    v4 = v23_.v24;
    if (v23_.v24 != v23_.v23) {
      if (v23_.v24 != nullptr) {
        v7 = 40;
      LABEL_8:
        (*(void (**)(__int64))(*v4 + v7))((__int64)v4),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      v8 = v21_.v21;
      v21_.v21[2] = a2;
      v21_.v21[0] = GameData_1f5ac78;
      v21_.v21[1] = &v25;
      v9 = a1[732];
      v21_.v22 = v21_.v21;
      v10 = *v9;
      if (*v9 != 0) {
        do {
          v27 = v10;
          v10 = *(_QWORD*)(v10 + 6080);
          if (v21_.v22 == nullptr) {
            goto LABEL_28;
          }
          (*(void (**)(_QWORD*, __int64*))(*v21_.v22 + 48LL))(v21_.v22, &v27),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        } while (v10 != 0);
        v8 = v21_.v22;
        if (v21_.v22 != v21_.v21) {
          if (v21_.v22 != nullptr) {
            v13 = 40;
          LABEL_16:
            (*(void (**)(__int64))(*v8 + v13))((__int64)v8),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
          v14 = v19_.v19;
          v19_.v19[0] = GameData_1f5acf8;
          v19_.v19[1] = &v25;
          v19_.v20 = v19_.v19;
          v19_.v19[2] = v26;
          v15 = *a1[737];
          if (v15 == 0) {
            goto LABEL_23;
          }
          do {
            v27 = v15;
            v15 = *(_QWORD*)(v15 + 6080);
            if (v19_.v20 == nullptr) {
              goto LABEL_28;
            }
            (*(void (**)(_QWORD*, __int64*))(*v19_.v20 + 48LL))(v19_.v20, &v27),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          } while (v15 != 0);
          v14 = v19_.v20;
          if (v19_.v20 == v19_.v19) {
          LABEL_23:
            v16 = 32;
          }
          else {
            if (v19_.v20 == nullptr) {
              goto LABEL_25;
            }
            v16 = 40;
          }
          (*(void (**)(_QWORD*, __int64, __int64))(*v14 + v16))(v14, v11, v12),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        LABEL_25:
          v17 = v25;
          if ((v26[0] & 1) != 0) {
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] +
                                           24LL))(*snd_g_memory_ptr[0], v26[2]),
                v11 =
                    COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v12 =
                    COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
          nn_os_UnlockMutex_alt1((__int64)(a1 + 743)),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          return v17;
        }
      }
      v13 = 32;
      goto LABEL_16;
    }
  }
  v7 = 32;
  goto LABEL_8;
}

__int64 Slot_137080(__int64 a1)
{
  __int64 v2;

  v2 = -1;
  return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)(a1 - 40) + 80LL))(
      a1 - 40, &v2);
}

__int64* Slot_Unknown8()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_2134680,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_2134688[0];
  }
  if ((unsigned int)__cxa_guard_acquire(GameData_2134680) != 0) {
    *GameData_2134688[0] = 0;
    __cxa_guard_release(GameData_2134680);
  }
  return GameData_2134688[0];
}

__int64 snd_Slot_addVoice_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *a2;
  ++*(_DWORD*)(v2 + 5920);
  result = snd_Voice_isDead(v4);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v3 + 40);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v3 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v3 + 40);
        if ((result & 1) == 0) {
          ++*(_DWORD*)(v2 + 5912);
        }
      }
    }
  }
  return result;
}

bool snd_Slot_destroyVoice_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned __int16 v17;
  __int64 v18;
  int v19;

  v2 = *(__int64**)(a1 + 8);
  v3 = *a2;
  v4 = *v2;
  if (*a2 != *v2) {
    return v3 == v4;
  }
  v5 = *(_QWORD**)(a1 + 16);
  v6 = v5[726];
  v7 = (__int64*)(v6 + v3);
  v9 = *(_QWORD*)(v6 + v3);
  v8 = *(_QWORD*)(v6 + v3 + 8);
  if (v9 == 0) {
    v5[724] = v8;
    v10 = *v7;
    v11 = v7[1];
    if (v11 != 0) {
      goto LABEL_4;
    }
  LABEL_6:
    v5[725] = v10;
    goto LABEL_7;
  }
  *(_QWORD*)(v6 + v9 + 8) = v8;
  v6 = v5[726];
  v7 = (__int64*)(v6 + v3);
  v10 = *(_QWORD*)(v6 + v3);
  v11 = *(_QWORD*)(v6 + v3 + 8);
  if (v11 == 0) {
    goto LABEL_6;
  }
LABEL_4:
  *(_QWORD*)(v6 + v11) = v10;
  v7 = (__int64*)(v5[726] + v3);
LABEL_7:
  *v7 = 0;
  *(_QWORD*)(v5[726] + v3 + 8) = 0;
  v12 = **(_QWORD**)(a1 + 8);
  if (*(_BYTE*)(v12 + 5891) == 1) {
    v13 = v5[4];
    (**(void (***)(_QWORD))v12)(**(_QWORD**)(a1 + 8));
    v14 = v13 + 2640;
    nn_os_LockMutex(v13 + 2640);
    v15 = (_QWORD*)(v13 + 2624);
    v16 = (v12 - *(_QWORD*)(v13 + 2616)) / 0x17D0uLL;
    v17 = *(_WORD*)(v13 + 2632) - 1;
    *(_WORD*)(v13 + 2632) = v17;
  }
  else {
    v18 = v5[4];
    v19 = *(unsigned __int8*)(v12 + 5892);
    (**(void (***)(_QWORD))v12)(**(_QWORD**)(a1 + 8));
    if (v19 == 1) {
      v14 = v18 + 2720;
      nn_os_LockMutex(v18 + 2720);
      v15 = (_QWORD*)(v18 + 2704);
      v16 = (v12 - *(_QWORD*)(v18 + 2696)) / 0x17D0uLL;
      v17 = *(_WORD*)(v18 + 2712) - 1;
      *(_WORD*)(v18 + 2712) = v17;
    }
    else {
      v14 = v18 + 2480;
      nn_os_LockMutex(v18 + 2480);
      v15 = (_QWORD*)(v18 + 2464);
      v16 = (v12 - *(_QWORD*)(v18 + 2456)) / 0x17B8uLL;
      v17 = *(_WORD*)(v18 + 2472) - 1;
      *(_WORD*)(v18 + 2472) = v17;
    }
  }
  *(_WORD*)(*v15 + 2LL * v17) = v16;
  nn_os_UnlockMutex(v14);
  return v3 == v4;
}

__int64 snd_Slot_destroyVoice_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *a2;
  ++*(_DWORD*)(v2 + 5920);
  result = snd_Voice_isDead(v4);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v3 + 40);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v3 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v3 + 40);
        if ((result & 1) == 0) {
          ++*(_DWORD*)(v2 + 5912);
        }
      }
    }
  }
  return result;
}

__int64 snd_Slot_countVoice_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *a2;
  ++*(_DWORD*)(v2 + 5920);
  result = snd_Voice_isDead(v4);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v3 + 40);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v3 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v3 + 40);
        if ((result & 1) == 0) {
          ++*(_DWORD*)(v2 + 5912);
        }
      }
    }
  }
  return result;
}

__int64 snd_Slot_addSeqVoice_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *a2;
  ++*(_DWORD*)(v2 + 5924);
  result = snd_Voice_isDead(v4);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v3 + 40);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v3 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v3 + 40);
        if ((result & 1) == 0) {
          ++*(_DWORD*)(v2 + 5916);
        }
      }
    }
  }
  return result;
}

bool snd_Slot_destroySeqVoice_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  void (***v13)(_QWORD);
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int16 v16;

  v2 = *(__int64**)(a1 + 8);
  v3 = *a2;
  v4 = *v2;
  if (*a2 == *v2) {
    v5 = *(_QWORD**)(a1 + 16);
    v6 = v5[731];
    v7 = (__int64*)(v6 + v3);
    v9 = *(_QWORD*)(v6 + v3);
    v8 = *(_QWORD*)(v6 + v3 + 8);
    if (v9 != 0) {
      *(_QWORD*)(v6 + v9 + 8) = v8;
      v6 = v5[731];
      v7 = (__int64*)(v6 + v3);
      v10 = *(_QWORD*)(v6 + v3);
      v11 = *(_QWORD*)(v6 + v3 + 8);
      if (v11 != 0) {
      LABEL_4:
        *(_QWORD*)(v6 + v11) = v10;
        v7 = (__int64*)(v5[731] + v3);
      LABEL_7:
        *v7 = 0;
        *(_QWORD*)(v5[731] + v3 + 8) = 0;
        v12 = v5[4];
        v13 = **(void (*****)(_QWORD))(a1 + 8);
        (**v13)(v13);
        nn_os_LockMutex(v12 + 2560);
        v14 = *(_QWORD*)(v12 + 2544);
        v15 = ((unsigned __int64)v13 - *(_QWORD*)(v12 + 2536)) / 0x17E8;
        v16 = *(_WORD*)(v12 + 2552) - 1;
        *(_WORD*)(v12 + 2552) = v16;
        *(_WORD*)(v14 + 2LL * v16) = v15;
        nn_os_UnlockMutex(v12 + 2560);
        return v3 == v4;
      }
    }
    else {
      v5[729] = v8;
      v10 = *v7;
      v11 = v7[1];
      if (v11 != 0) {
        goto LABEL_4;
      }
    }
    v5[730] = v10;
    goto LABEL_7;
  }
  return v3 == v4;
}

__int64 snd_Slot_destroySeqVoice_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *a2;
  ++*(_DWORD*)(v2 + 5924);
  result = snd_Voice_isDead(v4);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v3 + 40);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v3 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v3 + 40);
        if ((result & 1) == 0) {
          ++*(_DWORD*)(v2 + 5916);
        }
      }
    }
  }
  return result;
}

__int64 snd_Slot_addVibVoice_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *a2;
  ++*(_DWORD*)(v2 + 5932);
  result = snd_Voice_isDead(v4);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v3 + 40);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v3 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v3 + 40);
        if ((result & 1) == 0) {
          ++*(_DWORD*)(v2 + 5928);
        }
      }
    }
  }
  return result;
}

bool snd_Slot_destroyVibVoice_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  void (***v13)(_QWORD);
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int16 v16;

  v2 = *(__int64**)(a1 + 8);
  v3 = *a2;
  v4 = *v2;
  if (*a2 == *v2) {
    v5 = *(_QWORD**)(a1 + 16);
    v6 = v5[736];
    v7 = (__int64*)(v6 + v3);
    v9 = *(_QWORD*)(v6 + v3);
    v8 = *(_QWORD*)(v6 + v3 + 8);
    if (v9 != 0) {
      *(_QWORD*)(v6 + v9 + 8) = v8;
      v6 = v5[736];
      v7 = (__int64*)(v6 + v3);
      v10 = *(_QWORD*)(v6 + v3);
      v11 = *(_QWORD*)(v6 + v3 + 8);
      if (v11 != 0) {
      LABEL_4:
        *(_QWORD*)(v6 + v11) = v10;
        v7 = (__int64*)(v5[736] + v3);
      LABEL_7:
        *v7 = 0;
        *(_QWORD*)(v5[736] + v3 + 8) = 0;
        v12 = v5[4];
        v13 = **(void (*****)(_QWORD))(a1 + 8);
        (**v13)(v13);
        nn_os_LockMutex(v12 + 2800);
        v14 = *(_QWORD*)(v12 + 2784);
        v15 = ((unsigned __int64)v13 - *(_QWORD*)(v12 + 2776)) / 0x1808;
        v16 = *(_WORD*)(v12 + 2792) - 1;
        *(_WORD*)(v12 + 2792) = v16;
        *(_WORD*)(v14 + 2LL * v16) = v15;
        nn_os_UnlockMutex(v12 + 2800);
        return v3 == v4;
      }
    }
    else {
      v5[734] = v8;
      v10 = *v7;
      v11 = v7[1];
      if (v11 != 0) {
        goto LABEL_4;
      }
    }
    v5[735] = v10;
    goto LABEL_7;
  }
  return v3 == v4;
}

__int64 snd_Slot_destroyVibVoice_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = *a2;
  ++*(_DWORD*)(v2 + 5932);
  result = snd_Voice_isDead(v4);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v3 + 40);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v3 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v3 + 40);
        if ((result & 1) == 0) {
          ++*(_DWORD*)(v2 + 5928);
        }
      }
    }
  }
  return result;
}

void snd_Slot_checkPriority_lambda0_Invoke_1394a0(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64* v4;
  unsigned __int64 v5;

  v2 = (_QWORD*)*a2;
  if ((snd_Voice_isDead(*a2) & 1) == 0 &&
      (snd_Param_isEnvelopeReleased(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeFading(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeEnded(v2 + 5) & 1) == 0 &&
      (*(float (**)(_QWORD*))(v2[5] + 328LL))(v2 + 5) == 0.0 &&
      (*(unsigned int (**)(_QWORD*))(*v2 + 744LL))(v2) ==
          *(_DWORD*)(**(_QWORD**)(a1 + 8) + 16LL)) {
    ++**(_DWORD**)(a1 + 16);
    if (v2[701] != *(_QWORD*)(**(_QWORD**)(a1 + 24) + 5608LL)) {
      v4 = *(unsigned __int64**)(a1 + 32);
      v5 = v2[703];
      if (v5 > *v4) {
        *v4 = v5;
        **(_QWORD**)(a1 + 40) = v2;
      }
    }
  }
}

void snd_Slot_checkPriority_lambda1_Invoke_139660(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64* v4;
  unsigned __int64 v5;

  v2 = (_QWORD*)*a2;
  if ((snd_Voice_isDead(*a2) & 1) == 0 &&
      (snd_Param_isEnvelopeReleased(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeFading(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeEnded(v2 + 5) & 1) == 0 &&
      (*(float (**)(_QWORD*))(v2[5] + 328LL))(v2 + 5) == 0.0 &&
      (*(unsigned int (**)(_QWORD*))(*v2 + 744LL))(v2) ==
          *(_DWORD*)(**(_QWORD**)(a1 + 8) + 16LL)) {
    ++**(_DWORD**)(a1 + 16);
    if (v2[701] != *(_QWORD*)(**(_QWORD**)(a1 + 24) + 5608LL)) {
      v4 = *(unsigned __int64**)(a1 + 32);
      v5 = v2[703];
      if (v5 > *v4) {
        *v4 = v5;
        **(_QWORD**)(a1 + 40) = v2;
      }
    }
  }
}

void snd_Slot_checkPriority_lambda2_Invoke_139800(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;

  v2 = (_QWORD*)*a2;
  if ((snd_Voice_isDead(*a2) & 1) == 0 &&
      (snd_Param_isEnvelopeReleased(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeFading(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeEnded(v2 + 5) & 1) == 0 &&
      (*(float (**)(_QWORD*))(v2[5] + 328LL))(v2 + 5) == 0.0 &&
      (*(unsigned int (**)(_QWORD*))(*v2 + 744LL))(v2) ==
          *(_DWORD*)(**(_QWORD**)(a1 + 8) + 16LL)) {
    ++**(_DWORD**)(a1 + 16);
  }
}

void snd_Slot_checkPriority_lambda3_Invoke_139960(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;

  v2 = (_QWORD*)*a2;
  if ((snd_Voice_isDead(*a2) & 1) == 0 &&
      (snd_Param_isEnvelopeReleased(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeFading(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeEnded(v2 + 5) & 1) == 0 &&
      (*(float (**)(_QWORD*))(v2[5] + 328LL))(v2 + 5) == 0.0 &&
      (*(unsigned int (**)(_QWORD*))(*v2 + 744LL))(v2) ==
          *(_DWORD*)(**(_QWORD**)(a1 + 8) + 16LL)) {
    ++**(_DWORD**)(a1 + 16);
  }
}

void snd_Slot_checkPriority_lambda4_Invoke_139ad0(_QWORD** a1, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64* v4;
  unsigned __int64 v5;

  v2 = (_QWORD*)*a2;
  if ((snd_Voice_isDead(*a2) & 1) == 0 &&
      (snd_Param_isEnvelopeReleased(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeFading(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeEnded(v2 + 5) & 1) == 0 &&
      (*(float (**)(_QWORD*))(v2[5] + 328LL))(v2 + 5) == 0.0 &&
      (*(unsigned int (**)(_QWORD*))(*v2 + 744LL))(v2) ==
          *(_DWORD*)(*a1[1] + 16LL) &&
      v2[701] != *(_QWORD*)(*a1[2] + 5608LL)) {
    v4 = a1[3];
    v5 = v2[703];
    if (v5 < *v4) {
      *v4 = v5;
      *a1[4] = v2;
    }
  }
}

void snd_Slot_checkPriority_lambda5_Invoke_139c70(_QWORD** a1, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64* v4;
  unsigned __int64 v5;

  v2 = (_QWORD*)*a2;
  if ((snd_Voice_isDead(*a2) & 1) == 0 &&
      (snd_Param_isEnvelopeReleased(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeFading(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeEnded(v2 + 5) & 1) == 0 &&
      (*(float (**)(_QWORD*))(v2[5] + 328LL))(v2 + 5) == 0.0 &&
      (*(unsigned int (**)(_QWORD*))(*v2 + 744LL))(v2) ==
          *(_DWORD*)(*a1[1] + 16LL) &&
      v2[701] != *(_QWORD*)(*a1[2] + 5608LL)) {
    v4 = a1[3];
    v5 = v2[703];
    if (v5 < *v4) {
      *v4 = v5;
      *a1[4] = v2;
    }
  }
}

void snd_Slot_checkPriority_lambda6_Invoke_139e00(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  int v4;
  __int64 v5;
  int v6;

  v2 = (_QWORD*)*a2;
  if ((snd_Voice_isDead(*a2) & 1) == 0 &&
      (snd_Param_isEnvelopeReleased(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeFading(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeEnded(v2 + 5) & 1) == 0 &&
      (*(float (**)(_QWORD*))(v2[5] + 328LL))(v2 + 5) == 0.0 &&
      v2[701] != *(_QWORD*)(**(_QWORD**)(a1 + 8) + 5608LL)) {
    ++**(_DWORD**)(a1 + 16);
    v4 = (*(__int64 (**)(_QWORD*))(v2[5] + 344LL))(v2 + 5);
    if (v4 < (*(int (**)(__int64))(*(_QWORD*)(**(_QWORD**)(a1 + 8) + 40LL) +
                                   344LL))(**(_QWORD**)(a1 + 8) + 40LL)) {
      v5 = *(_QWORD*)(a1 + 8);
    LABEL_9:
      *(_QWORD*)v5 = v2;
      return;
    }
    v6 = (*(__int64 (**)(_QWORD*))(v2[5] + 344LL))(v2 + 5);
    if (v6 ==
        (*(unsigned int (**)(__int64))(*(_QWORD*)(**(_QWORD**)(a1 + 8) + 40LL) +
                                       344LL))(**(_QWORD**)(a1 + 8) + 40LL)) {
      v5 = *(_QWORD*)(a1 + 8);
      if (v2[703] < *(_QWORD*)(*(_QWORD*)v5 + 5624LL)) {
        goto LABEL_9;
      }
    }
  }
}

void snd_Slot_checkPriority_lambda0_Invoke_13a010(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64* v4;
  unsigned __int64 v5;

  v2 = (_QWORD*)*a2;
  if ((snd_Voice_isDead(*a2) & 1) == 0 &&
      (snd_Param_isEnvelopeReleased(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeFading(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeEnded(v2 + 5) & 1) == 0 &&
      (*(float (**)(_QWORD*))(v2[5] + 328LL))(v2 + 5) == 0.0 &&
      (*(unsigned int (**)(_QWORD*))(*v2 + 744LL))(v2) ==
          *(_DWORD*)(**(_QWORD**)(a1 + 8) + 40LL)) {
    ++**(_DWORD**)(a1 + 16);
    if (v2[701] != *(_QWORD*)(**(_QWORD**)(a1 + 24) + 5608LL)) {
      v4 = *(unsigned __int64**)(a1 + 32);
      v5 = v2[703];
      if (v5 > *v4) {
        *v4 = v5;
        **(_QWORD**)(a1 + 40) = v2;
      }
    }
  }
}

void snd_Slot_checkPriority_lambda1_Invoke_13a1d0(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  unsigned __int64* v4;
  unsigned __int64 v5;

  v2 = (_QWORD*)*a2;
  if ((snd_Voice_isDead(*a2) & 1) == 0 &&
      (snd_Param_isEnvelopeReleased(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeFading(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeEnded(v2 + 5) & 1) == 0 &&
      (*(float (**)(_QWORD*))(v2[5] + 328LL))(v2 + 5) == 0.0 &&
      (*(unsigned int (**)(_QWORD*))(*v2 + 744LL))(v2) ==
          *(_DWORD*)(**(_QWORD**)(a1 + 8) + 40LL)) {
    ++**(_DWORD**)(a1 + 16);
    if (v2[701] != *(_QWORD*)(**(_QWORD**)(a1 + 24) + 5608LL)) {
      v4 = *(unsigned __int64**)(a1 + 32);
      v5 = v2[703];
      if (v5 > *v4) {
        *v4 = v5;
        **(_QWORD**)(a1 + 40) = v2;
      }
    }
  }
}

__int64 snd_Slot_checkPriority_lambda2_Invoke_13a370(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = snd_Voice_isDead(*a2);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v2 + 40);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v2 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v2 + 40);
        if ((result & 1) == 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 744LL))(v2);
          if ((_DWORD)result == *(_DWORD*)(**(_QWORD**)(a1 + 8) + 40LL)) {
            ++**(_DWORD**)(a1 + 16);
          }
        }
      }
    }
  }
  return result;
}

__int64 snd_Slot_checkPriority_lambda3_Invoke_13a4c0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = snd_Voice_isDead(*a2);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v2 + 40);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v2 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v2 + 40);
        if ((result & 1) == 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 744LL))(v2);
          if ((_DWORD)result == *(_DWORD*)(**(_QWORD**)(a1 + 8) + 40LL)) {
            ++**(_DWORD**)(a1 + 16);
          }
        }
      }
    }
  }
  return result;
}

__int64 snd_Slot_checkPriority_lambda4_Invoke_13a620(_QWORD** a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 result;
  unsigned __int64* v5;
  unsigned __int64 v6;

  v2 = (_QWORD*)*a2;
  result = snd_Voice_isDead(*a2);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v2 + 5);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v2 + 5);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v2 + 5);
        if ((result & 1) == 0) {
          result = (*(__int64 (**)(_QWORD*))(*v2 + 744LL))(v2);
          if ((_DWORD)result == *(_DWORD*)(*a1[1] + 40LL) &&
              v2[701] != *(_QWORD*)(*a1[2] + 5608LL)) {
            v5 = a1[3];
            v6 = v2[703];
            if (v6 < *v5) {
              *v5 = v6;
              *a1[4] = v2;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 snd_Slot_checkPriority_lambda5_Invoke_13a7a0(_QWORD** a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 result;
  unsigned __int64* v5;
  unsigned __int64 v6;

  v2 = (_QWORD*)*a2;
  result = snd_Voice_isDead(*a2);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v2 + 5);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v2 + 5);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v2 + 5);
        if ((result & 1) == 0) {
          result = (*(__int64 (**)(_QWORD*))(*v2 + 744LL))(v2);
          if ((_DWORD)result == *(_DWORD*)(*a1[1] + 40LL) &&
              v2[701] != *(_QWORD*)(*a1[2] + 5608LL)) {
            v5 = a1[3];
            v6 = v2[703];
            if (v6 < *v5) {
              *v5 = v6;
              *a1[4] = v2;
            }
          }
        }
      }
    }
  }
  return result;
}

void snd_Slot_checkPriority_lambda6_Invoke_13a910(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  int v4;
  __int64 v5;
  int v6;

  v2 = (_QWORD*)*a2;
  if ((snd_Voice_isDead(*a2) & 1) == 0 &&
      (snd_Param_isEnvelopeReleased(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeFading(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeEnded(v2 + 5) & 1) == 0 &&
      (*(float (**)(_QWORD*))(v2[5] + 328LL))(v2 + 5) == 0.0 &&
      v2[701] != *(_QWORD*)(**(_QWORD**)(a1 + 8) + 5608LL)) {
    ++**(_DWORD**)(a1 + 16);
    v4 = (*(__int64 (**)(_QWORD*))(v2[5] + 344LL))(v2 + 5);
    if (v4 < (*(int (**)(__int64))(*(_QWORD*)(**(_QWORD**)(a1 + 8) + 40LL) +
                                   344LL))(**(_QWORD**)(a1 + 8) + 40LL)) {
      v5 = *(_QWORD*)(a1 + 8);
    LABEL_9:
      *(_QWORD*)v5 = v2;
      return;
    }
    v6 = (*(__int64 (**)(_QWORD*))(v2[5] + 344LL))(v2 + 5);
    if (v6 ==
        (*(unsigned int (**)(__int64))(*(_QWORD*)(**(_QWORD**)(a1 + 8) + 40LL) +
                                       344LL))(**(_QWORD**)(a1 + 8) + 40LL)) {
      v5 = *(_QWORD*)(a1 + 8);
      if (v2[703] < *(_QWORD*)(*(_QWORD*)v5 + 5624LL)) {
        goto LABEL_9;
      }
    }
  }
}

__int64 snd_Slot_checkPriority_lambda0_Invoke_13ab20(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 result;
  unsigned __int64* v5;
  unsigned __int64 v6;

  v2 = (_QWORD*)*a2;
  result = snd_Voice_isDead(*a2);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v2 + 5);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v2 + 5);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v2 + 5);
        if ((result & 1) == 0) {
          result = (*(__int64 (**)(_QWORD*))(*v2 + 744LL))(v2);
          if ((_DWORD)result == *(_DWORD*)(**(_QWORD**)(a1 + 8) + 4LL)) {
            ++**(_DWORD**)(a1 + 16);
            if (v2[701] != *(_QWORD*)(**(_QWORD**)(a1 + 24) + 5608LL)) {
              v5 = *(unsigned __int64**)(a1 + 32);
              v6 = v2[703];
              if (v6 > *v5) {
                *v5 = v6;
                **(_QWORD**)(a1 + 40) = v2;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 snd_Slot_checkPriority_lambda1_Invoke_13aca0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = snd_Voice_isDead(*a2);
  if ((result & 1) == 0) {
    result = snd_Param_isEnvelopeReleased(v2 + 40);
    if ((result & 1) == 0) {
      result = snd_Param_isEnvelopeFading(v2 + 40);
      if ((result & 1) == 0) {
        result = snd_Param_isEnvelopeEnded(v2 + 40);
        if ((result & 1) == 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 744LL))(v2);
          if ((_DWORD)result == *(_DWORD*)(**(_QWORD**)(a1 + 8) + 4LL)) {
            ++**(_DWORD**)(a1 + 16);
          }
        }
      }
    }
  }
  return result;
}

__int64 snd_Slot_checkPriority_lambda2_Invoke_13ae00(_QWORD** a1, _QWORD* a2)
{
  _QWORD* v2;
  __int64 result;
  unsigned __int64* v5;
  unsigned __int64 v6;

  v2 = (_QWORD*)*a2;
  result = snd_Voice_isDead(*a2);
  if ((result & 1) == 0) {
    result = (*(__int64 (**)(_QWORD*))(*v2 + 744LL))(v2);
    if ((_DWORD)result == *(_DWORD*)(*a1[1] + 4LL) &&
        v2[701] != *(_QWORD*)(*a1[2] + 5608LL)) {
      v5 = a1[3];
      v6 = v2[703];
      if (v6 < *v5) {
        *v5 = v6;
        *a1[4] = v2;
      }
    }
  }
  return result;
}

void snd_Slot_checkPriority_lambda3_Invoke_13af50(__int64 a1, _QWORD* a2)
{
  _QWORD* v2;
  int v4;
  __int64 v5;
  int v6;

  v2 = (_QWORD*)*a2;
  if ((snd_Voice_isDead(*a2) & 1) == 0 &&
      (snd_Param_isEnvelopeReleased(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeFading(v2 + 5) & 1) == 0 &&
      (snd_Param_isEnvelopeEnded(v2 + 5) & 1) == 0 &&
      (*(float (**)(_QWORD*))(v2[5] + 328LL))(v2 + 5) == 0.0 &&
      v2[701] != *(_QWORD*)(**(_QWORD**)(a1 + 8) + 5608LL)) {
    ++**(_DWORD**)(a1 + 16);
    v4 = (*(__int64 (**)(_QWORD*))(v2[5] + 344LL))(v2 + 5);
    if (v4 < (*(int (**)(__int64))(*(_QWORD*)(**(_QWORD**)(a1 + 8) + 40LL) +
                                   344LL))(**(_QWORD**)(a1 + 8) + 40LL)) {
      v5 = *(_QWORD*)(a1 + 8);
    LABEL_9:
      *(_QWORD*)v5 = v2;
      return;
    }
    v6 = (*(__int64 (**)(_QWORD*))(v2[5] + 344LL))(v2 + 5);
    if (v6 ==
        (*(unsigned int (**)(__int64))(*(_QWORD*)(**(_QWORD**)(a1 + 8) + 40LL) +
                                       344LL))(**(_QWORD**)(a1 + 8) + 40LL)) {
      v5 = *(_QWORD*)(a1 + 8);
      if (v2[703] < *(_QWORD*)(*(_QWORD*)v5 + 5624LL)) {
        goto LABEL_9;
      }
    }
  }
}

bool snd_Slot_getVoiceNoActorCheck_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  const char* v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (const char*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 24LL))(*a2);
  v4 = strlen_alt1(v3);
  v5 = *(_BYTE*)v2 >> 1;
  if ((*(_BYTE*)v2 & 1) != 0) {
    v5 = *(_QWORD*)(v2 + 8);
  }
  if (v4 != v5) {
    return false;
  }
  v6 = v4;
  if (v4 == -1) {
    snd_a36650();
  }
  if ((*(_BYTE*)v2 & 1) != 0) {
    v7 = *(_QWORD*)(v2 + 16);
  }
  else {
    v7 = v2 + 1;
  }
  return memcmp_alt1(v7, (__int64)v3, v6) == 0;
}

bool snd_Slot_getVoiceNoActorCheck_lambda1_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  const char* v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (const char*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 24LL))(*a2);
  v4 = strlen_alt1(v3);
  v5 = *(_BYTE*)v2 >> 1;
  if ((*(_BYTE*)v2 & 1) != 0) {
    v5 = *(_QWORD*)(v2 + 8);
  }
  if (v4 != v5) {
    return false;
  }
  v6 = v4;
  if (v4 == -1) {
    snd_a36650();
  }
  if ((*(_BYTE*)v2 & 1) != 0) {
    v7 = *(_QWORD*)(v2 + 16);
  }
  else {
    v7 = v2 + 1;
  }
  return memcmp_alt1(v7, (__int64)v3, v6) == 0;
}

bool snd_Slot_getVoiceNoActorCheck_lambda2_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  const char* v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (const char*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 24LL))(*a2);
  v4 = strlen_alt1(v3);
  v5 = *(_BYTE*)v2 >> 1;
  if ((*(_BYTE*)v2 & 1) != 0) {
    v5 = *(_QWORD*)(v2 + 8);
  }
  if (v4 != v5) {
    return false;
  }
  v6 = v4;
  if (v4 == -1) {
    snd_a36650();
  }
  if ((*(_BYTE*)v2 & 1) != 0) {
    v7 = *(_QWORD*)(v2 + 16);
  }
  else {
    v7 = v2 + 1;
  }
  return memcmp_alt1(v7, (__int64)v3, v6) == 0;
}

__int64 snd_Slot_stop_lambda0_Invoke_13b530(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD, double))(
      *(_QWORD*)*a2 + 240LL))(*a2, *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16), 0,
                              0.0);
}

__int64 snd_Slot_stop_lambda1_Invoke_13b610(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD, double))(
      *(_QWORD*)*a2 + 240LL))(*a2, *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16), 0,
                              0.0);
}

__int64 snd_Slot_stop_lambda2_Invoke_13b6f0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD, double))(
      *(_QWORD*)*a2 + 240LL))(*a2, *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16), 0,
                              0.0);
}

__int64 snd_Slot_stop_lambda0_Invoke_13b7d0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, double))(
      *(_QWORD*)*a2 + 248LL))(*a2, *(_QWORD*)(a1 + 8), 0, 0.0);
}

__int64 snd_Slot_stop_lambda1_Invoke_13b8b0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, double))(
      *(_QWORD*)*a2 + 248LL))(*a2, *(_QWORD*)(a1 + 8), 0, 0.0);
}

__int64 snd_Slot_stop_lambda2_Invoke_13b990(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, double))(
      *(_QWORD*)*a2 + 248LL))(*a2, *(_QWORD*)(a1 + 8), 0, 0.0);
}

__int64 snd_Slot_stopSoundKind_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 664LL))(
      v2, *(unsigned int*)(a1 + 8));
  if ((result & 1) != 0) {
    return (*(__int64 (**)(__int64, _QWORD, _QWORD, double))(
        *(_QWORD*)v2 + 248LL))(v2, *(_QWORD*)(a1 + 16), 0, 0.0);
  }
  return result;
}

__int64 snd_Slot_stopSoundKind_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 664LL))(
      v2, *(unsigned int*)(a1 + 8));
  if ((result & 1) != 0) {
    return (*(__int64 (**)(__int64, _QWORD, _QWORD, double))(
        *(_QWORD*)v2 + 248LL))(v2, *(_QWORD*)(a1 + 16), 0, 0.0);
  }
  return result;
}

__int64 snd_Slot_stopSoundKind_lambda2_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 664LL))(
      v2, *(unsigned int*)(a1 + 8));
  if ((result & 1) != 0) {
    return (*(__int64 (**)(__int64, _QWORD, _QWORD, double))(
        *(_QWORD*)v2 + 248LL))(v2, *(_QWORD*)(a1 + 16), 0, 0.0);
  }
  return result;
}

__int64 snd_Slot_kill_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 256LL))(
      *a2, *(_QWORD*)(a1 + 8));
}

__int64 snd_Slot_kill_lambda1_Invoke(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 256LL))(
      *a2, *(_QWORD*)(a1 + 8));
}

__int64 snd_Slot_kill_lambda2_Invoke(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 256LL))(
      *a2, *(_QWORD*)(a1 + 8));
}

__int64 snd_Slot_mute_lambda0_Clone(__int64 a1)
{
  __int64 v2;

  v2 = GameRoutine_651190(0xD8u);
  *(_QWORD*)v2 = GameData_1f5a178;
  snd_Fade_Fade_10cd70(v2 + 8, a1 + 8);
  *(_BYTE*)(v2 + 208) = *(_BYTE*)(a1 + 208);
  return v2;
}

void snd_Slot_mute_lambda0_CloneInto(__int64 a1, __int64 a2)
{
  *(_QWORD*)a2 = GameData_1f5a178;
  snd_Fade_Fade_10cd70(a2 + 8, a1 + 8);
  *(_BYTE*)(a2 + 208) = *(_BYTE*)(a1 + 208);
}

_QWORD* snd_Slot_mute_lambda0_Invoke(__int64 a1, _QWORD** a2)
{
  return X8CALL_X0(_QWORD*,
                   (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD, __int64, _QWORD))(**a2 + 280LL))(
                       (void*)*a2, *a2, a1 + 8, *(unsigned __int8*)(a1 + 208)));
}

__int64 snd_Slot_mute_lambda1_Clone(__int64 a1)
{
  __int64 v2;

  v2 = GameRoutine_651190(0xD8u);
  *(_QWORD*)v2 = GameData_1f5a1f8;
  snd_Fade_Fade_10cd70(v2 + 8, a1 + 8);
  *(_BYTE*)(v2 + 208) = *(_BYTE*)(a1 + 208);
  return v2;
}

void snd_Slot_mute_lambda1_CloneInto(__int64 a1, __int64 a2)
{
  *(_QWORD*)a2 = GameData_1f5a1f8;
  snd_Fade_Fade_10cd70(a2 + 8, a1 + 8);
  *(_BYTE*)(a2 + 208) = *(_BYTE*)(a1 + 208);
}

_QWORD* snd_Slot_mute_lambda1_Invoke(__int64 a1, _QWORD** a2)
{
  return X8CALL_X0(_QWORD*,
                   (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD, __int64, _QWORD))(**a2 + 280LL))(
                       (void*)*a2, *a2, a1 + 8, *(unsigned __int8*)(a1 + 208)));
}

__int64 snd_Slot_mute_lambda2_Clone(__int64 a1)
{
  __int64 v2;

  v2 = GameRoutine_651190(0xD8u);
  *(_QWORD*)v2 = GameData_1f5a278;
  snd_Fade_Fade_10cd70(v2 + 8, a1 + 8);
  *(_BYTE*)(v2 + 208) = *(_BYTE*)(a1 + 208);
  return v2;
}

void snd_Slot_mute_lambda2_CloneInto(__int64 a1, __int64 a2)
{
  *(_QWORD*)a2 = GameData_1f5a278;
  snd_Fade_Fade_10cd70(a2 + 8, a1 + 8);
  *(_BYTE*)(a2 + 208) = *(_BYTE*)(a1 + 208);
}

_QWORD* snd_Slot_mute_lambda2_Invoke(__int64 a1, _QWORD** a2)
{
  return X8CALL_X0(_QWORD*,
                   (*(__attribute__((swiftcall)) void (**)(
                       PSEUDO_X8, _QWORD, __int64, _QWORD))(**a2 + 280LL))(
                       (void*)*a2, *a2, a1 + 8, *(unsigned __int8*)(a1 + 208)));
}

_QWORD* snd_Slot_resumeMute_lambda0_Invoke(__int64 a1, _QWORD** a2)
{
  return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                PSEUDO_X8, _QWORD, __int64))(**a2 + 296LL))(
                                (void*)*a2, *a2, a1 + 8));
}

_QWORD* snd_Slot_resumeMute_lambda1_Invoke(__int64 a1, _QWORD** a2)
{
  return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                PSEUDO_X8, _QWORD, __int64))(**a2 + 296LL))(
                                (void*)*a2, *a2, a1 + 8));
}

_QWORD* snd_Slot_resumeMute_lambda2_Invoke(__int64 a1, _QWORD** a2)
{
  return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                PSEUDO_X8, _QWORD, __int64))(**a2 + 296LL))(
                                (void*)*a2, *a2, a1 + 8));
}

_QWORD* snd_Slot_pause_lambda0_Invoke(__int64 a1, _QWORD** a2)
{
  return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                PSEUDO_X8, _QWORD, __int64, _QWORD))(
                                **a2 + 312LL))((void*)*a2, *a2, a1 + 8, 0));
}

_QWORD* snd_Slot_pause_lambda1_Invoke(__int64 a1, _QWORD** a2)
{
  return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                PSEUDO_X8, _QWORD, __int64, _QWORD))(
                                **a2 + 312LL))((void*)*a2, *a2, a1 + 8, 0));
}

_QWORD* snd_Slot_pause_lambda2_Invoke(__int64 a1, _QWORD** a2)
{
  return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                PSEUDO_X8, _QWORD, __int64, _QWORD))(
                                **a2 + 312LL))((void*)*a2, *a2, a1 + 8, 0));
}

_QWORD* snd_Slot_resumePause_lambda0_Invoke(__int64 a1, _QWORD** a2)
{
  return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                PSEUDO_X8, _QWORD, __int64))(**a2 + 328LL))(
                                (void*)*a2, *a2, a1 + 8));
}

_QWORD* snd_Slot_resumePause_lambda1_Invoke(__int64 a1, _QWORD** a2)
{
  return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                PSEUDO_X8, _QWORD, __int64))(**a2 + 328LL))(
                                (void*)*a2, *a2, a1 + 8));
}

_QWORD* snd_Slot_resumePause_lambda2_Invoke(__int64 a1, _QWORD** a2)
{
  return X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                PSEUDO_X8, _QWORD, __int64))(**a2 + 328LL))(
                                (void*)*a2, *a2, a1 + 8));
}

__int64 snd_Slot_silent_lambda0_Destructor(_QWORD* a1)
{
  *a1 = GameData_1f5a778;
  return snd_Fade_Destroy_Fade_alt1(a1 + 2);
}

void snd_Slot_silent_lambda0_DeletingDestructor(_QWORD* a1)
{
  *a1 = GameData_1f5a778;
  snd_Fade_Destroy_Fade(a1 + 2);
  GameRoutine_651250(a1, 0xD8u);
}

__int64 snd_Slot_silent_lambda0_Clone(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = GameRoutine_651190(0xD8u);
  v3 = *(_DWORD*)(a1 + 8);
  v4 = v2;
  *(_QWORD*)v2 = GameData_1f5a778;
  *(_DWORD*)(v2 + 8) = v3;
  snd_Fade_Fade_10cd70(v2 + 16, a1 + 16);
  return v4;
}

float snd_Slot_silent_lambda0_CloneInto(__int64 a1, __int64 a2)
{
  *(_QWORD*)a2 = GameData_1f5a778;
  *(_DWORD*)(a2 + 8) = *(_DWORD*)(a1 + 8);
  return snd_Fade_Fade_10cd70(a2 + 16, a1 + 16);
}

__int64 snd_Slot_silent_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  return snd_Voice_startPitchChecked(*a2, a1 + 16, *(float*)(a1 + 8));
}

__int64 snd_Slot_silent_lambda1_Destructor(_QWORD* a1)
{
  *a1 = GameData_1f5a7f8;
  return snd_Fade_Destroy_Fade_alt1(a1 + 2);
}

void snd_Slot_silent_lambda1_DeletingDestructor(_QWORD* a1)
{
  *a1 = GameData_1f5a7f8;
  snd_Fade_Destroy_Fade(a1 + 2);
  GameRoutine_651250(a1, 0xD8u);
}

__int64 snd_Slot_silent_lambda1_Clone(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = GameRoutine_651190(0xD8u);
  v3 = *(_DWORD*)(a1 + 8);
  v4 = v2;
  *(_QWORD*)v2 = GameData_1f5a7f8;
  *(_DWORD*)(v2 + 8) = v3;
  snd_Fade_Fade_10cd70(v2 + 16, a1 + 16);
  return v4;
}

float snd_Slot_silent_lambda1_CloneInto(__int64 a1, __int64 a2)
{
  *(_QWORD*)a2 = GameData_1f5a7f8;
  *(_DWORD*)(a2 + 8) = *(_DWORD*)(a1 + 8);
  return snd_Fade_Fade_10cd70(a2 + 16, a1 + 16);
}

__int64 snd_Slot_silent_lambda1_Invoke(__int64 a1, _QWORD* a2)
{
  return snd_Voice_startPitchChecked(*a2, a1 + 16, *(float*)(a1 + 8));
}

__int64 snd_Slot_silent_lambda2_Destructor(_QWORD* a1)
{
  *a1 = GameData_1f5a878;
  return snd_Fade_Destroy_Fade_alt1(a1 + 2);
}

void snd_Slot_silent_lambda2_DeletingDestructor(_QWORD* a1)
{
  *a1 = GameData_1f5a878;
  snd_Fade_Destroy_Fade(a1 + 2);
  GameRoutine_651250(a1, 0xD8u);
}

__int64 snd_Slot_silent_lambda2_Clone(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = GameRoutine_651190(0xD8u);
  v3 = *(_DWORD*)(a1 + 8);
  v4 = v2;
  *(_QWORD*)v2 = GameData_1f5a878;
  *(_DWORD*)(v2 + 8) = v3;
  snd_Fade_Fade_10cd70(v2 + 16, a1 + 16);
  return v4;
}

float snd_Slot_silent_lambda2_CloneInto(__int64 a1, __int64 a2)
{
  *(_QWORD*)a2 = GameData_1f5a878;
  *(_DWORD*)(a2 + 8) = *(_DWORD*)(a1 + 8);
  return snd_Fade_Fade_10cd70(a2 + 16, a1 + 16);
}

__int64 snd_Slot_silent_lambda2_Invoke(__int64 a1, _QWORD* a2)
{
  return snd_Voice_startPitchChecked(*a2, a1 + 16, *(float*)(a1 + 8));
}

__int64 snd_Slot_isActive_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 368LL))(
      *a2, *(_QWORD*)(a1 + 8));
}

__int64 snd_Slot_isActive_lambda1_Invoke(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 368LL))(
      *a2, *(_QWORD*)(a1 + 8));
}

__int64 snd_Slot_isActive_lambda2_Invoke(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 368LL))(
      *a2, *(_QWORD*)(a1 + 8));
}

unsigned __int64 snd_Slot_countActiveVoice_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2)
{
  __int64 v2;
  const char* v4;
  unsigned __int64 result;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = (const char*)GameRoutine_190240_alt1(*a2 + 5736LL);
  result = strlen_alt1(v4);
  v6 = *(_BYTE*)v2 >> 1;
  if ((*(_BYTE*)v2 & 1) != 0) {
    v6 = *(_QWORD*)(v2 + 8);
  }
  if (result == v6) {
    v7 = result;
    if (result == -1) {
      snd_a36650();
    }
    if ((*(_BYTE*)v2 & 1) != 0) {
      v8 = *(_QWORD*)(v2 + 16);
    }
    else {
      v8 = v2 + 1;
    }
    result = memcmp_alt1(v8, (__int64)v4, v7);
    if ((_DWORD)result == 0) {
      ++**(_DWORD**)(a1 + 8);
    }
  }
  return result;
}

__int64 snd_Slot_countActiveVoice_lambda1_Invoke(__int64 a1, _QWORD** a2)
{
  __int64 result;

  result = SeqVoice_12dce0(*a2, *(_QWORD*)(a1 + 16));
  **(_DWORD**)(a1 + 8) += result;
  return result;
}

unsigned __int64 snd_Slot_countActiveVoice_lambda2_Invoke(__int64 a1,
                                                          _QWORD* a2)
{
  __int64 v2;
  const char* v4;
  unsigned __int64 result;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = (const char*)GameRoutine_190240_alt1(*a2 + 5736LL);
  result = strlen_alt1(v4);
  v6 = *(_BYTE*)v2 >> 1;
  if ((*(_BYTE*)v2 & 1) != 0) {
    v6 = *(_QWORD*)(v2 + 8);
  }
  if (result == v6) {
    v7 = result;
    if (result == -1) {
      snd_a36650();
    }
    if ((*(_BYTE*)v2 & 1) != 0) {
      v8 = *(_QWORD*)(v2 + 16);
    }
    else {
      v8 = v2 + 1;
    }
    result = memcmp_alt1(v8, (__int64)v4, v7);
    if ((_DWORD)result == 0) {
      ++**(_DWORD**)(a1 + 8);
    }
  }
  return result;
}

#pragma GCC visibility pop
