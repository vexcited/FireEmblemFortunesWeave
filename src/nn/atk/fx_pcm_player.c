#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2af380(_QWORD);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 GameData_2134cc0;
extern __int64 snd_g_proxy_ptr[2];
extern __int64* snd_g_memory_ptr[2];
__int64 FxPCMPlayer_Destructor(_QWORD* a1);
__int64 FxPCMPlayer_Unknown5(__int64 result, __int64 a2, int* a3);
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");

__int64 FxPCMPlayer_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = a1[13];
  *a1 = GameData_2134cc0 + 16;
  v3 = snd_g_memory_ptr[0];
  if (v2 != 0) {
    v4 = *snd_g_memory_ptr[0];
    a1[13] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 24LL))(v4);
  }
  if (a1[14] != 0) {
    v5 = *v3;
    a1[14] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 24LL))(v5);
  }
  if (a1[15] != 0) {
    v6 = *v3;
    a1[15] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
  }
  if (a1[16] != 0) {
    v7 = *v3;
    a1[16] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
  }
  if (a1[17] != 0) {
    v8 = *v3;
    a1[17] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
  }
  if (a1[18] != 0) {
    v9 = *v3;
    a1[18] = 0;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
  }
  nn_os_FinalizeMutex(a1 + 25);
  return GameRoutine_2af380(a1);
}

