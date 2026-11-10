#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nandroid_AMessage_clear_plt(_QWORD);
__int64 nandroid_AMessage_countEntries_plt(_QWORD);
__int64 nandroid_AMessage_extend_plt(_QWORD, _QWORD);
__int64 nandroid_AMessage_findDouble_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findFloat_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findInt32_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findInt64_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findRect_plt(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                       _QWORD);
__int64 nandroid_AMessage_findSize_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_findString_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AMessage_getEntryNameAt_plt(_QWORD, _QWORD, _QWORD);
__int64 nandroid_AString_AString_plt_86d9f0(_QWORD);
__int64 nandroid_AString_Destroy_AString_plt(_QWORD);
__int64 nandroid_AString_c_str_plt(_QWORD);
__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_RefBase_incStrong_plt(_QWORD, _QWORD);
__int64 nandroid_SortedVectorImpl_add_plt(_QWORD, _QWORD);
__int64 nandroid_String8_Destroy_String8_plt(_QWORD);
__int64 nandroid_String8_String8_plt_86d870(_QWORD);
__int64 nandroid_String8_String8_plt_86d890(_QWORD, _QWORD);
__int64 nandroid_String8_String8_plt_86d8a0(_QWORD, _QWORD);
__int64 nandroid_String8_appendFormat_plt(_QWORD, const char*, ...);
__int64 nandroid_String8_append_plt(_QWORD, _QWORD);
__int64 nandroid_String8_setTo_plt_86e250(_QWORD, _QWORD);
__int64 nandroid_VectorImpl_removeItemsAt_plt(_QWORD, _QWORD, _QWORD);
__int64 strcmp_plt(void* this_, const char*, const char*);
__int64 AMediaFormat_copy(_QWORD* a1, __int64 a2);
__int64 AMediaFormat_toString(__int64* a1);
__int64 AMediaFormat_getString(_QWORD* a1, char* a2, char* a3);

__int64 AMediaFormat_copy(_QWORD* a1, __int64 a2)
{
  __int64 result;
  _QWORD* v4;

  result = 4294957292LL;
  if (a1 != nullptr && a2 != 0) {
    v4 = a1;
    nandroid_AMessage_clear_plt(*a1);
    nandroid_AMessage_extend_plt(*v4, a2);
    return 0;
  }
  return result;
}

