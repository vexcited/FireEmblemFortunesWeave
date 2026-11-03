#pragma once

#include <stdint.h>

namespace nn::codec {

struct SECTION_INFO {
  int codeBook;
  int sfbStart;
  int sfbCnt;
  int sectionBits;
};

struct SECTION_DATA {
  int blockType;
  int noOfGroups;
  int sfbCnt;
  int maxSfbPerGroup;
  int sfbPerGroup;
  int noOfSections;
  SECTION_INFO huffsection[60];
  int sideInfoBits;
  int huffmanBits;
  int scalefacBits;
  int noiseNrgBits;
  int firstScf;
};

struct BITCNTR_STATE {
  int* bitLookUp;
  int* mergeGainLookUp;
};

int FDKaacEnc_dynBitCount(BITCNTR_STATE*, const int16_t*, const uint32_t*,
                          const int*, int, int, int, int, const int*,
                          SECTION_DATA*, const int*, const int*, const int*,
                          uint32_t);

static_assert(sizeof(SECTION_INFO) == 16);
static_assert(sizeof(SECTION_DATA) == 1004);
static_assert(sizeof(BITCNTR_STATE) == 16);
static_assert(__builtin_offsetof(SECTION_DATA, sideInfoBits) == 984);
static_assert(__builtin_offsetof(SECTION_DATA, firstScf) == 1000);

}
