#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 mkvparser_Block_GetTime_plt(__int64, __int64);
__int64 mkvparser_Block_IsKey_plt(__int64);
__int64 mkvparser_Cluster_AddRef_plt(void);
__int64 mkvparser_Cluster_DecRef_plt(void);
__int64 mkvparser_Cluster_EOS_plt(__int64);
__int64 mkvparser_CuePoint_Find_plt(__int64, __int64);
__int64 mkvparser_CuePoint_GetTime_plt(__int64, __int64);
__int64 mkvparser_Cues_DoneParsing_plt(__int64);
__int64 mkvparser_Cues_Find_plt(__int64, __int64, __int64, __int64, __int64);
__int64 mkvparser_Cues_GetLast_plt(__int64);
__int64 mkvparser_Cues_LoadCuePoint_plt(__int64);
__int64 mkvparser_SeekHead_GetCount_plt(__int64);
__int64 mkvparser_SeekHead_GetEntry_plt(__int64, int);
__int64 mkvparser_Segment_FindOrPreloadCluster_plt(__int64, __int64, bool);
__int64 mkvparser_Segment_GetCues_plt(__int64);
__int64 mkvparser_Segment_GetSeekHead_plt(__int64);
__int64 mkvparser_Segment_GetTracks_plt(__int64);
__int64 mkvparser_Segment_ParseCues_plt(__int64, __int64, __int64, __int64);
__int64 mkvparser_Track_GetType_plt(__int64);
__int64 mkvparser_Tracks_GetTrackByIndex_plt(__int64, unsigned __int64);
__int64 mkvparser_Tracks_GetTrackByNumber_plt(__int64, __int64);
__int64 mkvparser_Tracks_GetTracksCount_plt(__int64);
__int64 nandroid_BlockIterator_advance_l_plt(__int64);
__int64 nandroid_BlockIterator_seekwithoutcue_l_plt(__int64, __int64, __int64);
__int64 nandroid_MatroskaExtractor_TrackInfo_find_plt(__int64, __int64);
__int64 nandroid_VectorImpl_editItemLocation_plt(__int64, unsigned __int64);
__int64 nandroid_VectorImpl_insertAt_plt(__int64, __int64, unsigned __int64,
                                         unsigned __int64);
__int64 nn_os_LockMutex_plt(__int64);
__int64 nn_os_UnlockMutex_plt(__int64);
__int64 nandroid_extractors_mkv_4e1180(void* this_, __int64 a2, char a3,
                                       __int64* a4);

