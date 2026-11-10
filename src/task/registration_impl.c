#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__attribute__((swiftcall)) void GameRoutine_629620(PSEUDO_X8, _QWORD, _QWORD);
__int64 BuildThread_Unknown2(_QWORD);
__int64 GameRoutine_1000();
__int64 GameRoutine_18df280(_QWORD, _QWORD);
__int64 GameRoutine_1990c40(_QWORD);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_55d690(__int64 result, __int64, __int16, __int16, __int16,
                           __int16, char);
__int64 GameRoutine_55d6c0(__int64 result);
__int64 GameRoutine_565ba0(void);
__int64 GameRoutine_59d3b0(_QWORD);
__int64 GameRoutine_5fe2f0(_QWORD);
__int64 GameRoutine_5fe3f0(_QWORD);
__int64 GameRoutine_5fe410(_QWORD);
__int64 GameRoutine_606890(_QWORD);
__int64 GameRoutine_607d20(__int64);
__int64 GameRoutine_607f20(__int64 result);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_626d20(_QWORD);
__int64 GameRoutine_627e70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6478c0(__int64);
__int64 GameRoutine_64ac70(_QWORD, _QWORD);
__int64 GameRoutine_64adb0(_QWORD, _QWORD);
__int64 GameRoutine_64aef0(_QWORD, _QWORD);
__int64 GameRoutine_64d860(_QWORD, _QWORD);
__int64 GameRoutine_9b1ea0(_QWORD);
__int64 GameRoutine_a4a400(__int64, unsigned __int8*);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a542c0(_QWORD, _QWORD);
__int64 GameRoutine_a6f7c0(void);
__int64 GameRoutine_a939e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a93ea0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 NodeThread_Unknown2(__int64);
__int64 Registration_17d5300(_QWORD);
__int64 Registration_17d87e0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Registration_18d7720(_QWORD, _QWORD, _QWORD);
__int64 Registration_564480(_QWORD);
__int64 Registration_565740(_QWORD);
__int64 Registration_606350(_QWORD);
__int64 Registration_6064e0(_QWORD);
__int64 Registration_617090(_QWORD, _QWORD);
__int64 Registration_617680(_QWORD, _QWORD);
__int64 Registration_627640(_QWORD, _QWORD);
__int64 Registration_64a6c0(_QWORD);
__int64 Registration_655e00(_QWORD);
__int64 Registration_a498e0(_QWORD, _QWORD);
__int64 Registration_a50100(_QWORD, _QWORD, _QWORD);
__int64 ScalableFont_563780(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 ScalableFont_563820(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_InitializeWorker(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_AcquireGlyphmap(_QWORD, _QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_CheckGlyphExist(_QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_GetAdvance(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_GetError(_QWORD);
__int64 nn_fontll_ScalableFontEngine_ReleasesGlyph(_QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_SetBoldWeight(_QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_SetFlags(_QWORD);
__int64 nn_fontll_ScalableFontEngine_SetFont(_QWORD, _QWORD);
__int64 nn_fontll_ScalableFontEngine_SetOutlineWidth(_QWORD);
__int64 nn_fontll_ScalableFontEngine_SetScale(_QWORD, _QWORD, _QWORD, _QWORD,
                                              _QWORD);
__int64 nn_hid_ControllerSupportArg_SetDefault(_QWORD);
__int64 nn_hid_GetNpadState_1a0a360(_QWORD, _QWORD);
__int64 nn_hid_GetNpadState_1a0a370(_QWORD, _QWORD);
__int64 nn_hid_GetNpadState_1a0a380(_QWORD, _QWORD);
__int64 nn_hid_GetNpadStyleSet(_QWORD);
__int64 nn_hid_GetSixAxisSensorHandles(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_hid_GetSixAxisSensorStates(_QWORD, _QWORD, _QWORD);
__int64 nn_hid_GetVibrationDeviceHandles(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_hid_GetVibrationDeviceInfo(_QWORD, _QWORD);
__int64 nn_hid_InitializeNmouse(_QWORD);
__int64 nn_hid_InitializeNpad(_QWORD);
__int64 nn_hid_InitializeVibrationDevice(_QWORD);
__int64 nn_hid_SetGyroscopeZeroDriftMode(_QWORD, _QWORD);
__int64 nn_hid_SetNmouseButtonConfigJoyLeftJcms(_QWORD);
__int64 nn_hid_SetNmouseButtonConfigJoyRightJcms(_QWORD);
__int64 nn_hid_SetNpadJoyHoldType(_QWORD);
__int64 nn_hid_SetSupportedNpadIdType(_QWORD, _QWORD);
__int64 nn_hid_SetSupportedNpadStyleSet(_QWORD);
__int64 nn_hid_ShowControllerSupport(_QWORD);
__int64 nn_hid_StartSixAxisSensor(_QWORD);
__int64 nn_hid_StopSixAxisSensor(_QWORD);
__int64 nn_hid_VibrationMixer_Destroy_VibrationMixer(_QWORD);
__int64 nn_hid_VibrationMixer_VibrationMixer(_QWORD);
__int64 nn_hid_VibrationNodeConnection_Connect(_QWORD, _QWORD, _QWORD);
__int64 nn_hid_VibrationNodeConnection_Destroy_VibrationNodeConnection(_QWORD);
__int64 nn_hid_VibrationNodeConnection_Disconnect(_QWORD);
__int64 nn_hid_VibrationNodeConnection_VibrationNodeConnection(_QWORD);
__int64 nn_hid_VibrationPlayer_Destroy_VibrationPlayer(_QWORD);
__int64 nn_hid_VibrationTarget_Destroy_VibrationTarget(_QWORD);
__int64 nn_hid_VibrationTarget_SetVibrationDeviceHandle(_QWORD, _QWORD);
__int64 nn_hid_VibrationTarget_VibrationTarget(_QWORD);
__int64 nn_hid_VibrationWriter_Destroy_VibrationWriter(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_oe_GetOperationMode(void);
__int64 nn_os_AcquireWriteLock(_QWORD);
__int64 nn_os_BroadcastConditionVariable(_QWORD);
__int64 nn_os_FinalizeConditionVariable(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_InitializeMutex(_QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeReaderWriterLock(_QWORD);
__int64 nn_os_InitializeTimerEvent(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_ReleaseWriteLock(_QWORD);
__int64 nn_os_SignalTimerEvent(_QWORD);
__int64 nn_os_StartOneShotTimerEvent(_QWORD, _QWORD);
__int64 nn_os_StartPeriodicTimerEvent(_QWORD, _QWORD, _QWORD);
__int64 nn_os_StartThread(_QWORD);
__int64 nn_os_StopTimerEvent(_QWORD);
__int64 nn_os_SwitchToFiber(_QWORD);
__int64 nn_os_TimedWaitConditionVariable(_QWORD, _QWORD, _QWORD);
__int64 nn_os_TryWaitTimerEvent(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 nn_vi_QueryDisplayBufferMaxResolution(_QWORD);
__int64 snprintf(_QWORD, _QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 strlen(_QWORD);
__int64 tolower(_QWORD);
__int64 toupper(_QWORD);
extern _DWORD GameData_1a82c20[4];
extern _DWORD GameData_1a82e90[4];
extern _DWORD GameData_1b36664[7];
extern _DWORD GameData_1b36680[5];
extern _DWORD GameData_1b36694[7];
extern _UNKNOWN GameData_1b33414;
extern _UNKNOWN GameData_1b366c0;
extern _UNKNOWN GameData_1b5c768;
extern _UNKNOWN GameData_1b5c7c8;
extern _UNKNOWN GameData_1c22b58;
extern _UNKNOWN GameData_1c22b60;
extern _UNKNOWN GameData_2166748;
extern _UNKNOWN GameData_22030f0;
extern _UNKNOWN as_g_context_slots;
extern _UNKNOWN* GameData_1f50948;
extern _UNKNOWN* GameData_212c148;
extern _UNKNOWN* as_g_context_slots_ptr;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN** GameData_212c428[9];
extern __int64 (*GameData_1f8e518[])();
extern __int64 (*GameData_1f8e598[])();
extern __int64 (*GameData_1f8e5c8[])();
extern __int64 (*GameData_1f8e5f8[])();
extern __int64 (*GameData_1f8e628[])();
extern __int64 (*GameData_1f8ef70[])();
extern __int64 (*GameData_212c138)(_QWORD);
extern __int64 (*GameData_212e730)();
extern __int64 (*hid_JoyPad_vtable)();
extern __int64 (*hid_Vibration_NodeThread_vtable[])();
extern __int64 (*nn_font_PairFont_vtable[])();
extern __int64 (*realloc_ptr)();
extern __int64 (*scene_Manager_vtable[])();
extern __int64 GameData_212e310[3];
extern __int64 GameData_212e318[2];
extern __int64 GameData_212e320;
extern __int64 GameData_2131de0[6];
extern __int64 GameData_2131e00[2];
extern __int64 GameData_21a5520;
extern __int64 GameData_21c65e0;
extern __int64 GameData_21c65e8;
extern __int64 GameData_21c65f0;
extern __int64 GameData_21c6628;
extern __int64 GameData_21c6630;
extern __int64 GameData_21c6638;
extern __int64 GameData_21c6670;
extern __int64 GameData_21c6678;
extern __int64 GameData_21c6680;
extern __int64 GameData_21c66b8;
extern __int64 GameData_21c66c0;
extern __int64 GameData_21c66c8;
extern __int64 GameData_21c6700;
extern __int64 GameData_21c6708;
extern __int64 GameData_21c6710;
extern __int64 GameData_21c6748;
extern __int64 GameData_21c6750;
extern __int64 GameData_21c6758;
extern __int64 GameData_21ca020;
extern __int64 GameData_2203088;
extern __int64 GameData_22030a0;
extern __int64 GameData_22030a8;
extern __int64 GameData_22030b8;
extern __int64 GameData_22030c0;
extern __int64 GameData_22030d0;
extern __int64 GameData_22030d8;
extern __int64 GameData_2265a98;
extern __int64 as_g_base_frame_counter;
extern __int64 as_g_engine;
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
extern __int64 snd_g_fileIndex;
extern __int64* GameData_212e348;
extern __int64* GameData_2132418;
extern __int64* GameData_2135fb8[3];
extern __int64* GameData_2135fc8;
extern __int64* GameData_2136008[2];
extern __int64* GameData_2136010;
extern char GameData_21a60b8;
extern char GameData_21c6618;
extern char GameData_21c6660;
extern char GameData_21c66a8;
extern char GameData_21c66f0;
extern char GameData_21c6738;
extern char GameData_21c6780;
extern char GameData_226b000;
extern char GameData_226b001;
extern char* msg_MessageManager_empty_text_;
extern char** msg_MessageManager_empty_text__ptr;
extern int GameData_1bb32c8;
extern int GameData_1bb32d0;
extern int GameData_1bb32d8;
extern int GameData_1bb32e0;
extern int GameData_1bb32e8;
extern int GameData_1bb32f0;
extern int GameData_1bb32f8;
extern int GameData_1bb3300;
extern int GameData_1bb3308;
extern int GameData_1bb3310;
extern int GameData_1bb3318;
extern int GameData_1bb3320;
extern int GameData_1bb3328;
extern int GameData_1bb3330;
extern int GameData_1bb3338;
extern int GameData_1bb3340;
extern int GameData_1bb3348;
extern int GameData_1bb3350;
extern int GameData_1bb3358;
extern int GameData_1bb3360;
extern int GameData_1bb3368;
extern int GameData_1bb3370;
extern int GameData_1bb3378;
extern int GameData_1bb3380;
extern int GameData_21a60a8;
extern int GameData_21a60ac;
extern int GameData_22030f8;
extern int GameData_22030fc;
extern int GameData_2266110;
struct PseudoSret GameRoutine_53c20(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 Registration_55dd00(__int64 a1);
__int64 Registration_55fd60(__int64 result, int a2, __int64 a3, __int64 a4);
__int64 Registration_560310(__int64 result);
__int64 Registration_560330(__int64 a1);
__int64 Registration_5617c0(__int64 result);
__int64 Registration_561b60(__int64 a1);
__int64 Registration_5633f0(__int64 result, unsigned int a2);
__int64 Registration_563490(__int64 a1, __int64 (*a2)(__int64, __int64));
__int64 Registration_563900(__int64 result);
__int64* Registration_5642e0(__int64 a1, unsigned __int8 a2,
                             unsigned __int16 a3);
__int64 Registration_5656b0(unsigned __int16 a1);
__int64 Registration_565b40(__int64* a1);
__int64 Registration_616da0(__int64 a1);
__int64 Registration_617280(_QWORD* a1);
__int64 Registration_617aa0(__int64 a1);
__int64* Registration_617c90(__int64* result);
__int64 Registration_617d10();
__int64 Registration_617e00();
__int64 Registration_6260e0(__int64 result);
__int64 Registration_6263d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6);
_QWORD* Registration_626c40(__int64 a1);
__int64 Registration_6272c0(__int64 result);
__int64 Registration_629e60(__int64 result);
__int64 Registration_645d30(__int64 a1, __int64* a2);
__int64 Registration_646270(_QWORD* a1);
__int64 Registration_6484a0(_QWORD* a1);
__int64 Registration_649250(__int64 a1);
__int64 Registration_649700(__int64 result, __int64* a2);
__int64 Registration_649a00(__int64 result, __int64* a2);
_DWORD* Registration_649ee0(_DWORD* result);
__int64 Registration_64f200(__int64 a1);
__int64 Registration_64f380(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6);
__int64 Registration_64f840(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6);
__int64 Registration_64fb00(__int64 a1);
__int64 Registration_650100(__int64 a1, __int64 a2, __int64 a3);
_BYTE* Registration_652270(__int64 a1, __int64 a2);
__int64 Registration_655300();
__int64 Registration_a47f20(__int64 result, __int64 a2);
__int64 Registration_a480d0(__int64 result, __int64 a2);
__int64 Registration_a48280(__int64 result, __int64 a2);
__int64 Registration_a483a0(__int64* a1, __int64 a2, __int64 a3, _QWORD* a4);
__int64 Registration_a4ac60(__int64 a1, unsigned __int8* a2);
__int64 Registration_a4d510(__int64 a1, __int64 a2);
__int64 Registration_a4d720(__int64 a1, __int64 a2);
__int64 Registration_a4da40(__int64 a1, __int64 a2);
__int64 Registration_a4db40(__int64 a1, __int64 a2);
void* Registration_a4f6c0(__int64 a1, __int64 a2);
void* Registration_a4f800(__int64 a1, __int64 a2, int a3);
__int64 Registration_a4fa80(__int64 a1, __int64 a2, unsigned __int8* a3);
__int64 Registration_a51f10(__int64 a1, unsigned int a2, char* a3);
__int64 Registration_a51f40(__int64 a1);
unsigned __int64 Registration_a51fe0(_QWORD* a1, __int64 a2);
__int64 Registration_a520f0(__int64 a1, char** a2);
__int64 Registration_17d4c60(__int64 a1);
__int64 Registration_17d4e60(__int64 a1, __int64 a2);
__int64 Registration_17d5020(__int64 a1, _QWORD* a2);
__int64 Registration_17d5100(__int64 a1, _QWORD* a2, __int64 a3);
__int64 Registration_17d5210(__int64 a1, _QWORD* a2);
__int64 Registration_17d65c0(__int64 a1, _QWORD* a2);
__int64 Registration_17d67c0(__int64 a1, _QWORD* a2);
__int64 Registration_17d6820(__int64 result);
__int64 Registration_17d8860(__int64 result, char a2);
__int64* Registration_17db960(__int64* result);
__int64 Registration_17e4140();

__int64 Registration_55dd00(__int64 a1)
{
  __int64 result;

  result = GameRoutine_55d6c0(a1);
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = nn_font_PairFont_vtable;
  *(_BYTE*)(a1 + 32) = 1;
  return result;
}

__int64 Registration_55fd60(__int64 result, int a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  _DWORD* v7;
  _DWORD* v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  int* v13;
  int* v14;
  _DWORD* v15;
  int v16;
  int v17;

  *(_DWORD*)(result + 128) = a2;
  if (a2 >= 1) {
    v4 = a2 & 7;
    if ((unsigned int)a2 < 8) {
      v5 = 0;
      if ((a2 & 7) == 0) {
        return result;
      }
      goto LABEL_8;
    }
    v6 = (_DWORD*)(a4 + 16);
    v7 = (_DWORD*)(result + 224);
    v8 = (_DWORD*)(a3 + 16);
    v9 = 0;
    do {
      v9 -= 8;
      *(v7 - 23) = *(v8 - 4);
      *(v7 - 7) = *(v6 - 4);
      *(v7 - 22) = *(v8 - 3);
      *(v7 - 6) = *(v6 - 3);
      *(v7 - 21) = *(v8 - 2);
      *(v7 - 5) = *(v6 - 2);
      *(v7 - 20) = *(v8 - 1);
      *(v7 - 4) = *(v6 - 1);
      *(v7 - 19) = *v8;
      *(v7 - 3) = *v6;
      *(v7 - 18) = v8[1];
      *(v7 - 2) = v6[1];
      *(v7 - 17) = v8[2];
      *(v7 - 1) = v6[2];
      v10 = v8[3];
      v8 += 8;
      *(v7 - 16) = v10;
      v11 = v6[3];
      v6 += 8;
      *v7 = v11;
      v7 += 8;
    } while (-(__int64)(a2 & 0x7FFFFFF8) != v9);
    v5 = -v9;
    if ((a2 & 7) != 0) {
    LABEL_8:
      v12 = result + 4 * v5;
      v13 = (int*)(a4 + 4 * v5);
      v14 = (int*)(a3 + 4 * v5);
      v15 = (_DWORD*)(v12 + 196);
      do {
        v16 = *v14++;
        --v4;
        *(v15 - 16) = v16;
        v17 = *v13++;
        *v15++ = v17;
      } while (v4 != 0);
    }
  }
  return result;
}

__int64 Registration_560310(__int64 result)
{
  *(_BYTE*)(result + 24) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 40;
  *(_QWORD*)(result + 16) = 63;
  return result;
}

__int64 Registration_560330(__int64 a1)
{
  __int64 result;
  __int64* v3;

  result = GameRoutine_55d6c0(a1);
  v3 = GameData_2135fc8;
  *(_BYTE*)(a1 + 48) = 0;
  *(_WORD*)(a1 + 50) = 0;
  *(_QWORD*)a1 = v3 + 2;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0x3200000028LL;
  *(_QWORD*)(a1 + 32) = 0x2800000028LL;
  *(_QWORD*)(a1 + 40) = 0x228280000000032LL;
  *(_DWORD*)(a1 + 52) = 63;
  return result;
}

__int64 Registration_5617c0(__int64 result)
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
  _DWORD* v34;
  _WORD* v35;
  _DWORD* v36;
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
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;

  v1 = 27220;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0x40000000400LL;
  *(_QWORD*)(result + 8) = 0;
  v5 = 59928;
  v6 = 27216;
  v7 = 27160;
  v8 = 27212;
  v9 = 23214;
  v10 = 27208;
  v11 = 25112;
  v12 = 27204;
  v13 = 21016;
  v14 = 27200;
  v15 = 27196;
  v16 = 18968;
  v17 = 27192;
  v18 = 17944;
  v19 = 27188;
  v20 = 17432;
  v21 = 27184;
  v22 = 16920;
  v23 = 27180;
  v24 = 27176;
  v25 = 27172;
  v26 = 27168;
  v27 = 10264;
  v28 = 27164;
  do {
    v62 = v4;
    v63 = v3;
    v61 = v1;
    v29 = v1;
    v30 = 16;
    v31 = v2;
    v64 = v2;
    v32 = v11;
    v37 = v28;
    v38 = v27;
    v39 = v26;
    v40 = v25;
    v41 = v24;
    v42 = v23;
    v43 = v22;
    v44 = v21;
    v45 = v20;
    v46 = v19;
    v47 = v18;
    v48 = v17;
    v49 = v16;
    v50 = v15;
    v51 = v14;
    v52 = v13;
    v53 = v12;
    v54 = v11;
    v55 = v10;
    v56 = v9;
    v57 = v8;
    v58 = v7;
    v59 = v6;
    v60 = v5;
    do {
      v65 = v30;
      v33 = result + v31;
      v34 = (_DWORD*)(result + v3);
      v3 += 4;
      v31 += 8;
      *(_QWORD*)(v33 + 24) = 0;
      *(_QWORD*)(v33 + 4120) = 0;
      v34[2054] = 0;
      *(_BYTE*)(result + v27++) = 0;
      v34[3718] = 0;
      v34[2694] = 1065353216;
      v34[3206] = 1065353216;
      v35 = (_WORD*)(result + v18);
      v18 += 2;
      *(_BYTE*)(result + v22++) = 0;
      *(_BYTE*)(result + v20++) = 0;
      *v35 = 0;
      *(_BYTE*)(result + v16++) = 0;
      *(_BYTE*)(result + v9 - 3734) = 0;
      v30 = v65 - 1;
      v35[1024] = 0;
      *(_DWORD*)(result + v13) = 0;
      v35[2560] = 0;
      v35[3072] = 0;
      v36 = (_DWORD*)(result + v5);
      *(_DWORD*)(result + v32) = 0;
      v5 += 64;
      v32 += 4;
      v13 += 4;
      *(_DWORD*)(result + v7) = 0;
      v7 += 64;
      *v36 = 0;
      *(_DWORD*)(result + v28) = 0;
      v28 += 64;
      v36[1] = 0;
      *(_DWORD*)(result + v26) = 0;
      v26 += 64;
      v36[2] = 0;
      *(_DWORD*)(result + v25) = 0;
      v25 += 64;
      v36[3] = 0;
      *(_DWORD*)(result + v24) = 0;
      v24 += 64;
      v36[4] = 0;
      *(_DWORD*)(result + v23) = 0;
      v23 += 64;
      v36[5] = 0;
      *(_DWORD*)(result + v21) = 0;
      v21 += 64;
      v36[6] = 0;
      *(_DWORD*)(result + v19) = 0;
      v19 += 64;
      v36[7] = 0;
      *(_DWORD*)(result + v17) = 0;
      v17 += 64;
      v36[8] = 0;
      *(_DWORD*)(result + v15) = 0;
      v15 += 64;
      v36[9] = 0;
      *(_DWORD*)(result + v14) = 0;
      v14 += 64;
      v36[10] = 0;
      *(_DWORD*)(result + v12) = 0;
      v12 += 64;
      v36[11] = 0;
      *(_DWORD*)(result + v10) = 0;
      v10 += 64;
      v36[12] = 0;
      *(_DWORD*)(result + v8) = 0;
      v8 += 64;
      v36[13] = 0;
      *(_DWORD*)(result + v6) = 0;
      v6 += 64;
      v36[14] = 0;
      *(_DWORD*)(result + v29) = 0;
      v29 += 64;
      v36[15] = 0;
      *(_DWORD*)(result + 4 * v9++) = 0;
    } while (v65 != 1);
    v1 = v61 + 1024;
    *(_DWORD*)(result + 92700 + 4 * v62) = 1;
    v4 = v62 + 1;
    v5 = v60 + 1024;
    v6 = v59 + 1024;
    v7 = v58 + 1024;
    v8 = v57 + 1024;
    v9 = v56 + 16;
    v10 = v55 + 1024;
    v13 = v52 + 64;
    v14 = v51 + 1024;
    v15 = v50 + 1024;
    v16 = v49 + 16;
    v11 = v54 + 64;
    v12 = v53 + 1024;
    v17 = v48 + 1024;
    v18 = v47 + 32;
    v19 = v46 + 1024;
    v20 = v45 + 16;
    v21 = v44 + 1024;
    v22 = v43 + 16;
    v23 = v42 + 1024;
    v3 = v63 + 64;
    v24 = v41 + 1024;
    v25 = v40 + 1024;
    v26 = v39 + 1024;
    v2 = v64 + 128;
    v27 = v38 + 16;
    v28 = v37 + 1024;
  } while (v62 != 31);
  *(_QWORD*)(result + 92832) = 0x80000;
  *(_QWORD*)(result + 92840) = 51200;
  *(_DWORD*)(result + 92696) = 1;
  *(_BYTE*)(result + 92848) = 0;
  *(_BYTE*)(result + 94904) = 0;
  *(_DWORD*)(result + 94908) = 1;
  *(_BYTE*)(result + 94937) = 1;
  *(_DWORD*)(result + 92852) = 1024;
  *(_QWORD*)(result + 94912) = 0;
  *(_QWORD*)(result + 94920) = 0;
  *(_QWORD*)(result + 94928) = 0;
  *(_BYTE*)(result + 94936) = 0;
  return result;
}

__int64 Registration_561b60(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = a1 + 4096;
  v3 = GameData_2136008[0];
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)a1 = v3 + 2;
  *(_QWORD*)(a1 + 8) = 0;
  Registration_565740(a1 + 48);
  v4 = 0;
  *(_QWORD*)(a1 + 80) = a1 + 80;
  *(_QWORD*)(a1 + 88) = a1 + 80;
  *(_QWORD*)(a1 + 112) = a1 + 112;
  *(_QWORD*)(a1 + 120) = a1 + 112;
  *(_QWORD*)(a1 + 96) = a1 + 96;
  *(_QWORD*)(a1 + 104) = a1 + 96;
  do {
    v5 = (_QWORD*)(a1 + v4);
    v4 += 384;
    v5[16] = v5 + 16;
    v5[17] = v5 + 16;
    v5[19] = v5 + 19;
    v5[20] = v5 + 19;
    v5[22] = v5 + 22;
    v5[23] = v5 + 22;
    v5[25] = v5 + 25;
    v5[26] = v5 + 25;
    v5[28] = v5 + 28;
    v5[29] = v5 + 28;
    v5[31] = v5 + 31;
    v5[32] = v5 + 31;
    v5[34] = v5 + 34;
    v5[35] = v5 + 34;
    v5[37] = v5 + 37;
    v5[38] = v5 + 37;
    v5[40] = v5 + 40;
    v5[41] = v5 + 40;
    v5[43] = v5 + 43;
    v5[44] = v5 + 43;
    v5[46] = v5 + 46;
    v5[47] = v5 + 46;
    v5[49] = v5 + 49;
    v5[50] = v5 + 49;
    v5[52] = v5 + 52;
    v5[53] = v5 + 52;
    v5[55] = v5 + 55;
    v5[56] = v5 + 55;
    v5[58] = v5 + 58;
    v5[59] = v5 + 58;
    v5[61] = v5 + 61;
    v5[62] = v5 + 61;
  } while (v4 != 6144);
  *(_QWORD*)(a1 + 6272) = 0;
  *(_DWORD*)(a1 + 7080) = 0;
  *(_DWORD*)(a1 + 7116) = 0;
  *(_WORD*)(v2 + 3024) = 0;
  *(_QWORD*)(a1 + 7128) = 0;
  *(_QWORD*)(a1 + 7136) = 0;
  *(_QWORD*)(a1 + 7144) = 0;
  *(_QWORD*)(a1 + 7152) = 0;
  *(_QWORD*)(a1 + 7160) = 0;
  *(_QWORD*)(a1 + 7168) = 0;
  *(_QWORD*)(a1 + 7176) = 0;
  *(_DWORD*)(a1 + 7124) = 1;
  *(_BYTE*)(v2 + 3152) = 1;
  *(_QWORD*)(a1 + 7184) = 0;
  *(_QWORD*)(a1 + 7192) = 0;
  *(_QWORD*)(a1 + 7200) = 0;
  *(_QWORD*)(a1 + 7208) = 0;
  *(_QWORD*)(a1 + 7216) = 0;
  *(_QWORD*)(a1 + 7224) = 0;
  *(_QWORD*)(a1 + 7232) = 0;
  *(_QWORD*)(a1 + 7240) = 0;
  Registration_606350(a1 + 7256);
  Registration_6064e0(a1 + 7472);
  GameRoutine_5fe2f0(a1 + 7544);
  *(_QWORD*)(a1 + 7840) = 0;
  *(_QWORD*)(a1 + 7832) = 0;
  v6 = GameData_2135fb8[0];
  *(_QWORD*)(a1 + 7880) = -1;
  *(_QWORD*)(a1 + 7848) = v6 + 2;
  GameRoutine_55d690(a1 + 7848, 0, 12, 0, 0, 0, 1);
  *(_QWORD*)(a1 + 7880) = -1;
  *(_BYTE*)(v2 + 3777) = 0;
  *(_QWORD*)(a1 + 7848) = GameData_2136010 + 2;
  return memset(a1 + 6280, 0, 800, v7, v8, v9);
}

__int64 Registration_5633f0(__int64 result, unsigned int a2)
{
  __int64 v2;
  __int64 v4;

  if (a2 != *(_DWORD*)(result + 7080)) {
    v2 = result;
    nn_fontll_ScalableFontEngine_SetFont(*(_QWORD*)(result + 8),
                                         *(_QWORD*)(result + 24) + 50 * a2);
    nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v2 + 8));
    nn_fontll_ScalableFontEngine_SetBoldWeight(
        *(_QWORD*)(v2 + 8), *(unsigned int*)(*(_QWORD*)(v2 + 7160) + 4LL * a2));
    nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v2 + 8));
    v4 = *(_QWORD*)(v2 + 8);
    if (*(_BYTE*)(*(_QWORD*)(v2 + 7168) + a2) != 0) {
      nn_fontll_ScalableFontEngine_SetOutlineWidth(v4);
      v4 = *(_QWORD*)(v2 + 8);
    }
    nn_fontll_ScalableFontEngine_SetFlags(v4);
    result = nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v2 + 8));
    *(_DWORD*)(v2 + 7080) = a2;
  }
  return result;
}

__int64 Registration_563490(__int64 a1, __int64 (*a2)(__int64, __int64))
{
  return a2(a1 + 7880, a1 + 7472);
}

__int64 Registration_563900(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  float v31;
  float v32;
  unsigned int v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  int v48;
  __int64 v49;
  int v50;
  __int64 v51;
  int v52;
  __int64 v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  __int64 i;
  int v60;
  char v61;
  int v62;
  _BYTE* v63;
  __int64 v64;
  _BYTE* v65;
  unsigned int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned int v70;
  unsigned int v72;
  unsigned int v73;
  int v74;
  int v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  _BYTE* v81;
  int v82;
  int v83;
  int v84;
  int v85;
  __int64 v86;
  __int64 v87;
  int v88;
  char v89;
  __int64 v90;
  int v91;
  _BYTE* v92;
  int v93;
  int v94;
  int v95;
  int v96;
  __int64 v97;
  int v98;
  char v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  int v106;
  int v107;
  int v108;
  __int16 v109[2];
  int v110;
  int v111;
  __int16 v112;

  v1 = *(_QWORD**)(result + 88);
  v2 = (_QWORD*)(result + 80);
  if (v1 != (_QWORD*)(result + 80)) {
    v3 = result;
    v104 = result + 112;
    v105 = result + 128;
    v100 = result + 96;
    v101 = result + 80;
    do {
      v5 = (_QWORD*)v1[1];
      v6 = *v5;
      *(_QWORD*)(*v1 + 8LL) = v5;
      *v5 = *v1;
      *(_QWORD*)(v6 + 8) = v1;
      *v1 = v6;
      Registration_5633f0(v3, *((unsigned __int16*)v1 + 26));
      result = nn_fontll_ScalableFontEngine_CheckGlyphExist(
          *(_QWORD*)(v3 + 8), *((unsigned int*)v1 + 12));
      if ((result & 1) != 0) {
        v7 = *((unsigned __int16*)v1 + 27) << 16;
        nn_fontll_ScalableFontEngine_SetScale(*(_QWORD*)(v3 + 8), v7, 0, 0,
                                              (unsigned int)v7);
        nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v3 + 8));
        v8 = nn_fontll_ScalableFontEngine_AcquireGlyphmap(
            *(_QWORD*)(v3 + 8), *((unsigned int*)v1 + 12), 8);
        nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v3 + 8));
        LOWORD(v9) = *((_WORD*)v1 + 27);
        v10 = (int)(float)((float)(*(float*)(*(_QWORD*)(v3 + 7152) +
                                             28LL *
                                                 *((unsigned __int16*)v1 + 26) +
                                             8) *
                                   (float)v9) +
                           0.5);
        v11 = (*(__int64 (**)(_QWORD))(v3 + 7136))(
            *(unsigned __int16*)(v8 + 30) -
            (unsigned int)*(unsigned __int16*)(v8 + 14) + v10);
        *((_BYTE*)v1 + 58) = v11;
        v12 = v11;
        v13 = *(_DWORD*)(v3 + 6272);
        if (v13 != 0) {
          v14 = v105;
          v15 = *(unsigned int*)(v3 + 6272);
          do {
            if (*(unsigned __int8*)(v14 + 20) == (unsigned __int8)v11) {
              v16 = *(unsigned __int16*)(v14 + 18);
              if ((unsigned int)(v16 + *(__int16*)(v8 + 28) + 2) <
                  *(_DWORD*)(v3 + 40)) {
                goto LABEL_18;
              }
            }
            v14 += 24;
            --v15;
          } while (v15 != 0);
          if (v13 >= 0x100) {
            v17 = *v1;
            *v1 = *(_QWORD*)(v3 + 96);
            *(_QWORD*)(v17 + 8) = v100;
            *(_QWORD*)(*(_QWORD*)(v3 + 96) + 8LL) = v1;
            *(_QWORD*)(v3 + 96) = v17;
            nn_fontll_ScalableFontEngine_ReleasesGlyph(*(_QWORD*)(v3 + 8), v8);
            result = nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v3 + 8));
            *(_DWORD*)(v3 + 7116) = 2;
            goto LABEL_4;
          }
          v19 = v105 + 24LL * (v13 - 1);
          v20 = *(unsigned __int16*)(v19 + 16);
          v18 = v20 +
                (*(__int64 (**)(_QWORD))(v3 + 7144))(
                    *(unsigned __int8*)(v19 + 20)) +
                2;
        }
        else {
          v18 = 0;
        }
        if ((*(unsigned int (**)(_QWORD))(v3 + 7144))(v12) + v18 <
            *(_DWORD*)(v3 + 44)) {
          v21 = *(_DWORD*)(v3 + 6272);
          LOWORD(v16) = 0;
          v14 = v105 + 24LL * v21;
          *(_BYTE*)(v14 + 21) = v21;
          *(_WORD*)(v14 + 18) = 0;
          *(_WORD*)(v14 + 16) = v18;
          *(_BYTE*)(v14 + 20) = v12;
          *(_DWORD*)(v3 + 6272) = v21 + 1;
        LABEL_18:
          v22 = v1[2];
          *((_WORD*)v1 + 32) = v16;
          *((_WORD*)v1 + 33) = *(_WORD*)(v14 + 16);
          *((_BYTE*)v1 + 59) = *(_BYTE*)(v14 + 21);
          v1[2] = *(_QWORD*)v14;
          *(_QWORD*)(v22 + 8) = v14;
          *(_QWORD*)(*(_QWORD*)v14 + 8LL) = v1 + 2;
          *(_QWORD*)v14 = v22;
          *(_WORD*)(v14 + 18) += *(_WORD*)(v8 + 28) + 2;
        LABEL_21:
          v27 = *((unsigned __int16*)v1 + 33);
          v28 = v10 - *(__int16*)(v8 + 14);
          v107 = *(__int16*)(v8 + 14);
          v29 = *((unsigned __int16*)v1 + 26);
          v30 = *(_QWORD*)(v3 + 7152) + 28 * v29;
          v32 = *(float*)(v30 + 16);
          v31 = *(float*)(v30 + 20);
          *((_WORD*)v1 + 36) = (int)(float)(v32 * (float)*(__int16*)(v8 + 28));
          *((_WORD*)v1 + 37) =
              (int)(float)(v31 * (float)(v28 + *(__int16*)(v8 + 30)));
          *((_WORD*)v1 + 34) = *(_WORD*)(v8 + 28);
          *((_WORD*)v1 + 35) = *(_WORD*)(v8 + 30) + v28;
          if (*(_BYTE*)(*(_QWORD*)(v3 + 7176) + v29) == 1 &&
              *(_WORD*)(v8 + 28) != 0) {
            *((_WORD*)v1 + 38) =
                (int)(float)(v32 * (float)(*(__int16*)(*(_QWORD*)(v3 + 7184) +
                                                       2 * v29) +
                                           *(__int16*)(v8 + 28)));
            v33 = *(unsigned __int16*)(*(_QWORD*)(v3 + 7184) + 2 * v29);
            v34 = (__int16)(v33 + (v33 >> 15)) >> 1;
          }
          else if (*(_BYTE*)(*(_QWORD*)(v3 + 7192) + v29) == 1) {
            *((_WORD*)v1 + 38) =
                (int)(float)(v32 * (float)*(__int16*)(*(_QWORD*)(v3 + 7208) +
                                                      2 * v29));
            v34 = (*(__int16*)(*(_QWORD*)(v3 + 7208) + 2 * v29) -
                   *(__int16*)(v8 + 28)) /
                  2;
          }
          else {
            if (*(_BYTE*)(v3 + 7248) == 1) {
              v35 = *(__int16*)(v8 + 16);
              v36 = *(_QWORD*)(v3 + 7184);
            }
            else {
              v37 = *(_QWORD*)(v3 + 8);
              v38 = *((unsigned int*)v1 + 12);
              v112 = 0;
              v111 = 0;
              v110 = 0;
              v109[0] = 0;
              nn_fontll_ScalableFontEngine_GetAdvance(v37, &v112, v109, &v111,
                                                      &v110, v38, 8);
              v35 = v112;
              v36 = *(_QWORD*)(v3 + 7184);
              v29 = *((unsigned __int16*)v1 + 26);
            }
            *((_WORD*)v1 + 38) =
                (int)(float)(v32 * (float)(*(__int16*)(v36 + 2 * v29) + v35));
            v39 = *(unsigned __int16*)(*(_QWORD*)(v3 + 7184) + 2 * v29);
            v34 = *(__int16*)(v8 + 12) + ((__int16)(v39 + (v39 >> 15)) >> 1);
          }
          v106 = v27;
          v40 = v28 + v27;
          v108 = v10;
          *((_WORD*)v1 + 39) = (int)(float)(v32 * (float)v34);
          *((_WORD*)v1 + 40) =
              (int)(float)((float)*(int*)(*(_QWORD*)(v3 + 7152) +
                                          28LL * (unsigned int)v29 + 24) +
                           (float)((float)v10 * v31));
          v41 = (unsigned int)(*(__int16*)(v8 + 28) + 2);
          v42 = GameRoutine_5fe3f0(*(_QWORD*)(v3 + 7832));
          v46 = *((unsigned __int16*)v1 + 33);
          v47 = v42 + *(_QWORD*)(v3 + 7840);
          v102 = *(_QWORD*)(v3 + 7840);
          v103 = v42;
          if (v40 > v46) {
            v48 = ~v46;
            do {
              memset(v47 + (unsigned int)*((unsigned __int16*)v1 + 32) +
                         (v48 + *(_DWORD*)(v3 + 44)) * *(_DWORD*)(v3 + 40),
                     0, v41, v43, v44, v45);
              ++v46;
              --v48;
            } while (v46 < v40);
          }
          v49 = v8 + 40;
          v50 = -v40 & ~(-v40 >> 31);
          if (*(_BYTE*)(*(_QWORD*)(v3 + 7168) +
                        *((unsigned __int16*)v1 + 26)) == 0) {
            if (v50 < *(__int16*)(v8 + 30)) {
              v62 = ~v108 + v107 - v50 - v106;
              do {
                v63 =
                    (_BYTE*)(v47 + (unsigned int)*((unsigned __int16*)v1 + 32) +
                             (v62 + *(_DWORD*)(v3 + 44)) * *(_DWORD*)(v3 + 40));
                memcpy(v63 + 1, v49 + *(__int16*)(v8 + 28) * (__int64)v50,
                       *(__int16*)(v8 + 28));
                *v63 = 0;
                ++v50;
                --v62;
                v63[*(__int16*)(v8 + 28) + 1] = 0;
              } while (v50 < *(__int16*)(v8 + 30));
            }
            v51 = v8;
            goto LABEL_55;
          }
          nn_fontll_ScalableFontEngine_SetFlags(*(_QWORD*)(v3 + 8));
          v51 = nn_fontll_ScalableFontEngine_AcquireGlyphmap(
              *(_QWORD*)(v3 + 8), *((unsigned int*)v1 + 12), 8);
          nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v3 + 8));
          nn_fontll_ScalableFontEngine_SetFlags(*(_QWORD*)(v3 + 8));
          v52 = *(__int16*)(v8 + 30);
          if (v52 <= *(__int16*)(v51 + 30)) {
            v52 = *(__int16*)(v51 + 30);
          }
          if (v52 <= v50) {
            goto LABEL_54;
          }
          v53 = v51 + 40;
          v54 = -v40 & ~(-v40 >> 31);
          if ((((_BYTE)v52 - (_BYTE)v50) & 1) != 0) {
            v55 = *(__int16*)(v8 + 28);
            v56 = *(_DWORD*)(v3 + 40);
            v57 = *(_DWORD*)(v3 + 44) + ~(v50 + v40);
            v58 = *((unsigned __int16*)v1 + 32);
            if (v55 >= 1) {
              for (i = 0; i < (__int16)v55; ++i) {
                if (v50 >= *(__int16*)(v8 + 30)) {
                  v61 = 0;
                  if (v50 >= *(__int16*)(v51 + 30)) {
                  LABEL_46:
                    LOBYTE(v60) = 0;
                    goto LABEL_41;
                  }
                }
                else {
                  v61 = *(_BYTE*)(v49 + (int)i + v50 * (__int16)v55);
                  if (v50 >= *(__int16*)(v51 + 30)) {
                    goto LABEL_46;
                  }
                }
                v60 = *(unsigned __int8*)(v53 +
                                          *(__int16*)(v51 + 28) * (__int64)v50 +
                                          i) >>
                      1;
              LABEL_41:
                *(_BYTE*)(v103 + v102 + (unsigned int)(v58 + v56 * v57) + 1 +
                          i) = v61 - v60;
                LOWORD(v55) = *(_WORD*)(v8 + 28);
              }
            }
            v65 = (_BYTE*)(v47 + (unsigned int)(v58 + v57 * v56));
            *v65 = 0;
            v65[*(__int16*)(v8 + 28) + 1] = 0;
            v54 = v50 + 1;
          }
          if (v50 == v52 - 1) {
          LABEL_54:
            nn_fontll_ScalableFontEngine_ReleasesGlyph(*(_QWORD*)(v3 + 8), v8);
          LABEL_55:
            v66 = (*(__int64 (**)(_QWORD))(v3 + 7144))(
                *((unsigned __int8*)v1 + 58));
            v70 = *(unsigned __int16*)(v51 + 30);
            if (v66 > (__int16)v70 && v70 <= 0xFFFD) {
              v72 = (__int16)v70 + 1;
              v73 = v66;
              v74 = ~v108 + v107 - (__int16)v70 - v106;
              do {
                memset(v47 + (unsigned int)*((unsigned __int16*)v1 + 32) +
                           (v74 + *(_DWORD*)(v3 + 44)) * *(_DWORD*)(v3 + 40),
                       0, v41, v67, v68, v69);
                if (v72 >= v73) {
                  break;
                }
                --v74;
              } while (v72++ < *(__int16*)(v51 + 30) + 2);
            }
            GameRoutine_5fe410(*(_QWORD*)(v3 + 7832));
            nn_fontll_ScalableFontEngine_ReleasesGlyph(*(_QWORD*)(v3 + 8), v51);
            result = nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v3 + 8));
            v2 = (_QWORD*)v101;
            goto LABEL_4;
          }
          v76 = v54 + 1;
          v77 = v103 + v102 + 1;
          v78 = v107 - v54 - v108 - v106;
          v79 = v78 - 1;
          v80 = v78 - 2;
          while (2) {
            v83 = *(_DWORD*)(v3 + 40);
            v82 = *(_DWORD*)(v3 + 44);
            v84 = *((unsigned __int16*)v1 + 32);
            v85 = *(__int16*)(v8 + 28);
            if (v85 >= 1) {
              v86 = 0;
              v87 = v51 + 40;
              do {
                if (v54 >= *(__int16*)(v8 + 30)) {
                  v89 = 0;
                  if (v54 >= *(__int16*)(v51 + 30)) {
                  LABEL_74:
                    LOBYTE(v88) = 0;
                    goto LABEL_69;
                  }
                }
                else {
                  v89 = *(_BYTE*)(v49 + (int)v86 + v54 * (__int16)v85);
                  if (v54 >= *(__int16*)(v51 + 30)) {
                    goto LABEL_74;
                  }
                }
                v88 = *(unsigned __int8*)(v87 + *(__int16*)(v51 + 28) *
                                                    (__int64)v54) >>
                      1;
              LABEL_69:
                ++v87;
                *(_BYTE*)(v77 + (unsigned int)(v84 + v83 * (v82 + v79)) +
                          v86++) = v89 - v88;
                LOWORD(v85) = *(_WORD*)(v8 + 28);
              } while (v86 < (__int16)v85);
            }
            v90 = (unsigned int)(v84 + (v82 + ~(v54 + v40)) * v83);
            v91 = v54 + 1;
            v92 = (_BYTE*)(v47 + v90);
            *v92 = 0;
            v92[*(__int16*)(v8 + 28) + 1] = 0;
            v94 = *(_DWORD*)(v3 + 40);
            v93 = *(_DWORD*)(v3 + 44);
            v95 = *((unsigned __int16*)v1 + 32);
            v96 = *(__int16*)(v8 + 28);
            if (v96 < 1) {
            LABEL_65:
              v54 += 2;
              v79 -= 2;
              v80 -= 2;
              v76 += 2;
              v81 = (_BYTE*)(v47 +
                             (unsigned int)(v95 + (v93 + ~(v91 + v40)) * v94));
              *v81 = 0;
              v81[*(__int16*)(v8 + 28) + 1] = 0;
              if (v54 == v52) {
                goto LABEL_54;
              }
              continue;
            }
            break;
          }
          v97 = 0;
          while (2) {
            if (v91 >= *(__int16*)(v8 + 30)) {
              v99 = 0;
              if (v91 >= *(__int16*)(v51 + 30)) {
                goto LABEL_83;
              }
            }
            else {
              v99 = *(_BYTE*)(v49 + (int)v97 + v76 * (__int16)v96);
              if (v91 >= *(__int16*)(v51 + 30)) {
              LABEL_83:
                LOBYTE(v98) = 0;
              LABEL_78:
                *(_BYTE*)(v77 + (unsigned int)(v95 + v94 * (v93 + v80)) +
                          v97++) = v99 - v98;
                LOWORD(v96) = *(_WORD*)(v8 + 28);
                if (v97 >= (__int16)v96) {
                  goto LABEL_65;
                }
                continue;
              }
            }
            break;
          }
          v98 = *(unsigned __int8*)(v53 + *(__int16*)(v51 + 28) * (__int64)v76 +
                                    v97) >>
                1;
          goto LABEL_78;
        }
        v23 = Registration_5642e0(v3, *((unsigned __int8*)v1 + 58),
                                  *(unsigned __int16*)(v8 + 28));
        if (v23 != 0) {
          v24 = v1[2];
          *((_WORD*)v1 + 32) = *(_WORD*)(v23 + 64);
          *((_WORD*)v1 + 33) = *(_WORD*)(v23 + 66);
          *((_BYTE*)v1 + 59) = *(_BYTE*)(v23 + 59);
          v26 = *(_QWORD*)(v23 + 16);
          v25 = v23 + 16;
          v1[2] = v26;
          *(_QWORD*)(v24 + 8) = v25;
          *(_QWORD*)(*(_QWORD*)v25 + 8LL) = v1 + 2;
          *(_QWORD*)v25 = v24;
          goto LABEL_21;
        }
        v64 = *v1;
        *v1 = *(_QWORD*)(v3 + 96);
        *(_QWORD*)(v64 + 8) = v100;
        *(_QWORD*)(*(_QWORD*)(v3 + 96) + 8LL) = v1;
        *(_QWORD*)(v3 + 96) = v64;
        nn_fontll_ScalableFontEngine_ReleasesGlyph(*(_QWORD*)(v3 + 8), v8);
        result = nn_fontll_ScalableFontEngine_GetError(*(_QWORD*)(v3 + 8));
        *(_DWORD*)(v3 + 7116) = 3;
      }
      else {
        *((_BYTE*)v1 + 56) |= 0x40u;
        v4 = *v1;
        *v1 = *(_QWORD*)v104;
        *(_QWORD*)(v4 + 8) = v104;
        *(_QWORD*)(*(_QWORD*)v104 + 8LL) = v1;
        *(_QWORD*)v104 = v4;
      }
    LABEL_4:
      v1 = v5;
    } while (v5 != v2);
  }
  return result;
}

