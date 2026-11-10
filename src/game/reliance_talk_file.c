#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21f2288;
extern __int64 GameData_21f2290;
extern __int64 GameData_21f22a0;
extern __int64 GameData_21f22a8;
extern __int64 GameData_21f22b8;
extern __int64 GameData_21f22c0;
extern __int64 GameData_21f22c8;
extern __int64 GameData_21f22d0;
extern __int64 GameData_21f22e0;
extern __int64 GameData_21f22e8;
extern __int64 GameData_21f22f0;
extern __int64 GameData_21f22f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21f2308;
extern int GameData_21f230c;
__int64 RelianceTalkFile_Unknown5();
__int64 GameRoutine_66cf00(_QWORD);
__int64 GameRoutine_66d660(_QWORD);
extern __int64 GameData_21c9000;
extern __int64 GameData_21c9760;
extern __int64 GameData_21c9768;
extern __int64 GameData_21c9770;
extern __int64 GameData_21c9780;
extern __int64 GameData_21c9788;
extern __int64 GameData_21c9790;
extern __int64 GameData_21c9798;
extern __int64 GameData_21c97a0;
extern __int64 GameData_21c97b0;
extern __int64 GameData_21c97b8;
extern __int64 GameData_21c97c0;
extern __int64 GameData_21c97c8;
extern __int64 GameData_21c97d0;
extern __int64 GameData_21c97e0;
extern __int64 GameData_21c97e8;
__int64 RelianceTalkFile_8cbf60(__int64 result);

__int64 RelianceTalkFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;

  if (GameData_21f22d0 != 0) {
    v0 = (_QWORD*)GameData_21f22c8;
    if (GameData_21f22c8 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v0;
        v5 = (_QWORD*)v0[5];
        if (v5 != nullptr) {
          do {
            v6 = (_QWORD*)*v5;
            if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
              v7 = 128;
            }
            else {
              v7 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v7);
            v5 = v6;
          } while (v6 != nullptr);
        }
        v8 = v0[3];
        v0[3] = 0;
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v9);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v2);
        v0 = v4;
      } while (v4 != nullptr);
    }
    GameData_21f22c8 = 0;
    if (GameData_21f22c0 != 0) {
      v10 = GameData_21f22c0 & 7;
      if ((unsigned __int64)GameData_21f22c0 >= 8) {
        v12 = GameData_21f22c0 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(GameData_21f22b8 + 8 * v11) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v11 + 8) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v11 + 16) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v11 + 24) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v11 + 32) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v11 + 40) = 0;
          *(_QWORD*)(GameData_21f22b8 + 8 * v11 + 48) = 0;
          v13 = GameData_21f22b8 + 8 * v11;
          v11 += 8;
          *(_QWORD*)(v13 + 56) = 0;
        } while (v12 != v11);
      }
      else {
        v11 = 0;
      }
      if (v10 != 0) {
        v14 = 8 * v11;
        do {
          --v10;
          *(_QWORD*)(GameData_21f22b8 + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    GameData_21f22d0 = 0;
  }
  if (GameData_21f22f8 != 0) {
    v15 = (_QWORD*)GameData_21f22f0;
    if (GameData_21f22f0 != 0) {
      v16 = fw_memory_g_heap_manager_ptr;
      do {
        v17 = (_QWORD*)*v15;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v18);
        v15 = v17;
      } while (v17 != nullptr);
    }
    GameData_21f22f0 = 0;
    if (GameData_21f22e8 != 0) {
      v19 = GameData_21f22e8 & 7;
      if ((unsigned __int64)GameData_21f22e8 >= 8) {
        v21 = GameData_21f22e8 & 0xFFFFFFFFFFFFFFF8LL;
        v20 = 0;
        do {
          *(_QWORD*)(GameData_21f22e0 + 8 * v20) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v20 + 8) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v20 + 16) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v20 + 24) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v20 + 32) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v20 + 40) = 0;
          *(_QWORD*)(GameData_21f22e0 + 8 * v20 + 48) = 0;
          v22 = GameData_21f22e0 + 8 * v20;
          v20 += 8;
          *(_QWORD*)(v22 + 56) = 0;
        } while (v21 != v20);
      }
      else {
        v20 = 0;
      }
      if (v19 != 0) {
        v23 = 8 * v20;
        do {
          --v19;
          *(_QWORD*)(GameData_21f22e0 + v23) = 0;
          v23 += 8;
        } while (v19 != 0);
      }
    }
    GameData_21f22f8 = 0;
  }
  GameData_21f2290 = GameData_21f2288;
  GameData_21f22a8 = GameData_21f22a0;
  GameData_21f2308 = 0;
  GameData_21f230c = 0;
  return result;
}

