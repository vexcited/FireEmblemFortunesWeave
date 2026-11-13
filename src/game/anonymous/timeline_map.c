#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_895f00(_QWORD*, unsigned __int8*);
__int64* GameRoutine_8960a0(__int64* result, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) String_60a1d0();
_QWORD* game_anonymous_TimelineMap_Build_closure_Invoke(_QWORD* result,
                                                        __int64* a2);

_QWORD* game_anonymous_TimelineMap_Build_closure_Invoke(_QWORD* result,
                                                        __int64* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64* v6;
  unsigned __int64* v7;
  float* v8;
  __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  _QWORD* v27;
  float v28;
  float v29;
  float v30;
  _BOOL8 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  _QWORD* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  _QWORD* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  _BYTE* v55;
  _QWORD* v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  char* v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  char* v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  char* v70;
  __int64 v71;
  char v72;
  char* v73;
  char* v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  __int64** v80;
  __int64* v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  unsigned __int64 v84;
  __int64* v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  _QWORD* v93;
  char* v94;
  float v95;
  float v96;
  float v97;
  _BOOL8 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64 v104;
  _QWORD* v105;
  __int64 v106;
  unsigned __int64 v107;
  _QWORD* v108;
  char* v109;
  struct {
    __int64 v110;
    unsigned __int64 v111;
    char* v112;
  } v110_;

  v4 = *a2;
  v108 = result;
  v5 = *(_QWORD*)(*a2 + 24);
  v6 = *(unsigned __int64**)(v5 + 48);
  v7 = *(unsigned __int64**)(v5 + 56);
  if (v6 == v7) {
    goto LABEL_125;
  }
  v8 = (float*)result[1];
  v9 = *((_QWORD*)v8 + 3);
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (unsigned __int64)(v8 + 4);
  do {
    v11 = *((_QWORD*)v8 + 1);
    v12 = *v6;
    if (v11 != 0 && v9 != 0) {
      v16 = v11 - 1;
      if ((v11 & (v11 - 1)) != 0) {
        v17 = *v6;
        if (v12 >= v11) {
          v17 = v12 % v11;
        }
      }
      else {
        v17 = v16 & v12;
      }
      v18 =
          ((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL) +
          (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) &
           0x3333333333333333LL);
      v15 =
          (0x101010101010101LL * ((v18 + (v18 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
          56;
      v19 = *(_QWORD**)(*(_QWORD*)v8 + 8 * v17);
      if (v19 != nullptr) {
        v20 = (_QWORD*)*v19;
        if (v20 != nullptr) {
          if ((v11 & v16) == 0) {
            while (1) {
              v22 = v20[1];
              if (v22 == v12) {
                if (v20[2] == v12) {
                  goto LABEL_5;
                }
              }
              else if ((v22 & v16) != v17) {
                goto LABEL_11;
              }
              v20 = (_QWORD*)*v20;
              if (v20 == nullptr) {
                goto LABEL_11;
              }
            }
          }
          while (1) {
            v21 = v20[1];
            if (v21 == v12) {
              if (v20[2] == v12) {
                goto LABEL_5;
              }
            }
            else {
              if (v21 >= v11) {
                v21 %= v11;
              }
              if (v21 != v17) {
                goto LABEL_11;
              }
            }
            v20 = (_QWORD*)*v20;
            if (v20 == nullptr) {
              goto LABEL_11;
            }
          }
        }
      }
      goto LABEL_28;
    }
  LABEL_11:
    if (v11 != 0) {
      v14 =
          ((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL) +
          (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) &
           0x3333333333333333LL);
      v15 =
          (0x101010101010101LL * ((v14 + (v14 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
          56;
    LABEL_28:
      if (v15 > 1) {
        v2 = *v6;
        if (v12 >= v11) {
          v2 = v12 % v11;
        }
      }
      else {
        v2 = (v11 - 1) & v12;
      }
      v23 = *(_QWORD**)(*(_QWORD*)v8 + 8 * v2);
      if (v23 != nullptr) {
        v24 = (_QWORD*)*v23;
        if (v24 != nullptr) {
          if (v15 < 2) {
            while (1) {
              v26 = v24[1];
              if (v26 == v12) {
                if (v24[2] == v12) {
                  goto LABEL_5;
                }
              }
              else if ((v26 & (v11 - 1)) != v2) {
                goto LABEL_52;
              }
              v24 = (_QWORD*)*v24;
              if (v24 == nullptr) {
                goto LABEL_52;
              }
            }
          }
          do {
            v25 = v24[1];
            if (v25 == v12) {
              if (v24[2] == v12) {
                goto LABEL_5;
              }
            }
            else {
              if (v25 >= v11) {
                v25 %= v11;
              }
              if (v25 != v2) {
                break;
              }
            }
            v24 = (_QWORD*)*v24;
          } while (v24 != nullptr);
        }
      }
    }
  LABEL_52:
    result = (_QWORD*)fw_memory_HeapManager_Allocate(*v10, 32, 16, 0);
    *result = 0;
    result[1] = v12;
    result[2] = v12;
    result[3] = v4;
    v27 = result;
    v28 = v8[8];
    v29 = (float)(unsigned __int64)(*((_QWORD*)v8 + 3) + 1LL);
    if (v11 != 0 && (float)(v28 * (float)v11) >= v29) {
      goto LABEL_118;
    }
    v30 = v29 / v28;
    v31 = (v11 & (v11 - 1)) != 0;
    if (v11 < 3) {
      v31 = true;
    }
    v32 = v31 | (2 * v11);
    v33 = vcvtps_u64_f32(v30);
    if (v32 <= v33) {
      v34 = v33;
    }
    else {
      v34 = v32;
    }
    if (v34 == 1) {
      v34 = 2;
    }
    else if ((v34 & (v34 - 1)) != 0) {
      result = (_QWORD*)std___1___next_prime(v34);
      v11 = *((_QWORD*)v8 + 1);
      v34 = (unsigned __int64)result;
    }
    if (v34 <= v11) {
      if (v34 >= v11) {
        goto LABEL_113;
      }
      result =
          (_QWORD*)vcvtps_u64_f32((float)*((unsigned __int64*)v8 + 3) / v8[8]);
      if (v11 < 3 || (v11 & (v11 - 1)) != 0) {
        result = (_QWORD*)std___1___next_prime(result);
      }
      else {
        v38 = 1LL << (-(char)__clz((unsigned __int64)result - 1) & 63);
        if ((unsigned __int64)result >= 2) {
          result = (_QWORD*)v38;
        }
      }
      if (v34 <= (unsigned __int64)result) {
        v34 = (unsigned __int64)result;
      }
      if (v34 >= v11) {
        goto LABEL_113;
      }
      if (v34 == 0) {
        v50 = *(_QWORD*)v8;
        *(_QWORD*)v8 = 0;
        if (v50 != 0) {
          v51 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v51 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*v10 + v51, v50);
        }
        *((_QWORD*)v8 + 1) = 0;
        goto LABEL_113;
      }
    }
    if (v34 >> 61 != 0) {
      GameRoutine_60a210();
    }
    result = (_QWORD*)fw_memory_HeapManager_Allocate(*v10, 8 * v34, 16, 0);
    v35 = *(_QWORD*)v8;
    *(_QWORD*)v8 = result;
    if (v35 != 0) {
      v36 = 128;
      if (*(_QWORD*)(*v10 + 200) == 0) {
        v36 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*v10 + v36, v35);
    }
    *((_QWORD*)v8 + 1) = v34;
    if (v34 >= 8) {
      v37 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)v8 + 8 * v37) = 0;
        *(_QWORD*)(*(_QWORD*)v8 + 8 * v37 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)v8 + 8 * v37 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)v8 + 8 * v37 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)v8 + 8 * v37 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)v8 + 8 * v37 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)v8 + 8 * v37 + 48) = 0;
        v39 = *(_QWORD*)v8 + 8 * v37;
        v37 += 8;
        *(_QWORD*)(v39 + 56) = 0;
      } while ((v34 & 0x1FFFFFFFFFFFFFF8LL) != v37);
    }
    else {
      v37 = 0;
    }
    v40 = v34 & 7;
    if ((v34 & 7) != 0) {
      v41 = 8 * v37;
      do {
        --v40;
        *(_QWORD*)(*(_QWORD*)v8 + v41) = 0;
        v41 += 8;
      } while (v40 != 0);
    }
    v42 = *(_QWORD**)v3;
    if (*(_QWORD*)v3 != 0) {
      v43 = v42[1];
      v44 = v34 - 1;
      if ((v34 & (v34 - 1)) != 0) {
        if (v43 >= v34) {
          v43 %= v34;
        }
        *(_QWORD*)(*(_QWORD*)v8 + 8 * v43) = v3;
        v45 = (_QWORD*)*v42;
        if (*v42 == 0) {
          goto LABEL_113;
        }
        while (1) {
          v46 = v45[1];
          if (v46 >= v34) {
            v46 %= v34;
          }
          if (v46 != v43) {
            if (*(_QWORD*)(*(_QWORD*)v8 + 8 * v46) == 0) {
              *(_QWORD*)(*(_QWORD*)v8 + 8 * v46) = v42;
              goto LABEL_90;
            }
            *v42 = *v45;
            *v45 = **(_QWORD**)(*(_QWORD*)v8 + 8 * v46);
            **(_QWORD**)(*(_QWORD*)v8 + 8 * v46) = v45;
            v45 = v42;
          }
          v46 = v43;
        LABEL_90:
          v42 = v45;
          v45 = (_QWORD*)*v45;
          v43 = v46;
          if (v45 == nullptr) {
            goto LABEL_113;
          }
        }
      }
      v47 = v43 & v44;
      *(_QWORD*)(*(_QWORD*)v8 + 8 * v47) = v3;
      while (1) {
        v48 = (_QWORD*)*v42;
        if (*v42 == 0) {
          break;
        }
        v49 = v48[1] & v44;
        if (v49 == v47) {
          v42 = (_QWORD*)*v42;
        }
        else if (*(_QWORD*)(*(_QWORD*)v8 + 8 * v49) != 0) {
          *v42 = *v48;
          *v48 = **(_QWORD**)(*(_QWORD*)v8 + 8 * v49);
          **(_QWORD**)(*(_QWORD*)v8 + 8 * v49) = v48;
        }
        else {
          *(_QWORD*)(*(_QWORD*)v8 + 8 * v49) = v42;
          v42 = v48;
          v47 = v49;
        }
      }
    }
  LABEL_113:
    v11 = *((_QWORD*)v8 + 1);
    if ((v11 & (v11 - 1)) != 0) {
      if (v12 >= v11) {
        v2 = v12 % v11;
      }
      else {
        v2 = v12;
      }
    }
    else {
      v2 = (v11 - 1) & v12;
    }
  LABEL_118:
    v52 = *(_QWORD*)v8;
    v53 = *(_QWORD**)(*(_QWORD*)v8 + 8 * v2);
    if (v53 != nullptr) {
      *v27 = *v53;
      *v53 = v27;
    }
    else {
      *v27 = *(_QWORD*)v3;
      *(_QWORD*)v3 = v27;
      *(_QWORD*)(v52 + 8 * v2) = v3;
      if (*v27 != 0) {
        v54 = *(_QWORD*)(*v27 + 8LL);
        if ((v11 & (v11 - 1)) != 0) {
          if (v54 >= v11) {
            v54 %= v11;
          }
        }
        else {
          v54 &= v11 - 1;
        }
        *(_QWORD*)(*(_QWORD*)v8 + 8 * v54) = v27;
      }
    }
    v9 = *((_QWORD*)v8 + 3) + 1LL;
    *((_QWORD*)v8 + 3) = v9;
  LABEL_5:
    ++v6;
  } while (v6 != v7);
