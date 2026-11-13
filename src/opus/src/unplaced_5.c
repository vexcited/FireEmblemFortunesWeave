#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 celt_decode_with_ec(int*, unsigned __int8*, unsigned int, __int16*, int,
                            _QWORD*, int);
__int64 celt_exp2(__int16);
__int64 ec_dec_init(__int64 result, unsigned __int8*, unsigned int);
__int64 ec_dec_uint(__int64*, unsigned int);
__int64 memset_plt(__int64, int, unsigned __int64);
__int64 opus_custom_decoder_ctl(_DWORD*, int, ...);
__int64 opus_decoder_310780(__int64 result, __int64, __int64, int, unsigned int,
                            __int16*, int);
__int64 silk_Decode(unsigned int*, int*, unsigned int, int, __int64, __int64,
                    int*, unsigned int);
__int64 silk_InitDecoder(__int64);
bool ec_dec_bit_logp(__int64*, char);
__int64 opus_src_30f260(int* a1, unsigned __int8* a2, signed int a3,
                        __int16* a4, int a5, int a6);

__int64 opus_src_30f260(int* a1, unsigned __int8* a2, signed int a3,
                        __int16* a4, int a5, int a6)
{
  int v6;
  int v7;
  int v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  int v13;
  int v14;
  __int16* v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  _BOOL4 v25;
  _BOOL4 v26;
  int v27;
  _BOOL4 v28;
  unsigned int v29;
  int v30;
  int v31;
  bool v32;
  __int64 v33;
  int v34;
  _BOOL4 v35;
  int v36;
  __int16* v37;
  int v38;
  _BOOL4 v39;
  int v40;
  unsigned __int64 v41;
  __int16* v42;
  int v43;
  int v44;
  unsigned __int64 v45;
  int v46;
  bool v47;
  __int16* v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  unsigned int v55;
  int v56;
  __int64 v57;
  __int64 v58;
  int v59;
  unsigned int v60;
  signed int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  unsigned int v66;
  int v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  int v70;
  __int16* v71;
  int v72;
  __int64 v73;
  unsigned __int64 v74;
  __int16* v75;
  int v76;
  _BOOL4 v77;
  int v78;
  _BOOL4 v79;
  int v80;
  int v81;
  signed int v82;
  int v83;
  unsigned int v84;
  __int16* v85;
  __int64 v86;
  int v87;
  _BOOL4 v88;
  signed int v89;
  int v90;
  int v91;
  int v92;
  signed int v93;
  int v94;
  int v95;
  unsigned __int8* v96;
  __int64 v97;
  __int64 v98;
  int v99;
  __int16* v100;
  signed int v101;
  unsigned int v102;
  signed int v103;
  int v104;
  int v105;
  int v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  int v115;
  int v116;
  __int64 v117;
  unsigned int v118;
  int v119;
  int v120;
  __int64 v121;
  __int64 v122;
  _DWORD* v123;
  __int64 v124;
  int v125;
  int v126;
  int v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  int v131;
  int v132;
  int v133;
  __int64 v134;
  __int64 v135;
  unsigned __int64 v136;
  int v137;
  _BOOL4 v138;
  struct {
    _BOOL8 v139;
    int v140;
    int v141;
    __int16* v142;
    int v143;
    int v144;
    __int16* v145;
    int v146;
    signed int v147;
    __int64 v148;
    unsigned __int8* v149;
    char gap64_[4];
    _BYTE v150[12];
    _BOOL4 v151;
    _BOOL4 v152;
  } v139_;
  __int64 v153;
  struct {
    int v154;
    int v155;
  } v154_;
  struct {
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
    __int64 v162;
  } v156_;
  char v163;

  {
    v6 = a1[3];
    __asm__ volatile("" ::"r"(v6));
  }
  v154_.v154 = 0;
  v7 = v6 / 50;
  v8 = (v6 / 50) >> 3;
  if (a5 < v8) {
    return 4294967294LL;
  }
  {
    v10 = *a1;
    __asm__ volatile("" ::"r"(v10));
  }
  {
    v11 = a1[1];
    __asm__ volatile("" ::"r"(v11));
  }
  v13 = v7 >> 1;
  v14 = v7 >> 2;
  v16 = a4;
  v156_.v161 = 0;
  v156_.v162 = 0;
  v156_.v159 = 0;
  v156_.v160 = 0;
  v156_.v157 = 0;
  v156_.v158 = 0;
  v156_.v156 = 0;
  v154_.v155 = 0;
  v17 = 3 * (v6 / 25);
  if (a5 >= v17) {
    result = (unsigned int)v17;
  }
  else {
    result = (unsigned int)a5;
  }
  if (a3 > 1) {
    if (a2 != nullptr) {
      {
        v19 = a1[13];
        __asm__ volatile("" ::"r"(v19));
      }
      {
        v20 = a1[14];
        __asm__ volatile("" ::"r"(v20));
      }
      {
        v21 = a1[16];
        __asm__ volatile("" ::"r"(v21));
      }
      v139_.v148 = v10;
      v139_.v149 = a2;
      v22 = result;
      v139_.v146 = v8;
      v139_.v147 = a3;
      *(_DWORD*)&v139_.v150[8] = v19;
      ec_dec_init((__int64)&v156_.v156, a2, a3);
      {
        v23 = a1[15];
        __asm__ volatile("" ::"r"(v23));
      }
      v24 = v20;
      LODWORD(result) = v22;
      v25 = v22 >= v13;
      v26 = v24 != 1002 && v22 >= v13;
      if (v23 < 1) {
        v14 = v7 >> 2;
        v10 = v139_.v148;
        v139_.v151 = v24 != 1002;
        v27 = 0;
        v35 = v26;
        *(_DWORD*)v139_.v150 = 1;
        *(_DWORD*)&v139_.v150[4] = 0;
        v28 = v26;
      }
      else {
        v139_.v152 = v26;
        if (v24 == 1002 && v23 != 1002) {
          if (a1[17] == 0) {
            {
              v40 = a1[2];
              __asm__ volatile("" ::"r"(v40));
            }
            v139_.v143 = v7 >> 2;
            v41 = 2LL * v40 * (v7 >> 2);
            v42 = (__int16*)((char*)&v139_.v139 -
                             ((v41 + 15) & 0xFFFFFFFFFFFFFFF0LL));
            memset_plt((__int64)v42, 0, v41);
            if (v139_.v143 >= v21) {
              v43 = v21;
            }
            else {
              v43 = v139_.v143;
            }
            opus_src_30f260(a1, nullptr, 0, v42, v43, 0);
            v37 = v42;
            v44 = v22;
            v14 = v139_.v143;
            v10 = v139_.v148;
            v24 = 1002;
            v39 = true;
            v27 = 1;
            v139_.v151 = false;
            *(_DWORD*)v139_.v150 = 1;
            *(_DWORD*)&v139_.v150[4] = 0;
            v38 = v139_.v152;
            if (v21 > v44) {
              return 0xFFFFFFFFLL;
            }
            goto LABEL_60;
          }
          v14 = v7 >> 2;
          v10 = v139_.v148;
          v139_.v151 = false;
          v27 = 0;
          v24 = 1002;
          *(_DWORD*)v139_.v150 = 1;
          *(_DWORD*)&v139_.v150[4] = 0;
          v28 = v139_.v152;
          goto LABEL_48;
        }
        v14 = v7 >> 2;
        if (v24 != 1002) {
          v10 = v139_.v148;
          if (v23 == 1002) {
            v27 = 1;
            {
              v36 = a1[2] * v14;
              __asm__ volatile("" ::"r"(v36));
            }
            v139_.v151 = true;
            v28 = v139_.v152;
            *(_DWORD*)v139_.v150 = 1;
            *(_DWORD*)&v139_.v150[4] = v36;
          }
          else {
            v27 = 0;
            v139_.v151 = true;
            v28 = v139_.v152;
            *(_QWORD*)v139_.v150 = 1;
          }
        LABEL_48:
          v35 = v28;
          goto LABEL_54;
        }
        v10 = v139_.v148;
        v35 = false;
        v139_.v151 = false;
        v27 = 0;
        *(_DWORD*)v139_.v150 = 1;
        *(_DWORD*)&v139_.v150[4] = 0;
        v28 = v139_.v152;
      }
    LABEL_54:
      v37 = nullptr;
      v38 = v28;
      v139_.v152 = v35;
      v39 = v24 == 1002;
      if (v21 > (int)result) {
        return 0xFFFFFFFFLL;
      }
    LABEL_60:
      LODWORD(v139_.v148) = v27;
      v139_.v145 = v37;
      v139_.v144 = v24;
      v139_.v140 = v38;
      v139_.v141 = v39 || v25;
      if (v39 || v25) {
        v45 = 0;
      }
      else {
        if (v13 <= v21) {
          v46 = v21;
        }
        else {
          v46 = v7 >> 1;
        }
        {
          v45 = 2LL * a1[2] * v46;
          __asm__ volatile("" ::"r"(v45));
        }
      }
      v47 = v139_.v151;
      v48 =
          (__int16*)((char*)&v139_.v139 - ((v45 + 15) & 0xFFFFFFFFFFFFFFF0LL));
      memset_plt((__int64)v48, 0, v45);
      v139_.v142 = v48;
      if (v47) {
        if (v139_.v152) {
          v48 = v16;
        }
        if (a1[15] == 1002) {
          silk_InitDecoder((__int64)a1 + v11);
        }
        {
          v49 = a1[3];
          __asm__ volatile("" ::"r"(v49));
        }
        v139_.v143 = v14;
        v50 = 1000 * v21 / v49;
        if (v50 <= 10) {
          v50 = 10;
        }
        a1[8] = v50;
        if (*(_DWORD*)v139_.v150 != 0) {
          {
            v51 = *(_DWORD*)&v139_.v150[8];
            __asm__ volatile("" ::"r"(v51));
          }
          a1[5] = a1[12];
          if (v51 == 1102) {
            v52 = 12000;
          }
          else {
            v52 = 16000;
          }
          if (v51 == 1101) {
            v52 = 8000;
          }
          if (v139_.v144 == 1000) {
            v53 = v52;
          }
          else {
            v53 = 16000;
          }
          a1[7] = v53;
        }
        v54 = 0;
        if (v139_.v149 != nullptr) {
          v55 = 2 * a6;
        }
        else {
          v55 = 1;
        }
        do {
          while ((unsigned int)silk_Decode((unsigned int*)((char*)a1 + v11),
                                           a1 + 4, v55, v54 == 0,
                                           (__int64)&v156_.v156, (__int64)v48,
                                           &v154_.v155, a1[11]) == 0) {
            v48 += a1[2] * v154_.v155;
            v54 += v154_.v155;
            if (v54 >= v21) {
              goto LABEL_93;
            }
          }
          if (v55 == 0) {
            return 4294967293LL;
          }
          {
            v56 = a1[2];
            __asm__ volatile("" ::"r"(v56));
          }
          v154_.v155 = v21;
          LODWORD(v57) = v56 * v21;
          if ((int)v57 >= 1) {
            v58 = 0;
            do {
              v48[v58++] = 0;
              {
                v57 = a1[2] * (__int64)v21;
                __asm__ volatile("" ::"r"(v57));
              }
            } while (v58 < v57);
          }
          v48 += (int)v57;
          v54 += v21;
        } while (v54 < v21);
      LABEL_93:
        {
          v59 = *(_DWORD*)v139_.v150;
          __asm__ volatile("" ::"r"(v59));
        }
        if (a6 != 0) {
          v59 = 0;
        }
        if (v59 == 1) {
          v60 = __clz((unsigned int)(v156_.v160));
          v61 = v139_.v147;
          {
            v62 = *(_DWORD*)&v139_.v150[4];
            __asm__ volatile("" ::"r"(v62));
          }
          {
            v63 = *(_DWORD*)&v139_.v150[8];
            __asm__ volatile("" ::"r"(v63));
          }
          if (a1[14] == 1001) {
            v64 = 20;
          }
          else {
            v64 = 0;
          }
          if ((int)(v156_.v159 + v60 + v64 - 15) > 8 * v139_.v147) {
            goto LABEL_100;
          }
          if (v139_.v144 == 1001) {
            v77 = ec_dec_bit_logp(&v156_.v156, 12);
            if (!v77) {
            LABEL_100:
              v14 = v139_.v143;
              v65 = 0;
              *(_DWORD*)v139_.v150 = 0;
              v66 = 17;
              v139_.v139 = true;
              goto LABEL_104;
            }
            v78 = v77;
            v79 = ec_dec_bit_logp(&v156_.v156, 1);
            v80 = ec_dec_uint(&v156_.v156, 0x100u);
            v81 = v156_.v159;
            v82 = v139_.v147;
            v83 = v80 + 2;
            v84 = __clz((unsigned int)(v156_.v160));
          }
          else {
            v78 = 1;
            v88 = ec_dec_bit_logp(&v156_.v156, 1);
            v81 = v156_.v159;
            v82 = v61;
            v79 = v88;
            v84 = __clz((unsigned int)(v156_.v160));
            v83 = v61 - ((int)(v156_.v159 + v84 - 25) >> 3);
          }
          v89 = v82 - v83;
          v14 = v139_.v143;
          v90 = 8 * v89;
          v91 = v81 + v84 - 32;
          if (8 * v89 >= v91) {
            v92 = v83;
          }
          else {
            v92 = 0;
          }
          if (v90 >= v91) {
            v93 = v89;
          }
          else {
            v93 = 0;
          }
          if (v90 >= v91) {
            v65 = v78;
          }
          else {
            v65 = 0;
          }
          v66 = 17;
          v139_.v147 = v93;
          LODWORD(v156_.v157) = v156_.v157 - v92;
          *(_DWORD*)v139_.v150 = v79;
          LODWORD(v139_.v139) = 1;
          HIDWORD(v139_.v139) = v92;
        LABEL_104:
          *(_DWORD*)&v139_.v150[8] = v65;
          if (v65 != 0) {
            v67 = 0;
          }
          else {
            v67 = v62;
          }
          v68 = 2LL * v67;
          v69 = (v68 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          if (v65 != 0) {
            v70 = 0;
          }
          else {
            v70 = v139_.v148;
          }
          v71 = (__int16*)((char*)&v139_.v139 - v69);
          memset_plt((__int64)&v139_.v139 - v69, 0, v68);
          *(_DWORD*)&v139_.v150[4] = v70;
          if ((v70 & v139_.v151) == 1) {
            if (v14 >= v21) {
              v72 = v21;
            }
            else {
              v72 = v14;
            }
            opus_src_30f260(a1, nullptr, 0, v71, v72, 0);
            v139_.v145 = v71;
          }
          v73 = 21;
          if (v63 <= 1101) {
            if (v63 == 0) {
            LABEL_124:
              if ((unsigned int)opus_custom_decoder_ctl(
                      (int*)((char*)a1 + v10), 10008, (unsigned int)a1[12]) ==
                  0) {
                if (*(_DWORD*)&v139_.v150[8] != 0) {
                  {
                    v74 = 2LL * a1[2] * v14;
                    __asm__ volatile("" ::"r"(v74));
                  }
                  v75 = (__int16*)((char*)&v139_.v139 -
                                   ((v74 + 15) & 0xFFFFFFFFFFFFFFF0LL));
                  memset_plt((__int64)v75, 0, v74);
                  if (*(_DWORD*)v139_.v150 != 0) {
                    if ((unsigned int)opus_custom_decoder_ctl(
                            (int*)((char*)a1 + v10), 10010, 0) != 0) {
                      return 4294967293LL;
                    }
                    celt_decode_with_ec(
                        (int*)((char*)a1 + v10), &v139_.v149[v139_.v147],
                        HIDWORD(v139_.v139), v75, v14, nullptr, 0);
                    if ((unsigned int)opus_custom_decoder_ctl(
                            (int*)((char*)a1 + v10), 4031, &v154_.v154) != 0) {
                      return 4294967293LL;
                    }
                    v76 = 1;
                  }
                  else {
                    v76 = 0;
                  }
                }
                else {
                  v76 = 0;
                  v75 = (__int16*)&v163;
                }
                if ((unsigned int)opus_custom_decoder_ctl(
                        (int*)((char*)a1 + v10), 10010, v66) == 0) {
                  if (v139_.v144 == 1000) {
                    v85 = v139_.v142;
                    LOWORD(v153) = -1;
                    if (!v139_.v152 && a1[2] * v21 >= 1) {
                      v86 = 0;
                      do {
                        v16[v86++] = 0;
                      } while (v86 < a1[2] * (__int64)v21);
                    }
                    if (a1[15] == 1001 && (v76 == 0 || a1[17] == 0)) {
                      if ((unsigned int)opus_custom_decoder_ctl(
                              (int*)((char*)a1 + v10), 10010, 0) != 0) {
                        return 4294967293LL;
                      }
                      celt_decode_with_ec((int*)((char*)a1 + v10),
                                          (unsigned __int8*)&v153, 2u, v16,
                                          v139_.v146, nullptr, v139_.v140);
                    }
                    v87 = 0;
                  }
                  else {
                    {
                      v94 = a1[15];
                      __asm__ volatile("" ::"r"(v94));
                    }
                    v85 = v139_.v142;
                    if (v7 >= v21) {
                      v95 = v21;
                    }
                    else {
                      v95 = v7;
                    }
                    if (v139_.v144 != v94 && v94 >= 1 && a1[17] == 0) {
                      v123 = (int*)((char*)a1 + v10);
                      v124 = v10;
                      v125 = v14;
                      v126 = v95;
                      v127 = opus_custom_decoder_ctl(v123, 4028);
                      v95 = v126;
                      v14 = v125;
                      v10 = v124;
                      v85 = v139_.v142;
                      if (v127 != 0) {
                        return 4294967293LL;
                      }
                    }
                    if (v139_.v139) {
                      v96 = v139_.v149;
                    }
                    else {
                      v96 = nullptr;
                    }
                    v87 = celt_decode_with_ec((int*)((char*)a1 + v10), v96,
                                              v139_.v147, v16, v95, &v156_.v156,
                                              v139_.v140);
                  }
                  if ((v139_.v141 & 1) == 0 && a1[2] * v21 >= 1) {
                    v97 = 0;
                    do {
                      v98 = v97++;
                      {
                        v99 = v16[v98] + v85[v98];
                        __asm__ volatile("" ::"r"(v99));
                      }
                      if (v99 >= 0x7FFF) {
                        v99 = 0x7FFF;
                      }
                      if (v99 <= -32768) {
                        LOWORD(v99) = 0x8000;
                      }
                      v16[v98] = v99;
                    } while (v97 < a1[2] * (__int64)v21);
                  }
                  v153 = 0;
                  if ((unsigned int)opus_custom_decoder_ctl(
                          (int*)((char*)a1 + v10), 10015, &v153) != 0) {
                    return 4294967293LL;
                  }
                  {
                    v100 = *(__int16**)((char*)((char*)0x40LL) + v153);
                    __asm__ volatile("" ::"r"(v100));
                  }
                  if (((*(_DWORD*)&v139_.v150[8] == 0) | v139_.v150[0] & 1) !=
                      0) {
                    if (v76 != 0) {
                      goto LABEL_182;
                    }
                    goto LABEL_199;
                  }
                  if ((unsigned int)opus_custom_decoder_ctl(
                          (int*)((char*)a1 + v10), 4028) == 0 &&
                      (unsigned int)opus_custom_decoder_ctl(
                          (int*)((char*)a1 + v10), 10010, 0) == 0) {
                    celt_decode_with_ec(
                        (int*)((char*)a1 + v10), &v139_.v149[v139_.v147],
                        HIDWORD(v139_.v139), v75, v14, nullptr, 0);
                    if ((unsigned int)opus_custom_decoder_ctl(
                            (int*)((char*)a1 + v10), 4031, &v154_.v154) == 0) {
                      opus_decoder_310780(
                          (__int64)&v16[a1[2] * (v21 - v139_.v146)],
                          (__int64)&v75[a1[2] * v139_.v146],
                          (__int64)&v16[a1[2] * (v21 - v139_.v146)], v139_.v146,
                          a1[2], v100, a1[3]);
                      if (v76 != 0) {
                      LABEL_182:
                        {
                          v101 = a1[2];
                          __asm__ volatile("" ::"r"(v101));
                        }
                        if (v101 < 1) {
                          v102 = v139_.v146;
                        }
                        else {
                          v102 = v139_.v146;
                          if (v139_.v146 >= 1) {
                            v103 = 0;
                            v104 = -(v139_.v146 & 0x7FFFFFF8);
                            do {
                              if (v102 >= 8) {
                                v106 = 7;
                                do {
                                  {
                                    v107 = v103 + a1[2] * (v106 - 7);
                                    __asm__ volatile("" ::"r"(v107));
                                  }
                                  v16[v107] = v75[v107];
                                  {
                                    v108 = v103 + a1[2] * (v106 - 6);
                                    __asm__ volatile("" ::"r"(v108));
                                  }
                                  v16[v108] = v75[v108];
                                  {
                                    v109 = v103 + a1[2] * (v106 - 5);
                                    __asm__ volatile("" ::"r"(v109));
                                  }
                                  v16[v109] = v75[v109];
                                  {
                                    v110 = v103 + a1[2] * (v106 - 4);
                                    __asm__ volatile("" ::"r"(v110));
                                  }
                                  v16[v110] = v75[v110];
                                  {
                                    v111 = v103 + a1[2] * (v106 - 3);
                                    __asm__ volatile("" ::"r"(v111));
                                  }
                                  v16[v111] = v75[v111];
                                  {
                                    v112 = v103 + a1[2] * (v106 - 2);
                                    __asm__ volatile("" ::"r"(v112));
                                  }
                                  v16[v112] = v75[v112];
                                  {
                                    v113 = 2LL * (v103 + a1[2] * (v106 - 1));
                                    __asm__ volatile("" ::"r"(v113));
                                  }
                                  *(__int16*)((char*)v16 + v113) =
                                      *(__int16*)((char*)v75 + v113);
                                  LODWORD(v113) = v103 + a1[2] * v106;
                                  v106 += 8;
                                  v16[(int)v113] = v75[(int)v113];
                                } while (v104 + v106 != 7);
                                v105 = v106 - 7;
                              }
                              else {
                                v105 = 0;
                              }
                              if ((((unsigned int)v7 >> 3) & 7) != 0) {
                                v114 = ((unsigned int)v7 >> 3) & 7;
                                do {
                                  --v114;
                                  {
                                    v115 = v103 + a1[2] * v105++;
                                    __asm__ volatile("" ::"r"(v115));
                                  }
                                  v16[v115] = v75[v115];
                                } while (v114 != 0);
                              }
                              {
                                v101 = a1[2];
                                __asm__ volatile("" ::"r"(v101));
                              }
                              ++v103;
                            } while (v103 < v101);
                          }
                        }
                        {
                          v131 = a1[3];
                          __asm__ volatile("" ::"r"(v131));
                        }
                        v139_.v146 = v102;
                        opus_decoder_310780((__int64)&v75[v101 * v102],
                                            (__int64)&v16[v101 * v102],
                                            (__int64)&v16[v101 * v102], v102,
                                            v101, v100, v131);
                        v116 = v139_.v147;
                        v117 = (__int64)v139_.v145;
                        if (*(_DWORD*)&v139_.v150[4] == 0) {
                        LABEL_210:
                          {
                            v132 = a1[10];
                            __asm__ volatile("" ::"r"(v132));
                          }
                          if (v132 == 0) {
                            goto LABEL_222;
                          }
                          goto LABEL_215;
                        }
                      LABEL_200:
                        {
                          v118 = a1[2];
                          __asm__ volatile("" ::"r"(v118));
                        }
                        if (v21 >= v14) {
                          v120 = v139_.v146;
                          LODWORD(v128) = v118 * v139_.v146;
                          if ((int)(v118 * v139_.v146) < 1) {
                            v128 = (int)v128;
                          }
                          else {
                            v129 = 0;
                            do {
                              v130 = v129++;
                              v16[v130] = *(_WORD*)(v117 + v130 * 2);
                              {
                                v118 = a1[2];
                                __asm__ volatile("" ::"r"(v118));
                              }
                              v128 = (int)(v118 * v120);
                            } while (v129 < v128);
                          }
                          {
                            v119 = a1[3];
                            __asm__ volatile("" ::"r"(v119));
                          }
                          v117 += 2 * v128;
                          {
                            v121 = (__int64)&v16[v128];
                            __asm__ volatile("" ::"r"(v121));
                          }
                          v122 = v121;
                        }
                        else {
                          {
                            v119 = a1[3];
                            __asm__ volatile("" ::"r"(v119));
                          }
                          v120 = v139_.v146;
                          v121 = (__int64)v16;
                          v122 = (__int64)v16;
                        }
                        opus_decoder_310780(v117, v121, v122, v120, v118, v100,
                                            v119);
                        {
                          v132 = a1[10];
                          __asm__ volatile("" ::"r"(v132));
                        }
                        if (v132 == 0) {
                        LABEL_222:
                          v137 = v154_.v154 ^ v156_.v160;
                          {
                            v138 = *(_DWORD*)&v139_.v150[8] != 0;
                            __asm__ volatile("" ::"r"(v138));
                          }
                          if (v116 < 2) {
                            v137 = 0;
                          }
                          a1[19] = v137;
                          if (v87 >= 0) {
                            result = (unsigned int)v21;
                          }
                          else {
                            result = (unsigned int)v87;
                          }
                          a1[15] = v139_.v144;
                          a1[17] = v138 & (*(_DWORD*)v139_.v150 ^ 1);
                          return result;
                        }
                      LABEL_215:
                        if (a1[2] * v21 >= 1) {
                          v133 = celt_exp2(
                              (unsigned int)(21771 * (__int16)v132 + 0x4000) >>
                              15);
                          v134 = 0;
                          do {
                            v135 = v134++;
                            {
                              v136 =
                                  (unsigned __int64)(v16[v135] * (__int64)v133 +
                                                     0x8000) >>
                                  16;
                              __asm__ volatile("" ::"r"(v136));
                            }
                            if ((int)v136 <= -32767) {
                              LODWORD(v136) = -32767;
                            }
                            if ((int)v136 >= 0x7FFF) {
                              LOWORD(v136) = 0x7FFF;
                            }
                            v16[v135] = v136;
                          } while (v134 < a1[2] * (__int64)v21);
                        }
                        goto LABEL_222;
                      }
                    LABEL_199:
                      v116 = v139_.v147;
                      v117 = (__int64)v139_.v145;
                      if (*(_DWORD*)&v139_.v150[4] == 0) {
                        goto LABEL_210;
                      }
                      goto LABEL_200;
                    }
                  }
                }
              }
              return 4294967293LL;
            }
            if (v63 == 1101) {
              v73 = 13;
            }
          }
          else if ((unsigned int)(v63 - 1102) >= 2) {
            if (v63 == 1104) {
              v73 = 19;
            }
          }
          else {
            v73 = 17;
          }
          if ((unsigned int)opus_custom_decoder_ctl((int*)((char*)a1 + v10),
                                                    10012, v73) != 0) {
            return 4294967293LL;
          }
          goto LABEL_124;
        }
        v14 = v139_.v143;
        v139_.v139 = a6 == 0;
        v65 = 0;
        *(_DWORD*)v139_.v150 = 0;
        v66 = 17;
      }
      else {
        v66 = 0;
        v65 = 0;
        *(_DWORD*)v139_.v150 = 0;
        v139_.v139 = a6 == 0;
      }
      {
        v62 = *(_DWORD*)&v139_.v150[4];
        __asm__ volatile("" ::"r"(v62));
      }
      {
        v63 = *(_DWORD*)&v139_.v150[8];
        __asm__ volatile("" ::"r"(v63));
      }
      goto LABEL_104;
    }
  }
  else {
    {
      v18 = a1[16];
      __asm__ volatile("" ::"r"(v18));
    }
    if ((int)result >= v18) {
      result = (unsigned int)v18;
    }
    else {
      result = (unsigned int)result;
    }
  }
  {
    v24 = a1[15];
    __asm__ volatile("" ::"r"(v24));
  }
  if (v24 == 0) {
    if (a1[2] * (int)result >= 1) {
      v33 = 0;
      do {
        a4[v33++] = 0;
      } while (v33 < a1[2] * (__int64)(int)result);
    }
    return result;
  }
  if ((int)result <= v7) {
    v139_.v146 = v8;
    v139_.v147 = a3;
    *(_QWORD*)&v139_.v150[4] = 0;
    v27 = 0;
    if ((int)result >= v14) {
      v34 = v7 >> 2;
    }
    else {
      v34 = result;
    }
    v139_.v149 = nullptr;
    *(_DWORD*)v139_.v150 = 0;
    if ((int)result >= v13) {
      v34 = result;
    }
    if (v24 == 1000) {
      v34 = result;
    }
    if ((int)result > v13) {
      v34 = v7 >> 1;
    }
    if ((int)result < v7) {
      v21 = v34;
    }
    else {
      v21 = result;
    }
    v25 = (int)result >= v13;
    v139_.v151 = v24 != 1002;
    v28 = v24 != 1002 && (int)result >= v13;
    goto LABEL_48;
  }
  v29 = result;
  v30 = result;
  while (1) {
    v31 = v30 >= v7 ? v7 : v30;
    result = opus_src_30f260(a1, nullptr, 0, v16, v31, 0);
    if ((result & 0x80000000) != 0) {
      break;
    }
    v32 = __OFSUB__(v30, (_DWORD)result);
    v30 -= result;
    v16 += a1[2] * (int)result;
    if ((v30 < 0) ^ v32 | (v30 == 0)) {
      return v29;
    }
  }
  return result;
}

#pragma GCC visibility pop
