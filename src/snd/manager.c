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
_QWORD* ConstructString_1901f0(_QWORD* result);
_QWORD* GameRoutine_190a20(_QWORD* result);
_QWORD* GameRoutine_a3a3a0(_QWORD*, __int64, unsigned __int64);
_QWORD* snd_data_f3c60(_QWORD* result);
__int64* GameRoutine_a3a260(__int64*, __int64, unsigned __int64);
__int64 Archive_104390(__int64);
__int64 Archive_1043f0(__int64 result);
__int64 BaseNX_1599e0(_QWORD);
__int64 BaseNX_159a40();
__int64 Crc32List_116570(__int64, __int64, __int64, __int64);
__int64 Crc32List_118060(__int64, __int64, __int64, __int64);
__int64 Crc32List_118120(__int64, __int64, __int64, unsigned int, unsigned int);
__int64 Crc32List_118980(__int64, void (***)(_QWORD));
__int64 Crc32List_118b20(__int64, void (***)(_QWORD));
__int64 Crc32List_118c10(__int64, void (***)(_QWORD));
__int64 Crc32List_11f420(__int64, __int64*);
__int64 Crc32List_120520(_QWORD*, __int64);
__int64 Crc32List_17be70_alt1(__int64 result, int) __asm__("Crc32List_17be70");
__int64 Data_f6b70();
__int64 Data_f6cc0(int*);
__int64 FileManager_10def0(__int64);
__int64 GameRoutine_10ab20(__int64);
__int64 GameRoutine_10df50(_QWORD);
__int64 GameRoutine_10e7a0(__int64);
__int64 GameRoutine_1101f0(__int64);
__int64 GameRoutine_110250(__int64 result);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_13ed60(__int64, _DWORD*);
__int64 GameRoutine_17a750(__int64);
__int64 GameRoutine_17a790(__int64 result);
__int64 GameRoutine_17ba40(__int64 result);
__int64 GameRoutine_17bcd0(__int64, __int64);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_1909b0(__int64);
__int64 GameRoutine_2b0();
__int64 GameRoutine_651190(__int64);
__int64 GameRoutine_a392e0(__int64, __int64, ...);
__int64 GameRoutine_f47f0();
__int64 GameRoutine_f4ae0();
__int64 GameRoutine_f4b50(int);
__int64 GameRoutine_f4bc0();
__int64 GameRoutine_f5690();
__int64 GameRoutine_f57c0(int*);
__int64 GameRoutine_f5850(int, _QWORD*, char);
__int64 GameRoutine_f6240();
__int64 GameRoutine_f63e0(int*);
__int64 GameRoutine_f6470(int, _QWORD*, char);
__int64 Manager_11e980_alt1(_QWORD, _QWORD, _QWORD,
                            _QWORD) __asm__("Manager_11e980");
__int64 Manager_11eb50_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD) __asm__("Manager_11eb50");
__int64 VibrationGroup_13df20(__int64);
__int64 VibrationGroup_13df80(__int64 result);
__int64 WavePlayer_17bc10(__int64);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_InitializeMutex(_QWORD, _QWORD, _QWORD);
__int64 snd_clearHandles(_QWORD);
__int64 snd_data_getSettingData();
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64 snd_fnd_WeakHandle_set(__int64, __int64);
__int64 snd_fnd_WeakHandle_set_alt1(_QWORD,
                                    _QWORD) __asm__("snd_fnd_WeakHandle_set");
extern __int16* GameData_2134650[6];
extern __int16* GameData_2134658[5];
extern __int64 (*GameData_1f551d0[])();
extern __int64 (*GameData_1f55230[])();
extern __int64 (*GameData_1f55290[])();
extern __int64 (*GameData_1f552f0[])();
extern __int64 (*GameData_1f55350[])();
extern __int64 (*GameData_1f553b0[])();
extern __int64 (*GameData_1f55410[])();
extern __int64 (*GameData_1f55470[])();
extern __int64 (*GameData_1f554d0[])();
extern __int64 (*GameData_1f55530[])();
extern __int64 (*GameData_1f55590[])();
extern __int64 (*GameData_1f555c0[])();
extern __int64 (*GameData_1f555f0[])();
extern __int64 (*GameData_1f55f40[])();
extern __int64 (*GameData_1f55fc0[])();
extern __int64 (*GameData_1f56040[])();
extern __int64 (*GameData_1f560c0[])();
extern __int64 (*GameData_1f56140[])();
extern __int64 (*GameData_1f561c0[])();
extern __int64 (*GameData_1f56240[])();
extern __int64 (*GameData_1f562c0[])();
extern __int64 (*GameData_1f56340[])();
extern __int64 (*GameData_1f563c0[])();
extern __int64 (*GameData_1f56440[])();
extern __int64 (*GameData_1f564c0[])();
extern __int64 (*GameData_1f56540[])();
extern __int64 (*GameData_1f565c0[])();
extern __int64 (*GameData_1f56640[])();
extern __int64 (*GameData_1f566c0[])();
extern __int64 (*GameData_1f56b40[])();
extern __int64 (*GameData_1f56cd0[])();
extern __int64 (*GameData_1f56f50[])();
extern __int64 (*snd_fnd_Vec3_vtable[])();
extern __int64* GameData_2134208[5];
extern __int64* GameData_2134570[27];
extern __int64* GameData_2134578[26];
extern __int64* GameData_2134580[25];
extern __int64* GameData_2134588[24];
extern __int64* GameData_2134590[23];
extern __int64* GameData_2134598[22];
extern __int64* GameData_21345a0[21];
extern __int64* GameData_21345a8[20];
extern __int64* GameData_21345b0[19];
extern __int64* GameData_21345b8[18];
extern __int64* GameData_21345c0[17];
extern __int64* GameData_21345c8[16];
extern __int64* GameData_21345d0[15];
extern __int64* GameData_21345d8[14];
extern __int64* GameData_21345e0[13];
extern __int64* GameData_21345e8[12];
extern __int64* GameData_21345f0[11];
extern __int64* GameData_21345f8[10];
extern __int64* GameData_2134600[9];
extern __int64* GameData_2134608[8];
extern __int64* GameData_2134610[7];
extern __int64* GameData_2134618[6];
extern __int64* GameData_2134620[5];
extern __int64* GameData_2134628[4];
extern __int64* GameData_2134630[3];
extern __int64* GameData_2134638[2];
extern __int64* GameData_2134640;
extern __int64* snd_Game_s_instance_ptr[3];
extern __int64 GameData_2198f9c;
extern __int64 GameData_2198fa4;
extern __int64 GameData_2198fb0;
extern __int64 GameData_2198fcc;
extern __int64 GameData_2198fd4;
extern __int64 GameData_2198fe0;
extern __int64 snd_g_memory;
extern int GameData_2198f98;
extern int GameData_2198fac;
extern int GameData_2198fc8;
extern int GameData_2198fdc;
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void GameRoutine_f4080();
void GameRoutine_f4680();
void Listener_112bd0(float*, float, float, float);
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
void snd_data_f4400();
void snd_data_f4860();
void snd_data_f4c20();
void snd_data_f5b80();
void snd_data_f6760();
__int64 Manager_113100(__int64 a1);
__int64 Manager_Destructor(__int64 a1);
__int64 Manager_1163c0(__int64 a1);
__int64 (***snd_Manager_updateVoice(__int64** a1, long double a2))();
__int64 Manager_117bc0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4);
__attribute__((swiftcall)) void Manager_1181f0(PSEUDO_X8 x8_, __int64 result,
                                               int a2);
__int64 Manager_118260(__int64 result, const char* a2);
__int64 Manager_11e4c0(__int64 a1, int* a2);
__int64 Manager_11e6d0(__int64 a1, int a2, float a3, float a4, float a5);
void Manager_11e790(__int64 a1, int a2, float a3, float a4, float a5);
__attribute__((swiftcall)) void Manager_11e860(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void Manager_11e880(PSEUDO_X8 x8_, __int64 result,
                                               __int64 a2, unsigned int a3);
__attribute__((swiftcall)) void Manager_11ea40(PSEUDO_X8 x8_, __int64 result,
                                               __int64 a2, unsigned int a3,
                                               unsigned int a4);
__attribute__((swiftcall)) void Manager_11ec80(PSEUDO_X8 x8_, __int64 a1,
                                               int* a2);
__attribute__((swiftcall)) void
snd_Manager_getVoiceNoActorCheck(PSEUDO_X8 x8_, __int64 a1, __int64 a2);
__attribute__((swiftcall)) void
Manager_11f360(PSEUDO_X8 x8_, __int64 a1, __int64 unused_int1,
               __int64 unused_int2, __int64 unused_int3, unsigned int a2,
               unsigned int a3);
__attribute__((swiftcall)) void
Manager_11f980(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3, __int64 a4,
               unsigned int a5, unsigned int a6, unsigned int a7, char a8);
__attribute__((swiftcall)) void
Manager_11fa50(PSEUDO_X8 x8_, __int64 a1, __int64 unused_int1,
               __int64 unused_int2, __int64 unused_int3, unsigned int a2,
               unsigned int a3);
__attribute__((swiftcall)) void
Manager_11fb10(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3, __int64 a4,
               unsigned int a5, unsigned int a6, unsigned int a7, char a8);
__attribute__((swiftcall)) void
Manager_11fbe0(PSEUDO_X8 x8_, __int64 a1, __int64 unused_int1,
               __int64 unused_int2, __int64 unused_int3, unsigned int a2,
               unsigned int a3);
__attribute__((swiftcall)) void
Manager_11fca0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3, __int64 a4,
               unsigned int a5, unsigned int a6, unsigned int a7, char a8);
__attribute__((swiftcall)) void
Manager_11fd70(PSEUDO_X8 x8_, __int64 a1, __int64 unused_int1,
               __int64 unused_int2, __int64 unused_int3, unsigned int a2,
               unsigned int a3);
__attribute__((swiftcall)) void
Manager_11fe30(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3, __int64 a4,
               unsigned int a5, unsigned int a6, unsigned int a7, char a8);
__attribute__((swiftcall)) void
Manager_11ff00(PSEUDO_X8 x8_, __int64 a1, __int64 unused_int1,
               __int64 unused_int2, __int64 unused_int3, unsigned int a2,
               unsigned int a3);
__attribute__((swiftcall)) void Manager_11ffc0(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, __int64 a3,
                                               unsigned int a4, unsigned int a5,
                                               unsigned int a6, char a7);