LABEL_125:
  v55 = *(_BYTE**)(v4 + 96);
  if (v55 == nullptr || *v55 == 0) {
    return result;
  }
  v56 = (_QWORD*)v108[2];
  v57 = strlen(*(_QWORD*)(v4 + 96));
  if (v57 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_238:
    String_60a1d0();
  }
  v58 = v57;
  if (v57 >= 0x17) {
    if ((v57 | 7) == 0x17) {
      v60 = 26;
    }
    else {
      v60 = (v57 | 7) + 1;
    }
    v59 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v60,
                                                16, 0);
    v110_.v111 = v58;
    v110_.v112 = v59;
    v110_.v110 = v60 | 1;
  }
  else {
    LOBYTE(v110_.v110) = 2 * v57;
    v59 = (char*)&v110_.v110 + 1;
    if (v57 == 0) {
      goto LABEL_136;
    }
  }
  memmove(v59, v55, v58);
LABEL_136:
  v59[v58] = 0;
  result = GameRoutine_895f00(v56, (unsigned __int8*)&v110_.v110);
  if ((v110_.v110 & 1) != 0 && v110_.v112 != nullptr) {
    v61 = result;
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v62,
                                  v110_.v112);
    result = v61;
  }
  if (result != nullptr) {
    v63 = *(_QWORD*)(v4 + 24);
    v64 = *(_QWORD*)(result[5] + 24LL);
    v65 = *(_QWORD*)(v64 + 96);
    *(_DWORD*)(v63 + 104) = *(_DWORD*)(v64 + 104);
    *(_QWORD*)(v63 + 96) = v65;
    return result;
  }
  v66 = v108[2];
  if (*(_QWORD*)(v4 + 96) != 0) {
    v67 = *(char**)(v4 + 96);
  }
  else {
    v67 = &GameData_1a9f09e;
  }
  v68 = strlen(v67);
  if (v68 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_238;
  }
  v69 = v68;
  if (v68 >= 0x17) {
    if ((v68 | 7) == 0x17) {
      v71 = 26;
    }
    else {
      v71 = (v68 | 7) + 1;
    }
    v70 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v71,
                                                16, 0);
    v110_.v111 = v69;
    v110_.v112 = v70;
    v110_.v110 = v71 | 1;
  }
  else {
    LOBYTE(v110_.v110) = 2 * v68;
    v70 = (char*)&v110_.v110 + 1;
    if (v68 == 0) {
      goto LABEL_155;
    }
  }
  memmove(v70, v67, v69);
