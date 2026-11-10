#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_UnitMakeSelectBody_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 UnitMakeSelectBody_Destructor(__int64 a1);
__int64 UnitMakeSelectBody_DeletingDestructor(__int64 a1);
__int64 GameRoutine_179ac50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_179af60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b3aee0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 game_g_frame_clock;
float GameRoutine_618640(_QWORD, float, float, float, float);
__int64 UnitMakeSelectBody_1799770(__int64 a1);
__int64 UnitMakeSelectBody_1799a80(__int64 a1);
__int64 UnitMakeSelectBody_179a240(__int64 a1);
__int64 UnitMakeSelectBody_179a4c0(__int64 a1);
void UnitMakeSelectBody_179a880(__int64 a1, __int64 a2);

__int64 UnitMakeSelectBody_1799770(__int64 a1)
{
  __int64 v1;
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  __int128 v8;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int128 v14;
  __int128 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int16 v19;
  __int64 v20;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v20 = a1;
    v10 = __cxa_guard_acquire(&GameData_21a6130);
    a1 = v20;
    if (v10 != 0) {
      v11 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v11;
      __cxa_guard_release(&GameData_21a6130);
      a1 = v20;
    }
  }
  v14 = GameData_21a6120;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v20 = a1;
    v12 = __cxa_guard_acquire(&GameData_21a6130);
    a1 = v20;
    if (v12 != 0) {
      v13 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v13;
      __cxa_guard_release(&GameData_21a6130);
      a1 = v20;
    }
  }
  v18 = 0;
  v1 = a1;
  v19 = 256;
  v15 = GameData_21a6120;
  *(_QWORD*)&v14 = 0x3F9C28F6BF000000LL;
  v17 = 0x4040000040266666LL;
  v2 = *(float*)GameData_212c190;
  v3 = *((float*)GameData_212c190 + 1);
  v4 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v5 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v6 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v7 =
      (float)((float)((float)-(
                          float)(v6 -
                                 (float)((float)(v5 +
                                                 (float)((float)-(
                                                             float)(v4 -
                                                                    (float)((float)(v3 -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            0x1.18bc460000000p+0f)) *
                                                                            0x1.18bc460000000p+0f)) *
                                                         0x1.18bc460000000p+0f)) *
                                         0x1.18bc460000000p+0f)) *
                      0x1.18bc460000000p+0f) +
              1.0f) *
      -0x1.0c15240000000p+0f;
  v16 = 0x42C80000C2700000LL;
  HIDWORD(v18) = 1103101952;
  v14 = 0x3F9C28F6BF000000uLL;
  *(_QWORD*)&v8 =
      COERCE_UNSIGNED_INT(
          (float)((float)(v7 * -0x1.a666660000000p+0f) +
                  -0x1.0000000000000p-1f) +
          (float)((float)((float)((float)((float)-(
                                              float)(v6 -
                                                     (float)((float)(v5 +
                                                                     (float)((float)-(
                                                                                 float)(v4 -
                                                                                        (float)((float)(v3 -
                                                                                                        (float)(v2 *
                                                                                                                0x1.18bc4e0000000p-2f)) *
                                                                                                0x1.18bc4e0000000p-2f)) *
                                                                             0x1.18bc4e0000000p-2f)) *
                                                             0x1.18bc4e0000000p-2f)) *
                                          0x1.18bc4e0000000p-2f) +
                                  1.0f) *
                          -0x1.0c15280000000p-1f) *
                  0x1.0a3d700000000p+0f)) |
      0x3FC6666600000000LL;
  *((_QWORD*)&v8 + 1) = COERCE_UNSIGNED_INT(
      (float)((float)((float)((float)((float)-(
                                          float)(*(float*)((char*)((
                                                               __int128*)0x10LL) +
                                                           (_QWORD)
                                                               GameData_212c188) -
                                                 (float)((float)(*(float*)((char*)((
                                                                               _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                               GameData_212c188 +
                                                                           4) +
                                                                 (float)((float)-(
                                                                             float)(*(float*)((char*)((
                                                                                                  _UNKNOWN**)0x8LL) +
                                                                                              (_QWORD)
                                                                                                  GameData_212c188) -
                                                                                    (float)((float)(*((float*)
                                                                                                          GameData_212c188 +
                                                                                                      1) -
                                                                                                    (float)(*(float*)
                                                                                                                GameData_212c188 *
                                                                                                            0x1.18bc460000000p+0f)) *
                                                                                            0x1.18bc460000000p+0f)) *
                                                                         0x1.18bc460000000p+0f)) *
                                                         0x1.18bc460000000p+0f)) *
                                      0x1.18bc460000000p+0f) +
                              1.0f) *
                      -0x1.a666660000000p+0f) +
              0.0f) -
      (float)((float)((float)((float)-(
                                  float)(*(float*)((char*)((__int128*)0x10LL) +
                                                   (_QWORD)GameData_212c188) -
                                         (float)((float)(*(float*)((char*)((
                                                                       _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                       GameData_212c188 +
                                                                   4) +
                                                         (float)((float)-(
                                                                     float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c188) -
                                                                            (float)((float)(*((float*)
                                                                                                  GameData_212c188 +
                                                                                              1) -
                                                                                            (float)(*(float*)
                                                                                                        GameData_212c188 *
                                                                                                    0x1.18bc4e0000000p-2f)) *
                                                                                    0x1.18bc4e0000000p-2f)) *
                                                                 0x1.18bc4e0000000p-2f)) *
                                                 0x1.18bc4e0000000p-2f)) *
                              0x1.18bc4e0000000p-2f) +
                      1.0f) *
              0x1.0a3d700000000p+0f));
  v15 = v8;
  GameRoutine_179ac50(a1, &v14, 5);
  return GameRoutine_179af60(v1, 1, (*(_BYTE*)(v1 + 188) & 1) == 0);
}

__int64 UnitMakeSelectBody_1799a80(__int64 a1)
{
  __int64 v1;
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  __int128 v8;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int128 v14;
  __int128 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int16 v19;
  __int64 v20;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v20 = a1;
    v10 = __cxa_guard_acquire(&GameData_21a6130);
    a1 = v20;
    if (v10 != 0) {
      v11 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v11;
      __cxa_guard_release(&GameData_21a6130);
      a1 = v20;
    }
  }
  v14 = GameData_21a6120;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v20 = a1;
    v12 = __cxa_guard_acquire(&GameData_21a6130);
    a1 = v20;
    if (v12 != 0) {
      v13 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v13;
      __cxa_guard_release(&GameData_21a6130);
      a1 = v20;
    }
  }
  v18 = 0;
  v1 = a1;
  v19 = 256;
  v15 = GameData_21a6120;
  *(_QWORD*)&v14 = 0x3F9E978D3F000000LL;
  v17 = 0x4040000040133333LL;
  v2 = *(float*)GameData_212c190;
  v3 = *((float*)GameData_212c190 + 1);
  v4 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v5 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v6 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v7 =
      (float)((float)((float)-(
                          float)(v6 -
                                 (float)((float)(v5 +
                                                 (float)((float)-(
                                                             float)(v4 -
                                                                    (float)((float)(v3 -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            0x1.ab079c0000000p+0f)) *
                                                                            0x1.ab079c0000000p+0f)) *
                                                         0x1.ab079c0000000p+0f)) *
                                         0x1.ab079c0000000p+0f)) *
                      0x1.ab079c0000000p+0f) +
              1.0f) *
      0x1.4aa29a0000000p+0f;
  v16 = 0x42C8000042940000LL;
  HIDWORD(v18) = 1103101952;
  v14 = 0x3F9E978D3F000000uLL;
  *(_QWORD*)&v8 =
      COERCE_UNSIGNED_INT(
          (float)((float)(v7 * -0x1.b333340000000p+0f) +
                  0x1.0000000000000p-1f) +
          (float)((float)((float)((float)((float)-(
                                              float)(v6 -
                                                     (float)((float)(v5 +
                                                                     (float)((float)-(
                                                                                 float)(v4 -
                                                                                        (float)((float)(v3 -
                                                                                                        (float)(v2 *
                                                                                                                0x1.3f6a1e0000000p-4f)) *
                                                                                                0x1.3f6a1e0000000p-4f)) *
                                                                             0x1.3f6a1e0000000p-4f)) *
                                                             0x1.3f6a1e0000000p-4f)) *
                                          0x1.3f6a1e0000000p-4f) +
                                  1.0f) *
                          -0x1.1df46a0000000p-2f) *
                  0x1.0a3d700000000p+0f)) |
      0x3FBD70A300000000LL;
  *((_QWORD*)&v8 + 1) = COERCE_UNSIGNED_INT(
      (float)((float)((float)((float)((float)-(
                                          float)(*(float*)((char*)((
                                                               __int128*)0x10LL) +
                                                           (_QWORD)
                                                               GameData_212c188) -
                                                 (float)((float)(*(float*)((char*)((
                                                                               _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                               GameData_212c188 +
                                                                           4) +
                                                                 (float)((float)-(
                                                                             float)(*(float*)((char*)((
                                                                                                  _UNKNOWN**)0x8LL) +
                                                                                              (_QWORD)
                                                                                                  GameData_212c188) -
                                                                                    (float)((float)(*((float*)
                                                                                                          GameData_212c188 +
                                                                                                      1) -
                                                                                                    (float)(*(float*)
                                                                                                                GameData_212c188 *
                                                                                                            0x1.ab079c0000000p+0f)) *
                                                                                            0x1.ab079c0000000p+0f)) *
                                                                         0x1.ab079c0000000p+0f)) *
                                                         0x1.ab079c0000000p+0f)) *
                                      0x1.ab079c0000000p+0f) +
                              1.0f) *
                      -0x1.b333340000000p+0f) +
              0.0f) +
      (float)((float)((float)((float)-(
                                  float)(*(float*)((char*)((__int128*)0x10LL) +
                                                   (_QWORD)GameData_212c188) -
                                         (float)((float)(*(float*)((char*)((
                                                                       _UNKNOWN**)0x8LL) +
                                                                   (_QWORD)
                                                                       GameData_212c188 +
                                                                   4) +
                                                         (float)((float)-(
                                                                     float)(*(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c188) -
                                                                            (float)((float)(*((float*)
                                                                                                  GameData_212c188 +
                                                                                              1) -
                                                                                            (float)(*(float*)
                                                                                                        GameData_212c188 *
                                                                                                    0x1.3f6a1e0000000p-4f)) *
                                                                                    0x1.3f6a1e0000000p-4f)) *
                                                                 0x1.3f6a1e0000000p-4f)) *
                                                 0x1.3f6a1e0000000p-4f)) *
                              0x1.3f6a1e0000000p-4f) +
                      1.0f) *
              0x1.0a3d700000000p+0f));
  v15 = v8;
  GameRoutine_179ac50(a1, &v14, 5);
  return GameRoutine_179af60(v1, 1, (*(_BYTE*)(v1 + 188) & 1) == 0);
}

__int64 UnitMakeSelectBody_179a240(__int64 a1)
{
  __int64 v1;
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  __int128 v14;
  __int128 v15;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int128 v21;
  __int128 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int16 v26;
  __int64 v27;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v27 = a1;
    v17 = __cxa_guard_acquire(&GameData_21a6130);
    a1 = v27;
    if (v17 != 0) {
      v18 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v18;
      __cxa_guard_release(&GameData_21a6130);
      a1 = v27;
    }
  }
  v21 = GameData_21a6120;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v27 = a1;
    v19 = __cxa_guard_acquire(&GameData_21a6130);
    a1 = v27;
    if (v19 != 0) {
      v20 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v20;
      __cxa_guard_release(&GameData_21a6130);
      a1 = v27;
    }
  }
  v1 = a1;
  *(_QWORD*)&v22 = 0x3F9C28F6BE99999ALL;
  *((_QWORD*)&v22 + 1) = *((_QWORD*)&GameData_21a6120 + 1);
  v2 = *(float*)GameData_212c190;
  v3 = *((float*)GameData_212c190 + 1);
  v4 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v5 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v6 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v7 =
      (float)((float)((float)-(
                          float)(v6 -
                                 (float)((float)(v5 +
                                                 (float)((float)-(
                                                             float)(v4 -
                                                                    (float)((float)(v3 -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            0x1.18bc460000000p+0f)) *
                                                                            0x1.18bc460000000p+0f)) *
                                                         0x1.18bc460000000p+0f)) *
                                         0x1.18bc460000000p+0f)) *
                      0x1.18bc460000000p+0f) +
              1.0f) *
      -0x1.0c15240000000p+0f;
  v25 = 1103101952;
  v8 = *(float*)GameData_212c188;
  v9 = *((float*)GameData_212c188 + 1);
  v10 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v11 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v12 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v13 =
      (float)((float)((float)((float)-(
                                  float)(v12 -
                                         (float)((float)(v11 +
                                                         (float)((float)-(
                                                                     float)(v10 -
                                                                            (float)((float)(v9 -
                                                                                            (float)(*(float*)
                                                                                                        GameData_212c188 *
                                                                                                    0x1.18bc460000000p+0f)) *
                                                                                    0x1.18bc460000000p+0f)) *
                                                                 0x1.18bc460000000p+0f)) *
                                                 0x1.18bc460000000p+0f)) *
                              0x1.18bc460000000p+0f) +
                      1.0f) *
              -0x1.a666660000000p+0f) +
      -0x1.1eb8520000000p-2f;
  *(_QWORD*)&v14 = 0x3F9C28F6BE99999ALL;
  *((_QWORD*)&v14 + 1) = 3197066281LL;
  v23 = 0x42C80000C2700000LL;
  v24 = 0x4026666640400000LL;
  DWORD1(v21) = 1069966950;
  v26 = 257;
  *(float*)&v21 =
      (float)((float)(v7 * -0x1.a666660000000p+0f) + -0x1.3333340000000p-2f) +
      (float)((float)((float)((float)((float)-(
                                          float)(v6 -
                                                 (float)((float)(v5 +
                                                                 (float)((float)-(
                                                                             float)(v4 -
                                                                                    (float)((float)(v3 -
                                                                                                    (float)(v2 *
                                                                                                            0x1.18bc4e0000000p-2f)) *
                                                                                            0x1.18bc4e0000000p-2f)) *
                                                                         0x1.18bc4e0000000p-2f)) *
                                                         0x1.18bc4e0000000p-2f)) *
                                      0x1.18bc4e0000000p-2f) +
                              1.0f) *
                      -0x1.0c15280000000p-1f) *
              0x1.0a3d700000000p+0f);
  *(_QWORD*)&v15 = v21;
  *((float*)&v15 + 2) =
      v13 -
      (float)((float)((float)((float)-(
                                  float)(v12 -
                                         (float)((float)(v11 +
                                                         (float)((float)-(
                                                                     float)(v10 -
                                                                            (float)((float)(v9 -
                                                                                            (float)(v8 *
                                                                                                    0x1.18bc4e0000000p-2f)) *
                                                                                    0x1.18bc4e0000000p-2f)) *
                                                                 0x1.18bc4e0000000p-2f)) *
                                                 0x1.18bc4e0000000p-2f)) *
                              0x1.18bc4e0000000p-2f) +
                      1.0f) *
              0x1.0a3d700000000p+0f);
  HIDWORD(v15) = 0;
  v21 = v15;
  v22 = v14;
  GameRoutine_179ac50(a1, &v21, 11);
  return GameRoutine_179af60(v1, 0, (*(_BYTE*)(v1 + 188) & 1) == 0);
}