__attribute__((swiftcall)) void Manager_120380(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void Manager_120450(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2);
__attribute__((swiftcall)) void Manager_120710(PSEUDO_X8 x8_, _QWORD* a1);
__int64 Manager_125eb0();

__int64 Manager_113100(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int16 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int16 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int16 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int16 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int16 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int16 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int16 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int16 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int16 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int16 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int16 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int16 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int16 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int16 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int16 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int16 v85;
  __int64 v86;
  __int64 v87;
  int v88;
  int v89;
  unsigned __int16 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int16 v97;
  __int64 v98;
  __int64 v99;
  unsigned __int16 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int16 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int16 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int16 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int16 v125;
  __int64 v126;
  __int64 v127;
  unsigned int v128;
  __int64* v129;
  __int64 v130;
  __int64* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;

  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_BYTE*)(a1 + 8) = 1;
  *(_QWORD*)(a1 + 64) = 0;
  v2 = GameData_2134580[0];
  *(_QWORD*)(a1 + 40) = a1 + 16;
  *(_QWORD*)(a1 + 48) = a1 + 24;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  v3 = a1 + 224;
  *(_QWORD*)(a1 + 88) = a1 + 64;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 32) = 5608;
  *(_QWORD*)(a1 + 112) = 5608;
  *(_QWORD*)(a1 + 72) = 5608;
  *(_QWORD*)(a1 + 80) = a1 + 56;
  *(_QWORD*)(a1 + 120) = a1 + 96;
  *(_QWORD*)(a1 + 128) = a1 + 104;
  *(_QWORD*)(a1 + 152) = 5608;
  *(_QWORD*)(a1 + 192) = 5608;
  *(_QWORD*)(a1 + 248) = a1 + 224;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 5608;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 5608;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 5608;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 5608;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 584) = 0;
  *(_QWORD*)(a1 + 592) = 5608;
  *(_QWORD*)(a1 + 616) = 0;
  *(_QWORD*)(a1 + 624) = 0;
  *(_QWORD*)(a1 + 664) = 0;
  *(_QWORD*)(a1 + 672) = 5608;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 752) = 5608;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 792) = 5608;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 832) = 5608;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_QWORD*)(a1 + 872) = 5608;
  *(_QWORD*)(a1 + 904) = 0;
  *(_QWORD*)(a1 + 896) = 0;
  *(_QWORD*)(a1 + 912) = 5608;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 952) = 5608;
  *(_QWORD*)(a1 + 984) = 0;
  *(_QWORD*)(a1 + 976) = 0;
  *(_QWORD*)(a1 + 992) = 5608;
  *(_QWORD*)(a1 + 1024) = 0;
  *(_QWORD*)(a1 + 1016) = 0;
  *(_QWORD*)(a1 + 1032) = 5608;
  *(_QWORD*)(a1 + 1064) = 0;
  *(_QWORD*)(a1 + 1056) = 0;
  *(_QWORD*)(a1 + 1072) = 5608;
  *(_QWORD*)(a1 + 1104) = 0;
  *(_QWORD*)(a1 + 1096) = 0;
  *(_QWORD*)(a1 + 1112) = 5608;
  *(_QWORD*)a1 = v2 + 2;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 1144) = 0;
  *(_QWORD*)(a1 + 1136) = 0;
  *(_QWORD*)(a1 + 1152) = 5608;
  *(_QWORD*)(a1 + 1184) = 0;
  *(_QWORD*)(a1 + 1176) = 0;
  *(_QWORD*)(a1 + 1192) = 5608;
  *(_QWORD*)(a1 + 1224) = 0;
  *(_QWORD*)(a1 + 160) = a1 + 136;
  *(_QWORD*)(a1 + 168) = a1 + 144;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 1216) = 0;
  *(_QWORD*)(a1 + 1232) = 5608;
  *(_QWORD*)(a1 + 1264) = 0;
  *(_QWORD*)(a1 + 1256) = 0;
  *(_QWORD*)(a1 + 1272) = 5608;
  *(_QWORD*)(a1 + 200) = a1 + 176;
  *(_QWORD*)(a1 + 208) = a1 + 184;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 1304) = 0;
  *(_QWORD*)(a1 + 1296) = 0;
  *(_QWORD*)(a1 + 1312) = 5608;
  *(_QWORD*)(a1 + 1344) = 0;
  *(_QWORD*)(a1 + 1336) = 0;
  *(_QWORD*)(a1 + 1352) = 5608;
  *(_QWORD*)(a1 + 1384) = 0;
  *(_QWORD*)(a1 + 232) = 5608;
  *(_QWORD*)(a1 + 240) = a1 + 216;
  *(_QWORD*)(a1 + 1376) = 0;
  *(_QWORD*)(a1 + 1392) = 5608;
  *(_QWORD*)(a1 + 1424) = 0;
  *(_QWORD*)(a1 + 1416) = 0;
  *(_QWORD*)(a1 + 1432) = 5608;
  *(_QWORD*)(a1 + 1464) = 0;
  *(_QWORD*)(a1 + 1456) = 0;
  *(_QWORD*)(a1 + 1472) = 5608;
  *(_QWORD*)(a1 + 1504) = 0;
  *(_QWORD*)(a1 + 1496) = 0;
  *(_QWORD*)(a1 + 280) = a1 + 256;
  *(_QWORD*)(a1 + 288) = a1 + 264;
  *(_QWORD*)(a1 + 1512) = 5608;
  *(_QWORD*)(a1 + 1544) = 0;
  *(_QWORD*)(a1 + 1536) = 0;
  *(_QWORD*)(a1 + 1552) = 5608;
  *(_QWORD*)(a1 + 1584) = 0;
  *(_QWORD*)(a1 + 1576) = 0;
  *(_QWORD*)(a1 + 1592) = 5608;
  *(_QWORD*)(a1 + 1624) = 0;
  *(_QWORD*)(a1 + 1616) = 0;
  *(_QWORD*)(a1 + 312) = 5608;
  *(_QWORD*)(a1 + 320) = a1 + 296;
  *(_QWORD*)(a1 + 328) = a1 + 304;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 1632) = 5608;
  *(_QWORD*)(a1 + 1664) = 0;
  *(_QWORD*)(a1 + 1656) = 0;
  *(_QWORD*)(a1 + 1672) = 5608;
  *(_QWORD*)(a1 + 1704) = 0;
  *(_QWORD*)(a1 + 1696) = 0;
  *(_QWORD*)(a1 + 1712) = 5608;
  *(_QWORD*)(a1 + 1744) = 0;
  *(_QWORD*)(a1 + 360) = a1 + 336;
  *(_QWORD*)(a1 + 368) = a1 + 344;
  *(_QWORD*)(a1 + 408) = a1 + 384;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 1736) = 0;
  *(_QWORD*)(a1 + 1752) = 5608;
  *(_QWORD*)(a1 + 1784) = 0;
  *(_QWORD*)(a1 + 1776) = 0;
  *(_QWORD*)(a1 + 1792) = 5608;
  *(_QWORD*)(a1 + 1824) = 0;
  *(_QWORD*)(a1 + 1816) = 0;
  *(_QWORD*)(a1 + 392) = 5608;
  *(_QWORD*)(a1 + 400) = a1 + 376;
  *(_QWORD*)(a1 + 488) = a1 + 464;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 1832) = 5608;
  *(_QWORD*)(a1 + 1864) = 0;
  *(_QWORD*)(a1 + 1856) = 0;
  *(_QWORD*)(a1 + 1872) = 5608;
  *(_QWORD*)(a1 + 1904) = 0;
  *(_QWORD*)(a1 + 1896) = 0;
  *(_QWORD*)(a1 + 1912) = 5608;
  *(_QWORD*)(a1 + 1944) = 0;
  *(_QWORD*)(a1 + 440) = a1 + 416;
  *(_QWORD*)(a1 + 448) = a1 + 424;
  *(_QWORD*)(a1 + 568) = a1 + 544;
  *(_QWORD*)(a1 + 576) = 0;
  *(_QWORD*)(a1 + 1936) = 0;
  *(_QWORD*)(a1 + 1952) = 5608;
  *(_QWORD*)(a1 + 1984) = 0;
  *(_QWORD*)(a1 + 1976) = 0;
  *(_QWORD*)(a1 + 1992) = 5608;
  *(_QWORD*)(a1 + 2024) = 0;
  *(_QWORD*)(a1 + 2016) = 0;
  *(_QWORD*)(a1 + 472) = 5608;
  *(_QWORD*)(a1 + 480) = a1 + 456;
  *(_QWORD*)(a1 + 648) = a1 + 624;
  *(_QWORD*)(a1 + 656) = 0;
  *(_QWORD*)(a1 + 2032) = 5608;
  *(_QWORD*)(a1 + 2064) = 0;
  *(_QWORD*)(a1 + 2056) = 0;
  *(_QWORD*)(a1 + 2072) = 5608;
  *(_QWORD*)(a1 + 2104) = 0;
  *(_QWORD*)(a1 + 2096) = 0;
  *(_QWORD*)(a1 + 2112) = 5608;
  *(_QWORD*)(a1 + 2192) = 0;
  *(_QWORD*)(a1 + 520) = a1 + 496;
  *(_QWORD*)(a1 + 528) = a1 + 504;
  *(_QWORD*)(a1 + 728) = a1 + 704;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 2184) = 0;
  *(_QWORD*)(a1 + 2176) = 0;
  *(_QWORD*)(a1 + 2168) = 0;
  *(_QWORD*)(a1 + 2160) = 0;
  *(_QWORD*)(a1 + 2152) = 0;
  *(_QWORD*)(a1 + 2144) = 0;
  *(_QWORD*)(a1 + 2136) = 0;
  *(_QWORD*)(a1 + 552) = 5608;
  *(_QWORD*)(a1 + 560) = a1 + 536;
  *(_QWORD*)(a1 + 808) = a1 + 784;
  *(_QWORD*)(a1 + 600) = a1 + 576;
  *(_QWORD*)(a1 + 608) = a1 + 584;
  *(_QWORD*)(a1 + 848) = a1 + 824;
  *(_QWORD*)(a1 + 632) = 5608;
  *(_QWORD*)(a1 + 640) = a1 + 616;
  *(_QWORD*)(a1 + 888) = a1 + 864;
  *(_QWORD*)(a1 + 680) = a1 + 656;
  *(_QWORD*)(a1 + 688) = a1 + 664;
  *(_QWORD*)(a1 + 928) = a1 + 904;
  *(_QWORD*)(a1 + 712) = 5608;
  *(_QWORD*)(a1 + 720) = a1 + 696;
  *(_QWORD*)(a1 + 968) = a1 + 944;
  *(_QWORD*)(a1 + 768) = a1 + 744;
  *(_QWORD*)(a1 + 760) = a1 + 736;
  *(_QWORD*)(a1 + 1008) = a1 + 984;
  *(_QWORD*)(a1 + 800) = a1 + 776;
  *(_QWORD*)(a1 + 1048) = a1 + 1024;
  *(_QWORD*)(a1 + 840) = a1 + 816;
  *(_QWORD*)(a1 + 1088) = a1 + 1064;
  *(_QWORD*)(a1 + 880) = a1 + 856;
  *(_QWORD*)(a1 + 1128) = a1 + 1104;
  *(_QWORD*)(a1 + 920) = a1 + 896;
  *(_QWORD*)(a1 + 1168) = a1 + 1144;
  *(_QWORD*)(a1 + 960) = a1 + 936;
  *(_QWORD*)(a1 + 1208) = a1 + 1184;
  *(_QWORD*)(a1 + 1000) = a1 + 976;
  *(_QWORD*)(a1 + 1248) = a1 + 1224;
  *(_QWORD*)(a1 + 1040) = a1 + 1016;
  *(_QWORD*)(a1 + 1288) = a1 + 1264;
  *(_QWORD*)(a1 + 1080) = a1 + 1056;
  *(_QWORD*)(a1 + 1328) = a1 + 1304;
  *(_QWORD*)(a1 + 1120) = a1 + 1096;
  *(_QWORD*)(a1 + 1368) = a1 + 1344;
  *(_QWORD*)(a1 + 1160) = a1 + 1136;
  *(_QWORD*)(a1 + 1408) = a1 + 1384;
  *(_QWORD*)(a1 + 1200) = a1 + 1176;
  *(_QWORD*)(a1 + 1448) = a1 + 1424;
  *(_QWORD*)(a1 + 1240) = a1 + 1216;
  *(_QWORD*)(a1 + 1488) = a1 + 1464;
  *(_QWORD*)(a1 + 1280) = a1 + 1256;
  *(_QWORD*)(a1 + 1528) = a1 + 1504;
  *(_QWORD*)(a1 + 1320) = a1 + 1296;
  *(_QWORD*)(a1 + 1568) = a1 + 1544;
  *(_QWORD*)(a1 + 1360) = a1 + 1336;
  *(_QWORD*)(a1 + 1608) = a1 + 1584;
  *(_QWORD*)(a1 + 1400) = a1 + 1376;
  *(_QWORD*)(a1 + 1648) = a1 + 1624;
  *(_QWORD*)(a1 + 1440) = a1 + 1416;
  *(_QWORD*)(a1 + 1688) = a1 + 1664;
  *(_QWORD*)(a1 + 1480) = a1 + 1456;
  *(_QWORD*)(a1 + 1728) = a1 + 1704;
  *(_QWORD*)(a1 + 1520) = a1 + 1496;
  *(_QWORD*)(a1 + 1768) = a1 + 1744;
  *(_QWORD*)(a1 + 1560) = a1 + 1536;
  *(_QWORD*)(a1 + 1808) = a1 + 1784;
  *(_QWORD*)(a1 + 1600) = a1 + 1576;
  *(_QWORD*)(a1 + 1848) = a1 + 1824;
  *(_QWORD*)(a1 + 1640) = a1 + 1616;
  *(_QWORD*)(a1 + 1888) = a1 + 1864;
  *(_QWORD*)(a1 + 1680) = a1 + 1656;
  *(_QWORD*)(a1 + 1928) = a1 + 1904;
  *(_QWORD*)(a1 + 1720) = a1 + 1696;
  *(_QWORD*)(a1 + 1968) = a1 + 1944;
  *(_QWORD*)(a1 + 1760) = a1 + 1736;
  *(_QWORD*)(a1 + 2008) = a1 + 1984;
  *(_QWORD*)(a1 + 1800) = a1 + 1776;
  *(_QWORD*)(a1 + 2048) = a1 + 2024;
  *(_QWORD*)(a1 + 1840) = a1 + 1816;
  *(_QWORD*)(a1 + 2088) = a1 + 2064;
  *(_QWORD*)(a1 + 1880) = a1 + 1856;
  *(_QWORD*)(a1 + 2128) = a1 + 2104;
  *(_QWORD*)(a1 + 1920) = a1 + 1896;
  *(_QWORD*)(a1 + 1960) = a1 + 1936;
  *(_QWORD*)(a1 + 2000) = a1 + 1976;
  *(_QWORD*)(a1 + 2040) = a1 + 2016;
  *(_QWORD*)(a1 + 2080) = a1 + 2056;
  *(_QWORD*)(a1 + 2120) = a1 + 2096;
  *(_QWORD*)(a1 + 2200) = GameData_2134588[0] + 2;
  *(_WORD*)(a1 + 2240) = 0;
  *(_QWORD*)(a1 + 2256) = 0;
  *(_DWORD*)(a1 + 2264) = 0;
  *(_DWORD*)(a1 + 2232) = 0;
  *(_QWORD*)(a1 + 2224) = 0;
  *(_QWORD*)(a1 + 2216) = 0;
  *(_QWORD*)(a1 + 2208) = GameData_1f551d0;
  *(_QWORD*)(a1 + 2244) = 0;
  nn_os_InitializeMutex(a1 + 2240, 1, 0);
  *(_BYTE*)(v3 + 2048) = 0;
  *(_QWORD*)(v3 + 2056) = GameData_2134598[0] + 2;
  *(_WORD*)(v3 + 2096) = 0;
  *(_QWORD*)(v3 + 2112) = 0;
  *(_DWORD*)(v3 + 2120) = 0;
  *(_QWORD*)(v3 + 2072) = 0;
  *(_QWORD*)(v3 + 2080) = 0;
  *(_DWORD*)(v3 + 2088) = 0;
  *(_QWORD*)(v3 + 2064) = GameData_1f55230;
  *(_QWORD*)(v3 + 2100) = 0;
  nn_os_InitializeMutex(v3 + 2096, 1, 0);
  *(_BYTE*)(v3 + 2128) = 0;
  *(_QWORD*)(v3 + 2136) = GameData_21345a8[0] + 2;
  *(_WORD*)(v3 + 2176) = 0;
  *(_QWORD*)(v3 + 2192) = 0;
  *(_DWORD*)(v3 + 2200) = 0;
  *(_QWORD*)(v3 + 2152) = 0;
  *(_QWORD*)(v3 + 2160) = 0;
  *(_DWORD*)(v3 + 2168) = 0;
  *(_QWORD*)(v3 + 2144) = GameData_1f55290;
  *(_QWORD*)(v3 + 2180) = 0;
  nn_os_InitializeMutex(v3 + 2176, 1, 0);
  *(_QWORD*)(v3 + 2216) = GameData_21345b8[0] + 2;
  *(_BYTE*)(v3 + 2208) = 0;
  *(_WORD*)(v3 + 2256) = 0;
  *(_DWORD*)(v3 + 2260) = 0;
  *(_DWORD*)(v3 + 2264) = 0;
  *(_QWORD*)(v3 + 2272) = 0;
  *(_DWORD*)(v3 + 2280) = 0;
  *(_QWORD*)(v3 + 2232) = 0;
  *(_QWORD*)(v3 + 2240) = 0;
  *(_DWORD*)(v3 + 2248) = 0;
  *(_QWORD*)(v3 + 2224) = GameData_1f552f0;
  nn_os_InitializeMutex(v3 + 2256, 1, 0);
  *(_QWORD*)(v3 + 2296) = GameData_21345c8[0] + 2;
  *(_BYTE*)(v3 + 2288) = 0;
  *(_WORD*)(v3 + 2336) = 0;
  *(_DWORD*)(v3 + 2340) = 0;
  *(_DWORD*)(v3 + 2344) = 0;
  *(_QWORD*)(v3 + 2352) = 0;
  *(_DWORD*)(v3 + 2360) = 0;
  *(_QWORD*)(v3 + 2312) = 0;
  *(_QWORD*)(v3 + 2320) = 0;
  *(_DWORD*)(v3 + 2328) = 0;
  *(_QWORD*)(v3 + 2304) = GameData_1f55350;
  nn_os_InitializeMutex(v3 + 2336, 1, 0);
  *(_QWORD*)(v3 + 2376) = GameData_21345d8[0] + 2;
  *(_BYTE*)(v3 + 2368) = 0;
  *(_WORD*)(v3 + 2416) = 0;
  *(_DWORD*)(v3 + 2420) = 0;
  *(_DWORD*)(v3 + 2424) = 0;
  *(_QWORD*)(v3 + 2432) = 0;
  *(_DWORD*)(v3 + 2440) = 0;
  *(_QWORD*)(v3 + 2392) = 0;
  *(_QWORD*)(v3 + 2400) = 0;
  *(_DWORD*)(v3 + 2408) = 0;
  *(_QWORD*)(v3 + 2384) = GameData_1f553b0;
  nn_os_InitializeMutex(v3 + 2416, 1, 0);
  *(_QWORD*)(v3 + 2456) = GameData_21345e8[0] + 2;
  *(_BYTE*)(v3 + 2448) = 0;
  *(_WORD*)(v3 + 2496) = 0;
  *(_DWORD*)(v3 + 2500) = 0;
  *(_DWORD*)(v3 + 2504) = 0;
  *(_QWORD*)(v3 + 2512) = 0;
  *(_DWORD*)(v3 + 2520) = 0;
  *(_QWORD*)(v3 + 2472) = 0;
  *(_QWORD*)(v3 + 2480) = 0;
  *(_DWORD*)(v3 + 2488) = 0;
  *(_QWORD*)(v3 + 2464) = GameData_1f55410;
  nn_os_InitializeMutex(v3 + 2496, 1, 0);
  *(_QWORD*)(v3 + 2536) = GameData_21345f8[0] + 2;
  *(_BYTE*)(v3 + 2528) = 0;
  *(_WORD*)(v3 + 2576) = 0;
  *(_DWORD*)(v3 + 2580) = 0;
  *(_DWORD*)(v3 + 2584) = 0;
  *(_QWORD*)(v3 + 2592) = 0;
  *(_DWORD*)(v3 + 2600) = 0;
  *(_QWORD*)(v3 + 2552) = 0;
  *(_QWORD*)(v3 + 2560) = 0;
  *(_DWORD*)(v3 + 2568) = 0;
  *(_QWORD*)(v3 + 2544) = GameData_1f55470;
  nn_os_InitializeMutex(v3 + 2576, 1, 0);
  *(_QWORD*)(v3 + 2616) = GameData_2134608[0] + 2;
  *(_BYTE*)(v3 + 2608) = 0;
  *(_WORD*)(v3 + 2656) = 0;
  *(_DWORD*)(v3 + 2660) = 0;
  *(_DWORD*)(v3 + 2664) = 0;
  *(_QWORD*)(v3 + 2672) = 0;
  *(_DWORD*)(v3 + 2680) = 0;
  *(_QWORD*)(v3 + 2632) = 0;
  *(_QWORD*)(v3 + 2640) = 0;
  *(_DWORD*)(v3 + 2648) = 0;
  *(_QWORD*)(v3 + 2624) = GameData_1f554d0;
  nn_os_InitializeMutex(v3 + 2656, 1, 0);
  *(_QWORD*)(v3 + 2696) = GameData_2134618[0] + 2;
  *(_BYTE*)(v3 + 2688) = 0;
  *(_WORD*)(v3 + 2736) = 0;
  *(_DWORD*)(v3 + 2740) = 0;
  *(_DWORD*)(v3 + 2744) = 0;
  *(_QWORD*)(v3 + 2752) = 0;
  *(_DWORD*)(v3 + 2760) = 0;
  *(_QWORD*)(v3 + 2712) = 0;
  *(_QWORD*)(v3 + 2720) = 0;
  *(_DWORD*)(v3 + 2728) = 0;
  *(_QWORD*)(v3 + 2704) = GameData_1f55530;
  nn_os_InitializeMutex(v3 + 2736, 1, 0);
  *(_QWORD*)(v3 + 2776) = GameData_2134628[0] + 2;
  *(_BYTE*)(v3 + 2768) = 0;
  *(_WORD*)(v3 + 2816) = 0;
  *(_DWORD*)(v3 + 2820) = 0;
  *(_DWORD*)(v3 + 2824) = 0;
  *(_QWORD*)(v3 + 2832) = 0;
  *(_DWORD*)(v3 + 2840) = 0;
  *(_QWORD*)(v3 + 2792) = 0;
  *(_QWORD*)(v3 + 2800) = 0;
  *(_DWORD*)(v3 + 2808) = 0;
  *(_QWORD*)(v3 + 2784) = GameData_1f55590;
  nn_os_InitializeMutex(v3 + 2816, 1, 0);
  *(_BYTE*)(v3 + 2848) = 0;
  *(_QWORD*)(v3 + 2856) = 0;
  *(_QWORD*)(v3 + 2864) = 0;
  *(_QWORD*)(v3 + 2872) = 0;
  *(_QWORD*)(v3 + 2880) = 0;
  *(_QWORD*)(v3 + 2888) = 0;
  *(_QWORD*)(v3 + 2920) = 0;
  *(_QWORD*)(v3 + 2904) = 0;
  *(_DWORD*)(v3 + 2896) = 0x2000;
  *(_QWORD*)(v3 + 2928) = 0;
  *(_DWORD*)(v3 + 2940) = 1065353216;
  *(_DWORD*)(v3 + 2924) = 0;
  *(_BYTE*)(v3 + 2936) = 0;
  *(_QWORD*)(v3 + 2944) = 0;
  *(_QWORD*)(v3 + 2952) = 0;
  *(_QWORD*)(v3 + 2960) = 0;
  *(_QWORD*)(v3 + 2968) = 0;
  *(_QWORD*)(v3 + 2976) = 0;
  *(_QWORD*)(v3 + 2984) = 0;
  *(_QWORD*)(v3 + 2992) = 0;
  *(_QWORD*)(v3 + 3000) = 0;
  *(_QWORD*)(v3 + 3008) = 0;
  *(_QWORD*)(v3 + 2912) = snd_fnd_Vec3_vtable;
  *(_QWORD*)(v3 + 3016) = GameData_1f555c0;
  *(_WORD*)(v3 + 3056) = 0;
  *(_QWORD*)(v3 + 3072) = 0;
  *(_DWORD*)(v3 + 3080) = 0;
  *(_QWORD*)(v3 + 3032) = 0;
  *(_QWORD*)(v3 + 3040) = 0;
  *(_DWORD*)(v3 + 3048) = 0;
  *(_QWORD*)(v3 + 3024) = GameData_1f555f0;
  *(_QWORD*)(v3 + 3060) = 0;
  nn_os_InitializeMutex(v3 + 3056, 1, 0);
  *(_BYTE*)(v3 + 3088) = 0;
  v7 = memset(v3 + 3096, 0, 1028, v4, v5, v6);
  snd_clearHandles(v7);
  v8 = (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 80LL))(snd_g_memory);
  if (*(_QWORD*)(v3 + 2000) != 0) {
    v9 = snd_g_memory;
    v10 = *(_QWORD*)(a1 + 2216);
    *(_QWORD*)(a1 + 2216) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 24LL))(v9, v10);
    v11 = snd_g_memory;
    v12 = *(_QWORD*)(a1 + 2224);
    *(_QWORD*)(a1 + 2224) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 24LL))(v11, v12);
    *(_DWORD*)(a1 + 2232) = 0;
  }
  *(_QWORD*)(a1 + 2216) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 5976LL * v8, 32);
  *(_QWORD*)(a1 + 2224) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 2LL * v8, 32);
  *(_WORD*)(a1 + 2232) = 0;
  *(_WORD*)(a1 + 2234) = v8;
  if (v8 != 0) {
    v13 = v8 & 7;
    if ((unsigned int)v8 - 1 >= 7) {
      v14 = 0;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 2224) + 2 * v14) = v14;
        *(_WORD*)(*(_QWORD*)(a1 + 2224) + 2 * v14 + 2) = v14 + 1;
        *(_WORD*)(*(_QWORD*)(a1 + 2224) + 2 * v14 + 4) = v14 + 2;
        *(_WORD*)(*(_QWORD*)(a1 + 2224) + 2 * v14 + 6) = v14 + 3;
        *(_WORD*)(*(_QWORD*)(a1 + 2224) + 2 * v14 + 8) = v14 + 4;
        *(_WORD*)(*(_QWORD*)(a1 + 2224) + 2 * v14 + 10) = v14 + 5;
        *(_WORD*)(*(_QWORD*)(a1 + 2224) + 2 * v14 + 12) = v14 + 6;
        v15 = v14 + 7;
        v16 = *(_QWORD*)(a1 + 2224) + 2 * v14;
        v14 += 8;
        *(_WORD*)(v16 + 14) = v15;
      } while (v14 != (v8 & 0xFFF8));
    }
    else {
      v14 = 0;
    }
    if ((v8 & 7) != 0) {
      do {
        --v13;
        *(_WORD*)(*(_QWORD*)(a1 + 2224) + 2 * v14) = v14;
        ++v14;
      } while (v13 != 0);
    }
  }
  v17 = snd_g_memory;
  *(_BYTE*)(a1 + 2272) = 1;
  v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 88LL))(v17);
  if (*(_QWORD*)(a1 + 2304) != 0) {
    v19 = snd_g_memory;
    v20 = *(_QWORD*)(a1 + 2296);
    *(_QWORD*)(a1 + 2296) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v19 + 24LL))(v19, v20);
    v21 = snd_g_memory;
    v22 = *(_QWORD*)(a1 + 2304);
    *(_QWORD*)(a1 + 2304) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v21 + 24LL))(v21, v22);
    *(_DWORD*)(a1 + 2312) = 0;
  }
  *(_QWORD*)(a1 + 2296) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 5768LL * v18, 32);
  *(_QWORD*)(a1 + 2304) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 2LL * v18, 32);
  *(_WORD*)(a1 + 2312) = 0;
  *(_WORD*)(a1 + 2314) = v18;
  if (v18 != 0) {
    v23 = v18 & 7;
    if ((unsigned int)v18 - 1 >= 7) {
      v24 = 0;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 2304) + 2 * v24) = v24;
        *(_WORD*)(*(_QWORD*)(a1 + 2304) + 2 * v24 + 2) = v24 + 1;
        *(_WORD*)(*(_QWORD*)(a1 + 2304) + 2 * v24 + 4) = v24 + 2;
        *(_WORD*)(*(_QWORD*)(a1 + 2304) + 2 * v24 + 6) = v24 + 3;
        *(_WORD*)(*(_QWORD*)(a1 + 2304) + 2 * v24 + 8) = v24 + 4;
        *(_WORD*)(*(_QWORD*)(a1 + 2304) + 2 * v24 + 10) = v24 + 5;
        *(_WORD*)(*(_QWORD*)(a1 + 2304) + 2 * v24 + 12) = v24 + 6;
        v25 = v24 + 7;
        v26 = *(_QWORD*)(a1 + 2304) + 2 * v24;
        v24 += 8;
        *(_WORD*)(v26 + 14) = v25;
      } while (v24 != (v18 & 0xFFF8));
    }
    else {
      v24 = 0;
    }
    if ((v18 & 7) != 0) {
      do {
        --v23;
        *(_WORD*)(*(_QWORD*)(a1 + 2304) + 2 * v24) = v24;
        ++v24;
      } while (v23 != 0);
    }
  }
  v27 = snd_g_memory;
  *(_BYTE*)(a1 + 2352) = 1;
  v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 104LL))(v27);
  if (*(_QWORD*)(a1 + 2384) != 0) {
    v29 = snd_g_memory;
    v30 = *(_QWORD*)(a1 + 2376);
    *(_QWORD*)(a1 + 2376) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v29 + 24LL))(v29, v30);
    v31 = snd_g_memory;
    v32 = *(_QWORD*)(a1 + 2384);
    *(_QWORD*)(a1 + 2384) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v31 + 24LL))(v31, v32);
    *(_DWORD*)(a1 + 2392) = 0;
  }
  *(_QWORD*)(a1 + 2376) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 5768LL * v28, 32);
  *(_QWORD*)(a1 + 2384) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 2LL * v28, 32);
  *(_WORD*)(a1 + 2392) = 0;
  *(_WORD*)(a1 + 2394) = v28;
  if (v28 != 0) {
    v33 = v28 & 7;
    if ((unsigned int)v28 - 1 >= 7) {
      v34 = 0;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 2384) + 2 * v34) = v34;
        *(_WORD*)(*(_QWORD*)(a1 + 2384) + 2 * v34 + 2) = v34 + 1;
        *(_WORD*)(*(_QWORD*)(a1 + 2384) + 2 * v34 + 4) = v34 + 2;
        *(_WORD*)(*(_QWORD*)(a1 + 2384) + 2 * v34 + 6) = v34 + 3;
        *(_WORD*)(*(_QWORD*)(a1 + 2384) + 2 * v34 + 8) = v34 + 4;
        *(_WORD*)(*(_QWORD*)(a1 + 2384) + 2 * v34 + 10) = v34 + 5;
        *(_WORD*)(*(_QWORD*)(a1 + 2384) + 2 * v34 + 12) = v34 + 6;
        v35 = v34 + 7;
        v36 = *(_QWORD*)(a1 + 2384) + 2 * v34;
        v34 += 8;
        *(_WORD*)(v36 + 14) = v35;
      } while (v34 != (v28 & 0xFFF8));
    }
    else {
      v34 = 0;
    }
    if ((v28 & 7) != 0) {
      do {
        --v33;
        *(_WORD*)(*(_QWORD*)(a1 + 2384) + 2 * v34) = v34;
        ++v34;
      } while (v33 != 0);
    }
  }
  v37 = snd_g_memory;
  *(_BYTE*)(a1 + 2432) = 1;
  v38 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 112LL))(v37);
  if (*(_QWORD*)(a1 + 2464) != 0) {
    v39 = snd_g_memory;
    v40 = *(_QWORD*)(a1 + 2456);
    *(_QWORD*)(a1 + 2456) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v39 + 24LL))(v39, v40);
    v41 = snd_g_memory;
    v42 = *(_QWORD*)(a1 + 2464);
    *(_QWORD*)(a1 + 2464) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v41 + 24LL))(v41, v42);
    *(_DWORD*)(a1 + 2472) = 0;
  }
  *(_QWORD*)(a1 + 2456) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 6072LL * v38, 32);
  *(_QWORD*)(a1 + 2464) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 2LL * v38, 32);
  *(_WORD*)(a1 + 2472) = 0;
  *(_WORD*)(a1 + 2474) = v38;
  if (v38 != 0) {
    v43 = v38 & 7;
    if ((unsigned int)v38 - 1 >= 7) {
      v44 = 0;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 2464) + 2 * v44) = v44;
        *(_WORD*)(*(_QWORD*)(a1 + 2464) + 2 * v44 + 2) = v44 + 1;
        *(_WORD*)(*(_QWORD*)(a1 + 2464) + 2 * v44 + 4) = v44 + 2;
        *(_WORD*)(*(_QWORD*)(a1 + 2464) + 2 * v44 + 6) = v44 + 3;
        *(_WORD*)(*(_QWORD*)(a1 + 2464) + 2 * v44 + 8) = v44 + 4;
        *(_WORD*)(*(_QWORD*)(a1 + 2464) + 2 * v44 + 10) = v44 + 5;
        *(_WORD*)(*(_QWORD*)(a1 + 2464) + 2 * v44 + 12) = v44 + 6;
        v45 = v44 + 7;
        v46 = *(_QWORD*)(a1 + 2464) + 2 * v44;
        v44 += 8;
        *(_WORD*)(v46 + 14) = v45;
      } while (v44 != (v38 & 0xFFF8));
    }
    else {
      v44 = 0;
    }
    if ((v38 & 7) != 0) {
      do {
        --v43;
        *(_WORD*)(*(_QWORD*)(a1 + 2464) + 2 * v44) = v44;
        ++v44;
      } while (v43 != 0);
    }
  }
  v47 = snd_g_memory;
  *(_BYTE*)(a1 + 2512) = 1;
  v48 = (*(__int64 (**)(__int64))(*(_QWORD*)v47 + 120LL))(v47);
  if (*(_QWORD*)(a1 + 2544) != 0) {
    v49 = snd_g_memory;
    v50 = *(_QWORD*)(a1 + 2536);
    *(_QWORD*)(a1 + 2536) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v49 + 24LL))(v49, v50);
    v51 = snd_g_memory;
    v52 = *(_QWORD*)(a1 + 2544);
    *(_QWORD*)(a1 + 2544) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v51 + 24LL))(v51, v52);
    *(_DWORD*)(a1 + 2552) = 0;
  }
  *(_QWORD*)(a1 + 2536) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 6120LL * v48, 32);
  *(_QWORD*)(a1 + 2544) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 2LL * v48, 32);
  *(_WORD*)(a1 + 2552) = 0;
  *(_WORD*)(a1 + 2554) = v48;
  if (v48 != 0) {
    v53 = v48 & 7;
    if ((unsigned int)v48 - 1 >= 7) {
      v54 = 0;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 2544) + 2 * v54) = v54;
        *(_WORD*)(*(_QWORD*)(a1 + 2544) + 2 * v54 + 2) = v54 + 1;
        *(_WORD*)(*(_QWORD*)(a1 + 2544) + 2 * v54 + 4) = v54 + 2;
        *(_WORD*)(*(_QWORD*)(a1 + 2544) + 2 * v54 + 6) = v54 + 3;
        *(_WORD*)(*(_QWORD*)(a1 + 2544) + 2 * v54 + 8) = v54 + 4;
        *(_WORD*)(*(_QWORD*)(a1 + 2544) + 2 * v54 + 10) = v54 + 5;
        *(_WORD*)(*(_QWORD*)(a1 + 2544) + 2 * v54 + 12) = v54 + 6;
        v55 = v54 + 7;
        v56 = *(_QWORD*)(a1 + 2544) + 2 * v54;
        v54 += 8;
        *(_WORD*)(v56 + 14) = v55;
      } while (v54 != (v48 & 0xFFF8));
    }
    else {
      v54 = 0;
    }
    if ((v48 & 7) != 0) {
      do {
        --v53;
        *(_WORD*)(*(_QWORD*)(a1 + 2544) + 2 * v54) = v54;
        ++v54;
      } while (v53 != 0);
    }
  }
  v57 = snd_g_memory;
  *(_BYTE*)(a1 + 2592) = 1;
  v58 = (*(__int64 (**)(__int64))(*(_QWORD*)v57 + 128LL))(v57);
  if (*(_QWORD*)(a1 + 2624) != 0) {
    v59 = snd_g_memory;
    v60 = *(_QWORD*)(a1 + 2616);
    *(_QWORD*)(a1 + 2616) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v59 + 24LL))(v59, v60);
    v61 = snd_g_memory;
    v62 = *(_QWORD*)(a1 + 2624);
    *(_QWORD*)(a1 + 2624) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v61 + 24LL))(v61, v62);
    *(_DWORD*)(a1 + 2632) = 0;
  }
  *(_QWORD*)(a1 + 2616) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 6096LL * v58, 32);
  *(_QWORD*)(a1 + 2624) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 2LL * v58, 32);
  *(_WORD*)(a1 + 2632) = 0;
  *(_WORD*)(a1 + 2634) = v58;
  if (v58 != 0) {
    v63 = v58 & 7;
    if ((unsigned int)v58 - 1 >= 7) {
      v64 = 0;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 2624) + 2 * v64) = v64;
        *(_WORD*)(*(_QWORD*)(a1 + 2624) + 2 * v64 + 2) = v64 + 1;
        *(_WORD*)(*(_QWORD*)(a1 + 2624) + 2 * v64 + 4) = v64 + 2;
        *(_WORD*)(*(_QWORD*)(a1 + 2624) + 2 * v64 + 6) = v64 + 3;
        *(_WORD*)(*(_QWORD*)(a1 + 2624) + 2 * v64 + 8) = v64 + 4;
        *(_WORD*)(*(_QWORD*)(a1 + 2624) + 2 * v64 + 10) = v64 + 5;
        *(_WORD*)(*(_QWORD*)(a1 + 2624) + 2 * v64 + 12) = v64 + 6;
        v65 = v64 + 7;
        v66 = *(_QWORD*)(a1 + 2624) + 2 * v64;
        v64 += 8;
        *(_WORD*)(v66 + 14) = v65;
      } while (v64 != (v58 & 0xFFF8));
    }
    else {
      v64 = 0;
    }
    if ((v58 & 7) != 0) {
      do {
        --v63;
        *(_WORD*)(*(_QWORD*)(a1 + 2624) + 2 * v64) = v64;
        ++v64;
      } while (v63 != 0);
    }
  }
  v67 = snd_g_memory;
  *(_BYTE*)(a1 + 2672) = 1;
  v68 = (*(__int64 (**)(__int64))(*(_QWORD*)v67 + 136LL))(v67);
  if (*(_QWORD*)(a1 + 2704) != 0) {
    v69 = snd_g_memory;
    v70 = *(_QWORD*)(a1 + 2696);
    *(_QWORD*)(a1 + 2696) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v69 + 24LL))(v69, v70);
    v71 = snd_g_memory;
    v72 = *(_QWORD*)(a1 + 2704);
    *(_QWORD*)(a1 + 2704) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v71 + 24LL))(v71, v72);
    *(_DWORD*)(a1 + 2712) = 0;
  }
  *(_QWORD*)(a1 + 2696) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 6096LL * v68, 32);
  *(_QWORD*)(a1 + 2704) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 2LL * v68, 32);
  *(_WORD*)(a1 + 2712) = 0;
  *(_WORD*)(a1 + 2714) = v68;
  if (v68 != 0) {
    v73 = v68 & 7;
    if ((unsigned int)v68 - 1 >= 7) {
      v74 = 0;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 2704) + 2 * v74) = v74;
        *(_WORD*)(*(_QWORD*)(a1 + 2704) + 2 * v74 + 2) = v74 + 1;
        *(_WORD*)(*(_QWORD*)(a1 + 2704) + 2 * v74 + 4) = v74 + 2;
        *(_WORD*)(*(_QWORD*)(a1 + 2704) + 2 * v74 + 6) = v74 + 3;
        *(_WORD*)(*(_QWORD*)(a1 + 2704) + 2 * v74 + 8) = v74 + 4;
        *(_WORD*)(*(_QWORD*)(a1 + 2704) + 2 * v74 + 10) = v74 + 5;
        *(_WORD*)(*(_QWORD*)(a1 + 2704) + 2 * v74 + 12) = v74 + 6;
        v75 = v74 + 7;
        v76 = *(_QWORD*)(a1 + 2704) + 2 * v74;
        v74 += 8;
        *(_WORD*)(v76 + 14) = v75;
      } while (v74 != (v68 & 0xFFF8));
    }
    else {
      v74 = 0;
    }
    if ((v68 & 7) != 0) {
      do {
        --v73;
        *(_WORD*)(*(_QWORD*)(a1 + 2704) + 2 * v74) = v74;
        ++v74;
      } while (v73 != 0);
    }
  }
  v77 = snd_g_memory;
  *(_BYTE*)(a1 + 2752) = 1;
  v78 = (*(__int64 (**)(__int64))(*(_QWORD*)v77 + 144LL))(v77);
  if (*(_QWORD*)(a1 + 2784) != 0) {
    v79 = snd_g_memory;
    v80 = *(_QWORD*)(a1 + 2776);
    *(_QWORD*)(a1 + 2776) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v79 + 24LL))(v79, v80);
    v81 = snd_g_memory;
    v82 = *(_QWORD*)(a1 + 2784);
    *(_QWORD*)(a1 + 2784) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v81 + 24LL))(v81, v82);
    *(_DWORD*)(a1 + 2792) = 0;
  }
  *(_QWORD*)(a1 + 2776) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 6152LL * v78, 32);
  *(_QWORD*)(a1 + 2784) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 2LL * v78, 32);
  *(_WORD*)(a1 + 2792) = 0;
  *(_WORD*)(a1 + 2794) = v78;
  if (v78 != 0) {
    v83 = v78 & 7;
    if ((unsigned int)v78 - 1 >= 7) {
      v84 = 0;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 2784) + 2 * v84) = v84;
        *(_WORD*)(*(_QWORD*)(a1 + 2784) + 2 * v84 + 2) = v84 + 1;
        *(_WORD*)(*(_QWORD*)(a1 + 2784) + 2 * v84 + 4) = v84 + 2;
        *(_WORD*)(*(_QWORD*)(a1 + 2784) + 2 * v84 + 6) = v84 + 3;
        *(_WORD*)(*(_QWORD*)(a1 + 2784) + 2 * v84 + 8) = v84 + 4;
        *(_WORD*)(*(_QWORD*)(a1 + 2784) + 2 * v84 + 10) = v84 + 5;
        *(_WORD*)(*(_QWORD*)(a1 + 2784) + 2 * v84 + 12) = v84 + 6;
        v85 = v84 + 7;
        v86 = *(_QWORD*)(a1 + 2784) + 2 * v84;
        v84 += 8;
        *(_WORD*)(v86 + 14) = v85;
      } while (v84 != (v78 & 0xFFF8));
    }
    else {
      v84 = 0;
    }
    if ((v78 & 7) != 0) {
      do {
        --v83;
        *(_WORD*)(*(_QWORD*)(a1 + 2784) + 2 * v84) = v84;
        ++v84;
      } while (v83 != 0);
    }
  }
  v87 = snd_g_memory;
  *(_BYTE*)(a1 + 2832) = 1;
  v88 = (*(__int64 (**)(__int64))(*(_QWORD*)v87 + 112LL))(v87);
  v89 =
      (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 120LL))(snd_g_memory) +
      2 * v88;
  v90 = v89 + (*(__int64 (**)(__int64))(*(_QWORD*)snd_g_memory + 144LL))(
                  snd_g_memory);
  if (*(_QWORD*)(a1 + 2864) != 0) {
    v91 = snd_g_memory;
    v92 = *(_QWORD*)(a1 + 2856);
    *(_QWORD*)(a1 + 2856) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v91 + 24LL))(v91, v92);
    v93 = snd_g_memory;
    v94 = *(_QWORD*)(a1 + 2864);
    *(_QWORD*)(a1 + 2864) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v93 + 24LL))(v93, v94);
    *(_DWORD*)(a1 + 2872) = 0;
  }
  *(_QWORD*)(a1 + 2856) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 664LL * v90, 32);
  *(_QWORD*)(a1 + 2864) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 2LL * v90, 32);
  *(_WORD*)(a1 + 2872) = 0;
  *(_WORD*)(a1 + 2874) = v90;
  if (v90 != 0) {
    v95 = v90 & 7;
    if ((unsigned int)v90 - 1 >= 7) {
      v96 = 0;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 2864) + 2 * v96) = v96;
        *(_WORD*)(*(_QWORD*)(a1 + 2864) + 2 * v96 + 2) = v96 + 1;
        *(_WORD*)(*(_QWORD*)(a1 + 2864) + 2 * v96 + 4) = v96 + 2;
        *(_WORD*)(*(_QWORD*)(a1 + 2864) + 2 * v96 + 6) = v96 + 3;
        *(_WORD*)(*(_QWORD*)(a1 + 2864) + 2 * v96 + 8) = v96 + 4;
        *(_WORD*)(*(_QWORD*)(a1 + 2864) + 2 * v96 + 10) = v96 + 5;
        *(_WORD*)(*(_QWORD*)(a1 + 2864) + 2 * v96 + 12) = v96 + 6;
        v97 = v96 + 7;
        v98 = *(_QWORD*)(a1 + 2864) + 2 * v96;
        v96 += 8;
        *(_WORD*)(v98 + 14) = v97;
      } while (v96 != (v90 & 0xFFF8));
    }
    else {
      v96 = 0;
    }
    if ((v90 & 7) != 0) {
      do {
        --v95;
        *(_WORD*)(*(_QWORD*)(a1 + 2864) + 2 * v96) = v96;
        ++v96;
      } while (v95 != 0);
    }
  }
  v99 = snd_g_memory;
  *(_BYTE*)(a1 + 2912) = 1;
  v100 = (*(__int64 (**)(__int64))(*(_QWORD*)v99 + 120LL))(v99);
  if (*(_QWORD*)(a1 + 2944) != 0) {
    v101 = snd_g_memory;
    v102 = *(_QWORD*)(a1 + 2936);
    *(_QWORD*)(a1 + 2936) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v101 + 24LL))(v101, v102);
    v103 = snd_g_memory;
    v104 = *(_QWORD*)(a1 + 2944);
    *(_QWORD*)(a1 + 2944) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v103 + 24LL))(v103, v104);
    *(_DWORD*)(a1 + 2952) = 0;
  }
  *(_QWORD*)(a1 + 2936) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 712LL * v100, 32);
  *(_QWORD*)(a1 + 2944) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 2LL * v100, 32);
  *(_WORD*)(a1 + 2952) = 0;
  *(_WORD*)(a1 + 2954) = v100;
  if (v100 != 0) {
    v105 = v100 & 7;
    if ((unsigned int)v100 - 1 >= 7) {
      v106 = 0;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 2944) + 2 * v106) = v106;
        *(_WORD*)(*(_QWORD*)(a1 + 2944) + 2 * v106 + 2) = v106 + 1;
        *(_WORD*)(*(_QWORD*)(a1 + 2944) + 2 * v106 + 4) = v106 + 2;
        *(_WORD*)(*(_QWORD*)(a1 + 2944) + 2 * v106 + 6) = v106 + 3;
        *(_WORD*)(*(_QWORD*)(a1 + 2944) + 2 * v106 + 8) = v106 + 4;
        *(_WORD*)(*(_QWORD*)(a1 + 2944) + 2 * v106 + 10) = v106 + 5;
        *(_WORD*)(*(_QWORD*)(a1 + 2944) + 2 * v106 + 12) = v106 + 6;
        v107 = v106 + 7;
        v108 = *(_QWORD*)(a1 + 2944) + 2 * v106;
        v106 += 8;
        *(_WORD*)(v108 + 14) = v107;
      } while (v106 != (v100 & 0xFFF8));
    }
    else {
      v106 = 0;
    }
    if ((v100 & 7) != 0) {
      do {
        --v105;
        *(_WORD*)(*(_QWORD*)(a1 + 2944) + 2 * v106) = v106;
        ++v106;
      } while (v105 != 0);
    }
  }
  v109 = snd_g_memory;
  *(_BYTE*)(a1 + 2992) = 1;
  v110 = (*(__int64 (**)(__int64))(*(_QWORD*)v109 + 144LL))(v109);
  if (*(_QWORD*)(a1 + 3024) != 0) {
    v111 = snd_g_memory;
    v112 = *(_QWORD*)(a1 + 3016);
    *(_QWORD*)(a1 + 3016) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v111 + 24LL))(v111, v112);
    v113 = snd_g_memory;
    v114 = *(_QWORD*)(a1 + 3024);
    *(_QWORD*)(a1 + 3024) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v113 + 24LL))(v113, v114);
    *(_DWORD*)(a1 + 3032) = 0;
  }
  *(_QWORD*)(a1 + 3016) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 32LL * v110, 32);
  *(_QWORD*)(a1 + 3024) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 2LL * v110, 32);
  *(_WORD*)(a1 + 3032) = 0;
  *(_WORD*)(a1 + 3034) = v110;
  if (v110 != 0) {
    v115 = v110 & 7;
    if ((unsigned int)v110 - 1 >= 7) {
      v116 = 0;
      do {
        *(_WORD*)(*(_QWORD*)(a1 + 3024) + 2 * v116) = v116;
        *(_WORD*)(*(_QWORD*)(a1 + 3024) + 2 * v116 + 2) = v116 + 1;
        *(_WORD*)(*(_QWORD*)(a1 + 3024) + 2 * v116 + 4) = v116 + 2;
        *(_WORD*)(*(_QWORD*)(a1 + 3024) + 2 * v116 + 6) = v116 + 3;
        *(_WORD*)(*(_QWORD*)(a1 + 3024) + 2 * v116 + 8) = v116 + 4;
        *(_WORD*)(*(_QWORD*)(a1 + 3024) + 2 * v116 + 10) = v116 + 5;
        *(_WORD*)(*(_QWORD*)(a1 + 3024) + 2 * v116 + 12) = v116 + 6;
        v117 = v116 + 7;
        v118 = *(_QWORD*)(a1 + 3024) + 2 * v116;
        v116 += 8;
        *(_WORD*)(v118 + 14) = v117;
      } while (v116 != (v110 & 0xFFF8));
    }
    else {
      v116 = 0;
    }
    if ((v110 & 7) != 0) {
      do {
        --v115;
        *(_WORD*)(*(_QWORD*)(a1 + 3024) + 2 * v116) = v116;
        ++v116;
      } while (v115 != 0);
    }
  }
  *(_BYTE*)(a1 + 3072) = 1;
  if (*(_QWORD*)(a1 + 3264) != 0) {
    v119 = snd_g_memory;
    v120 = *(_QWORD*)(a1 + 3256);
    *(_QWORD*)(a1 + 3256) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v119 + 24LL))(v119, v120);
    v121 = snd_g_memory;
    v122 = *(_QWORD*)(a1 + 3264);
    *(_QWORD*)(a1 + 3264) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v121 + 24LL))(v121, v122);
    *(_DWORD*)(a1 + 3272) = 0;
  }
  *(_QWORD*)(a1 + 3256) = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 4096, 32);
  v123 = (*(__int64 (**)(__int64, __int64, __int64))(
      *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 256, 32);
  v124 = 0;
  *(_QWORD*)(a1 + 3264) = v123;
  *(_DWORD*)(a1 + 3272) = 0x800000;
  do {
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124) = v124;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 2) = v124 + 1;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 4) = v124 + 2;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 6) = v124 + 3;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 8) = v124 + 4;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 10) = v124 + 5;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 12) = v124 + 6;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 14) = v124 + 7;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 16) = v124 + 8;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 18) = v124 + 9;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 20) = v124 + 10;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 22) = v124 + 11;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 24) = v124 + 12;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 26) = v124 + 13;
    *(_WORD*)(*(_QWORD*)(a1 + 3264) + 2 * v124 + 28) = v124 + 14;
    v125 = v124 + 15;
    v126 = *(_QWORD*)(a1 + 3264) + 2 * v124;
    v124 += 16;
    *(_WORD*)(v126 + 30) = v125;
  } while (v124 != 128);
  v127 = snd_g_memory;
  *(_BYTE*)(a1 + 3312) = 1;
  v128 = (*(__int64 (**)(__int64))(*(_QWORD*)v127 + 72LL))(v127);
  v129 = GameData_2134208[0];
  if (*(__int64*)((char*)GameData_2134208[0] +
                  (unsigned __int64)((__int128*)0x10LL)) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)snd_g_memory + 24LL))(snd_g_memory);
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v129) = 0;
  }
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v129) =
      (*(__int64 (**)(__int64, __int64, __int64))(
          *(_QWORD*)snd_g_memory + 16LL))(snd_g_memory, 132LL * v128, 32);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v129 + 8) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v129 + 12) = v128;
  *((_BYTE*)((char*)0x40LL) + (_QWORD)v129) = 1;
  v130 = BaseNX_1599e0(a1);
  v131 = snd_s_target_ptr;
  *(_QWORD*)(a1 + 3208) = 0;
  *(_QWORD*)(a1 + 3216) = 0;
  *(_QWORD*)(a1 + 3224) = 0;
  *(_QWORD*)(a1 + 3232) = 0;
  *v131 = v130;
  *(_QWORD*)(a1 + 3168) = 0x3F80000000000000LL;
  *(_DWORD*)(a1 + 3184) = 1135214592;
  *(_QWORD*)(a1 + 3176) = 0x41A000003F800000LL;
  return memset(v3 + 3096, 0, 1024, v132, v133, v134);
}