__int64 FxPCMPlayer_Unknown5(__int64 result, __int64 a2, int* a3)
{

#pragma clang fp contract(off)
  int v3;
  int v4;
  int v5;
  __int64 v6;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int i;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  float v47;
  int v48;
  __int64 v49;
  __int64 v50;
  int v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  float v58;
  int v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  float v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  float v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  __int64 v81;

  v3 = a3[4];
  v4 = a3[3] * *a3;
  v5 = v3 / v4;
  if (v3 % v4 != 0) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  if (v5 > a3[2]) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  *(_QWORD*)(result + 192) += v5 * *a3;
  if ((*(_BYTE*)(result + 165) & 1) == 0 && *(_BYTE*)(result + 164) == 1 &&
      *(_DWORD*)(result + 152) != 0) {
    v6 = result;
    nn_os_LockMutex_alt1(result + 200);
    v9 = *(_DWORD*)(v6 + 160);
    nn_os_UnlockMutex_alt1(v6 + 200);
    v10 = *(_DWORD*)(v6 + 156);
    v11 = v6;
    if (v5 < 1) {
      goto LABEL_125;
    }
    if (*a3 < 1) {
      goto LABEL_16;
    }
    v12 = 0;
    v13 = *(_DWORD*)(v6 + 156);
    do {
      v14 = *a3;
      do {
        if (v13 + 1 < (signed __int32)*(_DWORD*)(v6 + 152)) {
          ++v13;
        }
        else {
          v13 = 0;
        }
        if (v13 == v9) {
          result = (*(__int64 (**)(_QWORD, const char*))(
              **(_QWORD**)snd_g_proxy_ptr[0] + 392LL))(
              *(_QWORD*)snd_g_proxy_ptr[0],
              "#SoundLibrary : FxPCMPlayer's read buffer under flow !!\n");
          *(_BYTE*)(v6 + 164) = 0;
          v48 = a3[3];
          if (v48 >= 1) {
            LODWORD(v49) = *a3;
            v50 = v6 + 168;
            if (v5 == 1) {
              v51 = 0;
              v52 = *a3;
              v53 = *a3;
            }
            else {
              v59 = 1;
              v51 = 0;
              LODWORD(v60) = *a3;
              v52 = *a3;
              v53 = *a3;
              do {
                if (v48 >= 1) {
                  if (v52 < 1) {
                    v53 = v52;
                  }
                  else {
                    v61 = 0;
                    result = a2 + 4LL * v53 * v48 * v51;
                    do {
                      if ((int)v60 >= 1) {
                        v62 = 0;
                        v63 = result + 4LL * (int)v60 * (int)v61;
                        do {
                          v64 = *(float*)(v50 + 4 * v61) +
                                (float)(*(float*)(v50 + 4 * v61) *
                                        -0x1.0000000000000p-5f);
                          *(float*)(v50 + 4 * v61) = v64;
                          *(_DWORD*)(v63 + 4 * v62++) += (int)v64;
                          v60 = *a3;
                        } while (v62 < v60);
                        v48 = a3[3];
                      }
                      ++v61;
                      v52 = v60;
                      v53 = v60;
                    } while (v61 < v48);
                  }
                }
                if (v48 < 1) {
                  LODWORD(v49) = v60;
                }
                else if (v52 < 1) {
                  LODWORD(v49) = v60;
                  v53 = v52;
                }
                else {
                  result = 0;
                  v65 = a2 + 4LL * v53 * v48 * v59;
                  LODWORD(v49) = v60;
                  do {
                    if ((int)v49 >= 1) {
                      v66 = 0;
                      v67 = v65 + 4LL * (int)v49 * (int)result;
                      do {
                        v68 = *(float*)(v50 + 4 * result) +
                              (float)(*(float*)(v50 + 4 * result) *
                                      -0x1.0000000000000p-5f);
                        *(float*)(v50 + 4 * result) = v68;
                        *(_DWORD*)(v67 + 4 * v66++) += (int)v68;
                        v49 = *a3;
                      } while (v66 < v49);
                      v48 = a3[3];
                    }
                    ++result;
                    v52 = v49;
                    v53 = v49;
                  } while (result < v48);
                }
                v51 += 2;
                v59 += 2;
                LODWORD(v60) = v49;
              } while (v51 != (v5 & 0x7FFFFFFE));
            }
            if ((v5 & 1) != 0 && v48 >= 1 && v52 >= 1) {
              v54 = 0;
              v55 = a2 + 4LL * v53 * v51 * v48;
              do {
                if ((int)v49 >= 1) {
                  v56 = 0;
                  v57 = v55 + 4LL * (int)v49 * (int)v54;
                  do {
                    v58 = *(float*)(v50 + 4 * v54) +
                          (float)(*(float*)(v50 + 4 * v54) *
                                  -0x1.0000000000000p-5f);
                    *(float*)(v50 + 4 * v54) = v58;
                    *(_DWORD*)(v57 + 4 * v56++) += (int)v58;
                    v49 = *a3;
                  } while (v56 < v49);
                  v48 = a3[3];
                }
                ++v54;
              } while (v54 < v48);
            }
          }
          return result;
        }
        --v14;
      } while (v14 != 0);
      ++v12;
      v11 = v6;
    } while (v12 != v5);
  LABEL_16:
    v15 = a3[3];
    LODWORD(v16) = *a3;
    if (v15 >= 1) {
      for (i = 0; i != v5; ++i) {
        if (v15 >= 1 && (int)v16 >= 1) {
          v25 = 0;
          v26 = a2 + 4LL * (int)v16 * v15 * i;
          do {
            if ((int)v16 >= 1) {
              v27 = 0;
              v28 = v10;
              v29 = v26 + 4LL * (int)v16 * (int)v25;
              do {
                v30 = *(_DWORD*)(*(_QWORD*)(v11 + 104 + 8 * v25) + 4LL * v28);
                *(_DWORD*)(v29 + 4 * v27++) += v30;
                *(float*)(v11 + 168 + 4 * v25) = (float)v30;
                v16 = *a3;
                if (v28 + 1 < (signed __int32)*(_DWORD*)(v11 + 152)) {
                  ++v28;
                }
                else {
                  v28 = 0;
                }
              } while (v27 < v16);
              v15 = a3[3];
            }
            ++v25;
          } while (v25 < v15);
        }
        v24 = *(_DWORD*)(v11 + 152);
        if ((int)v16 + v10 < v24) {
          v24 = 0;
        }
        v10 = v16 + v10 - v24;
      }
      goto LABEL_125;
    }
    v69 = *(_DWORD*)(v11 + 152);
    v70 = v5 & 7;
    if ((unsigned int)v5 >= 8) {
      v71 = v5 & 0x7FFFFFF8;
      while (1) {
        v72 = v16 + v10;
        if ((int)v16 + v10 >= v69) {
          v73 = v16 + v72 - v69;
          if (v73 < v69) {
            goto LABEL_113;
          }
        LABEL_105:
          v74 = v16 + v73 - v69;
          if (v74 >= v69) {
            goto LABEL_106;
          }
        LABEL_114:
          v75 = v16 + v74;
          if (v75 < v69) {
            goto LABEL_115;
          }
        LABEL_107:
          v76 = v16 + v75 - v69;
          if (v76 >= v69) {
            goto LABEL_108;
          }
        LABEL_116:
          v77 = v16 + v76;
          if (v77 < v69) {
            goto LABEL_117;
          }
        LABEL_109:
          v78 = v16 + v77 - v69;
          if (v78 >= v69) {
            goto LABEL_110;
          }
        LABEL_118:
          v79 = v16 + v78;
          if (v79 >= v69) {
            goto LABEL_102;
          }
        LABEL_119:
          v10 = v79;
          v71 -= 8;
          if (v71 == 0) {
            break;
          }
        }
        else {
          v73 = v16 + v72;
          if (v73 >= v69) {
            goto LABEL_105;
          }
        LABEL_113:
          v74 = v16 + v73;
          if (v74 < v69) {
            goto LABEL_114;
          }
        LABEL_106:
          v75 = v16 + v74 - v69;
          if (v75 >= v69) {
            goto LABEL_107;
          }
        LABEL_115:
          v76 = v16 + v75;
          if (v76 < v69) {
            goto LABEL_116;
          }
        LABEL_108:
          v77 = v16 + v76 - v69;
          if (v77 >= v69) {
            goto LABEL_109;
          }
        LABEL_117:
          v78 = v16 + v77;
          if (v78 < v69) {
            goto LABEL_118;
          }
        LABEL_110:
          v79 = v16 + v78 - v69;
          if (v79 < v69) {
            goto LABEL_119;
          }
        LABEL_102:
          v10 = v79 - v69;
          v71 -= 8;
          if (v71 == 0) {
            break;
          }
        }
      }
    }
    if ((v5 & 7) != 0) {
      do {
        if ((int)v16 + v10 >= v69) {
          v80 = *(_DWORD*)(v11 + 152);
        }
        else {
          v80 = 0;
        }
        --v70;
        v10 = v16 + v10 - v80;
      } while (v70 != 0);
    }
  LABEL_125:
    v81 = v11;
    nn_os_LockMutex_alt1(v11 + 200);
    *(_DWORD*)(v81 + 156) = v10;
    return nn_os_UnlockMutex_alt1(v81 + 200);
  }
  else if (v5 >= 1) {
    v18 = a3[3];
    if (v18 >= 1) {
      LODWORD(v19) = *a3;
      v20 = result + 168;
      if (v5 == 1) {
        v21 = 0;
        v22 = *a3;
        v23 = *a3;
      }
      else {
        v31 = 1;
        v21 = 0;
        LODWORD(v32) = *a3;
        v22 = *a3;
        v23 = *a3;
        do {
          if (v18 >= 1) {
            if (v22 < 1) {
              v23 = v22;
            }
            else {
              v33 = 0;
              v34 = a2 + 4LL * v23 * v18 * v21;
              do {
                if ((int)v32 >= 1) {
                  v35 = 0;
                  v36 = v34 + 4LL * (int)v32 * (int)v33;
                  do {
                    v37 = *(float*)(v20 + 4 * v33) +
                          (float)(*(float*)(v20 + 4 * v33) *
                                  -0x1.0000000000000p-5f);
                    *(float*)(v20 + 4 * v33) = v37;
                    *(_DWORD*)(v36 + 4 * v35++) += (int)v37;
                    v32 = *a3;
                  } while (v35 < v32);
                  v18 = a3[3];
                }
                ++v33;
                v22 = v32;
                v23 = v32;
              } while (v33 < v18);
            }
          }
          if (v18 < 1) {
            LODWORD(v19) = v32;
          }
          else if (v22 < 1) {
            LODWORD(v19) = v32;
            v23 = v22;
          }
          else {
            v38 = 0;
            v39 = a2 + 4LL * v23 * v18 * v31;
            LODWORD(v19) = v32;
            do {
              if ((int)v19 >= 1) {
                v40 = 0;
                v41 = v39 + 4LL * (int)v19 * (int)v38;
                do {
                  v42 = *(float*)(v20 + 4 * v38) +
                        (float)(*(float*)(v20 + 4 * v38) *
                                -0x1.0000000000000p-5f);
                  *(float*)(v20 + 4 * v38) = v42;
                  *(_DWORD*)(v41 + 4 * v40++) += (int)v42;
                  v19 = *a3;
                } while (v40 < v19);
                v18 = a3[3];
              }
              ++v38;
              v22 = v19;
              v23 = v19;
            } while (v38 < v18);
          }
          v21 += 2;
          v31 += 2;
          LODWORD(v32) = v19;
        } while (v21 != (v5 & 0x7FFFFFFE));
      }
      if ((v5 & 1) != 0 && v18 >= 1 && v22 >= 1) {
        v43 = 0;
        v44 = a2 + 4LL * v23 * v21 * v18;
        do {
          if ((int)v19 >= 1) {
            v45 = 0;
            v46 = v44 + 4LL * (int)v19 * (int)v43;
            do {
              v47 = *(float*)(v20 + 4 * v43) +
                    (float)(*(float*)(v20 + 4 * v43) * -0x1.0000000000000p-5f);
              *(float*)(v20 + 4 * v43) = v47;
              *(_DWORD*)(v46 + 4 * v45++) += (int)v47;
              v19 = *a3;
            } while (v45 < v19);
            v18 = a3[3];
          }
          ++v43;
        } while (v43 < v18);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
