#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void __nnmusl_fd_get(PSEUDO_X8, unsigned int);
__int64 __errno_location_plt(_QWORD, _QWORD);
__int64 __nnmusl_fd_context(__int64);
__int64 __nnmusl_fd_extra(__int64);
unsigned __int128 __nnmusl_fd_extra_pair(__int64) __asm__("__nnmusl_fd_extra");
__int64 __nnmusl_fd_kind(_WORD**);
__int64 __nnmusl_fd_lookup(unsigned int);
__int64 __nnmusl_slot_release(unsigned int**);
__int64 __nnmusl_utf8_sequence_length(_QWORD);
__int64 __nnmusl_validate_path(__int64, unsigned __int64, __int64);
__int64 __stdio_seek(void);
__int64 __stdio_write(_QWORD, _QWORD, _QWORD);
__int64 isatty_plt(_QWORD);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_os_SdkRecursiveMutexType_Lock_plt(void* this_);
__int64 nn_socket_GetNameInfo_plt_859960(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                         _QWORD);
__int64 nn_socket_Read_plt(void);
__int64 nn_socket_Write_plt(void);
extern _QWORD SdkData_eaa120;
extern _UNKNOWN SdkData_cad77e;
extern _UNKNOWN SdkData_eaa110;
extern _UNKNOWN SdkData_eaa128;
extern __int64 SdkData_eaa118;
extern char SdkData_eaa126;
__int64 nnmusl_b02a0(unsigned __int8* a1);
__int64 nnmusl_b0dc0(char* a1, __int64 a2, unsigned __int8* a3, unsigned int a4,
                     __int64 a5);
__int64 nnmusl_b1220(unsigned __int64* a1, _BYTE* a2, unsigned __int64 a3,
                     unsigned __int8* a4, unsigned int a5);
__int64 getnameinfo_0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                      __int64 a5, unsigned int a6);
__int64 nnmusl_b59a0();
__int64 nnmusl_b59c0();
unsigned __int64 __sched_cpucount(unsigned __int64 result, __int64 a2);
__int64 nnmusl_7789b0(__int64 a1);
__int64 nnmusl_7789c0(__int64 a1, __int64 a2, __int64 a3);
void nnmusl_77ad60(__int64 a1, __int64 a2, _DWORD* a3, _QWORD* a4, _QWORD* a5,
                   _QWORD* a6);