__int64 Manager_Destructor(__int64 a1)
{
  __int64* v2;
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
  __int64 v14;
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
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64* v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  int v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  int v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  int v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  int v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  int v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  int v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  int v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  int v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v185;

  *(_QWORD*)a1 = GameData_2134580[0] + 2;
  BaseNX_159a40();
  *snd_s_target_ptr = 0;
  v2 = snd_g_memory_ptr[0];
  if (*(_QWORD*)(a1 + 2224) != 0) {
    v3 = *snd_g_memory_ptr[0];
    v4 = *(_QWORD*)(a1 + 2216);
    *(_QWORD*)(a1 + 2216) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 24LL))(v3, v4);
    v5 = *v2;
    v6 = *(_QWORD*)(a1 + 2224);
    *(_QWORD*)(a1 + 2224) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5, v6);
    *(_DWORD*)(a1 + 2232) = 0;
  }
  v7 = *(_QWORD*)(a1 + 2304);
  *(_BYTE*)(a1 + 2272) = 0;
  if (v7 != 0) {
    v8 = *v2;
    v9 = *(_QWORD*)(a1 + 2296);
    *(_QWORD*)(a1 + 2296) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v8 + 24LL))(v8, v9);
    v10 = *v2;
    v11 = *(_QWORD*)(a1 + 2304);
    *(_QWORD*)(a1 + 2304) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v10 + 24LL))(v10, v11);
    *(_DWORD*)(a1 + 2312) = 0;
  }
  v12 = *(_QWORD*)(a1 + 2384);
  *(_BYTE*)(a1 + 2352) = 0;
  if (v12 != 0) {
    v13 = *v2;
    v14 = *(_QWORD*)(a1 + 2376);
    *(_QWORD*)(a1 + 2376) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 24LL))(v13, v14);
    v15 = *v2;
    v16 = *(_QWORD*)(a1 + 2384);
    *(_QWORD*)(a1 + 2384) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v15 + 24LL))(v15, v16);
    *(_DWORD*)(a1 + 2392) = 0;
  }
  v17 = *(_QWORD*)(a1 + 2464);
  *(_BYTE*)(a1 + 2432) = 0;
  if (v17 != 0) {
    v18 = *v2;
    v19 = *(_QWORD*)(a1 + 2456);
    *(_QWORD*)(a1 + 2456) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v18 + 24LL))(v18, v19);
    v20 = *v2;
    v21 = *(_QWORD*)(a1 + 2464);
    *(_QWORD*)(a1 + 2464) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v20 + 24LL))(v20, v21);
    *(_DWORD*)(a1 + 2472) = 0;
  }
  v22 = *(_QWORD*)(a1 + 2544);
  *(_BYTE*)(a1 + 2512) = 0;
  if (v22 != 0) {
    v23 = *v2;
    v24 = *(_QWORD*)(a1 + 2536);
    *(_QWORD*)(a1 + 2536) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v23 + 24LL))(v23, v24);
    v25 = *v2;
    v26 = *(_QWORD*)(a1 + 2544);
    *(_QWORD*)(a1 + 2544) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v25 + 24LL))(v25, v26);
    *(_DWORD*)(a1 + 2552) = 0;
  }
  v27 = *(_QWORD*)(a1 + 2624);
  *(_BYTE*)(a1 + 2592) = 0;
  if (v27 != 0) {
    v28 = *v2;
    v29 = *(_QWORD*)(a1 + 2616);
    *(_QWORD*)(a1 + 2616) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v28 + 24LL))(v28, v29);
    v30 = *v2;
    v31 = *(_QWORD*)(a1 + 2624);
    *(_QWORD*)(a1 + 2624) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v30 + 24LL))(v30, v31);
    *(_DWORD*)(a1 + 2632) = 0;
  }
  v32 = *(_QWORD*)(a1 + 2704);
  *(_BYTE*)(a1 + 2672) = 0;
  if (v32 != 0) {
    v33 = *v2;
    v34 = *(_QWORD*)(a1 + 2696);
    *(_QWORD*)(a1 + 2696) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v33 + 24LL))(v33, v34);
    v35 = *v2;
    v36 = *(_QWORD*)(a1 + 2704);
    *(_QWORD*)(a1 + 2704) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v35 + 24LL))(v35, v36);
    *(_DWORD*)(a1 + 2712) = 0;
  }
  v37 = *(_QWORD*)(a1 + 2784);
  *(_BYTE*)(a1 + 2752) = 0;
  if (v37 != 0) {
    v38 = *v2;
    v39 = *(_QWORD*)(a1 + 2776);
    *(_QWORD*)(a1 + 2776) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v38 + 24LL))(v38, v39);
    v40 = *v2;
    v41 = *(_QWORD*)(a1 + 2784);
    *(_QWORD*)(a1 + 2784) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v40 + 24LL))(v40, v41);
    *(_DWORD*)(a1 + 2792) = 0;
  }
  v42 = *(_QWORD*)(a1 + 2864);
  *(_BYTE*)(a1 + 2832) = 0;
  if (v42 != 0) {
    v43 = *v2;
    v44 = *(_QWORD*)(a1 + 2856);
    *(_QWORD*)(a1 + 2856) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v43 + 24LL))(v43, v44);
    v45 = *v2;
    v46 = *(_QWORD*)(a1 + 2864);
    *(_QWORD*)(a1 + 2864) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v45 + 24LL))(v45, v46);
    *(_DWORD*)(a1 + 2872) = 0;
  }
  v47 = *(_QWORD*)(a1 + 2944);
  *(_BYTE*)(a1 + 2912) = 0;
  if (v47 != 0) {
    v48 = *v2;
    v49 = *(_QWORD*)(a1 + 2936);
    *(_QWORD*)(a1 + 2936) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v48 + 24LL))(v48, v49);
    v50 = *v2;
    v51 = *(_QWORD*)(a1 + 2944);
    *(_QWORD*)(a1 + 2944) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v50 + 24LL))(v50, v51);
    *(_DWORD*)(a1 + 2952) = 0;
  }
  v52 = *(_QWORD*)(a1 + 3024);
  *(_BYTE*)(a1 + 2992) = 0;
  if (v52 != 0) {
    v53 = *v2;
    v54 = *(_QWORD*)(a1 + 3016);
    *(_QWORD*)(a1 + 3016) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v53 + 24LL))(v53, v54);
    v55 = *v2;
    v56 = *(_QWORD*)(a1 + 3024);
    *(_QWORD*)(a1 + 3024) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v55 + 24LL))(v55, v56);
    *(_DWORD*)(a1 + 3032) = 0;
  }
  v57 = *(_QWORD*)(a1 + 3264);
  *(_BYTE*)(a1 + 3072) = 0;
  if (v57 != 0) {
    v58 = *v2;
    v59 = *(_QWORD*)(a1 + 3256);
    *(_QWORD*)(a1 + 3256) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v58 + 24LL))(v58, v59);
    v60 = *v2;
    v61 = *(_QWORD*)(a1 + 3264);
    *(_QWORD*)(a1 + 3264) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v60 + 24LL))(v60, v61);
    *(_DWORD*)(a1 + 3272) = 0;
  }
  *(_BYTE*)(a1 + 3312) = 0;
  v62 = GameData_2134208[0];
  v63 = GameData_2134638[0];
  if (*(__int64*)((char*)GameData_2134208[0] +
                  (unsigned __int64)((__int128*)0x10LL)) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v2 + 24LL))(*v2);
    v64 = *(unsigned __int8*)(a1 + 3312);
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v62) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v62) = 0;
    *(_QWORD*)(a1 + 3240) = v63 + 2;
    v65 = *(_QWORD*)(a1 + 3264);
    if (v64 == 1) {
      if (v65 != 0) {
        v66 = *v2;
        v67 = *(_QWORD*)(a1 + 3256);
        *(_QWORD*)(a1 + 3256) = 0;
        (*(void (**)(__int64, __int64))(*(_QWORD*)v66 + 24LL))(v66, v67);
        v68 = *v2;
        v69 = *(_QWORD*)(a1 + 3264);
        *(_QWORD*)(a1 + 3264) = 0;
        (*(void (**)(__int64, __int64))(*(_QWORD*)v68 + 24LL))(v68, v69);
        v65 = *(_QWORD*)(a1 + 3264);
        *(_DWORD*)(a1 + 3272) = 0;
      }
      *(_BYTE*)(a1 + 3312) = 0;
    }
    *(_QWORD*)(a1 + 3248) = GameData_2134640 + 2;
    if (v65 != 0) {
      goto LABEL_31;
    }
  }
  else {
    *((_BYTE*)GameData_2134208[0] + (unsigned __int64)((char*)0x40LL)) = 0;
    *(_QWORD*)(a1 + 3240) = v63 + 2;
    v185 = *(_QWORD*)(a1 + 3264);
    *(_QWORD*)(a1 + 3248) = GameData_2134640 + 2;
    if (v185 != 0) {
    LABEL_31:
      v70 = *v2;
      v71 = *(_QWORD*)(a1 + 3256);
      *(_QWORD*)(a1 + 3256) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v70 + 24LL))(v70, v71);
      v72 = *v2;
      v73 = *(_QWORD*)(a1 + 3264);
      *(_QWORD*)(a1 + 3264) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v72 + 24LL))(v72, v73);
      *(_DWORD*)(a1 + 3272) = 0;
    }
  }
  nn_os_FinalizeMutex(a1 + 3280);
  v74 = *(unsigned __int8*)(a1 + 3072);
  *(_QWORD*)(a1 + 3000) = GameData_2134628[0] + 2;
  v75 = *(_QWORD*)(a1 + 3024);
  if (v74 == 1) {
    if (v75 != 0) {
      v76 = *v2;
      v77 = *(_QWORD*)(a1 + 3016);
      *(_QWORD*)(a1 + 3016) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v76 + 24LL))(v76, v77);
      v78 = *v2;
      v79 = *(_QWORD*)(a1 + 3024);
      *(_QWORD*)(a1 + 3024) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v78 + 24LL))(v78, v79);
      v75 = *(_QWORD*)(a1 + 3024);
      *(_DWORD*)(a1 + 3032) = 0;
    }
    *(_BYTE*)(a1 + 3072) = 0;
  }
  *(_QWORD*)(a1 + 3008) = GameData_2134630[0] + 2;
  if (v75 != 0) {
    v80 = *v2;
    v81 = *(_QWORD*)(a1 + 3016);
    *(_QWORD*)(a1 + 3016) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v80 + 24LL))(v80, v81);
    v82 = *v2;
    v83 = *(_QWORD*)(a1 + 3024);
    *(_QWORD*)(a1 + 3024) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v82 + 24LL))(v82, v83);
    *(_DWORD*)(a1 + 3032) = 0;
  }
  nn_os_FinalizeMutex(a1 + 3040);
  v84 = *(unsigned __int8*)(a1 + 2992);
  *(_QWORD*)(a1 + 2920) = GameData_2134618[0] + 2;
  v85 = *(_QWORD*)(a1 + 2944);
  if (v84 == 1) {
    if (v85 != 0) {
      v86 = *v2;
      v87 = *(_QWORD*)(a1 + 2936);
      *(_QWORD*)(a1 + 2936) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v86 + 24LL))(v86, v87);
      v88 = *v2;
      v89 = *(_QWORD*)(a1 + 2944);
      *(_QWORD*)(a1 + 2944) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v88 + 24LL))(v88, v89);
      v85 = *(_QWORD*)(a1 + 2944);
      *(_DWORD*)(a1 + 2952) = 0;
    }
    *(_BYTE*)(a1 + 2992) = 0;
  }
  *(_QWORD*)(a1 + 2928) = GameData_2134620[0] + 2;
  if (v85 != 0) {
    v90 = *v2;
    v91 = *(_QWORD*)(a1 + 2936);
    *(_QWORD*)(a1 + 2936) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v90 + 24LL))(v90, v91);
    v92 = *v2;
    v93 = *(_QWORD*)(a1 + 2944);
    *(_QWORD*)(a1 + 2944) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v92 + 24LL))(v92, v93);
    *(_DWORD*)(a1 + 2952) = 0;
  }
  nn_os_FinalizeMutex(a1 + 2960);
  v94 = *(unsigned __int8*)(a1 + 2912);
  *(_QWORD*)(a1 + 2840) = GameData_2134608[0] + 2;
  v95 = *(_QWORD*)(a1 + 2864);
  if (v94 == 1) {
    if (v95 != 0) {
      v96 = *v2;
      v97 = *(_QWORD*)(a1 + 2856);
      *(_QWORD*)(a1 + 2856) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v96 + 24LL))(v96, v97);
      v98 = *v2;
      v99 = *(_QWORD*)(a1 + 2864);
      *(_QWORD*)(a1 + 2864) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v98 + 24LL))(v98, v99);
      v95 = *(_QWORD*)(a1 + 2864);
      *(_DWORD*)(a1 + 2872) = 0;
    }
    *(_BYTE*)(a1 + 2912) = 0;
  }
  *(_QWORD*)(a1 + 2848) = GameData_2134610[0] + 2;
  if (v95 != 0) {
    v100 = *v2;
    v101 = *(_QWORD*)(a1 + 2856);
    *(_QWORD*)(a1 + 2856) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v100 + 24LL))(v100, v101);
    v102 = *v2;
    v103 = *(_QWORD*)(a1 + 2864);
    *(_QWORD*)(a1 + 2864) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v102 + 24LL))(v102, v103);
    *(_DWORD*)(a1 + 2872) = 0;
  }
  nn_os_FinalizeMutex(a1 + 2880);
  v104 = *(unsigned __int8*)(a1 + 2832);
  *(_QWORD*)(a1 + 2760) = GameData_21345f8[0] + 2;
  v105 = *(_QWORD*)(a1 + 2784);
  if (v104 == 1) {
    if (v105 != 0) {
      v106 = *v2;
      v107 = *(_QWORD*)(a1 + 2776);
      *(_QWORD*)(a1 + 2776) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v106 + 24LL))(v106, v107);
      v108 = *v2;
      v109 = *(_QWORD*)(a1 + 2784);
      *(_QWORD*)(a1 + 2784) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v108 + 24LL))(v108, v109);
      v105 = *(_QWORD*)(a1 + 2784);
      *(_DWORD*)(a1 + 2792) = 0;
    }
    *(_BYTE*)(a1 + 2832) = 0;
  }
  *(_QWORD*)(a1 + 2768) = GameData_2134600[0] + 2;
  if (v105 != 0) {
    v110 = *v2;
    v111 = *(_QWORD*)(a1 + 2776);
    *(_QWORD*)(a1 + 2776) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v110 + 24LL))(v110, v111);
    v112 = *v2;
    v113 = *(_QWORD*)(a1 + 2784);
    *(_QWORD*)(a1 + 2784) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v112 + 24LL))(v112, v113);
    *(_DWORD*)(a1 + 2792) = 0;
  }
  nn_os_FinalizeMutex(a1 + 2800);
  v114 = *(unsigned __int8*)(a1 + 2752);
  *(_QWORD*)(a1 + 2680) = GameData_21345e8[0] + 2;
  v115 = *(_QWORD*)(a1 + 2704);
  if (v114 == 1) {
    if (v115 != 0) {
      v116 = *v2;
      v117 = *(_QWORD*)(a1 + 2696);
      *(_QWORD*)(a1 + 2696) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v116 + 24LL))(v116, v117);
      v118 = *v2;
      v119 = *(_QWORD*)(a1 + 2704);
      *(_QWORD*)(a1 + 2704) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v118 + 24LL))(v118, v119);
      v115 = *(_QWORD*)(a1 + 2704);
      *(_DWORD*)(a1 + 2712) = 0;
    }
    *(_BYTE*)(a1 + 2752) = 0;
  }
  *(_QWORD*)(a1 + 2688) = GameData_21345f0[0] + 2;
  if (v115 != 0) {
    v120 = *v2;
    v121 = *(_QWORD*)(a1 + 2696);
    *(_QWORD*)(a1 + 2696) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v120 + 24LL))(v120, v121);
    v122 = *v2;
    v123 = *(_QWORD*)(a1 + 2704);
    *(_QWORD*)(a1 + 2704) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v122 + 24LL))(v122, v123);
    *(_DWORD*)(a1 + 2712) = 0;
  }
  nn_os_FinalizeMutex(a1 + 2720);
  v124 = *(unsigned __int8*)(a1 + 2672);
  *(_QWORD*)(a1 + 2600) = GameData_21345d8[0] + 2;
  v125 = *(_QWORD*)(a1 + 2624);
  if (v124 == 1) {
    if (v125 != 0) {
      v126 = *v2;
      v127 = *(_QWORD*)(a1 + 2616);
      *(_QWORD*)(a1 + 2616) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v126 + 24LL))(v126, v127);
      v128 = *v2;
      v129 = *(_QWORD*)(a1 + 2624);
      *(_QWORD*)(a1 + 2624) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v128 + 24LL))(v128, v129);
      v125 = *(_QWORD*)(a1 + 2624);
      *(_DWORD*)(a1 + 2632) = 0;
    }
    *(_BYTE*)(a1 + 2672) = 0;
  }
  *(_QWORD*)(a1 + 2608) = GameData_21345e0[0] + 2;
  if (v125 != 0) {
    v130 = *v2;
    v131 = *(_QWORD*)(a1 + 2616);
    *(_QWORD*)(a1 + 2616) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v130 + 24LL))(v130, v131);
    v132 = *v2;
    v133 = *(_QWORD*)(a1 + 2624);
    *(_QWORD*)(a1 + 2624) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v132 + 24LL))(v132, v133);
    *(_DWORD*)(a1 + 2632) = 0;
  }
  nn_os_FinalizeMutex(a1 + 2640);
  v134 = *(unsigned __int8*)(a1 + 2592);
  *(_QWORD*)(a1 + 2520) = GameData_21345c8[0] + 2;
  v135 = *(_QWORD*)(a1 + 2544);
  if (v134 == 1) {
    if (v135 != 0) {
      v136 = *v2;
      v137 = *(_QWORD*)(a1 + 2536);
      *(_QWORD*)(a1 + 2536) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v136 + 24LL))(v136, v137);
      v138 = *v2;
      v139 = *(_QWORD*)(a1 + 2544);
      *(_QWORD*)(a1 + 2544) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v138 + 24LL))(v138, v139);
      v135 = *(_QWORD*)(a1 + 2544);
      *(_DWORD*)(a1 + 2552) = 0;
    }
    *(_BYTE*)(a1 + 2592) = 0;
  }
  *(_QWORD*)(a1 + 2528) = GameData_21345d0[0] + 2;
  if (v135 != 0) {
    v140 = *v2;
    v141 = *(_QWORD*)(a1 + 2536);
    *(_QWORD*)(a1 + 2536) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v140 + 24LL))(v140, v141);
    v142 = *v2;
    v143 = *(_QWORD*)(a1 + 2544);
    *(_QWORD*)(a1 + 2544) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v142 + 24LL))(v142, v143);
    *(_DWORD*)(a1 + 2552) = 0;
  }
  nn_os_FinalizeMutex(a1 + 2560);
  v144 = *(unsigned __int8*)(a1 + 2512);
  *(_QWORD*)(a1 + 2440) = GameData_21345b8[0] + 2;
  v145 = *(_QWORD*)(a1 + 2464);
  if (v144 == 1) {
    if (v145 != 0) {
      v146 = *v2;
      v147 = *(_QWORD*)(a1 + 2456);
      *(_QWORD*)(a1 + 2456) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v146 + 24LL))(v146, v147);
      v148 = *v2;
      v149 = *(_QWORD*)(a1 + 2464);
      *(_QWORD*)(a1 + 2464) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v148 + 24LL))(v148, v149);
      v145 = *(_QWORD*)(a1 + 2464);
      *(_DWORD*)(a1 + 2472) = 0;
    }
    *(_BYTE*)(a1 + 2512) = 0;
  }
  *(_QWORD*)(a1 + 2448) = GameData_21345c0[0] + 2;
  if (v145 != 0) {
    v150 = *v2;
    v151 = *(_QWORD*)(a1 + 2456);
    *(_QWORD*)(a1 + 2456) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v150 + 24LL))(v150, v151);
    v152 = *v2;
    v153 = *(_QWORD*)(a1 + 2464);
    *(_QWORD*)(a1 + 2464) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v152 + 24LL))(v152, v153);
    *(_DWORD*)(a1 + 2472) = 0;
  }
  nn_os_FinalizeMutex(a1 + 2480);
  v154 = *(unsigned __int8*)(a1 + 2432);
  *(_QWORD*)(a1 + 2360) = GameData_21345a8[0] + 2;
  v155 = *(_QWORD*)(a1 + 2384);
  if (v154 == 1) {
    if (v155 != 0) {
      v156 = *v2;
      v157 = *(_QWORD*)(a1 + 2376);
      *(_QWORD*)(a1 + 2376) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v156 + 24LL))(v156, v157);
      v158 = *v2;
      v159 = *(_QWORD*)(a1 + 2384);
      *(_QWORD*)(a1 + 2384) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v158 + 24LL))(v158, v159);
      v155 = *(_QWORD*)(a1 + 2384);
      *(_DWORD*)(a1 + 2392) = 0;
    }
    *(_BYTE*)(a1 + 2432) = 0;
  }
  *(_QWORD*)(a1 + 2368) = GameData_21345b0[0] + 2;
  if (v155 != 0) {
    v160 = *v2;
    v161 = *(_QWORD*)(a1 + 2376);
    *(_QWORD*)(a1 + 2376) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v160 + 24LL))(v160, v161);
    v162 = *v2;
    v163 = *(_QWORD*)(a1 + 2384);
    *(_QWORD*)(a1 + 2384) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v162 + 24LL))(v162, v163);
    *(_DWORD*)(a1 + 2392) = 0;
  }
  nn_os_FinalizeMutex(a1 + 2400);
  v164 = *(unsigned __int8*)(a1 + 2352);
  *(_QWORD*)(a1 + 2280) = GameData_2134598[0] + 2;
  v165 = *(_QWORD*)(a1 + 2304);
  if (v164 == 1) {
    if (v165 != 0) {
      v166 = *v2;
      v167 = *(_QWORD*)(a1 + 2296);
      *(_QWORD*)(a1 + 2296) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v166 + 24LL))(v166, v167);
      v168 = *v2;
      v169 = *(_QWORD*)(a1 + 2304);
      *(_QWORD*)(a1 + 2304) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v168 + 24LL))(v168, v169);
      v165 = *(_QWORD*)(a1 + 2304);
      *(_DWORD*)(a1 + 2312) = 0;
    }
    *(_BYTE*)(a1 + 2352) = 0;
  }
  *(_QWORD*)(a1 + 2288) = GameData_21345a0[0] + 2;
  if (v165 != 0) {
    v170 = *v2;
    v171 = *(_QWORD*)(a1 + 2296);
    *(_QWORD*)(a1 + 2296) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v170 + 24LL))(v170, v171);
    v172 = *v2;
    v173 = *(_QWORD*)(a1 + 2304);
    *(_QWORD*)(a1 + 2304) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v172 + 24LL))(v172, v173);
    *(_DWORD*)(a1 + 2312) = 0;
  }
  nn_os_FinalizeMutex(a1 + 2320);
  v174 = *(unsigned __int8*)(a1 + 2272);
  *(_QWORD*)(a1 + 2200) = GameData_2134588[0] + 2;
  v175 = *(_QWORD*)(a1 + 2224);
  if (v174 == 1) {
    if (v175 != 0) {
      v176 = *v2;
      v177 = *(_QWORD*)(a1 + 2216);
      *(_QWORD*)(a1 + 2216) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v176 + 24LL))(v176, v177);
      v178 = *v2;
      v179 = *(_QWORD*)(a1 + 2224);
      *(_QWORD*)(a1 + 2224) = 0;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v178 + 24LL))(v178, v179);
      v175 = *(_QWORD*)(a1 + 2224);
      *(_DWORD*)(a1 + 2232) = 0;
    }
    *(_BYTE*)(a1 + 2272) = 0;
  }
  *(_QWORD*)(a1 + 2208) = GameData_2134590[0] + 2;
  if (v175 != 0) {
    v180 = *v2;
    v181 = *(_QWORD*)(a1 + 2216);
    *(_QWORD*)(a1 + 2216) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v180 + 24LL))(v180, v181);
    v182 = *v2;
    v183 = *(_QWORD*)(a1 + 2224);
    *(_QWORD*)(a1 + 2224) = 0;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v182 + 24LL))(v182, v183);
    *(_DWORD*)(a1 + 2232) = 0;
  }
  return nn_os_FinalizeMutex(a1 + 2240);
}

