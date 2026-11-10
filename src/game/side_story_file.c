#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12b2c20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_66bfc0(_QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN* game_g_hero_ids;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21ca020;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SideStoryFile_Unknown4(__int64 a1);
__int64 SideStoryFile_12ae4c0(unsigned __int8 a1);
__int64 GameRoutine_66cf00(_QWORD);
__int64 GameRoutine_66d660(_QWORD);
__int64 GameRoutine_675b20(_QWORD);
__int64 GameRoutine_67fae0(_QWORD);
__int64 GameRoutine_6b9680(_QWORD);
__int64 GameRoutine_88cc60(_QWORD);
__int64 GameRoutine_88cda0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
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
__int64 SideStoryFile_12ae7e0(__int64 result);

__int64 SideStoryFile_Unknown4(__int64 a1)
{
  __int64 result;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int** v13;
  unsigned int** v14;
  unsigned int* v15;
  __int64 v16;

  result = a1 + 8;
  v2 = (_QWORD*)result;
  if (*(_QWORD*)(result + 144) != 0) {
    v3 = *(_QWORD**)(result + 136);
    if (v3 != nullptr) {
      v4 = fw_memory_g_heap_manager_ptr;
      do {
        v5 = (_QWORD*)*v3;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
        v3 = v5;
      } while (v5 != nullptr);
    }
    v7 = v2[16];
    v2[17] = 0;
    if (v7 != 0) {
      v8 = v7 & 7;
      if (v7 >= 8) {
        v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(v2[15] + 8 * v9) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 8) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 16) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 24) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 32) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 40) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 48) = 0;
          v11 = v2[15] + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(v2[15] + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    v2[18] = 0;
  }
  v13 = (unsigned int**)v2[7];
  v14 = (unsigned int**)v2[8];
  while (v13 != v14) {
    v15 = *v13;
    v16 = **v13;
    if ((_DWORD)v16 != 0) {
      GameRoutine_12b2c20(v2, v16, *v13);
    }
    result = GameRoutine_66bfc0(v15);
    if ((_DWORD)result != 0) {
      result = GameRoutine_12b2c20(v2, (unsigned int)result, v15);
    }
    ++v13;
  }
  return result;
}

__int64 SideStoryFile_12ae4c0(unsigned __int8 a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;

  v1 = game_HashString(*(&game_g_hero_ids + a1));
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v2 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    return 0;
  }
  v4 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v5 = v1;
    if (v1 >= v2) {
      v5 = v1 % v2;
    }
  }
  else {
    v5 = v4 & v1;
  }
  v6 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v5);
  if (v6 == nullptr) {
    return 0;
  }
  v7 = (_QWORD*)*v6;
  if (v7 == nullptr) {
    return 0;
  }
  if ((v2 & v4) == 0) {
    while (1) {
      v10 = v7[1];
      if (v10 == v1) {
        if (v7[2] == v1) {
          goto LABEL_26;
        }
      }
      else if ((v10 & v4) != v5) {
        return 0;
      }
      v7 = (_QWORD*)*v7;
      v9 = 0;
      if (v7 == nullptr) {
        return v9;
      }
    }
  }
  while (1) {
    v8 = v7[1];
    if (v8 == v1) {
      break;
    }
    if (v8 >= v2) {
      v8 %= v2;
    }
    if (v8 != v5) {
      return 0;
    }
  LABEL_15:
    v7 = (_QWORD*)*v7;
    if (v7 == nullptr) {
      return 0;
    }
  }
  if (v7[2] != v1) {
    goto LABEL_15;
  }

LABEL_26:
  v11 = v7[3];
  if (v11 == 0) {
    return 0;
  }
  v12 = *(__int64**)(GameData_21ca020 + 64);
  v13 = *(__int64**)(GameData_21ca020 + 72);
  if (v12 == v13) {
    return 0;
  }
  while (1) {
    v15 = *v12++;
    v14 = v15;
    if (*(_QWORD*)(v15 + 160) == v11) {
      break;
    }
    v9 = 0;
    if (v12 == v13) {
      return v9;
    }
  }
  return *(_QWORD*)(v14 + 376);
}

