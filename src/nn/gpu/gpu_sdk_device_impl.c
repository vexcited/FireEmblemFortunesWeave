#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

unsigned __int64 gpu_sdk_device_467210(unsigned __int8* a1);

unsigned __int64 gpu_sdk_device_467210(unsigned __int8* a1)
{
  int v1;
  unsigned __int8* v2;
  char v4;
  unsigned __int8 v5;
  unsigned __int8 v6;
  unsigned __int8 v7;
  unsigned __int8 v8;
  unsigned __int8 v9;
  unsigned __int8 v10;
  unsigned __int8 v11;
  unsigned __int8 v12;

  v1 = *a1;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  v6 = 0;
  v5 = 0;
  if (v1 != 0) {
    v12 = v1;
    if (a1[1] != 0) {
      v11 = a1[1];
      if (a1[2] != 0) {
        v10 = a1[2];
        if (a1[3] != 0) {
          v9 = a1[3];
          if (a1[4] != 0) {
            v8 = a1[4];
            if (a1[5] != 0) {
              v7 = a1[5];
              if (a1[6] != 0) {
                v6 = a1[6];
                if (a1[7] != 0) {
                  v5 = a1[7];
                  v2 = (unsigned __int8*)&v4;
                }
                else {
                  v2 = &v5;
                }
              }
              else {
                v2 = &v6;
              }
            }
            else {
              v2 = &v7;
            }
          }
          else {
            v2 = &v8;
          }
        }
        else {
          v2 = &v9;
        }
      }
      else {
        v2 = &v10;
      }
    }
    else {
      v2 = &v11;
    }
  }
  else {
    v2 = &v12;
  }
  *v2 = 0;
  return ((unsigned __int64)v6 << 48) | ((unsigned __int64)v5 << 56) |
         ((unsigned __int64)v7 << 40) | ((unsigned __int64)v8 << 32) |
         ((unsigned __int64)v9 << 24) | ((unsigned __int64)v10 << 16) |
         ((unsigned __int64)v11 << 8) | v12;
}

#pragma GCC visibility pop