__int64 Manager_1163c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v12;
    int v13;
  } v12_;

  GameData_2198f98 = (unsigned int)snd_fnd_calcCrc32("__SystemSlot", 0);
  GameData_2198fac = -1;
  GameData_2198f9c = 0;
  GameData_2198fa4 = 0;
  GameData_2198fb0 = 1065353216;
  v2 = Crc32List_116570(a1 + 2200, a1, (__int64)"__SystemSlot",
                        (__int64)&GameData_2198f98);
  nn_os_LockMutex(&GameData_2198f28);
  *(_QWORD*)(*(_QWORD*)(a1 + 32) + v2) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 32) + v2 + 8) = 0;
  if (**(_QWORD**)(a1 + 48) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 32) + *(_QWORD*)(a1 + 24) + 8LL) = v2;
    *(_QWORD*)(*(_QWORD*)(a1 + 32) + v2) = **(_QWORD**)(a1 + 48);
  }
  else {
    *(_QWORD*)(a1 + 16) = v2;
  }
  *(_QWORD*)(a1 + 24) = v2;
  nn_os_UnlockMutex(&GameData_2198f28);
  v12_.v12 = 0;
  v12_.v13 = 0x2000;
  if (v2 != 0) {
    v3 = v2 + 5592;
  }
  else {
    v3 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v12_.v12, v3);
  GameRoutine_112180_alt1(a1 + 3112, (__int64)&v12_.v12);
  (*(void (**)(__int64))(*(_QWORD*)snd_s_target + 16LL))(snd_s_target);
  v4 = GameRoutine_1101f0(a1);
  *(_QWORD*)(a1 + 2136) = v4;
  GameRoutine_110250(v4);
  v5 = Archive_104390(a1);
  *(_QWORD*)(a1 + 2144) = v5;
  Archive_1043f0(v5);
  v6 = (_QWORD*)GameRoutine_1909b0(a1);
  *(_QWORD*)(a1 + 2152) = v6;
  GameRoutine_190a20(v6);
  v7 = FileManager_10def0(a1);
  *(_QWORD*)(a1 + 2160) = v7;
  GameRoutine_10df50(v7);
  *(_QWORD*)(a1 + 2168) = GameRoutine_10e7a0(a1);
  *(_QWORD*)(a1 + 2176) = GameRoutine_10ab20(a1);
  v9 = VibrationGroup_13df20(a1);
  *(_QWORD*)(a1 + 2184) = v9;
  VibrationGroup_13df80(v9);
  v10 = GameRoutine_17a750(a1);
  *(_QWORD*)(a1 + 2192) = v10;
  GameRoutine_17a790(v10);
  return (*(__int64 (**)(__int64))(*(_QWORD*)snd_s_target + 24LL))(
      snd_s_target);
}

