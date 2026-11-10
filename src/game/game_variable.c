#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_826320(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_GameVariable_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* GameVariable_Destructor(_QWORD* result);
_QWORD* GameRoutine_82faa0(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameVariable_826e40(__int64, unsigned int, _QWORD*, int, int, int, int,
                            char);
__int64 GameRoutine_12274e0(_QWORD, _QWORD);
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c380(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_65c4a0(_QWORD, _QWORD);
__int64 GameRoutine_660f80(_QWORD);
__int64 GameRoutine_826320_alt1(_QWORD*) __asm__("GameRoutine_826320");
__int64 GameRoutine_827060();
__int64 GameRoutine_82ec20(_QWORD);
__int64 GameRoutine_82ed20(_QWORD);
__int64 GameRoutine_82f5a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_82f8a0(_QWORD, _QWORD);
__int64 GameRoutine_82fc00(_QWORD, _QWORD);
__int64 GameRoutine_82ffa0(_QWORD);
__int64 GameRoutine_8305a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8308a0(__int64, __int64, __int64);
__int64 GameRoutine_8309a0(__int64, __int64, __int64);
__int64 GameVariable_827280_alt1() __asm__("GameVariable_827280");
__int64 GameVariable_8277b0_alt1(_QWORD, _QWORD,
                                 _QWORD) __asm__("GameVariable_8277b0");
__int64 Impl_829ca0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _BYTE GameData_1b45b5e[3];
extern _UNKNOWN* GameData_1f9ebe0;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_1f9ecc0[])();
extern __int64 (*GameData_1f9ed50[])();
extern __int64 (*GameData_1f9f790[])();
extern __int64 (*GameData_1f9f800[])();
extern __int64 (*GameData_1f9fbc0[])();
extern __int64 GameData_21c6980;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_21309c8[5];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_667c50(void);
void __attribute__((noreturn)) GameRoutine_82f2d0(void);
void __attribute__((noreturn)) GameRoutine_834b20(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_835d90(_QWORD, _QWORD, _QWORD);
__int64 GameVariable_DeletingDestructor(_QWORD* a1);
bool GameVariable_827050(__int64 a1);
_QWORD* GameVariable_827070(__int64 a1, unsigned int a2, __int64* a3,
                            __int64* a4, int a5, char a6);
bool GameVariable_827280(__int64 a1);
__int64 GameVariable_8272a0(__int64 a1, unsigned int a2);
__int64 GameVariable_827530(__int64 a1, __int64 a2, __int64 a3);
__int64 GameVariable_8277b0(__int64 a1, unsigned __int8 a2, _QWORD* a3);
__int64 GameVariable_827b00(__int64 a1, unsigned __int64* a2);
char* GameVariable_827c00(char* result);
__int64 GameVariable_828620(__int64 result, unsigned __int8 a2);
__int64 GameVariable_828700(__int64 a1, __int64 a2, int a3);
__int64 GameVariable_828800(__int64 a1, __int64 a2, int a3);
__int64 GameVariable_8288e0(__int64 result, unsigned __int8 a2);
__int64 GameVariable_828a00(__int64 a1, __int64 a2, __int64 a3);
__int64 GameVariable_828dc0(__int64 a1, __int64 a2, int a3);
__int64 GameVariable_828f50(__int64 a1, __int64 a2);
_QWORD* GameVariable_828fa0(__int64 a1, unsigned int a2, unsigned __int64* a3,
                            int a4);
_QWORD* game_GameVariable_Impl_Push(_QWORD* result, __int64 a2,
                                    signed __int64 a3);
_QWORD* game_GameVariable_Impl_Pop(_QWORD* result, __int64 a2, __int64 a3);
__int64 game_GameVariable_Deserialize(__int64 a1, __int64* a2, __int64 a3);
__int64 game_GameVariable_Impl_Push_closure_Invoke(__int64 a1, __int64** a2);
__int64 game_GameVariable_Impl_Pop_closure_Invoke(__int64 a1, __int64** a2);
_QWORD* game_GameVariable_Impl_RegisterUpdate_closure_Invoke_834300(
    _QWORD* result, __int64* a2, __int64 a3);
_QWORD* game_GameVariable_Impl_RegisterUpdate_closure_Invoke_8346a0(__int64 a1,
                                                                    __int64 a2);
__int64
game_GameVariable_Impl_RegisterUpdate_closure_Invoke_834a40(__int64 result);
__int64 game_GameVariable_EachMerge_lambda0_Invoke(__int64 result,
                                                   unsigned __int8* a2,
                                                   __int64 a3);
__int64 game_GameVariable_ClrForViewer_lambda0_Invoke(__int64 a1,
                                                      unsigned __int8* a2);
__int64 game_GameVariable_Serialize_lambda0_Invoke_836410(__int64 a1,
                                                          unsigned __int8* a2);
__int64
game_GameVariable_Deserialize_lambda0_Invoke_836500(__int64 a1,
                                                    unsigned __int8* a2);
__int64 game_GameVariable_Serialize_lambda0_Invoke_836620(_QWORD* a1, char* a2,
                                                          __int64 a3);
__int64 game_GameVariable_Deserialize_lambda0_Invoke_836c80(__int64 a1,
                                                            _BYTE* a2,
                                                            __int64 a3);
__int64 game_GameVariable_Restore_lambda0_Invoke(__int64 a1,
                                                 unsigned __int8* a2);
__int64 game_GameVariable_Restore_lambda1_Invoke(__int64 a1,
                                                 unsigned __int8* a2);
__int64 game_GameVariable_ResetRoute_lambda0_Invoke(__int64 result,
                                                    unsigned __int8* a2);
__int64 game_GameVariable_ResetValue_lambda0_Invoke(__int64 a1,
                                                    unsigned __int8* a2,
                                                    __int64 a3);
__int64 game_GameVariable_ShareSerialize_lambda0_Invoke(__int64 a1,
                                                        unsigned __int8* a2);
__int64 game_GameVariable_ShareDeserialize_lambda0_Invoke(__int64 a1,
                                                          unsigned __int8* a2);
__int64 game_GameVariable_ShareDeserialize_lambda1_Invoke(__int64 a1,
                                                          unsigned __int8* a2);

_QWORD* GameVariable_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = result[1];
  *result = game_GameVariable_vtable;
  if (v1 != 0) {
    v2 = result;
    GameRoutine_826320(v1);
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
    v2[1] = 0;
  }
  return result;
}

__int64 GameVariable_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = (_QWORD*)a1[1];
  *a1 = game_GameVariable_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    GameRoutine_826320_alt1(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
    a1[1] = 0;
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, a1);
}

bool GameVariable_827050(__int64 a1)
{
  return *(_DWORD*)(a1 + 32) != *(_DWORD*)(a1 + 28);
}