__int64 nnmusl_b02a0(unsigned __int8* a1)
{
  unsigned int v1;
  int v2;
  int v3;
  _BYTE* v4;
  int v5;
  _BYTE* v6;
  unsigned __int8* v7;
  unsigned __int64 v8;
  int v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  int i;
  unsigned __int8* v14;
  int v15;
  int v16;
  unsigned __int8* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  _BYTE* v22;
  int v23;
  unsigned int v24;
  unsigned __int8* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  unsigned __int64 v31;
  int v32;
  unsigned int v33;
  unsigned __int8* v34;
  __int64 v35;
  __int64 v36;
  bool v37;
  int v38;
  unsigned int v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v45;
  int v46;
  int v47;
  unsigned __int8* v48;
  unsigned __int64 v49;
  char v50;
  int v51;
  unsigned int v52;
  unsigned __int8* v53;
  __int64 v54;
  __int64 v55;
  signed __int64 v56;
  int v57;
  int v58;

  v1 = *a1;
  if (v1 == 47 || v1 == 92) {
    v2 = a1[1];
    if (v2 != 47 && v2 != 92) {
    LABEL_18:
      LOWORD(v6) = 0;
      v5 = 0;
      v8 = 0;
      v7 = a1;
      goto LABEL_104;
    }
    v4 = a1 + 2;
    v3 = a1[2];
    v5 = 0;
    LOWORD(v6) = 0;
    v7 = a1;
    v8 = 0;
    if (v3 == 47 || v3 == 92) {
      goto LABEL_104;
    }
    if (v1 != v2) {
      return 0;
    }
    v9 = 0;
    if (a1[2] == 0) {
      v8 = 3;
      v11 = a1 + 2;
      v20 = 0;
      goto LABEL_45;
    }
    v10 = 2;
    v11 = a1 + 2;
    while (1) {
      while (1) {
        v12 = 0;
        if (v3 > 57) {
          if (v3 == 58) {
            return v12;
          }
          if (v3 == 92) {
            goto LABEL_37;
          }
        }
        else {
          if (v3 == 36) {
            return v12;
          }
          if (v3 == 47) {
            goto LABEL_37;
          }
        }
        if ((v3 & 0x80) == 0) {
          break;
        }
        v17 = a1;
        v18 = __nnmusl_utf8_sequence_length(v11);
        if (v18 == 0) {
          return 0;
        }
        v37 = v18 == 4;
        v11 += v18;
        a1 = v17;
        if (v37) {
          v19 = 2;
        }
        else {
          v19 = 1;
        }
        v10 += v19;
        v3 = *v11;
        if (*v11 == 0) {
        LABEL_37:
          v8 = v10 + 1;
          v20 = v11 - v4;
          if (v11 - v4 == 2) {
            if (*v4 == 46 && a1[3] == 46) {
              return 0;
            }
          LABEL_48:
            if (v3 != 92 && v3 != 47) {
              return 0;
            }
            v22 = v11 + 1;
            v1 = v11[1];
            v12 = 0;
            if (v1 == 47 || v1 == 92 || v11[1] == 0) {
              return v12;
            }
            v7 = v11 + 1;
            while (1) {
            LABEL_54:
              if (v1 == 47 || v1 == 92) {
              LABEL_70:
                if (v7 - v22 != 2) {
                  if (v7 - v22 == 1) {
                    v28 = (unsigned __int8)*v22;
                    goto LABEL_101;
                  }
                }
                else if (*v22 == 46) {
                  v28 = v11[2];
                LABEL_101:
                  if (v28 == 46) {
                    return 0;
                  }
                }
                LOWORD(v6) = (_WORD)v7 - (_WORD)a1;
                v5 = v9 | 0xA;
                goto LABEL_104;
              }
              if (v1 == 58) {
                return 0;
              }
              if ((v1 & 0x80) == 0) {
                break;
              }
              v25 = a1;
              v26 = __nnmusl_utf8_sequence_length(v7);
              if (v26 == 0) {
                return 0;
              }
              v37 = v26 == 4;
              v7 += v26;
              a1 = v25;
              if (v37) {
                v27 = 2;
              }
              else {
                v27 = 1;
              }
              v8 += v27;
              v1 = *v7;
              if (*v7 == 0) {
                goto LABEL_70;
              }
            }
            if (v1 < 0x20) {
              v23 = 32;
              goto LABEL_62;
            }
            if (v1 == 34) {
              v23 = 64;
            LABEL_62:
              v9 |= v23;
            }
            ++v8;
            v24 = *++v7;
            v1 = v24;
            if (v24 == 0) {
              goto LABEL_70;
            }
            goto LABEL_54;
          }
        LABEL_45:
          if (v20 == 1) {
            v21 = (unsigned __int8)*v4;
            v12 = 0;
            if (v21 == 63 || v21 == 46) {
              return v12;
            }
          }
          goto LABEL_48;
        }
      }
      if ((unsigned int)v3 < 0x20) {
        v15 = 32;
      }
      else {
        if (v3 != 34) {
          goto LABEL_21;
        }
        v15 = 64;
      }
      v9 |= v15;
    LABEL_21:
      ++v10;
      v16 = *++v11;
      v3 = v16;
      if (v16 == 0) {
        goto LABEL_37;
      }
    }
  }
  v12 = 0;
  for (i = *a1; i <= 57; i = v14[1]) {
    if (i == 0 || i == 47) {
      goto LABEL_18;
    }
  LABEL_11:
    v14 = &a1[v12++];
  }
  if (i != 58) {
    if (i == 92) {
      goto LABEL_18;
    }
    goto LABEL_11;
  }
  if (v12 == 1) {
    if ((v1 & 0xFFFFFFDF) - 65 >= 0x1A) {
      return 0;
    }
    v29 = 1;
    v30 = 8;
  }
  else {
    if (v12 == 0) {
      return v12;
    }
    if (v1 == 64) {
      return 0;
    }
    v30 = 0;
    v29 = 0;
  }
  v31 = 0;
  v7 = a1;
  while (2) {
    while (((char)*v7 & 0x80000000) == 0) {
      v33 = *v7;
      if (v33 < 0x20) {
        v32 = 32;
      }
      else {
        if (v33 != 34) {
          goto LABEL_80;
        }
        v32 = 64;
      }
      v30 |= v32;
    LABEL_80:
      ++v31;
      LOWORD(v6) = (_WORD)++v7 - (_WORD)a1;
      if (v7 - a1 > v12) {
        goto LABEL_90;
      }
    }
    v34 = a1;
    v35 = __nnmusl_utf8_sequence_length(v7);
    if (v35 == 0) {
      return 0;
    }
    v37 = v35 == 4;
    v7 += v35;
    a1 = v34;
    if (v37) {
      v36 = 2;
    }
    else {
      v36 = 1;
    }
    v31 += v36;
    v6 = (_BYTE*)(v7 - v34);
    if ((unsigned __int64)v6 <= v12) {
      continue;
    }
    break;
  }
LABEL_90:
  v1 = *v7;
  v37 = v1 == 92 || v1 == 47;
  v38 = v30 | 2;
  if (!v37) {
    v38 = v30;
  }
  if (v29 != 0) {
    v8 = v31;
  }
  else {
    v8 = 0;
  }
  v5 = v38 | 4;
LABEL_104:
  while (v1 == 47 || v1 == 92) {
    v39 = *++v7;
    v1 = v39;
    ++v8;
  }
  if (v1 == 0) {
    v40 = 0;
    goto LABEL_108;
  }
  v40 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  while (2) {
    v48 = v7;
    v49 = v8;
  LABEL_120:
    do {
      v50 = v1 - 42;
      v12 = 0;
      if (v1 - 42 <= 0x32) {
        if (((1LL << v50) & 0x350001) != 0) {
          return v12;
        }
        if (((1LL << v50) & 0x4000000000020LL) != 0) {
          break;
        }
      }
      if (v1 == 124) {
        return v12;
      }
      if ((v1 & 0x80) == 0) {
        if (v1 < 0x20) {
          v51 = 32;
          goto LABEL_129;
        }
        if (v1 == 34) {
          v51 = 64;
        LABEL_129:
          v5 |= v51;
        }
        ++v8;
        v52 = *++v7;
        v1 = v52;
        if (v52 == 0) {
          break;
        }
        goto LABEL_120;
      }
      v57 = v46;
      v58 = v47;
      v53 = a1;
      v54 = __nnmusl_utf8_sequence_length(v7);
      if (v54 == 0) {
        return 0;
      }
      v47 = v58;
      v46 = v57;
      v37 = v54 == 4;
      v7 += v54;
      a1 = v53;
      if (v37) {
        v55 = 2;
      }
      else {
        v55 = 1;
      }
      v8 += v55;
      v1 = *v7;
    } while (*v7 != 0);
    v56 = v7 - v48;
    if (v40 <= v7 - v48) {
      v40 = v7 - v48;
    }
    if (v45 <= v8 - v49) {
      v45 = v8 - v49;
    }
    if (v56 != 2) {
      if (v56 == 1) {
        if (*v48 != 46) {
          ++v46;
        }
        goto LABEL_156;
      }
    LABEL_151:
      ++v46;
      goto LABEL_156;
    }
    if (*v48 != 46 || v48[1] != 46) {
      goto LABEL_151;
    }
    if ((v5 & 2) != 0) {
      if (v46 != 0) {
        --v46;
      }
      else {
        v5 |= 0x10u;
      }
    }
    else if (v47 >= --v46) {
      v47 = v46;
    }
  LABEL_156:
    while (1) {
      v1 = *v7;
      if (v1 != 47 && v1 != 92) {
        break;
      }
      ++v8;
      ++v7;
    }
    if (*v7 != 0) {
      continue;
    }
    break;
  }
LABEL_108:
  v41 = v7 - a1;
  if ((unsigned __int64)(v7 - a1) >= 0xFFFF) {
    v41 = 0xFFFF;
  }
  if (v8 >= 0xFFFF) {
    v42 = 0xFFFF;
  }
  else {
    v42 = v8;
  }
  if (v40 >= 0xFFFF) {
    v43 = 0xFFFF;
  }
  else {
    v43 = v40;
  }
  return (v42 << 32) | (v43 << 48) | (v41 << 16) | (unsigned __int16)v6;
}

