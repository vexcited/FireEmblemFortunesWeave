#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_9312c0(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ce2bc0(_QWORD, _QWORD);
__int64 RidePool_93c4f0(_QWORD, _QWORD, _QWORD);
__int64 Unit_9313d0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD, long double);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Wind_mute(_QWORD, _QWORD, long double);
__int64 snd_Wind_resumeMute(_QWORD, _QWORD, long double);
__int64 strlen(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e090[13];
extern __int64* GameData_212e348;
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212cf88[4];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting_ptr;
__int64 NamingRideMenuItem_Unknown25(__int64 a1);

__int64 NamingRideMenuItem_Unknown25(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  long double v7;
  __int64 v8;
  long double v9;
  long double v10;
  unsigned __int64 v11;
  char* v12;
  int v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  unsigned __int64 v25;
  char* v26;
  _QWORD v27[2];
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  char v36;
  _QWORD v37[2];
  unsigned __int64* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
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

  (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 328LL))(a1, 2);
  v34 = 0;
  v32 = 0;
  v33 = 0;
  v30 = 0;
  v31 = 0;
  v35 = 0;
  v2 = *(_QWORD**)game_g_game_setting_ptr;
  v36 = 0;
  HIDWORD(v35) = 8;
  v3 = *msg_MessageManager_instance__ptr[0];
  v41 = -1;
  v42 = -1;
  v43 = -1;
  v44 = -1;
  v45 = -1;
  v46 = -1;
  v47 = -1;
  v48 = -1;
  v49 = -1;
  v50 = -1;
  v51 = -1;
  v52 = -1;
  v53 = 8;
  v37[0] = GameData_212e348 + 2;
  v37[1] = 0xFFFF0001FFFF0000LL;
  v38 = (unsigned __int64*)0xFFFF0004FFFF0002LL;
  v39 = 0xFFFF0006FFFF0005LL;
  v40 = 0xFFFF0008FFFF0007LL;
  v28 = GameRoutine_a4dbe0(v3, "MID_CharaMaking_Swkbd_Header", 0, v37);
  v29 = strlen(v28);
  v4 = GameData_212cf88[0];
  v27[0] = GameRoutine_9312c0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL) + 120LL) +
      ((__int64)*(int*)(a1 + 40) << 6));
  v27[1] = strlen(v27[0]);
  v5 = game_sound_g_game_sound_ptr[0];
  v6 = *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 16);
  *(__n128*)&v7 = snd_Fade_Fade_10c830(v37, 0.0);
  snd_Wind_mute(v6, v37, v7);
  snd_Fade_Destroy_Fade(v37);
  GameRoutine_ce2bc0(v2 + 85, v27);
  v8 = *(_QWORD*)(*v5 + 16);
  *(__n128*)&v9 = snd_Fade_Fade_10c830(v37, 0.0);
  snd_Wind_resumeMute(v8, v37, v9);
  snd_Fade_Destroy_Fade(v37);
  if ((v2[86] & 1) != 0) {
    fw_text_String_CopyTerminated(&v24, v2[88], v2[87], v10);
  }
  else {
    v11 = v2[87];
    v12 = (char*)v2[88];
    v24 = v2[86];
    v25 = v11;
    v26 = v12;
  }
  v13 = v24 & 1;
  v14 = (unsigned __int64)(unsigned __int8)v24 >> 1;
  if (v13 != 0) {
    v14 = v25;
  }
  if (v14 != 0) {
    v15 = *(_QWORD*)v4;
    v16 = *(int*)(a1 + 40);
    WORD1(v37[0]) = 0;
    HIDWORD(v37[0]) = 0;
    v17 = *(_QWORD*)(v15 + 8);
    v38 = &v39;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    GameRoutine_930b90(v37, *(_QWORD*)(v17 + 120) + (v16 << 6));
    if ((v24 & 1) != 0) {
      v18 = v26;
    }
    else {
      v18 = (char*)&v24 + 1;
    }
    Unit_9313d0(v37, v18);
    RidePool_93c4f0(*(_QWORD*)(*(_QWORD*)v4 + 8LL), *(unsigned int*)(a1 + 40),
                    v37);
    (*(void (**)(__int64))(*(_QWORD*)a1 + 440LL))(a1);
    v19 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                         GameData_212e090[0], 0);
    (*(void (**)(__int64))(*(_QWORD*)v19 + 1112LL))(v19);
    LODWORD(v37[1]) = 0;
    v37[0] = 0;
    if ((v41 & 1) != 0) {
      *(_BYTE*)v43 = 0;
      v42 = 0;
    }
    else {
      LOWORD(v41) = 0;
    }
    GameRoutine_6e3b50(&v38, v39);
    v39 = 0;
    v40 = 0;
    v38 = &v39;
    if ((v41 & 1) != 0) {
      v20 = v43;
      if (v43 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v21, (_QWORD)(v43));
        v20 = v39;
      }
    }
    else {
      v20 = 0;
    }
    GameRoutine_6e3b50(&v38, v20);
    v13 = v24 & 1;
  }
  if (v13 != 0 && v26 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  (_QWORD)(v26));
  }
  return 13;
}

#pragma GCC visibility pop