_QWORD* GameVariable_827070(__int64 a1, unsigned int a2, __int64* a3,
                            __int64* a4, int a5, char a6)
{
  __int64 v6;
  __int64 v7;
  _QWORD* v13;
  _BYTE* v14;
  _QWORD* v15;
  char* v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  bool v21;
  unsigned __int64 v22;
  char* v23;
  char* v24;
  __int64 v25;
  _QWORD* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 (*v39)();

  v6 = *a3;
  if (*a3 == 0) {
    return nullptr;
  }
  v7 = *(_QWORD*)(a1 + 8);
  v13 = (_QWORD*)game_GameVariableTable_Find(v7, a3);
  if (v13 != nullptr) {
    v14 = (_BYTE*)a3[1];
    v15 = v13;
    if (v14 != nullptr && *v14 != 0) {
      *v13 = v6;
      v16 = (char*)a3[1];
      v13[1] = v16;
      if (v16 != nullptr) {
        v17 = v16;
      }
      else {
        v17 = &GameData_1a9f09e;
      }
      v18 = strlen(v17);
      GameRoutine_60a060(v15 + 6, v17, v18);
      v19 = *((unsigned __int8*)v15 + 48);
      *((_DWORD*)v15 + 7) = a5;
      v20 = v19 >> 1;
      v21 = (v19 & 1) == 0;
      v22 = v15[7];
      if (v21) {
        v22 = v20;
      }
      v23 = (char*)v15 + 49;
      if (!v21) {
        v23 = (char*)v15[8];
      }
      if (v22 != 0) {
        v24 = v23;
      }
      else {
        v24 = nullptr;
      }
      v15[1] = v24;
    }
    else {
      GameRoutine_82ed20(v13 + 6);
    }
  }
  else {
    v25 = GameVariable_8277b0_alt1(v7, a2, a3);
    *(_DWORD*)(v25 + 32) = a5;
    *(_DWORD*)(v25 + 20) = 0;
    v15 = (_QWORD*)v25;
    *(_DWORD*)(v25 + 24) = ((unsigned __int64)(a4[1] - *a4) >> 3) - 1;
    *(_DWORD*)(v25 + 28) = a5;
    *(_WORD*)(v25 + 17) = 1;
    v26 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v27 = (__int64*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    v29 = *a4;
    v28 = a4[1];
    v30 = v27;
    *v27 = 0;
    v27[1] = 0;
    v31 = v28 - v29;
    v27[2] = 0;
    if (v28 != v29) {
      if (v31 < 0) {
        GameRoutine_667c50();
      }
      v32 = fw_memory_HeapManager_Allocate(*v26, v28 - v29, 16, 0);
      v33 = v32 + v31;
      *v30 = v32;
      v30[2] = v32 + v31;
      memcpy(v32, v29, v31);
      v30[1] = v33;
    }
    v34 = (__int64*)v15[5];
    v15[5] = v30;
    if (v34 != nullptr) {
      v35 = *v34;
      if (*v34 != 0) {
        v36 = *v26;
        v34[1] = v35;
        v37 = 128;
        if (*(_QWORD*)(v36 + 200) == 0) {
          v37 = 56;
        }
        nn_mem_StandardAllocator_Free(v36 + v37, v35);
      }
      v38 = 128;
      if (*(_QWORD*)(*v26 + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(*v26 + v38, v34);
    }
    if ((a6 & 1) != 0) {
      v39 = GameVariable_827280_alt1;
    }
    else {
      v39 = GameRoutine_827060;
    }
    v15[9] = v39;
    v15[10] = 0;
  }
  return v15;
}

bool GameVariable_827280(__int64 a1)
{
  return *(_DWORD*)(a1 + 32) == *(_DWORD*)(a1 + 24);
}

__int64 GameVariable_8272a0(__int64 a1, unsigned int a2)
{
  _QWORD* v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v12;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = v2[491598];
  if (v3 != 0 && v2[491600] != 0) {
    v5 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v6 = a2;
      if (v3 <= a2) {
        v6 = a2 % (unsigned int)v3;
      }
    }
    else {
      v6 = ((_DWORD)v3 - 1) & a2;
    }
    v7 = *(__int64***)(v2[491597] + 8 * v6);
    if (v7 != nullptr) {
      v8 = *v7;
      if (v8 != nullptr) {
        if ((v3 & v5) == 0) {
          while (1) {
            v12 = v8[1];
            if (v12 == a2) {
              if (*((_DWORD*)v8 + 4) == a2) {
              LABEL_30:
                v10 = v8 + 3;
                if (v8[3] != 0) {
                  return game_GameVariableTable_Find(v2, v10);
                }
                return 0;
              }
            }
            else if ((v12 & v5) != v6) {
            LABEL_28:
              v10 = &GameData_21c6980;
              if (GameData_21c6980 != 0) {
                return game_GameVariableTable_Find(v2, v10);
              }
              return 0;
            }
            v8 = (__int64*)*v8;
            if (v8 == nullptr) {
              goto LABEL_28;
            }
          }
        }
        do {
          v9 = v8[1];
          if (v9 == a2) {
            if (*((_DWORD*)v8 + 4) == a2) {
              goto LABEL_30;
            }
            goto LABEL_14;
          }
          if (v9 >= v3) {
            v9 %= v3;
          }
          if (v9 != v6) {
            break;
          }
        LABEL_14:
          v8 = (__int64*)*v8;
        } while (v8 != nullptr);
        v10 = &GameData_21c6980;
        if (GameData_21c6980 == 0) {
          return 0;
        }
        return game_GameVariableTable_Find(v2, v10);
      }
    }
  }
  v10 = &GameData_21c6980;
  if (GameData_21c6980 != 0) {
    return game_GameVariableTable_Find(v2, v10);
  }
  return 0;
}

__int64 GameVariable_827530(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  _BYTE v6[4];

  v4 = *(_QWORD*)(a1 + 32);
  v6[0] = 0;
  if (v4 != 0) {
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
    v4 = *(_QWORD*)(a1 + 32);
    v6[0] = 1;
    if (v4 != 0) {
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
      v4 = *(_QWORD*)(a1 + 32);
      v6[0] = 2;
      if (v4 != 0) {
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
        v4 = *(_QWORD*)(a1 + 32);
        v6[0] = 3;
        if (v4 != 0) {
          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
          v4 = *(_QWORD*)(a1 + 32);
          v6[0] = 4;
          if (v4 != 0) {
            (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
            v4 = *(_QWORD*)(a1 + 32);
            v6[0] = 5;
            if (v4 != 0) {
              (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
              v4 = *(_QWORD*)(a1 + 32);
              v6[0] = 6;
              if (v4 != 0) {
                (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
                v4 = *(_QWORD*)(a1 + 32);
                v6[0] = 7;
                if (v4 != 0) {
                  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v6);
                  v4 = *(_QWORD*)(a1 + 32);
                  v6[0] = 8;
                  if (v4 != 0) {
                    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4,
                                                                         v6);
                    v4 = *(_QWORD*)(a1 + 32);
                    v6[0] = 9;
                    if (v4 != 0) {
                      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4,
                                                                           v6);
                      v4 = *(_QWORD*)(a1 + 32);
                      v6[0] = 10;
                      if (v4 != 0) {
                        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(
                            v4, v6);
                        v4 = *(_QWORD*)(a1 + 32);
                        v6[0] = 11;
                        if (v4 != 0) {
                          (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(
                              v4, v6);
                          v4 = *(_QWORD*)(a1 + 32);
                          v6[0] = 12;
                          if (v4 != 0) {
                            (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                           48LL))(v4, v6);
                            v4 = *(_QWORD*)(a1 + 32);
                            v6[0] = 13;
                            if (v4 != 0) {
                              (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                             48LL))(v4, v6);
                              v4 = *(_QWORD*)(a1 + 32);
                              v6[0] = 14;
                              if (v4 != 0) {
                                (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                               48LL))(v4, v6);
                                v4 = *(_QWORD*)(a1 + 32);
                                v6[0] = 15;
                                if (v4 != 0) {
                                  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                                 48LL))(v4, v6);
                                  v4 = *(_QWORD*)(a1 + 32);
                                  v6[0] = 16;
                                  if (v4 != 0) {
                                    (*(void (**)(__int64, _BYTE*))(
                                        *(_QWORD*)v4 + 48LL))(v4, v6);
                                    v4 = *(_QWORD*)(a1 + 32);
                                    v6[0] = 17;
                                    if (v4 != 0) {
                                      (*(void (**)(__int64, _BYTE*))(
                                          *(_QWORD*)v4 + 48LL))(v4, v6);
                                      v4 = *(_QWORD*)(a1 + 32);
                                      v6[0] = 18;
                                      if (v4 != 0) {
                                        return (
                                            *(__int64 (**)(__int64, _BYTE*))(
                                                *(_QWORD*)v4 + 48LL))(v4, v6);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_60a310(v4, a2, a3);
}

__int64 GameVariable_8277b0(__int64 a1, unsigned __int8 a2, _QWORD* a3)
{
  _QWORD* v3;
  int v4;
  __int64* v5;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  unsigned __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  bool v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int16 v49;
  char v50;
  __int16* v51;

  v3 = (_QWORD*)(a1 + 3928064);
  v4 = *(_DWORD*)(a1 + 3932096);
  if (v4 > 32766) {
    return 0;
  }
  v5 = *(__int64**)(a1 + 3932088);
  v9 = *v5;
  *(_DWORD*)(a1 + 3932096) = v4 + 1;
  *(_QWORD*)(a1 + 3932088) = v5 + 1;
  LODWORD(v5) = *(_DWORD*)(a1 + 3932104);
  v49 = 28087 * ((unsigned int)(v9 - a1 - 48) >> 4);
  v10 = (unsigned int)(*(_DWORD*)(a1 + 3932112) - (_DWORD)v5) >> 3;
  v51 = &v49;
  v11 = GameRoutine_82f5a0(a1 + 3932128, &v49, std___1_piecewise_construct_ptr,
                           &v51, &v50);
  *(_WORD*)(v11 + 18) = v10;
  v12 = (_QWORD*)v3[506];
  v13 = v3[507];
  if ((unsigned __int64)v12 < v13) {
    *v12 = v9;
    v3[506] = v12 + 1;
    if (v9 == 0) {
      return v9;
    }
    goto LABEL_21;
  }
  v14 = v3[505];
  v15 = (char*)v12 - v14;
  v16 = ((__int64)v12 - v14) >> 3;
  v17 = v16 + 1;
  if ((unsigned __int64)(v16 + 1) >> 61 != 0) {
    goto LABEL_49;
  }
  v18 = v13 - v14;
  if (v18 >> 2 > v17) {
    v17 = v18 >> 2;
  }
  if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
    v19 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v19 = v17;
  }
  if (v19 != 0) {
    if (v19 >> 61 != 0) {
      goto LABEL_50;
    }
    v20 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 8 * v19, 16,
                                         0);
  }
  else {
    v20 = 0;
  }
  v21 = v20 + 8 * v19;
  v22 = (char*)v12 - v14;
  v23 = (__int64)&v15[v20 + -8 * v16];
  *(_QWORD*)&v15[v20] = v9;
  v24 = (__int64)&v15[v20 + 8];
  memcpy(v23, v14, v22);
  v3[505] = v23;
  v3[506] = v24;
  v3[507] = v21;
  if (v14 != 0) {
    v25 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v25, v14);
  }
  v3[506] = v24;
  if (v9 != 0) {
  LABEL_21:
    v11 = GameRoutine_65c380(a1, a3, v9);
    v26 = (__int64*)(a1 + 24LL * a2 + 3932168);
    v28 = *(_QWORD**)(a1 + 24LL * a2 + 3932176);
    v27 = *(_QWORD*)(a1 + 24LL * a2 + 3932184);
    if ((unsigned __int64)v28 < v27) {
      *v28 = v9;
      v29 = (__int64)(v28 + 1);
    LABEL_37:
      v26[1] = v29;
      *(_BYTE*)(v9 + 16) = a2;
      *(_QWORD*)v9 = *a3;
      v39 = (char*)a3[1];
      *(_QWORD*)(v9 + 8) = v39;
      if (v39 != nullptr) {
        v40 = v39;
      }
      else {
        v40 = &GameData_1a9f09e;
      }
      v41 = strlen(v40);
      GameRoutine_60a060(v9 + 48, v40, v41);
      v42 = *(unsigned __int8*)(v9 + 48);
      v43 = v42 >> 1;
      v44 = (v42 & 1) == 0;
      v45 = *(_QWORD*)(v9 + 56);
      if (v44) {
        v45 = v43;
      }
      v46 = v9 + 49;
      if (!v44) {
        v46 = *(_QWORD*)(v9 + 64);
      }
      if (v45 != 0) {
        v47 = v46;
      }
      else {
        v47 = 0;
      }
      *(_QWORD*)(v9 + 8) = v47;
      return v9;
    }
    v30 = *v26;
    v31 = (__int64)v28 - *v26;
    v32 = (v31 >> 3) + 1;
    if (v32 >> 61 == 0) {
      v33 = v27 - v30;
      if (v33 >> 2 > v32) {
        v32 = v33 >> 2;
      }
      if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF8LL) {
        v34 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v34 = v32;
      }
      if (v34 == 0) {
        v35 = 0;
      LABEL_33:
        v36 = v35 + 8 * v34;
        v37 = v35 + v31 - 8 * (v31 >> 3);
        *(_QWORD*)(v35 + v31) = v9;
        v29 = v35 + v31 + 8;
        memcpy(v37, v30, v31);
        *v26 = v37;
        v26[1] = v29;
        v26[2] = v36;
        if (v30 != 0) {
          v38 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v38 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v30);
        }
        goto LABEL_37;
      }
      if (v34 >> 61 == 0) {
        v35 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v34, 16, 0);
        goto LABEL_33;
      }
    LABEL_50:
      GameRoutine_60a210(v11);
    }
  LABEL_49:
    GameRoutine_82f2d0();
  }
  return v9;
}

__int64 GameVariable_827b00(__int64 a1, unsigned __int64* a2)
{
  unsigned __int64 v2;
  _QWORD* v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 result;
  __int64 v12;

  v2 = *a2;
  if (*a2 != 0) {
    v3 = *(_QWORD**)(a1 + 8);
    v4 = v3[2];
    if (v4 != 0 && v3[4] != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = *a2;
        if (v2 >= v4) {
          v7 = v2 % v4;
        }
      }
      else {
        v7 = v6 & v2;
      }
      v8 = *(_QWORD**)(v3[1] + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v12 = v9[1];
              if (v2 == v12) {
                if (v9[2] == v2) {
                  return 1;
                }
              }
              else if ((v12 & v6) != v7) {
                return 0;
              }
              v9 = (_QWORD*)*v9;
              result = 0;
              if (v9 == nullptr) {
                return result;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v2 == v10) {
              if (v9[2] == v2) {
                return 1;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                return 0;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }
  return 0;
}

char* GameVariable_827c00(char* result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned int v12;
  __int64 v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  char* v27;
  char* v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  int v41;
  int v42;
  __int64 v43;
  _QWORD* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned int v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64*** v50;
  __int64** v51;
  unsigned __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  _QWORD* v79;
  _QWORD* v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  _QWORD* v88;
  _QWORD* v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  _QWORD* v98;
  __int64 v99;
  __int64** v100;
  _QWORD* v101;
  _QWORD* v102;
  char* v103;
  __int64* v104;
  __int16 v105;
  char v106;
  _QWORD v107[3];

  v1 = 0;
  v102 = result + 3928064;
  v97 = result + 3932160;
  v98 = result + 3932168;
  v101 = result + 48;
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v103 = result;
  while (2) {
    v99 = v1;
    v100 = (__int64**)&v98[3 * v1];
    v3 = *v100;
    v104 = v100[1];
    if (*v100 == v104) {
      goto LABEL_113;
    }
    while (2) {
      v5 = *v3;
      v6 = *(__int64**)(*v3 + 40);
      *(_QWORD*)(*v3 + 40) = 0;
      if (v6 != nullptr) {
        v7 = *v6;
        if (*v6 != 0) {
          v8 = *v2;
          v6[1] = v7;
          if (*(_QWORD*)(v8 + 200) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(v8 + v9, v7);
        }
        if (*(_QWORD*)(*v2 + 200) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        result = (char*)nn_mem_StandardAllocator_Free(*v2 + v10, v6);
      }
      if ((*(_BYTE*)(v5 + 48) & 1) != 0) {
        v11 = 0;
        **(_BYTE**)(v5 + 64) = 0;
        *(_QWORD*)(v5 + 56) = 0;
        v12 = *(unsigned __int8*)(v5 + 48);
      }
      else {
        v11 = *(_QWORD*)(v5 + 56);
        v12 = 0;
        *(_WORD*)(v5 + 48) = 0;
      }
      v13 = *(_QWORD*)(v5 + 48);
      v14 = (v12 & 1) == 0;
      if ((v12 & 1) != 0) {
        v15 = v11;
      }
      else {
        v15 = v12 >> 1;
      }
      v16 = v15 | 7;
      if (v14) {
        v17 = 22;
      }
      else {
        v17 = (v13 & 0xFFFFFFFFFFFFFFFELL) - 1;
      }
      if (v16 == 23) {
        v16 = 25;
      }
      if (v15 <= 0x16) {
        v18 = 22;
      }
      else {
        v18 = v16;
      }
      if (v18 != v17) {
        v19 = *(char**)(v5 + 64);
        if (v18 > 0x16) {
          result = (char*)fw_memory_HeapManager_Allocate(*v2, v18 + 1, 16, 0);
          v21 = result;
          if ((v13 & 1) != 0) {
            v22 = (v13 & 0xFFFFFFFFFFFFFFFELL) - 1;
          }
          else {
            v22 = 22;
          }
          if (v18 >= v22) {
            v20 = *v2;
            goto LABEL_48;
          }
          v23 = result;
          if (v11 != -1) {
            result = (char*)memmove(result, v19, v11 + 1);
          }
          if (v19 != nullptr) {
            v24 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v24 = 128;
            }
            result = (char*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v19);
          }
          *(_QWORD*)(v5 + 64) = v23;
          *(_QWORD*)(v5 + 48) = (v18 + 1) | 1;
          v2 = (__int64*)fw_memory_g_heap_manager_ptr;
        }
        else {
          *(_BYTE*)(v5 + 48) = 2 * v11;
          if (v11 != -1) {
            result = (char*)memmove(v5 + 49, v19, v11 + 1);
          }
          if (v19 != nullptr) {
            v20 = *v2;
            v21 = v19;
          LABEL_48:
            v25 = 56;
            if (*(_QWORD*)(v20 + 200) != 0) {
              v25 = 128;
            }
            result = (char*)nn_mem_StandardAllocator_Free(v20 + v25, v21);
          }
        }
      }
      v27 = *(char**)(v5 + 88);
      v26 = *(char**)(v5 + 96);
      v28 = v27;
      if (v27 != v26) {
        while (1) {
          result = *((char**)v26 - 2);
          v30 = v26 - 48;
          if (v26 - 48 == result) {
            v29 = 32;
          }
          else {
            if (result == nullptr) {
              goto LABEL_55;
            }
            v29 = 40;
          }
          result = (char*)(*(__int64 (**)(void))(*(_QWORD*)result + v29))();
        LABEL_55:
          v26 = v30;
          if (v30 == v27) {
            v28 = *(char**)(v5 + 88);
            break;
          }
        }
      }
      v31 = *(_QWORD*)(v5 + 104);
      v32 = v27 - v28;
      *(_QWORD*)(v5 + 96) = v27;
      if (v31 - (__int64)v28 <= (unsigned __int64)(v27 - v28)) {
        goto LABEL_83;
      }
      if (v27 == v28) {
        v34 = v27 - v28;
        goto LABEL_79;
      }
      if (0xAAAAAAAAAAAAAAABLL * (v32 >> 4) >= 0x555555555555556LL) {
        GameRoutine_60a210(result);
      }
      v33 = fw_memory_HeapManager_Allocate(*v2, v27 - v28, 16, 0);
      v34 = v33 + v32;
      v32 = v33;
      v35 = v28;
      v36 = v33;
      do {
        v37 = *((char**)v35 + 4);
        if (v37 != nullptr) {
          if (v35 == v37) {
            *(_QWORD*)(v36 + 32) = v36;
            (*(void (**)(char*, __int64))(*(_QWORD*)v37 + 24LL))(v37, v36);
          }
          else {
            *(_QWORD*)(v36 + 32) = v37;
            *((_QWORD*)v35 + 4) = 0;
          }
        }
        else {
          *(_QWORD*)(v36 + 32) = 0;
        }
        v35 += 48;
        v36 += 48;
      } while (v35 != v27);
      v2 = &fw_memory_g_heap_manager;
      do {
        v39 = *((char**)v28 + 4);
        if (v28 == v39) {
          v38 = 32;
        LABEL_72:
          (*(void (**)(void))(*(_QWORD*)v39 + v38))();
          goto LABEL_73;
        }
        if (v39 != nullptr) {
          v38 = 40;
          goto LABEL_72;
        }
      LABEL_73:
        v28 += 48;
      } while (v28 != v27);
      v28 = *(char**)(v5 + 88);
    LABEL_79:
      *(_QWORD*)(v5 + 88) = v32;
      *(_QWORD*)(v5 + 96) = v34;
      *(_QWORD*)(v5 + 104) = v34;
      if (v28 != nullptr) {
        v40 = 56;
        if (*(_QWORD*)(*v2 + 200) != 0) {
          v40 = 128;
        }
        nn_mem_StandardAllocator_Free(*v2 + v40, v28);
      }
    LABEL_83:
      *(_QWORD*)(v5 + 72) = 0;
      *(_QWORD*)(v5 + 80) = 0;
      v41 = *((_DWORD*)v102 + 1008);
      v42 = v41 - 1;
      if (v41 >= 1) {
        v43 = *v3;
        *((_DWORD*)v102 + 1008) = v42;
        v44 = (_QWORD*)(v102[503] - 8LL);
        v102[503] = v44;
        *v44 = v43;
        v45 = v102[509];
        if (v45 != 0 && v102[511] != 0) {
          v46 = v45 - 1;
          v47 = (unsigned __int16)(28087 * ((v43 - (__int64)v101) >> 4));
          v48 = (unsigned __int16)(28087 * ((v43 - (__int64)v101) >> 4));
          if ((v45 & (v45 - 1)) != 0) {
            v49 = (unsigned __int16)(28087 * ((v43 - (__int64)v101) >> 4));
            if (v45 <= v48) {
              v49 = v47 % (unsigned int)v45;
            }
          }
          else {
            v49 = ((_DWORD)v45 - 1) & (unsigned int)v48;
          }
          v50 = *(__int64****)(*((_QWORD*)v103 + 491516) + 8 * v49);
          if (v50 != nullptr) {
            v51 = *v50;
            if (*v50 != nullptr) {
              if ((v45 & v46) == 0) {
                while (1) {
                  v53 = v51[1];
                  if (v53 == (__int64*)v48) {
                    if (*((unsigned __int16*)v51 + 8) == v47) {
                      goto LABEL_106;
                    }
                  }
                  else if (((unsigned __int64)v53 & v46) != v49) {
                    goto LABEL_5;
                  }
                  v51 = (__int64**)*v51;
                  if (v51 == nullptr) {
                    goto LABEL_5;
                  }
                }
              }
              do {
                v52 = (unsigned __int64)v51[1];
                if (v52 == v48) {
                  if (*((unsigned __int16*)v51 + 8) == v47) {
                  LABEL_106:
                    v54 = v102[506];
                    v55 = *(_QWORD*)(v54 - 8);
                    if (v55 != v43) {
                      v56 = *((unsigned __int16*)v51 + 9);
                      *(_QWORD*)(v102[505] + 8 * v56) = v55;
                      v105 = 28087 * ((unsigned int)(v55 - (_DWORD)v101) >> 4);
                      v107[0] = &v105;
                      *(_WORD*)(GameRoutine_82f5a0(
                                    v103 + 3932128, &v105,
                                    std___1_piecewise_construct_ptr, v107,
                                    &v106) +
                                18) = v56;
                      v54 = v102[506];
                    }
                    v102[506] = v54 - 8;
                    GameRoutine_82faa0(v107, v103 + 3932128, v51);
                    v57 = v107[0];
                    v107[0] = 0;
                    if (v57 != 0) {
                      v58 = 56;
                      if (*(_QWORD*)(*v2 + 200) != 0) {
                        v58 = 128;
                      }
                      nn_mem_StandardAllocator_Free(*v2 + v58, v57);
                    }
                    break;
                  }
                }
                else {
                  if (v52 >= v45) {
                    v52 %= v45;
                  }
                  if (v52 != v49) {
                    break;
                  }
                }
                v51 = (__int64**)*v51;
              } while (v51 != nullptr);
            }
          }
        }
      }
    LABEL_5:
      v4 = *v3++;
      result = (char*)GameRoutine_65c4a0(v103, v4);
      if (v3 != v104) {
        continue;
      }
      break;
    }
    v3 = *v100;
  LABEL_113:
    v59 = v100[2];
    v100[1] = v3;
    if (v59 != v3) {
      v100[1] = nullptr;
      v100[2] = nullptr;
      *v100 = nullptr;
      if (v3 != nullptr) {
        v60 = 56;
        if (*(_QWORD*)(*v2 + 200) != 0) {
          v60 = 128;
        }
        result = (char*)nn_mem_StandardAllocator_Free(*v2 + v60, v3);
      }
    }
    v1 = v99 + 1;
    if (v99 != 18) {
      continue;
    }
    break;
  }
  v61 = v97[58];
  v62 = v97[60];
  v97[59] = v61;
  if (v62 != v61) {
    v97[59] = 0;
    v97[60] = 0;
    v97[58] = 0;
    if (v61 != 0) {
      v63 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v63 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free(*v2 + v63, v61);
    }
  }
  v64 = v97[61];
  v65 = v97[63];
  v97[62] = v64;
  if (v65 != v64) {
    v97[62] = 0;
    v97[63] = 0;
    v97[61] = 0;
    if (v64 != 0) {
      v66 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v66 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free(*v2 + v66, v64);
    }
  }
  v67 = v97[64];
  v68 = v97[66];
  v97[65] = v67;
  if (v68 != v67) {
    v97[65] = 0;
    v97[66] = 0;
    v97[64] = 0;
    if (v67 != 0) {
      v69 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v69 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free(*v2 + v69, v67);
    }
  }
  v70 = v97[67];
  v71 = v97[69];
  v97[68] = v70;
  if (v71 != v70) {
    v97[68] = 0;
    v97[69] = 0;
    v97[67] = 0;
    if (v70 != 0) {
      v72 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v72 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free(*v2 + v72, v70);
    }
  }
  v73 = v97[70];
  v74 = v97[72];
  v97[71] = v73;
  if (v74 != v73) {
    v97[71] = 0;
    v97[72] = 0;
    v97[70] = 0;
    if (v73 != 0) {
      v75 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v75 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free(*v2 + v75, v73);
    }
  }
  v76 = v97[73];
  v77 = v97[75];
  v97[74] = v76;
  if (v77 != v76) {
    v97[74] = 0;
    v97[75] = 0;
    v97[73] = 0;
    if (v76 != 0) {
      v78 = 128;
      if (*(_QWORD*)(*v2 + 200) == 0) {
        v78 = 56;
      }
      result = (char*)nn_mem_StandardAllocator_Free(*v2 + v78, v76);
    }
  }
  if (v97[80] != 0) {
    v79 = (_QWORD*)v97[79];
    if (v79 != nullptr) {
      do {
        v80 = (_QWORD*)*v79;
        if (*(_QWORD*)(*v2 + 200) != 0) {
          v81 = 128;
        }
        else {
          v81 = 56;
        }
        result = (char*)nn_mem_StandardAllocator_Free(*v2 + v81, v79);
        v79 = v80;
      } while (v80 != nullptr);
    }
    v82 = v97[78];
    v97[79] = 0;
    if (v82 != 0) {
      v83 = v82 & 7;
      if (v82 >= 8) {
        v85 = v82 & 0xFFFFFFFFFFFFFFF8LL;
        v84 = 0;
        do {
          *(_QWORD*)(v97[77] + 8 * v84) = 0;
          *(_QWORD*)(v97[77] + 8 * v84 + 8) = 0;
          *(_QWORD*)(v97[77] + 8 * v84 + 16) = 0;
          *(_QWORD*)(v97[77] + 8 * v84 + 24) = 0;
          *(_QWORD*)(v97[77] + 8 * v84 + 32) = 0;
          *(_QWORD*)(v97[77] + 8 * v84 + 40) = 0;
          *(_QWORD*)(v97[77] + 8 * v84 + 48) = 0;
          v86 = v97[77] + 8 * v84;
          v84 += 8;
          *(_QWORD*)(v86 + 56) = 0;
        } while (v85 != v84);
      }
      else {
        v84 = 0;
      }
      if (v83 != 0) {
        v87 = 8 * v84;
        do {
          --v83;
          *(_QWORD*)(v97[77] + v87) = 0;
          v87 += 8;
        } while (v83 != 0);
      }
    }
    v97[80] = 0;
  }
  if (v97[85] != 0) {
    v88 = (_QWORD*)v97[84];
    if (v88 != nullptr) {
      do {
        v89 = (_QWORD*)*v88;
        if (*(_QWORD*)(*v2 + 200) != 0) {
          v90 = 128;
        }
        else {
          v90 = 56;
        }
        result = (char*)nn_mem_StandardAllocator_Free(*v2 + v90, v88);
        v88 = v89;
      } while (v89 != nullptr);
    }
    v91 = v97[83];
    v97[84] = 0;
    if (v91 != 0) {
      v92 = v91 & 7;
      if (v91 >= 8) {
        v94 = v91 & 0xFFFFFFFFFFFFFFF8LL;
        v93 = 0;
        do {
          *(_QWORD*)(v97[82] + 8 * v93) = 0;
          *(_QWORD*)(v97[82] + 8 * v93 + 8) = 0;
          *(_QWORD*)(v97[82] + 8 * v93 + 16) = 0;
          *(_QWORD*)(v97[82] + 8 * v93 + 24) = 0;
          *(_QWORD*)(v97[82] + 8 * v93 + 32) = 0;
          *(_QWORD*)(v97[82] + 8 * v93 + 40) = 0;
          *(_QWORD*)(v97[82] + 8 * v93 + 48) = 0;
          v95 = v97[82] + 8 * v93;
          v93 += 8;
          *(_QWORD*)(v95 + 56) = 0;
        } while (v94 != v93);
      }
      else {
        v93 = 0;
      }
      if (v92 != 0) {
        v96 = 8 * v93;
        do {
          --v92;
          *(_QWORD*)(v97[82] + v96) = 0;
          v96 += 8;
        } while (v92 != 0);
      }
    }
    v97[85] = 0;
  }
  return result;
}

__int64 GameVariable_828620(__int64 result, unsigned __int8 a2)
{
  __int64 v2;
  __int64** v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;

  v2 = *(_QWORD*)(result + 8);
  v3 = (__int64**)(v2 + 24LL * a2 + 3932168);
  v4 = *v3;
  v5 = *(__int64**)(v2 + 24LL * a2 + 3932176);
  if (*v3 != v5) {
    do {
      GameRoutine_82ec20(*v4);
      GameRoutine_82f8a0(v2 + 48, *v4);
      v6 = *v4++;
      result = GameRoutine_65c4a0(v2, v6);
    } while (v4 != v5);
    v4 = *v3;
  }
  v7 = v3[2];
  v3[1] = v4;
  if (v7 != v4) {
    v3[1] = nullptr;
    v3[2] = nullptr;
    *v3 = nullptr;
    if (v4 != nullptr) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v4);
    }
  }
  return result;
}

__int64 GameVariable_828700(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  __int64 i;
  __int64 v15;
  __int64 v16;
  __int64 v18;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = game_GameVariableTable_Find(v3, a2);
  v9 = v5;
  if (v5 != 0) {
    v10 = *(_DWORD*)(v5 + 32);
    if (v10 <= a3) {
      v11 = a3;
    }
    else {
      v11 = *(_DWORD*)(v5 + 32);
    }
    if (a3 != 0) {
      v12 = a3;
    }
    else {
      v12 = *(_DWORD*)(v5 + 32);
    }
    if (*(_BYTE*)(v5 + 18) != 0) {
      v13 = v12;
    }
    else {
      v13 = v11;
    }
    if (v10 == v13) {
      v8 = 0;
    }
    else {
      *(_DWORD*)(v5 + 32) = v13;
      if ((*(_BYTE*)(v3 + 3932768) & 0xAE) == 0 && GameData_22400f8 != 0) {
        GameRoutine_12274e0(GameData_22400f8, v5);
      }
      v15 = *(_QWORD*)(v9 + 88);
      for (i = *(_QWORD*)(v9 + 96); v15 != i; v15 += 48) {
        v18 = v9;
        v16 = *(_QWORD*)(v15 + 32);
        if (v16 == 0) {
          GameRoutine_60a310(0, v6, v7);
        }
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v16 + 48LL))(v16, &v18);
      }
      v8 = 1;
    }
  }
  return (v9 != 0) & (unsigned __int8)v8;
}

__int64 GameVariable_828800(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 i;
  __int64 v11;
  __int64 v12;
  __int64 v14;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = game_GameVariableTable_Find(v3, a2);
  v9 = v5;
  if (v5 != 0) {
    if (*(_DWORD*)(v5 + 32) == a3) {
      v8 = 0;
    }
    else {
      *(_DWORD*)(v5 + 32) = a3;
      if ((*(_BYTE*)(v3 + 3932768) & 0xAE) == 0 && GameData_22400f8 != 0) {
        GameRoutine_12274e0(GameData_22400f8, v5);
      }
      v11 = *(_QWORD*)(v9 + 88);
      for (i = *(_QWORD*)(v9 + 96); v11 != i; v11 += 48) {
        v14 = v9;
        v12 = *(_QWORD*)(v11 + 32);
        if (v12 == 0) {
          GameRoutine_60a310(0, v6, v7);
        }
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v12 + 48LL))(v12, &v14);
      }
      v8 = 1;
    }
  }
  return (v9 != 0) & (unsigned __int8)v8;
}

__int64 GameVariable_8288e0(__int64 result, unsigned __int8 a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 i;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = (__int64*)(*(_QWORD*)(result + 8) + 24LL * a2 + 3932168);
  v3 = *v2;
  if (*(_QWORD*)(*(_QWORD*)(result + 8) + 24LL * a2 + 3932176) != *v2) {
    v4 = result;
    v5 = 0;
    v6 = GameData_21309c8[0];
    do {
      v7 = *(_QWORD*)(v3 + 8 * v5);
      v8 = *(_QWORD*)(v4 + 8);
      v9 = *(_DWORD*)(v7 + 28);
      result = game_GameVariableTable_Find(v8, v7);
      if (result != 0) {
        v12 = result;
        if (*(_DWORD*)(result + 32) != v9) {
          *(_DWORD*)(result + 32) = v9;
          if ((*(_BYTE*)(v8 + 3932768) & 0xAE) == 0) {
            result = *v6;
            if (*v6 != 0) {
              result = GameRoutine_12274e0(result, v12);
            }
          }
          v14 = *(_QWORD*)(v12 + 88);
          for (i = *(_QWORD*)(v12 + 96); v14 != i; v14 += 48) {
            v16 = v12;
            v15 = *(_QWORD*)(v14 + 32);
            if (v15 == 0) {
              GameRoutine_60a310(0, v10, v11);
            }
            result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v15 + 48LL))(
                v15, &v16);
          }
        }
      }
      v3 = *v2;
      ++v5;
    } while (v5 < (v2[1] - *v2) >> 3);
  }
  return result;
}

__int64 GameVariable_828a00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 result;
  _BYTE v7[4];

  v4 = *(_QWORD*)(a2 + 32);
  v7[0] = 0;
  if (v4 != 0) {
    if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v7) & 1) !=
        0) {
      GameVariable_8288e0(a1, 0);
    }
    v4 = *(_QWORD*)(a2 + 32);
    v7[0] = 1;
    if (v4 != 0) {
      if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v7) &
           1) != 0) {
        GameVariable_8288e0(a1, 1u);
      }
      v4 = *(_QWORD*)(a2 + 32);
      v7[0] = 2;
      if (v4 != 0) {
        if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v7) &
             1) != 0) {
          GameVariable_8288e0(a1, 2u);
        }
        v4 = *(_QWORD*)(a2 + 32);
        v7[0] = 3;
        if (v4 != 0) {
          if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4, v7) &
               1) != 0) {
            GameVariable_8288e0(a1, 3u);
          }
          v4 = *(_QWORD*)(a2 + 32);
          v7[0] = 4;
          if (v4 != 0) {
            if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4,
                                                                         v7) &
                 1) != 0) {
              GameVariable_8288e0(a1, 4u);
            }
            v4 = *(_QWORD*)(a2 + 32);
            v7[0] = 5;
            if (v4 != 0) {
              if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(v4,
                                                                           v7) &
                   1) != 0) {
                GameVariable_8288e0(a1, 5u);
              }
              v4 = *(_QWORD*)(a2 + 32);
              v7[0] = 6;
              if (v4 != 0) {
                if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(
                         v4, v7) &
                     1) != 0) {
                  GameVariable_8288e0(a1, 6u);
                }
                v4 = *(_QWORD*)(a2 + 32);
                v7[0] = 7;
                if (v4 != 0) {
                  if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 48LL))(
                           v4, v7) &
                       1) != 0) {
                    GameVariable_8288e0(a1, 7u);
                  }
                  v4 = *(_QWORD*)(a2 + 32);
                  v7[0] = 8;
                  if (v4 != 0) {
                    if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                           48LL))(v4, v7) &
                         1) != 0) {
                      GameVariable_8288e0(a1, 8u);
                    }
                    v4 = *(_QWORD*)(a2 + 32);
                    v7[0] = 9;
                    if (v4 != 0) {
                      if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                             48LL))(v4, v7) &
                           1) != 0) {
                        GameVariable_8288e0(a1, 9u);
                      }
                      v4 = *(_QWORD*)(a2 + 32);
                      v7[0] = 10;
                      if (v4 != 0) {
                        if (((*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v4 +
                                                               48LL))(v4, v7) &
                             1) != 0) {
                          GameVariable_8288e0(a1, 0xAu);
                        }
                        v4 = *(_QWORD*)(a2 + 32);
                        v7[0] = 11;
                        if (v4 != 0) {
                          if (((*(__int64 (**)(__int64, _BYTE*))(
                                   *(_QWORD*)v4 + 48LL))(v4, v7) &
                               1) != 0) {
                            GameVariable_8288e0(a1, 0xBu);
                          }
                          v4 = *(_QWORD*)(a2 + 32);
                          v7[0] = 12;
                          if (v4 != 0) {
                            if (((*(__int64 (**)(__int64, _BYTE*))(
                                     *(_QWORD*)v4 + 48LL))(v4, v7) &
                                 1) != 0) {
                              GameVariable_8288e0(a1, 0xCu);
                            }
                            v4 = *(_QWORD*)(a2 + 32);
                            v7[0] = 13;
                            if (v4 != 0) {
                              if (((*(__int64 (**)(__int64, _BYTE*))(
                                       *(_QWORD*)v4 + 48LL))(v4, v7) &
                                   1) != 0) {
                                GameVariable_8288e0(a1, 0xDu);
                              }
                              v4 = *(_QWORD*)(a2 + 32);
                              v7[0] = 14;
                              if (v4 != 0) {
                                if (((*(__int64 (**)(__int64, _BYTE*))(
                                         *(_QWORD*)v4 + 48LL))(v4, v7) &
                                     1) != 0) {
                                  GameVariable_8288e0(a1, 0xEu);
                                }
                                v4 = *(_QWORD*)(a2 + 32);
                                v7[0] = 15;
                                if (v4 != 0) {
                                  if (((*(__int64 (**)(__int64, _BYTE*))(
                                           *(_QWORD*)v4 + 48LL))(v4, v7) &
                                       1) != 0) {
                                    GameVariable_8288e0(a1, 0xFu);
                                  }
                                  v4 = *(_QWORD*)(a2 + 32);
                                  v7[0] = 16;
                                  if (v4 != 0) {
                                    if (((*(__int64 (**)(__int64, _BYTE*))(
                                             *(_QWORD*)v4 + 48LL))(v4, v7) &
                                         1) != 0) {
                                      GameVariable_8288e0(a1, 0x10u);
                                    }
                                    v4 = *(_QWORD*)(a2 + 32);
                                    v7[0] = 17;
                                    if (v4 != 0) {
                                      if (((*(__int64 (**)(__int64, _BYTE*))(
                                               *(_QWORD*)v4 + 48LL))(v4, v7) &
                                           1) != 0) {
                                        GameVariable_8288e0(a1, 0x11u);
                                      }
                                      v4 = *(_QWORD*)(a2 + 32);
                                      v7[0] = 18;
                                      if (v4 != 0) {
                                        result =
                                            (*(__int64 (**)(__int64, _BYTE*))(
                                                *(_QWORD*)v4 + 48LL))(v4, v7);
                                        if ((result & 1) != 0) {
                                          return GameVariable_8288e0(a1, 0x12u);
                                        }
                                        return result;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_60a310(v4, a2, a3);
}

__int64 GameVariable_828dc0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;

  v5 = game_GameVariableTable_Find(a1, a2);
  v9 = v5;
  if (v5 != 0) {
    v10 = *(unsigned int*)(v5 + 20);
    v11 = *(unsigned int*)(v5 + 24);
    v12 = *(unsigned int*)(v5 + 32);
    v13 = (int)v10;
    v14 = *(_DWORD*)(v5 + 32);
    if (GameData_1b45b5e[*(unsigned __int8*)(v5 + 17)] == 1) {
      v15 = v12 + a3;
      if (v15 < v11) {
        LODWORD(v11) = v12 + a3;
      }
      if (v15 >= v10) {
        LODWORD(v13) = v11;
      }
      if (v14 != (_DWORD)v13) {
        *(_DWORD*)(v5 + 32) = v13;
        if ((*(_BYTE*)(a1 + 3932768) & 0xAE) == 0 && GameData_22400f8 != 0) {
          GameRoutine_12274e0(GameData_22400f8, v5);
        }
        v17 = *(_QWORD*)(v9 + 88);
        for (i = *(_QWORD*)(v9 + 96); v17 != i; v17 += 48) {
          v23 = v9;
          v18 = *(_QWORD*)(v17 + 32);
          if (v18 == 0) {
            goto LABEL_30;
          }
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v18 + 48LL))(v18, &v23);
        }
      LABEL_28:
        v8 = 1;
        return (v9 != 0) & (unsigned __int8)v8;
      }
    }
    else {
      v19 = *(_DWORD*)(v5 + 24);
      if ((int)v12 + (__int64)a3 < (int)v11) {
        v19 = v14 + a3;
      }
      if ((int)v12 + (__int64)a3 >= v13) {
        LODWORD(v13) = v19;
      }
      if (v14 != (_DWORD)v13) {
        *(_DWORD*)(v5 + 32) = v13;
        if ((*(_BYTE*)(a1 + 3932768) & 0xAE) == 0 && GameData_22400f8 != 0) {
          GameRoutine_12274e0(GameData_22400f8, v5);
        }
        v21 = *(_QWORD*)(v9 + 88);
        v20 = *(_QWORD*)(v9 + 96);
        if (v20 != v21) {
          while (1) {
            v23 = v9;
            v18 = *(_QWORD*)(v21 + 32);
            if (v18 == 0) {
              break;
            }
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v18 + 48LL))(v18, &v23);
            v21 += 48;
            if (v21 == v20) {
              goto LABEL_28;
            }
          }
        LABEL_30:
          GameRoutine_60a310(v18, v6, v7);
        }
        goto LABEL_28;
      }
    }
    v8 = 0;
  }
  return (v9 != 0) & (unsigned __int8)v8;
}

__int64 GameVariable_828f50(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 (*v3)(_QWORD);
  __int64 v4;
  _QWORD* v5;

  v2 = game_GameVariableTable_Find(*(_QWORD*)(a1 + 8), a2);
  if (v2 == 0) {
    return 1;
  }
  v3 = *(__int64 (**)(_QWORD))(v2 + 72);
  v4 = *(_QWORD*)(v2 + 80);
  v5 = (_QWORD*)(v2 + (v4 >> 1));
  if ((v4 & 1) != 0) {
    v3 = *(__int64 (**)(_QWORD))((char*)v3 + *v5);
  }
  return v3(v5);
}

_QWORD* GameVariable_828fa0(__int64 a1, unsigned int a2, unsigned __int64* a3,
                            int a4)
{
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  _QWORD* result;
  __int64 v16;
  __int64 v17;
  int v18;
  _QWORD* v19;
  __int64 i;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;

  v4 = *a3;
  if (*a3 == 0) {
    return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
  }
  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(_QWORD*)(v5 + 16);
  if (v6 == 0 || *(_QWORD*)(v5 + 32) == 0) {
    return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = *a3;
    if (v4 >= v6) {
      v9 = v4 % v6;
    }
  }
  else {
    v9 = v8 & v4;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(v5 + 8) + 8 * v9);
  if (v10 == nullptr) {
    return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v4 == v13) {
        if (v11[2] == v4) {
          goto LABEL_26;
        }
      }
      else if ((v13 & v8) != v9) {
        return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v4 == v12) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
    }
  LABEL_15:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      return GameVariable_826e40(a1, a2, a3, a4, 0, 0, 99999, 0);
    }
  }
  if (v11[2] != v4) {
    goto LABEL_15;
  }