__int64 nnmusl_b0dc0(char* a1, __int64 a2, unsigned __int8* a3, unsigned int a4,
                     __int64 a5)
{
  char v5;
  __int64 v6;
  int v11;
  __int64 result;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  _BOOL4 v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  __int64 v20;
  char* v21;
  unsigned __int8* v22;
  __int64 v23;
  __int64 v24;
  unsigned __int8* v25;
  char* v26;
  char v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  __int64 v37;
  int v38;
  unsigned __int8* v39;
  unsigned __int8* v40;
  int v41;
  unsigned __int64 v42;
  int v43;
  int v44;
  _BYTE* v45;
  int v46;
  unsigned __int8* i;
  int v48;
  unsigned int v49;

  if ((a5 & 0x1000000000000LL) == 0) {
    return 1063;
  }
  v5 = BYTE6(a5);
  v6 = a5;
  if ((a5 & 0x2000000000000LL) != 0) {
    v23 = (unsigned __int16)a4;
    if ((a5 & 0x4000000000000LL) != 0) {
      if ((unsigned __int16)a4 > (unsigned __int64)(a2 - 1)) {
        return 5671;
      }
      memcpy_plt(a1, a3, (unsigned __int16)a4);
    }
    else {
      if ((unsigned __int16)a4 > (unsigned __int64)(a2 - 1)) {
        return 5671;
      }
      if ((_WORD)a4 != 0) {
        v24 = a4 & 7;
        v25 = a3;
        v26 = a1;
        if ((a4 & 7) != 0) {
          v25 = a3;
          v26 = a1;
          do {
            v28 = *v25++;
            v27 = v28;
            if (v28 == 92) {
              v27 = 47;
            }
            --v24;
            *v26++ = v27;
          } while (v24 != 0);
        }
        if ((unsigned __int16)a4 >= 8uLL) {
          do {
            v29 = *v25;
            if (v29 == 92) {
              LOBYTE(v29) = 47;
            }
            *v26 = v29;
            v30 = v25[1];
            if (v30 == 92) {
              LOBYTE(v30) = 47;
            }
            v26[1] = v30;
            v31 = v25[2];
            if (v31 == 92) {
              LOBYTE(v31) = 47;
            }
            v26[2] = v31;
            v32 = v25[3];
            if (v32 == 92) {
              LOBYTE(v32) = 47;
            }
            v26[3] = v32;
            v33 = v25[4];
            if (v33 == 92) {
              LOBYTE(v33) = 47;
            }
            v26[4] = v33;
            v34 = v25[5];
            if (v34 == 92) {
              LOBYTE(v34) = 47;
            }
            v26[5] = v34;
            v35 = v25[6];
            if (v35 == 92) {
              LOBYTE(v35) = 47;
            }
            v26[6] = v35;
            v36 = v25[7];
            v25 += 8;
            if (v36 == 92) {
              LOBYTE(v36) = 47;
            }
            v26[7] = v36;
            v26 += 8;
          } while (v25 != &a3[(unsigned __int16)a4]);
        }
      }
    }
    v16 = (v5 & 4) != 0;
    v17 = (unsigned __int8*)&a1[v23];
    v19 = &a3[v23];
    v18 = (unsigned __int8*)&a1[v23];
    v37 = HIWORD(a4);
    v21 = &a1[a2];
    v22 = &a3[v37];
    if (&a3[v23] != &a3[v37]) {
      goto LABEL_47;
    }
  LABEL_49:
    v39 = (unsigned __int8*)(v21 - 1);
    if (v19 == v22) {
    LABEL_90:
      if (v17 != v18 || !v16) {
        goto LABEL_94;
      }
      if (v39 != v18) {
        *v17++ = 47;
      LABEL_94:
        result = 0;
        *v17 = 0;
        return result;
      }
      return 5671;
    }
    v40 = v19;
    while (1) {
      while (1) {
        v41 = *v40;
        if (v41 != 47 && v41 != 92) {
          break;
        }
      LABEL_59:
        v42 = v40 - v19;
        if (v40 - v19 == 2) {
          if (*v19 != 46 || v19[1] != 46) {
          LABEL_70:
            if (v39 == v17) {
              return 5671;
            }
            *v17 = 47;
            v45 = v17 + 1;
            if (v42 > v39 - v45) {
              return 5671;
            }
            memcpy_plt(v45, v19, v40 - v19);
            v17 = &v45[v42];
            goto LABEL_73;
          }
          if (v17 == v18) {
            if ((v6 & 0x8000000000000LL) == 0) {
              return 4135;
            }
          }
          else {
            while (v17 != v18) {
              v44 = *--v17;
              v43 = v44;
              if (v44 == 92 || v43 == 47) {
                goto LABEL_82;
              }
            }
            v17 = v18 - 1;
          LABEL_82:
            for (i = v17 - 1; i + 1 != v18; --i) {
              v48 = *i;
              if (v48 != 92 && v48 != 47) {
                goto LABEL_89;
              }
            }
            i = v18 - 1;
          LABEL_89:
            v17 = i + 1;
          }
        }
        else if (v42 != 1 || *v19 != 46) {
          goto LABEL_70;
        }
      LABEL_73:
        if (v40 != v22) {
          while (1) {
            v46 = *v40;
            if (v46 != 92 && v46 != 47) {
              break;
            }
            if (++v40 == v22) {
              v40 = v22;
              break;
            }
          }
        }
        v19 = v40;
        if (v40 == v22) {
          goto LABEL_90;
        }
      }
      if (++v40 == v22) {
        v40 = v22;
        goto LABEL_59;
      }
    }
  }
  if ((a5 & 0x4000000000000LL) != 0) {
    return 1063;
  }
  v11 = *a3;
  result = 1063;
  if (v11 != 47 && v11 != 92) {
    nn_os_SdkRecursiveMutexType_Lock_plt((void*)&SdkData_eaa110);
    if ((SdkData_eaa126 & 1) != 0) {
      v13 = WORD1(SdkData_eaa118);
      v14 = (unsigned __int16)SdkData_eaa118;
      if (WORD1(SdkData_eaa118) == 0) {
        goto LABEL_13;
      }
      while (1) {
        v15 = *((unsigned __int8*)&SdkData_eaa110 + v13 + 23);
        if (v15 != 47 && v15 != 92) {
          break;
        }
        if (--v13 == 0) {
          goto LABEL_13;
        }
      }
      if (v13 <= a2 - 1) {
      LABEL_13:
        v16 = (SdkData_eaa126 & 4) != 0;
        memcpy_plt(a1, &SdkData_eaa128, v13);
        v17 = (unsigned __int8*)&a1[v13];
        v6 = SdkData_eaa120;
        v18 = (unsigned __int8*)&a1[v14];
        _runlock_0_0((void*)&SdkData_eaa110);
        v19 = a3;
        v20 = HIWORD(a4);
        v21 = &a1[a2];
        v22 = &a3[v20];
        if (a3 != &a3[v20]) {
          do {
          LABEL_47:
            v38 = *v19;
            if (v38 != 92 && v38 != 47) {
              goto LABEL_49;
            }
            ++v19;
          } while (v19 != v22);
          v39 = (unsigned __int8*)(v21 - 1);
          goto LABEL_90;
        }
        goto LABEL_49;
      }
      v49 = 5671;
    }
    else {
      v49 = 3623;
    }
    _runlock_0_0((void*)&SdkData_eaa110);
    return v49;
  }
  return result;
}

