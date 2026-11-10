#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 strcmp_plt(void* this_, const char*, const char*);
extern __int64 SdkData_f76ea8;
extern __int64 SdkData_f76ec0;
extern __int64 SdkData_f76ed8;
extern __int64 SdkData_f76ef0;
extern __int64 SdkData_f76f08;
extern __int64 SdkData_f76f20;
extern __int64 SdkData_f76f38;
extern __int64 SdkData_f76f50;
extern __int64 SdkData_f76f68;
extern __int64 SdkData_f76f80;
extern __int64 SdkData_f76f98;
extern __int64 SdkData_f76fb0;
extern __int64 SdkData_f76fc8;
extern __int64 SdkData_f76fe0;
extern __int64 SdkData_f76ff8;
extern __int64 SdkData_f77010;
__int64 nvos_heap_library_5f7e20(void* this_, __int64 a2, const char* a3);

__int64 nvos_heap_library_5f7e20(void* this_, __int64 a2, const char* a3)
{
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  void* v23;
  __int64 v24;
  int v25;
  _BOOL4 v26;
  int v27;
  int v28;
  int v29;
  unsigned int v30;
  char v31;
  int v32;
  int v33;
  char v34;
  int v35;
  char v36;
  int v37;
  char v38;
  int v39;
  _BOOL4 v41;
  _BOOL4 v42;
  int v43;
  int v44;
  int v45;
  int v46;
  char v47;
  int v48;
  char v49;
  int v50;
  char v51;
  int v52;
  char v53;
  int v54;
  char v55;
  unsigned int v56;
  int v57;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;

  v4 = SdkData_f76ea8;
  if (SdkData_f76ea8 == 0 ||
      (_DWORD)(result = strcmp_plt(this_, (const char*)SdkData_f76ea8, a3)) !=
          0) {
    v6 = SdkData_f76ec0;
    if (SdkData_f76ec0 != 0 &&
        (unsigned int)strcmp_plt(this_, (const char*)SdkData_f76ec0, a3) == 0) {
      return 1;
    }
    else {
      v7 = SdkData_f76ed8;
      if (SdkData_f76ed8 != 0 &&
          (unsigned int)strcmp_plt(this_, (const char*)SdkData_f76ed8, a3) ==
              0) {
        return 2;
      }
      else {
        v8 = SdkData_f76ef0;
        if (SdkData_f76ef0 != 0 &&
            (unsigned int)strcmp_plt(this_, (const char*)SdkData_f76ef0, a3) ==
                0) {
          return 3;
        }
        else {
          v9 = SdkData_f76f08;
          if (SdkData_f76f08 != 0 &&
              (unsigned int)strcmp_plt(this_, (const char*)SdkData_f76f08,
                                       a3) == 0) {
            return 4;
          }
          else {
            v10 = SdkData_f76f20;
            if (SdkData_f76f20 != 0 &&
                (unsigned int)strcmp_plt(this_, (const char*)SdkData_f76f20,
                                         a3) == 0) {
              return 5;
            }
            else {
              v11 = SdkData_f76f38;
              if (SdkData_f76f38 != 0 &&
                  (unsigned int)strcmp_plt(this_, (const char*)SdkData_f76f38,
                                           a3) == 0) {
                return 6;
              }
              else {
                v12 = SdkData_f76f50;
                if (SdkData_f76f50 != 0 &&
                    (unsigned int)strcmp_plt(this_, (const char*)SdkData_f76f50,
                                             a3) == 0) {
                  return 7;
                }
                else {
                  v13 = SdkData_f76f68;
                  if (SdkData_f76f68 != 0 &&
                      (unsigned int)strcmp_plt(
                          this_, (const char*)SdkData_f76f68, a3) == 0) {
                    return 8;
                  }
                  else {
                    v64 = v13;
                    v14 = SdkData_f76f80;
                    if (SdkData_f76f80 != 0 &&
                        (unsigned int)strcmp_plt(
                            this_, (const char*)SdkData_f76f80, a3) == 0) {
                      return 9;
                    }
                    else {
                      v63 = v14;
                      v15 = SdkData_f76f98;
                      if (SdkData_f76f98 != 0 &&
                          (unsigned int)strcmp_plt(
                              this_, (const char*)SdkData_f76f98, a3) == 0) {
                        return 10;
                      }
                      else {
                        v62 = v15;
                        v16 = SdkData_f76fb0;
                        if (SdkData_f76fb0 != 0 &&
                            (unsigned int)strcmp_plt(
                                this_, (const char*)SdkData_f76fb0, a3) == 0) {
                          return 11;
                        }
                        else {
                          v61 = v11;
                          v17 = SdkData_f76fc8;
                          if (SdkData_f76fc8 != 0 &&
                              (unsigned int)strcmp_plt(
                                  this_, (const char*)SdkData_f76fc8, a3) ==
                                  0) {
                            return 12;
                          }
                          else {
                            v60 = v17;
                            v18 = SdkData_f76fe0;
                            if (SdkData_f76fe0 != 0 &&
                                (unsigned int)strcmp_plt(
                                    this_, (const char*)SdkData_f76fe0, a3) ==
                                    0) {
                              return 13;
                            }
                            else {
                              v19 = SdkData_f76ff8;
                              if (SdkData_f76ff8 != 0 &&
                                  (v59 = v18, v20 = v16, v21 = SdkData_f76ff8,
                                   v22 = strcmp_plt(
                                       this_, (const char*)SdkData_f76ff8, a3),
                                   v19 = v21, v16 = v20, v18 = v59, v22 == 0)) {
                                return 14;
                              }
                              else if (SdkData_f77010 != 0) {
                                v23 = this_;
                                v24 = v19;
                                v25 = strcmp_plt(
                                    v23, (const char*)SdkData_f77010, a3);
                                v26 = v25 == 0;
                                v27 = v4 != 0;
                                if (v4 == 0) {
                                  v26 = true;
                                }
                                if (v25 == 0) {
                                  v27 = 15;
                                }
                                if (v6 == 0) {
                                  v26 = true;
                                }
                                v28 = v7 == 0 || v26;
                                if (v7 != 0) {
                                  v29 = 3;
                                }
                                else {
                                  v29 = 2;
                                }
                                if (v8 == 0) {
                                  v28 = 1;
                                }
                                if (v26) {
                                  v30 = v27;
                                }
                                else {
                                  v30 = v29;
                                }
                                if (v9 != 0) {
                                  v31 = v28;
                                }
                                else {
                                  v31 = 1;
                                }
                                if (v9 != 0) {
                                  v32 = 5;
                                }
                                else {
                                  v32 = 4;
                                }
                                if (v10 == 0) {
                                  v31 = 1;
                                }
                                if (v28 == 0) {
                                  v30 = v32;
                                }
                                if (v61 != 0) {
                                  v33 = 7;
                                }
                                else {
                                  v33 = 6;
                                }
                                if ((v31 & 1) == 0) {
                                  v30 = v33;
                                }
                                v34 = v31 | (v61 == 0 || v12 == 0);
                                if (v64 != 0) {
                                  v35 = 9;
                                }
                                else {
                                  v35 = 8;
                                }
                                if ((v34 & 1) == 0) {
                                  v30 = v35;
                                }
                                v36 = v34 | (v64 == 0 || v63 == 0);
                                if (v62 != 0) {
                                  v37 = 11;
                                }
                                else {
                                  v37 = 10;
                                }
                                if ((v36 & 1) == 0) {
                                  v30 = v37;
                                }
                                v38 = v36 | (v62 == 0 || v16 == 0);
                                if (v60 != 0) {
                                  v39 = 13;
                                }
                                else {
                                  v39 = 12;
                                }
                                if ((v38 & 1) == 0) {
                                  v30 = v39;
                                }
                                if ((v38 & 1 | (v60 == 0 || v18 == 0)) != 0) {
                                  result = v30;
                                }
                                else {
                                  result = 14;
                                }
                                if ((v38 & 1 | (v60 == 0 || v18 == 0)) == 0 &&
                                    v24 != 0) {
                                  return 0xFFFFFFFFLL;
                                }
                              }
                              else {
                                v41 = v4 != 0;
                                v42 = v4 == 0;
                                if (v6 == 0) {
                                  v42 = true;
                                }
                                v43 = v7 == 0 || v42;
                                if (v7 != 0) {
                                  v44 = 3;
                                }
                                else {
                                  v44 = 2;
                                }
                                if (v8 == 0) {
                                  v43 = 1;
                                }
                                if (!v42) {
                                  v41 = v44;
                                }
                                if (v9 != 0) {
                                  v45 = v43;
                                }
                                else {
                                  v45 = 1;
                                }
                                if (v9 != 0) {
                                  v46 = 5;
                                }
                                else {
                                  v46 = 4;
                                }
                                if (v10 == 0) {
                                  v45 = 1;
                                }
                                if (v43 == 0) {
                                  v41 = v46;
                                }
                                if (v61 != 0) {
                                  v47 = v45;
                                }
                                else {
                                  v47 = 1;
                                }
                                if (v61 != 0) {
                                  v48 = 7;
                                }
                                else {
                                  v48 = 6;
                                }
                                if (v45 == 0) {
                                  v41 = v48;
                                }
                                v49 = v47 | (v12 == 0);
                                if (v64 != 0) {
                                  v50 = 9;
                                }
                                else {
                                  v50 = 8;
                                }
                                if ((v49 & 1) == 0) {
                                  v41 = v50;
                                }
                                v51 = v49 | (v64 == 0 || v63 == 0);
                                if (v62 != 0) {
                                  v52 = 11;
                                }
                                else {
                                  v52 = 10;
                                }
                                if ((v51 & 1) != 0) {
                                  v52 = v41;
                                }
                                v53 = v51 | (v62 == 0 || v16 == 0);
                                if (v60 != 0) {
                                  v54 = 13;
                                }
                                else {
                                  v54 = 12;
                                }
                                v55 = v53 | (v60 == 0 || v18 == 0);
                                if ((v53 & 1) != 0) {
                                  v56 = v52;
                                }
                                else {
                                  v56 = v54;
                                }
                                v57 = v55 & 1;
                                if (v57 != 0) {
                                  result = v56;
                                }
                                else {
                                  result = 14;
                                }
                                if (v57 == 0 && v19 != 0) {
                                  return 15;
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
  return result;
}

#pragma GCC visibility pop