__int64* Registration_5642e0(__int64 a1, unsigned __int8 a2,
                             unsigned __int16 a3)
{
  __int64 v3;
  int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  int v9;
  __int64* v10;
  __int64* v11;
  unsigned int v13;
  __int64* v14;
  int v15;
  __int64* v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;

  v3 = *(unsigned int*)(a1 + 6272);
  if ((_DWORD)v3 == 0) {
    return nullptr;
  }
  v4 = a2;
  v5 = a3;
  v6 = 0;
  while (1) {
    v7 = a1 + 128 + 24 * v6;
    if (*(unsigned __int8*)(v7 + 20) == v4) {
      v8 = *(__int64**)(v7 + 8);
      if (v8 != (__int64*)v7) {
        break;
      }
    }
  LABEL_3:
    if (++v6 == v3) {
      return nullptr;
    }
  }
  v9 = 0;
  v10 = *(__int64**)(v7 + 8);
  v11 = v10;
  while (1) {
    while (*((_BYTE*)v11 + 40) != 0 || *((_DWORD*)v11 + 11) != 0) {
      v9 = 0;
      v11 = (__int64*)v11[1];
      if (v11 == (__int64*)v7) {
        goto LABEL_3;
      }
    }
    v13 = *((unsigned __int16*)v11 + 26);
    if (v9 == 0) {
      break;
    }
    v13 = *((unsigned __int16*)v11 + 24) + v13 - *((unsigned __int16*)v10 + 24);
    if (v10 != v8) {
      goto LABEL_15;
    }
  LABEL_21:
    v15 = 0;
    if (v13 >= v5) {
      goto LABEL_25;
    }
  LABEL_22:
    ++v9;
    v11 = (__int64*)v11[1];
    if (v11 == (__int64*)v7) {
      goto LABEL_3;
    }
  }
  v10 = v11;
  if (v11 == v8) {
    goto LABEL_21;
  }

LABEL_15:
  v14 = v10;
  do {
    v14 = (__int64*)*v14;
  } while ((v14[5] & 8) != 0 && v8 != v14);
  v15 = *((unsigned __int16*)v10 + 24) -
        (*((unsigned __int16*)v14 + 24) + *((unsigned __int16*)v14 + 26)) - 2;
  if ((v15 & ~(v15 >> 31)) + v13 < v5) {
    goto LABEL_22;
  }

LABEL_25:
  v17 = (__int64*)v11[1];
  if (v10 != v17) {
    v18 = a1 + 96;
    v19 = v10;
    do {
      if ((v19[5] & 8) == 0) {
        v20 = *(v19 - 2);
        *((_BYTE*)v19 + 40) |= 8u;
        *(v19 - 2) = *(_QWORD*)v18;
        *(_QWORD*)(v20 + 8) = v18;
        *(_QWORD*)(*(_QWORD*)v18 + 8LL) = v19 - 2;
        *(_QWORD*)v18 = v20;
      }
      v19 = (__int64*)v19[1];
    } while (v19 != v17);
  }
  if (v15 >= 1) {
    *((_WORD*)v10 + 24) -= v15;
  }
  return v10 - 2;
}