LABEL_26:
  result = (_QWORD*)game_GameVariableTable_Find(*(_QWORD*)(a1 + 8), a3);
  if (result != nullptr) {
    v18 = a4;
    v19 = result;
    if (*((_DWORD*)result + 8) != v18) {
      *((_DWORD*)result + 8) = v18;
      if ((*(_BYTE*)(v5 + 3932768) & 0xAE) == 0) {
        result = (_QWORD*)GameData_22400f8;
        if (GameData_22400f8 != 0) {
          result = (_QWORD*)GameRoutine_12274e0(GameData_22400f8, v19);
        }
      }
      v21 = v19[11];
      for (i = v19[12]; v21 != i; v21 += 48) {
        v23 = v19;
        v22 = *(_QWORD*)(v21 + 32);
        if (v22 == 0) {
          GameRoutine_60a310(0, v16, v17);
        }
        result = (_QWORD*)(*(__int64 (**)(__int64, _QWORD**))(*(_QWORD*)v22 +
                                                              48LL))(v22, &v23);
      }
    }
  }
  return result;
}

_QWORD* game_GameVariable_Impl_Push(_QWORD* result, __int64 a2,
                                    signed __int64 a3)
{
  _QWORD* v3;
  _QWORD* v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  char* v16;
  _QWORD* v17;
  _QWORD* v18;
  char* v19;
  char* v20;
  char* v21;
  signed __int64 v22;
  __int64 v23;
  char* v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  char* v28;
  char* v29;
  __int64* v30;
  char* v31;
  char* v32;
  unsigned __int64 v33;
  _QWORD* v34;
  __int64 v35;
  char* v36;
  char* v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  signed __int64 v41;
  bool v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  signed __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  signed __int64 v54;
  char* v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  _QWORD* v63;
  __int64** v64;
  __int64* v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  signed __int64 v73;
  unsigned __int64 v74;
  _QWORD* v75;
  __int64* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  _QWORD* v81;
  _QWORD v82[4];
  _QWORD* v83;
  __int64 v84;

  v3 = result + 491520;
  v4 = result;
  v5 = (char*)result[491609];
  v6 = (char*)result[491608];
  v7 = v5 - v6;
  v8 = (v5 - v6) >> 3;
  if (v5 == v6) {
    v9 = 0;
  }
  else {
    v9 = 102 * v8 - 1;
  }
  v10 = result[491611];
  v11 = result[491612] + v10;
  if (v9 == v11) {
    v12 = v10 >= 0x66;
    v13 = v10 - 102;
    if (v12) {
      result[491611] = v13;
      v14 = *(_QWORD*)v6;
      result[491608] = v6 + 8;
      v82[0] = v14;
    }
    else {
      v15 = (char*)result[491610];
      v16 = (char*)result[491607];
      if (v7 >= v15 - v16) {
        v81 = result;
        if (v15 == v16) {
          v25 = 1;
        }
        else {
          v25 = (v15 - v16) >> 2;
        }
        if (v25 >> 61 == 0) {
          v26 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          v27 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v25, 16, 0);
          v28 = (char*)(v27 + v7);
          v29 = (char*)(v27 + 8 * v25);
          result = (_QWORD*)fw_memory_HeapManager_Allocate(*v26, 4080, 16, 0);
          if (v7 == 8 * v25) {
            if (v5 == v6) {
              v34 = result;
              v30 = (__int64*)fw_memory_g_heap_manager_ptr;
              v28 = (char*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
              v29 = v28 + 8;
              v35 = 128;
              if (*(_QWORD*)(*v30 + 200) == 0) {
                v35 = 56;
              }
              nn_mem_StandardAllocator_Free(*v30 + v35, v27);
              result = v34;
              v5 = (char*)v3[89];
              v6 = (char*)v3[88];
              v27 = (__int64)v28;
            }
            else {
              v30 = (__int64*)fw_memory_g_heap_manager_ptr;
              v28 -= 8 * ((v8 + 1 + ((unsigned __int64)(v8 + 1) >> 63)) >> 1);
            }
          }
          else {
            v30 = &fw_memory_g_heap_manager;
          }
          v4 = v81;
          *(_QWORD*)v28 = result;
          v36 = v28 + 8;
          if (v5 != v6) {
            while (1) {
              if (v28 == (char*)v27) {
                if (v36 >= v29) {
                  if (v29 == v28) {
                    v43 = 1;
                  }
                  else {
                    v43 = (v29 - v28) >> 2;
                  }
                  if (v43 >> 61 != 0) {
                    goto LABEL_97;
                  }
                  v44 = fw_memory_HeapManager_Allocate(*v30, 8 * v43, 16, 0);
                  v45 = v44;
                  v39 = (char*)(v44 + ((2 * v43 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  v46 = v36 - v28;
                  v42 = v36 == v28;
                  v36 = v39;
                  if (!v42) {
                    v36 = &v39[v46];
                    v47 =
                        (_QWORD*)(v44 + ((2 * v43 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                    do {
                      v48 = *(_QWORD*)v28;
                      v28 += 8;
                      v46 -= 8LL;
                      *v47++ = v48;
                    } while (v46 != 0);
                  }
                  v29 = (char*)(v44 + 8 * v43);
                  v49 = 128;
                  if (*(_QWORD*)(*v30 + 200) == 0) {
                    v49 = 56;
                  }
                  result =
                      (_QWORD*)nn_mem_StandardAllocator_Free(*v30 + v49, v27);
                  v27 = v45;
                }
                else {
                  v41 = v36 - v28;
                  a3 = v36 - v28;
                  v42 = v36 == v28;
                  v36 +=
                      8 *
                      ((((v29 - v36) >> 3) + 1 +
                        ((unsigned __int64)(((v29 - v36) >> 3) + 1) >> 63)) >>
                       1);
                  v39 = &v36[-v41];
                  if (!v42) {
                    result = (_QWORD*)memmove(&v36[-v41], v28, a3);
                  }
                }
              }
              else {
                v39 = v28;
              }
              v40 = *((_QWORD*)v5 - 1);
              v5 -= 8;
              *((_QWORD*)v39 - 1) = v40;
              v37 = v39 - 8;
              v28 = v37;
              if (v5 == (char*)v3[88]) {
                goto LABEL_31;
              }
            }
          }
          v37 = v28;
        LABEL_31:
          a2 = v3[87];
          v3[87] = v27;
          v3[88] = v37;
          v3[89] = v36;
          v3[90] = v29;
          if (a2 != 0) {
            v38 = 128;
            if (*(_QWORD*)(*v30 + 200) == 0) {
              v38 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(*v30 + v38, a2);
          }
          goto LABEL_67;
        }
        goto LABEL_97;
      }
      v17 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      result = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4080, 16, 0);
      v18 = result;
      if (v15 != v5) {
        v19 = (char*)v3[89];
        if (v19 != (char*)v3[90]) {
        LABEL_66:
          *(_QWORD*)v19 = v18;
          v3[89] += 8LL;
          goto LABEL_67;
        }
        v20 = (char*)v3[88];
        v21 = (char*)v3[87];
        if (v20 > v21) {
          v22 = v19 - v20;
          v23 = ((v20 - v21) >> 3) + 1;
          v24 = &v20[-8 * (v23 / 2)];
          if (v22 != 0) {
            result = (_QWORD*)memmove(&v20[-8 * (v23 / 2)], v3[88], v22);
            v20 = (char*)v3[88];
          }
          v19 = &v24[v22];
          v3[89] = v19;
          v3[88] = &v20[8 * (v23 / -2)];
          goto LABEL_66;
        }
        if (v19 == v21) {
          v53 = 1;
        }
        else {
          v53 = (v19 - v21) >> 2;
        }
        if (v53 >> 61 == 0) {
          result =
              (_QWORD*)fw_memory_HeapManager_Allocate(*v17, 8 * v53, 16, 0);
          v54 = v19 - v20;
          v42 = v19 == v20;
          v55 = (char*)&result[v53 >> 2];
          v19 = v55;
          if (!v42) {
            v19 = &v55[v54];
            v56 = &result[v53 >> 2];
            do {
              v57 = *(_QWORD*)v20;
              v20 += 8;
              v54 -= 8LL;
              *v56++ = v57;
            } while (v54 != 0);
          }
          v3[87] = result;
          v3[88] = v55;
          v3[89] = v19;
          v3[90] = &result[v53];
          if (v21 != nullptr) {
            v58 = 128;
            if (*(_QWORD*)(*v17 + 200LL) == 0) {
              v58 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(*v17 + v58, v21);
            v19 = (char*)v3[89];
          }
          goto LABEL_66;
        }
      LABEL_97:
        GameRoutine_60a210(result);
      }
      v31 = (char*)v3[88];
      v32 = (char*)v3[87];
      if (v31 == v32) {
        v50 = (char*)v3[89];
        v51 = v3[90];
        if ((unsigned __int64)v50 >= v51) {
          v69 = v51 - (_QWORD)v31;
          v42 = v69 == 0;
          v70 = v69 >> 2;
          if (v42) {
            v71 = 1;
          }
          else {
            v71 = v70;
          }
          if (v71 >> 61 != 0) {
            goto LABEL_97;
          }
          v72 = fw_memory_HeapManager_Allocate(*v17, 8 * v71, 16, 0);
          v73 = v50 - v31;
          v33 = v72 + ((2 * v71 + 6) & 0xFFFFFFFFFFFFFFF8LL);
          v74 = v33;
          if (v50 != v31) {
            v74 = v33 + v73;
            v75 = (_QWORD*)(v72 + ((2 * v71 + 6) & 0xFFFFFFFFFFFFFFF8LL));
            v76 = (__int64*)v31;
            do {
              v77 = *v76++;
              v73 -= 8LL;
              *v75++ = v77;
            } while (v73 != 0);
          }
          v3[87] = v72;
          v3[88] = v33;
          v3[89] = v74;
          v3[90] = v72 + 8 * v71;
          if (v31 != nullptr) {
            v78 = 128;
            if (*(_QWORD*)(*v17 + 200LL) == 0) {
              v78 = 56;
            }
            nn_mem_StandardAllocator_Free(*v17 + v78, v32);
            v33 = v3[88];
          }
        }
        else {
          v52 = (((__int64)(v51 - (_QWORD)v50) >> 3) + 1) / 2;
          v33 = (unsigned __int64)&v31[8 * v52];
          if (v50 != v31) {
            memmove(&v31[8 * v52], v3[88], v50 - v31);
            v50 = (char*)v3[89];
          }
          v3[88] = v33;
          v3[89] = &v50[8 * v52];
        }
      }
      else {
        v33 = v3[88];
      }
      *(_QWORD*)(v33 - 8) = v18;
      v79 = v3[88];
      v3[88] = v79 - 8;
      v80 = *(_QWORD*)(v79 - 8);
      v3[88] = v79;
      v82[0] = v80;
    }
    result = (_QWORD*)GameRoutine_82fc00(v3 + 87, v82);
  LABEL_67:
    v6 = (char*)v3[88];
    v11 = v3[92] + v3[91];
  }
  v59 = *(_QWORD*)&v6[8 * (v11 / 0x66)] + 40 * (v11 % 0x66);
  *(_QWORD*)(v59 + 16) = 0;
  *(_QWORD*)(v59 + 24) = 0;
  *(_QWORD*)v59 = 0;
  *(_QWORD*)(v59 + 8) = 0;
  *(_DWORD*)(v59 + 32) = 1065353216;
  v60 = v3[92];
  v3[92] = v60 + 1;
  if (v60 == -1) {
    return result;
  }
  v61 = 0;
  v62 = *(_QWORD*)(v3[88] + 8 * ((v3[91] + v60) / 0x66uLL)) +
        40 * ((v3[91] + v60) % 0x66uLL);
  v82[0] = GameData_1f9ecc0;
  v82[1] = v62;
  v83 = v82;
  v63 = v4 + 491521;
  do {
    if ((unsigned int)(unsigned __int8)v61 - 4 < 0xB ||
        (unsigned int)(unsigned __int8)v61 - 1 <= 1) {
      v64 = (__int64**)&v63[3 * v61];
      v65 = *v64;
      v66 = v64[1];
      if (*v64 != v66) {
        do {
          v67 = *v65++;
          v84 = v67;
          if (v83 == nullptr) {
            GameRoutine_60a310(0, a2, a3);
          }
          (*(void (**)(_QWORD*, __int64*))(*v83 + 48LL))(v83, &v84);
        } while (v65 != v66);
      }
    }
    ++v61;
  } while (v61 != 19);
  result = v83;
  if (v83 == v82) {
    v68 = 32;
  }
  else {
    if (v83 == nullptr) {
      return result;
    }
    v68 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(void))(*v83 + v68))();
}

_QWORD* game_GameVariable_Impl_Pop(_QWORD* result, __int64 a2, __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64** v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD v29[4];
  _QWORD* v30;
  __int64 v31;

  v3 = result + 491520;
  v4 = result[491612];
  if (v4 == 0) {
    v13 = -1;
    goto LABEL_18;
  }
  v5 = 0;
  v6 = *(_QWORD*)(result[491608] + 8 * ((v4 + result[491611] - 1) / 0x66uLL)) +
       40 * ((v4 + result[491611] - 1) % 0x66uLL);
  v29[0] = GameData_1f9ed50;
  v29[1] = v6;
  v30 = v29;
  v7 = result + 491521;
  do {
    if ((unsigned int)(unsigned __int8)v5 - 4 < 0xB ||
        (unsigned int)(unsigned __int8)v5 - 1 <= 1) {
      v8 = (__int64**)&v7[3 * v5];
      v9 = *v8;
      v10 = v8[1];
      if (*v8 != v10) {
        do {
          v11 = *v9++;
          v31 = v11;
          if (v30 == nullptr) {
            GameRoutine_60a310(0, a2, a3);
          }
          (*(void (**)(_QWORD*, __int64*))(*v30 + 48LL))(v30, &v31);
        } while (v9 != v10);
      }
    }
    ++v5;
  } while (v5 != 19);
  result = v30;
  if (v30 == v29) {
    v12 = 32;
    goto LABEL_16;
  }
  if (v30 != nullptr) {
    v12 = 40;
  LABEL_16:
    result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*v30 + v12))(v30, a2);
  }
  v13 = v3[92] - 1LL;
LABEL_18:
  v14 = (__int64*)(*(_QWORD*)(v3[88] + 8 * ((v13 + v3[91]) / 0x66uLL)) +
                   40 * ((v13 + v3[91]) % 0x66uLL));
  v15 = (_QWORD*)v14[2];
  v16 = fw_memory_g_heap_manager_ptr;
  if (v15 != nullptr) {
    do {
      v17 = (_QWORD*)*v15;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
        v18 = 128;
      }
      else {
        v18 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v18, v15);
      v15 = v17;
    } while (v17 != nullptr);
  }
  v19 = *v14;
  *v14 = 0;
  if (v19 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v20, v19);
  }
  v21 = v3[89];
  v22 = v3[88];
  v23 = v21 - v22;
  v24 = v21 == v22;
  v25 = v3[92];
  v26 = 102 * (v23 >> 3) - 1;
  if (v24) {
    v26 = 0;
  }
  v3[92] = v25 - 1;
  if ((unsigned __int64)(v26 - (v25 + v3[91]) + 1) >= 0xCC) {
    v27 = *(_QWORD*)(v21 - 8);
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v28 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v28, v27);
      v21 = v3[89];
    }
    v3[89] = v21 - 8;
  }
  return result;
}