__int64 UnitMakeSelectBody_179a4c0(__int64 a1)
{
  __int64 v1;
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  __int128 v14;
  __int128 v15;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int128 v23;
  __int128 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int16 v28;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v21 = a1;
    v17 = __cxa_guard_acquire(&GameData_21a6130);
    a1 = v21;
    if (v17 != 0) {
      v18 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v18;
      __cxa_guard_release(&GameData_21a6130);
      a1 = v21;
    }
  }
  v23 = GameData_21a6120;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v22 = a1;
    v19 = __cxa_guard_acquire(&GameData_21a6130);
    a1 = v22;
    if (v19 != 0) {
      v20 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v20;
      __cxa_guard_release(&GameData_21a6130);
      a1 = v22;
    }
  }
  v1 = a1;
  *(_QWORD*)&v24 = 0x3F9E978D3E99999ALL;
  *((_QWORD*)&v24 + 1) = *((_QWORD*)&GameData_21a6120 + 1);
  v2 = *(float*)GameData_212c190;
  v3 = *((float*)GameData_212c190 + 1);
  v4 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v5 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v6 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v7 =
      (float)((float)((float)-(
                          float)(v6 -
                                 (float)((float)(v5 +
                                                 (float)((float)-(
                                                             float)(v4 -
                                                                    (float)((float)(v3 -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            0x1.ab079c0000000p+0f)) *
                                                                            0x1.ab079c0000000p+0f)) *
                                                         0x1.ab079c0000000p+0f)) *
                                         0x1.ab079c0000000p+0f)) *
                      0x1.ab079c0000000p+0f) +
              1.0f) *
      0x1.4aa29a0000000p+0f;
  v27 = 1103101952;
  v28 = 1;
  v8 = *(float*)GameData_212c188;
  v9 = *((float*)GameData_212c188 + 1);
  v10 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v11 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v12 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  v13 =
      (float)((float)((float)((float)-(
                                  float)(v12 -
                                         (float)((float)(v11 +
                                                         (float)((float)-(
                                                                     float)(v10 -
                                                                            (float)((float)(v9 -
                                                                                            (float)(*(float*)
                                                                                                        GameData_212c188 *
                                                                                                    0x1.ab079c0000000p+0f)) *
                                                                                    0x1.ab079c0000000p+0f)) *
                                                                 0x1.ab079c0000000p+0f)) *
                                                 0x1.ab079c0000000p+0f)) *
                              0x1.ab079c0000000p+0f) +
                      1.0f) *
              -0x1.b333340000000p+0f) +
      0x1.eb851e0000000p-3f;
  *(_QWORD*)&v14 = 0x3F9E978D3E99999ALL;
  *((_QWORD*)&v14 + 1) = 1047904911;
  v25 = 0x42C8000042940000LL;
  v26 = 0x4013333340400000LL;
  DWORD1(v23) = 1069379747;
  *(float*)&v23 =
      (float)((float)(v7 * -0x1.b333340000000p+0f) + 0x1.3333340000000p-2f) +
      (float)((float)((float)((float)((float)-(
                                          float)(v6 -
                                                 (float)((float)(v5 +
                                                                 (float)((float)-(
                                                                             float)(v4 -
                                                                                    (float)((float)(v3 -
                                                                                                    (float)(v2 *
                                                                                                            0x1.3f6a1e0000000p-4f)) *
                                                                                            0x1.3f6a1e0000000p-4f)) *
                                                                         0x1.3f6a1e0000000p-4f)) *
                                                         0x1.3f6a1e0000000p-4f)) *
                                      0x1.3f6a1e0000000p-4f) +
                              1.0f) *
                      -0x1.1df46a0000000p-2f) *
              0x1.0a3d700000000p+0f);
  *(_QWORD*)&v15 = v23;
  *((float*)&v15 + 2) =
      v13 +
      (float)((float)((float)((float)-(
                                  float)(v12 -
                                         (float)((float)(v11 +
                                                         (float)((float)-(
                                                                     float)(v10 -
                                                                            (float)((float)(v9 -
                                                                                            (float)(v8 *
                                                                                                    0x1.3f6a1e0000000p-4f)) *
                                                                                    0x1.3f6a1e0000000p-4f)) *
                                                                 0x1.3f6a1e0000000p-4f)) *
                                                 0x1.3f6a1e0000000p-4f)) *
                              0x1.3f6a1e0000000p-4f) +
                      1.0f) *
              0x1.0a3d700000000p+0f);
  HIDWORD(v15) = 0;
  v23 = v15;
  v24 = v14;
  GameRoutine_179ac50(a1, &v23, 11);
  return GameRoutine_179af60(v1, 0, (*(_BYTE*)(v1 + 188) & 1) == 0);
}