__int64 Registration_5656b0(unsigned __int16 a1)
{
  int v2;
  unsigned int v3;

  if (a1 > 0x400u) {
    return 0;
  }
  if (a1 > 0x200u) {
    return 10;
  }
  if (a1 > 0x100u) {
    return 9;
  }
  if (a1 > 0x80u) {
    return 8;
  }
  if (a1 <= 0x10u) {
    v2 = 4;
  }
  else {
    v2 = 5;
  }
  if (a1 <= 0x20u) {
    v3 = v2;
  }
  else {
    v3 = 6;
  }
  if (a1 <= 0x40u) {
    return v3;
  }
  else {
    return 7;
  }
}

__int64 Registration_565b40(__int64* a1)
{
  __int64 result;

  result = GameRoutine_565ba0();
  *a1 = result;
  if (result != 0) {
    *(_BYTE*)(result + 57) = 0;
  }
  return result;
}

__int64 Registration_616da0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  int* v5;
  __int64 i;
  _DWORD* v7;
  int v8;
  _DWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  int v15;
  int* v16;
  __int64 j;
  _DWORD* v18;
  int v19;
  _DWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _DWORD* v24;
  __int64 v25;
  __int64 result;
  int* v27;
  __int64 k;
  _DWORD* v29;
  int v30;
  _DWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _DWORD* v35;
  __int64 v36;
  _DWORD* v37;
  _BYTE v38[32];

  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = 0;
  *(_BYTE*)(a1 + 72) = 1;
  *(_QWORD*)(a1 + 24) = 0;
  v2 = a1 + 24;
  *(_QWORD*)(a1 + 48) = 0;
  v3 = a1 + 48;
  v4 = nn_hid_GetSixAxisSensorHandles(v38, 8, " ", 2);
  if (v4 >= 1) {
    v5 = (int*)v38;
    for (i = (unsigned int)v4; i != 0; --i) {
      v7 = (_DWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                   1552, 16, 0);
      v8 = *v5++;
      v9 = v7;
      *v7 = v8;
      memset(v7 + 2, 0, 1540, v10, v11, v12);
      nn_hid_StartSixAxisSensor(v9);
      LODWORD(v37) = 2;
      nn_hid_SetGyroscopeZeroDriftMode(v9, &v37);
      v37 = v9;
      Registration_617090(a1, &v37);
      v13 = v37;
      v37 = nullptr;
      if (v13 != nullptr) {
        nn_hid_StopSixAxisSensor(v13);
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v14, v13);
      }
    }
  }
  v15 = nn_hid_GetSixAxisSensorHandles(v38, 8, &GameData_1b33414, 1);
  if (v15 >= 1) {
    v16 = (int*)v38;
    for (j = (unsigned int)v15; j != 0; --j) {
      v18 = (_DWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    1552, 16, 0);
      v19 = *v16++;
      v20 = v18;
      *v18 = v19;
      memset(v18 + 2, 0, 1540, v21, v22, v23);
      nn_hid_StartSixAxisSensor(v20);
      LODWORD(v37) = 2;
      nn_hid_SetGyroscopeZeroDriftMode(v20, &v37);
      v37 = v20;
      Registration_617090(v2, &v37);
      v24 = v37;
      v37 = nullptr;
      if (v24 != nullptr) {
        nn_hid_StopSixAxisSensor(v24);
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v25, v24);
      }
    }
  }
  result = nn_hid_GetSixAxisSensorHandles(v38, 8, &GameData_1b33414, 4);
  if ((int)result >= 1) {
    v27 = (int*)v38;
    for (k = (unsigned int)result; k != 0; --k) {
      v29 = (_DWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    1552, 16, 0);
      v30 = *v27++;
      v31 = v29;
      *v29 = v30;
      memset(v29 + 2, 0, 1540, v32, v33, v34);
      nn_hid_StartSixAxisSensor(v31);
      LODWORD(v37) = 2;
      nn_hid_SetGyroscopeZeroDriftMode(v31, &v37);
      v37 = v31;
      result = Registration_617090(v3, &v37);
      v35 = v37;
      v37 = nullptr;
      if (v35 != nullptr) {
        nn_hid_StopSixAxisSensor(v35);
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v36 = 128;
        }
        else {
          v36 = 56;
        }
        result =
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v36, v35);
      }
    }
  }
  return result;
}

__int64 Registration_617280(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  bool v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  bool v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64 v30;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;

  v1 = a1 + 27;
  if (a1[29] != 0) {
    v3 = fw_memory_g_heap_manager_ptr;
    do {
      v32 = *(_QWORD**)(*v1 + 16LL);
      v4 = v32;
      nn_os_LockMutex(&GameData_2166748);
      nn_hid_VibrationNodeConnection_Disconnect(v4 + 27);
      Registration_617680(v1, &v32);
      v5 = v32;
      if (v32 != nullptr) {
        nn_hid_VibrationNodeConnection_Destroy_VibrationNodeConnection(v32 +
                                                                       27);
        nn_hid_VibrationPlayer_Destroy_VibrationPlayer(v5 + 1);
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
      }
      nn_os_UnlockMutex(&GameData_2166748);
    } while (a1[29] != 0);
  }
  if (a1[32] != 0) {
    v7 = a1 + 30;
    v8 = fw_memory_g_heap_manager_ptr;
    while (1) {
      v10 = *(_QWORD*)(a1[30] + 16LL);
      nn_os_LockMutex(&GameData_2166748);
      nn_hid_VibrationNodeConnection_Disconnect(v10 + 72);
      v11 = (_QWORD*)a1[31];
      v32 = &v32;
      v33 = &v32;
      v34 = 0;
      if (v11 != v7) {
        break;
      }
    LABEL_11:
      nn_hid_VibrationNodeConnection_Destroy_VibrationNodeConnection(v10 + 72);
      nn_hid_VibrationWriter_Destroy_VibrationWriter(v10 + 8);
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
        v9 = 128;
      }
      else {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v9, v10);
    LABEL_15:
      nn_os_UnlockMutex(&GameData_2166748);
      if (a1[32] == 0) {
        if (a1[29] != 0) {
          v27 = (_QWORD*)a1[28];
          v28 = *(_QWORD**)(a1[27] + 8LL);
          *(_QWORD*)(*v27 + 8LL) = v28;
          *v28 = *v27;
          a1[29] = 0;
          if (v27 != v1) {
            do {
              v29 = (_QWORD*)v27[1];
              if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
                v30 = 128;
              }
              else {
                v30 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v30, v27);
              v27 = v29;
            } while (v29 != v1);
          }
        }
        goto LABEL_60;
      }
    }
    v12 = &v32;
    if (&v32 == v7) {
      do {
        v19 = (_QWORD*)v11[1];
        if (v11[2] == v10) {
          if (v19 == &v32) {
            v20 = true;
          }
          else if (v19[2] == v10) {
            do {
              v19 = (_QWORD*)v19[1];
              v20 = v19 == &v32;
            } while (v19 != &v32 && v19[2] == v10);
          }
          else {
            v20 = false;
          }
          if (v11 != v19) {
            v12 = (_QWORD*)*v19;
            v21 = *(_QWORD**)(*v19 + 8LL);
            *(_QWORD*)(*v11 + 8LL) = v21;
            *v21 = *v11;
            v22 = v32;
            v32[1] = v11;
            *v11 = v22;
            v32 = v12;
            v12[1] = &v32;
          }
          if (!v20) {
            v19 = (_QWORD*)v19[1];
          }
        }
        v11 = v19;
      } while (v19 != &v32);
    LABEL_46:
      if (v34 != 0) {
        v23 = v33;
        v24 = (_QWORD*)v12[1];
        *(_QWORD*)(*v33 + 8LL) = v24;
        *v24 = *v23;
        v34 = 0;
        if (v23 != &v32) {
          do {
            v25 = (_QWORD*)v23[1];
            if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
              v26 = 128;
            }
            else {
              v26 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v26, v23);
            v23 = v25;
          } while (v25 != &v32);
        }
      }
      if (v10 == 0) {
        goto LABEL_15;
      }
      goto LABEL_11;
    }
    while (1) {
      v13 = (_QWORD*)v11[1];
      if (v11[2] == v10) {
        if (v13 == v7) {
          v14 = true;
          if (v11 != v13) {
            goto LABEL_28;
          }
        }
        else {
          do {
            v14 = v13[2] == v10;
            if (v13[2] != v10) {
              break;
            }
            v13 = (_QWORD*)v13[1];
          } while (v13 != v7);
          if (v11 != v13) {
          LABEL_28:
            v12 = (_QWORD*)*v13;
            v15 = 1;
            if (v11 != (_QWORD*)*v13) {
              v16 = v11;
              do {
                v16 = (_QWORD*)v16[1];
                ++v15;
              } while (v16 != v12);
            }
            a1[32] -= v15;
            v34 += v15;
            v17 = (_QWORD*)v12[1];
            *(_QWORD*)(*v11 + 8LL) = v17;
            *v17 = *v11;
            v18 = v32;
            v32[1] = v11;
            *v11 = v18;
            v32 = v12;
            v12[1] = &v32;
            if (v14) {
              goto LABEL_19;
            }
          LABEL_32:
            v13 = (_QWORD*)v13[1];
            goto LABEL_19;
          }
        }
        if (!v14) {
          goto LABEL_32;
        }
      }
    LABEL_19:
      v11 = v13;
      if (v13 == v7) {
        goto LABEL_46;
      }
    }
  }

LABEL_60:
  nn_hid_VibrationNodeConnection_Destroy_VibrationNodeConnection(a1 + 20);
  nn_hid_VibrationTarget_Destroy_VibrationTarget(a1 + 10);
  return nn_hid_VibrationMixer_Destroy_VibrationMixer(a1 + 1);
}

__int64 Registration_617aa0(__int64 a1)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[5];

  *(_DWORD*)(a1 + 24) = 0;
  *(_DWORD*)a1 = -1;
  nn_hid_VibrationMixer_VibrationMixer(a1 + 32);
  nn_hid_VibrationTarget_VibrationTarget(a1 + 104);
  nn_hid_VibrationNodeConnection_VibrationNodeConnection(a1 + 184);
  *(_QWORD*)(a1 + 240) = a1 + 240;
  *(_QWORD*)(a1 + 248) = a1 + 240;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = a1 + 264;
  *(_QWORD*)(a1 + 272) = a1 + 264;
  *(_QWORD*)(a1 + 280) = 0;
  nn_hid_VibrationNodeConnection_Connect(a1 + 184, a1 + 32, a1 + 104);
  *(_DWORD*)(a1 + 288) = 0;
  nn_hid_VibrationMixer_VibrationMixer(a1 + 296);
  nn_hid_VibrationTarget_VibrationTarget(a1 + 368);
  nn_hid_VibrationNodeConnection_VibrationNodeConnection(a1 + 448);
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 504) = a1 + 504;
  *(_QWORD*)(a1 + 512) = a1 + 504;
  *(_QWORD*)(a1 + 528) = a1 + 528;
  *(_QWORD*)(a1 + 536) = a1 + 528;
  nn_hid_VibrationNodeConnection_Connect(a1 + 448, a1 + 296, a1 + 368);
  result = a1;
  *(_QWORD*)(a1 + 552) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 560) = 0x3F8000003F800000LL;
  if (*(_DWORD*)a1 != 0 || *(_DWORD*)(a1 + 4) != 2) {
    v10[4] = v10[3];
    *(_DWORD*)a1 = 0;
    *(_DWORD*)(a1 + 4) = 2;
    v4 = a1 + 8;
    result = nn_hid_GetVibrationDeviceHandles(a1 + 8, 2, a1, 2);
    *(_DWORD*)(a1 + 16) = result;
    if ((int)result >= 1) {
      v5 = 0;
      for (i = 0; i < *(int*)(a1 + 16); ++i) {
        nn_hid_InitializeVibrationDevice(v4 + v5);
        result = nn_hid_GetVibrationDeviceInfo(v10, v4 + v5);
        if (HIDWORD(v10[0]) == 2) {
          *(_DWORD*)(a1 + 288) = *(_DWORD*)(v4 + 4 * i);
          nn_hid_VibrationNodeConnection_Disconnect(a1 + 448);
          nn_hid_VibrationTarget_SetVibrationDeviceHandle(a1 + 368, a1 + 288);
          v7 = a1 + 448;
          v8 = a1 + 296;
          v9 = a1 + 368;
        }
        else {
          if (HIDWORD(v10[0]) != 1) {
            goto LABEL_9;
          }
          *(_DWORD*)(a1 + 24) = *(_DWORD*)(v4 + 4 * i);
          nn_hid_VibrationNodeConnection_Disconnect(a1 + 184);
          nn_hid_VibrationTarget_SetVibrationDeviceHandle(a1 + 104, a1 + 24);
          v7 = a1 + 184;
          v8 = a1 + 32;
          v9 = a1 + 104;
        }
        result = nn_hid_VibrationNodeConnection_Connect(v7, v8, v9);
      LABEL_9:
        v5 += 4;
      }
    }
  }
  return result;
}

__int64* Registration_617c90(__int64* result)
{
  __int64 v1;
  __int64 v2;

  v1 = *result;
  *result = 0;
  if (v1 != 0) {
    NodeThread_Unknown2(v1);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
  }
  return result;
}

__int64 Registration_617d10()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;

  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      552, 16, 0);
  memset(v1 + 8, 0, 473, v2, v3, v4);
  *(_BYTE*)(v1 + 481) = 0;
  *(_QWORD*)v1 = hid_Vibration_NodeThread_vtable;
  nn_os_InitializeTimerEvent(v1 + 488, 1);
  fw_world_InitializeWorker(v1, 536870919, 0x2000);
  nn_os_StartThread(v1 + 32);
  result = nn_os_StartPeriodicTimerEvent(v1 + 488, *(_QWORD*)GameData_212c148,
                                         *(_QWORD*)GameData_212c148);
  v6 = GameData_21a5520;
  GameData_21a5520 = v1;
  if (v6 != 0) {
    NodeThread_Unknown2(v6);
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v7 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v7, v6);
  }
  return result;
}

__int64 Registration_617e00()
{
  GameRoutine_2b0(Registration_617c90, &GameData_21a5520, &GameData_1f50948);
  return GameRoutine_2b0(GameData_212c138, &GameData_2166748,
                         &GameData_1f50948);
}

__int64 Registration_6260e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 i;
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

  if (*(_BYTE*)(result + 8) == 1) {
    v1 = *(_QWORD*)(result + 4776);
    v2 = result;
    if (v1 != 0) {
      atomic_exchange((atomic_uchar* volatile)(v1 + 496), 1u);
      v3 = *(_QWORD*)(result + 4776);
      *(_QWORD*)(result + 4776) = 0;
      if (v3 != 0) {
        BuildThread_Unknown2(v3);
        v4 = 368;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
      }
    }
    for (i = 0; i != 32; ++i) {
      while (*(_QWORD*)(v2 + 24 + 8 * i) != 0) {
        GameRoutine_626d20(v2);
      }
    }
    while (1) {
      v6 = *(_QWORD*)(v2 + 16);
      if (v6 == 0) {
        break;
      }
      GameRoutine_607f20(v6);
    }
    v7 = (*(__int64 (**)(__int64))(*(_QWORD*)as_g_engine + 8LL))(as_g_engine);
    as_g_engine = 0;
    result = Registration_655e00(v7);
    v8 = *(_QWORD*)(v2 + 4936);
    if (v8 != 0) {
      if (*(_QWORD*)(v2 + 4928) == 0) {
        goto LABEL_19;
      }
      v9 = 368;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
        v9 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, *(_QWORD*)(v2 + 4928));
      v8 = *(_QWORD*)(v2 + 4936);
      if (v8 != 0) {
      LABEL_19:
        v10 = 368;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
          v10 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v8);
      }
      *(_QWORD*)(v2 + 4936) = 0;
      *(_QWORD*)(v2 + 4944) = 0;
      *(_QWORD*)(v2 + 4928) = 0;
    }
    v11 = *(_QWORD*)(v2 + 5008);
    *(_BYTE*)(v2 + 4984) = 0;
    if (v11 != 0) {
      if (*(_QWORD*)(v2 + 5000) == 0) {
        goto LABEL_28;
      }
      v12 = 368;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
        v12 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, *(_QWORD*)(v2 + 5000));
      v11 = *(_QWORD*)(v2 + 5008);
      if (v11 != 0) {
      LABEL_28:
        v13 = 368;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
          v13 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v11);
      }
      *(_QWORD*)(v2 + 5008) = 0;
      *(_QWORD*)(v2 + 5016) = 0;
      *(_QWORD*)(v2 + 5000) = 0;
    }
    v14 = *(_QWORD*)(v2 + 5080);
    *(_BYTE*)(v2 + 5056) = 0;
    if (v14 != 0) {
      if (*(_QWORD*)(v2 + 5072) == 0) {
        goto LABEL_37;
      }
      v15 = 368;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
        v15 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, *(_QWORD*)(v2 + 5072));
      v14 = *(_QWORD*)(v2 + 5080);
      if (v14 != 0) {
      LABEL_37:
        v16 = 368;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v14);
      }
      *(_QWORD*)(v2 + 5080) = 0;
      *(_QWORD*)(v2 + 5088) = 0;
      *(_QWORD*)(v2 + 5072) = 0;
    }
    v17 = *(_QWORD*)(v2 + 5152);
    *(_BYTE*)(v2 + 5128) = 0;
    if (v17 != 0) {
      if (*(_QWORD*)(v2 + 5144) == 0) {
        goto LABEL_46;
      }
      v18 = 368;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, *(_QWORD*)(v2 + 5144));
      v17 = *(_QWORD*)(v2 + 5152);
      if (v17 != 0) {
      LABEL_46:
        v19 = 368;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
          v19 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v17);
      }
      *(_QWORD*)(v2 + 5152) = 0;
      *(_QWORD*)(v2 + 5160) = 0;
      *(_QWORD*)(v2 + 5144) = 0;
    }
    *(_BYTE*)(v2 + 5200) = 0;
    *(_BYTE*)(v2 + 8) = 0;
  }
  return result;
}

__int64 Registration_6263d0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  _BYTE* v7;
  __int64 result;

  v7 = (_BYTE*)(a1 + 4096);
  *(_BYTE*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 4776) = 0;
  *(_QWORD*)a1 = GameData_1f8e518;
  memset(a1 + 16, 0, 4753, a4, a5, a6);
  v7[688] = 0;
  v7[689] = 0;
  v7[690] = 0;
  v7[691] = 0;
  v7[692] = 0;
  *(_WORD*)(a1 + 4792) = 0;
  *(_QWORD*)(a1 + 4796) = 0;
  *(_QWORD*)(a1 + 4808) = 0;
  *(_DWORD*)(a1 + 4816) = 0;
  nn_os_InitializeMutex(a1 + 4792, 1, 0);
  *(_WORD*)(a1 + 4824) = 0;
  *(_QWORD*)(a1 + 4840) = 0;
  *(_QWORD*)(a1 + 4828) = 0;
  *(_DWORD*)(a1 + 4848) = 0;
  nn_os_InitializeMutex(a1 + 4824, 1, 0);
  *(_WORD*)(a1 + 4856) = 0;
  *(_QWORD*)(a1 + 4872) = 0;
  *(_QWORD*)(a1 + 4860) = 0;
  *(_DWORD*)(a1 + 4880) = 0;
  nn_os_InitializeMutex(a1 + 4856, 1, 0);
  *(_WORD*)(a1 + 4888) = 0;
  *(_QWORD*)(a1 + 4904) = 0;
  *(_QWORD*)(a1 + 4892) = 0;
  *(_DWORD*)(a1 + 4912) = 0;
  nn_os_InitializeMutex(a1 + 4888, 1, 0);
  *(_QWORD*)(a1 + 4968) = 0;
  *(_DWORD*)(a1 + 4976) = 0;
  *(_QWORD*)(a1 + 4928) = 0;
  *(_QWORD*)(a1 + 4936) = 0;
  *(_QWORD*)(a1 + 4944) = 0;
  *(_WORD*)(a1 + 4952) = 0;
  *(_QWORD*)(a1 + 4920) = GameData_1f8e598;
  *(_QWORD*)(a1 + 4956) = 0;
  nn_os_InitializeMutex(a1 + 4952, 1, 0);
  v7[888] = 0;
  *(_QWORD*)(a1 + 5040) = 0;
  *(_DWORD*)(a1 + 5048) = 0;
  *(_QWORD*)(a1 + 5000) = 0;
  *(_QWORD*)(a1 + 5008) = 0;
  *(_QWORD*)(a1 + 5016) = 0;
  *(_WORD*)(a1 + 5024) = 0;
  *(_QWORD*)(a1 + 4992) = GameData_1f8e5c8;
  *(_QWORD*)(a1 + 5028) = 0;
  nn_os_InitializeMutex(a1 + 5024, 1, 0);
  v7[960] = 0;
  *(_QWORD*)(a1 + 5112) = 0;
  *(_DWORD*)(a1 + 5120) = 0;
  *(_QWORD*)(a1 + 5072) = 0;
  *(_QWORD*)(a1 + 5080) = 0;
  *(_QWORD*)(a1 + 5088) = 0;
  *(_WORD*)(a1 + 5096) = 0;
  *(_QWORD*)(a1 + 5064) = GameData_1f8e5f8;
  *(_QWORD*)(a1 + 5100) = 0;
  nn_os_InitializeMutex(a1 + 5096, 1, 0);
  v7[1032] = 0;
  *(_QWORD*)(a1 + 5184) = 0;
  *(_DWORD*)(a1 + 5192) = 0;
  *(_QWORD*)(a1 + 5144) = 0;
  *(_QWORD*)(a1 + 5152) = 0;
  *(_QWORD*)(a1 + 5160) = 0;
  *(_WORD*)(a1 + 5168) = 0;
  *(_QWORD*)(a1 + 5136) = GameData_1f8e628;
  *(_QWORD*)(a1 + 5172) = 0;
  result = nn_os_InitializeMutex(a1 + 5168, 1, 0);
  v7[1104] = 0;
  *(_QWORD*)(a1 + 5208) = 0;
  *(_DWORD*)(a1 + 5216) = 0;
  *(_BYTE*)(a1 + 8) = 0;
  GameData_21a60b8 = 1;
  return result;
}

_QWORD* Registration_626c40(__int64 a1)
{
  __int64 v2;
  _QWORD* result;
  int v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;

  v2 = as_g_script_manager;
  result = *(_QWORD**)(v2 +
                       8LL * (*(unsigned int (**)(__int64))(
                                 *(_QWORD*)as_g_thread_info + 72LL))(
                                 as_g_thread_info) +
                       4384);
  if (result != nullptr) {
    result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 472LL))(result);
    if (result != nullptr) {
      v4 = *(_DWORD*)(a1 + 8);
      result =
          X8CALL_X0(_QWORD*, GameRoutine_629620((void*)&v7, as_g_script_manager,
                                                *(_QWORD*)a1));
      if (v8 != 0x2000) {
        v5 = (_QWORD*)((char*)&as_g_context_slots + 16 * v8);
        v6 = v5[1];
        if (v6 != 0 && *v5 == v7 && (*(_BYTE*)(v6 + 326) & 1) == 0 &&
            v4 < 0x4000) {
          return (_QWORD*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(v6 + 24) +
                                                   48LL))(*(_QWORD*)(v6 + 24));
        }
      }
    }
  }
  return result;
}

__int64 Registration_6272c0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 i;
  __int64 v12;
  __int64 j;
  __int64 k;
  __int64 m;
  __int64 n;
  __int64 ii;
  _QWORD v18[7];
  __int64 v19;
  int v20;
  __int64 v21;

  v1 = result + 4096;
  v2 = result;
  GameData_21a60a8 = 0;
  ++GameData_21a60ac;
  if (*(_BYTE*)(result + 4786) == 1) {
    if ((*(_BYTE*)(result + 4785) & 1) == 0) {
      if ((*(_BYTE*)(result + 4784) & 1) != 0) {
        goto LABEL_6;
      }
      *(_BYTE*)(result + 4785) = 1;
    }
    *(_BYTE*)(result + 4786) = 0;
  }

LABEL_6:
  if (*(_BYTE*)(result + 4787) == 1) {
    if (*(_BYTE*)(result + 4785) == 1) {
      if ((*(_BYTE*)(result + 4784) & 1) != 0) {
        goto LABEL_11;
      }
      *(_BYTE*)(result + 4785) = 0;
    }
    *(_BYTE*)(result + 4787) = 0;
  }