__int64 AMediaFormat_toString(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  const char* v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  const char* v11;
  size_t v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;

  v2 = *a1;
  v19 = v2;
  if (v2 != 0) {
    nandroid_RefBase_incStrong_plt(v2, &v19);
  }
  v18 = 0;
  nandroid_String8_String8_plt_86d870(&v18);
  v3 = nandroid_AMessage_countEntries_plt(v19);
  if (v3 >= 1) {
    v4 = v3 & 0x7FFFFFFF;
    v17 = 0;
    v5 = nandroid_AMessage_getEntryNameAt_plt(v19, 0, &v17);
    nandroid_String8_append_plt(&v18, v5);
    nandroid_String8_append_plt(&v18, ": ");
    if (v17 > 3) {
      if (v17 > 8) {
        if (v17 == 9) {
          LODWORD(v12) = 0;
          v16 = 0;
          v15 = 0;
          nandroid_AMessage_findRect_plt(v19, v5, &v12, (char*)&v16 + 4, &v16,
                                         &v15);
          nandroid_String8_appendFormat_plt(&v18, "Rect(%d, %d, %d, %d)", v12,
                                            HIDWORD(v16), v16, v15);
          goto LABEL_23;
        }
        if (v17 == 10) {
          nandroid_String8_appendFormat_plt(&v18, "data");
          goto LABEL_23;
        }
      }
      else {
        if (v17 == 4) {
          v12 = 0;
          nandroid_AMessage_findDouble_plt(v19, v5, &v12);
          nandroid_String8_appendFormat_plt(&v18, "double(%f)", *(double*)&v12);
          goto LABEL_23;
        }
        if (v17 == 6) {
          v13 = 0;
          v14 = 0;
          v12 = 0;
          nandroid_AString_AString_plt_86d9f0(&v12);
          nandroid_AMessage_findString_plt(v19, v5, &v12);
          v6 = (const char*)nandroid_AString_c_str_plt(&v12);
          nandroid_String8_appendFormat_plt(&v18, "string(%s)", v6);
          nandroid_AString_Destroy_AString_plt(&v12);
          goto LABEL_23;
        }
      }
    }
    else {
      if (v17 > 1) {
        if (v17 == 2) {
          v12 = 0;
          nandroid_AMessage_findSize_plt(v19, v5, &v12);
          nandroid_String8_appendFormat_plt(&v18, "size_t(%zu)", v12);
        }
        else {
          LODWORD(v12) = 0;
          nandroid_AMessage_findFloat_plt(v19, v5, &v12);
          nandroid_String8_appendFormat_plt(&v18, "float(%f)", *(float*)&v12);
        }
        goto LABEL_23;
      }
      if (v17 == 0) {
        LODWORD(v12) = 0;
        nandroid_AMessage_findInt32_plt(v19, v5, &v12);
        nandroid_String8_appendFormat_plt(&v18, "int32(%d)", (unsigned int)v12);
        goto LABEL_23;
      }
      if (v17 == 1) {
        v12 = 0;
        nandroid_AMessage_findInt64_plt(v19, v5, &v12);
        nandroid_String8_appendFormat_plt(&v18, "int64(%ld)", v12);
      LABEL_23:
        if (v4 == 1) {
          goto LABEL_24;
        }
        v9 = 1;
        while (1) {
          nandroid_String8_append_plt(&v18, ", ");
          v17 = 0;
          v10 = nandroid_AMessage_getEntryNameAt_plt(v19, v9, &v17);
          nandroid_String8_append_plt(&v18, v10);
          nandroid_String8_append_plt(&v18, ": ");
          if (v17 > 3) {
            if (v17 > 8) {
              if (v17 == 9) {
                LODWORD(v12) = 0;
                v16 = 0;
                v15 = 0;
                nandroid_AMessage_findRect_plt(v19, v10, &v12, (char*)&v16 + 4,
                                               &v16, &v15);
                nandroid_String8_appendFormat_plt(&v18, "Rect(%d, %d, %d, %d)",
                                                  v12, HIDWORD(v16), v16, v15);
              }
              else {
                if (v17 != 10) {
                LABEL_47:
                  nandroid_String8_appendFormat_plt(&v18, "unknown(%d)",
                                                    (unsigned int)v17);
                  goto LABEL_29;
                }
                nandroid_String8_appendFormat_plt(&v18, "data");
              }
            }
            else if (v17 == 4) {
              v12 = 0;
              nandroid_AMessage_findDouble_plt(v19, v10, &v12);
              nandroid_String8_appendFormat_plt(&v18, "double(%f)",
                                                *(double*)&v12);
            }
            else {
              if (v17 != 6) {
                goto LABEL_47;
              }
              v13 = 0;
              v14 = 0;
              v12 = 0;
              nandroid_AString_AString_plt_86d9f0(&v12);
              nandroid_AMessage_findString_plt(v19, v10, &v12);
              v11 = (const char*)nandroid_AString_c_str_plt(&v12);
              nandroid_String8_appendFormat_plt(&v18, "string(%s)", v11);
              nandroid_AString_Destroy_AString_plt(&v12);
            }
          }
          else {
            if (v17 > 1) {
              if (v17 == 2) {
                v12 = 0;
                nandroid_AMessage_findSize_plt(v19, v10, &v12);
                nandroid_String8_appendFormat_plt(&v18, "size_t(%zu)", v12);
              }
              else {
                LODWORD(v12) = 0;
                nandroid_AMessage_findFloat_plt(v19, v10, &v12);
                nandroid_String8_appendFormat_plt(&v18, "float(%f)",
                                                  *(float*)&v12);
              }
              goto LABEL_29;
            }
            if (v17 != 0) {
              if (v17 != 1) {
                goto LABEL_47;
              }
              v12 = 0;
              nandroid_AMessage_findInt64_plt(v19, v10, &v12);
              nandroid_String8_appendFormat_plt(&v18, "int64(%ld)", v12);
            }
            else {
              LODWORD(v12) = 0;
              nandroid_AMessage_findInt32_plt(v19, v10, &v12);
              nandroid_String8_appendFormat_plt(&v18, "int32(%d)",
                                                (unsigned int)v12);
            }
          }
        LABEL_29:
          if (v4 == ++v9) {
            goto LABEL_24;
          }
        }
      }
    }
    nandroid_String8_appendFormat_plt(&v18, "unknown(%d)", (unsigned int)v17);
    goto LABEL_23;
  }
LABEL_24:
  nandroid_String8_append_plt(&v18, "}");
  nandroid_String8_setTo_plt_86e250(a1 + 1, &v18);
  v7 = a1[1];
  nandroid_String8_Destroy_String8_plt(&v18);
  if (v19 != 0) {
    nandroid_RefBase_decStrong_plt(v19, &v19);
  }
  return v7;
}

__int64 AMediaFormat_getString(_QWORD* a1, char* a2, char* a3)
{
  __int64 v3;
  void** v7;
  __int64 v8;
  void* v9;
  _QWORD* v10;
  char v11;
  __int64 v12;
  _BYTE v14[8];
  __int64 v15;
  _QWORD v16[3];
  _BYTE v17[8];
  __int64 v18;

  v3 = a1[4];
  if (v3 != 0) {
    v7 = (void**)a1[3];
    v8 = 0;
    while (1) {
      v9 = *v7;
      v7 += 2;
      if ((unsigned int)strcmp_plt(v9, a2, a3) == 0) {
        break;
      }
      if (v3 == ++v8) {
        goto LABEL_5;
      }
    }
    v10 = a1 + 2;
    nandroid_VectorImpl_removeItemsAt_plt(a1 + 2, v8, 1);
  }
  else {
  LABEL_5:
    v10 = a1 + 2;
  }
  memset(v16, 0, sizeof(v16));
  nandroid_AString_AString_plt_86d9f0(v16);
  v11 = nandroid_AMessage_findString_plt(*a1, a2, v16);
  if ((v11 & 1) != 0) {
    v15 = 0;
    v12 = nandroid_AString_c_str_plt(v16);
    nandroid_String8_String8_plt_86d890(&v15, v12);
    nandroid_String8_String8_plt_86d890(v14, a2);
    nandroid_String8_String8_plt_86d8a0(v17, v14);
    nandroid_String8_String8_plt_86d8a0(&v18, &v15);
    nandroid_SortedVectorImpl_add_plt(v10, v17);
    nandroid_String8_Destroy_String8_plt(&v18);
    nandroid_String8_Destroy_String8_plt(v17);
    nandroid_String8_Destroy_String8_plt(v14);
    *(_QWORD*)a3 = v15;
    nandroid_String8_Destroy_String8_plt(&v15);
  }
  nandroid_AString_Destroy_AString_plt(v16);
  return v11 & 1;
}

#pragma GCC visibility pop