__int64 Manager_116630() { return *(unsigned __int8*)(snd_s_target + 17); }

__int64 (***snd_Manager_updateVoice(__int64** a1, long double a2))()
{

#pragma clang fp contract(off)
  int v3;
  __int64** v4;
  __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64 v8;
  __int64 (***v9)();
  __int64 v10;
  __int64 (***v11)();
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 (***v15)();
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 (***v19)();
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 (***v23)();
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 (***v27)();
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 (***v31)();
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 (***v36)();
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 (***v40)();
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 (***v44)();
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 (***v48)();
  __int64 v49;
  __int64 v50;
  __int64* v51;
  __int64 (***v52)();
  __int64 v53;
  __int64 (***v54)();
  __int64 v55;
  __int64 v56;
  __int64 (***v57)();
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 (***v61)();
  __int64* v62;
  __int64 v63;
  __int64 v64;
  __int64 (***result)();
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64** v69;
  struct {
    __int64 (**v70)();
    int v71;
    char gap28_[20];
    __int64 (***v72)();
  } v70_;
  struct {
    __int64 (**v73)();
    int v74;
    char gap76_[20];
    __int64 (***v75)();
  } v73_;
  struct {
    __int64 (**v76)();
    int v77;
    char gap124_[20];
    __int64 (***v78)();
  } v76_;
  struct {
    __int64 (**v79)();
    int v80;
    char gap172_[20];
    __int64 (***v81)();
  } v79_;
  struct {
    __int64 (**v82)();
    int v83;
    char gap220_[20];
    __int64 (***v84)();
  } v82_;
  struct {
    __int64 (**v85)();
    int v86;
    char gap268_[20];
    __int64 (***v87)();
  } v85_;
  struct {
    __int64 (**v88)();
    int v89;
    char gap316_[20];
    __int64 (***v90)();
  } v88_;
  struct {
    __int64 (**v91)();
    int v92;
    char gap364_[20];
    __int64 (***v93)();
  } v91_;
  struct {
    __int64 (**v94)();
    int v95;
    char gap412_[20];
    __int64 (***v96)();
  } v94_;
  struct {
    __int64 (**v97)();
    int v98;
    char gap460_[20];
    __int64 (***v99)();
  } v97_;
  struct {
    __int64 (**v100)();
    int v101;
    char gap508_[20];
    __int64 (***v102)();
  } v100_;
  struct {
    __int64 (**v103)();
    int v104;
    char gap556_[20];
    __int64 (***v105)();
  } v103_;
  struct {
    __int64 (**v106)();
    int v107;
    char gap604_[20];
    __int64 (***v108)();
  } v106_;
  struct {
    __int64 (**v109)();
    int v110;
    char gap652_[20];
    __int64 (***v111)();
  } v109_;
  struct {
    __int64 (**v112)();
    int v113;
    char gap700_[20];
    __int64 (***v114)();
  } v112_;
  struct {
    __int64 (**v115)();
    int v116;
    char gap748_[20];
    __int64 (***v117)();
  } v115_;
  __int64 v118;

  v3 = LODWORD(a2);
  if (*snd_Game_s_instance_ptr[0] != 0) {
    (*(void (**)(_QWORD, long double))(**(_QWORD**)snd_Game_s_instance_ptr[0] +
                                       48LL))(*snd_Game_s_instance_ptr[0], a2);
  }
  v4 = a1 + 22;
  v5 = 0;
  v69 = a1;
  do {
    v115_.v116 = v3;
    v115_.v117 = &v115_.v115;
    v7 = &v4[60 * v5];
    v115_.v115 = GameData_1f55f40;
    v8 = *v7[3];
    if (v8 == 0) {
      v9 = &v115_.v115;
    LABEL_14:
      v10 = 4;
    LABEL_15:
      ((__int64 (*)(__int64))(*v9)[v10])((__int64)v9);
      goto LABEL_16;
    }
    do {
      v118 = v8;
      v8 = *(_QWORD*)(v8 + 5616);
      if (v115_.v117 == nullptr) {
      LABEL_135:
        GameRoutine_60a310_alt2();
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v115_.v117)[6])(v115_.v117,
                                                                  &v118);
    } while (v8 != 0);
    v9 = v115_.v117;
    if (v115_.v117 == &v115_.v115) {
      goto LABEL_14;
    }
    if (v115_.v117 != nullptr) {
      v10 = 5;
      goto LABEL_15;
    }
  LABEL_16:
    v11 = &v112_.v112;
    v112_.v113 = v3;
    v112_.v112 = GameData_1f55fc0;
    v12 = v7[8];
    v112_.v114 = &v112_.v112;
    v13 = *v12;
    if (*v12 == 0) {
      goto LABEL_22;
    }
    do {
      v118 = v13;
      v13 = *(_QWORD*)(v13 + 5616);
      if (v112_.v114 == nullptr) {
        goto LABEL_135;
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v112_.v114)[6])(v112_.v114,
                                                                  &v118);
    } while (v13 != 0);
    v11 = v112_.v114;
    if (v112_.v114 == &v112_.v112) {
    LABEL_22:
      v14 = 4;
      goto LABEL_23;
    }
    if (v112_.v114 != nullptr) {
      v14 = 5;
    LABEL_23:
      ((__int64 (*)(__int64))(*v11)[v14])((__int64)v11);
    }
    v15 = &v109_.v109;
    v109_.v110 = v3;
    v109_.v109 = GameData_1f56040;
    v16 = v7[13];
    v109_.v111 = &v109_.v109;
    v17 = *v16;
    if (*v16 == 0) {
      goto LABEL_30;
    }
    do {
      v118 = v17;
      v17 = *(_QWORD*)(v17 + 5616);
      if (v109_.v111 == nullptr) {
        goto LABEL_135;
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v109_.v111)[6])(v109_.v111,
                                                                  &v118);
    } while (v17 != 0);
    v15 = v109_.v111;
    if (v109_.v111 == &v109_.v109) {
    LABEL_30:
      v18 = 4;
      goto LABEL_31;
    }
    if (v109_.v111 != nullptr) {
      v18 = 5;
    LABEL_31:
      ((__int64 (*)(__int64))(*v15)[v18])((__int64)v15);
    }
    v19 = &v106_.v106;
    v106_.v107 = v3;
    v106_.v106 = GameData_1f560c0;
    v20 = v7[18];
    v106_.v108 = &v106_.v106;
    v21 = *v20;
    if (*v20 == 0) {
      goto LABEL_38;
    }
    do {
      v118 = v21;
      v21 = *(_QWORD*)(v21 + 5616);
      if (v106_.v108 == nullptr) {
        goto LABEL_135;
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v106_.v108)[6])(v106_.v108,
                                                                  &v118);
    } while (v21 != 0);
    v19 = v106_.v108;
    if (v106_.v108 == &v106_.v106) {
    LABEL_38:
      v22 = 4;
      goto LABEL_39;
    }
    if (v106_.v108 != nullptr) {
      v22 = 5;
    LABEL_39:
      ((__int64 (*)(__int64))(*v19)[v22])((__int64)v19);
    }
    v23 = &v103_.v103;
    v103_.v104 = v3;
    v103_.v103 = GameData_1f56140;
    v24 = v7[23];
    v103_.v105 = &v103_.v103;
    v25 = *v24;
    if (*v24 == 0) {
      goto LABEL_46;
    }
    do {
      v118 = v25;
      v25 = *(_QWORD*)(v25 + 5616);
      if (v103_.v105 == nullptr) {
        goto LABEL_135;
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v103_.v105)[6])(v103_.v105,
                                                                  &v118);
    } while (v25 != 0);
    v23 = v103_.v105;
    if (v103_.v105 == &v103_.v103) {
    LABEL_46:
      v26 = 4;
      goto LABEL_47;
    }
    if (v103_.v105 != nullptr) {
      v26 = 5;
    LABEL_47:
      ((__int64 (*)(__int64))(*v23)[v26])((__int64)v23);
    }
    v27 = &v100_.v100;
    v100_.v101 = v3;
    v100_.v100 = GameData_1f561c0;
    v28 = v7[28];
    v100_.v102 = &v100_.v100;
    v29 = *v28;
    if (*v28 == 0) {
      goto LABEL_54;
    }
    do {
      v118 = v29;
      v29 = *(_QWORD*)(v29 + 5616);
      if (v100_.v102 == nullptr) {
        goto LABEL_135;
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v100_.v102)[6])(v100_.v102,
                                                                  &v118);
    } while (v29 != 0);
    v27 = v100_.v102;
    if (v100_.v102 == &v100_.v100) {
    LABEL_54:
      v30 = 4;
      goto LABEL_55;
    }
    if (v100_.v102 != nullptr) {
      v30 = 5;
    LABEL_55:
      ((__int64 (*)(__int64))(*v27)[v30])((__int64)v27);
    }
    v31 = &v97_.v97;
    v97_.v98 = v3;
    v97_.v97 = GameData_1f56240;
    v32 = v7[33];
    v97_.v99 = &v97_.v97;
    v33 = *v32;
    if (*v32 == 0) {
      goto LABEL_62;
    }
    do {
      v118 = v33;
      v33 = *(_QWORD*)(v33 + 5616);
      if (v97_.v99 == nullptr) {
        goto LABEL_135;
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v97_.v99)[6])(v97_.v99,
                                                                &v118);
    } while (v33 != 0);
    v31 = v97_.v99;
    if (v97_.v99 == &v97_.v97) {
    LABEL_62:
      v34 = 4;
      goto LABEL_63;
    }
    if (v97_.v99 != nullptr) {
      v34 = 5;
    LABEL_63:
      ((__int64 (*)(__int64))(*v31)[v34])((__int64)v31);
    }
    v35 = v7[38];
    v36 = &v94_.v94;
    v94_.v94 = GameData_1f562c0;
    v94_.v95 = v3;
    v94_.v96 = &v94_.v94;
    v37 = *v35;
    if (*v35 == 0) {
      goto LABEL_70;
    }
    do {
      v118 = v37;
      v37 = *(_QWORD*)(v37 + 5616);
      if (v94_.v96 == nullptr) {
        goto LABEL_135;
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v94_.v96)[6])(v94_.v96,
                                                                &v118);
    } while (v37 != 0);
    v36 = v94_.v96;
    if (v94_.v96 == &v94_.v94) {
    LABEL_70:
      v38 = 4;
      goto LABEL_71;
    }
    if (v94_.v96 != nullptr) {
      v38 = 5;
    LABEL_71:
      ((__int64 (*)(__int64))(*v36)[v38])((__int64)v36);
    }
    v39 = v7[43];
    v40 = &v91_.v91;
    v91_.v91 = GameData_1f56340;
    v91_.v92 = v3;
    v91_.v93 = &v91_.v91;
    v41 = *v39;
    if (*v39 == 0) {
      goto LABEL_78;
    }
    do {
      v118 = v41;
      v41 = *(_QWORD*)(v41 + 5616);
      if (v91_.v93 == nullptr) {
        goto LABEL_135;
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v91_.v93)[6])(v91_.v93,
                                                                &v118);
    } while (v41 != 0);
    v40 = v91_.v93;
    if (v91_.v93 == &v91_.v91) {
    LABEL_78:
      v42 = 4;
      goto LABEL_79;
    }
    if (v91_.v93 != nullptr) {
      v42 = 5;
    LABEL_79:
      ((__int64 (*)(__int64))(*v40)[v42])((__int64)v40);
    }
    v43 = v7[48];
    v44 = &v88_.v88;
    v88_.v88 = GameData_1f563c0;
    v88_.v89 = v3;
    v88_.v90 = &v88_.v88;
    v45 = *v43;
    if (*v43 == 0) {
      goto LABEL_86;
    }
    do {
      v118 = v45;
      v45 = *(_QWORD*)(v45 + 5616);
      if (v88_.v90 == nullptr) {
        goto LABEL_135;
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v88_.v90)[6])(v88_.v90,
                                                                &v118);
    } while (v45 != 0);
    v44 = v88_.v90;
    if (v88_.v90 == &v88_.v88) {
    LABEL_86:
      v46 = 4;
      goto LABEL_87;
    }
    if (v88_.v90 != nullptr) {
      v46 = 5;
    LABEL_87:
      ((__int64 (*)(__int64))(*v44)[v46])((__int64)v44);
    }
    v47 = v7[53];
    v48 = &v85_.v85;
    v85_.v85 = GameData_1f56440;
    v85_.v86 = v3;
    v85_.v87 = &v85_.v85;
    v49 = *v47;
    if (*v47 == 0) {
      goto LABEL_94;
    }
    do {
      v118 = v49;
      v49 = *(_QWORD*)(v49 + 5616);
      if (v85_.v87 == nullptr) {
        goto LABEL_135;
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v85_.v87)[6])(v85_.v87,
                                                                &v118);
    } while (v49 != 0);
    v48 = v85_.v87;
    if (v85_.v87 == &v85_.v85) {
    LABEL_94:
      v50 = 4;
      goto LABEL_95;
    }
    if (v85_.v87 != nullptr) {
      v50 = 5;
    LABEL_95:
      ((__int64 (*)(__int64))(*v48)[v50])((__int64)v48);
    }
    v51 = v7[58];
    v52 = &v82_.v82;
    v82_.v82 = GameData_1f564c0;
    v82_.v83 = v3;
    v82_.v84 = &v82_.v82;
    v53 = *v51;
    if (*v51 == 0) {
      goto LABEL_4;
    }
    do {
      v118 = v53;
      v53 = *(_QWORD*)(v53 + 5616);
      if (v82_.v84 == nullptr) {
        goto LABEL_135;
      }
      ((void (*)(__int64 (***)(void), __int64*))(*v82_.v84)[6])(v82_.v84,
                                                                &v118);
    } while (v53 != 0);
    v52 = v82_.v84;
    if (v82_.v84 == &v82_.v82) {
    LABEL_4:
      v6 = 4;
    LABEL_5:
      ((__int64 (*)(__int64))(*v52)[v6])((__int64)v52);
      goto LABEL_6;
    }
    if (v82_.v84 != nullptr) {
      v6 = 5;
      goto LABEL_5;
    }
  LABEL_6:
    ++v5;
  } while (v5 != 4);
  v54 = &v79_.v79;
  v79_.v80 = v3;
  v79_.v79 = GameData_1f56540;
  v79_.v81 = &v79_.v79;
  v55 = *v69[265];
  if (v55 == 0) {
    goto LABEL_108;
  }
  do {
    v118 = v55;
    v55 = *(_QWORD*)(v55 + 5616);
    if (v79_.v81 == nullptr) {
      goto LABEL_135;
    }
    ((void (*)(__int64 (***)(void), __int64*))(*v79_.v81)[6])(v79_.v81, &v118);
  } while (v55 != 0);
  v54 = v79_.v81;
  if (v79_.v81 == &v79_.v79) {
  LABEL_108:
    v56 = 4;
  LABEL_109:
    ((__int64 (*)(__int64))(*v54)[v56])((__int64)v54);
  }
  else if (v79_.v81 != nullptr) {
    v56 = 5;
    goto LABEL_109;
  }
  v57 = &v76_.v76;
  v76_.v77 = v3;
  v76_.v76 = GameData_1f565c0;
  v58 = v69[20];
  v76_.v78 = &v76_.v76;
  v59 = *v58;
  if (*v58 == 0) {
    goto LABEL_116;
  }
  do {
    v118 = v59;
    v59 = *(_QWORD*)(v59 + 5616);
    if (v76_.v78 == nullptr) {
      goto LABEL_135;
    }
    ((void (*)(__int64 (***)(void), __int64*))(*v76_.v78)[6])(v76_.v78, &v118);
  } while (v59 != 0);
  v57 = v76_.v78;
  if (v76_.v78 == &v76_.v76) {
  LABEL_116:
    v60 = 4;
  LABEL_117:
    ((__int64 (*)(__int64))(*v57)[v60])((__int64)v57);
  }
  else if (v76_.v78 != nullptr) {
    v60 = 5;
    goto LABEL_117;
  }
  v61 = &v73_.v73;
  v73_.v74 = v3;
  v73_.v73 = GameData_1f56640;
  v62 = v69[10];
  v73_.v75 = &v73_.v73;
  v63 = *v62;
  if (*v62 == 0) {
    goto LABEL_124;
  }
  do {
    v118 = v63;
    v63 = *(_QWORD*)(v63 + 5616);
    if (v73_.v75 == nullptr) {
      goto LABEL_135;
    }
    ((void (*)(__int64 (***)(void), __int64*))(*v73_.v75)[6])(v73_.v75, &v118);
  } while (v63 != 0);
  v61 = v73_.v75;
  if (v73_.v75 == &v73_.v73) {
  LABEL_124:
    v64 = 4;
  LABEL_125:
    ((__int64 (*)(__int64))(*v61)[v64])((__int64)v61);
  }
  else if (v73_.v75 != nullptr) {
    v64 = 5;
    goto LABEL_125;
  }
  result = &v70_.v70;
  v70_.v71 = v3;
  v70_.v70 = GameData_1f566c0;
  v66 = v69[5];
  v70_.v72 = &v70_.v70;
  v67 = *v66;
  if (*v66 == 0) {
    goto LABEL_132;
  }
  do {
    v118 = v67;
    v67 = *(_QWORD*)(v67 + 5616);
    if (v70_.v72 == nullptr) {
      goto LABEL_135;
    }
    ((void (*)(__int64 (***)(void), __int64*))(*v70_.v72)[6])(v70_.v72, &v118);
  } while (v67 != 0);
  result = v70_.v72;
  if (v70_.v72 == &v70_.v70) {
  LABEL_132:
    v68 = 4;
    return (__int64 (***)(void))((__int64 (*)(__int64))(*result)[v68])(
        (__int64)result);
  }
  else if (v70_.v72 != nullptr) {
    v68 = 5;
    return (__int64 (***)(void))((__int64 (*)(__int64))(*result)[v68])(
        (__int64)result);
  }
  return result;
}