LABEL_11:
  if (*(_BYTE*)(result + 4785) == 1) {
    result = nn_os_LockMutex(result + 4792);
  }
  v3 = *(_QWORD*)(v2 + 16);
  *(_DWORD*)(v2 + 280) = 0;
  if (v3 != 0) {
    v4 = 1;
    do {
      v3 = *(_QWORD*)(v3 + 48);
      *(_DWORD*)(v2 + 280) = v4++;
    } while (v3 != 0);
  }
  if (*(_BYTE*)(v1 + 689) == 1) {
    result = nn_os_UnlockMutex(v2 + 4792);
  }
  if (*(_BYTE*)(v1 + 689) == 1) {
    result = nn_os_LockMutex(v2 + 4792);
  }
  v5 = *(_QWORD*)(v2 + 16);
  if (v5 != 0) {
    v6 = (char*)as_g_context_slots_ptr;
    do {
      result = GameRoutine_607d20(v5);
      if ((result & 1) == 0) {
        v7 = *(unsigned int*)(v5 + 8);
        v20 = 0x2000;
        v19 = 0;
        if ((_DWORD)v7 != 0x2000) {
          v8 = &v6[16 * v7];
          if (*((_QWORD*)v8 + 1) == v5) {
            v20 = v7;
            v19 = *(_QWORD*)v8;
          }
        }
        v21 = v5;
        result = Registration_627640(v2, &v19);
      }
      v5 = *(_QWORD*)(v5 + 48);
    } while (v5 != 0);
  }
  if (*(_BYTE*)(v1 + 689) == 1) {
    result = nn_os_UnlockMutex(v2 + 4792);
  }
  if (*(_BYTE*)(v1 + 689) == 1) {
    result = nn_os_LockMutex(v2 + 4792);
  }
  v9 = v2 + 24;
  v10 = 0;
  *(_DWORD*)(v2 + 284) = 0;
  do {
    for (i = *(_QWORD*)(v9 + 8 * v10); i != 0; ++*(_DWORD*)(v2 + 284)) {
      *(_WORD*)(i + 2144) &= ~0x20u;
      i = *(_QWORD*)(i + 2200);
    }
    v12 = v9 + 8 * v10;
    for (j = *(_QWORD*)(v12 + 8); j != 0; ++*(_DWORD*)(v2 + 284)) {
      *(_WORD*)(j + 2144) &= ~0x20u;
      j = *(_QWORD*)(j + 2200);
    }
    for (k = *(_QWORD*)(v12 + 16); k != 0; ++*(_DWORD*)(v2 + 284)) {
      *(_WORD*)(k + 2144) &= ~0x20u;
      k = *(_QWORD*)(k + 2200);
    }
    for (m = *(_QWORD*)(v9 + 8 * v10 + 24); m != 0; ++*(_DWORD*)(v2 + 284)) {
      *(_WORD*)(m + 2144) &= ~0x20u;
      m = *(_QWORD*)(m + 2200);
    }
    v10 += 4;
  } while (v10 != 32);
  if (*(_BYTE*)(v1 + 689) == 1) {
    result = nn_os_UnlockMutex(v2 + 4792);
  }
  for (n = 0; n != 32; ++n) {
    if (*(_BYTE*)(v1 + 689) == 1) {
      result = nn_os_LockMutex(v2 + 4792);
    }
    for (ii = *(_QWORD*)(v9 + 8 * n); ii != 0; ii = *(_QWORD*)(ii + 2200)) {
      if ((*(_WORD*)(ii + 2144) & 0x60) == 0 && *(_DWORD*)(ii + 52) == 1) {
        if (*(_BYTE*)(v1 + 689) == 1) {
          nn_os_UnlockMutex(v2 + 4792);
        }
        v18[4] = 0;
        result = GameRoutine_627e70(v2, ii, 0, v18, 1);
        if (*(_BYTE*)(v1 + 689) == 1) {
          result = nn_os_LockMutex(v2 + 4792);
        }
      }
    }
    if (*(_BYTE*)(v1 + 689) == 1) {
      result = nn_os_UnlockMutex(v2 + 4792);
    }
  }
  return result;
}

__int64 Registration_629e60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char* v3;
  unsigned int* v4;
  __int64 v5;
  __int64 v6;
  char* v7;

  if (result != 0) {
    v1 = result;
    if (*(_BYTE*)(result + 325) == 1) {
      *(_WORD*)(result + 324) = 1;
      if (*(int*)(result + 968) >= 1) {
        v2 = 0;
        v3 = (char*)as_g_context_slots_ptr;
        v4 = (unsigned int*)(result + 9176);
        do {
          v6 = *v4;
          if ((_DWORD)v6 == 0x2000 ||
              *((_QWORD*)(v7 = &v3[16 * v6]) + 1) == 0) {
            v5 = 0;
          }
          else if (*(_QWORD*)v7 == *((_QWORD*)v4 - 1)) {
            v5 = *((_QWORD*)v7 + 1);
          }
          else {
            v5 = 0;
          }
          result = Registration_629e60(v5);
          ++v2;
          v4 += 6;
        } while (v2 < *(int*)(v1 + 968));
      }
    }
  }
  return result;
}

__int64 Registration_645d30(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
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
  __int64 result;
  int v25;

  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  v4 = a1 + 13404;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_BYTE*)(a1 + 240) = 0;
  *(_BYTE*)(a1 + 244) = 0;
  *(_BYTE*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_BYTE*)(a1 + 304) = 1;
  *(_DWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 512) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 536) = 0;
  *(_QWORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 552) = 0;
  *(_QWORD*)(a1 + 472) = 0x3C0000003CLL;
  *(_QWORD*)(a1 + 560) = 0;
  *(_DWORD*)(a1 + 480) = 5;
  GameRoutine_606890(a1 + 568);
  GameRoutine_5fe2f0(a1 + 12880);
  *(_DWORD*)(a1 + 13168) = 0;
  *(_QWORD*)(a1 + 13280) = 0;
  *(_QWORD*)(a1 + 13176) = 0;
  *(_QWORD*)(a1 + 13184) = 0;
  *(_QWORD*)(a1 + 13192) = 0;
  *(_QWORD*)(a1 + 13200) = 0;
  *(_QWORD*)(a1 + 13208) = 0;
  *(_QWORD*)(a1 + 13216) = 0;
  *(_QWORD*)(a1 + 13224) = 0;
  *(_QWORD*)(a1 + 13232) = 0;
  *(_QWORD*)(a1 + 13296) = *a2;
  v5 = *a2;
  *(_QWORD*)(a1 + 13304) = *a2;
  v6 = *a2;
  *(_QWORD*)(a1 + 13320) = v5;
  *(_QWORD*)(a1 + 13376) = 0;
  *(_QWORD*)(a1 + 13392) = 0;
  *(_DWORD*)(a1 + 13400) = 0;
  *(_BYTE*)v4 = 0;
  *(_QWORD*)(a1 + 13408) = 0;
  *(_QWORD*)(a1 + 13416) = 0;
  *(_QWORD*)(a1 + 13424) = 0;
  *(_QWORD*)(a1 + 13432) = 0;
  *(_QWORD*)(a1 + 13440) = 0;
  *(_QWORD*)(a1 + 13312) = v6;
  *(_QWORD*)(a1 + 13328) = v6;
  memset(a1 + 13464, 0, 473, v7, v8, v9);
  *(_BYTE*)(v4 + 533) = 0;
  v10 = GameData_2132418;
  *(_WORD*)(v4 + 536) = 0;
  *(_QWORD*)(a1 + 13944) = 0;
  *(_WORD*)(v4 + 548) = 0;
  v11 = v10 + 2;
  *(_QWORD*)(v4 + 552) = 0;
  *(_QWORD*)(a1 + 14000) = 0;
  *(_QWORD*)(a1 + 14016) = 0;
  *(_QWORD*)(a1 + 14024) = 0;
  *(_QWORD*)(a1 + 14032) = 0;
  *(_QWORD*)(a1 + 14040) = 0;
  *(_QWORD*)(a1 + 14048) = 0;
  *(_QWORD*)(a1 + 14056) = 0;
  *(_QWORD*)(a1 + 13456) = v10 + 2;
  *(_DWORD*)(a1 + 14064) = -1;
  memset(a1 + 14088, 0, 473, v12, v13, v14);
  *(_QWORD*)(a1 + 14080) = v11;
  *(_BYTE*)(v4 + 1157) = 0;
  *(_WORD*)(v4 + 1160) = 0;
  *(_QWORD*)(a1 + 14568) = 0;
  *(_WORD*)(v4 + 1172) = 0;
  *(_QWORD*)(v4 + 1176) = 0;
  *(_QWORD*)(a1 + 14624) = 0;
  *(_QWORD*)(a1 + 14640) = 0;
  *(_QWORD*)(a1 + 14648) = 0;
  *(_QWORD*)(a1 + 14656) = 0;
  *(_QWORD*)(a1 + 14664) = 0;
  *(_QWORD*)(a1 + 14672) = 0;
  *(_QWORD*)(a1 + 14680) = 0;
  *(_DWORD*)(a1 + 14688) = -1;
  memset(a1 + 14712, 0, 473, v15, v16, v17);
  *(_QWORD*)(a1 + 14704) = v11;
  *(_BYTE*)(v4 + 1781) = 0;
  *(_WORD*)(v4 + 1784) = 0;
  *(_QWORD*)(a1 + 15192) = 0;
  *(_WORD*)(v4 + 1796) = 0;
  *(_QWORD*)(v4 + 1800) = 0;
  *(_QWORD*)(a1 + 15248) = 0;
  *(_QWORD*)(a1 + 15264) = 0;
  *(_QWORD*)(a1 + 15272) = 0;
  *(_QWORD*)(a1 + 15280) = 0;
  *(_QWORD*)(a1 + 15288) = 0;
  *(_QWORD*)(a1 + 15296) = 0;
  *(_QWORD*)(a1 + 15304) = 0;
  *(_DWORD*)(a1 + 15312) = -1;
  memset(a1 + 15336, 0, 473, v18, v19, v20);
  *(_QWORD*)(a1 + 15328) = v11;
  *(_BYTE*)(v4 + 2405) = 0;
  *(_WORD*)(v4 + 2408) = 0;
  *(_QWORD*)(a1 + 15816) = 0;
  *(_WORD*)(v4 + 2420) = 0;
  *(_QWORD*)(v4 + 2424) = 0;
  *(_QWORD*)(a1 + 15872) = 0;
  *(_QWORD*)(a1 + 15888) = 0;
  *(_QWORD*)(a1 + 15896) = 0;
  *(_QWORD*)(a1 + 15904) = 0;
  *(_QWORD*)(a1 + 15912) = 0;
  *(_QWORD*)(a1 + 15920) = 0;
  *(_QWORD*)(a1 + 15928) = 0;
  *(_DWORD*)(a1 + 15936) = -1;
  result = memset(a1 + 15960, 0, 473, v21, v22, v23);
  *(_QWORD*)(a1 + 15952) = v11;
  *(_BYTE*)(v4 + 3029) = 0;
  *(_WORD*)(v4 + 3032) = 0;
  *(_QWORD*)(a1 + 16440) = 0;
  *(_WORD*)(v4 + 3044) = 0;
  *(_QWORD*)(v4 + 3048) = 0;
  *(_QWORD*)(a1 + 16496) = 0;
  *(_QWORD*)(a1 + 16512) = 0;
  *(_QWORD*)(a1 + 16520) = 0;
  *(_QWORD*)(a1 + 16528) = 0;
  *(_QWORD*)(a1 + 16536) = 0;
  *(_QWORD*)(a1 + 16544) = 0;
  *(_QWORD*)(a1 + 16552) = 0;
  *(_DWORD*)(v4 + 3156) = -1;
  *(_QWORD*)(a1 + 16576) = 0;
  *(_QWORD*)(a1 + 16584) = 0;
  *(_QWORD*)(a1 + 16648) = 0;
  *(_QWORD*)(a1 + 16656) = 0;
  *(_QWORD*)(a1 + 16608) = 0;
  *(_QWORD*)(a1 + 16592) = a1 + 16592;
  *(_QWORD*)(a1 + 16600) = a1 + 16592;
  *(_QWORD*)(a1 + 16616) = 0;
  *(_QWORD*)(a1 + 16624) = 0;
  *(_QWORD*)(a1 + 16632) = 0;
  *(_BYTE*)(v4 + 3284) = 0;
  *(_BYTE*)(v4 + 3292) = 0;
  *(_BYTE*)(v4 + 3296) = 0;
  *(_QWORD*)(a1 + 16704) = 0;
  *(_QWORD*)(a1 + 16664) = 0;
  *(_QWORD*)(a1 + 16672) = 0;
  game_g_frame_clock = a1;
  *(_QWORD*)(a1 + 16640) = a1 + 16648;
  *(_QWORD*)(a1 + 16677) = 0;
  v25 = *((_DWORD*)a2 + 1);
  GameData_22030f8 = *(_DWORD*)a2;
  GameData_22030fc = v25;
  return result;
}

__int64 Registration_646270(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  v1 = a1[2078];
  a1[2077] = 0;
  a1[2078] = 0;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = fw_memory_g_heap_manager_ptr;
  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 124, 16, 0);
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 56) = 0;
  v5 = a1[2079];
  *(_QWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  *(_QWORD*)(result + 112) = 0;
  *(_DWORD*)(result + 120) = 0;
  a1[2079] = result;
  *(_QWORD*)result = 0x43800000780LL;
  *(_QWORD*)(result + 8) = 0x43800000780LL;
  *(_QWORD*)(result + 72) = 0x3F80000000000009LL;
  *(_QWORD*)(result + 84) = 0x3F80000000000009LL;
  *(_QWORD*)(result + 96) = 0x3F80000000000009LL;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 108) = 0x3F80000000000009LL;
  *(_DWORD*)(result + 16) = 1024;
  *(_QWORD*)(result + 20) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 28) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 36) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 44) = 0x3F8000003F800000LL;
  *(_WORD*)(result + 56) = 257;
  *(_QWORD*)(result + 60) = 0x3F8000003EB33333LL;
  *(_BYTE*)(result + 58) = 1;
  *(_BYTE*)(result + 116) = 1;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
  }
  return result;
}

__int64 Registration_6484a0(_QWORD* a1)
{
  _QWORD* v1;
  _QWORD* v3;
  __int64 v4;
  _DWORD* v5;
  int v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* i;
  __int64 v12;
  __int64 v13;

  v1 = (_QWORD*)a1[2075];
  v3 = a1 + 2074;
  if (v1 != a1 + 2074) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v5 = (_DWORD*)v1[2];
      v6 = v5[2];
      if (v6 != 0) {
        v5[2] = v6 - 1;
        v1 = (_QWORD*)v1[1];
      }
      else {
        (*(void (**)(_DWORD*))(*(_QWORD*)v5 + 16LL))(v5);
        v7 = (_QWORD*)v1[1];
        *(_QWORD*)(*v1 + 8LL) = v7;
        *v7 = *v1;
        --a1[2076];
        v8 = v1[2];
        v1[2] = 0;
        if (v8 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
        }
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v9, v1);
        v1 = v7;
      }
    } while (v1 != v3);
  }
  v10 = (_QWORD*)a1[1650];
  for (i = (_QWORD*)a1[1651]; v10 != i; v10 += 2) {
    if (v10[1] != 0) {
      v12 = std___1___shared_weak_count_lock();
      if (v12 != 0) {
        v13 = v12;
        if (*v10 != 0) {
          GameRoutine_a6f7c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
      }
    }
  }
  return GameRoutine_a939e0(*(_QWORD*)(a1[1676] + 8LL), a1[1676] + 136LL,
                            a1[1676] + 176LL);
}

__int64 Registration_649250(__int64 a1)
{
  __int64 result;
  int v3;
  bool v4;
  int v5;
  __int64 v6;

  result = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 528) + 32LL))(
      *(_QWORD*)(a1 + 528), *(_QWORD*)(a1 + 13392));
  if (*(_BYTE*)(a1 + 13404) == 1) {
    v3 = *(_DWORD*)(a1 + 13400);
    v4 = v3 < -1;
    v5 = ((_BYTE)v3 + 1) & 1;
    if (v4) {
      v5 = -v5;
    }
    v6 = *(_QWORD*)(a1 + 8LL * v5 + 536);
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v6 + 32LL))(
        v6, *(_QWORD*)(a1 + 13392));
  }
  else {
    *(_BYTE*)(a1 + 13404) = 1;
  }
  *(_DWORD*)(a1 + 13168) = 0;
  return result;
}

__int64 Registration_649700(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 i;
  __int64 v9;
  atomic_ullong* v10;

  v3 = *a2;
  v2 = a2[1];
  v4 = result;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(result + 13176);
    v6 = *(_QWORD*)(result + 13184);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    v7 = (_QWORD*)(result + 13184);
    if (v5 != v6) {
      goto LABEL_5;
    }
  }
  else {
    v5 = *(_QWORD*)(result + 13176);
    v6 = *(_QWORD*)(result + 13184);
    v7 = (_QWORD*)(result + 13184);
    if (v5 != v6) {
    LABEL_5:
      while (*(_QWORD*)(v5 + 8) != v3) {
        v5 += 72;
        if (v5 == v6) {
          v5 = v6;
          goto LABEL_14;
        }
      }
    }
  }
  if (v5 != v6) {
    for (i = v5 + 72; i != v6; i += 72) {
      if (*(_QWORD*)(i + 8) != v3) {
        result = GameRoutine_64d860(v5, i);
        v5 += 72;
      }
    }
  }

LABEL_14:
  v9 = *(_QWORD*)(v4 + 13184);
  if (v5 != v9) {
    do {
      v9 -= 72;
      result = Registration_64a6c0(v9);
    } while (v9 != v5);
    *v7 = v5;
  }
  if (v2 != 0) {
    v10 = (atomic_ullong*)(v2 + 8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        return result;
      }
    LABEL_22:
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      return std___1___shared_weak_count___release_weak(v2);
    }
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    result = std___1___shared_weak_count___release_weak(v2);
    if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_22;
    }
  }
  return result;
}

__int64 Registration_649a00(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64** v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* i;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  atomic_ullong* v18;

  v3 = *a2;
  v2 = a2[1];
  v4 = result;
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(__int64**)(result + 13200);
    v6 = *(__int64**)(result + 13208);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    v7 = (__int64**)(result + 13208);
    if (v5 == v6) {
      goto LABEL_19;
    }
  }
  else {
    v5 = *(__int64**)(result + 13200);
    v6 = *(__int64**)(result + 13208);
    v7 = (__int64**)(result + 13208);
    if (v5 == v6) {
      goto LABEL_19;
    }
  }
  if (v3 != 0) {
    do {
      result = v5[1];
      if (result != 0) {
        result = std___1___shared_weak_count_lock();
        if (result != 0) {
          v8 = *v5;
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v9 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
            result = std___1___shared_weak_count___release_weak(v9);
          }
          if (v8 == v3) {
            goto LABEL_19;
          }
        }
      }
      v5 += 2;
    } while (v5 != v6);
  LABEL_34:
    v5 = v6;
    goto LABEL_35;
  }
  while (1) {
    result = v5[1];
    if (result == 0) {
      break;
    }
    result = std___1___shared_weak_count_lock();
    if (result == 0) {
      break;
    }
    v11 = *v5;
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v11 == 0) {
        break;
      }
    }
    else {
      v10 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = std___1___shared_weak_count___release_weak(v10);
      if (v11 == 0) {
        break;
      }
    }
    v5 += 2;
    if (v5 == v6) {
      goto LABEL_34;
    }
  }

LABEL_19:
  if (v5 != v6) {
    for (i = v5 + 2; i != v6; i += 2) {
      result = i[1];
      if (result != 0 && (result = std___1___shared_weak_count_lock()) != 0) {
        v13 = *i;
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v13 != v3) {
            goto LABEL_30;
          }
        }
        else {
          v16 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak(v16);
          if (v13 != v3) {
          LABEL_30:
            v14 = *i;
            v15 = i[1];
            *i = 0;
            i[1] = 0;
            result = v5[1];
            *v5 = v14;
            v5[1] = v15;
            if (result != 0) {
              result = std___1___shared_weak_count___release_weak(result);
            }
            v5 += 2;
          }
        }
      }
      else if (v3 != 0) {
        goto LABEL_30;
      }
    }
  }

LABEL_35:
  v17 = *(__int64**)(v4 + 13208);
  if (v5 != v17) {
    do {
      result = *(v17 - 1);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v17 -= 2;
    } while (v17 != v5);
    *v7 = v5;
  }
  if (v2 != 0) {
    v18 = (atomic_ullong*)(v2 + 8);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (atomic_fetch_add(v18, 0xFFFFFFFFFFFFFFFFLL) != 0) {
        return result;
      }
    LABEL_46:
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      return std___1___shared_weak_count___release_weak(v2);
    }
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    result = std___1___shared_weak_count___release_weak(v2);
    if (atomic_fetch_add(v18, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_46;
    }
  }
  return result;
}

_DWORD* Registration_649ee0(_DWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BOOL4 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  char v12;
  __int64 v13;
  __int64 i;
  __int64 v15;
  __int64 j;
  __int64 v17;
  __int64 k;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  int v38;
  _QWORD* v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  _QWORD* v46;
  __int64 v47;
  _QWORD* v48;
  int v49;
  int v50;
  _QWORD v51[2];
  _BYTE v52[12];
  int v53;
  __int64 v54;
  __int64 v55;
  char v56;
  _QWORD* v57;

  v1 = (__int64)result;
  v2 = (unsigned int)result[3310];
  v3 = (unsigned int)result[3311];
  v7 = result[3328] != result[3332] || result[3329] != result[3333] ||
       result[3326] != result[3330] || result[3327] != result[3331];
  if ((unsigned int)v2 > 6) {
    v8 = 0;
    if ((unsigned int)v3 > 6) {
    LABEL_15:
      v9 = 0;
      if ((unsigned int)v2 > 6) {
        goto LABEL_16;
      }
    LABEL_20:
      v10 = GameData_1b36694[v2];
      if ((unsigned int)v3 > 6) {
        goto LABEL_17;
      }
      goto LABEL_21;
    }
  }
  else {
    v8 = GameData_1b36664[v2];
    if ((unsigned int)v3 > 6) {
      goto LABEL_15;
    }
  }
  v9 = GameData_1b36664[v3];
  if ((unsigned int)v2 <= 6) {
    goto LABEL_20;
  }

LABEL_16:
  v10 = 0;
  if ((unsigned int)v3 > 6) {
  LABEL_17:
    v11 = 0;
    goto LABEL_22;
  }

LABEL_21:
  v11 = GameData_1b36694[v3];

LABEL_22:
  v49 = v11;
  v50 = v10;
  if (v7) {
    v12 = 1;
  }
  else {
    v12 = *((_BYTE*)result + 16696);
    if (v8 == v9 && v10 == v11 && (result[4174] & 1) == 0) {
      v12 = 0;
      if ((_DWORD)v2 == (_DWORD)v3) {
        goto LABEL_73;
      }
    LABEL_32:
      if (v8 == v9) {
        v20 = *(_DWORD*)(v1 + 13244);
        *(_DWORD*)(v1 + 13240) = v20;
      }
      else {
        v19 = *(_QWORD*)(v1 + 400);
        *(_QWORD*)(v1 + 392) = 0;
        *(_QWORD*)(v1 + 400) = 0;
        if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
        }
        *(_DWORD*)(v1 + 13240) = *(_DWORD*)(v1 + 13244);
        GameRoutine_6478c0(v1);
        v20 = *(_DWORD*)(v1 + 13240);
      }
      if ((unsigned int)(v20 - 3) > 3) {
        v21 = *(_QWORD*)(v1 + 13232);
        LOBYTE(v51[0]) = 20;
        strcpy((char*)v51 + 1, "co_o_rbwcg");
        v57 = v51;
        *(_DWORD*)(GameRoutine_a93ea0(v21, v51, std___1_piecewise_construct_ptr,
                                      &v57, &v56) +
                   40) = 0;
        if ((v51[0] & 1) != 0) {
          goto LABEL_59;
        }
      }
      else {
        v21 = *(_QWORD*)(v1 + 13232);
        LOBYTE(v51[0]) = 20;
        strcpy((char*)v51 + 1, "co_o_rbwcg");
        v57 = v51;
        if ((unsigned int)(v20 - 5) > 1) {
          v22 = GameRoutine_a93ea0(v21, v51, std___1_piecewise_construct_ptr,
                                   &v57, &v56);
          v23 = 1;
        }
        else {
          v22 = GameRoutine_a93ea0(v21, v51, std___1_piecewise_construct_ptr,
                                   &v57, &v56);
          v23 = 2;
        }
        *(_DWORD*)(v22 + 40) = v23;
        if ((v51[0] & 1) != 0) {
        LABEL_59:
          if (*(_QWORD*)v52 != 0) {
            v24 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v24 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, *(_QWORD*)v52);
          }
        }
      }
      *(_BYTE*)(v21 + 40) = 1;
      v25 = *(_DWORD*)(v1 + 13240) - 2;
      if (v25 > 4) {
        v26 = 0;
      }
      else {
        v26 = GameData_1b36680[v25];
      }
      v27 = *(_QWORD*)(v1 + 13232);
      LOBYTE(v51[0]) = 20;
      strcpy((char*)v51 + 1, "co_o_omihd");
      v57 = v51;
      v28 = GameRoutine_a93ea0(v27, v51, std___1_piecewise_construct_ptr, &v57,
                               &v56);
      v29 = v51[0];
      *(_DWORD*)(v28 + 40) = v26;
      if ((v29 & 1) != 0 && *(_QWORD*)v52 != 0) {
        v30 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, *(_QWORD*)v52);
      }
      *(_BYTE*)(v27 + 40) = 1;
      result = *(_DWORD**)(v1 + 13280);
      if (result != nullptr) {
        result = (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 48LL))(
            result);
      }
      goto LABEL_73;
    }
  }
  result = (_DWORD*)(*(__int64 (**)(__int64))GameData_212c428[0])(
      *((_QWORD*)result + 34) + 8LL);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22030f0,
                            memory_order_acquire) &
       1) == 0) {
    result = (_DWORD*)__cxa_guard_acquire(&GameData_22030f0);
    if ((_DWORD)result != 0) {
      GameRoutine_2b0(GameData_212e730, &GameData_2203088, &GameData_1f50948);
      result = (_DWORD*)__cxa_guard_release(&GameData_22030f0);
    }
  }
  v13 = GameData_22030a0;
  for (i = GameData_22030a8; i != v13; i -= 48) {
    result = *(_DWORD**)(i - 40);
    *(_QWORD*)(i - 40) = 0;
    if (result != nullptr) {
      result =
          (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 8LL))(result);
    }
  }
  GameData_22030a8 = v13;
  v15 = GameData_22030b8;
  for (j = GameData_22030c0; j != v15; j -= 48) {
    result = *(_DWORD**)(j - 40);
    *(_QWORD*)(j - 40) = 0;
    if (result != nullptr) {
      result =
          (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 8LL))(result);
    }
  }
  GameData_22030c0 = v15;
  v17 = GameData_22030d0;
  for (k = GameData_22030d8; k != v17; k -= 24) {
    result = *(_DWORD**)(k - 16);
    *(_QWORD*)(k - 16) = 0;
    if (result != nullptr) {
      result =
          (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 8LL))(result);
    }
  }
  GameData_22030d8 = v17;
  if (v7) {
    result = *(_DWORD**)(v1 + 13376);
    *(_DWORD*)(v1 + 13304) = *(_DWORD*)(v1 + 13320);
    *(_QWORD*)(v1 + 13308) = *(_QWORD*)(v1 + 13324);
    *(_DWORD*)(v1 + 13316) = *(_DWORD*)(v1 + 13332);
    if (result != nullptr) {
      result =
          (_DWORD*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)result + 48LL))(result);
    }
  }
  if ((_DWORD)v2 != (_DWORD)v3) {
    goto LABEL_32;
  }

