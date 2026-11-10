#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_settings_GetAvailableLanguageCodes_plt(_QWORD, _QWORD);
bool settings_chat_transcription_5b8f20(unsigned __int8* a1);

bool settings_chat_transcription_5b8f20(unsigned __int8* a1)
{
  int v2;
  unsigned __int8 v3;
  unsigned __int8 v4;
  __int64 v5;
  unsigned __int8 v6;
  unsigned __int8 v7;
  unsigned __int8* i;
  __int64 v9;
  unsigned __int8* v10;
  _BOOL8 result;
  int v12;
  _BYTE* n;
  _BYTE* m;
  _BYTE* k;
  unsigned __int8* j;
  __int64 v17;
  _QWORD v18[31];

  v17 = 0;
  memset(v18, 0, sizeof(v18));
  v2 = nn_settings_GetAvailableLanguageCodes_plt(&v17, 32);
  if (v2 < 1) {
    return false;
  }
  v3 = *a1;
  if (*a1 != 0) {
    v4 = a1[1];
    v5 = (unsigned int)v2;
    if (v4 != 0) {
      v6 = a1[2];
      if (v6 != 0) {
        v7 = a1[3];
        if (v7 != 0) {
          if (a1[4] != 0) {
            for (i = (unsigned __int8*)&v17 + 3;
                 *(i - 3) != v3 || *(i - 2) != v4 || *(i - 1) != v6 ||
                 *i != v7 || i[1] != a1[4] || a1[5] != i[2] ||
                 a1[5] != 0 && (a1[6] != i[3] || a1[6] != 0 && a1[7] != i[4]);
                 i += 8) {
              if (--v5 == 0) {
                return false;
              }
            }
          }
          else {
            for (j = (unsigned __int8*)&v17 + 2;
                 *(j - 2) != v3 || *(j - 1) != v4 || *j != v6 || j[1] != v7 ||
                 j[2] != 0;
                 j += 8) {
              if (--v5 == 0) {
                return false;
              }
            }
          }
        }
        else {
          for (k = (char*)&v17 + 3; (unsigned __int8)*(k - 3) != v3 ||
                                    (unsigned __int8)*(k - 2) != v4 ||
                                    (unsigned __int8)*(k - 1) != v6 || *k != 0;
               k += 8) {
            if (--v5 == 0) {
              return false;
            }
          }
        }
      }
      else {
        for (m = (char*)&v17 + 2; (unsigned __int8)*(m - 2) != v3 ||
                                  (unsigned __int8)*(m - 1) != v4 || *m != 0;
             m += 8) {
          if (--v5 == 0) {
            return false;
          }
        }
      }
      return true;
    }
    for (n = (char*)&v17 + 1; (unsigned __int8)*(n - 1) != v3 || *n != 0;
         n += 8) {
      if (--v5 == 0) {
        return false;
      }
    }
    return true;
  }
  else {
    if ((_BYTE)v17 == 0) {
      return true;
    }
    v9 = (unsigned int)(v2 - 1) + 1LL;
    v10 = (unsigned __int8*)v18;
    do {
      result = --v9 != 0;
      if (v9 == 0) {
        break;
      }
      v12 = *v10;
      v10 += 8;
    } while (v12 != 0);
  }
  return result;
}

#pragma GCC visibility pop