__int64 Manager_117bc0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64* v12;
  int v13;
  int v14;
  int v15;
  __int16* v16;
  __int64* v17;
  int* v18;
  int v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  struct {
    __int64 v42;
    int v43;
  } v42_;
  struct {
    __int64 v44;
    unsigned __int64 v45;
    char* v46;
  } v44_;
  struct {
    __int64 v47;
    unsigned __int64 v48;
    __int64 v49;
  } v47_;

  nn_os_LockMutex(GameData_2134648[0]);
  v8 = snd_data_getSettingData();
  v10 = *(_QWORD*)(v8 + 8);
  v9 = *(_QWORD*)(v8 + 16);
  v11 = *(_DWORD*)(v8 + 24);
  *(_QWORD*)(a1 + 3080) = *(_QWORD*)v8;
  *(_DWORD*)(a1 + 3104) = v11;
  *(_QWORD*)(a1 + 3088) = v10;
  *(_QWORD*)(a1 + 3096) = v9;
  v12 = snd_s_target_ptr;
  (*(void (**)(_QWORD, __int64, __int64, _QWORD))(
      *(_QWORD*)*snd_s_target_ptr + 96LL))(*snd_s_target_ptr, a2, a3, a4);
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)*v12 + 1312LL))(*v12) == 1) {
    snd_data_f4400();
    snd_data_f3c60(nullptr);
    snd_data_f4860();
    snd_data_f4c20();
    snd_data_f5b80();
    snd_data_f6760();
    ((void (*)(void))GameRoutine_f4080)();
    v13 = GameRoutine_f4bc0();
    if (v13 >= 1) {
      v14 = v13;
      v15 = 0;
      v16 = GameData_2134648[0];
      v17 = snd_g_memory_ptr[0];
      do {
        ConstructString_1901f0(&v47_.v47);
        v18 = (int*)GameRoutine_f4b50(v15);
        v19 = *v18;
        v20 = (__int64)v18;
        ConstructString_1901f0(&v44_.v44);
        GameRoutine_a392e0((__int64)&v44_.v44, (__int64)"[ %08x ]", v19);
        if ((v47_.v47 & 1) != 0) {
          if ((v44_.v44 & 1) != 0) {
            v21 = v44_.v46;
          }
          else {
            v21 = (char*)&v44_.v44 + 1;
          }
          if ((v44_.v44 & 1) != 0) {
            v22 = v44_.v45;
          }
          else {
            v22 = (unsigned __int64)(unsigned __int8)v44_.v44 >> 1;
          }
          GameRoutine_a3a260(&v47_.v47, (__int64)v21, v22);
          if ((v44_.v44 & 1) != 0) {
            goto LABEL_15;
          }
        }
        else {
          if ((v44_.v44 & 1) == 0) {
            v47_.v47 = v44_.v44;
            v47_.v48 = v44_.v45;
            v47_.v49 = (__int64)v44_.v46;
            goto LABEL_16;
          }
          GameRoutine_a3a3a0(&v47_.v47, (__int64)v44_.v46, v44_.v45);
          if ((v44_.v44 & 1) != 0) {
          LABEL_15:
            (*(void (**)(__int64, char*))(*(_QWORD*)*v17 + 24LL))(*v17,
                                                                  v44_.v46);
          }
        }
      LABEL_16:
        v23 = GameRoutine_190240((__int64)&v47_.v47);
        v24 = Crc32List_118060(a1 + 2200, a1, v23, v20);
        nn_os_LockMutex(v16);
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + v24) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 32) + v24 + 8) = 0;
        if (**(_QWORD**)(a1 + 48) != 0) {
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + *(_QWORD*)(a1 + 24) + 8LL) = v24;
          *(_QWORD*)(*(_QWORD*)(a1 + 32) + v24) = **(_QWORD**)(a1 + 48);
          *(_QWORD*)(a1 + 24) = v24;
          nn_os_UnlockMutex(v16);
          if ((v47_.v47 & 1) != 0) {
            goto LABEL_20;
          }
        }
        else {
          *(_QWORD*)(a1 + 16) = v24;
          *(_QWORD*)(a1 + 24) = v24;
          nn_os_UnlockMutex(v16);
          if ((v47_.v47 & 1) != 0) {
          LABEL_20:
            (*(void (**)(__int64, __int64))(*(_QWORD*)*v17 + 24LL))(*v17,
                                                                    v47_.v49);
          }
        }
        ++v15;
      } while (v14 != v15);
    }
    WavePlayer_17bc10(*(_QWORD*)(a1 + 2192));
    v12 = snd_s_target_ptr;
  }
  else {
    GameRoutine_f5690();
    GameRoutine_f6240();
    snd_data_f4c20();
    snd_data_f5b80();
    ((void (*)(void))GameRoutine_f4080)();
  }
  v25 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v12 + 1304LL))(*v12, a3);
  v26 = Crc32List_118120(a1 + 2280, a1, a3, v25, 0);
  v27 = v26;
  *(_QWORD*)(*(_QWORD*)(a1 + 152) + v26) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 152) + v26 + 8) = 0;
  if (**(_QWORD**)(a1 + 168) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 152) + *(_QWORD*)(a1 + 144) + 8LL) = v26;
    *(_QWORD*)(*(_QWORD*)(a1 + 152) + v26) = **(_QWORD**)(a1 + 168);
  }
  else {
    *(_QWORD*)(a1 + 136) = v26;
  }
  v28 = *v12;
  *(_QWORD*)(a1 + 144) = v27;
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)v28 + 1312LL))(v28) != 1) {
    v29 = **(_QWORD**)(a1 + 160);
    v47_.v47 = 0;
    LODWORD(v47_.v48) = 0x2000;
    if (v29 != 0) {
      v30 = v29 + 5592;
    }
    else {
      v30 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v47_.v47, v30);
    v31 = snd_fnd_WeakHandle_get_alt1((__int64)&v47_.v47);
    v42_.v42 = 0;
    v42_.v43 = 0x2000;
    if (v27 != 0) {
      v32 = v27 + 5592;
    }
    else {
      v32 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v42_.v42, v32);
    GameRoutine_112180_alt1(v31 + 72, (__int64)&v42_.v42);
  }
  v33 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)*v12 + 1304LL))(*v12, a3);
  v34 = Crc32List_118120(a1 + 2280, a1, a3, v33, 1u);
  v35 = v34;
  *(_QWORD*)(*(_QWORD*)(a1 + 152) + v34) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 152) + v34 + 8) = 0;
  if (**(_QWORD**)(a1 + 168) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 152) + *(_QWORD*)(a1 + 144) + 8LL) = v34;
    *(_QWORD*)(*(_QWORD*)(a1 + 152) + v34) = **(_QWORD**)(a1 + 168);
  }
  else {
    *(_QWORD*)(a1 + 136) = v34;
  }
  v36 = *v12;
  *(_QWORD*)(a1 + 144) = v35;
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)v36 + 1312LL))(v36) != 1) {
    v37 = **(_QWORD**)(a1 + 168);
    v47_.v47 = 0;
    LODWORD(v47_.v48) = 0x2000;
    if (v37 != 0) {
      v38 = v37 + 5592;
    }
    else {
      v38 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v47_.v47, v38);
    v39 = snd_fnd_WeakHandle_get_alt1((__int64)&v47_.v47);
    v42_.v42 = 0;
    v42_.v43 = 0x2000;
    if (v35 != 0) {
      v40 = v35 + 5592;
    }
    else {
      v40 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v42_.v42, v40);
    GameRoutine_112180_alt1(v39 + 72, (__int64)&v42_.v42);
  }
  *(_BYTE*)(a1 + 8) = 0;
  return nn_os_UnlockMutex(GameData_2134648[0]);
}