__int64 UnitMakeSelectBody_Destructor(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)a1 = game_menu_UnitMakeSelectBody_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 UnitMakeSelectBody_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 176);
  *(_QWORD*)a1 = game_menu_UnitMakeSelectBody_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

void UnitMakeSelectBody_179a880(__int64 a1, __int64 a2)
{
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  unsigned int v9;
  __int128 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  bool v19;
  float v20;
  float v21;
  float v22;
  __int128 v23;
  long double v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  float v30;
  unsigned __int8* v31;
  unsigned int v32;
  float v33;
  float v34;
  float v35;

  if ((float)(*(float*)(a1 + 184) + 0x1.0aaaaa0000000p+4) <
      0x1.4000000000000p+7) {
    v4 = *(float*)(a1 + 184) + 0x1.0aaaaa0000000p+4;
  }
  else {
    v4 = 0x1.4000000000000p+7;
  }
  *(float*)(a1 + 184) = v4;
  v5 = GameRoutine_618640(5, *(float*)(a2 + 36), *(float*)(a2 + 40), v4,
                          0x1.4000000000000p+7);
  v6 = GameRoutine_618640(5, *(float*)(a2 + 44), *(float*)(a2 + 48),
                          *(float*)(a1 + 184), 0x1.4000000000000p+7);
  v34 = GameRoutine_618640(5, *(float*)(a2 + 12), *(float*)(a2 + 20),
                           *(float*)(a1 + 184), 0x1.4000000000000p+7);
  v7 = 0x1.3851ec0000000p+0;
  if (*(_BYTE*)a2 != 0) {
    v8 = 0x1.3d2f1a0000000p+0;
  }
  else {
    v8 = 0x1.3851ec0000000p+0;
  }
  if (*(_BYTE*)a2 == 0) {
    v7 = 0x1.3d2f1a0000000p+0;
  }
  v35 =
      GameRoutine_618640(5, v8, v7, *(float*)(a1 + 184), 0x1.4000000000000p+7);
  *(float*)&v9 = GameRoutine_618640(5, *(float*)(a2 + 16), *(float*)(a2 + 24),
                                    *(float*)(a1 + 184), 0x1.4000000000000p+7);
  *(_QWORD*)&v10 = __PAIR64__(LODWORD(v35), LODWORD(v34));
  v33 = *(float*)&v9;
  *((_QWORD*)&v10 + 1) = v9;
  *(_OWORD*)(*(_QWORD*)(a1 + 168) + 32LL) = v10;
  v11 = GameRoutine_618640(5, *(float*)(a2 + 4), *(float*)(a2 + 8),
                           *(float*)(a1 + 184), 0x1.4000000000000p+7);
  v12 = (float)(v11 * 0x1.1df46a0000000p-6) +
        (float)(roundf((float)(v11 * 0x1.1df46a0000000p-6) *
                       0x1.45f3060000000p-3) *
                -0x1.921fb60000000p+2);
  if (v12 <= 0x1.921fb60000000p+0) {
    v14 = v12;
    if (v12 >= -0x1.921fb60000000p+0) {
      goto LABEL_14;
    }
    v13 = -0x1.921fb60000000p+1;
  }
  else {
    v13 = 0x1.921fb60000000p+1;
  }
  v14 = v13 - v12;
LABEL_14:
  v15 =
      v34 +
      (float)((float)(v14 *
                      (float)((float)((float)-(
                                          float)(*(float*)((char*)((
                                                               __int128*)0x10LL) +
                                                           (_QWORD)
                                                               GameData_212c190) -
                                                 (float)((float)(*(float*)((char*)((
                                                                               _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                               GameData_212c190 +
                                                                           4) +
                                                                 (float)((float)-(
                                                                             float)(*(float*)((char*)((
                                                                                                  _UNKNOWN**)0x8LL) +
                                                                                              (_QWORD)
                                                                                                  GameData_212c190) -
                                                                                    (float)((float)(*((float*)
                                                                                                          GameData_212c190 +
                                                                                                      1) -
                                                                                                    (float)(*(float*)
                                                                                                                GameData_212c190 *
                                                                                                            (float)(v14 *
                                                                                                                    v14))) *
                                                                                            (float)(v14 *
                                                                                                    v14))) *
                                                                         (float)(v14 *
                                                                                 v14))) *
                                                         (float)(v14 * v14))) *
                                      (float)(v14 * v14)) +
                              1.0)) *
              v5);
  if (v12 < -0x1.921fb60000000p+0) {
    v16 = -1.0;
  }
  else {
    v16 = 1.0;
  }
  v17 = -0x1.921fb60000000p+1 - v12;
  if (v12 >= -0x1.921fb60000000p+0) {
    v17 = v12;
  }
  v18 = 0x1.921fb60000000p+1 - v12;
  v19 = v12 <= 0x1.921fb60000000p+0;
  if (v12 > 0x1.921fb60000000p+0) {
    v20 = -1.0;
  }
  else {
    v20 = v16;
  }
  if (v19) {
    v21 = v17;
  }
  else {
    v21 = v18;
  }
  v22 = v21 * v21;
  *(float*)&v23 = v15;
  *((float*)&v23 + 1) = v6 + v35;
  *((_QWORD*)&v23 + 1) = COERCE_UNSIGNED_INT(
      v33 +
      (float)((float)(v20 *
                      (float)((float)((float)-(
                                          float)(*(float*)((char*)((
                                                               __int128*)0x10LL) +
                                                           (_QWORD)
                                                               GameData_212c188) -
                                                 (float)((float)(*(float*)((char*)((
                                                                               _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                               GameData_212c188 +
                                                                           4) +
                                                                 (float)((float)-(
                                                                             float)(*(float*)((char*)((
                                                                                                  _UNKNOWN**)0x8LL) +
                                                                                              (_QWORD)
                                                                                                  GameData_212c188) -
                                                                                    (float)((float)(*((float*)
                                                                                                          GameData_212c188 +
                                                                                                      1) -
                                                                                                    (float)(*(float*)
                                                                                                                GameData_212c188 *
                                                                                                            v22)) *
                                                                                            v22)) *
                                                                         v22)) *
                                                         v22)) *
                                      v22) +
                              1.0)) *
              v5));
  *(_OWORD*)(*(_QWORD*)(a1 + 168) + 16LL) = v23;
  GameRoutine_b3aee0(*(_QWORD*)(a1 + 168));
  v25 = *(_QWORD*)(game_g_frame_clock + 13224);
  v27 = *(_QWORD*)(v25 + 48);
  v26 = *(_QWORD*)(v25 + 56);
  if (v26 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                              memory_order_relaxed);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      *(__n128*)&v24 = std___1___shared_weak_count___release_weak_alt1();
    }
    v28 = *(_QWORD*)(*(_QWORD*)(v27 + 8) + 224LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v26 + 16LL))(v26, v24);
      std___1___shared_weak_count___release_weak_alt1();
    }
  }
  else {
    v28 = *(_QWORD*)(*(_QWORD*)(v27 + 8) + 224LL);
  }
  v29 = *(_DWORD*)(v28 + 576);
  *(_BYTE*)(v28 + 544) = 1;
  *(_DWORD*)(v28 + 540) = v29;
  v30 = GameRoutine_618640(5, *(float*)(a2 + 28), *(float*)(a2 + 32),
                           *(float*)(a1 + 184), 0x1.4000000000000p+7);
  if (*(_BYTE*)(v28 + 544) == 1) {
    *(float*)(v28 + 540) = v30;
    *(_BYTE*)(v28 + 544) = 1;
  }
  if (*(float*)(a1 + 184) >= 0x1.4000000000000p+7) {
    v31 = *(unsigned __int8**)(a1 + 16);
    if (v31 != nullptr) {
      v32 = *v31;
      if (v32 <= 0x10 && ((1 << v32) & 0x1CE00) != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
}

#pragma GCC visibility pop
