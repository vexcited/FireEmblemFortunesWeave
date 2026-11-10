#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 nn_diag_detail_AbortImpl_plt_856170(_QWORD);
__int64 nn_util_IsValidUtf8String_plt(_QWORD, _QWORD);
__int64 nn_friends_detail_PresenceAccessor_AddKeyValue(void* this_,
                                                       const char* a2,
                                                       const char* a3,
                                                       char* a4);
const char* nn_friends_detail_PresenceAccessor_SearchKey(void* this_,
                                                         const char* a2,
                                                         const char* a3);
__int64 nn_friends_detail_PresenceAccessor_GetKeyValueList(unsigned int* a1,
                                                           __int64 a2,
                                                           unsigned int a3,
                                                           unsigned __int8* a4,
                                                           __int64 a5);

__int64 nn_friends_detail_PresenceAccessor_AddKeyValue(void* this_,
                                                       const char* a2,
                                                       const char* a3, char* a4)
{
  __int64 v4;
  __int64 v5;
  int v6;
  unsigned int v7;
  __int64 v9;
  int v10;
  void* v13;
  const char* v14;
  const char* v15;
  char* v16;
  char v17;
  char v18;
  char* v19;
  int v20;
  void* v21;
  const char* v22;
  int v23;
  int v24;
  int v25;
  int v26;
  __int64 v29;
  char* v30;
  int v31;
  const char* v32;
  int v33;
  const char* v34;
  const char* v35;

  if ((_DWORD)a4 == 0) {
    return 1145;
  }
  v4 = 0;
  while (*((_BYTE*)this_ + v4) != 0) {
    if ((_DWORD)a4 == (_DWORD)++v4) {
      LODWORD(v4) = (_DWORD)a4;
      break;
    }
  }
  v5 = 0;
  v6 = v4;
  while (a2[v5] != 0) {
    if ((_DWORD)a4 == (_DWORD)++v5) {
      return 1145;
    }
  }
  v7 = 1145;
  if (v6 != 0 && v6 < (int)a4 && (int)v5 < (int)a4) {
    v9 = 0;
    while (1) {
      v10 = *((unsigned __int8*)this_ + v9);
      if ((unsigned int)(v10 - 48) >= 0xA && (unsigned int)(v10 - 97) >= 0x1A &&
          v10 != 95 && (unsigned int)(v10 - 65) > 0x19) {
        return 1145;
      }
      if (v6 == ++v9) {
        if ((_DWORD)v5 == 0) {
          goto LABEL_29;
        }
        v13 = this_;
        v14 = a2;
        v15 = a3;
        v16 = a4;
        v17 = nn_util_IsValidUtf8String_plt(a2, v5);
        a4 = v16;
        a3 = v15;
        a2 = v14;
        v18 = v17;
        this_ = v13;
        if ((v18 & 1) != 0) {
        LABEL_29:
          if (a4 == nullptr) {
          LABEL_59:
            if (v6 + (int)v5 + 2 > (int)a4) {
              return 6265;
            }
            else {
              v34 = a2;
              v35 = a3;
              memcpy_plt(a3, this_, v6 + 1);
              memcpy_plt(&v35[v6 + 1], v34, v5 + 1);
              return 0;
            }
          }
          while ((_DWORD)a4 != 0) {
            v19 = nullptr;
            while (v19[(_QWORD)a3] != 0) {
              if ((_DWORD)a4 == (_DWORD)++v19) {
                return 1145;
              }
            }
            if ((int)v19 >= (int)a4) {
              break;
            }
            if ((_DWORD)v19 == 0) {
              goto LABEL_59;
            }
            if (v6 == (_DWORD)v19) {
              if (((unsigned int)a4 & 0x80000000) != 0) {
                nn_diag_detail_AbortImpl_plt_856170(this_);
              }
              v20 = (_DWORD)a4 - 1;
              v21 = this_;
              v22 = a3;
              do {
                v24 = *(unsigned __int8*)v21;
                v21 = (void*)((char*)v21 + 1);
                v23 = v24;
                v26 = *(unsigned __int8*)v22++;
                v25 = v26;
              } while (v23 != 0 && v23 == v25 && v20-- != 0);
              if (v23 == v25) {
                return 7289;
              }
            }
            if (a4 - 1 == v19) {
              return 1145;
            }
            if ((_DWORD)a4 - 1 == (_DWORD)v19) {
              v29 = 0;
            }
            else {
              v29 = 0;
              v31 = (_DWORD)a4 - 1 - (_DWORD)v19;
              v32 = &v19[(_QWORD)a3 + 1];
              while (1) {
                v33 = *(unsigned __int8*)v32++;
                if (v33 == 0) {
                  break;
                }
                --v31;
                ++v29;
                if (v31 == 0) {
                  return 1145;
                }
              }
            }
            if ((int)v29 >= (int)a4 - 1 - (int)v19) {
              return 1145;
            }
            a3 = &a3[v29 + 2 + (_QWORD)v19];
            v30 = &a4[-v29 - 2];
            a4 = (char*)(&a4[-v29] - v19 - 2);
            if (v30 == v19) {
              LODWORD(a4) = 0;
              goto LABEL_59;
            }
          }
        }
        return 1145;
      }
    }
  }
  return v7;
}