__int64 RelianceTalkFile_8cbf60(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
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
  _QWORD* v60;
  __int64* v61;

  if (*(_BYTE*)(result + 248) == 1) {
    v1 = *(_QWORD**)(result + 8);
    v2 = (_QWORD*)result;
    if (*(_QWORD**)(result + 16) == v1) {
      v3 = 0;
    }
    else {
      v3 = *v1 + 16LL;
    }
    v4 = GameData_21c9768;
    v5 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
    if (GameData_21c9770 == GameData_21c9768) {
      v5 = 0;
    }
    v6 = GameData_21c9788 + GameData_21c9780;
    if (v5 == GameData_21c9788 + GameData_21c9780) {
      GameRoutine_66cf00(&GameData_21c9760);
      v4 = GameData_21c9768;
      v6 = GameData_21c9788 + GameData_21c9780;
    }
    *(_QWORD*)(*(_QWORD*)(v4 + 8 * (v6 >> 9)) + 8 * (v6 & 0x1FF)) = v3;
    ++GameData_21c9788;
    v7 = v2[4];
    if (v2[5] == v7) {
      v8 = 0;
    }
    else {
      v8 = *(_QWORD*)(*(_QWORD*)v7 + 8LL);
    }
    v9 = GameData_21c9798;
    v10 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v10 = 0;
    }
    v11 = GameData_21c97b8 + GameData_21c97b0;
    if (v10 == GameData_21c97b8 + GameData_21c97b0) {
      GameRoutine_66cf00(&GameData_21c9790);
      v9 = GameData_21c9798;
      v11 = GameData_21c97b8 + GameData_21c97b0;
    }
    *(_QWORD*)(*(_QWORD*)(v9 + 8 * (v11 >> 9)) + 8 * (v11 & 0x1FF)) = v8;
    ++GameData_21c97b8;
    result = (*(__int64 (**)(_QWORD*))(*v2 + 48LL))(v2);
    v12 = (__int64*)v2[7];
    v13 = (__int64*)v2[8];
    v60 = v2;
    if (v12 != v13) {
      v14 = &GameData_21c9000;
      v15 = GameData_21c97c8;
      v16 = GameData_21c97d0;
      v17 = GameData_21c97e0;
      v18 = GameData_21c97e8;
      v19 = fw_memory_g_heap_manager_ptr;
      v61 = (__int64*)v2[8];
      do {
        v20 = v16 - v15;
        v21 = *v12;
        v22 = v16 == v15;
        v23 = v18 + v17;
        v24 = (v20 << 6) - 1;
        if (v22) {
          v24 = 0;
        }
        if (v24 == v23) {
          result = GameRoutine_66d660(&GameData_21c97c0);
          v15 = GameData_21c97c8;
          v23 = GameData_21c97e8 + GameData_21c97e0;
        }
        *(_QWORD*)(*(_QWORD*)(v15 + 8 * (v23 >> 9)) + 8 * (v23 & 0x1FF)) = v21;
        v25 = v14[253] + 1;
        v14[253] = v25;
        v26 = *(_QWORD*)(v21 + 24);
        if (v26 == 0) {
          goto LABEL_81;
        }
        v27 = *(_QWORD*)(v26 + 216);
        if (v27 != 0) {
          v28 = *(_QWORD*)v19;
          *(_QWORD*)(v26 + 224) = v27;
          if (*(_QWORD*)(v28 + 200) != 0) {
            v29 = 128;
          }
          else {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(v28 + v29);
        }
        v30 = *(_QWORD*)(v26 + 192);
        if (v30 != 0) {
          v31 = v14;
          v32 = *(_QWORD*)(v26 + 200);
          if (v30 == v32) {
            v14 = v31;
          }
          else {
            do {
              v33 = *(_QWORD*)(v32 - 24);
              if (v33 != 0) {
                *(_QWORD*)(v32 - 16) = v33;
                if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
                  v34 = 128;
                }
                else {
                  v34 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v34);
              }
              v35 = v32 - 48;
              v36 = *(_QWORD*)(v32 - 48);
              if (v36 != 0) {
                *(_QWORD*)(v32 - 40) = v36;
                if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
                  v37 = 128;
                }
                else {
                  v37 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v37);
              }
              v32 -= 48;
            } while (v35 != v30);
            v38 = *(_QWORD*)(v26 + 192);
            v13 = v61;
            v14 = v31;
            *(_QWORD*)(v26 + 200) = v30;
            if (v38 == 0) {
              goto LABEL_49;
            }
          }
          if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
            v39 = 128;
          }
          else {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v39);
        }
      LABEL_49:
        v40 = *(_QWORD*)(v26 + 168);
        if (v40 != 0) {
          v41 = *(_QWORD*)v19;
          *(_QWORD*)(v26 + 176) = v40;
          if (*(_QWORD*)(v41 + 200) != 0) {
            v42 = 128;
          }
          else {
            v42 = 56;
          }
          nn_mem_StandardAllocator_Free(v41 + v42);
        }
        v43 = *(_QWORD*)(v26 + 144);
        if (v43 != 0) {
          v44 = *(_QWORD*)v19;
          *(_QWORD*)(v26 + 152) = v43;
          if (*(_QWORD*)(v44 + 200) != 0) {
            v45 = 128;
          }
          else {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(v44 + v45);
        }
        if ((*(_BYTE*)(v26 + 80) & 1) != 0 && *(_QWORD*)(v26 + 96) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
            v46 = 128;
          }
          else {
            v46 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v46);
        }
        if ((*(_BYTE*)(v26 + 56) & 1) != 0 && *(_QWORD*)(v26 + 72) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
            v47 = 128;
          }
          else {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v47);
        }
        if ((*(_BYTE*)(v26 + 16) & 1) != 0 && *(_QWORD*)(v26 + 32) != 0) {
          if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
            v48 = 128;
          }
          else {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v48);
        }
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v49);
        *(_QWORD*)(v21 + 24) = 0;
        v25 = v14[253];
      LABEL_81:
        v15 = GameData_21c97c8;
        v16 = GameData_21c97d0;
        v17 = GameData_21c97e0;
        if (GameData_21c97d0 == GameData_21c97c8) {
          v50 = 0;
        }
        else {
          v50 = ((GameData_21c97d0 - GameData_21c97c8) << 6) - 1;
        }
        v18 = v25 - 1;
        GameData_21c97e8 = v25 - 1;
        if ((unsigned __int64)(v50 - (v25 + GameData_21c97e0) + 1) >= 0x400) {
          if (*(_QWORD*)(GameData_21c97d0 - 8) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
              v51 = 128;
            }
            else {
              v51 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v51);
            v15 = GameData_21c97c8;
            v16 = GameData_21c97d0;
            v17 = GameData_21c97e0;
            v18 = GameData_21c97e8;
          }
          v16 -= 8;
          GameData_21c97d0 = v16;
        }
        ++v12;
      } while (v12 != v13);
    }
    v52 = GameData_21c9770;
    v53 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
    if (GameData_21c9770 == GameData_21c9768) {
      v53 = 0;
    }
    *((_BYTE*)v60 + 248) = 0;
    v54 = GameData_21c9788--;
    if ((unsigned __int64)(v53 - (v54 + GameData_21c9780) + 1) >= 0x400) {
      if (*(_QWORD*)(v52 - 8) != 0) {
        v55 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v55 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v55);
        v52 = GameData_21c9770;
      }
      GameData_21c9770 = v52 - 8;
    }
    v56 = GameData_21c97a0;
    v57 = GameData_21c97b8;
    v58 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v58 = 0;
    }
    --GameData_21c97b8;
    if ((unsigned __int64)(v58 - (v57 + GameData_21c97b0) + 1) >= 0x400) {
      if (*(_QWORD*)(GameData_21c97a0 - 8) != 0) {
        v59 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v59 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v59);
        v56 = GameData_21c97a0;
      }
      GameData_21c97a0 = v56 - 8;
    }
  }
  return result;
}

#pragma GCC visibility pop