__int64 game_GameVariable_Deserialize(__int64 a1, __int64* a2, __int64 a3)
{
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _DWORD v15[8];
  __int64 v16;

  v6 = game_HashString32("Variable");
  v7 = *a2;
  v15[0] = v6;
  if (((*(__int64 (**)(__int64*, _DWORD*))(v7 + 16))(a2, v15) & 1) != 0) {
    v8 = *((int*)a2 + 5);
    *((_DWORD*)a2 + 5) = v8 + 1;
    v9 = a2[1];
    v10 = *(unsigned __int8*)(v9 + v8);
    if (*(_BYTE*)(v9 + v8) != 0) {
      v11 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      *(_DWORD*)(v11 + 16) = v10;
      *(_QWORD*)(v11 + 24) = a2;
      *(_QWORD*)(v11 + 32) = a3;
      v16 = v11;
      *(_QWORD*)v11 = GameData_1f9fbc0;
      *(_QWORD*)(v11 + 8) = a1;
      GameVariable_827530((__int64)v15, v12, v13);
      (*(void (**)(__int64))(*(_QWORD*)v11 + 40LL))(v11);
      Impl_829ca0(*(_QWORD*)(a1 + 8));
    }
  }
  return (*(__int64 (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
}

__int64 game_GameVariable_Impl_Push_closure_Invoke(__int64 a1, __int64** a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  __int64 result;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;

  v2 = *a2;
  v3 = *(__int64**)(a1 + 8);
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      32, 16, 0);
  *(_QWORD*)v5 = 0;
  v6 = (_QWORD*)v5;
  v7 = *v2;
  *(_QWORD*)(v5 + 16) = *v2;
  v8 = *((_DWORD*)v2 + 8);
  *(_QWORD*)(v5 + 8) = v7;
  *(_DWORD*)(v5 + 24) = v8;
  result = GameRoutine_82ffa0(v3);
  if (result != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v6);
  }
  else {
    v11 = v3[1];
    v12 = v6[1];
    v13 = v11 - 1;
    if ((v11 & (v11 - 1)) != 0) {
      if (v12 >= v11) {
        v12 %= v11;
      }
    }
    else {
      v12 &= v13;
    }
    v14 = *v3;
    v15 = *(_QWORD**)(*v3 + 8 * v12);
    if (v15 != nullptr) {
      *v6 = *v15;
      *v15 = v6;
    }
    else {
      *v6 = v3[2];
      v3[2] = (__int64)v6;
      *(_QWORD*)(v14 + 8 * v12) = v3 + 2;
      if (*v6 != 0) {
        v16 = *(_QWORD*)(*v6 + 8LL);
        if ((v11 & v13) != 0) {
          if (v16 >= v11) {
            v16 %= v11;
          }
        }
        else {
          v16 &= v13;
        }
        *(_QWORD*)(*v3 + 8 * v16) = v6;
      }
    }
    ++v3[3];
  }
  return result;
}

__int64 game_GameVariable_Impl_Pop_closure_Invoke(__int64 a1, __int64** a2)
{
  __int64* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  char v6;
  __int64* v7;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v5 = **a2;
  v7 = &v5;
  result =
      GameRoutine_8305a0(v3, &v5, std___1_piecewise_construct_ptr, &v7, &v6);
  *((_DWORD*)v2 + 8) = *(_DWORD*)(result + 24);
  return result;
}

_QWORD* game_GameVariable_Impl_RegisterUpdate_closure_Invoke_834300(
    _QWORD* result, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 i;
  __int64 v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  _QWORD v41[4];
  _QWORD* v42;

  v3 = *a2;
  v4 = result[1];
  v5 = (_QWORD*)(v4 + 3932160);
  if (*(_BYTE*)(*a2 + 72) == 3) {
    result = v41;
    v41[2] = *a2;
    v42 = v41;
    v41[0] = GameData_1f9f790;
    v41[1] = v4;
    v6 = *(_QWORD*)(v3 + 24);
    v7 = *(_QWORD*)(v6 + 16);
    v8 = *(_QWORD*)(v6 + 24);
    if (v7 == v8) {
      goto LABEL_10;
    }
    do {
      v9 = *(_QWORD*)(v7 + 40);
      for (i = *(_QWORD*)(v7 + 48); v9 != i; v9 += 16) {
        if (v42 == nullptr) {
          GameRoutine_60a310(0, a2, a3);
        }
        (*(void (**)(_QWORD*, __int64))(*v42 + 48LL))(v42, v9);
      }
      v7 += 72;
    } while (v7 != v8);
    result = v42;
    if (v42 == v41) {
    LABEL_10:
      v11 = 32;
    }
    else {
      if (v42 == nullptr) {
      LABEL_12:
        v12 = (_QWORD*)v5[65];
        v13 = v5[66];
        if ((unsigned __int64)v12 >= v13) {
          v15 = v5[64];
          v16 = (char*)v12 - v15;
          v17 = ((__int64)v12 - v15) >> 3;
          v18 = v17 + 1;
          if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
            goto LABEL_49;
          }
          v19 = v13 - v15;
          if (v19 >> 2 > v18) {
            v18 = v19 >> 2;
          }
          if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
            v20 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v20 = v18;
          }
          if (v20 != 0) {
            if (v20 >> 61 != 0) {
              goto LABEL_50;
            }
            v21 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
          }
          else {
            v21 = 0;
          }
          v22 = v21 + 8 * v20;
          v23 = (char*)v12 - v15;
          v24 = (__int64)&v16[v21 + -8 * v17];
          *(_QWORD*)&v16[v21] = v3;
          v14 = (__int64)&v16[v21 + 8];
          result = (_QWORD*)memcpy(v24, v15, v23);
          v5[64] = v24;
          v5[65] = v14;
          v5[66] = v22;
          if (v15 != 0) {
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v25 = 56;
            }
            result = (_QWORD*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v15);
          }
        }
        else {
          *v12 = v3;
          v14 = (__int64)(v12 + 1);
        }
        v5[65] = v14;
        goto LABEL_29;
      }
      v11 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64*, __int64))(
        *result + v11))(result, a2, a3);
    goto LABEL_12;
  }
