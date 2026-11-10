#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 strcmp_plt(void* this_, const char*, const char*);
extern _UNKNOWN SdkData_e82530;
extern char* SdkData_e82440;
__int64 std___1___get_classname(char* a1, char a2, const char* a3);

__int64 std___1___get_classname(char* a1, char a2, const char* a3)
{
  unsigned __int64 v3;
  char** v4;
  unsigned __int64 v7;
  void** v8;
  __int64 result;
  int v10;

  v3 = 15;
  v4 = &SdkData_e82440;
  do {
    v7 = v3 >> 1;
    v8 = (void**)&v4[2 * (v3 >> 1)];
    if ((strcmp_plt(*v8, a1, a3) & 0x80000000) != 0) {
      v4 = (char**)(v8 + 2);
      v7 = v3 + ~v7;
    }
    v3 = v7;
  } while (v7 != 0);
  if (v4 == (char**)&SdkData_e82530) {
    return 0;
  }
  if ((unsigned int)strcmp_plt((void*)a1, *v4, a3) != 0) {
    return 0;
  }
  v10 = *((unsigned __int16*)v4 + 4);
  if (v10 == 128) {
    result = 3968;
  }
  else {
    result = *((unsigned __int16*)v4 + 4);
  }
  if ((a2 & 1) != 0 && v10 != 128) {
    if ((v10 & 0x300) != 0) {
      return v10 | 0x400u;
    }
    else {
      return *((unsigned __int16*)v4 + 4);
    }
  }
  return result;
}

#pragma GCC visibility pop