__int64 SideStoryFile_12ae7e0(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
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
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int16* v23;
  char v24;
  int v25;
  char v26;
  unsigned int v27;
  unsigned int v28;
  unsigned __int16* v29;
  unsigned __int16* v30;
  __int64 i;
  char v32;
  char v33;
  unsigned __int16* v34;
  unsigned __int16* v35;
  __int64 v36;
  bool v37;
  bool v38;
  bool v39;
  __int64 v41;
  char v42;
  char v43;
  int v44;
  unsigned __int16* v45;
  unsigned __int16* v46;
  __int64 v47;
  __int64 v48;
  int v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned int v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 j;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  unsigned int v70;
  unsigned int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 k;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;

  if ((*(_BYTE*)(result + 248) & 1) == 0) {
    v1 = *(_QWORD**)(result + 8);
    v2 = result;
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
    v7 = *(_QWORD*)(v2 + 32);
    if (*(_QWORD*)(v2 + 40) == v7) {
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
    v12 = *(__int64**)(v2 + 56);
    v13 = *(__int64**)(v2 + 64);
    ++GameData_21c97b8;
    if (v12 != v13) {
      v14 = GameData_21c97c8;
      v15 = GameData_21c97d0;
      v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v17 = GameData_21c97e0;
      v18 = GameData_21c97e8;
      do {
        v19 = v15 - v14;
        v20 = *v12;
        v37 = v15 == v14;
        v21 = v18 + v17;
        v22 = (v19 << 6) - 1;
        if (v37) {
          v22 = 0;
        }
        if (v22 == v21) {
          GameRoutine_66d660(&GameData_21c97c0);
          v14 = GameData_21c97c8;
          v21 = GameData_21c97e8 + GameData_21c97e0;
        }
        *(_QWORD*)(*(_QWORD*)(v14 + 8 * (v21 >> 9)) + 8 * (v21 & 0x1FF)) = v20;
        ++GameData_21c97e8;
        GameRoutine_67fae0(v20 + 32);
        GameRoutine_88cda0(v20 + 48);
        GameRoutine_67fae0(v20 + 152);
        GameRoutine_67fae0(v20 + 176);
        GameRoutine_88cc60(v20 + 192);
        GameRoutine_67fae0(v20 + 208);
        GameRoutine_675b20(v20 + 344);
        GameRoutine_6b9680(v20 + 360);
        v23 = *(unsigned __int16**)(v20 + 24);
        if (v23 != nullptr) {
          v24 = *(_BYTE*)(v20 + 228);
          if (v24 == 0) {
            goto LABEL_29;
          }
        }
        else {
          v23 = (unsigned __int16*)fw_memory_HeapManager_Allocate(*v16, 96, 16,
                                                                  0);
          *(_QWORD*)v23 = 0;
          *((_QWORD*)v23 + 1) = 0;
          *((_QWORD*)v23 + 2) = 0;
          *((_QWORD*)v23 + 3) = 0;
          *((_QWORD*)v23 + 4) = 0;
          *((_QWORD*)v23 + 5) = 0;
          *((_QWORD*)v23 + 6) = 0;
          *((_QWORD*)v23 + 7) = 0;
          *((_QWORD*)v23 + 8) = 0;
          *((_QWORD*)v23 + 9) = 0;
          *((_QWORD*)v23 + 10) = 0;
          *((_QWORD*)v23 + 11) = 0;
          *(_QWORD*)(v20 + 24) = v23;
          v24 = *(_BYTE*)(v20 + 228);
          if (v24 == 0) {
          LABEL_29:
            v24 = *(_BYTE*)(v20 + 224);
            v26 = *(_BYTE*)(v20 + 225);
            *(_BYTE*)v23 = v24;
            *((_BYTE*)v23 + 1) = v26;
            LOBYTE(v27) = *(_BYTE*)(v20 + 226);
            LOBYTE(v28) = *(_BYTE*)(v20 + 227);
            goto LABEL_30;
          }
        }
        v25 = *(unsigned __int8*)(v20 + 230);
        v26 = *(_BYTE*)(v20 + 229);
        *(_BYTE*)v23 = v24;
        *((_BYTE*)v23 + 1) = v26;
        if (v25 == 0) {
          v27 = *v23;
          v28 = v27 >> 8;
          v23[1] = v27;
          v24 = v27;
          v26 = BYTE1(v27);
          goto LABEL_32;
        }
        LOBYTE(v27) = *(_BYTE*)(v20 + 230);
        LOBYTE(v28) = *(_BYTE*)(v20 + 231);
      LABEL_30:
        *((_BYTE*)v23 + 2) = v27;
        *((_BYTE*)v23 + 3) = v28;
      LABEL_32:
        v29 = v23 + 2;
        v30 = v23 + 22;
        for (i = 0; i != 10; i += 2) {
          v34 = &v29[2 * i];
          *(_DWORD*)v34 = *(_DWORD*)(v20 + 224);
          v35 = &v30[2 * i];
          *(_BYTE*)v35 = v24;
          *((_BYTE*)v35 + 1) = v26;
          *((_BYTE*)v35 + 2) = v27;
          *((_BYTE*)v35 + 3) = v28;
          if (i != 0 &&
              ((*(unsigned __int8*)(v20 + 144) >> (i - 1)) & 1) != 0) {
            v36 = *(unsigned __int16*)(v20 + 240);
            v37 = *(_WORD*)(v20 + 240) != 0 &&
                  *(unsigned __int16*)(v20 + 256) == (_DWORD)v36;
            v38 = v37 && *(unsigned __int16*)(v20 + 272) == (_DWORD)v36;
            v39 = v38 && *(unsigned __int16*)(v20 + 288) == (_DWORD)v36;
            if (v39 && *(unsigned __int16*)(v20 + 304) == (_DWORD)v36) {
              v41 = 0;
              while (*(unsigned __int8*)(*(_QWORD*)(v20 + 248) + v41) !=
                     (unsigned __int8)i) {
                if (v36 == ++v41) {
                  goto LABEL_56;
                }
              }
              v42 = *(_BYTE*)(*(_QWORD*)(v20 + 280) + v41);
              *((_BYTE*)v34 + 2) = *(_BYTE*)(*(_QWORD*)(v20 + 264) + v41);
              *((_BYTE*)v34 + 3) = v42;
              v43 = *(_BYTE*)(*(_QWORD*)(v20 + 312) + v41);
              *((_BYTE*)v35 + 2) = *(_BYTE*)(*(_QWORD*)(v20 + 296) + v41);
              *((_BYTE*)v35 + 3) = v43;
            }
          }
        LABEL_56:
          v44 = *(_DWORD*)(v20 + 224);
          v45 = &v29[2 * (i | 1)];
          v46 = &v30[2 * (i | 1)];
          *(_BYTE*)v46 = v24;
          *((_BYTE*)v46 + 1) = v26;
          *((_BYTE*)v46 + 2) = v27;
          *((_BYTE*)v46 + 3) = v28;
          *(_DWORD*)v45 = v44;
          if (((*(unsigned __int8*)(v20 + 144) >> ((i | 1) - 1)) & 1) != 0) {
            v47 = *(unsigned __int16*)(v20 + 240);
            if (*(_WORD*)(v20 + 240) != 0 &&
                *(unsigned __int16*)(v20 + 256) == (_DWORD)v47 &&
                *(unsigned __int16*)(v20 + 272) == (_DWORD)v47 &&
                *(unsigned __int16*)(v20 + 288) == (_DWORD)v47 &&
                *(unsigned __int16*)(v20 + 304) == (_DWORD)v47) {
              v48 = 0;
              while (*(unsigned __int8*)(*(_QWORD*)(v20 + 248) + v48) !=
                     ((unsigned __int8)i | 1)) {
                if (v47 == ++v48) {
                  goto LABEL_34;
                }
              }
              v32 = *(_BYTE*)(*(_QWORD*)(v20 + 280) + v48);
              *((_BYTE*)v45 + 2) = *(_BYTE*)(*(_QWORD*)(v20 + 264) + v48);
              *((_BYTE*)v45 + 3) = v32;
              v33 = *(_BYTE*)(*(_QWORD*)(v20 + 312) + v48);
              *((_BYTE*)v46 + 2) = *(_BYTE*)(*(_QWORD*)(v20 + 296) + v48);
              *((_BYTE*)v46 + 3) = v33;
            }
          }
        LABEL_34:;
        }
        v23[42] = -1;
        v49 = *(__int16*)(v20 + 232);
        if ((v49 & 0x80000000) == 0) {
          *((_BYTE*)v23 + 84) = (unsigned __int16)v49 / 0x64u;
          *((_BYTE*)v23 + 85) =
              *(_WORD*)(v20 + 232) -
              100 * (((unsigned int)(5243 * *(__int16*)(v20 + 232)) >> 19) +
                     (5243 * *(__int16*)(v20 + 232) < 0));
        }
        if (*(_WORD*)(v20 + 88) == 0) {
          goto LABEL_111;
        }
        v50 = (_QWORD*)fw_memory_HeapManager_Allocate(*v16, 160, 16, 0);
        *v50 = 0;
        v50[1] = 0;
        v50[2] = 0;
        v50[3] = 0;
        v50[4] = 0;
        v50[5] = 0;
        v50[6] = 0;
        v50[7] = 0;
        v50[8] = 0;
        v50[9] = 0;
        v50[10] = 0;
        v50[11] = 0;
        v50[12] = 0;
        v50[13] = 0;
        v50[14] = 0;
        v50[15] = 0;
        v50[16] = 0;
        v50[17] = 0;
        v50[18] = 0;
        v50[19] = 0;
        v51 = *((_QWORD*)v23 + 11);
        *((_QWORD*)v23 + 11) = v50;
        if (v51 != 0) {
          v52 = 128;
          if (*(_QWORD*)(*v16 + 200LL) == 0) {
            v52 = 56;
          }
          nn_mem_StandardAllocator_Free(*v16 + v52);
          v50 = *((_QWORD**)v23 + 11);
        }
        v53 = *(_QWORD*)(v20 + 72);
        *v50 = v53;
        v50[1] = v53;
        v50[2] = v53;
        v50[3] = v53;
        v50[4] = v53;
        v50[5] = v53;
        v50[6] = v53;
        v50[7] = v53;
        v50[8] = v53;
        v50[9] = v53;
        v54 = *(unsigned __int16*)(v20 + 88);
        if (*(_WORD*)(v20 + 88) != 0) {
          v55 = *(unsigned __int16*)(v20 + 104);
          if (*(_WORD*)(v20 + 104) != 0) {
            if (v55 == 1) {
              if (v54 < 8) {
                v56 = 0;
                v57 = v54 & 7;
                if (v57 == 0) {
                  goto LABEL_92;
                }
                do {
                LABEL_86:
                  --v57;
                  v61 = *(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v56++);
                  v50[v61] = **(_QWORD**)(v20 + 112);
                } while (v57 != 0);
                goto LABEL_92;
              }
              v59 = 7;
              do {
                v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v59 - 7)] =
                    **(_QWORD**)(v20 + 112);
                v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v59 - 6)] =
                    **(_QWORD**)(v20 + 112);
                v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v59 - 5)] =
                    **(_QWORD**)(v20 + 112);
                v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v59 - 4)] =
                    **(_QWORD**)(v20 + 112);
                v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v59 - 3)] =
                    **(_QWORD**)(v20 + 112);
                v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v59 - 2)] =
                    **(_QWORD**)(v20 + 112);
                v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v59 - 1)] =
                    **(_QWORD**)(v20 + 112);
                v60 = *(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v59);
                v59 += 8;
                v50[v60] = **(_QWORD**)(v20 + 112);
              } while (v59 - ((unsigned __int16)v54 & 0xFFF8) != 7);
              v56 = v59 - 7;
              v57 = v54 & 7;
              if (v57 != 0) {
                goto LABEL_86;
              }
            }
            else {
              if (v55 >= v54) {
                LOWORD(v55) = *(_WORD*)(v20 + 88);
              }
              if ((unsigned __int16)(v55 - 1) >= 7u) {
                v58 = 0;
                do {
                  v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v58)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 112) + 8 * v58);
                  v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v58 + 1)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 112) + 8 * v58 + 8);
                  v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v58 + 2)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 112) + 8 * v58 + 16);
                  v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v58 + 3)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 112) + 8 * v58 + 24);
                  v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v58 + 4)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 112) + 8 * v58 + 32);
                  v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v58 + 5)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 112) + 8 * v58 + 40);
                  v50[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v58 + 6)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 112) + 8 * v58 + 48);
                  v62 = *(_QWORD*)(v20 + 96) + v58;
                  v63 = *(_QWORD*)(v20 + 112) + 8 * v58;
                  v58 += 8;
                  v50[*(unsigned __int8*)(v62 + 7)] = *(_QWORD*)(v63 + 56);
                } while ((v55 & 0xFFF8) != v58);
              }
              else {
                v58 = 0;
              }
              for (j = v55 & 7; j != 0; v50[v65] = v66) {
                --j;
                v65 = *(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v58);
                v66 = *(_QWORD*)(*(_QWORD*)(v20 + 112) + 8 * v58++);
              }
            }
          }
        }
      LABEL_92:
        v67 = *((_QWORD*)v23 + 11);
        v68 = *(_QWORD*)(v20 + 80);
        *(_QWORD*)(v67 + 80) = v68;
        *(_QWORD*)(v67 + 88) = v68;
        v69 = (_QWORD*)(v67 + 80);
        v69[2] = v68;
        v69[3] = v68;
        v69[4] = v68;
        v69[5] = v68;
        v69[6] = v68;
        v69[7] = v68;
        v69[8] = v68;
        v69[9] = v68;
        v70 = *(unsigned __int16*)(v20 + 88);
        if (*(_WORD*)(v20 + 88) != 0) {
          v71 = *(unsigned __int16*)(v20 + 120);
          if (*(_WORD*)(v20 + 120) != 0) {
            if (v71 != 1) {
              if (v71 >= v70) {
                LOWORD(v71) = *(_WORD*)(v20 + 88);
              }
              if ((unsigned __int16)(v71 - 1) >= 7u) {
                v74 = 0;
                do {
                  v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v74)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 128) + 8 * v74);
                  v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v74 + 1)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 128) + 8 * v74 + 8);
                  v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v74 + 2)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 128) + 8 * v74 + 16);
                  v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v74 + 3)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 128) + 8 * v74 + 24);
                  v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v74 + 4)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 128) + 8 * v74 + 32);
                  v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v74 + 5)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 128) + 8 * v74 + 40);
                  v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v74 + 6)] =
                      *(_QWORD*)(*(_QWORD*)(v20 + 128) + 8 * v74 + 48);
                  v78 = *(_QWORD*)(v20 + 96) + v74;
                  v79 = *(_QWORD*)(v20 + 128) + 8 * v74;
                  v74 += 8;
                  v69[*(unsigned __int8*)(v78 + 7)] = *(_QWORD*)(v79 + 56);
                } while ((v71 & 0xFFF8) != v74);
              }
              else {
                v74 = 0;
              }
              for (k = v71 & 7; k != 0; v69[v81] = v82) {
                --k;
                v81 = *(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v74);
                v82 = *(_QWORD*)(*(_QWORD*)(v20 + 128) + 8 * v74++);
              }
              goto LABEL_111;
            }
            if (v70 < 8) {
              v72 = 0;
              v73 = v70 & 7;
              if (v73 == 0) {
                goto LABEL_111;
              }
              do {
              LABEL_105:
                --v73;
                v77 = *(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v72++);
                v69[v77] = **(_QWORD**)(v20 + 128);
              } while (v73 != 0);
              goto LABEL_111;
            }
            v75 = 7;
            do {
              v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v75 - 7)] =
                  **(_QWORD**)(v20 + 128);
              v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v75 - 6)] =
                  **(_QWORD**)(v20 + 128);
              v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v75 - 5)] =
                  **(_QWORD**)(v20 + 128);
              v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v75 - 4)] =
                  **(_QWORD**)(v20 + 128);
              v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v75 - 3)] =
                  **(_QWORD**)(v20 + 128);
              v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v75 - 2)] =
                  **(_QWORD**)(v20 + 128);
              v69[*(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v75 - 1)] =
                  **(_QWORD**)(v20 + 128);
              v76 = *(unsigned __int8*)(*(_QWORD*)(v20 + 96) + v75);
              v75 += 8;
              v69[v76] = **(_QWORD**)(v20 + 128);
            } while (v75 - ((unsigned __int16)v70 & 0xFFF8) != 7);
            v72 = v75 - 7;
            v73 = v70 & 7;
            if (v73 != 0) {
              goto LABEL_105;
            }
          }
        }
      LABEL_111:
        v14 = GameData_21c97c8;
        v15 = GameData_21c97d0;
        v17 = GameData_21c97e0;
        v83 = GameData_21c97e8;
        if (GameData_21c97d0 == GameData_21c97c8) {
          v84 = 0;
        }
        else {
          v84 = ((GameData_21c97d0 - GameData_21c97c8) << 6) - 1;
        }
        v18 = --GameData_21c97e8;
        if ((unsigned __int64)(v84 - (v83 + GameData_21c97e0) + 1) >= 0x400) {
          if (*(_QWORD*)(GameData_21c97d0 - 8) != 0) {
            v85 = 128;
            if (*(_QWORD*)(*v16 + 200LL) == 0) {
              v85 = 56;
            }
            nn_mem_StandardAllocator_Free(*v16 + v85);
            v14 = GameData_21c97c8;
            v15 = GameData_21c97d0;
            v17 = GameData_21c97e0;
            v18 = GameData_21c97e8;
          }
          v15 -= 8;
          GameData_21c97d0 = v15;
        }
        ++v12;
      } while (v12 != v13);
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2);
    v86 = GameData_21c9770;
    v87 = GameData_21c9770 - GameData_21c9768;
    v37 = GameData_21c9770 == GameData_21c9768;
    *(_BYTE*)(v2 + 248) = 1;
    v88 = GameData_21c9788;
    v89 = (v87 << 6) - 1;
    if (v37) {
      v89 = 0;
    }
    --GameData_21c9788;
    if ((unsigned __int64)(v89 - (v88 + GameData_21c9780) + 1) >= 0x400) {
      if (*(_QWORD*)(v86 - 8) != 0) {
        v90 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v90 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v90);
        v86 = GameData_21c9770;
      }
      GameData_21c9770 = v86 - 8;
    }
    v91 = GameData_21c97a0;
    v92 = GameData_21c97b8;
    v93 = ((GameData_21c97a0 - GameData_21c9798) << 6) - 1;
    if (GameData_21c97a0 == GameData_21c9798) {
      v93 = 0;
    }
    --GameData_21c97b8;
    if ((unsigned __int64)(v93 - (v92 + GameData_21c97b0) + 1) >= 0x400) {
      if (*(_QWORD*)(GameData_21c97a0 - 8) != 0) {
        v94 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v94 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v94);
        v91 = GameData_21c97a0;
      }
      GameData_21c97a0 = v91 - 8;
    }
  }
  return result;
}

#pragma GCC visibility pop
