#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 asCScriptEngine_RegisterBehaviourToObjectType(__int64*, __int64*, int,
                                                      __int64, __int64,
                                                      unsigned int, __int64,
                                                      int, char);
__int64 asCScriptEngine_RegisterMethodToObjectType(__int64, __int64, __int64,
                                                   __int64, unsigned int,
                                                   __int64, int, char);
extern __int64 (*ScriptObject_Assignment_ptr[6])();
extern __int64 (*ScriptObject_Construct_ptr)();
extern __int64 (*asCScriptObject_EnumReferences_ptr[2])();
extern __int64 (*asCScriptObject_GetRefCount_ptr[5])();
extern __int64 (*asCScriptObject_ReleaseAllHandles_ptr)();
extern __int64 (*asCScriptObject_SetFlag_ptr[4])();
extern __int64 (*rcContext_doLog_ptr[3])();
unsigned int* GameRoutine_25f940(unsigned int*, __int64);
__int64 RegisterScriptObject(__int64 a1);

__int64 RegisterScriptObject(__int64 a1)
{
  struct {
    __int64 (*v3)();
    __int64 v4;
    __int64 v5;
    char v6;
    char gap33_[7];
    char v7;
  } v3_;

  *(_QWORD*)(a1 + 192) = a1;
  *(_DWORD*)(a1 + 168) = 2097157;
  GameRoutine_25f940((unsigned int*)(a1 + 128), (__int64)"$obj");
  v3_.v6 = 0;
  v3_.v5 = 0;
  v3_.v7 = 2;
  v3_.v3 = ScriptObject_Construct_ptr;
  v3_.v4 = 0;
  asCScriptEngine_RegisterBehaviourToObjectType(
      (__int64*)a1, (__int64*)(a1 + 120), 0, (__int64)"void f(int&in)",
      (__int64)&v3_.v3, 4u, 0, 0, 0);
  v3_.v6 = 0;
  v3_.v3 = nullptr;
  v3_.v7 = 3;
  v3_.v4 = 1;
  v3_.v5 = 0;
  asCScriptEngine_RegisterBehaviourToObjectType(
      (__int64*)a1, (__int64*)(a1 + 120), 5, (__int64)"void f()",
      (__int64)&v3_.v3, 3u, 0, 0, 0);
  v3_.v6 = 0;
  v3_.v4 = 1;
  v3_.v5 = 0;
  v3_.v7 = 3;
  v3_.v3 = (__int64 (*)())((_UNKNOWN**)0x8LL);
  asCScriptEngine_RegisterBehaviourToObjectType(
      (__int64*)a1, (__int64*)(a1 + 120), 6, (__int64)"void f()",
      (__int64)&v3_.v3, 3u, 0, 0, 0);
  v3_.v6 = 0;
  v3_.v5 = 0;
  v3_.v7 = 2;
  v3_.v3 = ScriptObject_Assignment_ptr[0];
  v3_.v4 = 0;
  asCScriptEngine_RegisterMethodToObjectType(a1, a1 + 120,
                                             (__int64)"int &opAssign(int &in)",
                                             (__int64)&v3_.v3, 4u, 0, 0, 0);
  v3_.v6 = 0;
  v3_.v4 = 1;
  v3_.v5 = 0;
  v3_.v7 = 3;
  v3_.v3 = (__int64 (*)())((__int128*)0x10LL);
  asCScriptEngine_RegisterBehaviourToObjectType(
      (__int64*)a1, (__int64*)(a1 + 120), 7, (__int64)"int &f()",
      (__int64)&v3_.v3, 3u, 0, 0, 0);
  v3_.v6 = 0;
  v3_.v5 = 0;
  v3_.v7 = 3;
  v3_.v3 = asCScriptObject_GetRefCount_ptr[0];
  v3_.v4 = 0;
  asCScriptEngine_RegisterBehaviourToObjectType(
      (__int64*)a1, (__int64*)(a1 + 120), 9, (__int64)"int f()",
      (__int64)&v3_.v3, 3u, 0, 0, 0);
  v3_.v6 = 0;
  v3_.v5 = 0;
  v3_.v7 = 3;
  v3_.v3 = asCScriptObject_SetFlag_ptr[0];
  v3_.v4 = 0;
  asCScriptEngine_RegisterBehaviourToObjectType(
      (__int64*)a1, (__int64*)(a1 + 120), 10, (__int64)"void f()",
      (__int64)&v3_.v3, 3u, 0, 0, 0);
  v3_.v6 = 0;
  v3_.v5 = 0;
  v3_.v7 = 3;
  v3_.v3 = rcContext_doLog_ptr[0];
  v3_.v4 = 0;
  asCScriptEngine_RegisterBehaviourToObjectType(
      (__int64*)a1, (__int64*)(a1 + 120), 11, (__int64)"bool f()",
      (__int64)&v3_.v3, 3u, 0, 0, 0);
  v3_.v6 = 0;
  v3_.v5 = 0;
  v3_.v7 = 3;
  v3_.v3 = asCScriptObject_EnumReferences_ptr[0];
  v3_.v4 = 0;
  asCScriptEngine_RegisterBehaviourToObjectType(
      (__int64*)a1, (__int64*)(a1 + 120), 12, (__int64)"void f(int&in)",
      (__int64)&v3_.v3, 3u, 0, 0, 0);
  v3_.v6 = 0;
  v3_.v5 = 0;
  v3_.v7 = 3;
  v3_.v3 = asCScriptObject_ReleaseAllHandles_ptr;
  v3_.v4 = 0;
  return asCScriptEngine_RegisterBehaviourToObjectType(
      (__int64*)a1, (__int64*)(a1 + 120), 13, (__int64)"void f(int&in)",
      (__int64)&v3_.v3, 3u, 0, 0, 0);
}

#pragma GCC visibility pop