LABEL_73:
  if ((v12 & 1) != 0) {
    result = *(_DWORD**)(v1 + 16672);
    if (result != nullptr) {
      v31 = result[532];
      v32 = *(_DWORD*)(v1 + 13316);
      v33 = *(_QWORD*)(v1 + 256) + 8LL;
      *(_DWORD*)&v52[8] = *(_DWORD*)(v1 + 13312);
      v34 = *(_QWORD*)(v1 + 13304);
      v53 = v32;
      LODWORD(v54) = v31;
      *(_QWORD*)v52 = v34;
      v35 = *(_QWORD*)(*(_QWORD*)(v1 + 552) + 16LL);
      BYTE4(v54) = 0;
      v51[0] = v33;
      v51[1] = v35;
      if (*(_BYTE*)(v1 + 16696) == 1) {
        v36 = *(_BYTE*)(v1 + 16692);
        LODWORD(v54) = *(_DWORD*)(v1 + 16688);
        BYTE4(v54) = v36;
        *(_DWORD*)(v1 + 16680) = v54;
        *(_BYTE*)(v1 + 16684) = v36;
      }
      result = (_DWORD*)GameRoutine_18df280(result, v51);
      if (*(_BYTE*)(v1 + 16696) == 1) {
        *(_BYTE*)(v1 + 16696) = 0;
      }
    }
  }
  if (v7) {
    v37 = *(_QWORD*)(v1 + 464);
    *(_QWORD*)(v1 + 464) = 0;
    if (v37 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v37 + 8LL))(v37);
    }
    v38 = *(_DWORD*)(v1 + 13316);
    v51[1] = 0x100000001LL;
    *(_DWORD*)v52 = 0;
    *(_DWORD*)&v52[7] = 0;
    *(_DWORD*)&v52[4] = 4;
    LODWORD(v51[0]) = *(_DWORD*)(v1 + 13312);
    HIDWORD(v51[0]) = v38;
    v52[8] = 1;
    v54 = *(_QWORD*)(v1 + 360);
    v55 = *(_QWORD*)(*(_QWORD*)(v1 + 552) + 16LL);
    *(struct PseudoSret*)(&v57) = GameRoutine_53c20(v51);
    v39 = v57;
    v40 = *(_QWORD*)(v1 + 464);
    v57 = nullptr;
    *(_QWORD*)(v1 + 464) = v39;
    if (v40 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v40 + 8LL))(v40);
      v41 = v57;
      v57 = nullptr;
      if (v41 != nullptr) {
        (*(void (**)(_QWORD*))(*v41 + 8LL))(v41);
      }
    }
    (*(void (**)(_QWORD, const char*, __int64))(**(_QWORD**)(v1 + 464) + 24LL))(
        *(_QWORD*)(v1 + 464), "LayerDebug", 10);
  }
  else if (v50 == v49) {
    return result;
  }
  v42 = *(_QWORD*)(v1 + 456);
  *(_QWORD*)(v1 + 456) = 0;
  if (v42 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
  }
  v43 = 0;
  v51[1] = 0x100000001LL;
  *(_QWORD*)v52 = 0;
  v44 = *(unsigned int*)(v1 + 13240);
  *(_DWORD*)&v52[7] = 0;
  if ((unsigned int)v44 <= 6) {
    v43 = GameData_1b36694[v44];
  }
  *(_DWORD*)&v52[4] = v43;
  v45 = *(_DWORD*)(v1 + 13316);
  LODWORD(v51[0]) = *(_DWORD*)(v1 + 13312);
  HIDWORD(v51[0]) = v45;
  v52[8] = 1;
  v54 = *(_QWORD*)(v1 + 360);
  v55 = *(_QWORD*)(*(_QWORD*)(v1 + 552) + 16LL);
  *(struct PseudoSret*)(&v57) = GameRoutine_53c20(v51);
  v46 = v57;
  v47 = *(_QWORD*)(v1 + 456);
  v57 = nullptr;
  *(_QWORD*)(v1 + 456) = v46;
  if (v47 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v47 + 8LL))(v47);
    v48 = v57;
    v57 = nullptr;
    if (v48 != nullptr) {
      (*(void (**)(_QWORD*))(*v48 + 8LL))(v48);
    }
  }
  return (_DWORD*)(*(__int64 (**)(_QWORD, const char*, __int64))(
      **(_QWORD**)(v1 + 456) + 24LL))(*(_QWORD*)(v1 + 456), "Layer2D", 7);
}

__int64 Registration_64f200(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;
  int v5;
  int v6;
  float* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  float v11;
  float v12;
  int v13;
  float v14;
  float v15;
  int v16;

  v1 = *(_QWORD*)(a1 + 352);
  v2 = a1;
  v3 = a1 + 336;
  v16 = 0;
  if (v1 != 0) {
    a1 = v1;
  }
  (**(void (***)(__int64, int*, __int64))a1)(a1, &v16, v3);
  result = *(_QWORD*)(v2 + 48);
  if (result != 0) {
    result = (*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)result + 48LL))(
        result, &v16, v2 + 336);
  }
  v5 = *(_DWORD*)(v2 + 64);
  v6 = v16;
  v7 = (float*)(v2 + 208);
  v8 = 0;
  v9 = v16 & ~v5;
  *(_DWORD*)(v2 + 72) = v9;
  *(_DWORD*)(v2 + 76) = v5 & ~v6;
  *(_DWORD*)(v2 + 64) = v6;
  *(_DWORD*)(v2 + 68) = v9;
  v10 = as_g_base_frame_counter;
  while (((1 << v8) & v6) == 0) {
    *(v7 - 32) = 0.0;
    *(v7 - 1) = 0.0;
    if (v8 == 30) {
      return result;
    }
  LABEL_16:
    v13 = 1 << (v8 | 1);
    if ((v13 & v6) != 0) {
      v14 = *(v7 - 31);
      if ((int)v14 >= 10) {
        v15 = *v7;
        if ((int)*v7 >= 4) {
          v15 = v15 + -4.0;
          v9 |= v13;
          *(_DWORD*)(v2 + 68) = v9;
          *v7 = v15;
        }
        *v7 = *(float*)(v10 + 48) + v15;
      }
      *(v7 - 31) = *(float*)(v10 + 48) + v14;
    }
    else {
      *(v7 - 31) = 0.0;
      *v7 = 0.0;
    }
    v8 += 2;
    v7 += 2;
  }
  v11 = *(v7 - 32);
  if ((int)v11 >= 10) {
    v12 = *(v7 - 1);
    if ((int)v12 >= 4) {
      v12 = v12 + -4.0;
      v9 |= 1 << v8;
      *(_DWORD*)(v2 + 68) = v9;
      *(v7 - 1) = v12;
    }
    *(v7 - 1) = *(float*)(v10 + 48) + v12;
  }
  *(v7 - 32) = *(float*)(v10 + 48) + v11;
  if (v8 != 30) {
    goto LABEL_16;
  }
  return result;
}

__int64 Registration_64f380(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;

  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_DWORD*)(a1 + 360) = 1056964608;
  v7 = memset(a1 + 64, 0, 264, a4, a5, a6);
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)a1 = &hid_JoyPad_vtable;
  *(_DWORD*)(a1 + 375) = 0;
  nn_hid_InitializeNpad(v7);
  nn_hid_SetSupportedNpadIdType(&GameData_1b366c0, 3);
  nn_hid_SetSupportedNpadStyleSet(7);
  nn_hid_SetNpadJoyHoldType(1);
  Registration_617d10();
  v8 = fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      568, 16, 0);
  result = Registration_617aa0(v9);
  v11 = *(_QWORD*)(a1 + 368);
  *(_QWORD*)(a1 + 368) = v9;
  if (v11 != 0) {
    Registration_617280((_QWORD*)(v11 + 288));
    Registration_617280((_QWORD*)(v11 + 24));
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12, v11);
  }
  return result;
}

__int64 Registration_64f840(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  char NpadStyleSetERKj;
  bool v8;
  char v9;
  char v10;
  _BOOL4 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;

  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  Registration_64f380(a1 + 208, a2, a3, a4, a5, a6);
  Registration_616da0(a1 + 600);
  *(_QWORD*)(a1 + 792) = 0;
  *(_QWORD*)(a1 + 680) = a1;
  *(_QWORD*)(a1 + 688) = 0;
  *(_QWORD*)(a1 + 696) = 0;
  *(_QWORD*)(a1 + 704) = 0;
  *(_QWORD*)(a1 + 712) = 0;
  *(_QWORD*)(a1 + 720) = 0;
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  *(_QWORD*)(a1 + 797) = 0;
  *(_QWORD*)(a1 + 744) = 0;
  *(_QWORD*)(a1 + 752) = 0;
  *(_QWORD*)(a1 + 760) = 0;
  *(_QWORD*)(a1 + 768) = 0;
  *(_QWORD*)(a1 + 776) = 0;
  *(_QWORD*)(a1 + 784) = 0;
  *(_QWORD*)(a1 + 880) = 0;
  *(_QWORD*)(a1 + 872) = 0;
  *(_QWORD*)(a1 + 864) = 0;
  *(_QWORD*)(a1 + 856) = 0;
  *(_WORD*)(a1 + 805) = 1;
  *(_BYTE*)(a1 + 807) = 1;
  *(_BYTE*)(a1 + 901) = 1;
  *(_QWORD*)(a1 + 848) = 0;
  *(_QWORD*)(a1 + 840) = 0;
  *(_QWORD*)(a1 + 832) = 0;
  *(_QWORD*)(a1 + 824) = 0;
  *(_QWORD*)(a1 + 816) = 0;
  *(_QWORD*)(a1 + 808) = 0;
  *(_QWORD*)(a1 + 904) = 0;
  *(_WORD*)(a1 + 902) = 256;
  *(_QWORD*)(a1 + 893) = 0;
  *(_QWORD*)(a1 + 888) = 0;
  *(_DWORD*)(a1 + 936) = 0;
  *(_DWORD*)(a1 + 980) = 0;
  *(_BYTE*)(a1 + 976) = 0;
  *(_QWORD*)(a1 + 968) = 0;
  *(_QWORD*)(a1 + 960) = 0;
  *(_QWORD*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_QWORD*)(a1 + 912) = 0x463B800041F00000LL;
  *(_QWORD*)(a1 + 920) = 0x41A00000BF4CCCCDLL;
  *(_QWORD*)(a1 + 928) = 1123024896;
  *(_WORD*)(a1 + 940) = 257;
  nn_os_InitializeReaderWriterLock(a1 + 984);
  *(_DWORD*)(a1 + 1032) = 0;
  nn_os_InitializeTimerEvent(a1 + 1040, 1);
  *(_QWORD*)(a1 + 952) = 0;
  *(_QWORD*)(a1 + 944) = 0;
  *(_DWORD*)(a1 + 1104) = 0;
  *(_WORD*)(a1 + 1108) = 0;
  v18 = 0;
  NpadStyleSetERKj = nn_hid_GetNpadStyleSet(&v18);
  if ((NpadStyleSetERKj & 2) != 0) {
    v16 = 0;
    v17 = 0;
    v14 = 0;
    v15 = 0;
    v13 = 0;
    nn_hid_GetNpadState_1a0a360(&v13, &v18);
  LABEL_6:
    v8 = v17 & 1;
    goto LABEL_8;
  }
  if ((NpadStyleSetERKj & 4) == 0) {
    if ((NpadStyleSetERKj & 1) == 0) {
      v8 = false;
      goto LABEL_8;
    }
    v16 = 0;
    v17 = 0;
    v14 = 0;
    v15 = 0;
    v13 = 0;
    nn_hid_GetNpadState_1a0a380(&v13, &v18);
    goto LABEL_6;
  }
  v16 = 0;
  v17 = 0;
  v14 = 0;
  v15 = 0;
  v13 = 0;
  nn_hid_GetNpadState_1a0a370(&v13, &v18);
  v8 = (~(_DWORD)v17 & 0x14) == 0;

LABEL_8:
  *(_BYTE*)(a1 + 1105) = v8;
  *(_BYTE*)(a1 + 1106) = 0;
  v18 = 32;
  v9 = nn_hid_GetNpadStyleSet(&v18);
  if ((v9 & 2) != 0) {
    v16 = 0;
    v17 = 0;
    v14 = 0;
    v15 = 0;
    v13 = 0;
    nn_hid_GetNpadState_1a0a360(&v13, &v18);
  }
  else {
    if ((v9 & 4) != 0) {
      v16 = 0;
      v17 = 0;
      v14 = 0;
      v15 = 0;
      v13 = 0;
      nn_hid_GetNpadState_1a0a370(&v13, &v18);
      v11 = (~(_DWORD)v17 & 0x14) == 0;
      goto LABEL_15;
    }
    if ((v9 & 1) == 0) {
      v10 = *(_BYTE*)(a1 + 1105);
      LOBYTE(v11) = 0;
      *(_BYTE*)(a1 + 1107) = 0;
      goto LABEL_18;
    }
    v16 = 0;
    v17 = 0;
    v14 = 0;
    v15 = 0;
    v13 = 0;
    nn_hid_GetNpadState_1a0a380(&v13, &v18);
  }
  v11 = v17 & 1;

LABEL_15:
  v10 = *(_BYTE*)(a1 + 1105);
  *(_BYTE*)(a1 + 1107) = v11;
  if (v11 && (v10 & 1) != 0) {
    LOBYTE(v11) = 0;
    v10 = 0;
    *(_BYTE*)(a1 + 1107) = 0;
    *(_BYTE*)(a1 + 1105) = 0;
  }

LABEL_18:
  if (!v11 && (v10 & 1) == 0) {
    *(_BYTE*)(a1 + 1107) = 1;
    *(_BYTE*)(a1 + 1105) = 1;
  }
  result = nn_oe_GetOperationMode();
  *(_BYTE*)(a1 + 1109) = (_DWORD)result == 0;
  return result;
}

__int64 Registration_64fb00(__int64 a1)
{
  __int64* v2;
  __int64* i;
  __int64 v4;
  __int64* v5;
  __int64* j;
  __int64 v7;
  __int64* v8;
  __int64* k;
  __int64 v10;
  int v11;
  char NpadStyleSetERKj;
  int v13;
  char v14;
  int v15;
  char v16;
  int v17;
  _BOOL4 v18;
  __int64 v19;
  char v20;
  int v21;
  _BOOL4 v22;
  int v23;
  bool v24;
  char v25;
  int v26;
  int v27;
  char v28;
  char v29;
  bool v30;
  char v31;
  bool v32;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;

  GameRoutine_1990c40(a1 + 712);
  Registration_64f200(a1 + 208);
  v2 = *(__int64**)(a1 + 600);
  for (i = *(__int64**)(a1 + 608); v2 != i;
       *(_DWORD*)(v4 + 1544) = nn_hid_GetSixAxisSensorStates(v4 + 8, 16, v4)) {
    v4 = *v2++;
  }
  v5 = *(__int64**)(a1 + 624);
  for (j = *(__int64**)(a1 + 632); v5 != j;
       *(_DWORD*)(v7 + 1544) = nn_hid_GetSixAxisSensorStates(v7 + 8, 16, v7)) {
    v7 = *v5++;
  }
  v8 = *(__int64**)(a1 + 648);
  for (k = *(__int64**)(a1 + 656); v8 != k;
       *(_DWORD*)(v10 + 1544) =
           nn_hid_GetSixAxisSensorStates(v10 + 8, 16, v10)) {
    v10 = *v8++;
  }
  v11 = *(_DWORD*)(a1 + 272);
  v39 = 0;
  *(_DWORD*)(a1 + 944) = v11;
  *(_QWORD*)(a1 + 948) = *(_QWORD*)(a1 + 276);
  *(_DWORD*)(a1 + 956) = *(_DWORD*)(a1 + 284);
  *(_QWORD*)(a1 + 960) = *(_QWORD*)(a1 + 544);
  *(_QWORD*)(a1 + 968) = *(_QWORD*)(a1 + 552);
  NpadStyleSetERKj = nn_hid_GetNpadStyleSet(&v39);
  if ((NpadStyleSetERKj & 2) != 0) {
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    nn_hid_GetNpadState_1a0a360(&v34, &v39);
  LABEL_12:
    v13 = v38 & 1;
    goto LABEL_14;
  }
  if ((NpadStyleSetERKj & 4) == 0) {
    if ((NpadStyleSetERKj & 1) == 0) {
      v13 = 0;
      goto LABEL_14;
    }
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    nn_hid_GetNpadState_1a0a380(&v34, &v39);
    goto LABEL_12;
  }
  v37 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v34 = 0;
  nn_hid_GetNpadState_1a0a370(&v34, &v39);
  v13 = (~(_DWORD)v38 & 0x14) == 0;

LABEL_14:
  v39 = 1;
  v14 = nn_hid_GetNpadStyleSet(&v39);
  if ((v14 & 2) != 0) {
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    nn_hid_GetNpadState_1a0a360(&v34, &v39);
  LABEL_19:
    v15 = v38 & 1;
    goto LABEL_21;
  }
  if ((v14 & 4) == 0) {
    if ((v14 & 1) == 0) {
      v15 = 0;
      goto LABEL_21;
    }
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    nn_hid_GetNpadState_1a0a380(&v34, &v39);
    goto LABEL_19;
  }
  v37 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v34 = 0;
  nn_hid_GetNpadState_1a0a370(&v34, &v39);
  v15 = (~(_DWORD)v38 & 0x14) == 0;

LABEL_21:
  v39 = 32;
  v16 = nn_hid_GetNpadStyleSet(&v39);
  if ((v16 & 2) != 0) {
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    nn_hid_GetNpadState_1a0a360(&v34, &v39);
    goto LABEL_26;
  }
  if ((v16 & 4) == 0) {
    if ((v16 & 1) == 0) {
      v17 = 0;
      v18 = false;
      goto LABEL_31;
    }
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    nn_hid_GetNpadState_1a0a380(&v34, &v39);
  LABEL_26:
    v19 = v35;
    v17 = v38 & 1;
    v18 = false;
    if ((v38 & 1) == 0) {
      goto LABEL_31;
    }
    goto LABEL_29;
  }
  v37 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v34 = 0;
  nn_hid_GetNpadState_1a0a370(&v34, &v39);
  v19 = v35;
  v17 = (~(_DWORD)v38 & 0x14) == 0;
  v18 = false;
  if ((~(_DWORD)v38 & 0x14) == 0) {
  LABEL_29:
    if (((unsigned __int8)v13 & (unsigned __int8)GameData_226b000) != 0) {
      v17 = 1;
      v18 = v19 != 0;
    }
  }

LABEL_31:
  v39 = 0;
  v20 = nn_hid_GetNpadStyleSet(&v39);
  v21 = 0;
  if ((v20 & 4) != 0) {
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    nn_hid_GetNpadState_1a0a370(&v34, &v39);
    v21 = ((v38 & 4) == 0) ^ ((v38 & 0x10) == 0);
  }
  if ((*(_BYTE*)(a1 + 1108) & 1) != 0) {
    goto LABEL_53;
  }
  if (*(unsigned __int8*)(a1 + 1105) == v13 &&
      *(unsigned __int8*)(a1 + 1106) == v15) {
    v22 = *(unsigned __int8*)(a1 + 1107) != v17 || v18;
    if ((v21 | v22) != 1) {
      goto LABEL_53;
    }
  }
  v23 = *(_DWORD*)(a1 + 1032);
  if (v23 == 2) {
    v24 = (unsigned int)nn_oe_GetOperationMode() != 0;
    if ((v13 | v17) != 1 || (v24 & *(_BYTE*)(a1 + 1109)) != 0) {
      nn_os_StartOneShotTimerEvent(a1 + 1040, 5000000000LL);
      v25 = 1;
      goto LABEL_52;
    }
    goto LABEL_51;
  }
  if (v23 != 1) {
    if (v23 != 0) {
      goto LABEL_53;
    }
    goto LABEL_51;
  }
  if (((v13 | v17) & 1) == 0) {
  LABEL_51:
    nn_os_SignalTimerEvent(a1 + 1040);
    v25 = 0;
  LABEL_52:
    *(_BYTE*)(a1 + 1104) = 0;
    *(_BYTE*)(a1 + 1108) = v25;
  }

LABEL_53:
  if ((nn_os_TryWaitTimerEvent(a1 + 1040) & 1) != 0) {
    if (*(_BYTE*)(a1 + 1104) == 1) {
      nn_os_StartOneShotTimerEvent(a1 + 1040, 5000000000LL);
      *(_BYTE*)(a1 + 1104) = 0;
    }
    else {
      nn_hid_ControllerSupportArg_SetDefault(&v34);
      BYTE5(v34) = 1;
      if ((unsigned int)nn_hid_ShowControllerSupport(&v34) == 0) {
        v28 = 0;
        v27 = 0;
        goto LABEL_62;
      }
      nn_os_SignalTimerEvent(a1 + 1040);
    }
    v28 = 1;
    v27 = 1;
  LABEL_62:
    *(_BYTE*)(a1 + 1108) = v28;
    goto LABEL_63;
  }
  v26 = v13 | v17;
  v27 = 1;
  if (v26 == 1 && (*(_BYTE*)(a1 + 1108) & 1) != 0) {
    nn_os_StopTimerEvent(a1 + 1040);
    v28 = 0;
    *(_BYTE*)(a1 + 1104) = 0;
    goto LABEL_62;
  }

LABEL_63:
  v39 = 0;
  v29 = nn_hid_GetNpadStyleSet(&v39);
  if ((v29 & 2) != 0) {
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    nn_hid_GetNpadState_1a0a360(&v34, &v39);
  LABEL_68:
    v30 = v38 & 1;
    goto LABEL_70;
  }
  if ((v29 & 4) == 0) {
    if ((v29 & 1) == 0) {
      v30 = false;
      goto LABEL_70;
    }
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    nn_hid_GetNpadState_1a0a380(&v34, &v39);
    goto LABEL_68;
  }
  v37 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v34 = 0;
  nn_hid_GetNpadState_1a0a370(&v34, &v39);
  v30 = (~(_DWORD)v38 & 0x14) == 0;

LABEL_70:
  *(_BYTE*)(a1 + 1105) = v30;
  *(_BYTE*)(a1 + 1106) = 0;
  v39 = 32;
  v31 = nn_hid_GetNpadStyleSet(&v39);
  if ((v31 & 2) != 0) {
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    nn_hid_GetNpadState_1a0a360(&v34, &v39);
  LABEL_75:
    v32 = v38 & 1;
    goto LABEL_77;
  }
  if ((v31 & 4) != 0) {
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    nn_hid_GetNpadState_1a0a370(&v34, &v39);
    v32 = (~(_DWORD)v38 & 0x14) == 0;
    goto LABEL_77;
  }
  if ((v31 & 1) != 0) {
    v37 = 0;
    v38 = 0;
    v35 = 0;
    v36 = 0;
    v34 = 0;
    nn_hid_GetNpadState_1a0a380(&v34, &v39);
    goto LABEL_75;
  }
  v32 = false;

LABEL_77:
  *(_BYTE*)(a1 + 1107) = v32;
  *(_BYTE*)(a1 + 1109) = GameData_226b000;
  nn_os_AcquireWriteLock(a1 + 984);
  *(_DWORD*)(a1 + 1032) = 2;
  nn_os_ReleaseWriteLock(a1 + 984);
  if (((v27 | *(unsigned __int8*)(a1 + 1105)) & 1) == 0 &&
      (*(_BYTE*)(a1 + 1107) & 1) == 0) {
    nn_os_SignalTimerEvent(a1 + 1040);
    *(_BYTE*)(a1 + 1108) = 1;
  }
  return 1;
}

__int64 Registration_650100(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  v4 = *(_QWORD*)(a2 + 32);
  if (v4 != 0) {
    if (v4 == a2) {
      v14 = v13;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v4 + 24LL))(v4, v13);
    }
    else {
      v14 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    }
  }
  else {
    v14 = nullptr;
  }
  GameRoutine_64ac70(v13, a1);
  if (v14 == v13) {
    v6 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v14 + v6))((__int64)v14);

LABEL_11:
  v7 = *(_QWORD*)(a3 + 32);
  if (v7 != 0) {
    if (v7 == a3) {
      v14 = v13;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v7 + 24LL))(v7, v13);
    }
    else {
      v14 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    }
  }
  else {
    v14 = nullptr;
  }
  GameRoutine_64adb0(v13, a1 + 48);
  if (v14 == v13) {
    v8 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_21;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v14 + v8))((__int64)v14);

LABEL_21:
  v14 = v13;
  v13[0] = GameData_1f8ef70;
  v13[1] = realloc_ptr;
  GameRoutine_64aef0(v13, a1 + 96);
  if (v14 == v13) {
    v9 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_26;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v14 + v9))((__int64)v14);