LABEL_29:
  if (*(_QWORD*)(v3 + 88) == 0) {
    return result;
  }
  v27 = (_QWORD*)v5[62];
  v26 = v5[63];
  if ((unsigned __int64)v27 >= v26) {
    v29 = v5[61];
    v30 = (char*)v27 - v29;
    v31 = ((__int64)v27 - v29) >> 3;
    v32 = v31 + 1;
    if ((unsigned __int64)(v31 + 1) >> 61 == 0) {
      v33 = v26 - v29;
      v34 = fw_memory_g_heap_manager_ptr;
      if (v33 >> 2 > v32) {
        v32 = v33 >> 2;
      }
      if ((unsigned __int64)v33 >= 0x7FFFFFFFFFFFFFF8LL) {
        v35 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v35 = v32;
      }
      if (v35 == 0) {
        v36 = 0;
      LABEL_42:
        v37 = v36 + 8 * v35;
        v38 = (char*)v27 - v29;
        v39 = (__int64)&v30[v36 + -8 * v31];
        *(_QWORD*)&v30[v36] = v3;
        v28 = (__int64)&v30[v36 + 8];
        result = (_QWORD*)memcpy(v39, v29, v38);
        v5[61] = v39;
        v5[62] = v28;
        v5[63] = v37;
        if (v29 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)v34 + 200LL) == 0) {
            v40 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v34 + v40, v29);
        }
        goto LABEL_46;
      }
      if (v35 >> 61 == 0) {
        v36 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v35, 16, 0);
        goto LABEL_42;
      }
    LABEL_50:
      GameRoutine_60a210(result);
    }
  LABEL_49:
    GameRoutine_834b20(result, a2, a3);
  }
  *v27 = v3;
  v28 = (__int64)(v27 + 1);