LABEL_155:
  v70[v69] = 0;
  v72 = v110_.v110;
  v73 = v110_.v112;
  if ((v110_.v110 & 1) != 0) {
    v74 = v110_.v112;
  }
  else {
    v74 = (char*)&v110_.v110 + 1;
  }
  if ((v110_.v110 & 1) != 0) {
    v75 = v110_.v111;
  }
  else {
    v75 = (unsigned __int64)(unsigned __int8)v110_.v110 >> 1;
  }
  v76 = std___1___hash_memory(v74, v75);
  v77 = *(_QWORD*)(v66 + 8);
  v78 = v76;
  if (v77 != 0) {
    v79 = v77 - 1;
    if ((v77 & (v77 - 1)) != 0) {
      v3 = v76;
      if (v76 >= v77) {
        v3 = v76 % v77;
      }
    }
    else {
      v3 = v79 & v76;
    }
    v80 = *(__int64***)(*(_QWORD*)v66 + 8 * v3);
    if (v80 != nullptr) {
      v109 = v73;
      v81 = *v80;
      if (*v80 != nullptr) {
        if ((v77 & v79) == 0) {
          while (1) {
            v86 = v81[1];
            if (v86 == v78) {
              v87 = *((unsigned __int8*)v81 + 16);
              v88 = v81[3];
              if ((v87 & 1) == 0) {
                v88 = v87 >> 1;
              }
              if (v88 == v75) {
                v89 = (v87 & 1) != 0 ? (__int64*)v81[4]
                                     : (__int64*)((char*)v81 + 17);
                result = (_QWORD*)memcmp(v89, v74, v75);
                if ((_DWORD)result == 0) {
                  goto LABEL_194;
                }
              }
            }
            else if ((v86 & v79) != v3) {
              goto LABEL_199;
            }
            v81 = (__int64*)*v81;
            if (v81 == nullptr) {
              goto LABEL_199;
            }
          }
        }
        do {
          v82 = v81[1];
          if (v82 == v78) {
            v83 = *((unsigned __int8*)v81 + 16);
            v84 = v81[3];
            if ((v83 & 1) == 0) {
              v84 = v83 >> 1;
            }
            if (v84 == v75) {
              v85 = (v83 & 1) != 0 ? (__int64*)v81[4]
                                   : (__int64*)((char*)v81 + 17);
              result = (_QWORD*)memcmp(v85, v74, v75);
              if ((_DWORD)result == 0) {
              LABEL_194:
                v81[5] = v4;
                if ((v72 & 1) != 0 && v109 != nullptr) {
                  v90 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v90 = 56;
                  }
                  return (_QWORD*)nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v90, v109);
                }
                return result;
              }
            }
          }
          else {
            if (v82 >= v77) {
              v82 %= v77;
            }
            if (v82 != v3) {
              break;
            }
          }
          v81 = (__int64*)*v81;
        } while (v81 != nullptr);
      }
    }
  }