const char* nn_friends_detail_PresenceAccessor_SearchKey(void* this_,
                                                         const char* a2,
                                                         const char* a3)
{
  const char* v3;
  const char* v5;
  int v6;
  const char* v7;
  const char* v8;
  __int64 v9;
  int v10;
  void* v11;
  const char* v12;
  int v13;
  int v14;
  int v15;
  int v16;
  __int64 v19;

  if ((_DWORD)a3 == 0) {
    return nullptr;
  }
  v3 = (_BYTE*)(((char*)0x0LL) + 1);
  while (v3[(_QWORD)this_ - 1] != 0) {
    if ((_DWORD)++v3 - (_DWORD)a3 == 1) {
      return nullptr;
    }
  }
  if ((_DWORD)v3 != 1 && (int)v3 - 1 < (int)a3) {
    do {
      if (a3 == nullptr || (_DWORD)a3 == 0) {
        return nullptr;
      }
      v5 = nullptr;
      v6 = (_DWORD)v3 - 1;
      while (v5[(_QWORD)a2] != 0) {
        ++v5;
        --v6;
        if ((_DWORD)a3 == (_DWORD)v5) {
          return nullptr;
        }
      }
      if ((int)v5 >= (int)a3 || (_DWORD)v5 == 0) {
        return nullptr;
      }
      if (v6 != 0) {
        if (a3 - 1 == v5) {
          return nullptr;
        }
        v7 = &v5[(_QWORD)a2 + 1];
        v8 = &a3[~(unsigned __int64)v5];
        if ((_DWORD)v8 != 0) {
          goto LABEL_19;
        }
      }
      else {
        if (((unsigned int)a3 & 0x80000000) != 0) {
          nn_diag_detail_AbortImpl_plt_856170(this_);
        }
        v10 = (_DWORD)a3 - 1;
        v11 = this_;
        v12 = a2;
        do {
          v14 = *(unsigned __int8*)v11;
          v11 = (void*)((char*)v11 + 1);
          v13 = v14;
          v16 = *(unsigned __int8*)v12++;
          v15 = v16;
        } while (v13 != 0 && v13 == v15 && v10-- != 0);
        v7 = &v3[(_QWORD)a2];
        if (a3 == v3 || v13 == v15) {
          if (a3 == v3) {
            return nullptr;
          }
          else {
            return &v3[(_QWORD)a2];
          }
        }
        v8 = (const char*)(a3 - v3);
        if ((_DWORD)a3 != (_DWORD)v3) {
        LABEL_19:
          v9 = 0;
          while (v7[v9] != 0) {
            if ((_DWORD)v8 == (_DWORD)++v9) {
              return nullptr;
            }
          }
          goto LABEL_37;
        }
      }
      LODWORD(v9) = 0;
    LABEL_37:
      v19 = (unsigned int)(v9 + 1);
      a2 = &v7[v19];
      a3 = &v8[-v19];
    } while ((int)v9 < (int)v8);
  }
  return nullptr;
}

__int64 nn_friends_detail_PresenceAccessor_GetKeyValueList(unsigned int* a1,
                                                           __int64 a2,
                                                           unsigned int a3,
                                                           unsigned __int8* a4,
                                                           __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  _BYTE* v11;
  __int64 v12;
  int v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v22;
  _QWORD* v23;
  unsigned __int8* v24;
  __int64 v25;
  int v26;
  bool v27;
  __int64 v29;
  __int64 v30;
  unsigned int* v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  char v35;
  char v36;

  v5 = 0;
  v6 = a3;
LABEL_2:
  if (a5 != 0) {
    if ((_DWORD)a5 == 0) {
      return 1145;
    }
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = a5;
    v11 = a4;
    while (*v11 != 0) {
      --v10;
      ++v11;
      ++v9;
      --v8;
      --v7;
      if (v10 == 0) {
        return 1145;
      }
    }
    if (v9 >= (int)a5) {
      return 1145;
    }
    if (v9 != 0) {
      if (v5 != 0) {
        v12 = 0;
        while (1) {
          v13 = v8;
          v14 = a4;
          v15 = *(unsigned __int8**)(a2 + 16 * v12);
          do {
            v17 = *v15++;
            v16 = v17;
            v19 = *v14++;
            v18 = v19;
          } while (v16 != 0 && v16 == v18 && v13++ != 0);
          if (v16 == v18) {
            break;
          }
          if (++v12 == v5) {
            goto LABEL_23;
          }
        }
      }
      else {
      LABEL_23:
        v22 = (unsigned int)(v9 + 1);
        v23 = (_QWORD*)(a2 + 16 * v5);
        v24 = &a4[v22];
        *v23 = a4;
        v23[1] = &a4[v22];
        v25 = v7;
        while (1) {
          v26 = *a4;
          v27 = (unsigned int)(v26 - 48) >= 0xA &&
                (unsigned int)(v26 - 97) >= 0x1A;
          if (v27 && v26 != 95 && (unsigned int)(v26 - 65) > 0x19) {
            break;
          }
          ++a4;
          v27 = __CFADD__(v25++, 1);
          if (v27) {
            v29 = a5 - v22;
            if (v29 == 0 || (_DWORD)v29 == 0) {
              return 1145;
            }
            v30 = 0;
            while (v11[v30 + 1] != 0) {
              if ((_DWORD)a5 + (_DWORD)v7 - 1 == (_DWORD)++v30) {
                return 1145;
              }
            }
            if ((int)v30 >= (int)v29) {
              return 1145;
            }
            if ((_DWORD)v30 != 0) {
              v31 = a1;
              v32 = a2;
              v33 = a3;
              v34 = a5;
              v35 = nn_util_IsValidUtf8String_plt(v24, v30);
              a2 = v32;
              a5 = v34;
              a3 = v33;
              v36 = v35;
              a1 = v31;
              if ((v36 & 1) == 0) {
                return 1145;
              }
            }
            ++v5;
            a4 = &v11[v30 + 2];
            a5 = a5 + v7 - v30 - 2;
            if (v5 != v6) {
              goto LABEL_2;
            }
            goto LABEL_49;
          }
        }
      }
      return 1145;
    }
  }
  a3 = v5;
LABEL_49:
  *a1 = a3;
  return 0;
}

#pragma GCC visibility pop
