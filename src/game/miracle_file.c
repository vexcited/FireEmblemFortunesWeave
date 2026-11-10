#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_66cf00(_QWORD);
__int64 GameRoutine_66d660(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
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
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MiracleFile_908d60(__int64 result);

__int64 MiracleFile_908d60(__int64 result)
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
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
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
  _QWORD* v73;

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
    v73 = v2;
    if (v12 != v13) {
      v14 = GameData_21c97c8;
      v15 = GameData_21c97d0;
      v16 = GameData_21c97e0;
      v17 = GameData_21c97e8;
      v18 = fw_memory_g_heap_manager_ptr;
      do {
        v19 = v15 - v14;
        v20 = *v12;
        v21 = v15 == v14;
        v22 = v17 + v16;
        v23 = (v19 << 6) - 1;
        if (v21) {
          v23 = 0;
        }
        if (v23 == v22) {
          result = GameRoutine_66d660(&GameData_21c97c0);
          v14 = GameData_21c97c8;
          v22 = GameData_21c97e8 + GameData_21c97e0;
        }
        *(_QWORD*)(*(_QWORD*)(v14 + 8 * (v22 >> 9)) + 8 * (v22 & 0x1FF)) = v20;
        v24 = ++GameData_21c97e8;
        v25 = *(_QWORD**)(v20 + 24);
        if (v25 != nullptr) {
          v26 = v25[45];
          if (v26 != 0) {
            v27 = *(_QWORD*)v18;
            v25[46] = v26;
            if (*(_QWORD*)(v27 + 200) != 0) {
              v28 = 128;
            }
            else {
              v28 = 56;
            }
            nn_mem_StandardAllocator_Free(v27 + v28);
          }
          v29 = v25[42];
          if (v29 != 0) {
            v30 = *(_QWORD*)v18;
            v25[43] = v29;
            if (*(_QWORD*)(v30 + 200) != 0) {
              v31 = 128;
            }
            else {
              v31 = 56;
            }
            nn_mem_StandardAllocator_Free(v30 + v31);
          }
          v32 = v25[38];
          if (v32 != 0) {
            v33 = *(_QWORD*)v18;
            v25[39] = v32;
            if (*(_QWORD*)(v33 + 200) != 0) {
              v34 = 128;
            }
            else {
              v34 = 56;
            }
            nn_mem_StandardAllocator_Free(v33 + v34);
          }
          v35 = v25[33];
          if (v35 != 0) {
            v36 = *(_QWORD*)v18;
            v25[34] = v35;
            if (*(_QWORD*)(v36 + 200) != 0) {
              v37 = 128;
            }
            else {
              v37 = 56;
            }
            nn_mem_StandardAllocator_Free(v36 + v37);
          }
          v38 = v25[30];
          if (v38 != 0) {
            v39 = *(_QWORD*)v18;
            v25[31] = v38;
            if (*(_QWORD*)(v39 + 200) != 0) {
              v40 = 128;
            }
            else {
              v40 = 56;
            }
            nn_mem_StandardAllocator_Free(v39 + v40);
          }
          v41 = v25[26];
          if (v41 != 0) {
            v42 = *(_QWORD*)v18;
            v25[27] = v41;
            if (*(_QWORD*)(v42 + 200) != 0) {
              v43 = 128;
            }
            else {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free(v42 + v43);
          }
          v44 = v25[21];
          if (v44 != 0) {
            v45 = *(_QWORD*)v18;
            v25[22] = v44;
            if (*(_QWORD*)(v45 + 200) != 0) {
              v46 = 128;
            }
            else {
              v46 = 56;
            }
            nn_mem_StandardAllocator_Free(v45 + v46);
          }
          v47 = v25[18];
          if (v47 != 0) {
            v48 = *(_QWORD*)v18;
            v25[19] = v47;
            if (*(_QWORD*)(v48 + 200) != 0) {
              v49 = 128;
            }
            else {
              v49 = 56;
            }
            nn_mem_StandardAllocator_Free(v48 + v49);
          }
          v50 = v25[14];
          if (v50 != 0) {
            v51 = *(_QWORD*)v18;
            v25[15] = v50;
            if (*(_QWORD*)(v51 + 200) != 0) {
              v52 = 128;
            }
            else {
              v52 = 56;
            }
            nn_mem_StandardAllocator_Free(v51 + v52);
          }
          v53 = v25[9];
          if (v53 != 0) {
            v54 = *(_QWORD*)v18;
            v25[10] = v53;
            if (*(_QWORD*)(v54 + 200) != 0) {
              v55 = 128;
            }
            else {
              v55 = 56;
            }
            nn_mem_StandardAllocator_Free(v54 + v55);
          }
          v56 = v25[6];
          if (v56 != 0) {
            v57 = *(_QWORD*)v18;
            v25[7] = v56;
            if (*(_QWORD*)(v57 + 200) != 0) {
              v58 = 128;
            }
            else {
              v58 = 56;
            }
            nn_mem_StandardAllocator_Free(v57 + v58);
          }
          v59 = v25[2];
          if (v59 != 0) {
            v60 = *(_QWORD*)v18;
            v25[3] = v59;
            if (*(_QWORD*)(v60 + 200) != 0) {
              v61 = 128;
            }
            else {
              v61 = 56;
            }
            nn_mem_StandardAllocator_Free(v60 + v61);
          }
          if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
            v62 = 128;
          }
          else {
            v62 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v62);
          *(_QWORD*)(v20 + 24) = 0;
          v24 = GameData_21c97e8;
        }
        v14 = GameData_21c97c8;
        v15 = GameData_21c97d0;
        v16 = GameData_21c97e0;
        if (GameData_21c97d0 == GameData_21c97c8) {
          v63 = 0;
        }
        else {
          v63 = ((GameData_21c97d0 - GameData_21c97c8) << 6) - 1;
        }
        v17 = v24 - 1;
        GameData_21c97e8 = v24 - 1;
        if ((unsigned __int64)(v63 - (v24 + GameData_21c97e0) + 1) >= 0x400) {
          if (*(_QWORD*)(GameData_21c97d0 - 8) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
              v64 = 128;
            }
            else {
              v64 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v64);
            v14 = GameData_21c97c8;
            v15 = GameData_21c97d0;
            v16 = GameData_21c97e0;
            v17 = GameData_21c97e8;
          }
          v15 -= 8;
          GameData_21c97d0 = v15;
        }
        ++v12;
      } while (v12 != v13);
    }
    v65 = GameData_21c9770;
    v66 = ((GameData_21c9770 - GameData_21c9768) << 6) - 1;
    if (GameData_21c9770 == GameData_21c9768) {
      v66 = 0;
    }
    *((_BYTE*)v73 + 248) = 0;
    v67 = GameData_21c9788--;
    if ((unsigned __int64)(v66 - (v67 + GameData_21c9780) + 1) >= 0x400) {
      if (*(_QWORD*)(v65 - 8) != 0) {
        v68 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v68 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v68);
        v65 = GameData_21c9770;
      }
      GameData_21c9770 = v65 - 8;
    }
    v69 = GameData_21c97a0;
    v70 = GameData_21c97b8;
    v71 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v71 = 0;
    }
    --GameData_21c97b8;
    if ((unsigned __int64)(v71 - (v70 + GameData_21c97b0) + 1) >= 0x400) {
      if (*(_QWORD*)(GameData_21c97a0 - 8) != 0) {
        v72 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v72 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v72);
        v69 = GameData_21c97a0;
      }
      GameData_21c97a0 = v69 - 8;
    }
  }
  return result;
}

#pragma GCC visibility pop
