#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_oe_GetExpectedVolumeBalance(__int64, __int64);
__int64 nn_oe_SetExpectedVolumeBalance(float, float);
__int64 nn_oe_SetFocusHandlingMode(_QWORD);
__int64 nn_os_SleepThread(_QWORD);
__int64 nn_swkbd_GetRequiredWorkBufferSize(bool);
__int64 nn_swkbd_MakePreset(_QWORD, _QWORD);
__int64 nn_swkbd_SetGuideTextUtf8(__int64, const char*);
__int64 nn_swkbd_SetHeaderTextUtf8(__int64, const char*);
__int64 nn_swkbd_SetInitialTextUtf8(__int64, const char*);
__int64 nn_swkbd_SetSubTextUtf8(__int64, const char*);
__int64 nn_swkbd_ShowKeyboard(__int64, __int64);
extern __int64 GameData_21759e0;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 nn_swkbd_GetRequiredStringBufferSize();
void __attribute__((noreturn)) GameRoutine_60a310();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_hub_anonymous_ce2bc0(__int64* a1, __int64 a2);

__int64 game_hub_anonymous_ce2bc0(__int64* a1, __int64 a2)
{

#pragma clang fp contract(off)
  int v4;
  const char* v6;
  int v7;
  char v8;
  unsigned __int64 RequiredStringBufferSizeEv;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 RequiredWorkBufferSizeEb;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  const char* v19;
  __int64 v20;
  unsigned int v21;
  __int64 v22;
  unsigned int v23;
  char v24;
  unsigned __int8* v25;
  __int64* v26;
  __int64 v27;
  _BYTE* v28;
  int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  bool v35;
  __int64 v36;
  __int64 v37;
  bool v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v46;
  __int64 v47;
  _QWORD v48[2];
  struct {
    _DWORD v49[6];
    char gap56_[2];
    char v50;
    char gap59_[913];
    int v51;
    int v52;
    char gap980_[4];
    int v53;
    char gap988_[1];
    char v54;
    char gap990_[259];
    char v55;
    char gap1250_[22];
    __int16 v56;
    char gap1274_[62];
    __int64 v57;
    __int64 v58;
  } v49_;
  __int64 v59;
  _QWORD v60[2];

  v59 = 0;
  nn_oe_GetExpectedVolumeBalance((__int64)&v59 + 4, (__int64)&v59);
  nn_oe_SetExpectedVolumeBalance(0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
  nn_oe_SetFocusHandlingMode(0);
  if ((a1[1] & 1) != 0) {
    *(_BYTE*)a1[3] = 0;
    a1[2] = 0;
  }
  else {
    *((_WORD*)a1 + 4) = 0;
  }
  memset((__int64)v49_.v49, 0, 0x548u);
  v49_.v56 = 256;
  nn_swkbd_MakePreset(v49_.v49, 0);
  if ((unsigned __int8)GameData_21759e0 == 122) {
    v4 = 0;
    if (BYTE1(GameData_21759e0) == 104 && BYTE2(GameData_21759e0) == 45) {
      v39 = BYTE3(GameData_21759e0) == 72 && BYTE4(GameData_21759e0) == 97 &&
            BYTE5(GameData_21759e0) == 110;
      v40 = v39;
      if (v39 && BYTE6(GameData_21759e0) == 115 &&
          HIBYTE(GameData_21759e0) == 0) {
        v4 = 5;
      }
      else {
        if (BYTE6(GameData_21759e0) != 116) {
          v40 = 0;
        }
        if (HIBYTE(GameData_21759e0) != 0) {
          v46 = 0;
        }
        else {
          v46 = 6;
        }
        if (v40 == 1) {
          v4 = v46;
        }
        else {
          v4 = 0;
        }
      }
    }
  }
  else {
    v4 = 0;
    if ((unsigned __int8)GameData_21759e0 == 107) {
      if (BYTE2(GameData_21759e0) == 0 && BYTE1(GameData_21759e0) == 111) {
        v4 = 7;
      }
      else {
        v4 = 0;
      }
    }
  }
  v49_.v49[0] = v4;
  v6 = *(const char**)(a2 + 16);
  v49_.v53 = *(unsigned __int8*)(a2 + 64);
  v49_.v50 = 1;
  v49_.v54 = 1;
  v7 = *(_DWORD*)(a2 + 72);
  v49_.v52 = *(_DWORD*)(a2 + 68);
  v8 = *(_BYTE*)(a2 + 76);
  v49_.v51 = v7;
  v49_.v55 = v8;
  nn_swkbd_SetHeaderTextUtf8((__int64)v49_.v49, v6);
  nn_swkbd_SetSubTextUtf8((__int64)v49_.v49, *(const char**)(a2 + 32));
  nn_swkbd_SetGuideTextUtf8((__int64)v49_.v49, *(const char**)(a2 + 48));
  RequiredStringBufferSizeEv = nn_swkbd_GetRequiredStringBufferSize();
  v10 = *a1;
  v11 = RequiredStringBufferSizeEv;
  v48[0] = RequiredStringBufferSizeEv;
  v60[0] = 4096;
  v12 = *(_QWORD*)(v10 + 32);
  if (v12 != 0) {
    v13 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*))(*(_QWORD*)v12 + 48LL))(
        v12, v48, v60);
    RequiredWorkBufferSizeEb = nn_swkbd_GetRequiredWorkBufferSize(false);
    v15 = *a1;
    v16 = RequiredWorkBufferSizeEb;
    v48[0] = RequiredWorkBufferSizeEb;
    v60[0] = 4096;
    v17 = *(_QWORD*)(v15 + 32);
    if (v17 != 0) {
      v18 = (*(__int64 (**)(__int64, _QWORD*, _QWORD*))(*(_QWORD*)v17 + 48LL))(
          v17, v48, v60);
      v19 = *(const char**)a2;
      v20 = v18;
      v49_.v57 = v18;
      v49_.v58 = v16;
      nn_swkbd_SetInitialTextUtf8((__int64)v49_.v49, v19);
      v48[0] = v13;
      v48[1] = v11;
      v21 = nn_swkbd_ShowKeyboard((__int64)v48, (__int64)v49_.v49);
      v22 = v48[0];
      v23 = v21;
      if (v21 == 0) {
        v24 = *(_BYTE*)v48[0];
        if (*(_BYTE*)v48[0] != 0) {
          v47 = v20;
          v25 = (unsigned __int8*)(v48[0] + 1LL);
          v26 = (__int64*)fw_memory_g_heap_manager_ptr;
          while (1) {
            v30 = *((unsigned __int8*)a1 + 8);
            if ((v30 & 1) == 0) {
              break;
            }
            v27 = a1[3];
            v31 = (a1[1] & 0xFFFFFFFFFFFFFFFELL) - 1;
            if (a1[2] == v31) {
              if (v31 <= 0x7FFFFFFFFFFFFFF2LL) {
                v33 = (2 * v31) | 7;
                if (v33 == 23) {
                  v34 = 26;
                }
                else {
                  v34 = v33 + 1;
                }
                if (v31 >= 0xC) {
                  v32 = v34;
                }
                else {
                  v32 = 23;
                }
                goto LABEL_31;
              }
              v35 = false;
              v32 = -9;
            LABEL_35:
              v36 = fw_memory_HeapManager_Allocate(*v26, v32, 16, 0);
              memmove(v36, v27, v31);
              if (!v35 && v27 != 0) {
                v37 = 128;
                if (*(_QWORD*)(*v26 + 200) == 0) {
                  v37 = 56;
                }
                nn_mem_StandardAllocator_Free(*v26 + v37, v27);
              }
              a1[3] = v36;
              v27 = v36;
              a1[1] = v32 | 1;
              goto LABEL_18;
            }
            v31 = a1[2];
          LABEL_18:
            a1[2] = v31 + 1;
          LABEL_19:
            v28 = (_BYTE*)(v27 + v31);
            *v28 = v24;
            v28[1] = 0;
            v29 = *v25++;
            v24 = v29;
            if (v29 == 0) {
              v22 = v48[0];
              v23 = 0;
              v20 = v47;
              goto LABEL_57;
            }
          }
          if ((_DWORD)v30 != 44) {
            v31 = v30 >> 1;
            v27 = (__int64)a1 + 9;
            *((_BYTE*)a1 + 8) = v30 + 2;
            goto LABEL_19;
          }
          v31 = 22;
          v27 = (__int64)a1 + 9;
          v32 = 48;
        LABEL_31:
          v35 = v31 == 22;
          goto LABEL_35;
        }
      }
    LABEL_57:
      v41 = *a1;
      v60[0] = v22;
      v42 = *(_QWORD*)(v41 + 80);
      if (v42 != 0) {
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v42 + 48LL))(v42, v60);
        v43 = *a1;
        v60[0] = v20;
        v44 = *(_QWORD*)(v43 + 80);
        if (v44 != 0) {
          (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v44 + 48LL))(v44, v60);
          nn_oe_SetExpectedVolumeBalance(*((float*)&v59 + 1), *(float*)&v59);
          nn_os_SleepThread(16000000);
          nn_oe_SetFocusHandlingMode(3);
          return v23;
        }
      }
    }
  }
  GameRoutine_60a310();
}

#pragma GCC visibility pop