LABEL_46:
  v5[62] = v28;
  return result;
}

_QWORD* game_GameVariable_Impl_RegisterUpdate_closure_Invoke_8346a0(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  __int64 v24;
  char* v25;
  char* v26;
  __int64 v27;
  char* v28;
  __int64 v29;
  char* v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  _QWORD v35[4];
  _QWORD* v36;

  v2 = *(_QWORD*)(a1 + 8);
  result = (_QWORD*)game_GameVariableTable_Find(v2, a2);
  if (result == nullptr) {
    return result;
  }
  v7 = *(_QWORD*)(a1 + 16);
  v8 = result;
  v35[0] = GameData_1f9f800;
  v35[1] = v2;
  v36 = v35;
  v10 = result[12];
  v9 = result[13];
  v35[2] = v7;
  if (v10 >= v9) {
    v14 = result[11];
    v15 = v10 - v14;
    v16 = 1 - 0x5555555555555555LL * (v15 >> 4);
    if (v16 > 0x555555555555555LL) {
      GameRoutine_835d90(result, v5, v6);
    }
    v17 = fw_memory_g_heap_manager_ptr;
    v18 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v9 - v14) >> 4);
    v19 = 2 * v18;
    if (2 * v18 <= v16) {
      v19 = 1 - 0x5555555555555555LL * (v15 >> 4);
    }
    if (v18 >= 0x2AAAAAAAAAAAAAALL) {
      v20 = 0x555555555555555LL;
    }
    else {
      v20 = v19;
    }
    if (v20 != 0) {
      if (v20 > 0x555555555555555LL) {
        GameRoutine_60a210(result);
      }
      v21 = 3 * v20;
      v22 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v20, 16, 0);
      v23 = v36;
      v15 += v22;
      v24 = v22 + 16 * v21;
      if (v36 == nullptr) {
        *(_QWORD*)(v15 + 32) = 0;
        goto LABEL_18;
      }
      if (v36 != v35) {
        *(_QWORD*)(v15 + 32) =
            (*(__int64 (**)(_QWORD*, __int64, __int64))(*v36 + 16LL))(v36, v11,
                                                                      v12);
      LABEL_18:
        v25 = (char*)v8[11];
        v26 = (char*)v8[12];
        v13 = v15 + 48;
        v27 = v15 + v25 - v26;
        if (v26 == v25) {
        LABEL_33:
          v8[11] = v27;
          v8[12] = v13;
          v8[13] = v24;
          if (v25 != nullptr) {
            v33 = 128;
            if (*(_QWORD*)(*(_QWORD*)v17 + 200LL) == 0) {
              v33 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v17 + v33, v25);
          }
          goto LABEL_37;
        }
        v28 = (char*)v8[11];
        v29 = v15 + v25 - v26;
        do {
          v30 = *((char**)v28 + 4);
          if (v30 != nullptr) {
            if (v28 == v30) {
              *(_QWORD*)(v29 + 32) = v29;
              (*(void (**)(_QWORD, __int64))(**((_QWORD**)v28 + 4) + 24LL))(
                  *((_QWORD*)v28 + 4), v29);
            }
            else {
              *(_QWORD*)(v29 + 32) = v30;
              *((_QWORD*)v28 + 4) = 0;
            }
          }
          else {
            *(_QWORD*)(v29 + 32) = 0;
          }
          v28 += 48;
          v29 += 48;
        } while (v28 != v26);
        while (1) {
          v32 = *((char**)v25 + 4);
          if (v25 == v32) {
            v31 = 32;
          }
          else {
            if (v32 == nullptr) {
              goto LABEL_28;
            }
            v31 = 40;
          }
          (*(void (**)(char*, __int64, __int64))(*(_QWORD*)v32 + v31))(v32, v11,
                                                                       v12);
        LABEL_28:
          v25 += 48;
          if (v25 == v26) {
            v25 = (char*)v8[11];
            goto LABEL_33;
          }
        }
      }
    }
    else {
      v23 = v35;
      v24 = 0;
    }
    *(_QWORD*)(v15 + 32) = v15;
    (*(void (**)(_QWORD*, __int64))(*v23 + 24LL))(v23, v15);
    goto LABEL_18;
  }
  *(_QWORD*)(v10 + 32) = v10;
  (*(void (**)(_QWORD*, unsigned __int64))(*v36 + 24LL))(v36, v10);
  v13 = v10 + 48;
LABEL_37:
  result = v36;
  v8[12] = v13;
  if (result == v35) {
    v34 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v34 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v34))(
      result, v11, v12);
}

__int64

game_GameVariable_Impl_RegisterUpdate_closure_Invoke_834a40(__int64 result)
{
  __int16* v1;
  __int64 v2;
  __int64 v3;
  int v4;

  if (game_gmap_GmapClock_instance_ != 0) {
    v1 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v1 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v1[1] * *v1 * v1[2] != 0) {
    v2 = *(_QWORD*)(result + 8);
    if ((*(_BYTE*)(v2 + 3932768) & 0x76) == 0) {
      v3 = *(_QWORD*)(result + 16);
      *(_BYTE*)(v2 + 3932768) |= 8u;
      v4 = *(unsigned __int8*)(v3 + 73);
      if (v4 == 2) {
        result = GameRoutine_8309a0(v2, v3, (__int64)v1);
      }
      else if (v4 == 1) {
        result = GameRoutine_8308a0(v2, v3, (__int64)v1);
      }
      *(_BYTE*)(v2 + 3932768) &= ~8u;
    }
  }
  return result;
}