LABEL_26:
  v10 = *(_QWORD*)(a1 + 32);
  v13[0] = 49152;
  v15 = 4096;
  if (v10 == 0) {
    GameRoutine_60a310(0);
  }
  v11 = (*(__int64 (**)(__int64, _QWORD*, __int64*))(*(_QWORD*)v10 + 48LL))(
      v10, v13, &v15);
  *(_QWORD*)(a1 + 904) = v11;
  nn_hid_InitializeNmouse(v11);
  nn_hid_SetNmouseButtonConfigJoyLeftJcms(&GameData_1c22b58);
  return nn_hid_SetNmouseButtonConfigJoyRightJcms(&GameData_1c22b60);
}

_BYTE* Registration_652270(__int64 a1, __int64 a2)
{
  __int64 v3;
  _WORD* v4;
  __int64 v5;
  __int64 v6;
  _BYTE* result;

  v3 = GameData_2131de0[0];
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = v3 + 16;
  *(_QWORD*)(a1 + 8) = a1 + 8;
  *(_QWORD*)(a1 + 16) = a1 + 8;
  *(_QWORD*)(a1 + 24) = "<<invalid>>";
  *(_QWORD*)(a1 + 32) = 0x100000000LL;
  *(_WORD*)(a1 + 40) = 256;
  v4 = (_WORD*)GameData_2265a98;
  *(_QWORD*)(a1 + 24) = *(_QWORD*)(GameData_2265a98 + 48);
  *(_WORD*)(a1 + 32) = v4[28];
  v5 = *(_QWORD*)v4;
  *(_QWORD*)(a1 + 48) = *(_QWORD*)v4;
  if (v5 != 0) {
    if (*(_QWORD*)(v5 + 56) != 0) {
      *(_QWORD*)(*(_QWORD*)(v5 + 80) + 64LL) = a1;
      *(_QWORD*)(a1 + 72) = *(_QWORD*)(*(_QWORD*)v4 + 80LL);
      v6 = 80;
    }
    else {
      *(_QWORD*)(v5 + 80) = a1;
      v6 = 56;
    }
    *(_QWORD*)(*(_QWORD*)v4 + v6) = a1;
  }
  *(_QWORD*)v4 = a1;
  *(_QWORD*)(a1 + 88) = a2;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_BYTE*)(a1 + 144) = 0;
  *(_QWORD*)a1 = scene_Manager_vtable;
  *(_WORD*)(a1 + 96) = 1;
  result = (_BYTE*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                  6144, 16, 0);
  *(_QWORD*)(a1 + 160) = result;
  *result = 0;
  result[192] = 0;
  result[384] = 0;
  result[576] = 0;
  result[768] = 0;
  result[960] = 0;
  result[1152] = 0;
  result[1344] = 0;
  result[1536] = 0;
  result[1728] = 0;
  result[1920] = 0;
  result[2112] = 0;
  result[2304] = 0;
  result[2496] = 0;
  result[2688] = 0;
  result[2880] = 0;
  result[3072] = 0;
  result[3264] = 0;
  result[3456] = 0;
  result[3648] = 0;
  result[3840] = 0;
  result[4032] = 0;
  result[4224] = 0;
  result[4416] = 0;
  result[4608] = 0;
  result[4800] = 0;
  result[4992] = 0;
  result[5184] = 0;
  result[5376] = 0;
  result[5568] = 0;
  result[5760] = 0;
  result[5952] = 0;
  return result;
}

__int64 Registration_655300()
{
  __int64 v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 result;
  __int64 v40;
  int v41;
  __int64 v42;

  v0 = GameData_21c65e8;
  v1 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (GameData_21c65e8 != 0) {
    if (GameData_21c65e0 == 0) {
      goto LABEL_6;
    }
    v2 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2,
                                  GameData_21c65e0);
    v0 = GameData_21c65e8;
    if (GameData_21c65e8 != 0) {
    LABEL_6:
      v3 = 368;
      if (*(_QWORD*)(*v1 + 440LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*v1 + v3, v0);
    }
    GameData_21c65e8 = 0;
    GameData_21c65f0 = 0;
    GameData_21c65e0 = 0;
  }
  GameData_21c65e0 = fw_memory_HeapManager_Allocate(*v1, 6291456, 16, 3);
  v4 = fw_memory_HeapManager_Allocate(*v1, 786432, 16, 3);
  v5 = 0;
  GameData_21c65e8 = v4;
  GameData_21c65f0 = 0x3000000000000LL;
  do {
    *(_DWORD*)(GameData_21c65e8 + 4 * v5) = v5;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 4) = v5 + 1;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 8) = v5 + 2;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 12) = v5 + 3;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 16) = v5 + 4;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 20) = v5 + 5;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 24) = v5 + 6;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 28) = v5 + 7;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 32) = v5 + 8;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 36) = v5 + 9;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 40) = v5 + 10;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 44) = v5 + 11;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 48) = v5 + 12;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 52) = v5 + 13;
    *(_DWORD*)(GameData_21c65e8 + 4 * v5 + 56) = v5 + 14;
    v6 = v5 + 15;
    v7 = GameData_21c65e8 + 4 * v5;
    v5 += 16;
    *(_DWORD*)(v7 + 60) = v6;
  } while (v5 != 196608);
  v8 = GameData_21c6630;
  GameData_21c6618 = 1;
  if (GameData_21c6630 != 0) {
    if (GameData_21c6628 == 0) {
      goto LABEL_17;
    }
    v9 = 368;
    if (*(_QWORD*)(*v1 + 440LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*v1 + v9, GameData_21c6628);
    v8 = GameData_21c6630;
    if (GameData_21c6630 != 0) {
    LABEL_17:
      v10 = 368;
      if (*(_QWORD*)(*v1 + 440LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*v1 + v10, v8);
    }
    GameData_21c6630 = 0;
    GameData_21c6638 = 0;
    GameData_21c6628 = 0;
  }
  GameData_21c6628 = fw_memory_HeapManager_Allocate(*v1, 5242880, 16, 3);
  v11 = fw_memory_HeapManager_Allocate(*v1, 327680, 16, 3);
  v12 = 0;
  GameData_21c6630 = v11;
  GameData_21c6638 = 0x1400000000000LL;
  do {
    *(_DWORD*)(GameData_21c6630 + 4 * v12) = v12;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 4) = v12 + 1;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 8) = v12 + 2;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 12) = v12 + 3;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 16) = v12 + 4;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 20) = v12 + 5;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 24) = v12 + 6;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 28) = v12 + 7;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 32) = v12 + 8;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 36) = v12 + 9;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 40) = v12 + 10;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 44) = v12 + 11;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 48) = v12 + 12;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 52) = v12 + 13;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 56) = v12 + 14;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 60) = v12 + 15;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 64) = v12 + 16;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 68) = v12 + 17;
    *(_DWORD*)(GameData_21c6630 + 4 * v12 + 72) = v12 + 18;
    v13 = v12 + 19;
    v14 = GameData_21c6630 + 4 * v12;
    v12 += 20;
    *(_DWORD*)(v14 + 76) = v13;
  } while (v12 != 81920);
  v15 = GameData_21c6678;
  GameData_21c6660 = 1;
  if (GameData_21c6678 != 0) {
    if (GameData_21c6670 == 0) {
      goto LABEL_28;
    }
    v16 = 368;
    if (*(_QWORD*)(*v1 + 440LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*v1 + v16, GameData_21c6670);
    v15 = GameData_21c6678;
    if (GameData_21c6678 != 0) {
    LABEL_28:
      v17 = 368;
      if (*(_QWORD*)(*v1 + 440LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(*v1 + v17, v15);
    }
    GameData_21c6678 = 0;
    GameData_21c6680 = 0;
    GameData_21c6670 = 0;
  }
  GameData_21c6670 = fw_memory_HeapManager_Allocate(*v1, 9437184, 16, 3);
  v18 = fw_memory_HeapManager_Allocate(*v1, 294912, 16, 3);
  v19 = 0;
  GameData_21c6678 = v18;
  GameData_21c6680 = 0x1200000000000LL;
  do {
    *(_DWORD*)(GameData_21c6678 + 4 * v19) = v19;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 4) = v19 + 1;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 8) = v19 + 2;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 12) = v19 + 3;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 16) = v19 + 4;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 20) = v19 + 5;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 24) = v19 + 6;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 28) = v19 + 7;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 32) = v19 + 8;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 36) = v19 + 9;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 40) = v19 + 10;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 44) = v19 + 11;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 48) = v19 + 12;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 52) = v19 + 13;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 56) = v19 + 14;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 60) = v19 + 15;
    *(_DWORD*)(GameData_21c6678 + 4 * v19 + 64) = v19 + 16;
    v20 = v19 + 17;
    v21 = GameData_21c6678 + 4 * v19;
    v19 += 18;
    *(_DWORD*)(v21 + 68) = v20;
  } while (v19 != 73728);
  v22 = GameData_21c66c0;
  GameData_21c66a8 = 1;
  if (GameData_21c66c0 != 0) {
    if (GameData_21c66b8 == 0) {
      goto LABEL_39;
    }
    v23 = 368;
    if (*(_QWORD*)(*v1 + 440LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*v1 + v23, GameData_21c66b8);
    v22 = GameData_21c66c0;
    if (GameData_21c66c0 != 0) {
    LABEL_39:
      v24 = 368;
      if (*(_QWORD*)(*v1 + 440LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*v1 + v24, v22);
    }
    GameData_21c66c0 = 0;
    GameData_21c66c8 = 0;
    GameData_21c66b8 = 0;
  }
  GameData_21c66b8 = fw_memory_HeapManager_Allocate(*v1, 3145728, 16, 3);
  v25 = fw_memory_HeapManager_Allocate(*v1, 49152, 16, 3);
  v26 = 0;
  GameData_21c66c0 = v25;
  GameData_21c66c8 = 0x300000000000LL;
  do {
    *(_DWORD*)(GameData_21c66c0 + 4 * v26) = v26;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 4) = v26 + 1;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 8) = v26 + 2;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 12) = v26 + 3;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 16) = v26 + 4;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 20) = v26 + 5;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 24) = v26 + 6;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 28) = v26 + 7;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 32) = v26 + 8;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 36) = v26 + 9;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 40) = v26 + 10;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 44) = v26 + 11;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 48) = v26 + 12;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 52) = v26 + 13;
    *(_DWORD*)(GameData_21c66c0 + 4 * v26 + 56) = v26 + 14;
    v27 = v26 + 15;
    v28 = GameData_21c66c0 + 4 * v26;
    v26 += 16;
    *(_DWORD*)(v28 + 60) = v27;
  } while (v26 != 12288);
  v29 = GameData_21c6708;
  GameData_21c66f0 = 1;
  if (GameData_21c6708 != 0) {
    if (GameData_21c6700 == 0) {
      goto LABEL_50;
    }
    v30 = 368;
    if (*(_QWORD*)(*v1 + 440LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*v1 + v30, GameData_21c6700);
    v29 = GameData_21c6708;
    if (GameData_21c6708 != 0) {
    LABEL_50:
      v31 = 368;
      if (*(_QWORD*)(*v1 + 440LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(*v1 + v31, v29);
    }
    GameData_21c6708 = 0;
    GameData_21c6710 = 0;
    GameData_21c6700 = 0;
  }
  GameData_21c6700 = fw_memory_HeapManager_Allocate(*v1, 26214144, 16, 3);
  v32 = fw_memory_HeapManager_Allocate(*v1, 273064, 16, 3);
  v33 = 0;
  GameData_21c6708 = v32;
  GameData_21c6710 = 0x10AAA00000000LL;
  do {
    *(_DWORD*)(GameData_21c6708 + 4 * v33) = v33;
    *(_DWORD*)(GameData_21c6708 + 4 * v33 + 4) = v33 + 1;
    *(_DWORD*)(GameData_21c6708 + 4 * v33 + 8) = v33 + 2;
    *(_DWORD*)(GameData_21c6708 + 4 * v33 + 12) = v33 + 3;
    *(_DWORD*)(GameData_21c6708 + 4 * v33 + 16) = v33 + 4;
    *(_DWORD*)(GameData_21c6708 + 4 * v33 + 20) = v33 + 5;
    *(_DWORD*)(GameData_21c6708 + 4 * v33 + 24) = v33 + 6;
    *(_DWORD*)(GameData_21c6708 + 4 * v33 + 28) = v33 + 7;
    *(_DWORD*)(GameData_21c6708 + 4 * v33 + 32) = v33 + 8;
    *(_DWORD*)(GameData_21c6708 + 4 * v33 + 36) = v33 + 9;
    v34 = v33 + 10;
    v35 = GameData_21c6708 + 4 * v33;
    v33 += 11;
    *(_DWORD*)(v35 + 40) = v34;
  } while (v33 != 68266);
  v36 = GameData_21c6750;
  GameData_21c6738 = 1;
  if (GameData_21c6750 != 0) {
    if (GameData_21c6748 == 0) {
      goto LABEL_61;
    }
    v37 = 368;
    if (*(_QWORD*)(*v1 + 440LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*v1 + v37, GameData_21c6748);
    v36 = GameData_21c6750;
    if (GameData_21c6750 != 0) {
    LABEL_61:
      v38 = 368;
      if (*(_QWORD*)(*v1 + 440LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(*v1 + v38, v36);
    }
    GameData_21c6750 = 0;
    GameData_21c6758 = 0;
    GameData_21c6748 = 0;
  }
  GameData_21c6748 = fw_memory_HeapManager_Allocate(*v1, 3145728, 16, 3);
  result = fw_memory_HeapManager_Allocate(*v1, 24576, 16, 3);
  v40 = 0;
  GameData_21c6750 = result;
  GameData_21c6758 = 0x180000000000LL;
  do {
    *(_DWORD*)(GameData_21c6750 + 4 * v40) = v40;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 4) = v40 + 1;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 8) = v40 + 2;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 12) = v40 + 3;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 16) = v40 + 4;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 20) = v40 + 5;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 24) = v40 + 6;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 28) = v40 + 7;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 32) = v40 + 8;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 36) = v40 + 9;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 40) = v40 + 10;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 44) = v40 + 11;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 48) = v40 + 12;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 52) = v40 + 13;
    *(_DWORD*)(GameData_21c6750 + 4 * v40 + 56) = v40 + 14;
    v41 = v40 + 15;
    v42 = GameData_21c6750 + 4 * v40;
    v40 += 16;
    *(_DWORD*)(v42 + 60) = v41;
  } while (v40 != 6144);
  GameData_21c6780 = 1;
  return result;
}

__int64 Registration_a47f20(__int64 result, __int64 a2)
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
  __int64 v14;
  unsigned int v15;
  __int64 v16;

  if (a2 != 0) {
    v2 = *(_DWORD*)(result + 24);
    v3 = result;
    if ((unsigned int)(v2 - 1) <= 3) {
      v4 = *(_QWORD*)(result + 16);
      if (v4 == 0) {
        return result;
      }
      v5 = *(_QWORD*)(v4 + 16);
      v6 = *(unsigned int*)(v4 + 24);
      v7 = *(unsigned __int8*)(v4 + 48);
      v8 = *(unsigned __int16*)(v4 + 50);
      goto LABEL_5;
    }
    if (v2 == 11) {
      v9 = *(_QWORD*)(result + 16);
      if (v9 != 0) {
        v10 = a2;
        v11 = GameData_212e310[0];
        v12 = __dynamic_cast(*(_QWORD*)(result + 16), GameData_212e310[0],
                             GameData_212e318[0], 0);
        result = __dynamic_cast(v9, v11, GameData_212e320, 0);
        if (result != 0) {
          v13 = result;
          result = *(_QWORD*)(result + 16);
          if (result != 0) {
            result = __dynamic_cast(result, GameData_212e310[0],
                                    GameData_212e318[0], 0);
            if (result != 0) {
              result = ScalableFont_563820(
                  *(_QWORD*)(result + 16), v10, 0xFFFFFFFFLL,
                  *(unsigned int*)(result + 24),
                  *(unsigned __int16*)(result + 50), 0xFFFFFFFFLL,
                  *(unsigned __int8*)(result + 48));
            }
          }
          v14 = *(_QWORD*)(v13 + 24);
          if (v14 != 0) {
            v15 = result;
            v16 = __dynamic_cast(v14, GameData_212e310[0], GameData_212e318[0],
                                 0);
            if (v16 != 0) {
              result = (unsigned int)ScalableFont_563820(
                           *(_QWORD*)(v16 + 16), v10, 0xFFFFFFFFLL,
                           *(unsigned int*)(v16 + 24),
                           *(unsigned __int16*)(v16 + 50), 0xFFFFFFFFLL,
                           *(unsigned __int8*)(v16 + 48)) +
                       v15;
            }
            else {
              result = v15;
            }
          }
          goto LABEL_6;
        }
        if (v12 == 0) {
          return result;
        }
        v5 = *(_QWORD*)(v12 + 16);
        v6 = *(unsigned int*)(v12 + 24);
        v7 = *(unsigned __int8*)(v12 + 48);
        a2 = v10;
        v8 = *(unsigned __int16*)(v12 + 50);
      LABEL_5:
        result =
            ScalableFont_563820(v5, a2, 0xFFFFFFFFLL, v6, v8, 0xFFFFFFFFLL, v7);
      LABEL_6:
        if ((_DWORD)result != 0) {
          Registration_563900(*(_QWORD*)(v3 + 32));
          return Registration_564480(*(_QWORD*)(v3 + 32));
        }
      }
    }
  }
  return result;
}

__int64 Registration_a480d0(__int64 result, __int64 a2)
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
  __int64 v14;
  unsigned int v15;
  __int64 v16;

  if (a2 != 0) {
    v2 = *(_DWORD*)(result + 24);
    v3 = result;
    if ((unsigned int)(v2 - 1) <= 3) {
      v4 = *(_QWORD*)(result + 16);
      if (v4 == 0) {
        return result;
      }
      v5 = *(_QWORD*)(v4 + 16);
      v6 = *(unsigned int*)(v4 + 24);
      v7 = *(unsigned __int8*)(v4 + 48);
      v8 = *(unsigned __int16*)(v4 + 50);
      goto LABEL_5;
    }
    if (v2 == 11) {
      v9 = *(_QWORD*)(result + 16);
      if (v9 != 0) {
        v10 = a2;
        v11 = GameData_212e310[0];
        v12 = __dynamic_cast(*(_QWORD*)(result + 16), GameData_212e310[0],
                             GameData_212e318[0], 0);
        result = __dynamic_cast(v9, v11, GameData_212e320, 0);
        if (result != 0) {
          v13 = result;
          result = *(_QWORD*)(result + 16);
          if (result != 0) {
            result = __dynamic_cast(result, GameData_212e310[0],
                                    GameData_212e318[0], 0);
            if (result != 0) {
              result = ScalableFont_563780(
                  *(_QWORD*)(result + 16), v10, 0xFFFFFFFFLL,
                  *(unsigned int*)(result + 24),
                  *(unsigned __int16*)(result + 50), 0xFFFFFFFFLL,
                  *(unsigned __int8*)(result + 48));
            }
          }
          v14 = *(_QWORD*)(v13 + 24);
          if (v14 != 0) {
            v15 = result;
            v16 = __dynamic_cast(v14, GameData_212e310[0], GameData_212e318[0],
                                 0);
            if (v16 != 0) {
              result = (unsigned int)ScalableFont_563780(
                           *(_QWORD*)(v16 + 16), v10, 0xFFFFFFFFLL,
                           *(unsigned int*)(v16 + 24),
                           *(unsigned __int16*)(v16 + 50), 0xFFFFFFFFLL,
                           *(unsigned __int8*)(v16 + 48)) +
                       v15;
            }
            else {
              result = v15;
            }
          }
          goto LABEL_6;
        }
        if (v12 == 0) {
          return result;
        }
        v5 = *(_QWORD*)(v12 + 16);
        v6 = *(unsigned int*)(v12 + 24);
        v7 = *(unsigned __int8*)(v12 + 48);
        a2 = v10;
        v8 = *(unsigned __int16*)(v12 + 50);
      LABEL_5:
        result =
            ScalableFont_563780(v5, a2, 0xFFFFFFFFLL, v6, v8, 0xFFFFFFFFLL, v7);
      LABEL_6:
        if ((_DWORD)result != 0) {
          Registration_563900(*(_QWORD*)(v3 + 32));
          return Registration_564480(*(_QWORD*)(v3 + 32));
        }
      }
    }
  }
  return result;
}

__int64 Registration_a48280(__int64 result, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;

  if (a2 != 0) {
    v3 = (__int64*)result;
    result = GameRoutine_59d3b0(a2);
    if (result != 0) {
      v4 = result;
      result = *v3;
      if (*v3 != 0 && *(_QWORD*)(result + 16) == v4) {
        goto LABEL_22;
      }
      result = v3[1];
      if (result != 0 && *(_QWORD*)(result + 16) == v4) {
        goto LABEL_22;
      }
      if ((result = v3[2]) != 0 && *(_QWORD*)(result + 16) == v4 ||
          (result = v3[3]) != 0 && *(_QWORD*)(result + 16) == v4 ||
          (result = v3[4]) != 0 && *(_QWORD*)(result + 16) == v4 ||
          (result = v3[5]) != 0 && *(_QWORD*)(result + 16) == v4 ||
          (result = v3[6]) != 0 && *(_QWORD*)(result + 16) == v4 ||
          (result = v3[7]) != 0 && *(_QWORD*)(result + 16) == v4 ||
          (result = v3[8]) != 0 && *(_QWORD*)(result + 16) == v4) {
      LABEL_22:
        v5 = *(_QWORD*)(a2 + 216);
        if (*(_BYTE*)(a2 + 279) == 1) {
          return Registration_a47f20(result, v5);
        }
        else {
          return Registration_a480d0(result, v5);
        }
      }
    }
  }
  return result;
}