__int64 nnmusl_b1220(unsigned __int64* a1, _BYTE* a2, unsigned __int64 a3,
                     unsigned __int8* a4, unsigned int a5)
{
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  bool v32;
  __int64 v33;
  unsigned __int64 v34;
  _BYTE* v35;
  int v36;
  int v37;
  unsigned __int64 v38;
  int v39;
  int v40;
  int v41;
  unsigned __int64 v42;
  __int64 v43;
  int v44;
  unsigned __int64 v45;
  __int64 v46;
  bool v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  struct {
    unsigned int* v56;
    _WORD* v57;
    __int64 v58;
  } v56_;
  struct {
    _WORD* v59[2];
    __int64 v60;
  } v59_;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = nnmusl_b02a0(a4),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v25 = COERCE_AS(__typeof__(v25),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v11 & 0x1000000000000LL) != 0) {
    v12 = v11;
    if ((v11 & 0x2000000000000LL) != 0) {
      v16 = (unsigned __int16)v10;
      v17 = WORD1(v10);
      if ((BYTE6(v11) & 0xA) == 2) {
        v18 = (unsigned __int16)v10;
      }
      else {
        v18 = 0;
      }
      if (v17 - v18 > 0x300) {
        return 2087;
      }
      if (a3 <= v17) {
        return 5671;
      }
      v19 = v10 & 0xFFFFFFFF00000000LL;
      memcpy_plt(a2, a4, v17 + 1),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v25 = COERCE_AS(__typeof__(v25),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v20 = v19 | (v17 << 16) | v16;
    LABEL_14:
      result = __nnmusl_validate_path((__int64)a2, v20, v12),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v25 = COERCE_AS(__typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if ((_DWORD)result != 0) {
        *a2 = 0;
      }
      else {
        *a1 = v20;
        a1[1] = v12;
      }
      return result;
    }
    if ((v11 & 0x4000000000000LL) == 0) {
      v13 = *a4;
      v14 = v10;
      result = 1063;
      if (v13 != 47 && v13 != 92) {
        v55 = v14;
        if ((unsigned __int16)__nnmusl_fd_lookup(a5) == 4) {
          return 7719;
        }
        v56_.v57 = nullptr;
        v56_.v58 = 0;
        v56_.v56 = nullptr;
        if (a5 == -100) {
          nn_os_SdkRecursiveMutexType_Lock_plt((void*)&SdkData_eaa110),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((SdkData_eaa126 & 1) != 0) {
            v21 = SdkData_eaa118;
            v22 = SdkData_eaa120;
            v23 = (char*)&SdkData_eaa128;
          LABEL_24:
            v26 = WORD1(v21);
            v54 = v22;
            v27 = WORD1(v55);
            v28 = (unsigned __int8)v23[v26 - 1];
            v29 = v26 + v27;
            if ((v22 & 0xA000000000000LL) == 0x2000000000000LL) {
              v30 = (unsigned __int16)v21;
            }
            else {
              v30 = 0;
            }
            v31 = v29 - v30;
            v32 = v28 == 47 || v28 == 92;
            v33 = !v32;
            if (!v32) {
              ++v31;
            }
            if (v31 > 0x300) {
              v12 = 0;
              v20 = 0;
              v36 = 0;
              v37 = 2087;
            }
            else {
              v34 = v29 + v33;
              v52 = (unsigned __int16)v21;
              v53 = v21;
              v51 = v33;
              if (v29 + v33 >= a3) {
                v12 = 0;
                v20 = 0;
                v36 = 0;
                v37 = 5671;
              }
              else {
                memcpy_plt(a2, v23, WORD1(v21)),
                    v11 = COERCE_AS(
                        __typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v25 = COERCE_AS(
                        __typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v35 = &a2[v26];
                if (v28 != 47 && v28 != 92) {
                  *v35++ = 47;
                }
                memcpy_plt(v35, a4, v27 + 1),
                    v11 = COERCE_AS(
                        __typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v25 = COERCE_AS(
                        __typeof__(v25),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v36 = 1;
                v37 = 0;
                v38 = HIWORD(v53);
                v39 = (int)(v54 >> 16) >> 16;
                v40 = v39 + ((int)(v12 >> 16) >> 16);
                v41 = v39 + ((int)v12 >> 16);
                v42 = WORD2(v53) + (unsigned __int64)WORD2(v55) + v51;
                if (v34 >= 0xFFFF) {
                  v43 = 0xFFFF;
                }
                else {
                  v43 = v34;
                }
                v44 = v40 | v41;
                if (v42 >= 0xFFFF) {
                  v42 = 0xFFFF;
                }
                if (v38 <= HIWORD(v55)) {
                  v38 = HIWORD(v55);
                }
                v45 = (v42 << 32) | (v38 << 48);
                if ((unsigned __int16)v54 <=
                    (unsigned int)(unsigned __int16)v12) {
                  v46 = (unsigned __int16)v12;
                }
                else {
                  v46 = (unsigned __int16)v54;
                }
                v47 = v44 < 0;
                v48 = 0x10000000000000LL;
                v49 = v45 | (v43 << 16);
                if (!v47) {
                  v48 = 0;
                }
                v20 = v49 | v52;
                v12 = v48 | (v54 | v12) & 0xFF000000000000LL |
                      ((unsigned __int64)(v40 & (unsigned int)~(v40 >> 31))
                       << 32) |
                      v46;
              }
            }
          LABEL_53:
            v50 = v37;
            if (a5 == -100) {
              _runlock_0_0((void*)&SdkData_eaa110);
              result = v50;
              if (v36 == 0) {
                return result;
              }
            }
            else {
              __nnmusl_slot_release(&v56_.v56),
                  v11 = COERCE_AS(
                      __typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v25 = COERCE_AS(
                      __typeof__(v25),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              result = v50;
              if (v36 == 0) {
                return result;
              }
            }
            goto LABEL_14;
          }
          v37 = 3623;
        }
        else {
          __nnmusl_fd_get((void*)(&v56_.v56), a5),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if ((v56_.v58 & 1) != 0 && (*((_BYTE*)v56_.v56 + 2) & 0x40) != 0) {
            v59_.v59[0] = v56_.v56;
            v59_.v59[1] = v56_.v57;
            v59_.v60 = v56_.v58;
            if ((unsigned __int16)__nnmusl_fd_kind(v59_.v59) == 2) {
              v59_.v59[0] = v56_.v56;
              v59_.v59[1] = v56_.v57;
              v59_.v60 = v56_.v58;
              v24 = ({
                unsigned __int128 r_ =
                    __nnmusl_fd_extra_pair((__int64)v59_.v59);
                v11 =
                    COERCE_AS(__typeof__(v11), (unsigned long long)(r_ >> 64));
                v25 =
                    COERCE_AS(__typeof__(v25), (unsigned long long)(r_ >> 64));
                (__int64)(unsigned long long)r_;
              });
              v22 = v25;
              v59_.v59[0] = v56_.v56;
              v59_.v59[1] = v56_.v57;
              v59_.v60 = v56_.v58;
              v23 = (char*)__nnmusl_fd_context((__int64)v59_.v59),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v25 = COERCE_AS(__typeof__(v25),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v21 = v24;
              goto LABEL_24;
            }
            v37 = 7719;
          }
          else {
            v37 = 6695;
          }
        }
        v12 = 0;
        v20 = 0;
        v36 = 0;
        goto LABEL_53;
      }
      return result;
    }
  }
  return 1063;
}

__int64 getnameinfo_0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4,
                      __int64 a5, unsigned int a6)
{
  return nn_socket_GetNameInfo_plt_859960(a1, a2, a3, a4, a5, a6);
}

__int64 nnmusl_b59a0() { return (int)nn_socket_Write_plt(); }

__int64 nnmusl_b59c0() { return (int)nn_socket_Read_plt(); }

unsigned __int64 __sched_cpucount(unsigned __int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64* v22;
  unsigned __int64 v23;

  if (result < 8) {
    return 0;
  }
  v2 = (result >> 3) & 7;
  if ((result >> 3) - 1 < 7) {
    v3 = 0;
    result = 0;
    if (v2 == 0) {
      return result;
    }
    goto LABEL_9;
  }
  v4 = result >> 6;
  v5 = (_QWORD*)(a2 + 32);
  v6 = 0;
  LODWORD(result) = 0;
  v7 = -8LL * v4;
  do {
    v6 -= 8;
    v8 = *(v5 - 3) - ((*(v5 - 3) >> 1) & 0x5555555555555555LL);
    v9 = *(v5 - 4) - ((*(v5 - 4) >> 1) & 0x5555555555555555LL);
    v10 = *(v5 - 2) - ((*(v5 - 2) >> 1) & 0x5555555555555555LL);
    v11 = v10 & 0x3333333333333333LL;
    v12 = (v10 >> 2) & 0x3333333333333333LL;
    v13 = *(v5 - 1) - ((*(v5 - 1) >> 1) & 0x5555555555555555LL);
    LODWORD(v9) =
        result +
        ((unsigned int)((0x101010101010101LL *
                         (((v9 & 0x3333333333333333LL) +
                           ((v9 >> 2) & 0x3333333333333333LL) +
                           (((v9 & 0x3333333333333333LL) +
                             ((v9 >> 2) & 0x3333333333333333LL)) >>
                            4)) &
                          0xF0F0F0F0F0F0F0FLL)) >>
                        32) >>
         24) +
        ((unsigned int)((0x101010101010101LL *
                         (((v8 & 0x3333333333333333LL) +
                           ((v8 >> 2) & 0x3333333333333333LL) +
                           (((v8 & 0x3333333333333333LL) +
                             ((v8 >> 2) & 0x3333333333333333LL)) >>
                            4)) &
                          0xF0F0F0F0F0F0F0FLL)) >>
                        32) >>
         24) +
        ((unsigned int)((0x101010101010101LL *
                         ((v11 + v12 + ((unsigned __int64)(v11 + v12) >> 4)) &
                          0xF0F0F0F0F0F0F0FLL)) >>
                        32) >>
         24);
    v14 = ((*v5 - ((*v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL) +
          (((*v5 - ((*v5 >> 1) & 0x5555555555555555uLL)) >> 2) &
           0x3333333333333333LL);
    LODWORD(v12) =
        ((unsigned int)((0x101010101010101LL *
                         (((v13 & 0x3333333333333333LL) +
                           ((v13 >> 2) & 0x3333333333333333LL) +
                           (((v13 & 0x3333333333333333LL) +
                             ((v13 >> 2) & 0x3333333333333333LL)) >>
                            4)) &
                          0xF0F0F0F0F0F0F0FLL)) >>
                        32) >>
         24) +
        ((unsigned int)((0x101010101010101LL *
                         ((v14 + (v14 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                        32) >>
         24);
    v15 = ((v5[1] - ((v5[1] >> 1) & 0x5555555555555555LL)) &
           0x3333333333333333LL) +
          (((v5[1] - ((v5[1] >> 1) & 0x5555555555555555uLL)) >> 2) &
           0x3333333333333333LL);
    v16 = v5[2];
    v17 = v5[3];
    v5 += 8;
    v18 = v16 - ((v16 >> 1) & 0x5555555555555555LL);
    v19 = v18 & 0x3333333333333333LL;
    LODWORD(v15) =
        v12 + ((unsigned int)((0x101010101010101LL *
                               ((v15 + (v15 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                              32) >>
               24);
    v20 = v18 >> 2;
    v21 = v17 - ((v17 >> 1) & 0x5555555555555555LL);
    result = (_DWORD)v9 + (_DWORD)v15 +
             ((unsigned int)((0x101010101010101LL *
                              ((v19 + (v20 & 0x3333333333333333LL) +
                                ((v19 + (v20 & 0x3333333333333333LL)) >> 4)) &
                               0xF0F0F0F0F0F0F0FLL)) >>
                             32) >>
              24) +
             ((unsigned int)((0x101010101010101LL *
                              (((v21 & 0x3333333333333333LL) +
                                ((v21 >> 2) & 0x3333333333333333LL) +
                                (((v21 & 0x3333333333333333LL) +
                                  ((v21 >> 2) & 0x3333333333333333LL)) >>
                                 4)) &
                               0xF0F0F0F0F0F0F0FLL)) >>
                             32) >>
              24);
  } while (v7 != v6);
  v3 = -v6;
  if (v2 != 0) {
  LABEL_9:
    v22 = (unsigned __int64*)(a2 + 8 * v3);
    do {
      v23 = *v22++;
      --v2;
      result =
          (unsigned int)result +
          ((unsigned int)((0x101010101010101LL *
                           ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) &
                              0x3333333333333333LL) +
                             (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >>
                               2) &
                              0x3333333333333333LL) +
                             ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) &
                                0x3333333333333333LL) +
                               (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >>
                                 2) &
                                0x3333333333333333LL)) >>
                              4)) &
                            0xF0F0F0F0F0F0F0FLL)) >>
                          32) >>
           24);
    } while (v2 != 0);
  }
  return result;
}

__int64 nnmusl_7789b0(__int64 a1)
{
  *(_QWORD*)(a1 + 80) = __stdio_seek;
  return __stdio_seek();
}

__int64 nnmusl_7789c0(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD* v6;
  int v7;
  _DWORD* v8;

  *(_QWORD*)(a1 + 72) = __stdio_write;
  v6 = (_DWORD*)__errno_location_plt(a1, a2);
  v7 = *v6;
  v8 = v6;
  if ((*(_BYTE*)a1 & 0x40) == 0 &&
      (unsigned int)isatty_plt(*(unsigned int*)(a1 + 120)) == 0) {
    *(_BYTE*)(a1 + 129) = -1;
  }
  *v8 = v7;
  return __stdio_write(a1, a2, a3);
}

void nnmusl_77ad60(__int64 a1, __int64 a2, _DWORD* a3, _QWORD* a4, _QWORD* a5,
                   _QWORD* a6)
{
  *a3 = 0;
  *a4 = 0;
  if (a5 != nullptr) {
    *a5 = 0;
  }
  *a6 = &SdkData_cad77e;
}

#pragma GCC visibility pop
