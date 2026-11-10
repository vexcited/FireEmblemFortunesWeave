#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nandroid_RefBase_decStrong_plt(_QWORD, _QWORD);
__int64 nandroid_sp_report_race_plt(_QWORD);
__int64 nn_movie_detail_FreeMemory(__int64 result, _QWORD*);
extern __int64 SdkData_e88548;
void nn_movie_detail_AndroidMediaMuxer_Destroy_AndroidMediaMuxer_4da0a0(
    void* this_);

void nn_movie_detail_AndroidMediaMuxer_Destroy_AndroidMediaMuxer_4da0a0(
    void* this_)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)this_ = SdkData_e88548 + 16;
  v2 = (_QWORD*)((char*)this_ + 16);
  if (*((_QWORD*)this_ + 2) != 0) {
    v3 = *v2;
    v4 = nandroid_RefBase_decStrong_plt(*v2, v2);
    if (v3 != *v2) {
      nandroid_sp_report_race_plt(v4);
    }
    *v2 = 0;
  }
  v5 = *((_QWORD*)this_ + 4);
  *((_QWORD*)this_ + 5) = v5;
  if (v5 != 0) {
    nn_movie_detail_FreeMemory(v5, *((_QWORD**)this_ + 7));
    v6 = *((_QWORD*)this_ + 2);
    if (v6 != 0) {
      nandroid_RefBase_decStrong_plt(v6, v2);
    }
  }
}

#pragma GCC visibility pop