__int64 Registration_a483a0(__int64* a1, __int64 a2, __int64 a3, _QWORD* a4)
{
  __int64 v5;
  _QWORD* v6;
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

  if (a4 == nullptr) {
    return 0;
  }
  v6 = a4 + 9;
  v5 = a4[9];
  if (a2 != 0) {
    if (v5 == 0 || (Registration_a498e0(v5, a2) & 1) == 0) {
      v9 = a4[10];
      if (v9 == 0 || (Registration_a498e0(v9, a2) & 1) == 0) {
        v10 = a4[11];
        if (v10 == 0 || (Registration_a498e0(v10, a2) & 1) == 0) {
          v11 = a4[12];
          if (v11 == 0 || (Registration_a498e0(v11, a2) & 1) == 0) {
            v12 = a4[13];
            if (v12 == 0 || (Registration_a498e0(v12, a2) & 1) == 0) {
              v13 = a4[14];
              if (v13 == 0 || (Registration_a498e0(v13, a2) & 1) == 0) {
                v14 = a4[15];
                if (v14 == 0 || (Registration_a498e0(v14, a2) & 1) == 0) {
                  v15 = a4[16];
                  if (v15 == 0 || (Registration_a498e0(v15, a2) & 1) == 0) {
                    v16 = a4[17];
                    if (v16 == 0 || (Registration_a498e0(v16, a2) & 1) == 0) {
                      v17 = a4[18];
                      if (v17 == 0 || (Registration_a498e0(v17, a2) & 1) == 0) {
                        v18 = a4[19];
                        if (v18 == 0 ||
                            (Registration_a498e0(v18, a2) & 1) == 0) {
                          v19 = a4[20];
                          if (v19 == 0 ||
                              (Registration_a498e0(v19, a2) & 1) == 0) {
                            v20 = a4[21];
                            if (v20 != 0 &&
                                (Registration_a498e0(v20, a2) & 1) != 0) {
                              goto LABEL_29;
                            }
                            v22 = a4[22];
                            if (v22 != 0 &&
                                (Registration_a498e0(v22, a2) & 1) != 0) {
                            LABEL_76:
                              v21 = 13;
                              goto LABEL_132;
                            }
                            v23 = a4[23];
                            if (v23 != 0 &&
                                (Registration_a498e0(v23, a2) & 1) != 0) {
                              goto LABEL_80;
                            }
                            v24 = a4[24];
                            if (v24 != 0 &&
                                (Registration_a498e0(v24, a2) & 1) != 0) {
                            LABEL_83:
                              v21 = 15;
                              goto LABEL_132;
                            }
                            v25 = a4[25];
                            if (v25 != 0 &&
                                (Registration_a498e0(v25, a2) & 1) != 0) {
                              goto LABEL_86;
                            }
                            v26 = a4[26];
                            if (v26 != 0 &&
                                (Registration_a498e0(v26, a2) & 1) != 0) {
                            LABEL_89:
                              v21 = 17;
                              goto LABEL_132;
                            }
                            v27 = a4[27];
                            if (v27 != 0 &&
                                (Registration_a498e0(v27, a2) & 1) != 0) {
                              goto LABEL_92;
                            }
                            v28 = a4[28];
                            if (v28 != 0 &&
                                (Registration_a498e0(v28, a2) & 1) != 0) {
                            LABEL_95:
                              v21 = 19;
                              goto LABEL_132;
                            }
                            v29 = a4[29];
                            if (v29 != 0 &&
                                (Registration_a498e0(v29, a2) & 1) != 0) {
                              goto LABEL_98;
                            }
                            v30 = a4[30];
                            if (v30 != 0 &&
                                (Registration_a498e0(v30, a2) & 1) != 0) {
                            LABEL_101:
                              v21 = 21;
                              goto LABEL_132;
                            }
                            v31 = a4[31];
                            if (v31 != 0 &&
                                (Registration_a498e0(v31, a2) & 1) != 0) {
                              goto LABEL_104;
                            }
                            v32 = a4[32];
                            if (v32 != 0 &&
                                (Registration_a498e0(v32, a2) & 1) != 0) {
                            LABEL_107:
                              v21 = 23;
                              goto LABEL_132;
                            }
                            v33 = a4[33];
                            if (v33 != 0 &&
                                (Registration_a498e0(v33, a2) & 1) != 0) {
                              goto LABEL_110;
                            }
                            v34 = a4[34];
                            if (v34 != 0 &&
                                (Registration_a498e0(v34, a2) & 1) != 0) {
                            LABEL_113:
                              v21 = 25;
                              goto LABEL_132;
                            }
                            v35 = a4[35];
                            if (v35 != 0 &&
                                (Registration_a498e0(v35, a2) & 1) != 0) {
                              goto LABEL_116;
                            }
                            v36 = a4[36];
                            if (v36 != 0 &&
                                (Registration_a498e0(v36, a2) & 1) != 0) {
                            LABEL_119:
                              v21 = 27;
                              goto LABEL_132;
                            }
                            v37 = a4[37];
                            if (v37 != 0 &&
                                (Registration_a498e0(v37, a2) & 1) != 0) {
                              goto LABEL_122;
                            }
                            v38 = a4[38];
                            if (v38 != 0 &&
                                (Registration_a498e0(v38, a2) & 1) != 0) {
                            LABEL_125:
                              v21 = 29;
                              goto LABEL_132;
                            }
                            v39 = a4[39];
                            if (v39 != 0 &&
                                (Registration_a498e0(v39, a2) & 1) != 0) {
                              goto LABEL_128;
                            }
                            v40 = a4[40];
                            if (v40 == 0 ||
                                (Registration_a498e0(v40, a2) & 1) == 0) {
                              return 0;
                            }
                            goto LABEL_131;
                          }
                        LABEL_77:
                          v21 = 11;
                          goto LABEL_132;
                        }
                      LABEL_73:
                        v21 = 10;
                        goto LABEL_132;
                      }
                    LABEL_72:
                      v21 = 9;
                      goto LABEL_132;
                    }
                  LABEL_71:
                    v21 = 8;
                    goto LABEL_132;
                  }
                LABEL_70:
                  v21 = 7;
                  goto LABEL_132;
                }
              LABEL_69:
                v21 = 6;
                goto LABEL_132;
              }
            LABEL_68:
              v21 = 5;
              goto LABEL_132;
            }
          LABEL_67:
            v21 = 4;
            goto LABEL_132;
          }
        LABEL_66:
          v21 = 3;
          goto LABEL_132;
        }
      LABEL_65:
        v21 = 2;
        goto LABEL_132;
      }
    LABEL_64:
      v21 = 1;
      goto LABEL_132;
    }
  LABEL_63:
    v21 = 0;
    goto LABEL_132;
  }
  if (v5 == 0) {
    goto LABEL_63;
  }
  if (a4[10] == 0) {
    goto LABEL_64;
  }
  if (a4[11] == 0) {
    goto LABEL_65;
  }
  if (a4[12] == 0) {
    goto LABEL_66;
  }
  if (a4[13] == 0) {
    goto LABEL_67;
  }
  if (a4[14] == 0) {
    goto LABEL_68;
  }
  if (a4[15] == 0) {
    goto LABEL_69;
  }
  if (a4[16] == 0) {
    goto LABEL_70;
  }
  if (a4[17] == 0) {
    goto LABEL_71;
  }
  if (a4[18] == 0) {
    goto LABEL_72;
  }
  if (a4[19] == 0) {
    goto LABEL_73;
  }
  if (a4[20] == 0) {
    goto LABEL_77;
  }
  if (a4[21] == 0) {
  LABEL_29:
    v21 = 12;
    goto LABEL_132;
  }
  if (a4[22] == 0) {
    goto LABEL_76;
  }
  if (a4[23] == 0) {
  LABEL_80:
    v21 = 14;
    goto LABEL_132;
  }
  if (a4[24] == 0) {
    goto LABEL_83;
  }
  if (a4[25] == 0) {
  LABEL_86:
    v21 = 16;
    goto LABEL_132;
  }
  if (a4[26] == 0) {
    goto LABEL_89;
  }
  if (a4[27] == 0) {
  LABEL_92:
    v21 = 18;
    goto LABEL_132;
  }
  if (a4[28] == 0) {
    goto LABEL_95;
  }
  if (a4[29] == 0) {
  LABEL_98:
    v21 = 20;
    goto LABEL_132;
  }
  if (a4[30] == 0) {
    goto LABEL_101;
  }
  if (a4[31] == 0) {
  LABEL_104:
    v21 = 22;
    goto LABEL_132;
  }
  if (a4[32] == 0) {
    goto LABEL_107;
  }
  if (a4[33] == 0) {
  LABEL_110:
    v21 = 24;
    goto LABEL_132;
  }
  if (a4[34] == 0) {
    goto LABEL_113;
  }
  if (a4[35] == 0) {
  LABEL_116:
    v21 = 26;
    goto LABEL_132;
  }
  if (a4[36] == 0) {
    goto LABEL_119;
  }
  if (a4[37] == 0) {
  LABEL_122:
    v21 = 28;
    goto LABEL_132;
  }
  if (a4[38] == 0) {
    goto LABEL_125;
  }
  if (a4[39] == 0) {
  LABEL_128:
    v21 = 30;
    goto LABEL_132;
  }
  if (a4[40] != 0) {
    return 0;
  }

LABEL_131:
  v21 = 31;

LABEL_132:
  v41 = v6[v21];
  if (a1 != nullptr) {
    v42 = *(_QWORD*)(v41 + 8);
    if (v42 != 0) {
      v42 = (*(__int64 (**)(__int64))(*(_QWORD*)v42 + 48LL))(v42);
    }
    *a1 = v42;
  }
  v43 = *(_QWORD*)(v41 + 8);
  if (v43 != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)v43 + 40LL))(v43);
  }
  return 0;
}

__int64 Registration_a4ac60(__int64 a1, unsigned __int8* a2)
{
  int v2;
  unsigned int v5;
  int v6;
  _DWORD* v7;
  unsigned int v8;
  unsigned __int8* v9;
  unsigned int v10;
  int v11;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  char* v17;
  __int64 v18;
  unsigned int v19;
  unsigned __int8* v20;
  __int64 v21;
  char* v22;
  int v23;
  int v24;
  int v25;

  v2 = *(_DWORD*)(a1 + 40);
  if (v2 == -1) {
    return 4294967294LL;
  }
  v5 = strlen(a2);
  v6 = *a2;
  v7 = *(_DWORD**)(*(_QWORD*)(a1 + 24) + 24LL * v2);
  v8 = *v7;
  if (*a2 != 0) {
    v9 = a2 + 1;
    v10 = 0;
    do {
      v10 = v6 + 1170 * v10;
      v11 = *v9++;
      v6 = v11;
    } while (v11 != 0);
  }
  else {
    v10 = 0;
  }
  v13 = v10 % v8;
  v14 = v7[(2 * (v10 % v8)) | 1];
  if (v14 != 0) {
    v15 = 0;
    v16 = v7[2 * v13 + 2];
    v17 = (char*)v7 + 1;
    do {
      v18 = v16;
      v19 = *((unsigned __int8*)v7 + v16);
      if (v5 == v19) {
        v20 = a2;
        v21 = v5;
        v22 = &v17[v18];
        if (v5 == 0) {
          return *(unsigned int*)&v17[v18 + v19];
        }
        while (1) {
          v24 = *v20++;
          v23 = v24;
          v25 = (unsigned __int8)*v22++;
          if (v23 != v25) {
            break;
          }
          if (--v21 == 0) {
            return *(unsigned int*)&v17[v18 + v19];
          }
        }
      }
      ++v15;
      v16 = v18 + v19 + 5;
    } while (v15 != v14);
  }
  return 0xFFFFFFFFLL;
}

__int64 Registration_a4d510(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[2];
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  int v15;
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

  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v12 = 0xFFFF0004FFFF0002LL;
  v13 = 0xFFFF0006FFFF0005LL;
  v4 = GameData_212e348 + 2;
  v28 = 8;
  v14 = -65529;
  v15 = -65528;
  v11[0] = GameData_212e348 + 2;
  v11[1] = 0xFFFF0001FFFF0000LL;
  v5 = GameRoutine_a4dbe0(a2, "MPID_Ishmal", 0, v11);
  GameRoutine_60a020(a1, v5);
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v11[0] = v4;
  v11[1] = 0xFFFF0001FFFF0000LL;
  v12 = 0xFFFF0004FFFF0002LL;
  v13 = 0xFFFF0006FFFF0005LL;
  v28 = 8;
  v14 = -65529;
  v15 = -65528;
  v6 = GameRoutine_a4dbe0(a2, "MID_Sys_Localize_CN_Third_M", 0, v11);
  GameRoutine_60a020(a1 + 24, v6);
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v11[0] = v4;
  v11[1] = 0xFFFF0001FFFF0000LL;
  v12 = 0xFFFF0004FFFF0002LL;
  v13 = 0xFFFF0006FFFF0005LL;
  v28 = 8;
  v14 = -65529;
  v15 = -65528;
  v7 = GameRoutine_a4dbe0(a2, "MID_Sys_Localize_CN_Third_F", 0, v11);
  GameRoutine_60a020(a1 + 48, v7);
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v11[0] = v4;
  v11[1] = 0xFFFF0001FFFF0000LL;
  v12 = 0xFFFF0004FFFF0002LL;
  v13 = 0xFFFF0006FFFF0005LL;
  v28 = 8;
  v14 = -65529;
  v15 = -65528;
  v8 = GameRoutine_a4dbe0(a2, "MID_Sys_Localize_TW_Third_M", 0, v11);
  GameRoutine_60a020(a1 + 72, v8);
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v11[0] = v4;
  v11[1] = 0xFFFF0001FFFF0000LL;
  v12 = 0xFFFF0004FFFF0002LL;
  v13 = 0xFFFF0006FFFF0005LL;
  v28 = 8;
  v14 = -65529;
  v15 = -65528;
  v9 = GameRoutine_a4dbe0(a2, "MID_Sys_Localize_TW_Third_F", 0, v11);
  return GameRoutine_60a020(a1 + 96, v9);
}

__int64 Registration_a4d720(__int64 a1, __int64 a2)
{
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  __int64* v8;
  __int64 v9;
  unsigned int v10;
  __int64* v11;
  __int64 v12;
  char** v13;
  _BYTE v16[64];
  _QWORD v17[2];
  unsigned __int64 v18;
  unsigned __int64 v19;
  int v20;
  int v21;
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

  v3 = 0;
  v4 = (_QWORD*)GameData_2131e00[0];
  v5 = GameData_212e348 + 2;
  do {
    snprintf(v16, 64, "MID_DateTime_Month_%s",
             (const char*)&GameData_1b5c768 + *((int*)&GameData_1b5c768 + v3));
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v34 = 8;
    v20 = -65529;
    v21 = -65528;
    v17[0] = v5;
    v17[1] = 0xFFFF0001FFFF0000LL;
    v18 = 0xFFFF0004FFFF0002LL;
    v19 = 0xFFFF0006FFFF0005LL;
    v6 = GameRoutine_a4dbe0(a2, v16, 0, v17);
    if (*v4 != 0) {
      Registration_17d87e0(*v4, 1, (unsigned int)(v3 + 1), v6);
    }
    ++v3;
  } while (v3 != 12);
  v7 = 1;
  v8 = GameData_212e348 + 2;
  do {
    snprintf(v16, 64, "MID_DateTime_Day_%02d", v7);
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v34 = 8;
    v20 = -65529;
    v21 = -65528;
    v17[0] = v8;
    v17[1] = 0xFFFF0001FFFF0000LL;
    v18 = 0xFFFF0004FFFF0002LL;
    v19 = 0xFFFF0006FFFF0005LL;
    v9 = GameRoutine_a4dbe0(a2, v16, 0, v17);
    if (*v4 != 0) {
      Registration_17d87e0(*v4, 2, v7, v9);
    }
    ++v7;
  } while (v7 != 32);
  v10 = 0;
  v11 = GameData_212e348 + 2;
  do {
    snprintf(v16, 64, "MID_DateTime_Hour_%02d", v10);
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v34 = 8;
    v20 = -65529;
    v21 = -65528;
    v17[0] = v11;
    v17[1] = 0xFFFF0001FFFF0000LL;
    v18 = 0xFFFF0004FFFF0002LL;
    v19 = 0xFFFF0006FFFF0005LL;
    v12 = GameRoutine_a4dbe0(a2, v16, 0, v17);
    if (*v4 != 0) {
      Registration_17d87e0(*v4, 3, v10, v12);
    }
    ++v10;
  } while (v10 != 24);
  v13 = msg_MessageManager_empty_text__ptr;
  GameRoutine_60a020(a1, *msg_MessageManager_empty_text__ptr);
  GameRoutine_60a020(a1 + 24, *v13);
  GameRoutine_60a020(a1 + 48, *v13);
  GameRoutine_60a020(a1 + 72, *v13);
  GameRoutine_60a020(a1 + 96, *v13);
  return GameRoutine_60a020(a1 + 120, *v13);
}

__int64 Registration_a4da40(__int64 a1, __int64 a2)
{
  __int64 result;
  unsigned int v5;
  __int64 v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  __int64 v11;

  v11 = a2;
  result = GameRoutine_a542c0(a1 + 14648, &v11);
  if (result != 0) {
    v5 = Registration_a50100(a1 + 15176, a2, "Section");
    if (v5 != 0 && (v6 = *(_QWORD*)(snd_g_fileIndex + 4752)) != 0) {
      if ((v5 & 0x80000000) != 0) {
        v8 = -1;
        v9 = 0;
        v10 = 0;
        do {
          if ((v8 & 1) == 0) {
            v10 |= Registration_18d7720(v6, 0, v9);
          }
          v8 >>= 1;
          ++v9;
        } while (v9 != 32);
        v7 = v10 | ((v10 & 0xFFFFFFFE & ((v10 & 0xFFFFFFFE) - 1)) != 0);
      }
      else {
        v7 = Registration_18d7720(*(_QWORD*)(snd_g_fileIndex + 4752), 0, v5);
      }
      return v7 != 0;
    }
    else {
      return 1;
    }
  }
  return result;
}

__int64 Registration_a4db40(__int64 a1, __int64 a2)
{
  _QWORD v3[4];
  int v4;
  int v5;
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
  int v18;
  int v19;

  v6 = -1;
  v7 = -1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v3[0] = GameData_212e348 + 2;
  v3[1] = 0xFFFF0001FFFF0000LL;
  v3[2] = 0xFFFF0004FFFF0002LL;
  v3[3] = 0xFFFF0006FFFF0005LL;
  v18 = 8;
  v19 = 0;
  v4 = -65529;
  v5 = -65528;
  return GameRoutine_a4dbe0(a1, a2, 0, v3);
}

void* Registration_a4f6c0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  void* v6;
  unsigned int v7;
  __int64 v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  __int64 v14;

  v14 = a2;
  v4 = GameRoutine_a542c0(a1 + 14648, &v14);
  if (v4 == 0) {
    return &GameData_1b5c7c8;
  }
  v5 = *(_QWORD*)(v4 + 40);
  v6 = &GameData_1b5c7c8;
  if (v5 != 0) {
    v7 = Registration_a50100(a1 + 15176, a2, "Section");
    if (v7 != 0 && (v8 = *(_QWORD*)(snd_g_fileIndex + 4752)) != 0) {
      if ((v7 & 0x80000000) != 0) {
        v10 = -1;
        v11 = 0;
        v12 = 0;
        do {
          if ((v10 & 1) == 0) {
            v12 |= Registration_18d7720(v8, 0, v11);
          }
          v10 >>= 1;
          ++v11;
        } while (v11 != 32);
        v9 = v12 | ((v12 & 0xFFFFFFFE & ((v12 & 0xFFFFFFFE) - 1)) != 0);
      }
      else {
        v9 = Registration_18d7720(*(_QWORD*)(snd_g_fileIndex + 4752), 0, v7);
      }
      if (v9 != 0) {
        return (void*)(v5 + 808);
      }
    }
    else {
      return (void*)(v5 + 808);
    }
  }
  return v6;
}

void* Registration_a4f800(__int64 a1, __int64 a2, int a3)
{
  __int64 v5;
  __int64 v6;
  void* result;
  __int64 v8;
  _DWORD* v9;
  unsigned int v10;
  unsigned int v11;
  _BYTE* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  char* v19;
  char v20;
  char* v21;
  char* v22;
  char v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  _QWORD v30[16];
  _QWORD* v31;

  v30[0] = a2;
  v5 = GameRoutine_a542c0(a1 + 14608, v30);
  if (v5 == 0) {
    return &GameData_1b5c7c8;
  }
  v6 = *(_QWORD*)(v5 + 40);
  if (v6 == 0) {
    return &GameData_1b5c7c8;
  }
  result = &GameData_1b5c7c8;
  v8 = *(_QWORD*)(*(_QWORD*)(v6 + 800) + 24LL) +
       24LL * *(int*)(*(_QWORD*)(v6 + 800) + 32LL);
  v9 = *(_DWORD**)v8;
  v10 = (8 * **(_DWORD**)v8) | 4;
  v11 = *(_DWORD*)(v8 + 12);
  if (v10 >= v11) {
    return result;
  }
  while (1) {
    v12 = (char*)v9 + v10;
    v13 = (unsigned __int8)*v12;
    if (*(_DWORD*)&v12[v13 + 1] == a3) {
      break;
    }
    v10 += v13 + 5;
    if (v10 >= v11) {
      return result;
    }
  }
  if (*v12 != 0) {
    v14 = v10 + 1;
    v15 = v13 & 7;
    if ((unsigned int)v13 >= 8) {
      v17 = 0;
      v18 = (char*)v30 + 3;
      v19 = (char*)v9 + v14 + 3;
      do {
        v17 -= 8;
        *(v18 - 3) = *(v19 - 3);
        *(v18 - 2) = *(v19 - 2);
        *(v18 - 1) = *(v19 - 1);
        *v18 = *v19;
        v18[1] = v19[1];
        v18[2] = v19[2];
        v18[3] = v19[3];
        v20 = v19[4];
        v19 += 8;
        v18[4] = v20;
        v18 += 8;
      } while (-(__int64)((unsigned __int8)v13 & 0xF8) != v17);
      v16 = -v17;
    }
    else {
      v16 = 0;
    }
    if ((v13 & 7) != 0) {
      v21 = (char*)v30 + v16;
      v22 = (char*)v9 + v16 + v14;
      do {
        v23 = *v22++;
        --v15;
        *v21++ = v23;
      } while (v15 != 0);
    }
  }
  *((_BYTE*)v30 + v13) = 0;
  v24 = Registration_a50100(a1 + 15176, v30, "Section");
  if (v24 == 0) {
    goto LABEL_20;
  }
  v25 = *(_QWORD*)(snd_g_fileIndex + 4752);
  if (v25 == 0) {
    goto LABEL_20;
  }
  if ((v24 & 0x80000000) != 0) {
    v27 = -1;
    v28 = 0;
    v29 = 0;
    do {
      if ((v27 & 1) == 0) {
        v29 |= Registration_18d7720(v25, 0, v28);
      }
      v27 >>= 1;
      ++v28;
    } while (v28 != 32);
    if ((v29 | ((v29 & 0xFFFFFFFE & ((v29 & 0xFFFFFFFE) - 1)) != 0)) != 0) {
      goto LABEL_20;
    }
    return &GameData_1b5c7c8;
  }
  if ((unsigned int)Registration_18d7720(*(_QWORD*)(snd_g_fileIndex + 4752), 0,
                                         v24) == 0) {
    return &GameData_1b5c7c8;
  }

LABEL_20:
  v31 = v30;
  v26 = GameRoutine_a542c0(a1 + 14648, &v31);
  if (v26 != 0) {
    return (void*)(v26 + 16);
  }
  else {
    return &GameData_1b5c7c8;
  }
}

__int64 Registration_a4fa80(__int64 a1, __int64 a2, unsigned __int8* a3)
{
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  int v11;
  __int64 result;
  __int64 v13;

  v13 = a2;
  v5 = GameRoutine_a542c0(a1 + 14608, &v13);
  if (v5 == 0) {
    return 0xFFFFFFFFLL;
  }
  v6 = *(_QWORD*)(v5 + 40);
  if (v6 == 0) {
    return 0xFFFFFFFFLL;
  }
  v7 = Registration_a50100(a1 + 15176, a3, "Section");
  if (v7 == 0 || (v8 = *(_QWORD*)(snd_g_fileIndex + 4752)) == 0) {
  LABEL_13:
    result = GameRoutine_a4a400(*(_QWORD*)(v6 + 800), a3);
    if ((result & 0x80000000) == 0) {
      return result;
    }
    return 0xFFFFFFFFLL;
  }
  if ((v7 & 0x80000000) != 0) {
    v9 = -1;
    v10 = 0;
    v11 = 0;
    do {
      if ((v9 & 1) == 0) {
        v11 |= Registration_18d7720(v8, 0, v10);
      }
      v9 >>= 1;
      ++v10;
    } while (v10 != 32);
    if ((v11 | ((v11 & 0xFFFFFFFE & ((v11 & 0xFFFFFFFE) - 1)) != 0)) == 0) {
      return 0xFFFFFFFFLL;
    }
    goto LABEL_13;
  }
  if ((unsigned int)Registration_18d7720(*(_QWORD*)(snd_g_fileIndex + 4752), 0,
                                         v7) != 0) {
    goto LABEL_13;
  }
  return 0xFFFFFFFFLL;
}

__int64 Registration_a51f10(__int64 a1, unsigned int a2, char* a3)
{
  unsigned int v3;
  __int64 v4;
  char* v5;

  if (a2 <= 7) {
    v3 = a2;
  }
  else {
    v3 = 0;
  }
  v4 = a1 + 24LL * v3;
  if (a3 != nullptr) {
    v5 = a3;
  }
  else {
    v5 = msg_MessageManager_empty_text_;
  }
  return GameRoutine_60a020(v4, v5);
}

__int64 Registration_a51f40(__int64 a1)
{
  char** v2;

  v2 = msg_MessageManager_empty_text__ptr;
  GameRoutine_60a020(a1, *msg_MessageManager_empty_text__ptr);
  GameRoutine_60a020(a1 + 24, *v2);
  GameRoutine_60a020(a1 + 48, *v2);
  GameRoutine_60a020(a1 + 72, *v2);
  GameRoutine_60a020(a1 + 96, *v2);
  GameRoutine_60a020(a1 + 120, *v2);
  GameRoutine_60a020(a1 + 144, *v2);
  return GameRoutine_60a020(a1 + 168, *v2);
}

