/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI and arithmetic.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/parametric_stereo_bitstream.hpp"
#include "nn/codec/sbr_bitstream.hpp"

namespace nn::codec {

using FIXP_DBL = int32_t;
using FIXP_SGL = int16_t;
using LONG = int32_t;
using SHORT = int16_t;
using INT = int32_t;
using UINT = uint32_t;
using UCHAR = uint8_t;
using SCHAR = int8_t;
using SBR_ERROR = int;
using INVF_MODE = int32_t;
using COUPLING_MODE = int32_t;
using HANDLE_SBR_HEADER_DATA = SBR_HEADER_DATA*;
using HANDLE_SBR_FRAME_DATA = SBR_FRAME_DATA*;
using HANDLE_SBR_PREV_FRAME_DATA = SBR_PREV_FRAME_DATA*;
using HANDLE_FREQ_BAND_DATA = FREQ_BAND_DATA*;
void* FDKmemcpy(void*, const void*, unsigned int);
void FDKmemclear(void*, unsigned int);

using Huffman = const int8_t (*)[2];
static int CountLeadingBits(int32_t value) {
  uint32_t bits = value ^ (value >> 31);
  return (bits ? __builtin_clz(bits) : 32) - 1;
}

extern const SCHAR FDK_sbrDecoder_sbr_huffBook_NoiseBalance11T[24][2];
const SCHAR FDK_sbrDecoder_sbr_huffBook_NoiseBalance11T[24][2] = {
  {-64, 1},   {-65, 2},   {-63, 3},   {4, 9},     {-66, 5},   {-62, 6},
  {7, 8},     {-76, -75}, {-74, -73}, {10, 17},   {11, 14},   {12, 13},
  {-72, -71}, {-70, -69}, {15, 16},   {-68, -67}, {-61, -60}, {18, 21},
  {19, 20},   {-59, -58}, {-57, -56}, {22, 23},   {-55, -54}, {-53, -52}};
extern const SCHAR FDK_sbrDecoder_sbr_huffBook_NoiseLevel11T[62][2];
const SCHAR FDK_sbrDecoder_sbr_huffBook_NoiseLevel11T[62][2] = {
  {-64, 1},   {-63, 2},   {-65, 3},   {-66, 4},   {-62, 5},   {-67, 6},
  {7, 8},     {-61, -68}, {9, 30},    {10, 15},   {-60, 11},  {-69, 12},
  {13, 14},   {-59, -53}, {-95, -94}, {16, 23},   {17, 20},   {18, 19},
  {-93, -92}, {-91, -90}, {21, 22},   {-89, -88}, {-87, -86}, {24, 27},
  {25, 26},   {-85, -84}, {-83, -82}, {28, 29},   {-81, -80}, {-79, -78},
  {31, 46},   {32, 39},   {33, 36},   {34, 35},   {-77, -76}, {-75, -74},
  {37, 38},   {-73, -72}, {-71, -70}, {40, 43},   {41, 42},   {-58, -57},
  {-56, -55}, {44, 45},   {-54, -52}, {-51, -50}, {47, 54},   {48, 51},
  {49, 50},   {-49, -48}, {-47, -46}, {52, 53},   {-45, -44}, {-43, -42},
  {55, 58},   {56, 57},   {-41, -40}, {-39, -38}, {59, 60},   {-37, -36},
  {-35, 61},  {-34, -33}};
extern const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvBalance10T[48][2];
const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvBalance10T[48][2] = {
  {-64, 1},   {-63, 2},   {-65, 3},   {-62, 4},   {-66, 5},   {-61, 6},
  {-67, 7},   {-60, 8},   {-68, 9},   {10, 11},   {-69, -59}, {12, 13},
  {-70, -58}, {14, 28},   {15, 21},   {16, 18},   {-57, 17},  {-71, -56},
  {19, 20},   {-88, -87}, {-86, -85}, {22, 25},   {23, 24},   {-84, -83},
  {-82, -81}, {26, 27},   {-80, -79}, {-78, -77}, {29, 36},   {30, 33},
  {31, 32},   {-76, -75}, {-74, -73}, {34, 35},   {-72, -55}, {-54, -53},
  {37, 41},   {38, 39},   {-52, -51}, {-50, 40},  {-49, -48}, {42, 45},
  {43, 44},   {-47, -46}, {-45, -44}, {46, 47},   {-43, -42}, {-41, -40}};
extern const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvBalance10F[48][2];
const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvBalance10F[48][2] = {
  {-64, 1},   {-65, 2},   {-63, 3},   {-66, 4},   {-62, 5},   {-61, 6},
  {-67, 7},   {-68, 8},   {-60, 9},   {10, 11},   {-69, -59}, {-70, 12},
  {-58, 13},  {14, 17},   {-71, 15},  {-57, 16},  {-56, -73}, {18, 32},
  {19, 25},   {20, 22},   {-72, 21},  {-88, -87}, {23, 24},   {-86, -85},
  {-84, -83}, {26, 29},   {27, 28},   {-82, -81}, {-80, -79}, {30, 31},
  {-78, -77}, {-76, -75}, {33, 40},   {34, 37},   {35, 36},   {-74, -55},
  {-54, -53}, {38, 39},   {-52, -51}, {-50, -49}, {41, 44},   {42, 43},
  {-48, -47}, {-46, -45}, {45, 46},   {-44, -43}, {-42, 47},  {-41, -40}};
extern const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvBalance11T[24][2];
const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvBalance11T[24][2] = {
  {-64, 1},   {-63, 2},   {-65, 3},   {-66, 4},   {-62, 5},  {-61, 6},
  {-67, 7},   {-68, 8},   {-60, 9},   {10, 16},   {11, 13},  {-69, 12},
  {-76, -75}, {14, 15},   {-74, -73}, {-72, -71}, {17, 20},  {18, 19},
  {-70, -59}, {-58, -57}, {21, 22},   {-56, -55}, {-54, 23}, {-53, -52}};
extern const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvBalance11F[24][2];
const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvBalance11F[24][2] = {
  {-64, 1},   {-65, 2},   {-63, 3},   {-66, 4},   {-62, 5},   {-61, 6},
  {-67, 7},   {-68, 8},   {-60, 9},   {10, 13},   {-69, 11},  {-59, 12},
  {-58, -76}, {14, 17},   {15, 16},   {-75, -74}, {-73, -72}, {18, 21},
  {19, 20},   {-71, -70}, {-57, -56}, {22, 23},   {-55, -54}, {-53, -52}};
extern const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvLevel10T[120][2];
const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvLevel10T[120][2] = {
  {1, 2},       {-64, -65},   {3, 4},       {-63, -66},   {5, 6},
  {-62, -67},   {7, 8},       {-61, -68},   {9, 10},      {-60, -69},
  {11, 12},     {-59, -70},   {13, 14},     {-58, -71},   {15, 16},
  {-57, -72},   {17, 18},     {-73, -56},   {19, 21},     {-74, 20},
  {-55, -75},   {22, 26},     {23, 24},     {-54, -76},   {-77, 25},
  {-53, -78},   {27, 34},     {28, 29},     {-52, -79},   {30, 31},
  {-80, -51},   {32, 33},     {-83, -82},   {-81, -50},   {35, 57},
  {36, 40},     {37, 38},     {-88, -84},   {-48, 39},    {-90, -85},
  {41, 46},     {42, 43},     {-49, -87},   {44, 45},     {-89, -86},
  {-124, -123}, {47, 50},     {48, 49},     {-122, -121}, {-120, -119},
  {51, 54},     {52, 53},     {-118, -117}, {-116, -115}, {55, 56},
  {-114, -113}, {-112, -111}, {58, 89},     {59, 74},     {60, 67},
  {61, 64},     {62, 63},     {-110, -109}, {-108, -107}, {65, 66},
  {-106, -105}, {-104, -103}, {68, 71},     {69, 70},     {-102, -101},
  {-100, -99},  {72, 73},     {-98, -97},   {-96, -95},   {75, 82},
  {76, 79},     {77, 78},     {-94, -93},   {-92, -91},   {80, 81},
  {-47, -46},   {-45, -44},   {83, 86},     {84, 85},     {-43, -42},
  {-41, -40},   {87, 88},     {-39, -38},   {-37, -36},   {90, 105},
  {91, 98},     {92, 95},     {93, 94},     {-35, -34},   {-33, -32},
  {96, 97},     {-31, -30},   {-29, -28},   {99, 102},    {100, 101},
  {-27, -26},   {-25, -24},   {103, 104},   {-23, -22},   {-21, -20},
  {106, 113},   {107, 110},   {108, 109},   {-19, -18},   {-17, -16},
  {111, 112},   {-15, -14},   {-13, -12},   {114, 117},   {115, 116},
  {-11, -10},   {-9, -8},     {118, 119},   {-7, -6},     {-5, -4}};
extern const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvLevel10F[120][2];
const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvLevel10F[120][2] = {
  {1, 2},       {-64, -65},   {3, 4},       {-63, -66},   {5, 6},
  {-67, -62},   {7, 8},       {-68, -61},   {9, 10},      {-69, -60},
  {11, 13},     {-70, 12},    {-59, -71},   {14, 16},     {-58, 15},
  {-72, -57},   {17, 19},     {-73, 18},    {-56, -74},   {20, 23},
  {21, 22},     {-55, -75},   {-54, -53},   {24, 27},     {25, 26},
  {-76, -52},   {-77, -51},   {28, 31},     {29, 30},     {-50, -78},
  {-79, -49},   {32, 36},     {33, 34},     {-48, -47},   {-80, 35},
  {-81, -82},   {37, 47},     {38, 41},     {39, 40},     {-83, -46},
  {-45, -84},   {42, 44},     {-85, 43},    {-44, -43},   {45, 46},
  {-88, -87},   {-86, -90},   {48, 66},     {49, 56},     {50, 53},
  {51, 52},     {-92, -42},   {-41, -39},   {54, 55},     {-105, -89},
  {-38, -37},   {57, 60},     {58, 59},     {-94, -91},   {-40, -36},
  {61, 63},     {-20, 62},    {-115, -110}, {64, 65},     {-108, -107},
  {-101, -97},  {67, 89},     {68, 75},     {69, 72},     {70, 71},
  {-95, -93},   {-34, -27},   {73, 74},     {-22, -17},   {-16, -124},
  {76, 82},     {77, 79},     {-123, 78},   {-122, -121}, {80, 81},
  {-120, -119}, {-118, -117}, {83, 86},     {84, 85},     {-116, -114},
  {-113, -112}, {87, 88},     {-111, -109}, {-106, -104}, {90, 105},
  {91, 98},     {92, 95},     {93, 94},     {-103, -102}, {-100, -99},
  {96, 97},     {-98, -96},   {-35, -33},   {99, 102},    {100, 101},
  {-32, -31},   {-30, -29},   {103, 104},   {-28, -26},   {-25, -24},
  {106, 113},   {107, 110},   {108, 109},   {-23, -21},   {-19, -18},
  {111, 112},   {-15, -14},   {-13, -12},   {114, 117},   {115, 116},
  {-11, -10},   {-9, -8},     {118, 119},   {-7, -6},     {-5, -4}};
extern const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvLevel11T[62][2];
const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvLevel11T[62][2] = {
  {-64, 1},   {-65, 2},   {-63, 3},   {-66, 4},   {-62, 5},   {-67, 6},
  {-61, 7},   {-68, 8},   {-60, 9},   {10, 11},   {-69, -59}, {12, 14},
  {-70, 13},  {-71, -58}, {15, 18},   {16, 17},   {-72, -57}, {-73, -74},
  {19, 22},   {-56, 20},  {-55, 21},  {-54, -77}, {23, 31},   {24, 25},
  {-75, -76}, {26, 27},   {-78, -53}, {28, 29},   {-52, -95}, {-94, 30},
  {-93, -92}, {32, 47},   {33, 40},   {34, 37},   {35, 36},   {-91, -90},
  {-89, -88}, {38, 39},   {-87, -86}, {-85, -84}, {41, 44},   {42, 43},
  {-83, -82}, {-81, -80}, {45, 46},   {-79, -51}, {-50, -49}, {48, 55},
  {49, 52},   {50, 51},   {-48, -47}, {-46, -45}, {53, 54},   {-44, -43},
  {-42, -41}, {56, 59},   {57, 58},   {-40, -39}, {-38, -37}, {60, 61},
  {-36, -35}, {-34, -33}};
extern const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvLevel11F[62][2];
const SCHAR FDK_sbrDecoder_sbr_huffBook_EnvLevel11F[62][2] = {
  {-64, 1},   {-65, 2},   {-63, 3},   {-66, 4},   {-62, 5},   {-67, 6},
  {7, 8},     {-61, -68}, {9, 10},    {-60, -69}, {11, 12},   {-59, -70},
  {13, 14},   {-58, -71}, {15, 16},   {-57, -72}, {17, 19},   {-56, 18},
  {-55, -73}, {20, 24},   {21, 22},   {-74, -54}, {-53, 23},  {-75, -76},
  {25, 30},   {26, 27},   {-52, -51}, {28, 29},   {-77, -79}, {-50, -49},
  {31, 39},   {32, 35},   {33, 34},   {-78, -46}, {-82, -88}, {36, 37},
  {-83, -48}, {-47, 38},  {-86, -85}, {40, 47},   {41, 44},   {42, 43},
  {-80, -44}, {-43, -42}, {45, 46},   {-39, -87}, {-84, -40}, {48, 55},
  {49, 52},   {50, 51},   {-95, -94}, {-93, -92}, {53, 54},   {-91, -90},
  {-89, -81}, {56, 59},   {57, 58},   {-45, -41}, {-38, -37}, {60, 61},
  {-36, -35}, {-34, -33}};
extern const int FDK_sbrDecoder_envelopeTable_8[8][5];
const int FDK_sbrDecoder_envelopeTable_8[8][5] = {
  {2, 0, 0, 1, -1}, {2, 0, 0, 2, -1}, {3, 1, 1, 2, 4},  {3, 1, 1, 3, 5},
  {3, 1, 1, 4, 6},  {2, 1, 1, 5, -1}, {2, 1, 1, 6, -1}, {2, 1, 1, 7, -1},
};
extern const int FDK_sbrDecoder_envelopeTable_15[15][6];
const int FDK_sbrDecoder_envelopeTable_15[15][6] = {
  {2, 0, 0, 4, -1, -1},  {2, 0, 0, 5, -1, -1},  {3, 1, 1, 2, 6, -1},
  {3, 1, 1, 3, 7, -1},   {3, 1, 1, 4, 8, -1},   {3, 1, 1, 5, 9, -1},
  {3, 1, 1, 6, 10, -1},  {3, 1, 1, 7, 11, -1},  {3, 1, 1, 8, 12, -1},
  {3, 1, 1, 9, 13, -1},  {2, 1, 1, 10, -1, -1}, {2, 1, 1, 11, -1, -1},
  {2, 1, 1, 12, -1, -1}, {2, 1, 1, 13, -1, -1}, {2, 1, 1, 14, -1, -1},
};
extern const int FDK_sbrDecoder_envelopeTable_16[16][6];
const int FDK_sbrDecoder_envelopeTable_16[16][6] = {
  {2, 0, 0, 4, -1, -1},  {2, 0, 0, 5, -1, -1},  {3, 1, 1, 2, 6, -1},
  {3, 1, 1, 3, 7, -1},   {3, 1, 1, 4, 8, -1},   {3, 1, 1, 5, 9, -1},
  {3, 1, 1, 6, 10, -1},  {3, 1, 1, 7, 11, -1},  {3, 1, 1, 8, 12, -1},
  {3, 1, 1, 9, 13, -1},  {3, 1, 1, 10, 14, -1}, {2, 1, 1, 11, -1, -1},
  {2, 1, 1, 12, -1, -1}, {2, 1, 1, 13, -1, -1}, {2, 1, 1, 14, -1, -1},
  {2, 1, 1, 15, -1, -1},
};
extern const FRAME_INFO FDK_sbrDecoder_sbr_frame_info1_15;
const FRAME_INFO FDK_sbrDecoder_sbr_frame_info1_15 = {
  0, 1, {0, 15, 0, 0, 0, 0}, {1, 0, 0, 0, 0}, -1, 1, {0, 15, 0}};
extern const FRAME_INFO FDK_sbrDecoder_sbr_frame_info2_15;
const FRAME_INFO FDK_sbrDecoder_sbr_frame_info2_15 = {
  0, 2, {0, 8, 15, 0, 0, 0}, {1, 1, 0, 0, 0}, -1, 2, {0, 8, 15}};
extern const FRAME_INFO FDK_sbrDecoder_sbr_frame_info4_15;
const FRAME_INFO FDK_sbrDecoder_sbr_frame_info4_15 = {
  0, 4, {0, 4, 8, 12, 15, 0}, {1, 1, 1, 1, 0}, -1, 2, {0, 8, 15}};
extern const FRAME_INFO FDK_sbrDecoder_sbr_frame_info1_16;
const FRAME_INFO FDK_sbrDecoder_sbr_frame_info1_16 = {
  0, 1, {0, 16, 0, 0, 0, 0}, {1, 0, 0, 0, 0}, -1, 1, {0, 16, 0}};
extern const FRAME_INFO FDK_sbrDecoder_sbr_frame_info2_16;
const FRAME_INFO FDK_sbrDecoder_sbr_frame_info2_16 = {
  0, 2, {0, 8, 16, 0, 0, 0}, {1, 1, 0, 0, 0}, -1, 2, {0, 8, 16}};
extern const FRAME_INFO FDK_sbrDecoder_sbr_frame_info4_16;
const FRAME_INFO FDK_sbrDecoder_sbr_frame_info4_16 = {
  0, 4, {0, 4, 8, 12, 16, 0}, {1, 1, 1, 1, 0}, -1, 2, {0, 8, 16}};
int DecodeHuffmanCW(Huffman h, HANDLE_FDK_BITSTREAM hBs) {
  SCHAR index = 0;
  int value, bit;
  while (index >= 0) {
    bit = FDKreadBits(hBs, 1);
    index = h[index][bit];
  }
  value = index + 64;
  return value;
}

static int extractFrameInfo(HANDLE_FDK_BITSTREAM hBs,
                            HANDLE_SBR_HEADER_DATA hHeaderData,
                            HANDLE_SBR_FRAME_DATA h_frame_data,
                            const UINT nrOfChannels, const UINT flags);
static int sbrGetEnvelope(HANDLE_SBR_HEADER_DATA hHeaderData,
                          HANDLE_SBR_FRAME_DATA h_frame_data,
                          HANDLE_FDK_BITSTREAM hBs, const UINT flags);
static void sbrGetDirectionControlData(HANDLE_SBR_FRAME_DATA hFrameData,
                                       HANDLE_FDK_BITSTREAM hBs);
static void sbrGetNoiseFloorData(HANDLE_SBR_HEADER_DATA hHeaderData,
                                 HANDLE_SBR_FRAME_DATA h_frame_data,
                                 HANDLE_FDK_BITSTREAM hBs);
static int checkFrameInfo(FRAME_INFO* pFrameInfo, int numberOfTimeSlots,
                          int overlap, int timeStep);
SBR_ERROR
initHeaderData(HANDLE_SBR_HEADER_DATA hHeaderData, const int sampleRateIn,
               const int sampleRateOut, const int samplesPerFrame,
               const UINT flags) {
  HANDLE_FREQ_BAND_DATA hFreq = &hHeaderData->freqBandData;
  SBR_ERROR sbrError = 0;
  int numAnalysisBands;
  if (sampleRateIn == sampleRateOut) {
    hHeaderData->sbrProcSmplRate = sampleRateOut << 1;
    numAnalysisBands = 32;
  }
  else {
    hHeaderData->sbrProcSmplRate = sampleRateOut;
    if ((sampleRateOut >> 1) == sampleRateIn) {
      numAnalysisBands = 32;
    }
    else if ((sampleRateOut >> 2) == sampleRateIn) {
      numAnalysisBands = 32;
    }
    else if ((sampleRateOut * 3) >> 3 == (sampleRateIn * 8) >> 3) {
      numAnalysisBands = 24;
    }
    else {
      sbrError = 5;
      goto bail;
    }
  }
  hHeaderData->syncState = 0;
  hHeaderData->status = 0;
  hHeaderData->frameErrorFlag = 0;
  hHeaderData->bs_info.ampResolution = 1;
  hHeaderData->bs_info.xover_band = 0;
  hHeaderData->bs_info.sbr_preprocessing = 0;
  hHeaderData->bs_data.startFreq = 5;
  hHeaderData->bs_data.stopFreq = 0;
  hHeaderData->bs_data.freqScale = 2;
  hHeaderData->bs_data.alterScale = 1;
  hHeaderData->bs_data.noise_bands = 2;
  hHeaderData->bs_data.limiterBands = 2;
  hHeaderData->bs_data.limiterGains = 2;
  hHeaderData->bs_data.interpolFreq = 1;
  hHeaderData->bs_data.smoothingLength = 1;
  hHeaderData->timeStep = (flags & 1) ? 1 : 2;
  hFreq->freqBandTable[0] = hFreq->freqBandTableLo;
  hFreq->freqBandTable[1] = hFreq->freqBandTableHi;
  if (sampleRateOut > 24000) {
    hHeaderData->bs_data.startFreq = 7;
    hHeaderData->bs_data.stopFreq = 3;
  }
  hHeaderData->numberTimeSlots =
    (samplesPerFrame / numAnalysisBands) >> (hHeaderData->timeStep - 1);
  if (hHeaderData->numberTimeSlots > (16)) {
    sbrError = 5;
  }
  hHeaderData->numberOfAnalysisBands = numAnalysisBands;
bail:
  return sbrError;
}

void initSbrPrevFrameData(HANDLE_SBR_PREV_FRAME_DATA h_prev_data,
                          int timeSlots) {
  int i;
  for (i = 0; i < 48; i++) {
    h_prev_data->sfb_nrg_prev[i] = (FIXP_DBL)0;
  }
  for (i = 0; i < 5; i++) {
    h_prev_data->prevNoiseLevel[i] = (FIXP_DBL)0;
  }
  for (i = 0; i < 5; i++) {
    h_prev_data->sbr_invf_mode[i] = 0;
  }
  h_prev_data->stopPos = timeSlots;
  h_prev_data->coupling = 0;
  h_prev_data->ampRes = 0;
}

SBR_HEADER_STATUS
sbrGetHeaderData(HANDLE_SBR_HEADER_DATA hHeaderData, HANDLE_FDK_BITSTREAM hBs,
                 const UINT, const int) {
  SBR_HEADER_DATA_BS* pBsData;
  SBR_HEADER_DATA_BS lastHeader;
  SBR_HEADER_DATA_BS_INFO lastInfo;
  int headerExtra1 = 0, headerExtra2 = 0;
  lastHeader = hHeaderData->bs_data;
  lastInfo = hHeaderData->bs_info;
  {
    pBsData = &hHeaderData->bs_data;
  }
  {
    hHeaderData->bs_info.ampResolution = FDKreadBits(hBs, 1);
  }
  pBsData->startFreq = FDKreadBits(hBs, 4);
  pBsData->stopFreq = FDKreadBits(hBs, 4);
  {
    hHeaderData->bs_info.xover_band = FDKreadBits(hBs, 3);
    FDKreadBits(hBs, 2);
  }
  headerExtra1 = FDKreadBits(hBs, 1);
  headerExtra2 = FDKreadBits(hBs, 1);
  if (headerExtra1) {
    pBsData->freqScale = FDKreadBits(hBs, 2);
    pBsData->alterScale = FDKreadBits(hBs, 1);
    pBsData->noise_bands = FDKreadBits(hBs, 2);
  }
  else {
    pBsData->freqScale = 2;
    pBsData->alterScale = 1;
    pBsData->noise_bands = 2;
  }
  if (headerExtra2) {
    pBsData->limiterBands = FDKreadBits(hBs, 2);
    pBsData->limiterGains = FDKreadBits(hBs, 2);
    pBsData->interpolFreq = FDKreadBits(hBs, 1);
    pBsData->smoothingLength = FDKreadBits(hBs, 1);
  }
  else {
    pBsData->limiterBands = 2;
    pBsData->limiterGains = 2;
    pBsData->interpolFreq = 1;
    pBsData->smoothingLength = 1;
  }
  if (hHeaderData->syncState < 2 ||
      lastHeader.startFreq != pBsData->startFreq ||
      lastHeader.stopFreq != pBsData->stopFreq ||
      lastHeader.freqScale != pBsData->freqScale ||
      lastHeader.alterScale != pBsData->alterScale ||
      lastHeader.noise_bands != pBsData->noise_bands ||
      lastInfo.xover_band != hHeaderData->bs_info.xover_band) {
    return HEADER_RESET;
  }
  return HEADER_OK;
}

int sbrGetSyntheticCodedData(HANDLE_SBR_HEADER_DATA hHeaderData,
                             HANDLE_SBR_FRAME_DATA hFrameData,
                             HANDLE_FDK_BITSTREAM hBs) {
  int i, bitsRead = 0;
  int flag = FDKreadBits(hBs, 1);
  bitsRead++;
  if (flag) {
    for (i = 0; i < hHeaderData->freqBandData.nSfb[1]; i++) {
      hFrameData->addHarmonics[i] = FDKreadBits(hBs, 1);
      bitsRead++;
    }
  }
  else {
    for (i = 0; i < 48; i++) {
      hFrameData->addHarmonics[i] = 0;
    }
  }
  return (bitsRead);
}

static int extractExtendedData(HANDLE_SBR_HEADER_DATA, HANDLE_FDK_BITSTREAM hBs,
                               HANDLE_PS_DEC hParametricStereoDec) {
  INT nBitsLeft;
  int extended_data;
  int i, frameOk = 1;
  extended_data = FDKreadBits(hBs, 1);
  if (extended_data) {
    int cnt;
    int bPsRead = 0;
    cnt = FDKreadBits(hBs, 4);
    if (cnt == (1 << 4) - 1) {
      cnt += FDKreadBits(hBs, 8);
    }
    nBitsLeft = 8 * cnt;
    if (nBitsLeft > (INT)FDKgetValidBits(hBs)) {
      nBitsLeft = (INT)FDKgetValidBits(hBs);
      frameOk = 0;
    }
    while (nBitsLeft > 7) {
      int extension_id = FDKreadBits(hBs, 2);
      nBitsLeft -= 2;
      switch (extension_id) {
        case 2:
          if (hParametricStereoDec != nullptr) {
            if (bPsRead &&
                !hParametricStereoDec->bsData[hParametricStereoDec->bsReadSlot]
                   .mpeg.bPsHeaderValid) {
              cnt = nBitsLeft >> 3;
              for (i = 0; i < cnt; i++) {
                FDKreadBits(hBs, 8);
              }
              nBitsLeft -= cnt * 8;
            }
            else {
              nBitsLeft -= ReadPsData(hParametricStereoDec, hBs, nBitsLeft);
              bPsRead = 1;
            }
          }
          break;
        default:
          cnt = nBitsLeft >> 3;
          for (i = 0; i < cnt; i++) {
            FDKreadBits(hBs, 8);
          }
          nBitsLeft -= cnt * 8;
          break;
      }
    }
    if (nBitsLeft < 0) {
      frameOk = 0;
      goto bail;
    }
    else {
      FDKreadBits(hBs, nBitsLeft);
    }
  }
bail:
  return (frameOk);
}

int sbrGetSingleChannelElement(HANDLE_SBR_HEADER_DATA hHeaderData,
                               HANDLE_SBR_FRAME_DATA hFrameData,
                               HANDLE_FDK_BITSTREAM hBs,
                               HANDLE_PS_DEC hParametricStereoDec,
                               const UINT flags, const int overlap) {
  int i;
  hFrameData->coupling = 0;
  {
    if (FDKreadBits(hBs, 1)) {
      FDKreadBits(hBs, 4);
      if (flags & 2) {
        FDKreadBits(hBs, 4);
      }
    }
  }
  if (flags & 2) {
    FDKreadBits(hBs, 1);
  }
  if (!extractFrameInfo(hBs, hHeaderData, hFrameData, 1, flags)) {
    return 0;
  }
  if (!checkFrameInfo(&hFrameData->frameInfo, hHeaderData->numberTimeSlots,
                      overlap, hHeaderData->timeStep)) {
    return 0;
  }
  sbrGetDirectionControlData(hFrameData, hBs);
  for (i = 0; i < hHeaderData->freqBandData.nInvfBands; i++) {
    hFrameData->sbr_invf_mode[i] = (INVF_MODE)FDKreadBits(hBs, 2);
  }
  if (!sbrGetEnvelope(hHeaderData, hFrameData, hBs, flags)) {
    return 0;
  }
  sbrGetNoiseFloorData(hHeaderData, hFrameData, hBs);
  sbrGetSyntheticCodedData(hHeaderData, hFrameData, hBs);
  {
    if (!extractExtendedData(hHeaderData, hBs, hParametricStereoDec)) {
      return 0;
    }
  }
  return 1;
}

int sbrGetChannelPairElement(HANDLE_SBR_HEADER_DATA hHeaderData,
                             HANDLE_SBR_FRAME_DATA hFrameDataLeft,
                             HANDLE_SBR_FRAME_DATA hFrameDataRight,
                             HANDLE_FDK_BITSTREAM hBs, const UINT flags,
                             const int overlap) {
  int i, bit;
  if (FDKreadBits(hBs, 1)) {
    FDKreadBits(hBs, 4);
    FDKreadBits(hBs, 4);
  }
  bit = FDKreadBits(hBs, 1);
  if (bit) {
    hFrameDataLeft->coupling = 1;
    hFrameDataRight->coupling = 2;
  }
  else {
    hFrameDataLeft->coupling = 0;
    hFrameDataRight->coupling = 0;
  }
  if (!extractFrameInfo(hBs, hHeaderData, hFrameDataLeft, 2, flags)) {
    return 0;
  }
  if (!checkFrameInfo(&hFrameDataLeft->frameInfo, hHeaderData->numberTimeSlots,
                      overlap, hHeaderData->timeStep)) {
    return 0;
  }
  if (hFrameDataLeft->coupling) {
    FDKmemcpy(&hFrameDataRight->frameInfo, &hFrameDataLeft->frameInfo,
              sizeof(FRAME_INFO));
    hFrameDataRight->ampResolutionCurrentFrame =
      hFrameDataLeft->ampResolutionCurrentFrame;
  }
  else {
    if (!extractFrameInfo(hBs, hHeaderData, hFrameDataRight, 2, flags)) {
      return 0;
    }
    if (!checkFrameInfo(&hFrameDataRight->frameInfo,
                        hHeaderData->numberTimeSlots, overlap,
                        hHeaderData->timeStep)) {
      return 0;
    }
  }
  sbrGetDirectionControlData(hFrameDataLeft, hBs);
  sbrGetDirectionControlData(hFrameDataRight, hBs);
  for (i = 0; i < hHeaderData->freqBandData.nInvfBands; i++) {
    hFrameDataLeft->sbr_invf_mode[i] = (INVF_MODE)FDKreadBits(hBs, 2);
  }
  if (hFrameDataLeft->coupling) {
    for (i = 0; i < hHeaderData->freqBandData.nInvfBands; i++) {
      hFrameDataRight->sbr_invf_mode[i] = hFrameDataLeft->sbr_invf_mode[i];
    }
    if (!sbrGetEnvelope(hHeaderData, hFrameDataLeft, hBs, flags)) {
      return 0;
    }
    sbrGetNoiseFloorData(hHeaderData, hFrameDataLeft, hBs);
    if (!sbrGetEnvelope(hHeaderData, hFrameDataRight, hBs, flags)) {
      return 0;
    }
  }
  else {
    for (i = 0; i < hHeaderData->freqBandData.nInvfBands; i++) {
      hFrameDataRight->sbr_invf_mode[i] = (INVF_MODE)FDKreadBits(hBs, 2);
    }
    if (!sbrGetEnvelope(hHeaderData, hFrameDataLeft, hBs, flags)) {
      return 0;
    }
    if (!sbrGetEnvelope(hHeaderData, hFrameDataRight, hBs, flags)) {
      return 0;
    }
    sbrGetNoiseFloorData(hHeaderData, hFrameDataLeft, hBs);
  }
  sbrGetNoiseFloorData(hHeaderData, hFrameDataRight, hBs);
  sbrGetSyntheticCodedData(hHeaderData, hFrameDataLeft, hBs);
  sbrGetSyntheticCodedData(hHeaderData, hFrameDataRight, hBs);
  {
    if (!extractExtendedData(hHeaderData, hBs, nullptr)) {
      return 0;
    }
  }
  return 1;
}

void sbrGetDirectionControlData(HANDLE_SBR_FRAME_DATA h_frame_data,
                                HANDLE_FDK_BITSTREAM hBs) {
  int i;
  for (i = 0; i < h_frame_data->frameInfo.nEnvelopes; i++) {
    h_frame_data->domain_vec[i] = FDKreadBits(hBs, 1);
  }
  for (i = 0; i < h_frame_data->frameInfo.nNoiseEnvelopes; i++) {
    h_frame_data->domain_vec_noise[i] = FDKreadBits(hBs, 1);
  }
}

void sbrGetNoiseFloorData(HANDLE_SBR_HEADER_DATA hHeaderData,
                          HANDLE_SBR_FRAME_DATA h_frame_data,
                          HANDLE_FDK_BITSTREAM hBs) {
  int i, j;
  int delta;
  COUPLING_MODE coupling;
  int noNoiseBands = hHeaderData->freqBandData.nNfb;
  Huffman hcb_noiseF;
  Huffman hcb_noise;
  int envDataTableCompFactor;
  coupling = h_frame_data->coupling;
  if (coupling == 2) {
    hcb_noise = (Huffman)&FDK_sbrDecoder_sbr_huffBook_NoiseBalance11T;
    hcb_noiseF = (Huffman)&FDK_sbrDecoder_sbr_huffBook_EnvBalance11F;
    envDataTableCompFactor = 1;
  }
  else {
    hcb_noise = (Huffman)&FDK_sbrDecoder_sbr_huffBook_NoiseLevel11T;
    hcb_noiseF = (Huffman)&FDK_sbrDecoder_sbr_huffBook_EnvLevel11F;
    envDataTableCompFactor = 0;
  }
  for (i = 0; i < h_frame_data->frameInfo.nNoiseEnvelopes; i++) {
    if (h_frame_data->domain_vec_noise[i] == 0) {
      if (coupling == 2) {
        h_frame_data->sbrNoiseFloorLevel[i * noNoiseBands] =
          (FIXP_SGL)(((int)FDKreadBits(hBs, 5)) << envDataTableCompFactor);
      }
      else {
        h_frame_data->sbrNoiseFloorLevel[i * noNoiseBands] =
          (FIXP_SGL)(int)FDKreadBits(hBs, 5);
      }
      for (j = 1; j < noNoiseBands; j++) {
        delta = DecodeHuffmanCW(hcb_noiseF, hBs);
        h_frame_data->sbrNoiseFloorLevel[i * noNoiseBands + j] =
          (FIXP_SGL)(delta << envDataTableCompFactor);
      }
    }
    else {
      for (j = 0; j < noNoiseBands; j++) {
        delta = DecodeHuffmanCW(hcb_noise, hBs);
        h_frame_data->sbrNoiseFloorLevel[i * noNoiseBands + j] =
          (FIXP_SGL)(delta << envDataTableCompFactor);
      }
    }
  }
}

static int sbrGetEnvelope(HANDLE_SBR_HEADER_DATA hHeaderData,
                          HANDLE_SBR_FRAME_DATA h_frame_data,
                          HANDLE_FDK_BITSTREAM hBs, const UINT flags) {
  int i, j;
  UCHAR no_band[5];
  int delta = 0;
  int offset = 0;
  COUPLING_MODE coupling = h_frame_data->coupling;
  int ampRes = hHeaderData->bs_info.ampResolution;
  int nEnvelopes = h_frame_data->frameInfo.nEnvelopes;
  int envDataTableCompFactor;
  int start_bits, start_bits_balance;
  Huffman hcb_t, hcb_f;
  h_frame_data->nScaleFactors = 0;
  if ((h_frame_data->frameInfo.frameClass == 0) && (nEnvelopes == 1)) {
    if (flags & 1) {
      ampRes = h_frame_data->ampResolutionCurrentFrame;
    }
    else {
      ampRes = 0;
    }
  }
  h_frame_data->ampResolutionCurrentFrame = ampRes;
  if (ampRes == 1) {
    start_bits = 6;
    start_bits_balance = 5;
  }
  else {
    start_bits = 7;
    start_bits_balance = 6;
  }
  for (i = 0; i < nEnvelopes; i++) {
    no_band[i] =
      hHeaderData->freqBandData.nSfb[h_frame_data->frameInfo.freqRes[i]];
    h_frame_data->nScaleFactors += no_band[i];
  }
  if (h_frame_data->nScaleFactors > (5 * 48)) {
    return 0;
  }
  if (coupling == 2) {
    envDataTableCompFactor = 1;
    if (ampRes == 0) {
      hcb_t = (Huffman)&FDK_sbrDecoder_sbr_huffBook_EnvBalance10T;
      hcb_f = (Huffman)&FDK_sbrDecoder_sbr_huffBook_EnvBalance10F;
    }
    else {
      hcb_t = (Huffman)&FDK_sbrDecoder_sbr_huffBook_EnvBalance11T;
      hcb_f = (Huffman)&FDK_sbrDecoder_sbr_huffBook_EnvBalance11F;
    }
  }
  else {
    envDataTableCompFactor = 0;
    if (ampRes == 0) {
      hcb_t = (Huffman)&FDK_sbrDecoder_sbr_huffBook_EnvLevel10T;
      hcb_f = (Huffman)&FDK_sbrDecoder_sbr_huffBook_EnvLevel10F;
    }
    else {
      hcb_t = (Huffman)&FDK_sbrDecoder_sbr_huffBook_EnvLevel11T;
      hcb_f = (Huffman)&FDK_sbrDecoder_sbr_huffBook_EnvLevel11F;
    }
  }
  for (j = 0, offset = 0; j < nEnvelopes; j++) {
    if (h_frame_data->domain_vec[j] == 0) {
      if (coupling == 2) {
        h_frame_data->iEnvelope[offset] =
          (FIXP_SGL)(((int)FDKreadBits(hBs, start_bits_balance))
                     << envDataTableCompFactor);
      }
      else {
        h_frame_data->iEnvelope[offset] =
          (FIXP_SGL)(int)FDKreadBits(hBs, start_bits);
      }
    }
    for (i = (1 - h_frame_data->domain_vec[j]); i < no_band[j]; i++) {
      if (h_frame_data->domain_vec[j] == 0) {
        delta = DecodeHuffmanCW(hcb_f, hBs);
      }
      else {
        delta = DecodeHuffmanCW(hcb_t, hBs);
      }
      h_frame_data->iEnvelope[offset + i] =
        (FIXP_SGL)(delta << envDataTableCompFactor);
    }
    offset += no_band[j];
  }
  return 1;
}

static void generateFixFixOnly(FRAME_INFO* hSbrFrameInfo, int tranPosInternal,
                               int numberTimeSlots) {
  int nEnv, i, tranIdx;
  const int* pTable = nullptr;
  switch (numberTimeSlots) {
    case 8:
      pTable = FDK_sbrDecoder_envelopeTable_8[tranPosInternal];
      break;
    case 15:
      pTable = FDK_sbrDecoder_envelopeTable_15[tranPosInternal];
      break;
    case 16:
      pTable = FDK_sbrDecoder_envelopeTable_16[tranPosInternal];
      break;
    default:
      break;
  }
  nEnv = pTable[0];
  for (i = 1; i < nEnv; i++) {
    hSbrFrameInfo->borders[i] = pTable[i + 2];
  }
  hSbrFrameInfo->borders[0] = 0;
  hSbrFrameInfo->borders[nEnv] = numberTimeSlots;
  hSbrFrameInfo->nEnvelopes = nEnv;
  tranIdx = hSbrFrameInfo->tranEnv = pTable[1];
  hSbrFrameInfo->bordersNoise[0] = 0;
  hSbrFrameInfo->bordersNoise[1] =
    hSbrFrameInfo->borders[tranIdx ? tranIdx : 1];
  hSbrFrameInfo->bordersNoise[2] = numberTimeSlots;
  hSbrFrameInfo->nNoiseEnvelopes = 2;
}

static int extractLowDelayGrid(HANDLE_FDK_BITSTREAM hBitBuf,
                               HANDLE_SBR_HEADER_DATA hHeaderData,
                               HANDLE_SBR_FRAME_DATA h_frame_data,
                               int timeSlots) {
  FRAME_INFO* pFrameInfo = &h_frame_data->frameInfo;
  INT numberTimeSlots = hHeaderData->numberTimeSlots;
  INT temp = 0, k;
  h_frame_data->frameInfo.frameClass = 0;
  switch (timeSlots) {
    case 8:
      temp = FDKreadBits(hBitBuf, 3);
      break;
    case 16:
    case 15:
      temp = FDKreadBits(hBitBuf, 4);
      break;
    default:
      return 0;
  }
  generateFixFixOnly(pFrameInfo, temp, numberTimeSlots);
  for (k = 0; k < pFrameInfo->nEnvelopes; k++) {
    pFrameInfo->freqRes[k] = (UCHAR)FDKreadBits(hBitBuf, 1);
  }
  return 1;
}

int extractFrameInfo(HANDLE_FDK_BITSTREAM hBs,
                     HANDLE_SBR_HEADER_DATA hHeaderData,
                     HANDLE_SBR_FRAME_DATA h_frame_data, const UINT,
                     const UINT flags) {
  FRAME_INFO* pFrameInfo = &h_frame_data->frameInfo;
  int numberTimeSlots = hHeaderData->numberTimeSlots;
  int pointer_bits = 0, nEnv = 0, b = 0, border, i, n = 0, k, p, aL, aR, nL, nR,
      temp = 0, staticFreqRes;
  UCHAR frameClass;
  if (flags & 1) {
    frameClass = FDKreadBits(hBs, 1);
    if (frameClass == 1) {
      pFrameInfo->frameClass = frameClass;
      extractLowDelayGrid(hBs, hHeaderData, h_frame_data, numberTimeSlots);
      return 1;
    }
  }
  else {
    frameClass = FDKreadBits(hBs, 2);
  }
  switch (frameClass) {
    case 0:
      temp = FDKreadBits(hBs, 2);
      nEnv = (int)(1 << temp);
      if ((flags & 1) && (nEnv == 1)) {
        h_frame_data->ampResolutionCurrentFrame = FDKreadBits(hBs, 1);
      }
      staticFreqRes = FDKreadBits(hBs, 1);
      {
        if (nEnv > 5) {
          return 0;
        }
      }
      b = nEnv + 1;
      switch (nEnv) {
        case 1:
          switch (numberTimeSlots) {
            case 15:
              FDKmemcpy(pFrameInfo, &FDK_sbrDecoder_sbr_frame_info1_15,
                        sizeof(FRAME_INFO));
              break;
            case 16:
              FDKmemcpy(pFrameInfo, &FDK_sbrDecoder_sbr_frame_info1_16,
                        sizeof(FRAME_INFO));
              break;
            default:
              break;
          }
          break;
        case 2:
          switch (numberTimeSlots) {
            case 15:
              FDKmemcpy(pFrameInfo, &FDK_sbrDecoder_sbr_frame_info2_15,
                        sizeof(FRAME_INFO));
              break;
            case 16:
              FDKmemcpy(pFrameInfo, &FDK_sbrDecoder_sbr_frame_info2_16,
                        sizeof(FRAME_INFO));
              break;
            default:
              break;
          }
          break;
        case 4:
          switch (numberTimeSlots) {
            case 15:
              FDKmemcpy(pFrameInfo, &FDK_sbrDecoder_sbr_frame_info4_15,
                        sizeof(FRAME_INFO));
              break;
            case 16:
              FDKmemcpy(pFrameInfo, &FDK_sbrDecoder_sbr_frame_info4_16,
                        sizeof(FRAME_INFO));
              break;
            default:
              break;
          }
          break;
        case 8:
          return 0;
      }
      if (!staticFreqRes) {
        for (i = 0; i < nEnv; i++) {
          pFrameInfo->freqRes[i] = 0;
        }
      }
      break;
    case 1:
    case 2:
      temp = FDKreadBits(hBs, 2);
      n = FDKreadBits(hBs, 2);
      nEnv = n + 1;
      b = nEnv + 1;
      break;
  }
  switch (frameClass) {
    case 1:
      pFrameInfo->borders[0] = 0;
      border = temp + numberTimeSlots;
      i = b - 1;
      pFrameInfo->borders[i] = border;
      for (k = 0; k < n; k++) {
        temp = FDKreadBits(hBs, 2);
        border -= (2 * temp + 2);
        pFrameInfo->borders[--i] = border;
      }
      pointer_bits = 32 - 1 - CountLeadingBits((FIXP_DBL)(n + 1));
      p = FDKreadBits(hBs, pointer_bits);
      if (p > n + 1) {
        return 0;
      }
      pFrameInfo->tranEnv = p ? n + 2 - p : -1;
      for (k = n; k >= 0; k--) {
        pFrameInfo->freqRes[k] = FDKreadBits(hBs, 1);
      }
      if (p == 0 || p == 1) {
        pFrameInfo->bordersNoise[1] = pFrameInfo->borders[n];
      }
      else {
        pFrameInfo->bordersNoise[1] = pFrameInfo->borders[pFrameInfo->tranEnv];
      }
      break;
    case 2:
      border = temp;
      pFrameInfo->borders[0] = border;
      for (k = 1; k <= n; k++) {
        temp = FDKreadBits(hBs, 2);
        border += (2 * temp + 2);
        pFrameInfo->borders[k] = border;
      }
      pFrameInfo->borders[k] = numberTimeSlots;
      pointer_bits = 32 - 1 - CountLeadingBits((FIXP_DBL)(n + 1));
      p = FDKreadBits(hBs, pointer_bits);
      if (p > n + 1) {
        return 0;
      }
      if (p == 0 || p == 1) {
        pFrameInfo->tranEnv = -1;
      }
      else {
        pFrameInfo->tranEnv = p - 1;
      }
      for (k = 0; k <= n; k++) {
        pFrameInfo->freqRes[k] = FDKreadBits(hBs, 1);
      }
      switch (p) {
        case 0:
          pFrameInfo->bordersNoise[1] = pFrameInfo->borders[1];
          break;
        case 1:
          pFrameInfo->bordersNoise[1] = pFrameInfo->borders[n];
          break;
        default:
          pFrameInfo->bordersNoise[1] =
            pFrameInfo->borders[pFrameInfo->tranEnv];
          break;
      }
      break;
    case 3:
      aL = FDKreadBits(hBs, 2);
      aR = FDKreadBits(hBs, 2) + numberTimeSlots;
      nL = FDKreadBits(hBs, 2);
      nR = FDKreadBits(hBs, 2);
      nEnv = nL + nR + 1;
      if (nEnv > 5) {
        return 0;
      }
      b = nEnv + 1;
      border = aL;
      pFrameInfo->borders[0] = border;
      for (k = 1; k <= nL; k++) {
        temp = FDKreadBits(hBs, 2);
        border += (2 * temp + 2);
        pFrameInfo->borders[k] = border;
      }
      border = aR;
      i = nEnv;
      pFrameInfo->borders[i] = border;
      for (k = 0; k < nR; k++) {
        temp = FDKreadBits(hBs, 2);
        border -= (2 * temp + 2);
        pFrameInfo->borders[--i] = border;
      }
      pointer_bits = 32 - 1 - CountLeadingBits((FIXP_DBL)(nL + nR + 1));
      p = FDKreadBits(hBs, pointer_bits);
      if (p > nL + nR + 1) {
        return 0;
      }
      pFrameInfo->tranEnv = p ? b - p : -1;
      for (k = 0; k < nEnv; k++) {
        pFrameInfo->freqRes[k] = FDKreadBits(hBs, 1);
      }
      pFrameInfo->bordersNoise[0] = aL;
      if (nEnv == 1) {
        pFrameInfo->bordersNoise[1] = aR;
      }
      else {
        if (p == 0 || p == 1) {
          pFrameInfo->bordersNoise[1] = pFrameInfo->borders[nEnv - 1];
        }
        else {
          pFrameInfo->bordersNoise[1] =
            pFrameInfo->borders[pFrameInfo->tranEnv];
        }
        pFrameInfo->bordersNoise[2] = aR;
      }
      break;
  }
  pFrameInfo->nEnvelopes = nEnv;
  if (nEnv == 1) {
    pFrameInfo->nNoiseEnvelopes = 1;
  }
  else {
    pFrameInfo->nNoiseEnvelopes = 2;
  }
  pFrameInfo->frameClass = frameClass;
  if (pFrameInfo->frameClass == 2 || pFrameInfo->frameClass == 1) {
    pFrameInfo->bordersNoise[0] = pFrameInfo->borders[0];
    pFrameInfo->bordersNoise[pFrameInfo->nNoiseEnvelopes] =
      pFrameInfo->borders[nEnv];
  }
  return 1;
}

static int checkFrameInfo(FRAME_INFO* pFrameInfo, int numberOfTimeSlots,
                          int overlap, int timeStep) {
  int maxPos, i, j;
  int startPos;
  int stopPos;
  int tranEnv;
  int startPosNoise;
  int stopPosNoise;
  int nEnvelopes = pFrameInfo->nEnvelopes;
  int nNoiseEnvelopes = pFrameInfo->nNoiseEnvelopes;
  if (nEnvelopes < 1 || nEnvelopes > 5) {
    return 0;
  }
  if (nNoiseEnvelopes > 2) {
    return 0;
  }
  startPos = pFrameInfo->borders[0];
  stopPos = pFrameInfo->borders[nEnvelopes];
  tranEnv = pFrameInfo->tranEnv;
  startPosNoise = pFrameInfo->bordersNoise[0];
  stopPosNoise = pFrameInfo->bordersNoise[nNoiseEnvelopes];
  if (overlap < 0 || overlap > (6)) {
    return 0;
  }
  if (timeStep < 1 || timeStep > 2) {
    return 0;
  }
  maxPos = numberOfTimeSlots + (overlap / timeStep);
  if ((startPos < 0) || (startPos >= stopPos)) {
    return 0;
  }
  if (startPos > maxPos - numberOfTimeSlots) {
    return 0;
  }
  if (stopPos < numberOfTimeSlots) {
    return 0;
  }
  if (stopPos > maxPos) {
    return 0;
  }
  for (i = 0; i < nEnvelopes; i++) {
    if (pFrameInfo->borders[i] >= pFrameInfo->borders[i + 1]) {
      return 0;
    }
  }
  if (tranEnv > nEnvelopes) {
    return 0;
  }
  if (nEnvelopes == 1 && nNoiseEnvelopes > 1) {
    return 0;
  }
  if (startPos != startPosNoise || stopPos != stopPosNoise) {
    return 0;
  }
  for (i = 0; i < nNoiseEnvelopes; i++) {
    if (pFrameInfo->bordersNoise[i] >= pFrameInfo->bordersNoise[i + 1]) {
      return 0;
    }
  }
  for (i = 0; i < nNoiseEnvelopes; i++) {
    startPosNoise = pFrameInfo->bordersNoise[i];
    for (j = 0; j < nEnvelopes; j++) {
      if (pFrameInfo->borders[j] == startPosNoise) {
        break;
      }
    }
    if (j == nEnvelopes) {
      return 0;
    }
  }
  return 1;
}

}