__attribute__((swiftcall)) void Manager_1181f0(PSEUDO_X8 x8_, __int64 result,
                                               int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;

  v3 = *(_DWORD*)(result + 3128);
  if (a2 != -1) {
    v3 = a2;
  }
  if (v3 == 1) {
    v4 = *(__int64**)(result + 168);
  }
  else {
    if (v3 != 0) {
      *(_QWORD*)a3 = 0;
      *(_DWORD*)(a3 + 8) = 0x2000;
      {
        result;
        return;
      }
    }
    v4 = *(__int64**)(result + 160);
  }
  v5 = *v4;
  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  if (v5 != 0) {
    v6 = v5 + 5592;
  }
  else {
    v6 = 0;
  }
  {
    snd_fnd_WeakHandle_set(a3, v6);
    return;
  }
}

__int64 Manager_118260(__int64 result, const char* a2)
{
  __int64 v2;
  const char* v3;
  __int64* v4;
  __int64 (***v5)();
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  void (***j)(_QWORD);
  void (***k)(_QWORD);
  void (***m)(_QWORD);
  void (***v13)(_QWORD);
  __int64 v14;
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
  __int64 v30;
  __int64 v31;
  struct {
    __int64 (**v32)();
    int v33;
    char gap12_[20];
    __int64 (***v34)();
  } v32_;
  __int64 v35;

  if ((*(_BYTE*)(result + 8) & 1) != 0) {
    return result;
  }
  v2 = result;
  if (a2 != nullptr) {
    v3 = a2;
  }
  else {
    v3 = "noname";
  }
  nn_os_LockMutex(GameData_2134648[0]);
  v4 = snd_s_target_ptr;
  if ((*(unsigned int (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr + 1312LL))(
          *snd_s_target_ptr) == 1) {
    *(_BYTE*)(v2 + 8) = 1;
    nn_os_LockMutex(GameData_2134648[0]);
    v5 = &v32_.v32;
    v32_.v32 = GameData_1f56b40;
    v6 = *(__int64**)(v2 + 40);
    v32_.v34 = &v32_.v32;
    v7 = *v6;
    if (v7 == 0) {
      goto LABEL_54;
    }
    v8 = *(_QWORD*)(v7 + 5616);
    v5 = &v32_.v32;
    v35 = v7;
    while (1) {
      ((void (*)(__int64 (***)(void), __int64*))(*v5)[6])(v5, &v35);
      v5 = v32_.v34;
      if (v8 == 0) {
        break;
      }
      v35 = v8;
      v8 = *(_QWORD*)(v8 + 5616);
      if (v32_.v34 == nullptr) {
        GameRoutine_60a310_alt2();
      }
    }
    if (v32_.v34 == &v32_.v32) {
    LABEL_54:
      v28 = 4;
    }
    else {
      if (v32_.v34 == nullptr) {
        goto LABEL_56;
      }
      v28 = 5;
    }
    ((void (*)(__int64 (***)(void)))(*v5)[v28])(v5);
  LABEL_56:
    nn_os_UnlockMutex(GameData_2134648[0]);
    v30 = *(_QWORD*)(v2 + 2192);
    if (v30 != 0) {
      v30 = GameRoutine_17ba40(v30);
    }
    ((void (*)(__int64))GameRoutine_f4680)(v30);
    GameRoutine_f47f0();
    GameRoutine_f4ae0();
    GameRoutine_f5690();
    GameRoutine_f6240();
    Data_f6b70();
    nn_os_LockMutex(GameData_2134648[0]);
    i = **(_QWORD**)(v2 + 88);
    if (i == 0) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  GameRoutine_f5690();
  GameRoutine_f6240();
  snd_data_f4c20();
  snd_data_f5b80();
  ((void (*)(void))GameRoutine_f4080)();
  nn_os_LockMutex(GameData_2134648[0]);
  for (i = **(_QWORD**)(v2 + 88); i != 0; i = **(_QWORD**)(v2 + 88)) {
  LABEL_12:
    Manager_1187c0(v2, i, 1);
  }
LABEL_13:
  nn_os_UnlockMutex(GameData_2134648[0]);
  nn_os_LockMutex(GameData_2134650[0]);
  for (j = **(void (*****)(_QWORD))(v2 + 128); j != nullptr;
       j = **(void (*****)(_QWORD))(v2 + 128)) {
    Crc32List_118980(v2, j);
  }
  nn_os_UnlockMutex(GameData_2134650[0]);
  for (k = **(void (*****)(_QWORD))(v2 + 168); k != nullptr;
       k = **(void (*****)(_QWORD))(v2 + 168)) {
    Crc32List_118b20(v2, k);
  }
  if ((*(unsigned int (**)(__int64))(*(_QWORD*)*v4 + 1312LL))(*v4) == 1) {
    for (m = **(void (*****)(_QWORD))(v2 + 48); m != nullptr;
         m = **(void (*****)(_QWORD))(v2 + 48)) {
      Crc32List_118c10(v2, m);
    }
    while (1) {
      v13 = **(void (*****)(_QWORD))(v2 + 168);
      if (v13 == nullptr) {
        break;
      }
      Crc32List_118b20(v2, v13);
    }
    v14 = *(_QWORD*)(v2 + 2192);
    if (v14 != 0) {
      v14 = Crc32List_17be70_alt1(v14, 0);
    }
    snd_Manager__destroyFx(v14, v2 + 216);
    v15 = *(_QWORD*)(v2 + 2192);
    if (v15 != 0) {
      v15 = Crc32List_17be70_alt1(v15, 1);
    }
    snd_Manager__destroyFx(v15, v2 + 256);
    v16 = *(_QWORD*)(v2 + 2192);
    if (v16 != 0) {
      v16 = Crc32List_17be70_alt1(v16, 2);
    }
    snd_Manager__destroyFx(v16, v2 + 296);
    v17 = *(_QWORD*)(v2 + 2192);
    if (v17 != 0) {
      v17 = Crc32List_17be70_alt1(v17, 3);
    }
    snd_Manager__destroyFx(v17, v2 + 336);
    v18 = *(_QWORD*)(v2 + 2192);
    if (v18 != 0) {
      v18 = Crc32List_17be70_alt1(v18, 4);
    }
    snd_Manager__destroyFx(v18, v2 + 376);
    v19 = *(_QWORD*)(v2 + 2192);
    if (v19 != 0) {
      v19 = Crc32List_17be70_alt1(v19, 5);
    }
    snd_Manager__destroyFx(v19, v2 + 416);
    v20 = *(_QWORD*)(v2 + 2192);
    if (v20 != 0) {
      v20 = Crc32List_17be70_alt1(v20, 6);
    }
    snd_Manager__destroyFx(v20, v2 + 456);
    v21 = *(_QWORD*)(v2 + 2192);
    if (v21 != 0) {
      v21 = Crc32List_17be70_alt1(v21, 7);
    }
    snd_Manager__destroyFx(v21, v2 + 496);
    v22 = *(_QWORD*)(v2 + 2192);
    if (v22 != 0) {
      v22 = Crc32List_17be70_alt1(v22, 8);
    }
    snd_Manager__destroyFx(v22, v2 + 536);
    v23 = *(_QWORD*)(v2 + 2192);
    if (v23 != 0) {
      v23 = Crc32List_17be70_alt1(v23, 9);
    }
    snd_Manager__destroyFx(v23, v2 + 576);
    v24 = *(_QWORD*)(v2 + 2192);
    if (v24 != 0) {
      v24 = Crc32List_17be70_alt1(v24, 10);
    }
    snd_Manager__destroyFx(v24, v2 + 616);
    v25 = *(_QWORD*)(v2 + 2192);
    if (v25 != 0) {
      GameRoutine_17bcd0(v25, 0);
    }
    while (1) {
      v26 = **(_QWORD**)(v2 + 2120);
      if (v26 == 0) {
        break;
      }
      Crc32List_120520((_QWORD*)v2, v26);
    }
    GameData_2198fc8 = (unsigned int)snd_fnd_calcCrc32("__SystemSlot", 0);
    GameData_2198fdc = -1;
    GameData_2198fcc = 0;
    GameData_2198fd4 = 0;
    GameData_2198fe0 = 1065353216;
    v27 = Crc32List_116570(v2 + 2200, v2, (__int64)"__SystemSlot",
                           (__int64)&GameData_2198fc8);
    nn_os_LockMutex(GameData_2134648[0]);
    *(_QWORD*)(*(_QWORD*)(v2 + 32) + v27) = 0;
    *(_QWORD*)(*(_QWORD*)(v2 + 32) + v27 + 8) = 0;
    if (**(_QWORD**)(v2 + 48) != 0) {
      *(_QWORD*)(*(_QWORD*)(v2 + 32) + *(_QWORD*)(v2 + 24) + 8LL) = v27;
      *(_QWORD*)(*(_QWORD*)(v2 + 32) + v27) = **(_QWORD**)(v2 + 48);
    }
    else {
      *(_QWORD*)(v2 + 16) = v27;
    }
    *(_QWORD*)(v2 + 24) = v27;
    nn_os_UnlockMutex(GameData_2134648[0]);
    v32_.v32 = nullptr;
    v32_.v33 = 0x2000;
    if (v27 != 0) {
      v31 = v27 + 5592;
    }
    else {
      v31 = 0;
    }
    snd_fnd_WeakHandle_set((__int64)&v32_.v32, v31);
    GameRoutine_112180_alt1(v2 + 3112, (__int64)&v32_.v32);
  }
  nn_os_UnlockMutex(GameData_2134648[0]);
  return (*(__int64 (**)(__int64, const char*))(*(_QWORD*)*v4 + 112LL))(*v4,
                                                                        v3);
}

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

__int64 Manager_11e4c0(__int64 a1, int* a2)
{

#pragma clang fp contract(off)
  int v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  int v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v22;
  _QWORD* v23;
  int v24[2];
  __int64 v25;

  v4 = GameRoutine_f63e0(a2);
  if (v4 == -1) {
    v6 = GameRoutine_f57c0(a2);
    if (v6 == -1) {
      v7 = GameRoutine_13ed60(*(_QWORD*)(a1 + 2184), a2);
      if (v7 == -1) {
        v5 = Data_f6cc0(a2) | 0x8000000;
        if (v5 == -1) {
          goto LABEL_21;
        }
      }
      else {
        v5 = v7 | 0x8000000;
        if (v5 == -1) {
          goto LABEL_21;
        }
      }
    }
    else {
      v5 = v6 | 0x1000000;
      if (v5 == -1) {
        goto LABEL_21;
      }
    }
  }
  else {
    v5 = v4 | 0x2000000;
    if (v5 == -1) {
      goto LABEL_21;
    }
  }
  if ((v5 & 0x2000000) == 0) {
    if ((v5 & 0x1000000) != 0) {
      v8 = GameRoutine_f5850(v5, &v25, 0);
      if (*(_DWORD*)(v8 + 132) != 0) {
        v9 = *(_DWORD*)(v8 + 36);
        v24[0] = *(_DWORD*)(v8 + 32);
        v24[1] = v9;
        v10 = Manager_11e4c0(a1, v24);
      }
      else {
        v22 = *(_DWORD*)(v8 + 36);
        v23 = (_QWORD*)*snd_s_target_ptr;
        v24[0] = *(_DWORD*)(v8 + 32);
        v24[1] = v22;
        v10 = (unsigned __int8)(*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*,
                                                int*))(*v23 + 272LL))(v23, v23,
                                                                      v24) &
              (*(float*)(v8 + 168) < 0x0.0p+0f);
      }
      return v10 & 1;
    }
  LABEL_21:
    v10 = 0;
    return v10 & 1;
  }
  v11 = GameRoutine_f6470(v5, &v25, 0);
  if (*(int*)(v11 + 552) < 1) {
    goto LABEL_21;
  }
  v12 = v11;
  v13 = 0;
  v14 = 0;
  v10 = 0;
  v15 = snd_s_target_ptr;
  do {
    v19 = *(_QWORD*)(v12 + 544);
    v20 = *(_DWORD*)(v19 + v13 + 36);
    if (*(_DWORD*)(v19 + v13 + 132) != 0) {
      v24[0] = *(_DWORD*)(v19 + v13 + 32);
      v24[1] = v20;
      v17 = Manager_11e4c0(a1, v24);
    }
    else {
      v16 = *v15;
      v24[0] = *(_DWORD*)(v19 + v13 + 32);
      v24[1] = v20;
      v17 = (*(__int64 (**)(__int64, int*))(*(_QWORD*)v16 + 272LL))(v16, v24);
    }
    v18 = v19 + v13;
    ++v14;
    v13 += 528;
    v10 |= v17 & (*(float*)(v18 + 168) < 0x0.0p+0f);
  } while (v14 < *(int*)(v12 + 552));
  return v10 & 1;
}

__int64 Manager_11e6d0(__int64 a1, int a2, float a3, float a4, float a5)
{

#pragma clang fp contract(off)
  int v5;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v14;
    int v15;
  } v14_;

  v5 = *(_DWORD*)(a1 + 3128);
  if (a2 != -1) {
    v5 = a2;
  }
  if (v5 == 1) {
    v9 = *(__int64**)(a1 + 168);
  }
  else {
    if (v5 != 0) {
      v14_.v14 = 0;
      v14_.v15 = 0x2000;
      goto LABEL_12;
    }
    v9 = *(__int64**)(a1 + 160);
  }
  v10 = *v9;
  v14_.v14 = 0;
  v14_.v15 = 0x2000;
  if (v10 != 0) {
    v11 = v10 + 5592;
  }
  else {
    v11 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v14_.v14, v11);
LABEL_12:
  v12 = snd_fnd_WeakHandle_get_alt1((__int64)&v14_.v14);
  return (*(__int64 (**)(__int64, float, float, float))(
      *(_QWORD*)(v12 - 5592) + 72LL))(v12 - 5592, a3, a4, a5);
}

void Manager_11e790(__int64 a1, int a2, float a3, float a4, float a5)
{

#pragma clang fp contract(off)
  int v5;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v13;
    int v14;
  } v13_;

  v5 = *(_DWORD*)(a1 + 3128);
  if (a2 != -1) {
    v5 = a2;
  }
  if (v5 == 1) {
    v9 = *(__int64**)(a1 + 168);
  }
  else {
    if (v5 != 0) {
      v13_.v13 = 0;
      v13_.v14 = 0x2000;
      goto LABEL_12;
    }
    v9 = *(__int64**)(a1 + 160);
  }
  v10 = *v9;
  v13_.v13 = 0;
  v13_.v14 = 0x2000;
  if (v10 != 0) {
    v11 = v10 + 5592;
  }
  else {
    v11 = 0;
  }
  snd_fnd_WeakHandle_set((__int64)&v13_.v13, v11);
LABEL_12:
  v12 = snd_fnd_WeakHandle_get_alt1((__int64)&v13_.v13);
  Listener_112bd0((float*)(v12 - 5592), a3, a4, a5);
}