unsigned __int64 Registration_a51fe0(_QWORD* a1, __int64 a2)
{
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  result = game_HashString(a2);
  if (result != 0) {
    v4 = *(_QWORD*)(GameData_21ca020 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21ca020 + 112) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = result;
        if (result >= v4) {
          v7 = result % v4;
        }
      }
      else {
        v7 = v6 & result;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21ca020 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v12 = v9[1];
              if (v12 == result) {
                if (v9[2] == result) {
                  goto LABEL_27;
                }
              }
              else if ((v12 & v6) != v7) {
                goto LABEL_25;
              }
              v9 = (_QWORD*)*v9;
              v11 = 0;
              if (v9 == nullptr) {
                goto LABEL_26;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == result) {
              if (v9[2] == result) {
              LABEL_27:
                v11 = v9[3];
                goto LABEL_26;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                break;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v11 = 0;

LABEL_26:
  *a1 = v11;
  return result;
}

__int64 Registration_a520f0(__int64 a1, char** a2)
{
  char* v2;
  int v3;
  char v4;
  char v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  char** v13;
  __int64 v14;
  unsigned int v15;
  int* v16;
  int* v17;
  __int64 v20;
  unsigned int v21;
  char** v22;
  unsigned int v23;
  char v24;
  _BYTE* v25;
  int v26;
  _BYTE* v27;
  int v28;
  _BYTE* v29;
  int v30;
  __int64 v32;
  unsigned int v33;
  char** v34;
  unsigned int v35;
  char v36;
  int v37;

  v2 = *a2;
  v3 = **a2;
  if (v3 < 0) {
    if ((v3 & 0xE0) == 0xC0) {
      v11 = *(unsigned __int16*)v2;
      v5 = 0;
      v7 = 0;
      v8 = 0;
      v4 = 1;
      v37 = (unsigned __int16)v11;
      v10 = v11 >> 8;
      v6 = (unsigned __int8)v11 << 8;
      v9 = 2;
    }
    else {
      v12 = a1;
      v13 = a2;
      v37 = 0;
      if ((v3 & 0xF0) == 0xE0) {
        v14 = 3;
      }
      else {
        v14 = 4;
      }
      memcpy(&v37, v2, v14);
      if ((v3 & 0xF0) == 0xE0) {
        LOBYTE(v10) = BYTE2(v37);
        v4 = 0;
        v8 = 0;
        v5 = 1;
        v6 = BYTE1(v37) << 8;
        v7 = (unsigned __int8)v37 << 16;
        v9 = 3;
      }
      else {
        LOBYTE(v10) = HIBYTE(v37);
        v4 = 0;
        v5 = 0;
        v6 = BYTE2(v37) << 8;
        v7 = BYTE1(v37) << 16;
        v8 = (unsigned __int8)v37 << 24;
        v9 = 4;
      }
      a1 = v12;
      a2 = v13;
    }
  }
  else {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v37 = (unsigned __int8)v3;
    v9 = 1;
    LOBYTE(v10) = v3;
  }
  v15 = v6 | v7 | v8 | (unsigned __int8)v10;
  if (v15 == 7) {
    *(_WORD*)(a1 + 60) = 0;
    goto LABEL_19;
  }
  if ((*(_BYTE*)(a1 + 60) & 1) == 0) {
    if ((*(_BYTE*)(a1 + 61) & 1) != 0) {
    LABEL_20:
      v17 = &GameData_1bb32c8;
      switch (v15) {
      case 0xC380u:
        goto LABEL_55;
      case 0xC381u:
        v17 = &GameData_1bb32d0;
        goto LABEL_55;
      case 0xC382u:
        v17 = &GameData_1bb32d8;
        goto LABEL_55;
      case 0xC383u:
        v17 = &GameData_1bb32e0;
        goto LABEL_55;
      case 0xC384u:
        v17 = &GameData_1bb32e8;
        goto LABEL_55;
      case 0xC385u:
      case 0xC386u:
      case 0xC390u:
      case 0xC397u:
      case 0xC398u:
        goto LABEL_29;
      case 0xC387u:
        v17 = &GameData_1bb3378;
        goto LABEL_55;
      case 0xC388u:
        v17 = &GameData_1bb32f0;
        goto LABEL_55;
      case 0xC389u:
        v17 = &GameData_1bb32f8;
        goto LABEL_55;
      case 0xC38Au:
        v17 = &GameData_1bb3300;
        goto LABEL_55;
      case 0xC38Bu:
        v17 = &GameData_1bb3308;
        goto LABEL_55;
      case 0xC38Cu:
        v17 = &GameData_1bb3310;
        goto LABEL_55;
      case 0xC38Du:
        v17 = &GameData_1bb3318;
        goto LABEL_55;
      case 0xC38Eu:
        v17 = &GameData_1bb3320;
        goto LABEL_55;
      case 0xC38Fu:
        v17 = &GameData_1bb3328;
        goto LABEL_55;
      case 0xC391u:
        v17 = &GameData_1bb3380;
        goto LABEL_55;
      case 0xC392u:
        v17 = &GameData_1bb3330;
        goto LABEL_55;
      case 0xC393u:
        v17 = &GameData_1bb3338;
        goto LABEL_55;
      case 0xC394u:
        v17 = &GameData_1bb3340;
        goto LABEL_55;
      case 0xC395u:
        v17 = &GameData_1bb3348;
        goto LABEL_55;
      case 0xC396u:
        v17 = &GameData_1bb3350;
        goto LABEL_55;
      case 0xC399u:
        v17 = &GameData_1bb3358;
        goto LABEL_55;
      case 0xC39Au:
        v17 = &GameData_1bb3360;
        goto LABEL_55;
      case 0xC39Bu:
        v17 = &GameData_1bb3368;
        goto LABEL_55;
      case 0xC39Cu:
        v17 = &GameData_1bb3370;
      LABEL_55:
        v15 = *v17;
        goto LABEL_56;
      default:
        if (v15 <= 0x20 && ((1LL << v15) & 0x100000480LL) != 0 ||
            v15 == 14909568) {
          break;
        }
      LABEL_29:
        v20 = a1;
        v21 = v9;
        v22 = a2;
        v23 = tolower(v15);
        a2 = v22;
        v15 = v23;
        v9 = v21;
        a1 = v20;
      LABEL_56:
        v24 = 8 * v9;
        LOBYTE(v37) = v15 >> (8 * v9 - 8);
        if (v3 < 0) {
          BYTE1(v37) = v15 >> (v24 - 16);
          if ((v4 & 1) == 0) {
            BYTE2(v37) = v15 >> (v24 - 24);
            if ((v5 & 1) == 0) {
              HIBYTE(v37) = v15 >> v24;
            }
          }
        }
        *(_BYTE*)(a1 + 61) = 0;
        break;
      }
    LABEL_61:
      if (v15 != 7) {
      LABEL_62:
        *(_DWORD*)(a1 + 56) = v15;
        goto LABEL_63;
      }
      goto LABEL_63;
    }
  LABEL_19:
    if ((*(_BYTE*)(a1 + 62) & 1) == 0) {
      goto LABEL_61;
    }
    goto LABEL_20;
  }
  if ((int)v15 <= 50079) {
    if (v15 == 10 || v15 == 32) {
      goto LABEL_62;
    }
  LABEL_69:
    v32 = a1;
    v33 = v9;
    v34 = a2;
    v35 = toupper(v15);
    a2 = v34;
    v15 = v35;
    v9 = v33;
    a1 = v32;
  }
  else {
    v16 = &GameData_1bb32c8;
    switch (v15) {
    case 0xC3A0u:
      break;
    case 0xC3A1u:
      v16 = &GameData_1bb32d0;
      break;
    case 0xC3A2u:
      v16 = &GameData_1bb32d8;
      break;
    case 0xC3A3u:
      v16 = &GameData_1bb32e0;
      break;
    case 0xC3A4u:
      v16 = &GameData_1bb32e8;
      break;
    case 0xC3A5u:
    case 0xC3A6u:
    case 0xC3B0u:
    case 0xC3B7u:
    case 0xC3B8u:
      goto LABEL_69;
    case 0xC3A7u:
      v16 = &GameData_1bb3378;
      break;
    case 0xC3A8u:
      v16 = &GameData_1bb32f0;
      break;
    case 0xC3A9u:
      v16 = &GameData_1bb32f8;
      break;
    case 0xC3AAu:
      v16 = &GameData_1bb3300;
      break;
    case 0xC3ABu:
      v16 = &GameData_1bb3308;
      break;
    case 0xC3ACu:
      v16 = &GameData_1bb3310;
      break;
    case 0xC3ADu:
      v16 = &GameData_1bb3318;
      break;
    case 0xC3AEu:
      v16 = &GameData_1bb3320;
      break;
    case 0xC3AFu:
      v16 = &GameData_1bb3328;
      break;
    case 0xC3B1u:
      v16 = &GameData_1bb3380;
      break;
    case 0xC3B2u:
      v16 = &GameData_1bb3330;
      break;
    case 0xC3B3u:
      v16 = &GameData_1bb3338;
      break;
    case 0xC3B4u:
      v16 = &GameData_1bb3340;
      break;
    case 0xC3B5u:
      v16 = &GameData_1bb3348;
      break;
    case 0xC3B6u:
      v16 = &GameData_1bb3350;
      break;
    case 0xC3B9u:
      v16 = &GameData_1bb3358;
      break;
    case 0xC3BAu:
      v16 = &GameData_1bb3360;
      break;
    case 0xC3BBu:
      v16 = &GameData_1bb3368;
      break;
    case 0xC3BCu:
      v16 = &GameData_1bb3370;
      break;
    default:
      if (v15 != 14909568) {
        goto LABEL_69;
      }
      goto LABEL_62;
    }
    v15 = v16[1];
  }
  v36 = 8 * v9;
  LOBYTE(v37) = v15 >> (8 * v9 - 8);
  if (v3 < 0) {
    BYTE1(v37) = v15 >> (v36 - 16);
    if ((v4 & 1) == 0) {
      BYTE2(v37) = v15 >> (v36 - 24);
      if ((v5 & 1) == 0) {
        HIBYTE(v37) = v15 >> v36;
      }
    }
  }
  *(_BYTE*)(a1 + 60) = 0;
  if (v15 != 7) {
    goto LABEL_62;
  }

LABEL_63:
  **(_BYTE**)(a1 + 48) = v37;
  ++*a2;
  v25 = (_BYTE*)(*(_QWORD*)(a1 + 48) + 1LL);
  v26 = *(_DWORD*)(a1 + 32) + 1;
  *(_QWORD*)(a1 + 48) = v25;
  *(_DWORD*)(a1 + 32) = v26;
  if (v3 < 0) {
    *v25 = BYTE1(v37);
    ++*a2;
    v27 = (_BYTE*)(*(_QWORD*)(a1 + 48) + 1LL);
    v28 = *(_DWORD*)(a1 + 32) + 1;
    *(_QWORD*)(a1 + 48) = v27;
    *(_DWORD*)(a1 + 32) = v28;
    if ((v4 & 1) == 0) {
      *v27 = BYTE2(v37);
      ++*a2;
      v29 = (_BYTE*)(*(_QWORD*)(a1 + 48) + 1LL);
      v30 = *(_DWORD*)(a1 + 32) + 1;
      *(_QWORD*)(a1 + 48) = v29;
      *(_DWORD*)(a1 + 32) = v30;
      if ((v5 & 1) == 0) {
        *v29 = HIBYTE(v37);
        ++*a2;
        ++*(_QWORD*)(a1 + 48);
        ++*(_DWORD*)(a1 + 32);
      }
    }
  }
  return v9;
}

__int64 Registration_17d4c60(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  nn_os_LockMutex(a1 + 48);
  if (*(_QWORD*)(a1 + 88) != 0) {
    v2 = *(_QWORD*)(a1 + 8);
    if (*(_QWORD*)(a1 + 16) != v2) {
      v3 = *(_QWORD*)(a1 + 32);
      v4 = (_QWORD*)(v2 + 8 * (v3 >> 9));
      v5 = (__int64*)(*v4 + 8 * (v3 & 0x1FF));
      v6 = *(_QWORD*)(v2 + 8 * ((*(_QWORD*)(a1 + 40) + v3) >> 9)) +
           8 * ((*(_QWORD*)(a1 + 40) + v3) & 0x1FF);
      while (v5 != (__int64*)v6) {
        v7 = *v5++;
        (*(void (**)(__int64))(a1 + 88))(v7);
        if ((char*)((char*)v5 - *v4) == (char*)GameRoutine_1000) {
          v8 = (__int64*)v4[1];
          ++v4;
          v5 = v8;
        }
      }
    }
  }
  v9 = *(_QWORD**)(a1 + 8);
  v10 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 40) = 0;
  v11 = (v10 - (__int64)v9) >> 3;
  if (v11 >= 3) {
    v12 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v9 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v13, *v9);
        v9 = *(_QWORD**)(a1 + 8);
        v10 = *(_QWORD*)(a1 + 16);
      }
      *(_QWORD*)(a1 + 8) = ++v9;
      v11 = (v10 - (__int64)v9) >> 3;
    } while (v11 > 2);
  }
  if (v11 == 1) {
    v14 = 256;
    goto LABEL_19;
  }
  if (v11 == 2) {
    v14 = 512;
  LABEL_19:
    *(_QWORD*)(a1 + 32) = v14;
  }
  nn_os_UnlockMutex(a1 + 48);
  nn_os_FinalizeConditionVariable(a1 + 80);
  nn_os_FinalizeMutex(a1 + 48);
  return GameRoutine_9b1ea0(a1);
}

__int64 Registration_17d4e60(__int64 a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  nn_os_LockMutex(a1 + 48);
  if ((*(_BYTE*)(a1 + 96) & 1) == 0) {
    v4 = *(_QWORD*)(a1 + 32);
    v5 = *(_QWORD*)(a1 + 40);
    if (v4 == 0) {
      Registration_17d5300(a1);
      v4 = *(_QWORD*)(a1 + 32);
    }
    v6 = *(_QWORD*)(a1 + 8);
    v7 = (_QWORD*)(v6 + 8 * (v4 >> 9));
    v8 = *v7 + 8 * (v4 & 0x1FF);
    if (*(_QWORD*)(a1 + 16) == v6) {
      v9 = 0;
    }
    else {
      v9 = v8;
    }
    if (v9 == *v7) {
      v8 = *(v7 - 1) + 4096LL;
    }
    *(_QWORD*)(v8 - 8) = a2;
    v10 = *(_QWORD*)(a1 + 40) + 1LL;
    --*(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = v10;
    if (v5 == 0) {
      nn_os_BroadcastConditionVariable(a1 + 80);
    }
  }
  return nn_os_UnlockMutex(a1 + 48);
}

__int64 Registration_17d5020(__int64 a1, _QWORD* a2)
{
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned int v8;

  nn_os_LockMutex(a1 + 48);
  if (*(_BYTE*)(a1 + 96) == 1) {
    *a2 = 0;
  }
  else {
    if (*(_QWORD*)(a1 + 40) == 0) {
      v8 = 0;
      goto LABEL_11;
    }
    *a2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) +
                                8LL * (*(_QWORD*)(a1 + 32) >> 9)) +
                     8 * (*(_QWORD*)(a1 + 32) & 0x1FFLL));
    v4 = *(_QWORD**)(a1 + 8);
    v5 = *(_QWORD*)(a1 + 40) - 1LL;
    v6 = *(_QWORD*)(a1 + 32) + 1LL;
    *(_QWORD*)(a1 + 32) = v6;
    *(_QWORD*)(a1 + 40) = v5;
    if (v6 >= 0x400) {
      if (*v4 != 0) {
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, *v4);
        v4 = *(_QWORD**)(a1 + 8);
        v6 = *(_QWORD*)(a1 + 32);
      }
      *(_QWORD*)(a1 + 8) = v4 + 1;
      *(_QWORD*)(a1 + 32) = v6 - 512;
    }
  }
  v8 = 1;

LABEL_11:
  nn_os_UnlockMutex(a1 + 48);
  return v8;
}

__int64 Registration_17d5100(__int64 a1, _QWORD* a2, __int64 a3)
{
  char v6;
  char v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;

  nn_os_LockMutex(a1 + 48);
  while (1) {
    v6 = *(_BYTE*)(a1 + 96);
    v7 = (*(_QWORD*)(a1 + 40) != 0) | v6;
    if (((*(_QWORD*)(a1 + 40) != 0) | v6 & 1) != 0) {
      break;
    }
    if ((unsigned int)nn_os_TimedWaitConditionVariable(a1 + 80, a1 + 48, a3) ==
        0) {
      goto LABEL_13;
    }
  }
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    *a2 = 0;
  }
  else {
    *a2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) +
                                8LL * (*(_QWORD*)(a1 + 32) >> 9)) +
                     8 * (*(_QWORD*)(a1 + 32) & 0x1FFLL));
    v8 = *(_QWORD**)(a1 + 8);
    v9 = *(_QWORD*)(a1 + 40) - 1LL;
    v10 = *(_QWORD*)(a1 + 32) + 1LL;
    *(_QWORD*)(a1 + 32) = v10;
    *(_QWORD*)(a1 + 40) = v9;
    if (v10 >= 0x400) {
      if (*v8 != 0) {
        v11 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, *v8);
        v8 = *(_QWORD**)(a1 + 8);
        v10 = *(_QWORD*)(a1 + 32);
      }
      *(_QWORD*)(a1 + 8) = v8 + 1;
      *(_QWORD*)(a1 + 32) = v10 - 512;
    }
  }

LABEL_13:
  nn_os_UnlockMutex(a1 + 48);
  return v7 & 1;
}

__int64 Registration_17d5210(__int64 a1, _QWORD* a2)
{
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned int v8;

  nn_os_LockMutex(a1 + 48);
  if (*(_BYTE*)(a1 + 88) == 1) {
    *a2 = 0;
  }
  else {
    if (*(_QWORD*)(a1 + 40) == 0) {
      v8 = 0;
      goto LABEL_11;
    }
    *a2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) +
                                8LL * (*(_QWORD*)(a1 + 32) >> 9)) +
                     8 * (*(_QWORD*)(a1 + 32) & 0x1FFLL));
    v4 = *(_QWORD**)(a1 + 8);
    v5 = *(_QWORD*)(a1 + 40) - 1LL;
    v6 = *(_QWORD*)(a1 + 32) + 1LL;
    *(_QWORD*)(a1 + 32) = v6;
    *(_QWORD*)(a1 + 40) = v5;
    if (v6 >= 0x400) {
      if (*v4 != 0) {
        v7 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, *v4);
        v4 = *(_QWORD**)(a1 + 8);
        v6 = *(_QWORD*)(a1 + 32);
      }
      *(_QWORD*)(a1 + 8) = v4 + 1;
      *(_QWORD*)(a1 + 32) = v6 - 512;
    }
  }
  v8 = 1;

LABEL_11:
  nn_os_UnlockMutex(a1 + 48);
  return v8;
}

__int64 Registration_17d65c0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 8) + 568LL) + 24LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 568LL), *a2, 0, 16);
}

__int64 Registration_17d67c0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD, __int64))(
      **(_QWORD**)(*(_QWORD*)(a1 + 8) + 568LL) + 24LL))(
      *(_QWORD*)(*(_QWORD*)(a1 + 8) + 568LL), *a2, 0, 16);
}

__int64 Registration_17d6820(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  v1 = *(_QWORD**)(result + 8);
  if (v1 != (_QWORD*)result) {
    v2 = (_QWORD*)result;
    v3 = fw_memory_g_heap_manager_ptr;
    do {
      while (1) {
        v4 = v1[2];
        if (*(_BYTE*)(v4 + 160) != 1) {
          break;
        }
        result = nn_os_SwitchToFiber(v4 + 8);
        v1 = (_QWORD*)v1[1];
        if (v1 == v2) {
          return result;
        }
      }
      v5 = (_QWORD*)v1[1];
      *(_QWORD*)(*v1 + 8LL) = v5;
      *v5 = *v1;
      --v2[2];
      v6 = v1[2];
      v1[2] = 0;
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v7 = 128;
      }
      else {
        v7 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, v1);
      v1 = v5;
    } while (v5 != v2);
  }
  return result;
}

__int64 Registration_17d8860(__int64 result, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  switch (a2) {
  case 3:
    for (i = -576; i != 0; i += 96) {
      while (1) {
        v8 = result + i;
        if ((*(_BYTE*)(result + i + 1608) & 1) != 0) {
          **(_BYTE**)(v8 + 1624) = 0;
          *(_QWORD*)(v8 + 1616) = 0;
        }
        else {
          *(_WORD*)(v8 + 1608) = 0;
        }
        v9 = result + i;
        if ((*(_BYTE*)(result + i + 1632) & 1) != 0) {
          **(_BYTE**)(v9 + 1648) = 0;
          *(_QWORD*)(v9 + 1640) = 0;
        }
        else {
          *(_WORD*)(v9 + 1632) = 0;
        }
        v10 = result + i;
        if ((*(_BYTE*)(result + i + 1656) & 1) != 0) {
          **(_BYTE**)(v10 + 1672) = 0;
          *(_QWORD*)(v10 + 1664) = 0;
        }
        else {
          *(_WORD*)(v10 + 1656) = 0;
        }
        v11 = result + i;
        if ((*(_BYTE*)(result + i + 1680) & 1) != 0) {
          break;
        }
        *(_WORD*)(v11 + 1680) = 0;
        i += 96;
        if (i == 0) {
          return result;
        }
      }
      **(_BYTE**)(v11 + 1696) = 0;
      *(_QWORD*)(v11 + 1688) = 0;
    }
    break;
  case 2:
    v2 = 0;
    while (1) {
      v3 = result + v2;
      if ((*(_BYTE*)(result + v2 + 288) & 1) != 0) {
        **(_BYTE**)(v3 + 304) = 0;
        *(_QWORD*)(v3 + 296) = 0;
      }
      else {
        *(_WORD*)(v3 + 288) = 0;
      }
      v4 = result + v2;
      if ((*(_BYTE*)(result + v2 + 312) & 1) != 0) {
        **(_BYTE**)(v4 + 328) = 0;
        *(_QWORD*)(v4 + 320) = 0;
      }
      else {
        *(_WORD*)(v4 + 312) = 0;
      }
      v5 = result + v2;
      if ((*(_BYTE*)(result + v2 + 336) & 1) != 0) {
        **(_BYTE**)(v5 + 352) = 0;
        *(_QWORD*)(v5 + 344) = 0;
        if (v2 == 672) {
          return result;
        }
      }
      else {
        *(_WORD*)(v5 + 336) = 0;
        if (v2 == 672) {
          return result;
        }
      }
      v6 = result + v2;
      if ((*(_BYTE*)(result + v2 + 360) & 1) != 0) {
        v2 += 96;
        **(_BYTE**)(v6 + 376) = 0;
        *(_QWORD*)(v6 + 368) = 0;
      }
      else {
        *(_WORD*)(v6 + 360) = 0;
        v2 += 96;
      }
    }
  case 1:
    if ((*(_BYTE*)result & 1) != 0) {
      **(_BYTE**)(result + 16) = 0;
      *(_QWORD*)(result + 8) = 0;
      if ((*(_BYTE*)(result + 24) & 1) != 0) {
      LABEL_6:
        **(_BYTE**)(result + 40) = 0;
        *(_QWORD*)(result + 32) = 0;
        if ((*(_BYTE*)(result + 48) & 1) != 0) {
          goto LABEL_7;
        }
        goto LABEL_47;
      }
    }
    else {
      *(_WORD*)result = 0;
      if ((*(_BYTE*)(result + 24) & 1) != 0) {
        goto LABEL_6;
      }
    }
    *(_WORD*)(result + 24) = 0;
    if ((*(_BYTE*)(result + 48) & 1) != 0) {
    LABEL_7:
      **(_BYTE**)(result + 64) = 0;
      *(_QWORD*)(result + 56) = 0;
      if ((*(_BYTE*)(result + 72) & 1) != 0) {
        goto LABEL_8;
      }
      goto LABEL_48;
    }
  LABEL_47:
    *(_WORD*)(result + 48) = 0;
    if ((*(_BYTE*)(result + 72) & 1) != 0) {
    LABEL_8:
      **(_BYTE**)(result + 88) = 0;
      *(_QWORD*)(result + 80) = 0;
      if ((*(_BYTE*)(result + 96) & 1) != 0) {
        goto LABEL_9;
      }
      goto LABEL_49;
    }
  LABEL_48:
    *(_WORD*)(result + 72) = 0;
    if ((*(_BYTE*)(result + 96) & 1) != 0) {
    LABEL_9:
      **(_BYTE**)(result + 112) = 0;
      *(_QWORD*)(result + 104) = 0;
      if ((*(_BYTE*)(result + 120) & 1) != 0) {
        goto LABEL_10;
      }
      goto LABEL_50;
    }
  LABEL_49:
    *(_WORD*)(result + 96) = 0;
    if ((*(_BYTE*)(result + 120) & 1) != 0) {
    LABEL_10:
      **(_BYTE**)(result + 136) = 0;
      *(_QWORD*)(result + 128) = 0;
      if ((*(_BYTE*)(result + 144) & 1) != 0) {
        goto LABEL_11;
      }
      goto LABEL_51;
    }
  LABEL_50:
    *(_WORD*)(result + 120) = 0;
    if ((*(_BYTE*)(result + 144) & 1) != 0) {
    LABEL_11:
      **(_BYTE**)(result + 160) = 0;
      *(_QWORD*)(result + 152) = 0;
      if ((*(_BYTE*)(result + 168) & 1) != 0) {
        goto LABEL_12;
      }
      goto LABEL_52;
    }
  LABEL_51:
    *(_WORD*)(result + 144) = 0;
    if ((*(_BYTE*)(result + 168) & 1) != 0) {
    LABEL_12:
      **(_BYTE**)(result + 184) = 0;
      *(_QWORD*)(result + 176) = 0;
      if ((*(_BYTE*)(result + 192) & 1) != 0) {
        goto LABEL_13;
      }
      goto LABEL_53;
    }
  LABEL_52:
    *(_WORD*)(result + 168) = 0;
    if ((*(_BYTE*)(result + 192) & 1) != 0) {
    LABEL_13:
      **(_BYTE**)(result + 208) = 0;
      *(_QWORD*)(result + 200) = 0;
      if ((*(_BYTE*)(result + 216) & 1) != 0) {
        goto LABEL_14;
      }
      goto LABEL_54;
    }
  LABEL_53:
    *(_WORD*)(result + 192) = 0;
    if ((*(_BYTE*)(result + 216) & 1) != 0) {
    LABEL_14:
      **(_BYTE**)(result + 232) = 0;
      *(_QWORD*)(result + 224) = 0;
      if ((*(_BYTE*)(result + 240) & 1) != 0) {
        goto LABEL_15;
      }
      goto LABEL_55;
    }
  LABEL_54:
    *(_WORD*)(result + 216) = 0;
    if ((*(_BYTE*)(result + 240) & 1) != 0) {
    LABEL_15:
      **(_BYTE**)(result + 256) = 0;
      *(_QWORD*)(result + 248) = 0;
      if ((*(_BYTE*)(result + 264) & 1) != 0) {
      LABEL_16:
        **(_BYTE**)(result + 280) = 0;
        *(_QWORD*)(result + 272) = 0;
        return result;
      }
      goto LABEL_56;
    }
  LABEL_55:
    *(_WORD*)(result + 240) = 0;
    if ((*(_BYTE*)(result + 264) & 1) != 0) {
      goto LABEL_16;
    }
  LABEL_56:
    *(_WORD*)(result + 264) = 0;
    break;
  default:
    break;
  }
  return result;
}

__int64* Registration_17db960(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *result;
  if (*result != 0) {
    v2 = result[1];
    v3 = result;
    if (v1 == v2) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v2 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        result = (__int64*)std___1___shared_weak_count___release_weak(v4);
      }
      v2 -= 16;
    } while (v2 != v1);
    v5 = *v3;
    v3[1] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_9:
      v6 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v6 = 56;
      }
      return (__int64*)nn_mem_StandardAllocator_Free(
          fw_memory_g_heap_manager + v6, v1);
    }
  }
  return result;
}

__int64 Registration_17e4140()
{
  __int64 result;
  __int64 v1;
  int v2;
  int v3;
  int v4;
  unsigned int v5;

  v5 = 0;
  result = nn_vi_QueryDisplayBufferMaxResolution(&v5);
  v1 = game_g_frame_clock;
  v2 = v5;
  if (v5 > 3) {
    v4 = 1080;
    v3 = 1920;
  }
  else {
    v3 = GameData_1a82e90[v5];
    v4 = GameData_1a82c20[v5];
  }
  *(_DWORD*)(game_g_frame_clock + 13296) = v3;
  *(_DWORD*)(v1 + 13300) = v4;
  if (GameData_2266110 != v2) {
    GameData_2266110 = v2;
    GameData_226b001 = 1;
  }
  return result;
}

#pragma GCC visibility pop