__int64 nandroid_extractors_mkv_4e1180(void* this_, __int64 a2, char a3,
                                       __int64* a4)
{
  __int64 v4;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 i;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  bool v39;
  __int64 v40;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  v4 = *(_QWORD*)this_;
  nn_os_LockMutex_plt(*(_QWORD*)this_ + 8LL);
  *a4 = -1;
  if ((unsigned __int64)(a2 - 0x20C49BA5E353F8LL) < 0xFFBE76C8B4395811LL) {
    goto LABEL_4;
  }
  v9 = *(_QWORD*)(*(_QWORD*)this_ + 112LL);
  if (v9 < 1) {
    v10 = 1000 * a2;
    if (v9 != 0 && v10 > v9 + 0x7FFFFFFFFFFFFFFFLL) {
      goto LABEL_4;
    }
  }
  else {
    v10 = 1000 * a2;
    if (1000 * a2 < (__int64)(v9 | 0x8000000000000000LL)) {
    LABEL_4:
      v11 = -10004;
      goto LABEL_55;
    }
  }
  v47 = a3;
  v13 = *(_QWORD*)(*(_QWORD*)this_ + 96LL);
  v14 = mkvparser_Segment_GetCues_plt(v13);
  v48 = v13;
  v15 = mkvparser_Segment_GetSeekHead_plt(v13);
  v16 = v15;
  if (v14 != 0 || v15 == 0) {
    if (v15 == 0) {
    LABEL_54:
      nandroid_BlockIterator_seekwithoutcue_l_plt((__int64)this_, a2,
                                                  (__int64)a4);
      v11 = 0;
      goto LABEL_55;
    }
  }
  else {
    v18 = mkvparser_SeekHead_GetCount_plt(v15);
    if (v18 == 0) {
      goto LABEL_54;
    }
    v19 = 0;
    v20 = v18;
    while (1) {
      v21 = (_QWORD*)mkvparser_SeekHead_GetEntry_plt(v16, v19);
      if (*v21 == 475249515) {
        break;
      }
      if (v20 == ++v19) {
        goto LABEL_54;
      }
    }
    v22 = v21[1];
    v50 = 0;
    v51 = 0;
    mkvparser_Segment_ParseCues_plt(v48, v22, (__int64)&v50, (__int64)&v51);
    v23 = mkvparser_Segment_GetCues_plt(v48);
    if (v23 == 0) {
      goto LABEL_54;
    }
    v14 = v23;
  }
  v51 = 0;
  v49 = (v10 - v9) & ~((v10 - v9) >> 63);
  v24 = mkvparser_Segment_GetTracks_plt(v48);
  while ((mkvparser_Cues_DoneParsing_plt(v14) & 1) == 0 &&
         (mkvparser_Cues_LoadCuePoint_plt(v14) & 1) != 0) {
    v25 = mkvparser_Cues_GetLast_plt(v14);
    v51 = v25;
    if (v25 != 0) {
      v26 = *(_QWORD*)(*(_QWORD*)this_ + 56LL);
      if (v26 != 0) {
        for (i = 0; i != v26; ++i) {
          v28 = nandroid_VectorImpl_editItemLocation_plt(*(_QWORD*)this_ + 40LL,
                                                         i);
          v29 = mkvparser_Tracks_GetTrackByNumber_plt(v24, *(_QWORD*)v28);
          if (v29 != 0) {
            v30 = v29;
            if (mkvparser_Track_GetType_plt(v29) == 1 &&
                mkvparser_CuePoint_Find_plt(v51, v30) != 0) {
              nandroid_VectorImpl_insertAt_plt(v28 + 32, (__int64)&v51,
                                               *(_QWORD*)(v28 + 48), 1u);
            }
          }
        }
        v25 = v51;
      }
      if (mkvparser_CuePoint_GetTime_plt(v25, v48) >= v49) {
        break;
      }
    }
  }
  v31 = *((_QWORD*)this_ + 1);
  v50 = 0;
  v46 = mkvparser_Tracks_GetTrackByNumber_plt(v24, v31);
  if (mkvparser_Track_GetType_plt(v46) == 1) {
    v32 = nandroid_VectorImpl_editItemLocation_plt(*(_QWORD*)this_ + 40LL,
                                                   *((_QWORD*)this_ + 2));
    v50 = nandroid_MatroskaExtractor_TrackInfo_find_plt(v32, v49);
    if (v50 == 0) {
      goto LABEL_54;
    }
  }
  else {
    v33 = mkvparser_Tracks_GetTracksCount_plt(v24);
    if (v33 == 0) {
      goto LABEL_54;
    }
    v34 = 1;
    v35 = v33;
    v36 = 0;
    v37 = mkvparser_Tracks_GetTrackByIndex_plt(v24, 0);
    if (v37 != 0) {
      goto LABEL_44;
    }
    while (v34 < v35) {
      ++v36;
      v37 = mkvparser_Tracks_GetTrackByIndex_plt(v24, v34++);
      if (v37 != 0) {
      LABEL_44:
        v38 = v37;
        if (mkvparser_Track_GetType_plt(v37) == 1 &&
            (mkvparser_Cues_Find_plt(v14, v49, v38, (__int64)&v51,
                                     (__int64)&v50) &
             1) != 0) {
          break;
        }
      }
    }
    if (v50 == 0) {
      goto LABEL_54;
    }
  }
  if (*((_QWORD*)this_ + 3) != 0) {
    mkvparser_Cluster_DecRef_plt();
  }
  v39 = mkvparser_Track_GetType_plt(v46) == 1;
  *((_QWORD*)this_ + 3) =
      mkvparser_Segment_FindOrPreloadCluster_plt(v48, *(_QWORD*)(v50 + 8), v39);
  mkvparser_Cluster_AddRef_plt();
  v40 = *((_QWORD*)this_ + 3);
  *((_QWORD*)this_ + 4) = 0;
  *((_QWORD*)this_ + 5) = 0;
  if (v40 == 0) {
  LABEL_53:
    v11 = -10001;
    goto LABEL_55;
  }
  if ((mkvparser_Cluster_EOS_plt(v40) & 1) != 0) {
    mkvparser_Cluster_EOS_plt(*((_QWORD*)this_ + 3));
    goto LABEL_53;
  }
  *((_QWORD*)this_ + 5) = *(_QWORD*)(v50 + 16) - 1LL;
  v11 = nandroid_BlockIterator_advance_l_plt((__int64)this_);
  v42 = *((_QWORD*)this_ + 3);
  if (v42 != 0) {
    while ((mkvparser_Cluster_EOS_plt(v42) & 1) == 0 && v11 == 0 &&
           *((_QWORD*)this_ + 4) != 0) {
      if ((v47 & 1) != 0 ||
          (mkvparser_Cluster_EOS_plt(*((_QWORD*)this_ + 3)),
           v43 = (*(__int64 (**)(_QWORD))(**((_QWORD**)this_ + 4) + 16LL))(
               *((_QWORD*)this_ + 4)),
           (mkvparser_Block_IsKey_plt(v43) & 1) != 0)) {
        mkvparser_Cluster_EOS_plt(*((_QWORD*)this_ + 3));
        v44 = (*(__int64 (**)(_QWORD))(**((_QWORD**)this_ + 4) + 16LL))(
            *((_QWORD*)this_ + 4));
        v45 = (mkvparser_Block_GetTime_plt(v44, *((_QWORD*)this_ + 3)) + 500) /
              1000;
        if (mkvparser_Track_GetType_plt(v46) == 1 || v45 >= a2) {
          v11 = 0;
          *a4 = v45;
          break;
        }
      }
      v11 = nandroid_BlockIterator_advance_l_plt((__int64)this_);
      v42 = *((_QWORD*)this_ + 3);
      if (v42 == 0) {
        break;
      }
    }
  }
LABEL_55:
  nn_os_UnlockMutex_plt(v4 + 8);
  return v11;
}

#pragma GCC visibility pop