__attribute__((swiftcall)) void Manager_11e860(PSEUDO_X8 x8_, __int64 a1)
{

#pragma clang fp contract(off)
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  float result;
  __int64 v3;

  result = *(float*)(a1 + 3152);
  v3 = *(_QWORD*)(a1 + 3144);
  *(_QWORD*)a2 = snd_fnd_Vec3_vtable;
  *(_QWORD*)(a2 + 8) = v3;
  *(float*)(a2 + 16) = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void Manager_11e880(PSEUDO_X8 x8_, __int64 result,
                                               __int64 a2, unsigned int a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  long double v7;

  if (*(_BYTE*)(result + 8) == 1) {
    *(_QWORD*)a4 = 0;
    *(_DWORD*)(a4 + 8) = 0x2000;
  }
  else {
    v5 = result;
    v6 = Manager_11e980_alt1(result + 2360, result, a2, a3);
    nn_os_LockMutex(&GameData_2198f28);
    *(_QWORD*)(*(_QWORD*)(v5 + 72) + v6) = 0;
    *(_QWORD*)(*(_QWORD*)(v5 + 72) + v6 + 8) = 0;
    if (**(_QWORD**)(v5 + 88) != 0) {
      *(_QWORD*)(*(_QWORD*)(v5 + 72) + *(_QWORD*)(v5 + 64) + 8LL) = v6;
      *(_QWORD*)(*(_QWORD*)(v5 + 72) + v6) = **(_QWORD**)(v5 + 88);
    }
    else {
      *(_QWORD*)(v5 + 56) = v6;
    }
    *(_QWORD*)(v5 + 64) = v6;
    *(__n128*)&v7 = nn_os_UnlockMutex_alt1(&GameData_2198f28);
    (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 48LL))(v6, v7);
    *(_QWORD*)a4 = 0;
    *(_DWORD*)(a4 + 8) = 0x2000;
    {
      snd_fnd_WeakHandle_set_alt1(a4, v6 + 5592);
      return;
    }
  }
  {
    result;
    return;
  }
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

__attribute__((swiftcall)) void Manager_11ea40(PSEUDO_X8 x8_, __int64 result,
                                               __int64 a2, unsigned int a3,
                                               unsigned int a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  long double v11;

  if (*(_BYTE*)(result + 8) == 1) {
    *(_QWORD*)a5 = 0;
    *(_DWORD*)(a5 + 8) = 0x2000;
  }
  else {
    v6 = *(_DWORD*)(result + 3128);
    v7 = result;
    v8 = result + 2360;
    if (a4 == -1) {
      v9 = v6;
    }
    else {
      v9 = a4;
    }
    v10 = Manager_11eb50_alt1(v8, v7, a2, a3, v9);
    nn_os_LockMutex(&GameData_2198f28);
    *(_QWORD*)(*(_QWORD*)(v7 + 72) + v10) = 0;
    *(_QWORD*)(*(_QWORD*)(v7 + 72) + v10 + 8) = 0;
    if (**(_QWORD**)(v7 + 88) != 0) {
      *(_QWORD*)(*(_QWORD*)(v7 + 72) + *(_QWORD*)(v7 + 64) + 8LL) = v10;
      *(_QWORD*)(*(_QWORD*)(v7 + 72) + v10) = **(_QWORD**)(v7 + 88);
    }
    else {
      *(_QWORD*)(v7 + 56) = v10;
    }
    *(_QWORD*)(v7 + 64) = v10;
    *(__n128*)&v11 = nn_os_UnlockMutex_alt1(&GameData_2198f28);
    (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 48LL))(v10, v11);
    *(_QWORD*)a5 = 0;
    *(_DWORD*)(a5 + 8) = 0x2000;
    {
      snd_fnd_WeakHandle_set_alt1(a5, v10 + 5592);
      return;
    }
  }
  {
    result;
    return;
  }
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

__attribute__((swiftcall)) void Manager_11ec80(PSEUDO_X8 x8_, __int64 a1,
                                               int* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  int v3;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 (*v11)(__int64*, __int64*);
  __int64 v12;
  __int64 v14;

  v3 = *a2;
  v6 = GameRoutine_651190(16);
  *(_DWORD*)(v6 + 8) = v3;
  v7 = (__int64*)v6;
  *(_QWORD*)v6 = GameData_1f56f50;
  v8 = **(_QWORD**)(a1 + 40);
  while (1) {
    v9 = *v7;
    v10 = v8;
    if (v8 == 0) {
      break;
    }
    v11 = *(__int64 (**)(__int64*, __int64*))(v9 + 48);
    v8 = *(_QWORD*)(v8 + 5616);
    v14 = v10;
    if ((v11(v7, &v14) & 1) != 0) {
      v9 = *v7;
      break;
    }
  }
  (*(void (**)(__int64*))(v9 + 40))(v7);
  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  if (v10 != 0) {
    v12 = v10 + 5592;
  }
  else {
    v12 = 0;
  }
  {
    snd_fnd_WeakHandle_set(a3, v12);
    return;
  }
}

__attribute__((swiftcall)) void

snd_Manager_getVoiceNoActorCheck(PSEUDO_X8 x8_, __int64 a1, __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v16[4];
  _QWORD* v17;
  __int64 v18;
  __int64 v19;

  nn_os_LockMutex(GameData_2134648[0]);
  v8 = v16;
  v18 = 0;
  v16[0] = GameData_1f56cd0;
  v16[1] = a2;
  v17 = v16;
  v16[2] = &v18;
  v9 = **(_QWORD**)(a1 + 40);
  do {
    if (v9 == 0) {
      break;
    }
    v10 = *(_QWORD*)(v9 + 5616);
    v19 = v9;
    if (v8 == nullptr) {
      GameRoutine_60a310_alt1(0, v6, v7);
    }
    v11 = (*(__int64 (**)(_QWORD*, __int64*))(*v8 + 48LL))(v8, &v19);
    v8 = v17;
    v9 = v10;
  } while ((v11 & 1) == 0);
  if (v8 == v16) {
    v12 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_10;
    }
    v12 = 40;
  }
  (*(void (**)(_QWORD*, __int64, __int64))(*v8 + v12))(v8, v6, v7);
LABEL_10:
  v13 = v18;
  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  if (v13 != 0) {
    v14 = v13 + 5592;
  }
  else {
    v14 = 0;
  }
  snd_fnd_WeakHandle_set_alt1(a3, v14);
  {
    nn_os_UnlockMutex_alt1(&GameData_2198f28);
    return;
  }
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

__attribute__((swiftcall)) void Manager_11f360(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 unused_int1,
                                               __int64 unused_int2,
                                               __int64 unused_int3,
                                               unsigned int a2, unsigned int a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v8;
  __int64* v9;

  v8 = snd_s_target_ptr;
  v9 = (__int64*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr + 608LL))(
      *snd_s_target_ptr);
  (*(void (**)(__int64, _QWORD, __int64*, _QWORD))(*(_QWORD*)*v8 + 1032LL))(
      *v8, a2, v9, a3);
  (*(void (**)(__int64*, _QWORD, _QWORD))(*v9 + 96))(v9, a2, a3);
  Crc32List_11f420(a1, v9);
  *(_QWORD*)a4 = 0;
  *(_DWORD*)(a4 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a4, (__int64)(v9 + 699));
    return;
  }
}

__attribute__((swiftcall)) void

Manager_11f980(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3, __int64 a4,
               unsigned int a5, unsigned int a6, unsigned int a7, char a8)
{
  __int64 a9 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v14;
  __int64* v15;

  v14 = snd_s_target_ptr;
  v15 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)*snd_s_target_ptr + 624LL))(*snd_s_target_ptr, a2, a3, a4, a7);
  (*(void (**)(__int64*, _QWORD, _QWORD))(*v15 + 96))(v15, a5, a6);
  if ((a8 & 1) == 0) {
    (*(void (**)(__int64, _QWORD, __int64*, _QWORD))(*(_QWORD*)*v14 + 1032LL))(
        *v14, a5, v15, a6);
    Crc32List_11f420(a1, v15);
  }
  *(_QWORD*)a9 = 0;
  *(_DWORD*)(a9 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a9, (__int64)(v15 + 699));
    return;
  }
}

__attribute__((swiftcall)) void Manager_11fa50(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 unused_int1,
                                               __int64 unused_int2,
                                               __int64 unused_int3,
                                               unsigned int a2, unsigned int a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v8;
  __int64* v9;

  v8 = snd_s_target_ptr;
  v9 = (__int64*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr + 640LL))(
      *snd_s_target_ptr);
  (*(void (**)(__int64, _QWORD, __int64*, _QWORD))(*(_QWORD*)*v8 + 1032LL))(
      *v8, a2, v9, a3);
  (*(void (**)(__int64*, _QWORD, _QWORD))(*v9 + 96))(v9, a2, a3);
  Crc32List_11f420(a1, v9);
  *(_QWORD*)a4 = 0;
  *(_DWORD*)(a4 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a4, (__int64)(v9 + 699));
    return;
  }
}

__attribute__((swiftcall)) void

Manager_11fb10(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3, __int64 a4,
               unsigned int a5, unsigned int a6, unsigned int a7, char a8)
{
  __int64 a9 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v14;
  __int64* v15;

  v14 = snd_s_target_ptr;
  v15 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)*snd_s_target_ptr + 656LL))(*snd_s_target_ptr, a2, a3, a4, a7);
  (*(void (**)(__int64*, _QWORD, _QWORD))(*v15 + 96))(v15, a5, a6);
  if ((a8 & 1) == 0) {
    (*(void (**)(__int64, _QWORD, __int64*, _QWORD))(*(_QWORD*)*v14 + 1032LL))(
        *v14, a5, v15, a6);
    Crc32List_11f420(a1, v15);
  }
  *(_QWORD*)a9 = 0;
  *(_DWORD*)(a9 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a9, (__int64)(v15 + 699));
    return;
  }
}

__attribute__((swiftcall)) void Manager_11fbe0(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 unused_int1,
                                               __int64 unused_int2,
                                               __int64 unused_int3,
                                               unsigned int a2, unsigned int a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v8;
  __int64* v9;

  v8 = snd_s_target_ptr;
  v9 = (__int64*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr + 672LL))(
      *snd_s_target_ptr);
  (*(void (**)(__int64, _QWORD, __int64*, _QWORD))(*(_QWORD*)*v8 + 1032LL))(
      *v8, a2, v9, a3);
  (*(void (**)(__int64*, _QWORD, _QWORD))(*v9 + 96))(v9, a2, a3);
  Crc32List_11f420(a1, v9);
  *(_QWORD*)a4 = 0;
  *(_DWORD*)(a4 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a4, (__int64)(v9 + 699));
    return;
  }
}

__attribute__((swiftcall)) void

Manager_11fca0(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3, __int64 a4,
               unsigned int a5, unsigned int a6, unsigned int a7, char a8)
{
  __int64 a9 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v14;
  __int64* v15;

  v14 = snd_s_target_ptr;
  v15 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)*snd_s_target_ptr + 688LL))(*snd_s_target_ptr, a2, a3, a4, a7);
  (*(void (**)(__int64*, _QWORD, _QWORD))(*v15 + 96))(v15, a5, a6);
  if ((a8 & 1) == 0) {
    (*(void (**)(__int64, _QWORD, __int64*, _QWORD))(*(_QWORD*)*v14 + 1032LL))(
        *v14, a5, v15, a6);
    Crc32List_11f420(a1, v15);
  }
  *(_QWORD*)a9 = 0;
  *(_DWORD*)(a9 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a9, (__int64)(v15 + 699));
    return;
  }
}

__attribute__((swiftcall)) void Manager_11fd70(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 unused_int1,
                                               __int64 unused_int2,
                                               __int64 unused_int3,
                                               unsigned int a2, unsigned int a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v8;
  __int64* v9;

  v8 = snd_s_target_ptr;
  v9 = (__int64*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr + 704LL))(
      *snd_s_target_ptr);
  (*(void (**)(__int64, _QWORD, __int64*, _QWORD))(*(_QWORD*)*v8 + 1032LL))(
      *v8, a2, v9, a3);
  (*(void (**)(__int64*, _QWORD, _QWORD))(*v9 + 96))(v9, a2, a3);
  Crc32List_11f420(a1, v9);
  *(_QWORD*)a4 = 0;
  *(_DWORD*)(a4 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a4, (__int64)(v9 + 699));
    return;
  }
}

__attribute__((swiftcall)) void

Manager_11fe30(PSEUDO_X8 x8_, __int64 a1, __int64 a2, __int64 a3, __int64 a4,
               unsigned int a5, unsigned int a6, unsigned int a7, char a8)
{
  __int64 a9 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v14;
  __int64* v15;

  v14 = snd_s_target_ptr;
  v15 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64, __int64, _QWORD))(
      *(_QWORD*)*snd_s_target_ptr + 720LL))(*snd_s_target_ptr, a2, a3, a4, a7);
  (*(void (**)(__int64*, _QWORD, _QWORD))(*v15 + 96))(v15, a5, a6);
  if ((a8 & 1) == 0) {
    (*(void (**)(__int64, _QWORD, __int64*, _QWORD))(*(_QWORD*)*v14 + 1032LL))(
        *v14, a5, v15, a6);
    Crc32List_11f420(a1, v15);
  }
  *(_QWORD*)a9 = 0;
  *(_DWORD*)(a9 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a9, (__int64)(v15 + 699));
    return;
  }
}

__attribute__((swiftcall)) void Manager_11ff00(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 unused_int1,
                                               __int64 unused_int2,
                                               __int64 unused_int3,
                                               unsigned int a2, unsigned int a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v8;
  __int64* v9;

  v8 = snd_s_target_ptr;
  v9 = (__int64*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr + 736LL))(
      *snd_s_target_ptr);
  (*(void (**)(__int64, _QWORD, __int64*, _QWORD))(*(_QWORD*)*v8 + 1032LL))(
      *v8, a2, v9, a3);
  (*(void (**)(__int64*, _QWORD, _QWORD))(*v9 + 96))(v9, a2, a3);
  Crc32List_11f420(a1, v9);
  *(_QWORD*)a4 = 0;
  *(_DWORD*)(a4 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a4, (__int64)(v9 + 699));
    return;
  }
}

__attribute__((swiftcall)) void Manager_11ffc0(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2, __int64 a3,
                                               unsigned int a4, unsigned int a5,
                                               unsigned int a6, char a7)
{
  __int64 a8 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v13;
  __int64* v14;

  v13 = snd_s_target_ptr;
  v14 = (__int64*)(*(__int64 (**)(_QWORD, __int64, __int64, _QWORD))(
      *(_QWORD*)*snd_s_target_ptr + 904LL))(*snd_s_target_ptr, a2, a3, a6);
  (*(void (**)(__int64*, _QWORD, _QWORD))(*v14 + 96))(v14, a4, a5);
  if ((a7 & 1) == 0) {
    (*(void (**)(__int64, _QWORD, __int64*, _QWORD))(*(_QWORD*)*v13 + 1032LL))(
        *v13, a4, v14, a5);
    Crc32List_11f420(a1, v14);
  }
  *(_QWORD*)a8 = 0;
  *(_DWORD*)(a8 + 8) = 0x2000;
  {
    snd_fnd_WeakHandle_set(a8, (__int64)(v14 + 699));
    return;
  }
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

__attribute__((swiftcall)) void Manager_120380(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  __int64 v5;
  __int64 v6;

  v4 = snd_s_target_ptr;
  v5 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr + 984LL))(
      *snd_s_target_ptr);
  (*(void (**)(__int64, __int64))(*(_QWORD*)*v4 + 1080LL))(*v4, v5);
  *(_QWORD*)(*(_QWORD*)(a1 + 2112) + v5) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 2112) + v5 + 8) = 0;
  if (**(_QWORD**)(a1 + 2128) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 2112) + *(_QWORD*)(a1 + 2104) + 8LL) = v5;
    *(_QWORD*)(*(_QWORD*)(a1 + 2112) + v5) = **(_QWORD**)(a1 + 2128);
  }
  else {
    *(_QWORD*)(a1 + 2096) = v5;
  }
  *(_QWORD*)(a1 + 2104) = v5;
  *(_QWORD*)a2 = 0;
  *(_DWORD*)(a2 + 8) = 0x2000;
  if (v5 != 0) {
    v6 = v5 + 5592;
  }
  else {
    v6 = 0;
  }
  {
    snd_fnd_WeakHandle_set(a2, v6);
    return;
  }
}

__attribute__((swiftcall)) void Manager_120450(PSEUDO_X8 x8_, __int64 a1,
                                               __int64 a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;

  (*(void (**)(_QWORD))(*(_QWORD*)*snd_s_target_ptr + 1080LL))(
      *snd_s_target_ptr);
  *(_QWORD*)(*(_QWORD*)(a1 + 2112) + a2) = 0;
  *(_QWORD*)(*(_QWORD*)(a1 + 2112) + a2 + 8) = 0;
  if (**(_QWORD**)(a1 + 2128) != 0) {
    *(_QWORD*)(*(_QWORD*)(a1 + 2112) + *(_QWORD*)(a1 + 2104) + 8LL) = a2;
    *(_QWORD*)(*(_QWORD*)(a1 + 2112) + a2) = **(_QWORD**)(a1 + 2128);
  }
  else {
    *(_QWORD*)(a1 + 2096) = a2;
  }
  *(_QWORD*)(a1 + 2104) = a2;
  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  if (a2 != 0) {
    v6 = a2 + 5592;
  }
  else {
    v6 = 0;
  }
  {
    snd_fnd_WeakHandle_set(a3, v6);
    return;
  }
}

__attribute__((swiftcall)) void Manager_120710(PSEUDO_X8 x8_, _QWORD* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int16* v4;
  __int64 v5;
  __int64 v6;

  v4 = GameData_2134658[0];
  nn_os_LockMutex(GameData_2134658[0]);
  v5 = a1[399];
  v6 = a1[397];
  a2[2] = a1[398];
  a2[3] = v5;
  a2[4] = a1[400];
  *a2 = a1[396];
  a2[1] = v6;
  {
    nn_os_UnlockMutex_alt1(v4);
    return;
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

__int64 Manager_125eb0()
{
  __int64* v0;
  __int64* v1;
  __int64* v2;
  __int64* v3;
  __int16* v4;
  __int16* v5;
  __int16* v6;

  *snd_s_target_ptr = 0;
  v0 = GameData_2134208[0];
  v1 = GameData_2134570[0] + 2;
  v2 = GameData_2134578[0] + 2;
  v3 = GameData_2134208[0];
  *(_WORD*)((char*)GameData_2134208[0] + (unsigned __int64)((char*)0x20LL)) = 0;
  *(_QWORD*)((char*)((int*)0x24LL) + (_QWORD)v0) = 0;
  *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v0) = 0;
  *(_DWORD*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v0) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0 + 8) = 0;
  *v0 = (__int64)v1;
  v0[1] = (__int64)v2;
  nn_os_InitializeMutex((char*)((char*)0x20LL) + (_QWORD)v3, 1, 0);
  *((_BYTE*)((char*)0x40LL) + (_QWORD)v0) = 0;
  GameRoutine_2b0();
  v4 = GameData_2134648[0];
  *GameData_2134648[0] = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)v4) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v4 + 8) = 0;
  nn_os_InitializeMutex(v4, 1, 0);
  GameRoutine_2b0();
  v5 = GameData_2134650[0];
  *GameData_2134650[0] = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)v5) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v5 + 8) = 0;
  nn_os_InitializeMutex(v5, 1, 0);
  GameRoutine_2b0();
  v6 = GameData_2134658[0];
  *GameData_2134658[0] = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)v6) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8) = 0;
  nn_os_InitializeMutex(v6, 1, 0);
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
