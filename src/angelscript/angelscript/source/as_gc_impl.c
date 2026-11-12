#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 asCScriptEngine_CallObjectMethodRetInt(__int64, __int64, unsigned int);
__int64 asCString_Destroy_asCString(__int64 result);
__int64 asCString_Format(void*, const char*, ...);
__int64 asCString_asCString_25f460(__int64 result);
__int64 asCThreadCriticalSection_Enter(__int64);
__int64 asCThreadCriticalSection_Leave(__int64);
bool GameRoutine_2606c0(__int64, const char*);
__int64 asCGarbageCollector_ReportAndReleaseUndestroyedObjects(__int64 a1);

__int64 asCGarbageCollector_ReportAndReleaseUndestroyedObjects(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  const char* v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  const char* v15;
  int v17;

  if (*(_DWORD*)(a1 + 64) != 0) {
    v2 = 0;
    v3 = 0;
    while (1) {
      asCThreadCriticalSection_Enter(a1 + 296);
      v6 = *(_QWORD*)(a1 + 56) + v2;
      v7 = *(_QWORD*)v6;
      v8 = *(_QWORD*)(v6 + 8);
      v9 = *(_DWORD*)(v6 + 16);
      asCThreadCriticalSection_Leave(a1 + 296);
      v10 = *(unsigned int*)(v8 + 368);
      if ((_DWORD)v10 != 0 &&
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a1 + 1928LL) + 8 * v10) != 0) {
        v11 = asCScriptEngine_CallObjectMethodRetInt(*(_QWORD*)a1, v7, v10) - 1;
      }
      else {
        v11 = -1;
      }
      asCString_asCString_25f460((__int64)&v17);
      v13 = *(_DWORD*)(v8 + 8);
      v12 = v8 + 8;
      if (v13 >= 0xC) {
        v14 = *(_QWORD*)(v12 + 8);
      }
      else {
        v14 = v12 + 8;
      }
      asCString_Format(
          &v17,
          "Object {%d}. GC cannot destroy an object of type '%s' as it can't "
          "see all references. Current ref count is %d.",
          v9, v14, v11);
      (*(void (**)(void*))(**(_QWORD**)a1 + 56LL))((void*)*(_QWORD**)a1);
      if (GameRoutine_2606c0(v12, "$func")) {
        v4 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 104LL))(v7);
        v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
        asCString_Format(&v17,
                         "The function in previous message is named '%s'. The "
                         "func type is %d",
                         v4, v5);
      }
      else {
        if (!GameRoutine_2606c0(v12, "$obj")) {
          goto LABEL_5;
        }
        v15 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 48LL))(v7);
        asCString_Format(
            &v17, "The builtin type in previous message is named '%s'", v15);
      }
      (*(void (**)(void*))(**(_QWORD**)a1 + 56LL))((void*)*(_QWORD**)a1);
    LABEL_5:
      ++v3;
      asCString_Destroy_asCString((__int64)&v17);
      v2 += 24;
      if (v3 >= *(unsigned int*)(a1 + 64)) {
        return (unsigned int)v3;
      }
    }
  }
  LODWORD(v3) = 0;
  return (unsigned int)v3;
}

#pragma GCC visibility pop