LABEL_199:
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v91 = v110_.v110;
  v92 = v110_.v111;
  result[5] = 0;
  v93 = result;
  result[1] = v78;
  result[2] = v91;
  v94 = v110_.v112;
  result[3] = v92;
  result[4] = v94;
  v95 = *(float*)(v66 + 32);
  v96 = (float)(unsigned __int64)(*(_QWORD*)(v66 + 24) + 1LL);
  if (v77 == 0 || (float)(v95 * (float)v77) < v96) {
    v97 = v96 / v95;
    v98 = true;
    if (v77 >= 3) {
      v98 = (v77 & (v77 - 1)) != 0;
    }
    v99 = v98 | (2 * v77);
    v100 = vcvtps_u64_f32(v97);
    if (v99 <= v100) {
      v101 = v100;
    }
    else {
      v101 = v99;
    }
    if (v101 == 1) {
      v101 = 2;
    }
    else if ((v101 & (v101 - 1)) != 0) {
      result = (_QWORD*)std___1___next_prime(v101);
      v101 = (unsigned __int64)result;
    }
    v102 = *(_QWORD*)(v66 + 8);
    if (v101 > v102) {
      goto LABEL_211;
    }
    if (v101 < v102) {
      result = (_QWORD*)vcvtps_u64_f32((float)*(unsigned __int64*)(v66 + 24) /
                                       *(float*)(v66 + 32));
      if (v102 < 3 || (v102 & (v102 - 1)) != 0) {
        result = (_QWORD*)std___1___next_prime(result);
      }
      else {
        v103 = 1LL << (-(char)__clz((unsigned __int64)result - 1) & 63);
        if ((unsigned __int64)result >= 2) {
          result = (_QWORD*)v103;
        }
      }
      if (v101 <= (unsigned __int64)result) {
        v101 = (unsigned __int64)result;
      }
      if (v101 < v102) {
      LABEL_211:
        result = GameRoutine_8960a0((__int64*)v66, v101);
      }
    }
    v77 = *(_QWORD*)(v66 + 8);
    if ((v77 & (v77 - 1)) != 0) {
      if (v78 >= v77) {
        v3 = v78 % v77;
      }
      else {
        v3 = v78;
      }
    }
    else {
      v3 = (v77 - 1) & v78;
    }
  }
  v104 = *(_QWORD*)v66;
  v105 = *(_QWORD**)(*(_QWORD*)v66 + 8 * v3);
  if (v105 != nullptr) {
    *v93 = *v105;
    *v105 = v93;
  }
  else {
    v106 = *(_QWORD*)(v66 + 16);
    *v93 = v106;
    *(_QWORD*)(v66 + 16) = v93;
    *(_QWORD*)(v104 + 8 * v3) = v66 + 16;
    if (v106 != 0) {
      v107 = *(_QWORD*)(v106 + 8);
      if ((v77 & (v77 - 1)) != 0) {
        if (v107 >= v77) {
          v107 %= v77;
        }
      }
      else {
        v107 &= v77 - 1;
      }
      *(_QWORD*)(*(_QWORD*)v66 + 8 * v107) = v93;
    }
  }
  ++*(_QWORD*)(v66 + 24);
  v93[5] = v4;
  return result;
}

#pragma GCC visibility pop