__int64 game_GameVariable_EachMerge_lambda0_Invoke(__int64 result,
                                                   unsigned __int8* a2,
                                                   __int64 a3)
{
  __int64 v3;
  __int64* v4;
  __int64* i;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if ((unsigned int)*a2 - 7 <= 2) {
    v3 = result;
    v4 = *(__int64**)(*(_QWORD*)(*(_QWORD*)(result + 16) + 8LL) + 24LL * *a2 +
                      3932168);
    for (i = *(__int64**)(*(_QWORD*)(*(_QWORD*)(result + 16) + 8LL) +
                          24LL * *a2 + 3932176);
         v4 != i; result = (*(__int64 (**)(__int64, __int64*))(
                      *(_QWORD*)v7 + 48LL))(v7, &v8)) {
      v6 = *v4++;
      v7 = *(_QWORD*)(v3 + 64);
      v8 = v6;
      if (v7 == 0) {
        GameRoutine_60a310(0, a2, a3);
      }
    }
  }
  return result;
}

__int64 game_GameVariable_ClrForViewer_lambda0_Invoke(__int64 a1,
                                                      unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0x11;
  v4 = 0x107FFu >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_Serialize_lambda0_Invoke_836410(__int64 a1,
                                                          unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0xF;
  v4 = 0x7FF6u >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_Deserialize_lambda0_Invoke_836500(__int64 a1,
                                                            unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0xF;
  v4 = 0x7FF6u >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_Serialize_lambda0_Invoke_836620(_QWORD* a1, char* a2,
                                                          __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  int v9;
  __int64 (**v10)(__int64, int*);
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int** v16;
  int** v17;
  __int16 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int* v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  unsigned __int64 v39;
  char* v40;
  int v41;
  bool v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int* v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  char v77[4];
  int v78;

  v4 = (unsigned __int8)*a2;
  v5 = a1[1];
  v6 = *(_QWORD*)(a1[3] + 32LL);
  v77[0] = *a2;
  if (v6 == 0) {
    GameRoutine_60a310(0, a2, a3);
  }
  result = (*(__int64 (**)(__int64, char*))(*(_QWORD*)v6 + 48LL))(v6, v77);
  if ((result & 1) != 0) {
    v8 = a1[2];
    v9 = game_HashString32(*(&GameData_1f9ebe0 + v4));
    v10 = *(__int64 (***)(__int64, int*))v8;
    v78 = v9;
    if (((*v10)(v8, &v78) & 1) == 0) {
      return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 8LL))(v8, 0);
    }
    v11 = *(int*)(v8 + 20);
    v12 = *(_QWORD*)(v5 + 8) + 24LL * (unsigned int)v4;
    *(_DWORD*)(v8 + 20) = v11 + 1;
    v12 += 3932160;
    *(_BYTE*)(*(_QWORD*)(v8 + 8) + v11) = (unsigned int)(v4 - 1) < 2;
    v13 = *(int*)(v8 + 20);
    v14 = *(_QWORD*)(v8 + 8);
    *(_DWORD*)(v8 + 20) = v13 + 1;
    *(_BYTE*)(v14 + v13) = 0;
    v15 = *(int*)(v8 + 20);
    *(_DWORD*)(v8 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(v8 + 8) + v15) = 0;
    v16 = *(int***)(v12 + 8);
    v17 = *(int***)(v12 + 16);
    if ((unsigned int)(v4 - 1) > 1) {
      if (v16 != v17) {
        v18 = 0;
        do {
          v49 = *v16;
          if ((*v16)[7] != (*v16)[8]) {
            v50 = *(int*)(v8 + 20);
            v51 = *v49;
            *(_DWORD*)(v8 + 20) = v50 + 1;
            *(_BYTE*)(*(_QWORD*)(v8 + 8) + v50) = v51;
            v52 = *(int*)(v8 + 20);
            *(_DWORD*)(v8 + 20) = v52 + 1;
            *(_BYTE*)(*(_QWORD*)(v8 + 8) + v52) = BYTE1(v51);
            v53 = *(int*)(v8 + 20);
            *(_DWORD*)(v8 + 20) = v53 + 1;
            *(_BYTE*)(*(_QWORD*)(v8 + 8) + v53) = BYTE2(v51);
            v54 = *(int*)(v8 + 20);
            *(_DWORD*)(v8 + 20) = v54 + 1;
            *(_BYTE*)(*(_QWORD*)(v8 + 8) + v54) = HIBYTE(v51);
            v55 = v49[8];
            if (v55 >= 0x10) {
              v56 = *(int*)(v8 + 20);
              *(_DWORD*)(v8 + 20) = v56 + 1;
              *(_BYTE*)(*(_QWORD*)(v8 + 8) + v56) = -1;
              v57 = *(int*)(v8 + 20);
              *(_DWORD*)(v8 + 20) = v57 + 1;
              *(_BYTE*)(*(_QWORD*)(v8 + 8) + v57) = v55;
              v58 = *(int*)(v8 + 20);
              *(_DWORD*)(v8 + 20) = v58 + 1;
              *(_BYTE*)(*(_QWORD*)(v8 + 8) + v58) = BYTE1(v55);
              LODWORD(v57) = HIWORD(v55);
              v55 >>= 24;
              v59 = *(int*)(v8 + 20);
              *(_DWORD*)(v8 + 20) = v59 + 1;
              *(_BYTE*)(*(_QWORD*)(v8 + 8) + v59) = v57;
            }
            v48 = *(int*)(v8 + 20);
            ++v18;
            *(_DWORD*)(v8 + 20) = v48 + 1;
            *(_BYTE*)(*(_QWORD*)(v8 + 8) + v48) = v55;
          }
          ++v16;
        } while (v16 != v17);
        goto LABEL_27;
      }
    }
    else if (v16 != v17) {
      v18 = 0;
      do {
        v21 = *(int*)(v8 + 20);
        v22 = *v16;
        v23 = **v16;
        *(_DWORD*)(v8 + 20) = v21 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v21) = v23;
        v24 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v24 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v24) = BYTE1(v23);
        v25 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v25 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v25) = BYTE2(v23);
        v26 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v26 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v26) = HIBYTE(v23);
        v27 = *(int*)(v8 + 20);
        v28 = v22[1];
        *(_DWORD*)(v8 + 20) = v27 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v27) = v28;
        v29 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v29 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v29) = BYTE1(v28);
        v30 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v30 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v30) = BYTE2(v28);
        v31 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v31 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v31) = HIBYTE(v28);
        v32 = v22[8];
        if (v32 >= 0x10) {
          v33 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v33 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v33) = -1;
          v34 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v34 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v34) = v32;
          v35 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v35 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v35) = BYTE1(v32);
          LODWORD(v34) = HIWORD(v32);
          v32 >>= 24;
          v36 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v36 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v36) = v34;
        }
        v37 = *(int*)(v8 + 20);
        *(_DWORD*)(v8 + 20) = v37 + 1;
        *(_BYTE*)(*(_QWORD*)(v8 + 8) + v37) = v32;
        v38 = (char*)v22 + 49;
        v39 = *((unsigned __int8*)v22 + 48);
        v40 = *((char**)v22 + 8);
        v41 = v22[14];
        v42 = (v39 & 1) == 0;
        v43 = v39 >> 1;
        if (v42) {
          v44 = v38;
        }
        else {
          v44 = v40;
        }
        if (v42) {
          v41 = v43;
        }
        if (v41 != 0) {
          v45 = *(int*)(v8 + 20);
          v46 = (unsigned int)(v41 + 1);
          *(_DWORD*)(v8 + 20) = v45 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v45) = v41 + 1;
          v47 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v47 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v47) = BYTE1(v46);
          if ((v41 & 0x80000000) == 0) {
            memmove(*(_QWORD*)(v8 + 8) + *(int*)(v8 + 20), v44, v46);
            *(_DWORD*)(v8 + 20) += v46;
          }
        }
        else {
          v19 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v19 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v19) = 0;
          v20 = *(int*)(v8 + 20);
          *(_DWORD*)(v8 + 20) = v20 + 1;
          *(_BYTE*)(*(_QWORD*)(v8 + 8) + v20) = 0;
        }
        ++v18;
        ++v16;
      } while (v16 != v17);
      goto LABEL_27;
    }
    v18 = 0;
  LABEL_27:
    v60 = *(_QWORD*)(v8 + 32);
    v61 = *(_QWORD*)(v8 + 40);
    v62 = ((v61 - v60) << 7) - 1;
    if (v61 == v60) {
      v62 = 0;
    }
    v63 = *(_QWORD*)(v8 + 64) + *(_QWORD*)(v8 + 56);
    if (v62 == v63) {
      GameRoutine_660f80(v8 + 24);
      v60 = *(_QWORD*)(v8 + 32);
      v63 = *(_QWORD*)(v8 + 64) + *(_QWORD*)(v8 + 56);
    }
    *(_DWORD*)(*(_QWORD*)(v60 + 8 * (v63 >> 10)) + 4 * (v63 & 0x3FF)) =
        *(_DWORD*)(v8 + 20);
    *(_DWORD*)(v8 + 20) = v13 + 1;
    ++*(_QWORD*)(v8 + 64);
    *(_BYTE*)(*(_QWORD*)(v8 + 8) + v13) = v18;
    v64 = *(int*)(v8 + 20);
    *(_DWORD*)(v8 + 20) = v64 + 1;
    *(_BYTE*)(*(_QWORD*)(v8 + 8) + v64) = HIBYTE(v18);
    v66 = *(_QWORD*)(v8 + 56);
    v65 = *(_QWORD*)(v8 + 64);
    v68 = *(_QWORD*)(v8 + 32);
    v67 = *(_QWORD*)(v8 + 40);
    v42 = v67 == v68;
    v69 = v65 - 1 + v66;
    v70 = v69 >> 10;
    v71 = v69 & 0x3FF;
    v72 = ((v67 - v68) << 7) - 1;
    v73 = *(_QWORD*)(v68 + 8 * v70);
    if (v42) {
      v72 = 0;
    }
    v74 = *(_DWORD*)(v73 + 4 * v71);
    *(_QWORD*)(v8 + 64) = v65 - 1;
    *(_DWORD*)(v8 + 20) = v74;
    if ((unsigned __int64)(v72 - (v65 + v66) + 1) >= 0x800) {
      v75 = *(_QWORD*)(v67 - 8);
      if (v75 != 0) {
        v76 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v75);
        v67 = *(_QWORD*)(v8 + 40);
      }
      *(_QWORD*)(v8 + 40) = v67 - 8;
    }
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 8LL))(v8, 0);
  }
  return result;
}

