#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_SpineBuildCallbackForIconFace_vtable[])();
extern __int64 (*game_SpineBuildCallback_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SpineBuildCallbackForIconFace_Unknown12(__int64 result, __int64 a2,
                                                int a3);
__int64 SpineBuildCallbackForIconFace_Destructor_alt1(__int64 result) __asm__(
    "SpineBuildCallbackForIconFace_Destructor");
__int64 SpineBuildCallbackForIconFace_DeletingDestructor_alt1(
    __int64 a1) __asm__("SpineBuildCallbackForIconFace_DeletingDestructor");
__int64 SpineBuildCallbackForIconFace_Unknown3(__int64 result);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SpineBuildCallbackForIconFace_Destructor(__int64 a1);
void SpineBuildCallbackForIconFace_DeletingDestructor(__int64 a1);
_QWORD* game_156d210(__int64, int, __int16);
__int64 GameHr_1916be0(__int64, int, const char*, __int64, char);
__int64 GameRoutine_190b6a0(__int64, __int64, unsigned __int64);
__int64 GameRoutine_190b870(__int64, unsigned int, int);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 Pane_58f8a0(__int64);
__int64 SpineBuildCallbackForTalk_Unknown2(__int64 result, int, __int64, char);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
__int64 memchr(__int64, int, unsigned __int64);
__int64 spine_AnimationState_getCurrent(__int64, unsigned __int64);
__int64 spine_AnimationState_setEmptyAnimation(__int64, __int64, float);
__int64 spine_AnimationState_setTimeScale(double);
__int64 spine_Skeleton_getScaleY();
__int64 spine_Skeleton_setScaleY(_QWORD, float);
__int64 spine_TrackEntry_setTrackTime(float);
extern __int64 GameData_21ca070;
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a250(const char*);
void SpineBuildCallbackForIconFace_Unknown2(__int64 a1, int a2, __int64 a3,
                                            char a4);

void SpineBuildCallbackForIconFace_Unknown2(__int64 a1, int a2, __int64 a3,
                                            char a4)
{

#pragma clang fp contract(off)
  float v7;
  __int64 v8;
  const char* v9;
  unsigned __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  signed __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  _BYTE* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v42;
  unsigned __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  struct {
    __int64 v64[2];
    char* v65;
  } v64_;

  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
  if (a3 != 0 && (a4 & 1) != 0) {
    SpineBuildCallbackForTalk_Unknown2(a1, a2, a3, 1),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
    if (a2 == 1) {
      if (*(_BYTE*)(a3 + 1041) == 1 && *(_QWORD*)(a3 + 96) != 0) {
        spine_Skeleton_getScaleY(),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
        spine_Skeleton_setScaleY(*(_QWORD*)(a3 + 96), -fabsf(v7)),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v8 = *(_QWORD*)(a1 + 104);
      if (v8 != 0) {
        *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v8) + 24) + 16LL * *(int*)(a1 + 112) +
                   8) = *(_QWORD*)(a1 + 96),
                   v7 = COERCE_AS(__typeof__(v7),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
        *(_BYTE*)(*(_QWORD*)(a1 + 104) + 88LL) |= 1u;
        game_156d210(*(_QWORD*)(a1 + 104), *(_DWORD*)(a1 + 112), 0),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v9 = *(const char**)(*(_QWORD*)(a1 + 80) + 8LL);
      v10 = strlen(v9),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
      v11 = (__int64*)(a1 + 120);
      v12 = *(unsigned __int8*)(a1 + 120);
      v13 = *(_QWORD*)(a1 + 128);
      v14 = (v12 & 1) != 0 ? *(_QWORD*)(a1 + 128) : v12 >> 1;
      if (v14 != 0) {
        v15 = *(_QWORD*)(a1 + 136);
        v16 = v10;
        if ((v12 & 1) != 0) {
          v17 = *(_QWORD*)(a1 + 136);
        }
        else {
          v17 = a1 + 121;
        }
        if (v14 >= 1) {
          v18 = (_BYTE*)(v17 + v14);
          v19 = v17;
          do {
            v20 = (_BYTE*)memchr(v19, 95, v14),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
            if (v20 == nullptr) {
              break;
            }
            if (*v20 == 95) {
              if (v20 != v18 && &v20[-v17] != (_BYTE*)-1LL) {
                v21 = game_HashString(v17),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(float, "s0", "=w"));
                if (v21 != 0) {
                  v22 = *(_QWORD*)(GameData_21ca070 + 96);
                  if (v22 != 0 && *(_QWORD*)(GameData_21ca070 + 112) != 0) {
                    v24 = v22 - 1;
                    if ((v22 & (v22 - 1)) != 0) {
                      v25 = v21;
                      if (v21 >= v22) {
                        v25 = v21 % v22;
                      }
                    }
                    else {
                      v25 = v24 & v21;
                    }
                    v50 = *(_QWORD**)(*(_QWORD*)(GameData_21ca070 + 88) +
                                      8 * v25);
                    if (v50 != nullptr) {
                      v51 = (_QWORD*)*v50;
                      if (v51 != nullptr) {
                        if ((v22 & v24) == 0) {
                          while (1) {
                            v53 = v51[1];
                            if (v53 == v21) {
                              if (v51[2] == v21) {
                                goto LABEL_141;
                              }
                            }
                            else if ((v53 & v24) != v25) {
                              goto LABEL_117;
                            }
                            v51 = (_QWORD*)*v51;
                            v47 = 0;
                            v36 = 0;
                            if (v51 == nullptr) {
                              goto LABEL_119;
                            }
                          }
                        }
                        while (1) {
                          v52 = v51[1];
                          if (v52 == v21) {
                            if (v51[2] == v21) {
                            LABEL_141:
                              v47 = v51[3];
                              goto LABEL_118;
                            }
                          }
                          else {
                            if (v52 >= v22) {
                              v52 %= v22;
                            }
                            if (v52 != v25) {
                              break;
                            }
                          }
                          v51 = (_QWORD*)*v51;
                          v47 = 0;
                          v36 = 0;
                          if (v51 == nullptr) {
                            goto LABEL_119;
                          }
                        }
                      }
                    }
                  }
                }
              LABEL_117:
                v47 = 0;
              LABEL_118:
                v36 = 0;
                goto LABEL_119;
              }
              break;
            }
            v19 = (__int64)(v20 + 1);
            v14 = (signed __int64)&v18[-v19];
          } while ((__int64)&v18[-v19] >= 1);
        }
        if ((v12 & 1) != 0) {
          fw_text_String_CopyTerminated(v64_.v64, v15, v13),
              v7 =
                  COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        else {
          v26 = v11[1];
          v64_.v64[0] = *v11;
          v64_.v64[1] = v26;
          v64_.v65 = (char*)v11[2];
        }
        if ((v64_.v64[0] & 1) != 0) {
          v27 = v64_.v65;
        }
        else {
          v27 = (char*)v64_.v64 + 1;
        }
        v28 = game_HashString((__int64)v27),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v28 != 0) {
          v29 = *(_QWORD*)(GameData_21ca070 + 96);
          if (v29 != 0 && *(_QWORD*)(GameData_21ca070 + 112) != 0) {
            v31 = v29 - 1;
            if ((v29 & (v29 - 1)) != 0) {
              v32 = v28;
              if (v28 >= v29) {
                v32 = v28 % v29;
              }
            }
            else {
              v32 = v31 & v28;
            }
            v33 = *(_QWORD**)(*(_QWORD*)(GameData_21ca070 + 88) + 8 * v32);
            if (v33 != nullptr) {
              v34 = (_QWORD*)*v33;
              if (v34 != nullptr) {
                if ((v29 & v31) == 0) {
                  while (1) {
                    v37 = v34[1];
                    if (v37 == v28) {
                      if (v34[2] == v28) {
                        goto LABEL_97;
                      }
                    }
                    else if ((v37 & v31) != v32) {
                      goto LABEL_62;
                    }
                    v34 = (_QWORD*)*v34;
                    v36 = 0;
                    if (v34 == nullptr) {
                      goto LABEL_63;
                    }
                  }
                }
                do {
                  v35 = v34[1];
                  if (v35 == v28) {
                    if (v34[2] == v28) {
                    LABEL_97:
                      v36 = v34[3];
                      if (v16 <= 2) {
                        goto LABEL_98;
                      }
                      goto LABEL_64;
                    }
                  }
                  else {
                    if (v35 >= v29) {
                      v35 %= v29;
                    }
                    if (v35 != v32) {
                      break;
                    }
                  }
                  v34 = (_QWORD*)*v34;
                } while (v34 != nullptr);
              }
            }
          }
        }
      LABEL_62:
        v36 = 0;
      LABEL_63:
        if (v16 <= 2) {
        LABEL_98:
          String_60a250("string_view::substr"),
              v7 =
                  COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
        }
      LABEL_64:
        GameRoutine_1a09ce0((__int64)v64_.v64, v9 + 3, v16 - 3),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
        if ((v64_.v64[0] & 1) != 0) {
          v38 = v64_.v65;
        }
        else {
          v38 = (char*)v64_.v64 + 1;
        }
        v39 = game_HashString((__int64)v38),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v39 != 0) {
          v40 = *(_QWORD*)(GameData_21ca070 + 96);
          if (v40 != 0 && *(_QWORD*)(GameData_21ca070 + 112) != 0) {
            v42 = v40 - 1;
            if ((v40 & (v40 - 1)) != 0) {
              v43 = v39;
              if (v39 >= v40) {
                v43 = v39 % v40;
              }
            }
            else {
              v43 = v42 & v39;
            }
            v44 = *(_QWORD**)(*(_QWORD*)(GameData_21ca070 + 88) + 8 * v43);
            if (v44 != nullptr) {
              v45 = (_QWORD*)*v44;
              if (v45 != nullptr) {
                if ((v40 & v42) == 0) {
                  while (1) {
                    v48 = v45[1];
                    if (v48 == v39) {
                      if (v45[2] == v39) {
                        goto LABEL_99;
                      }
                    }
                    else if ((v48 & v42) != v43) {
                      goto LABEL_91;
                    }
                    v45 = (_QWORD*)*v45;
                    v47 = 0;
                    if (v45 == nullptr) {
                      goto LABEL_92;
                    }
                  }
                }
                do {
                  v46 = v45[1];
                  if (v46 == v39) {
                    if (v45[2] == v39) {
                    LABEL_99:
                      v47 = v45[3];
                      if ((v64_.v64[0] & 1) != 0) {
                        goto LABEL_93;
                      }
                      goto LABEL_119;
                    }
                  }
                  else {
                    if (v46 >= v40) {
                      v46 %= v40;
                    }
                    if (v46 != v43) {
                      break;
                    }
                  }
                  v45 = (_QWORD*)*v45;
                } while (v45 != nullptr);
              }
            }
          }
        }
      LABEL_91:
        v47 = 0;
      LABEL_92:
        if ((v64_.v64[0] & 1) != 0) {
        LABEL_93:
          if (v64_.v65 != nullptr) {
            v49 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v49 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v49,
                (__int64)v64_.v65),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
      LABEL_119:
        if (v47 != 0) {
          v54 = v47;
        }
        else {
          v54 = v36;
        }
        if (v54 != 0) {
          v55 = *(_QWORD*)(v54 + 40);
          if (v55 != 0) {
            v56 = strlen(*(const char**)(v54 + 40)),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
            GameRoutine_190b6a0(a3, v55, v56),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          }
          GameRoutine_190b870(a3, *(unsigned __int8*)(v54 + 56),
                              *(unsigned __int8*)(v54 + 57)),
              v7 =
                  COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
          v57 = *(_QWORD*)(a3 + 1456);
          if ((*(_BYTE*)(v54 + 60) & 1) != 0) {
            *(_QWORD*)(a3 + 1456) = v57 | 1;
            GameHr_1916be0(a3, 2, "EX_Sweat", 8, 1),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          }
          else {
            v58 = *(_QWORD*)(a3 + 104);
            *(_QWORD*)(a3 + 1456) = v57 & 0xFFFFFFFFFFFFFFFELL;
            spine_AnimationState_setEmptyAnimation(v58, 2, 0x0.0p+0f),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v59 = *(_QWORD*)(a3 + 1456);
          if ((*(_BYTE*)(v54 + 60) & 2) != 0) {
            *(_QWORD*)(a3 + 1456) = v59 | 2;
            GameHr_1916be0(a3, 4, "EX_Cheek", 8, 1),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          }
          else {
            v60 = *(_QWORD*)(a3 + 104);
            *(_QWORD*)(a3 + 1456) = v59 & 0xFFFFFFFFFFFFFFFDLL;
            spine_AnimationState_setEmptyAnimation(v60, 4, 0x0.0p+0f),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          }
          v61 = *(_QWORD*)(a3 + 1456);
          if ((*(_BYTE*)(v54 + 60) & 4) != 0) {
            *(_QWORD*)(a3 + 1456) = v61 | 4;
            GameHr_1916be0(a3, 3, "EX_Anger", 8, 1),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          }
          else {
            v62 = *(_QWORD*)(a3 + 104);
            *(_QWORD*)(a3 + 1456) = v61 & 0xFFFFFFFFFFFFFFFBLL;
            spine_AnimationState_setEmptyAnimation(v62, 3, 0x0.0p+0f),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          }
          if (*(_BYTE*)(a3 + 1041) == 1) {
            if (*(_QWORD*)(a3 + 104) == 0 ||
                (spine_AnimationState_setTimeScale(0x0.0p+0),
                 *(_BYTE*)(a3 + 1041) == 1)) {
              v63 = *(_QWORD*)(a3 + 104);
              if (v63 != 0 && spine_AnimationState_getCurrent(v63, 1u) != 0) {
                spine_TrackEntry_setTrackTime(0x1.4000000000000p+3f),
                    v7 = COERCE_AS(__typeof__(v7),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
              }
            }
          }
        }
      }
    }
  }
}

__int64 SpineBuildCallbackForIconFace_Unknown12(__int64 result, __int64 a2,
                                                int a3)
{
  *(_QWORD*)(result + 104) = a2;
  *(_DWORD*)(result + 112) = a3;
  return result;
}

void SpineBuildCallbackForIconFace_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_SpineBuildCallbackForIconFace_vtable;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 136);
    if (v1 != 0) {
      v2 = a1;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
      a1 = v2;
    }
  }
  *(_QWORD*)a1 = game_SpineBuildCallback_vtable;
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 72);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
}

void SpineBuildCallbackForIconFace_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_SpineBuildCallbackForIconFace_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 136);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  *(_QWORD*)a1 = game_SpineBuildCallback_vtable;
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 72);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v6, v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v7, a1);
}

__int64 SpineBuildCallbackForIconFace_Unknown3(__int64 result)
{
  char v1;
  char v2;
  _BYTE* v3;

  v1 = *(_BYTE*)(result + 56);
  *(_DWORD*)(result + 47) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_BYTE*)(result + 24) = 0;
  if ((v1 & 1) != 0) {
    **(_BYTE**)(result + 72) = 0;
    *(_QWORD*)(result + 64) = 0;
  }
  else {
    *(_WORD*)(result + 56) = 0;
  }
  v2 = *(_BYTE*)(result + 120);
  *(_QWORD*)(result + 96) = 0;
  *(_QWORD*)(result + 104) = 0;
  if ((v2 & 1) != 0) {
    v3 = *(_BYTE**)(result + 136);
    *(_QWORD*)(result + 128) = 0;
    *v3 = 0;
  }
  else {
    *(_BYTE*)(result + 120) = 0;
    *(_BYTE*)(result + 121) = 0;
  }
  return result;
}

#pragma GCC visibility pop