__int64 game_GameVariable_Deserialize_lambda0_Invoke_836c80(__int64 a1,
                                                            _BYTE* a2,
                                                            __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int16 v13;
  unsigned __int16 v14;
  int v15;
  __int64 v16;
  char v17;
  int v18;
  char* v19;
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
  int v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char* v49;
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
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  unsigned __int64 v88;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64** v93;
  __int64* v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  char* v98;

  v4 = (unsigned __int8)*a2;
  v5 = *(_QWORD*)(a1 + 8);
  v6 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 32LL);
  LOBYTE(v97) = *a2;
  if (v6 == 0) {
    GameRoutine_60a310(0, a2, a3);
  }
  result = (*(__int64 (**)(__int64, unsigned __int64*))(*(_QWORD*)v6 + 48LL))(
      v6, &v97);
  if ((result & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 24);
    v9 = *(_DWORD*)(a1 + 16);
    LODWORD(v97) = game_HashString32(*(&GameData_1f9ebe0 + v4));
    if (((*(__int64 (**)(__int64, unsigned __int64*))(*(_QWORD*)v8 + 16LL))(
             v8, &v97) &
         1) != 0) {
      v10 = *(int*)(v8 + 20);
      v11 = *(_QWORD*)(v8 + 8);
      *(_DWORD*)(v8 + 20) = v10 + 1;
      v12 = *(unsigned __int8*)(v11 + v10);
      *(_DWORD*)(v8 + 20) = v10 + 2;
      v13 = *(unsigned __int8*)(v11 + v10 + 1);
      *(_DWORD*)(v8 + 20) = v10 + 3;
      v14 = *(unsigned __int8*)(v11 + v10 + 2) << 8;
      v15 = (unsigned __int16)((unsigned __int8)v13 | v14);
      *(_BYTE*)(*(_QWORD*)(v5 + 8) + 3932768LL) |= 2u;
      v16 = *(_QWORD*)(v5 + 8);
      v17 = *(_BYTE*)(v16 + 3932768) & 0xFE;
      if ((unsigned __int8)(v4 - 3) < 0xFEu) {
        ++v17;
      }
      *(_BYTE*)(v16 + 3932768) = v17;
      if (v9 <= 1) {
        if (((unsigned __int8)v13 | v14) != 0) {
          v39 = (unsigned __int16)(v14 + v13);
          if (v12 != 0) {
            do {
              v50 = *(int*)(v8 + 20);
              v51 = *(_QWORD*)(v8 + 8);
              v52 = v50 + 8;
              *(_DWORD*)(v8 + 20) = v50 + 1;
              v53 = *(unsigned __int8*)(v51 + v50);
              *(_DWORD*)(v8 + 20) = v50 + 2;
              v54 = *(unsigned __int8*)(v51 + v50 + 1);
              *(_DWORD*)(v8 + 20) = v50 + 3;
              v55 = *(unsigned __int8*)(v51 + v50 + 2);
              *(_DWORD*)(v8 + 20) = v50 + 4;
              v56 = *(unsigned __int8*)(v51 + v50 + 3);
              *(_DWORD*)(v8 + 20) = v50 + 5;
              v57 = *(unsigned __int8*)(v51 + v50 + 4);
              *(_DWORD*)(v8 + 20) = v50 + 6;
              v58 = *(unsigned __int8*)(v51 + v50 + 5);
              *(_DWORD*)(v8 + 20) = v50 + 7;
              v59 = v53 | (v54 << 8);
              v60 = v50 + 9;
              v61 = *(unsigned __int8*)(v51 + v50 + 6);
              *(_DWORD*)(v8 + 20) = v50 + 8;
              v62 = v59 | (v55 << 16);
              v63 = v50 + 10;
              v64 = *(unsigned __int8*)(v51 + v50 + 7);
              v65 = v62 | (v56 << 24);
              *(_DWORD*)(v8 + 20) = v50 + 9;
              v66 = v50 + 11;
              v67 = v65 | (v57 << 32);
              v68 = v50 + 12;
              v69 = v67 | (v58 << 40);
              v70 = v50 + 13;
              v71 = v50 + 14;
              v97 = v69 | (v61 << 48) | (v64 << 56);
              v72 = *(unsigned __int8*)(v51 + v52);
              *(_DWORD*)(v8 + 20) = v63;
              v73 = *(unsigned __int8*)(v51 + v60);
              *(_DWORD*)(v8 + 20) = v66;
              v74 = *(unsigned __int8*)(v51 + v63);
              *(_DWORD*)(v8 + 20) = v68;
              v75 = *(unsigned __int8*)(v51 + v66);
              *(_DWORD*)(v8 + 20) = v70;
              LODWORD(v68) = *(unsigned __int8*)(v51 + v68);
              *(_DWORD*)(v8 + 20) = v71;
              v76 = v68 | (*(unsigned __int8*)(v51 + v70) << 8);
              if (v76 != 0) {
                v49 = (char*)(v51 + v71);
                *(_DWORD*)(v8 + 20) = v71 + v76;
              }
              else {
                v49 = nullptr;
              }
              v98 = v49;
              GameVariable_828fa0(v5, v4, &v97,
                                  v72 | (v73 << 8) | (v74 << 16) | (v75 << 24));
              --v39;
            } while (v39 != 0);
          }
          else {
            do {
              v40 = *(int*)(v8 + 20);
              v41 = *(_QWORD*)(v8 + 8);
              *(_DWORD*)(v8 + 20) = v40 + 1;
              v42 = *(unsigned __int8*)(v41 + v40);
              *(_DWORD*)(v8 + 20) = v40 + 2;
              v43 = *(unsigned __int8*)(v41 + v40 + 1);
              *(_DWORD*)(v8 + 20) = v40 + 3;
              v44 = *(unsigned __int8*)(v41 + v40 + 2);
              *(_DWORD*)(v8 + 20) = v40 + 4;
              v45 = *(unsigned __int8*)(v41 + v40 + 3);
              *(_DWORD*)(v8 + 20) = v40 + 5;
              v46 = *(unsigned __int8*)(v41 + v40 + 4);
              *(_DWORD*)(v8 + 20) = v40 + 6;
              v47 = *(unsigned __int8*)(v41 + v40 + 5);
              *(_DWORD*)(v8 + 20) = v40 + 7;
              v48 = *(unsigned __int8*)(v41 + v40 + 6);
              *(_DWORD*)(v8 + 20) = v40 + 8;
              v97 =
                  v42 | (v43 << 8) | (v44 << 16) | (v45 << 24) | (v46 << 32) |
                  (v47 << 40) | (v48 << 48) |
                  ((unsigned __int64)*(unsigned __int8*)(v41 + v40 + 7) << 56);
              v98 = &GameData_1a9f09e;
              *(_DWORD*)(v8 + 20) = v40 + 9;
              LODWORD(v42) = *(unsigned __int8*)(v41 + v40 + 8);
              *(_DWORD*)(v8 + 20) = v40 + 10;
              LODWORD(v43) = v42 | (*(unsigned __int8*)(v41 + v40 + 9) << 8);
              *(_DWORD*)(v8 + 20) = v40 + 11;
              LODWORD(v44) = *(unsigned __int8*)(v41 + v40 + 10);
              *(_DWORD*)(v8 + 20) = v40 + 12;
              GameVariable_828fa0(
                  v5, v4, &v97,
                  v43 | ((_DWORD)v44 << 16) |
                      (*(unsigned __int8*)(v41 + v40 + 11) << 24));
              --v39;
            } while (v39 != 0);
          }
        }
      }
      else if (((unsigned __int8)v13 | v14) != 0) {
        if (v12 != 0) {
          v18 = (unsigned __int16)(v14 + v13);
          do {
            v20 = *(int*)(v8 + 20);
            v21 = *(_QWORD*)(v8 + 8);
            *(_DWORD*)(v8 + 20) = v20 + 1;
            v22 = *(unsigned __int8*)(v21 + v20);
            *(_DWORD*)(v8 + 20) = v20 + 2;
            v23 = *(unsigned __int8*)(v21 + v20 + 1);
            *(_DWORD*)(v8 + 20) = v20 + 3;
            v24 = *(unsigned __int8*)(v21 + v20 + 2);
            *(_DWORD*)(v8 + 20) = v20 + 4;
            v25 = *(unsigned __int8*)(v21 + v20 + 3);
            *(_DWORD*)(v8 + 20) = v20 + 5;
            v26 = *(unsigned __int8*)(v21 + v20 + 4);
            *(_DWORD*)(v8 + 20) = v20 + 6;
            v27 = *(unsigned __int8*)(v21 + v20 + 5);
            *(_DWORD*)(v8 + 20) = v20 + 7;
            v28 = *(unsigned __int8*)(v21 + v20 + 6);
            *(_DWORD*)(v8 + 20) = v20 + 8;
            v97 = v22 | (v23 << 8) | (v24 << 16) | (v25 << 24) | (v26 << 32) |
                  (v27 << 40) | (v28 << 48) |
                  ((unsigned __int64)*(unsigned __int8*)(v21 + v20 + 7) << 56);
            v29 = v20 + 9;
            *(_DWORD*)(v8 + 20) = v20 + 9;
            v30 = *(unsigned __int8*)(v21 + v20 + 8);
            if (v30 == 255) {
              *(_DWORD*)(v8 + 20) = v20 + 10;
              v31 = *(unsigned __int8*)(v21 + v29);
              *(_DWORD*)(v8 + 20) = v20 + 11;
              v32 = v31 | (*(unsigned __int8*)(v21 + v20 + 10) << 8);
              *(_DWORD*)(v8 + 20) = v20 + 12;
              v33 = v32 | (*(unsigned __int8*)(v21 + v20 + 11) << 16);
              LODWORD(v29) = v20 + 13;
              *(_DWORD*)(v8 + 20) = v20 + 13;
              v30 = v33 | (*(unsigned __int8*)(v21 + v20 + 12) << 24);
            }
            v34 = (int)v29;
            v35 = (int)v29 + 1LL;
            *(_DWORD*)(v8 + 20) = v35;
            v36 = *(unsigned __int8*)(v21 + v34);
            v37 = v34 + 2;
            *(_DWORD*)(v8 + 20) = v37;
            v38 = v36 | (*(unsigned __int8*)(v21 + v35) << 8);
            if (v38 != 0) {
              v19 = (char*)(v21 + v37);
              *(_DWORD*)(v8 + 20) = v37 + v38;
            }
            else {
              v19 = nullptr;
            }
            v98 = v19;
            GameVariable_828fa0(v5, v4, &v97, v30);
            --v18;
          } while (v18 != 0);
        }
        else {
          v77 = 0;
          do {
            v78 = *(int*)(v8 + 20);
            v79 = *(_QWORD*)(v8 + 8);
            *(_DWORD*)(v8 + 20) = v78 + 1;
            v80 = *(unsigned __int8*)(v79 + v78);
            *(_DWORD*)(v8 + 20) = v78 + 2;
            v81 = *(unsigned __int8*)(v79 + v78 + 1);
            *(_DWORD*)(v8 + 20) = v78 + 3;
            v82 = *(unsigned __int8*)(v79 + v78 + 2);
            *(_DWORD*)(v8 + 20) = v78 + 4;
            v83 = *(unsigned __int8*)(v79 + v78 + 3);
            *(_DWORD*)(v8 + 20) = v78 + 5;
            v84 = *(unsigned __int8*)(v79 + v78 + 4);
            if (v84 == 255) {
              *(_DWORD*)(v8 + 20) = v78 + 6;
              v85 = *(unsigned __int8*)(v79 + v78 + 5);
              *(_DWORD*)(v8 + 20) = v78 + 7;
              v86 = v85 | (*(unsigned __int8*)(v79 + v78 + 6) << 8);
              *(_DWORD*)(v8 + 20) = v78 + 8;
              v87 = *(unsigned __int8*)(v79 + v78 + 7);
              *(_DWORD*)(v8 + 20) = v78 + 9;
              v84 = v86 | (v87 << 16) |
                    (*(unsigned __int8*)(v79 + v78 + 8) << 24);
            }
            v88 = *(_QWORD*)(*(_QWORD*)(v5 + 8) + 3932784LL);
            if (v88 != 0 && *(_QWORD*)(*(_QWORD*)(v5 + 8) + 3932800LL) != 0) {
              v90 = v80 | (v81 << 8) | (v82 << 16) | (unsigned int)(v83 << 24);
              v91 = v88 - 1;
              if ((v88 & (v88 - 1)) != 0) {
                v92 = v90;
                if (v88 <= v90) {
                  v92 = (unsigned int)v90 % (unsigned int)v88;
                }
              }
              else {
                v92 = ((_DWORD)v88 - 1) & (unsigned int)v90;
              }
              v93 = *(__int64***)(*(_QWORD*)(*(_QWORD*)(v5 + 8) + 3932776LL) +
                                  8 * v92);
              if (v93 != nullptr) {
                v94 = *v93;
                if (v94 != nullptr) {
                  if ((v88 & v91) == 0) {
                    while (1) {
                      v96 = v94[1];
                      if (v96 == v90) {
                        if (*((_DWORD*)v94 + 4) == (_DWORD)v90) {
                          goto LABEL_27;
                        }
                      }
                      else if ((v96 & v91) != v92) {
                        goto LABEL_28;
                      }
                      v94 = (__int64*)*v94;
                      if (v94 == nullptr) {
                        goto LABEL_28;
                      }
                    }
                  }
                  do {
                    v95 = v94[1];
                    if (v95 == v90) {
                      if (*((_DWORD*)v94 + 4) == (_DWORD)v90) {
                      LABEL_27:
                        GameVariable_828fa0(v5, v4, (unsigned __int64*)v94 + 3,
                                            v84);
                        break;
                      }
                    }
                    else {
                      if (v95 >= v88) {
                        v95 %= v88;
                      }
                      if (v95 != v92) {
                        break;
                      }
                    }
                    v94 = (__int64*)*v94;
                  } while (v94 != nullptr);
                }
              }
            }
          LABEL_28:
            ++v77;
          } while (v77 != v15);
        }
      }
      *(_BYTE*)(*(_QWORD*)(v5 + 8) + 3932768LL) &= ~1u;
      *(_BYTE*)(*(_QWORD*)(v5 + 8) + 3932768LL) &= ~2u;
    }
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v8 + 24LL))(v8, 0);
  }
  return result;
}

__int64 game_GameVariable_Restore_lambda0_Invoke(__int64 a1,
                                                 unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0xA;
  v4 = 0x3F6u >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_Restore_lambda1_Invoke(__int64 a1,
                                                 unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0xA;
  v4 = 0x3F6u >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_ResetRoute_lambda0_Invoke(__int64 result,
                                                    unsigned __int8* a2)
{
  unsigned int v2;
  __int64* v4;
  __int64* i;
  __int64 v6;

  v2 = *a2;
  if (v2 <= 9 && ((1 << v2) & 0x396) != 0) {
    v4 = *(__int64**)(*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) + 24LL * *a2 +
                      3932168);
    for (i = *(__int64**)(*(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) +
                          24LL * *a2 + 3932176);
         v4 != i;
         result = game_VariableManager_SetFlag(v6, *(unsigned int*)(v6 + 28))) {
      v6 = *v4++;
    }
  }
  return result;
}

__int64 game_GameVariable_ResetValue_lambda0_Invoke(__int64 a1,
                                                    unsigned __int8* a2,
                                                    __int64 a3)
{
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 result;
  __int64* v7;
  __int64* i;
  __int64 v9;
  _BYTE v10[4];

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a2;
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL);
  v10[0] = *a2;
  if (v5 == 0) {
    GameRoutine_60a310(0, a2, a3);
  }
  result = (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 48LL))(v5, v10);
  if ((result & 1) != 0) {
    v7 = *(__int64**)(*(_QWORD*)(v3 + 8) + 24LL * v4 + 3932168);
    for (i = *(__int64**)(*(_QWORD*)(v3 + 8) + 24LL * v4 + 3932176); v7 != i;
         *(_DWORD*)(v9 + 32) = *(_DWORD*)(v9 + 28)) {
      v9 = *v7++;
    }
  }
  return result;
}

__int64 game_GameVariable_ShareSerialize_lambda0_Invoke(__int64 a1,
                                                        unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0x12;
  v4 = 0x27C00u >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_ShareDeserialize_lambda0_Invoke(__int64 a1,
                                                          unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0x12;
  v4 = 0x27C00u >> v2;
  v5 = !v3;
  return v5 & v4;
}

__int64 game_GameVariable_ShareDeserialize_lambda1_Invoke(__int64 a1,
                                                          unsigned __int8* a2)
{
  unsigned __int64 v2;
  bool v3;
  unsigned int v4;
  int v5;

  v2 = *a2;
  v3 = v2 >= 0x12;
  v4 = 0x27C00u >> v2;
  v5 = !v3;
  return v5 & v4;
}

#pragma GCC visibility pop
