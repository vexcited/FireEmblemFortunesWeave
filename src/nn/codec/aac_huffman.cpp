/*
  Third-Party Modified Version of the Fraunhofer FDK AAC Codec Library
  for Android. Modified 2026-11-03 for the observed SDK ABI.
  Original license: https://android.googlesource.com/platform/external/aac/+/203e3f28fbebec7011342017fafc2a0bda0ce530/NOTICE
  Full license text: include/nn/codec/bitstream.hpp.
*/

#include "nn/codec/aac_huffman.hpp"

namespace nn::codec {
using INT = int32_t;
using UINT = uint32_t;
using ULONG = uint32_t;
using SHORT = int16_t;
using USHORT = uint16_t;
using UCHAR = uint8_t;
static int fixMin(int a, int b) {
  return a < b ? a : b;
}

static int fixp_abs(int value) {
  return value < 0 ? int32_t(0U - uint32_t(value)) : value;
}

static SHORT fixp_abs(SHORT value) {
  return value < 0 ? SHORT(-value) : value;
}

static inline UCHAR FDKwriteBits(HANDLE_FDK_BITSTREAM hBitStream, UINT value,
                                 const UINT numberOfBits) {
  const UINT validMask = BitMask[numberOfBits];
  if ((hBitStream->BitsInCache + numberOfBits) < 32) {
    hBitStream->BitsInCache += numberOfBits;
    hBitStream->CacheWord =
      (hBitStream->CacheWord << numberOfBits) | (value & validMask);
  }
  else {
    FDK_put(&hBitStream->hBitBuf, hBitStream->CacheWord,
            hBitStream->BitsInCache);
    hBitStream->BitsInCache = numberOfBits;
    hBitStream->CacheWord = (value & validMask);
  }
  return numberOfBits;
}

enum codeBookNo {
  CODE_BOOK_ZERO_NO = 0,
  CODE_BOOK_1_NO = 1,
  CODE_BOOK_2_NO = 2,
  CODE_BOOK_3_NO = 3,
  CODE_BOOK_4_NO = 4,
  CODE_BOOK_5_NO = 5,
  CODE_BOOK_6_NO = 6,
  CODE_BOOK_7_NO = 7,
  CODE_BOOK_8_NO = 8,
  CODE_BOOK_9_NO = 9,
  CODE_BOOK_10_NO = 10,
  CODE_BOOK_ESC_NO = 11,
  CODE_BOOK_RES_NO = 12,
  CODE_BOOK_PNS_NO = 13,
  CODE_BOOK_IS_OUT_OF_PHASE_NO = 14,
  CODE_BOOK_IS_IN_PHASE_NO = 15
};
enum codeBookNdx {
  CODE_BOOK_ZERO_NDX,
  CODE_BOOK_1_NDX,
  CODE_BOOK_2_NDX,
  CODE_BOOK_3_NDX,
  CODE_BOOK_4_NDX,
  CODE_BOOK_5_NDX,
  CODE_BOOK_6_NDX,
  CODE_BOOK_7_NDX,
  CODE_BOOK_8_NDX,
  CODE_BOOK_9_NDX,
  CODE_BOOK_10_NDX,
  CODE_BOOK_ESC_NDX,
  CODE_BOOK_RES_NDX,
  CODE_BOOK_PNS_NDX,
  CODE_BOOK_IS_OUT_OF_PHASE_NDX,
  CODE_BOOK_IS_IN_PHASE_NDX,
  NUMBER_OF_CODE_BOOKS
};
enum codeBookLav {
  CODE_BOOK_ZERO_LAV = 0,
  CODE_BOOK_1_LAV = 1,
  CODE_BOOK_2_LAV = 1,
  CODE_BOOK_3_LAV = 2,
  CODE_BOOK_4_LAV = 2,
  CODE_BOOK_5_LAV = 4,
  CODE_BOOK_6_LAV = 4,
  CODE_BOOK_7_LAV = 7,
  CODE_BOOK_8_LAV = 7,
  CODE_BOOK_9_LAV = 12,
  CODE_BOOK_10_LAV = 12,
  CODE_BOOK_ESC_LAV = 16,
  CODE_BOOK_SCF_LAV = 60,
  CODE_BOOK_PNS_LAV = 60
};
extern const ULONG FDKaacEnc_huff_ltab1_2[3][3][3][3];
const ULONG FDKaacEnc_huff_ltab1_2[3][3][3][3] = {
  {{{0x000b0009, 0x00090007, 0x000b0009},
    {0x000a0008, 0x00070006, 0x000a0008},
    {0x000b0009, 0x00090008, 0x000b0009}},
   {{0x000a0008, 0x00070006, 0x000a0007},
    {0x00070006, 0x00050005, 0x00070006},
    {0x00090007, 0x00070006, 0x000a0008}},
   {{0x000b0009, 0x00090007, 0x000b0008},
    {0x00090008, 0x00070006, 0x00090008},
    {0x000b0009, 0x00090007, 0x000b0009}}},
  {{{0x00090008, 0x00070006, 0x00090007},
    {0x00070006, 0x00050005, 0x00070006},
    {0x00090007, 0x00070006, 0x00090008}},
   {{0x00070006, 0x00050005, 0x00070006},
    {0x00050005, 0x00010003, 0x00050005},
    {0x00070006, 0x00050005, 0x00070006}},
   {{0x00090008, 0x00070006, 0x00090007},
    {0x00070006, 0x00050005, 0x00070006},
    {0x00090008, 0x00070006, 0x00090008}}},
  {{{0x000b0009, 0x00090007, 0x000b0009},
    {0x00090008, 0x00070006, 0x00090008},
    {0x000b0008, 0x00090007, 0x000b0009}},
   {{0x000a0008, 0x00070006, 0x00090007},
    {0x00070006, 0x00050004, 0x00070006},
    {0x00090008, 0x00070006, 0x000a0007}},
   {{0x000b0009, 0x00090007, 0x000b0009},
    {0x000a0007, 0x00070006, 0x00090008},
    {0x000b0009, 0x00090007, 0x000b0009}}}};
extern const ULONG FDKaacEnc_huff_ltab3_4[3][3][3][3];
const ULONG FDKaacEnc_huff_ltab3_4[3][3][3][3] = {
  {{{0x00010004, 0x00040005, 0x00080008},
    {0x00040005, 0x00050004, 0x00080008},
    {0x00090009, 0x00090008, 0x000a000b}},
   {{0x00040005, 0x00060005, 0x00090008},
    {0x00060005, 0x00060004, 0x00090008},
    {0x00090008, 0x00090007, 0x000a000a}},
   {{0x00090009, 0x000a0008, 0x000d000b},
    {0x00090008, 0x00090008, 0x000b000a},
    {0x000b000b, 0x000a000a, 0x000c000b}}},
  {{{0x00040004, 0x00060005, 0x000a0008},
    {0x00060004, 0x00070004, 0x000a0008},
    {0x000a0008, 0x000a0008, 0x000c000a}},
   {{0x00050004, 0x00070004, 0x000b0008},
    {0x00060004, 0x00070004, 0x000a0007},
    {0x00090008, 0x00090007, 0x000b0009}},
   {{0x00090008, 0x000a0008, 0x000d000a},
    {0x00080007, 0x00090007, 0x000c0009},
    {0x000a000a, 0x000b0009, 0x000c000a}}},
  {{{0x00080008, 0x000a0008, 0x000f000b},
    {0x00090008, 0x000b0007, 0x000f000a},
    {0x000d000b, 0x000e000a, 0x0010000c}},
   {{0x00080008, 0x000a0007, 0x000e000a},
    {0x00090007, 0x000a0007, 0x000e0009},
    {0x000c000a, 0x000c0009, 0x000f000b}},
   {{0x000b000b, 0x000c000a, 0x0010000c},
    {0x000a000a, 0x000b0009, 0x000f000b},
    {0x000c000b, 0x000c000a, 0x000f000b}}}};
extern const ULONG FDKaacEnc_huff_ltab5_6[9][9];
const ULONG FDKaacEnc_huff_ltab5_6[9][9] = {
  {0x000d000b, 0x000c000a, 0x000b0009, 0x000b0009, 0x000a0009, 0x000b0009,
   0x000b0009, 0x000c000a, 0x000d000b},
  {0x000c000a, 0x000b0009, 0x000a0008, 0x00090007, 0x00080007, 0x00090007,
   0x000a0008, 0x000b0009, 0x000c000a},
  {0x000c0009, 0x000a0008, 0x00090006, 0x00080006, 0x00070006, 0x00080006,
   0x00090006, 0x000a0008, 0x000b0009},
  {0x000b0009, 0x00090007, 0x00080006, 0x00050004, 0x00040004, 0x00050004,
   0x00080006, 0x00090007, 0x000b0009},
  {0x000a0009, 0x00080007, 0x00070006, 0x00040004, 0x00010004, 0x00040004,
   0x00070006, 0x00080007, 0x000b0009},
  {0x000b0009, 0x00090007, 0x00080006, 0x00050004, 0x00040004, 0x00050004,
   0x00080006, 0x00090007, 0x000b0009},
  {0x000b0009, 0x000a0008, 0x00090006, 0x00080006, 0x00070006, 0x00080006,
   0x00090006, 0x000a0008, 0x000b0009},
  {0x000c000a, 0x000b0009, 0x000a0008, 0x00090007, 0x00080007, 0x00090007,
   0x000a0007, 0x000b0008, 0x000c000a},
  {0x000d000b, 0x000c000a, 0x000c0009, 0x000b0009, 0x000a0009, 0x000a0009,
   0x000b0009, 0x000c000a, 0x000d000b}};
extern const ULONG FDKaacEnc_huff_ltab7_8[8][8];
const ULONG FDKaacEnc_huff_ltab7_8[8][8] = {
  {0x00010005, 0x00030004, 0x00060005, 0x00070006, 0x00080007, 0x00090008,
   0x000a0009, 0x000b000a},
  {0x00030004, 0x00040003, 0x00060004, 0x00070005, 0x00080006, 0x00080007,
   0x00090007, 0x00090008},
  {0x00060005, 0x00060004, 0x00070004, 0x00080005, 0x00080006, 0x00090007,
   0x00090007, 0x000a0008},
  {0x00070006, 0x00070005, 0x00080005, 0x00080006, 0x00090006, 0x00090007,
   0x000a0008, 0x000a0008},
  {0x00080007, 0x00080006, 0x00090006, 0x00090006, 0x000a0007, 0x000a0007,
   0x000a0008, 0x000b0009},
  {0x00090008, 0x00080007, 0x00090006, 0x00090007, 0x000a0007, 0x000a0008,
   0x000b0008, 0x000b000a},
  {0x000a0009, 0x00090007, 0x00090007, 0x000a0008, 0x000a0008, 0x000b0008,
   0x000c0009, 0x000c0009},
  {0x000b000a, 0x000a0008, 0x000a0008, 0x000a0008, 0x000b0009, 0x000b0009,
   0x000c0009, 0x000c000a}};
extern const ULONG FDKaacEnc_huff_ltab9_10[13][13];
const ULONG FDKaacEnc_huff_ltab9_10[13][13] = {
  {0x00010006, 0x00030005, 0x00060006, 0x00080006, 0x00090007, 0x000a0008,
   0x000a0009, 0x000b000a, 0x000b000a, 0x000c000a, 0x000c000b, 0x000d000b,
   0x000d000c},
  {0x00030005, 0x00040004, 0x00060004, 0x00070005, 0x00080006, 0x00080007,
   0x00090007, 0x000a0008, 0x000a0008, 0x000a0009, 0x000b000a, 0x000c000a,
   0x000c000b},
  {0x00060006, 0x00060004, 0x00070005, 0x00080005, 0x00080006, 0x00090006,
   0x000a0007, 0x000a0008, 0x000a0008, 0x000b0009, 0x000c0009, 0x000c000a,
   0x000c000a},
  {0x00080006, 0x00070005, 0x00080005, 0x00090005, 0x00090006, 0x000a0007,
   0x000a0007, 0x000b0008, 0x000b0008, 0x000b0009, 0x000c0009, 0x000c000a,
   0x000d000a},
  {0x00090007, 0x00080006, 0x00090006, 0x00090006, 0x000a0006, 0x000a0007,
   0x000b0007, 0x000b0008, 0x000b0008, 0x000c0009, 0x000c0009, 0x000c000a,
   0x000d000a},
  {0x000a0008, 0x00090007, 0x00090006, 0x000a0007, 0x000b0007, 0x000b0007,
   0x000b0008, 0x000c0008, 0x000b0008, 0x000c0009, 0x000c000a, 0x000d000a,
   0x000d000b},
  {0x000b0009, 0x00090007, 0x000a0007, 0x000b0007, 0x000b0007, 0x000b0008,
   0x000c0008, 0x000c0009, 0x000c0009, 0x000c0009, 0x000d000a, 0x000d000a,
   0x000d000b},
  {0x000b0009, 0x000a0008, 0x000a0008, 0x000b0008, 0x000b0008, 0x000c0008,
   0x000c0009, 0x000d0009, 0x000d0009, 0x000d000a, 0x000d000a, 0x000d000b,
   0x000d000b},
  {0x000b0009, 0x000a0008, 0x000a0008, 0x000b0008, 0x000b0008, 0x000b0008,
   0x000c0009, 0x000c0009, 0x000d000a, 0x000d000a, 0x000e000a, 0x000d000b,
   0x000e000b},
  {0x000b000a, 0x000a0009, 0x000b0009, 0x000b0009, 0x000c0009, 0x000c0009,
   0x000c0009, 0x000c000a, 0x000d000a, 0x000d000a, 0x000e000b, 0x000e000b,
   0x000e000c},
  {0x000c000a, 0x000b0009, 0x000b0009, 0x000c0009, 0x000c0009, 0x000c000a,
   0x000d000a, 0x000d000a, 0x000d000a, 0x000e000b, 0x000e000b, 0x000e000b,
   0x000f000c},
  {0x000c000b, 0x000b000a, 0x000c0009, 0x000c000a, 0x000c000a, 0x000d000a,
   0x000d000a, 0x000d000a, 0x000d000b, 0x000e000b, 0x000e000b, 0x000f000b,
   0x000f000c},
  {0x000d000b, 0x000c000a, 0x000c000a, 0x000c000a, 0x000d000a, 0x000d000a,
   0x000d000a, 0x000d000b, 0x000e000b, 0x000e000c, 0x000e000c, 0x000e000c,
   0x000f000c}};
extern const UCHAR FDKaacEnc_huff_ltab11[17][17];
const UCHAR FDKaacEnc_huff_ltab11[17][17] = {
  {0x04, 0x05, 0x06, 0x07, 0x08, 0x08, 0x09, 0x0a, 0x0a, 0x0a, 0x0b, 0x0b, 0x0c,
   0x0b, 0x0c, 0x0c, 0x0a},
  {0x05, 0x04, 0x05, 0x06, 0x07, 0x07, 0x08, 0x08, 0x09, 0x09, 0x09, 0x0a, 0x0a,
   0x0a, 0x0a, 0x0b, 0x08},
  {0x06, 0x05, 0x05, 0x06, 0x07, 0x07, 0x08, 0x08, 0x08, 0x09, 0x09, 0x09, 0x0a,
   0x0a, 0x0a, 0x0a, 0x08},
  {0x07, 0x06, 0x06, 0x06, 0x07, 0x07, 0x08, 0x08, 0x08, 0x09, 0x09, 0x09, 0x0a,
   0x0a, 0x0a, 0x0a, 0x08},
  {0x08, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x09, 0x09, 0x09, 0x0a,
   0x0a, 0x0a, 0x0a, 0x08},
  {0x08, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x09, 0x09, 0x09, 0x09, 0x0a,
   0x0a, 0x0a, 0x0a, 0x08},
  {0x09, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x09, 0x09, 0x09, 0x0a, 0x0a,
   0x0a, 0x0a, 0x0a, 0x08},
  {0x09, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x09, 0x09, 0x09, 0x0a, 0x0a, 0x0a,
   0x0a, 0x0a, 0x0a, 0x08},
  {0x0a, 0x09, 0x08, 0x08, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0a, 0x0a, 0x0a, 0x0a,
   0x0a, 0x0a, 0x0b, 0x08},
  {0x0a, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a,
   0x0a, 0x0b, 0x0b, 0x08},
  {0x0b, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0b,
   0x0a, 0x0b, 0x0b, 0x08},
  {0x0b, 0x0a, 0x09, 0x09, 0x0a, 0x09, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0b, 0x0b,
   0x0b, 0x0b, 0x0b, 0x08},
  {0x0b, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0b, 0x0b,
   0x0b, 0x0b, 0x0b, 0x09},
  {0x0b, 0x0a, 0x09, 0x09, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0b, 0x0b, 0x0b,
   0x0b, 0x0b, 0x0b, 0x09},
  {0x0b, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0b, 0x0b, 0x0b,
   0x0b, 0x0b, 0x0b, 0x09},
  {0x0c, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b,
   0x0b, 0x0c, 0x0c, 0x09},
  {0x09, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
   0x08, 0x08, 0x09, 0x05}};
extern const UCHAR FDKaacEnc_huff_ltabscf[121];
const UCHAR FDKaacEnc_huff_ltabscf[121] = {
  0x12, 0x12, 0x12, 0x12, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
  0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x12, 0x13, 0x12, 0x11, 0x11, 0x10, 0x11,
  0x10, 0x10, 0x10, 0x10, 0x0f, 0x0f, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0d,
  0x0d, 0x0c, 0x0c, 0x0c, 0x0b, 0x0c, 0x0b, 0x0a, 0x0a, 0x0a, 0x09, 0x09, 0x08,
  0x08, 0x08, 0x07, 0x06, 0x06, 0x05, 0x04, 0x03, 0x01, 0x04, 0x04, 0x05, 0x06,
  0x06, 0x07, 0x07, 0x08, 0x08, 0x09, 0x09, 0x0a, 0x0a, 0x0a, 0x0b, 0x0b, 0x0b,
  0x0b, 0x0c, 0x0c, 0x0d, 0x0d, 0x0d, 0x0e, 0x0e, 0x10, 0x0f, 0x10, 0x0f, 0x12,
  0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
  0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13,
  0x13, 0x13, 0x13, 0x13};
extern const USHORT FDKaacEnc_huff_ctab1[3][3][3][3];
const USHORT FDKaacEnc_huff_ctab1[3][3][3][3] = {{{{0x07f8, 0x01f1, 0x07fd},
                                                   {0x03f5, 0x0068, 0x03f0},
                                                   {0x07f7, 0x01ec, 0x07f5}},
                                                  {{0x03f1, 0x0072, 0x03f4},
                                                   {0x0074, 0x0011, 0x0076},
                                                   {0x01eb, 0x006c, 0x03f6}},
                                                  {{0x07fc, 0x01e1, 0x07f1},
                                                   {0x01f0, 0x0061, 0x01f6},
                                                   {0x07f2, 0x01ea, 0x07fb}}},
                                                 {{{0x01f2, 0x0069, 0x01ed},
                                                   {0x0077, 0x0017, 0x006f},
                                                   {0x01e6, 0x0064, 0x01e5}},
                                                  {{0x0067, 0x0015, 0x0062},
                                                   {0x0012, 0x0000, 0x0014},
                                                   {0x0065, 0x0016, 0x006d}},
                                                  {{0x01e9, 0x0063, 0x01e4},
                                                   {0x006b, 0x0013, 0x0071},
                                                   {0x01e3, 0x0070, 0x01f3}}},
                                                 {{{0x07fe, 0x01e7, 0x07f3},
                                                   {0x01ef, 0x0060, 0x01ee},
                                                   {0x07f0, 0x01e2, 0x07fa}},
                                                  {{0x03f3, 0x006a, 0x01e8},
                                                   {0x0075, 0x0010, 0x0073},
                                                   {0x01f4, 0x006e, 0x03f7}},
                                                  {{0x07f6, 0x01e0, 0x07f9},
                                                   {0x03f2, 0x0066, 0x01f5},
                                                   {0x07ff, 0x01f7, 0x07f4}}}};
extern const USHORT FDKaacEnc_huff_ctab2[3][3][3][3];
const USHORT FDKaacEnc_huff_ctab2[3][3][3][3] = {{{{0x01f3, 0x006f, 0x01fd},
                                                   {0x00eb, 0x0023, 0x00ea},
                                                   {0x01f7, 0x00e8, 0x01fa}},
                                                  {{0x00f2, 0x002d, 0x0070},
                                                   {0x0020, 0x0006, 0x002b},
                                                   {0x006e, 0x0028, 0x00e9}},
                                                  {{0x01f9, 0x0066, 0x00f8},
                                                   {0x00e7, 0x001b, 0x00f1},
                                                   {0x01f4, 0x006b, 0x01f5}}},
                                                 {{{0x00ec, 0x002a, 0x006c},
                                                   {0x002c, 0x000a, 0x0027},
                                                   {0x0067, 0x001a, 0x00f5}},
                                                  {{0x0024, 0x0008, 0x001f},
                                                   {0x0009, 0x0000, 0x0007},
                                                   {0x001d, 0x000b, 0x0030}},
                                                  {{0x00ef, 0x001c, 0x0064},
                                                   {0x001e, 0x000c, 0x0029},
                                                   {0x00f3, 0x002f, 0x00f0}}},
                                                 {{{0x01fc, 0x0071, 0x01f2},
                                                   {0x00f4, 0x0021, 0x00e6},
                                                   {0x00f7, 0x0068, 0x01f8}},
                                                  {{0x00ee, 0x0022, 0x0065},
                                                   {0x0031, 0x0002, 0x0026},
                                                   {0x00ed, 0x0025, 0x006a}},
                                                  {{0x01fb, 0x0072, 0x01fe},
                                                   {0x0069, 0x002e, 0x00f6},
                                                   {0x01ff, 0x006d, 0x01f6}}}};
extern const USHORT FDKaacEnc_huff_ctab3[3][3][3][3];
const USHORT FDKaacEnc_huff_ctab3[3][3][3][3] = {{{{0x0000, 0x0009, 0x00ef},
                                                   {0x000b, 0x0019, 0x00f0},
                                                   {0x01eb, 0x01e6, 0x03f2}},
                                                  {{0x000a, 0x0035, 0x01ef},
                                                   {0x0034, 0x0037, 0x01e9},
                                                   {0x01ed, 0x01e7, 0x03f3}},
                                                  {{0x01ee, 0x03ed, 0x1ffa},
                                                   {0x01ec, 0x01f2, 0x07f9},
                                                   {0x07f8, 0x03f8, 0x0ff8}}},
                                                 {{{0x0008, 0x0038, 0x03f6},
                                                   {0x0036, 0x0075, 0x03f1},
                                                   {0x03eb, 0x03ec, 0x0ff4}},
                                                  {{0x0018, 0x0076, 0x07f4},
                                                   {0x0039, 0x0074, 0x03ef},
                                                   {0x01f3, 0x01f4, 0x07f6}},
                                                  {{0x01e8, 0x03ea, 0x1ffc},
                                                   {0x00f2, 0x01f1, 0x0ffb},
                                                   {0x03f5, 0x07f3, 0x0ffc}}},
                                                 {{{0x00ee, 0x03f7, 0x7ffe},
                                                   {0x01f0, 0x07f5, 0x7ffd},
                                                   {0x1ffb, 0x3ffa, 0xffff}},
                                                  {{0x00f1, 0x03f0, 0x3ffc},
                                                   {0x01ea, 0x03ee, 0x3ffb},
                                                   {0x0ff6, 0x0ffa, 0x7ffc}},
                                                  {{0x07f2, 0x0ff5, 0xfffe},
                                                   {0x03f4, 0x07f7, 0x7ffb},
                                                   {0x0ff7, 0x0ff9, 0x7ffa}}}};
extern const USHORT FDKaacEnc_huff_ctab4[3][3][3][3];
const USHORT FDKaacEnc_huff_ctab4[3][3][3][3] = {{{{0x0007, 0x0016, 0x00f6},
                                                   {0x0018, 0x0008, 0x00ef},
                                                   {0x01ef, 0x00f3, 0x07f8}},
                                                  {{0x0019, 0x0017, 0x00ed},
                                                   {0x0015, 0x0001, 0x00e2},
                                                   {0x00f0, 0x0070, 0x03f0}},
                                                  {{0x01ee, 0x00f1, 0x07fa},
                                                   {0x00ee, 0x00e4, 0x03f2},
                                                   {0x07f6, 0x03ef, 0x07fd}}},
                                                 {{{0x0005, 0x0014, 0x00f2},
                                                   {0x0009, 0x0004, 0x00e5},
                                                   {0x00f4, 0x00e8, 0x03f4}},
                                                  {{0x0006, 0x0002, 0x00e7},
                                                   {0x0003, 0x0000, 0x006b},
                                                   {0x00e3, 0x0069, 0x01f3}},
                                                  {{0x00eb, 0x00e6, 0x03f6},
                                                   {0x006e, 0x006a, 0x01f4},
                                                   {0x03ec, 0x01f0, 0x03f9}}},
                                                 {{{0x00f5, 0x00ec, 0x07fb},
                                                   {0x00ea, 0x006f, 0x03f7},
                                                   {0x07f9, 0x03f3, 0x0fff}},
                                                  {{0x00e9, 0x006d, 0x03f8},
                                                   {0x006c, 0x0068, 0x01f5},
                                                   {0x03ee, 0x01f2, 0x07f4}},
                                                  {{0x07f7, 0x03f1, 0x0ffe},
                                                   {0x03ed, 0x01f1, 0x07f5},
                                                   {0x07fe, 0x03f5, 0x07fc}}}};
extern const USHORT FDKaacEnc_huff_ctab5[9][9];
const USHORT FDKaacEnc_huff_ctab5[9][9] = {
  {0x1fff, 0x0ff7, 0x07f4, 0x07e8, 0x03f1, 0x07ee, 0x07f9, 0x0ff8, 0x1ffd},
  {0x0ffd, 0x07f1, 0x03e8, 0x01e8, 0x00f0, 0x01ec, 0x03ee, 0x07f2, 0x0ffa},
  {0x0ff4, 0x03ef, 0x01f2, 0x00e8, 0x0070, 0x00ec, 0x01f0, 0x03ea, 0x07f3},
  {0x07eb, 0x01eb, 0x00ea, 0x001a, 0x0008, 0x0019, 0x00ee, 0x01ef, 0x07ed},
  {0x03f0, 0x00f2, 0x0073, 0x000b, 0x0000, 0x000a, 0x0071, 0x00f3, 0x07e9},
  {0x07ef, 0x01ee, 0x00ef, 0x0018, 0x0009, 0x001b, 0x00eb, 0x01e9, 0x07ec},
  {0x07f6, 0x03eb, 0x01f3, 0x00ed, 0x0072, 0x00e9, 0x01f1, 0x03ed, 0x07f7},
  {0x0ff6, 0x07f0, 0x03e9, 0x01ed, 0x00f1, 0x01ea, 0x03ec, 0x07f8, 0x0ff9},
  {0x1ffc, 0x0ffc, 0x0ff5, 0x07ea, 0x03f3, 0x03f2, 0x07f5, 0x0ffb, 0x1ffe}};
extern const USHORT FDKaacEnc_huff_ctab6[9][9];
const USHORT FDKaacEnc_huff_ctab6[9][9] = {
  {0x07fe, 0x03fd, 0x01f1, 0x01eb, 0x01f4, 0x01ea, 0x01f0, 0x03fc, 0x07fd},
  {0x03f6, 0x01e5, 0x00ea, 0x006c, 0x0071, 0x0068, 0x00f0, 0x01e6, 0x03f7},
  {0x01f3, 0x00ef, 0x0032, 0x0027, 0x0028, 0x0026, 0x0031, 0x00eb, 0x01f7},
  {0x01e8, 0x006f, 0x002e, 0x0008, 0x0004, 0x0006, 0x0029, 0x006b, 0x01ee},
  {0x01ef, 0x0072, 0x002d, 0x0002, 0x0000, 0x0003, 0x002f, 0x0073, 0x01fa},
  {0x01e7, 0x006e, 0x002b, 0x0007, 0x0001, 0x0005, 0x002c, 0x006d, 0x01ec},
  {0x01f9, 0x00ee, 0x0030, 0x0024, 0x002a, 0x0025, 0x0033, 0x00ec, 0x01f2},
  {0x03f8, 0x01e4, 0x00ed, 0x006a, 0x0070, 0x0069, 0x0074, 0x00f1, 0x03fa},
  {0x07ff, 0x03f9, 0x01f6, 0x01ed, 0x01f8, 0x01e9, 0x01f5, 0x03fb, 0x07fc}};
extern const USHORT FDKaacEnc_huff_ctab7[8][8];
const USHORT FDKaacEnc_huff_ctab7[8][8] = {
  {0x0000, 0x0005, 0x0037, 0x0074, 0x00f2, 0x01eb, 0x03ed, 0x07f7},
  {0x0004, 0x000c, 0x0035, 0x0071, 0x00ec, 0x00ee, 0x01ee, 0x01f5},
  {0x0036, 0x0034, 0x0072, 0x00ea, 0x00f1, 0x01e9, 0x01f3, 0x03f5},
  {0x0073, 0x0070, 0x00eb, 0x00f0, 0x01f1, 0x01f0, 0x03ec, 0x03fa},
  {0x00f3, 0x00ed, 0x01e8, 0x01ef, 0x03ef, 0x03f1, 0x03f9, 0x07fb},
  {0x01ed, 0x00ef, 0x01ea, 0x01f2, 0x03f3, 0x03f8, 0x07f9, 0x07fc},
  {0x03ee, 0x01ec, 0x01f4, 0x03f4, 0x03f7, 0x07f8, 0x0ffd, 0x0ffe},
  {0x07f6, 0x03f0, 0x03f2, 0x03f6, 0x07fa, 0x07fd, 0x0ffc, 0x0fff}};
extern const USHORT FDKaacEnc_huff_ctab8[8][8];
const USHORT FDKaacEnc_huff_ctab8[8][8] = {
  {0x000e, 0x0005, 0x0010, 0x0030, 0x006f, 0x00f1, 0x01fa, 0x03fe},
  {0x0003, 0x0000, 0x0004, 0x0012, 0x002c, 0x006a, 0x0075, 0x00f8},
  {0x000f, 0x0002, 0x0006, 0x0014, 0x002e, 0x0069, 0x0072, 0x00f5},
  {0x002f, 0x0011, 0x0013, 0x002a, 0x0032, 0x006c, 0x00ec, 0x00fa},
  {0x0071, 0x002b, 0x002d, 0x0031, 0x006d, 0x0070, 0x00f2, 0x01f9},
  {0x00ef, 0x0068, 0x0033, 0x006b, 0x006e, 0x00ee, 0x00f9, 0x03fc},
  {0x01f8, 0x0074, 0x0073, 0x00ed, 0x00f0, 0x00f6, 0x01f6, 0x01fd},
  {0x03fd, 0x00f3, 0x00f4, 0x00f7, 0x01f7, 0x01fb, 0x01fc, 0x03ff}};
extern const USHORT FDKaacEnc_huff_ctab9[13][13];
const USHORT FDKaacEnc_huff_ctab9[13][13] = {
  {0x0000, 0x0005, 0x0037, 0x00e7, 0x01de, 0x03ce, 0x03d9, 0x07c8, 0x07cd,
   0x0fc8, 0x0fdd, 0x1fe4, 0x1fec},
  {0x0004, 0x000c, 0x0035, 0x0072, 0x00ea, 0x00ed, 0x01e2, 0x03d1, 0x03d3,
   0x03e0, 0x07d8, 0x0fcf, 0x0fd5},
  {0x0036, 0x0034, 0x0071, 0x00e8, 0x00ec, 0x01e1, 0x03cf, 0x03dd, 0x03db,
   0x07d0, 0x0fc7, 0x0fd4, 0x0fe4},
  {0x00e6, 0x0070, 0x00e9, 0x01dd, 0x01e3, 0x03d2, 0x03dc, 0x07cc, 0x07ca,
   0x07de, 0x0fd8, 0x0fea, 0x1fdb},
  {0x01df, 0x00eb, 0x01dc, 0x01e6, 0x03d5, 0x03de, 0x07cb, 0x07dd, 0x07dc,
   0x0fcd, 0x0fe2, 0x0fe7, 0x1fe1},
  {0x03d0, 0x01e0, 0x01e4, 0x03d6, 0x07c5, 0x07d1, 0x07db, 0x0fd2, 0x07e0,
   0x0fd9, 0x0feb, 0x1fe3, 0x1fe9},
  {0x07c4, 0x01e5, 0x03d7, 0x07c6, 0x07cf, 0x07da, 0x0fcb, 0x0fda, 0x0fe3,
   0x0fe9, 0x1fe6, 0x1ff3, 0x1ff7},
  {0x07d3, 0x03d8, 0x03e1, 0x07d4, 0x07d9, 0x0fd3, 0x0fde, 0x1fdd, 0x1fd9,
   0x1fe2, 0x1fea, 0x1ff1, 0x1ff6},
  {0x07d2, 0x03d4, 0x03da, 0x07c7, 0x07d7, 0x07e2, 0x0fce, 0x0fdb, 0x1fd8,
   0x1fee, 0x3ff0, 0x1ff4, 0x3ff2},
  {0x07e1, 0x03df, 0x07c9, 0x07d6, 0x0fca, 0x0fd0, 0x0fe5, 0x0fe6, 0x1feb,
   0x1fef, 0x3ff3, 0x3ff4, 0x3ff5},
  {0x0fe0, 0x07ce, 0x07d5, 0x0fc6, 0x0fd1, 0x0fe1, 0x1fe0, 0x1fe8, 0x1ff0,
   0x3ff1, 0x3ff8, 0x3ff6, 0x7ffc},
  {0x0fe8, 0x07df, 0x0fc9, 0x0fd7, 0x0fdc, 0x1fdc, 0x1fdf, 0x1fed, 0x1ff5,
   0x3ff9, 0x3ffb, 0x7ffd, 0x7ffe},
  {0x1fe7, 0x0fcc, 0x0fd6, 0x0fdf, 0x1fde, 0x1fda, 0x1fe5, 0x1ff2, 0x3ffa,
   0x3ff7, 0x3ffc, 0x3ffd, 0x7fff}};
extern const USHORT FDKaacEnc_huff_ctab10[13][13];
const USHORT FDKaacEnc_huff_ctab10[13][13] = {
  {0x0022, 0x0008, 0x001d, 0x0026, 0x005f, 0x00d3, 0x01cf, 0x03d0, 0x03d7,
   0x03ed, 0x07f0, 0x07f6, 0x0ffd},
  {0x0007, 0x0000, 0x0001, 0x0009, 0x0020, 0x0054, 0x0060, 0x00d5, 0x00dc,
   0x01d4, 0x03cd, 0x03de, 0x07e7},
  {0x001c, 0x0002, 0x0006, 0x000c, 0x001e, 0x0028, 0x005b, 0x00cd, 0x00d9,
   0x01ce, 0x01dc, 0x03d9, 0x03f1},
  {0x0025, 0x000b, 0x000a, 0x000d, 0x0024, 0x0057, 0x0061, 0x00cc, 0x00dd,
   0x01cc, 0x01de, 0x03d3, 0x03e7},
  {0x005d, 0x0021, 0x001f, 0x0023, 0x0027, 0x0059, 0x0064, 0x00d8, 0x00df,
   0x01d2, 0x01e2, 0x03dd, 0x03ee},
  {0x00d1, 0x0055, 0x0029, 0x0056, 0x0058, 0x0062, 0x00ce, 0x00e0, 0x00e2,
   0x01da, 0x03d4, 0x03e3, 0x07eb},
  {0x01c9, 0x005e, 0x005a, 0x005c, 0x0063, 0x00ca, 0x00da, 0x01c7, 0x01ca,
   0x01e0, 0x03db, 0x03e8, 0x07ec},
  {0x01e3, 0x00d2, 0x00cb, 0x00d0, 0x00d7, 0x00db, 0x01c6, 0x01d5, 0x01d8,
   0x03ca, 0x03da, 0x07ea, 0x07f1},
  {0x01e1, 0x00d4, 0x00cf, 0x00d6, 0x00de, 0x00e1, 0x01d0, 0x01d6, 0x03d1,
   0x03d5, 0x03f2, 0x07ee, 0x07fb},
  {0x03e9, 0x01cd, 0x01c8, 0x01cb, 0x01d1, 0x01d7, 0x01df, 0x03cf, 0x03e0,
   0x03ef, 0x07e6, 0x07f8, 0x0ffa},
  {0x03eb, 0x01dd, 0x01d3, 0x01d9, 0x01db, 0x03d2, 0x03cc, 0x03dc, 0x03ea,
   0x07ed, 0x07f3, 0x07f9, 0x0ff9},
  {0x07f2, 0x03ce, 0x01e4, 0x03cb, 0x03d8, 0x03d6, 0x03e2, 0x03e5, 0x07e8,
   0x07f4, 0x07f5, 0x07f7, 0x0ffb},
  {0x07fa, 0x03ec, 0x03df, 0x03e1, 0x03e4, 0x03e6, 0x03f0, 0x07e9, 0x07ef,
   0x0ff8, 0x0ffe, 0x0ffc, 0x0fff}};
extern const USHORT FDKaacEnc_huff_ctab11[21][17];
const USHORT FDKaacEnc_huff_ctab11[21][17] = {
  {0x0000, 0x0006, 0x0019, 0x003d, 0x009c, 0x00c6, 0x01a7, 0x0390, 0x03c2,
   0x03df, 0x07e6, 0x07f3, 0x0ffb, 0x07ec, 0x0ffa, 0x0ffe, 0x038e},
  {0x0005, 0x0001, 0x0008, 0x0014, 0x0037, 0x0042, 0x0092, 0x00af, 0x0191,
   0x01a5, 0x01b5, 0x039e, 0x03c0, 0x03a2, 0x03cd, 0x07d6, 0x00ae},
  {0x0017, 0x0007, 0x0009, 0x0018, 0x0039, 0x0040, 0x008e, 0x00a3, 0x00b8,
   0x0199, 0x01ac, 0x01c1, 0x03b1, 0x0396, 0x03be, 0x03ca, 0x009d},
  {0x003c, 0x0015, 0x0016, 0x001a, 0x003b, 0x0044, 0x0091, 0x00a5, 0x00be,
   0x0196, 0x01ae, 0x01b9, 0x03a1, 0x0391, 0x03a5, 0x03d5, 0x0094},
  {0x009a, 0x0036, 0x0038, 0x003a, 0x0041, 0x008c, 0x009b, 0x00b0, 0x00c3,
   0x019e, 0x01ab, 0x01bc, 0x039f, 0x038f, 0x03a9, 0x03cf, 0x0093},
  {0x00bf, 0x003e, 0x003f, 0x0043, 0x0045, 0x009e, 0x00a7, 0x00b9, 0x0194,
   0x01a2, 0x01ba, 0x01c3, 0x03a6, 0x03a7, 0x03bb, 0x03d4, 0x009f},
  {0x01a0, 0x008f, 0x008d, 0x0090, 0x0098, 0x00a6, 0x00b6, 0x00c4, 0x019f,
   0x01af, 0x01bf, 0x0399, 0x03bf, 0x03b4, 0x03c9, 0x03e7, 0x00a8},
  {0x01b6, 0x00ab, 0x00a4, 0x00aa, 0x00b2, 0x00c2, 0x00c5, 0x0198, 0x01a4,
   0x01b8, 0x038c, 0x03a4, 0x03c4, 0x03c6, 0x03dd, 0x03e8, 0x00ad},
  {0x03af, 0x0192, 0x00bd, 0x00bc, 0x018e, 0x0197, 0x019a, 0x01a3, 0x01b1,
   0x038d, 0x0398, 0x03b7, 0x03d3, 0x03d1, 0x03db, 0x07dd, 0x00b4},
  {0x03de, 0x01a9, 0x019b, 0x019c, 0x01a1, 0x01aa, 0x01ad, 0x01b3, 0x038b,
   0x03b2, 0x03b8, 0x03ce, 0x03e1, 0x03e0, 0x07d2, 0x07e5, 0x00b7},
  {0x07e3, 0x01bb, 0x01a8, 0x01a6, 0x01b0, 0x01b2, 0x01b7, 0x039b, 0x039a,
   0x03ba, 0x03b5, 0x03d6, 0x07d7, 0x03e4, 0x07d8, 0x07ea, 0x00ba},
  {0x07e8, 0x03a0, 0x01bd, 0x01b4, 0x038a, 0x01c4, 0x0392, 0x03aa, 0x03b0,
   0x03bc, 0x03d7, 0x07d4, 0x07dc, 0x07db, 0x07d5, 0x07f0, 0x00c1},
  {0x07fb, 0x03c8, 0x03a3, 0x0395, 0x039d, 0x03ac, 0x03ae, 0x03c5, 0x03d8,
   0x03e2, 0x03e6, 0x07e4, 0x07e7, 0x07e0, 0x07e9, 0x07f7, 0x0190},
  {0x07f2, 0x0393, 0x01be, 0x01c0, 0x0394, 0x0397, 0x03ad, 0x03c3, 0x03c1,
   0x03d2, 0x07da, 0x07d9, 0x07df, 0x07eb, 0x07f4, 0x07fa, 0x0195},
  {0x07f8, 0x03bd, 0x039c, 0x03ab, 0x03a8, 0x03b3, 0x03b9, 0x03d0, 0x03e3,
   0x03e5, 0x07e2, 0x07de, 0x07ed, 0x07f1, 0x07f9, 0x07fc, 0x0193},
  {0x0ffd, 0x03dc, 0x03b6, 0x03c7, 0x03cc, 0x03cb, 0x03d9, 0x03da, 0x07d3,
   0x07e1, 0x07ee, 0x07ef, 0x07f5, 0x07f6, 0x0ffc, 0x0fff, 0x019d},
  {0x01c2, 0x00b5, 0x00a1, 0x0096, 0x0097, 0x0095, 0x0099, 0x00a0, 0x00a2,
   0x00ac, 0x00a9, 0x00b1, 0x00b3, 0x00bb, 0x00c0, 0x018f, 0x0004},
  {0x0018, 0x002e, 0x0000, 0x005a, 0x00a5, 0x00f8, 0x00b7, 0x0094, 0x00f9,
   0x004d, 0x0021, 0x002b, 0x004f, 0x007b, 0x00bc, 0x0046, 0x0015},
  {0x0042, 0x0037, 0x0078, 0x000d, 0x0068, 0x005f, 0x000d, 0x005e, 0x005a,
   0x00be, 0x0063, 0x007e, 0x001f, 0x0092, 0x001a, 0x00ab, 0x0032},
  {0x00e6, 0x0037, 0x0000, 0x0058, 0x000b, 0x005a, 0x00e1, 0x005d, 0x0029,
   0x0017, 0x007e, 0x0069, 0x00aa, 0x0054, 0x0029, 0x0032, 0x0041},
  {0x0046, 0x00ea, 0x0034, 0x00ea, 0x0011, 0x001b, 0x00a9, 0x0094, 0x00e2,
   0x0031, 0x00d0, 0x00e5, 0x0007, 0x0070, 0x0069, 0x003e, 0x0021}};
extern const ULONG FDKaacEnc_huff_ctabscf[121];
const ULONG FDKaacEnc_huff_ctabscf[121] = {
  0x0003ffe8, 0x0003ffe6, 0x0003ffe7, 0x0003ffe5, 0x0007fff5, 0x0007fff1,
  0x0007ffed, 0x0007fff6, 0x0007ffee, 0x0007ffef, 0x0007fff0, 0x0007fffc,
  0x0007fffd, 0x0007ffff, 0x0007fffe, 0x0007fff7, 0x0007fff8, 0x0007fffb,
  0x0007fff9, 0x0003ffe4, 0x0007fffa, 0x0003ffe3, 0x0001ffef, 0x0001fff0,
  0x0000fff5, 0x0001ffee, 0x0000fff2, 0x0000fff3, 0x0000fff4, 0x0000fff1,
  0x00007ff6, 0x00007ff7, 0x00003ff9, 0x00003ff5, 0x00003ff7, 0x00003ff3,
  0x00003ff6, 0x00003ff2, 0x00001ff7, 0x00001ff5, 0x00000ff9, 0x00000ff7,
  0x00000ff6, 0x000007f9, 0x00000ff4, 0x000007f8, 0x000003f9, 0x000003f7,
  0x000003f5, 0x000001f8, 0x000001f7, 0x000000fa, 0x000000f8, 0x000000f6,
  0x00000079, 0x0000003a, 0x00000038, 0x0000001a, 0x0000000b, 0x00000004,
  0x00000000, 0x0000000a, 0x0000000c, 0x0000001b, 0x00000039, 0x0000003b,
  0x00000078, 0x0000007a, 0x000000f7, 0x000000f9, 0x000001f6, 0x000001f9,
  0x000003f4, 0x000003f6, 0x000003f8, 0x000007f5, 0x000007f4, 0x000007f6,
  0x000007f7, 0x00000ff5, 0x00000ff8, 0x00001ff4, 0x00001ff6, 0x00001ff8,
  0x00003ff8, 0x00003ff4, 0x0000fff0, 0x00007ff4, 0x0000fff6, 0x00007ff5,
  0x0003ffe2, 0x0007ffd9, 0x0007ffda, 0x0007ffdb, 0x0007ffdc, 0x0007ffdd,
  0x0007ffde, 0x0007ffd8, 0x0007ffd2, 0x0007ffd3, 0x0007ffd4, 0x0007ffd5,
  0x0007ffd6, 0x0007fff2, 0x0007ffdf, 0x0007ffe7, 0x0007ffe8, 0x0007ffe9,
  0x0007ffea, 0x0007ffeb, 0x0007ffe6, 0x0007ffe0, 0x0007ffe1, 0x0007ffe2,
  0x0007ffe3, 0x0007ffe4, 0x0007ffe5, 0x0007ffd7, 0x0007ffec, 0x0007fff4,
  0x0007fff3};
static void
FDKaacEnc_count1_2_3_4_5_6_7_8_9_10_11(const SHORT* __restrict values,
                                       const INT width, INT* bitCount) {
  INT i;
  INT bc1_2, bc3_4, bc5_6, bc7_8, bc9_10, bc11, sc;
  INT t0, t1, t2, t3;
  bc1_2 = 0;
  bc3_4 = 0;
  bc5_6 = 0;
  bc7_8 = 0;
  bc9_10 = 0;
  bc11 = 0;
  sc = 0;
  for (i = 0; i < width; i += 4) {
    t0 = values[i + 0];
    t1 = values[i + 1];
    t2 = values[i + 2];
    t3 = values[i + 3];
    bc1_2 += FDKaacEnc_huff_ltab1_2[t0 + 1][t1 + 1][t2 + 1][t3 + 1];
    bc5_6 += FDKaacEnc_huff_ltab5_6[t0 + 4][t1 + 4];
    bc5_6 += FDKaacEnc_huff_ltab5_6[t2 + 4][t3 + 4];
    t0 = fixp_abs(t0);
    t1 = fixp_abs(t1);
    t2 = fixp_abs(t2);
    t3 = fixp_abs(t3);
    bc3_4 += FDKaacEnc_huff_ltab3_4[t0][t1][t2][t3];
    bc7_8 += FDKaacEnc_huff_ltab7_8[t0][t1];
    bc7_8 += FDKaacEnc_huff_ltab7_8[t2][t3];
    bc9_10 += FDKaacEnc_huff_ltab9_10[t0][t1];
    bc9_10 += FDKaacEnc_huff_ltab9_10[t2][t3];
    bc11 += (INT)FDKaacEnc_huff_ltab11[t0][t1];
    bc11 += (INT)FDKaacEnc_huff_ltab11[t2][t3];
    sc += (t0 > 0) + (t1 > 0) + (t2 > 0) + (t3 > 0);
  }
  bitCount[1] = ((bc1_2) >> 16);
  bitCount[2] = ((bc1_2) & 0xffff);
  bitCount[3] = ((bc3_4) >> 16) + sc;
  bitCount[4] = ((bc3_4) & 0xffff) + sc;
  bitCount[5] = ((bc5_6) >> 16);
  bitCount[6] = ((bc5_6) & 0xffff);
  bitCount[7] = ((bc7_8) >> 16) + sc;
  bitCount[8] = ((bc7_8) & 0xffff) + sc;
  bitCount[9] = ((bc9_10) >> 16) + sc;
  bitCount[10] = ((bc9_10) & 0xffff) + sc;
  bitCount[11] = bc11 + sc;
}

static void FDKaacEnc_count3_4_5_6_7_8_9_10_11(const SHORT* __restrict values,
                                               const INT width, INT* bitCount) {
  INT i;
  INT bc3_4, bc5_6, bc7_8, bc9_10, bc11, sc;
  INT t0, t1, t2, t3;
  bc3_4 = 0;
  bc5_6 = 0;
  bc7_8 = 0;
  bc9_10 = 0;
  bc11 = 0;
  sc = 0;
  for (i = 0; i < width; i += 4) {
    t0 = values[i + 0];
    t1 = values[i + 1];
    t2 = values[i + 2];
    t3 = values[i + 3];
    bc5_6 += FDKaacEnc_huff_ltab5_6[t0 + 4][t1 + 4];
    bc5_6 += FDKaacEnc_huff_ltab5_6[t2 + 4][t3 + 4];
    t0 = fixp_abs(t0);
    t1 = fixp_abs(t1);
    t2 = fixp_abs(t2);
    t3 = fixp_abs(t3);
    bc3_4 += FDKaacEnc_huff_ltab3_4[t0][t1][t2][t3];
    bc7_8 += FDKaacEnc_huff_ltab7_8[t0][t1];
    bc7_8 += FDKaacEnc_huff_ltab7_8[t2][t3];
    bc9_10 += FDKaacEnc_huff_ltab9_10[t0][t1];
    bc9_10 += FDKaacEnc_huff_ltab9_10[t2][t3];
    bc11 += (INT)FDKaacEnc_huff_ltab11[t0][t1];
    bc11 += (INT)FDKaacEnc_huff_ltab11[t2][t3];
    sc += (t0 > 0) + (t1 > 0) + (t2 > 0) + (t3 > 0);
  }
  bitCount[1] = 536870911;
  bitCount[2] = 536870911;
  bitCount[3] = ((bc3_4) >> 16) + sc;
  bitCount[4] = ((bc3_4) & 0xffff) + sc;
  bitCount[5] = ((bc5_6) >> 16);
  bitCount[6] = ((bc5_6) & 0xffff);
  bitCount[7] = ((bc7_8) >> 16) + sc;
  bitCount[8] = ((bc7_8) & 0xffff) + sc;
  bitCount[9] = ((bc9_10) >> 16) + sc;
  bitCount[10] = ((bc9_10) & 0xffff) + sc;
  bitCount[11] = bc11 + sc;
}

static void FDKaacEnc_count5_6_7_8_9_10_11(const SHORT* __restrict values,
                                           const INT width, INT* bitCount) {
  INT i;
  INT bc5_6, bc7_8, bc9_10, bc11, sc;
  INT t0, t1;
  bc5_6 = 0;
  bc7_8 = 0;
  bc9_10 = 0;
  bc11 = 0;
  sc = 0;
  for (i = 0; i < width; i += 2) {
    t0 = values[i + 0];
    t1 = values[i + 1];
    bc5_6 += FDKaacEnc_huff_ltab5_6[t0 + 4][t1 + 4];
    t0 = fixp_abs(t0);
    t1 = fixp_abs(t1);
    bc7_8 += FDKaacEnc_huff_ltab7_8[t0][t1];
    bc9_10 += FDKaacEnc_huff_ltab9_10[t0][t1];
    bc11 += (INT)FDKaacEnc_huff_ltab11[t0][t1];
    sc += (t0 > 0) + (t1 > 0);
  }
  bitCount[1] = 536870911;
  bitCount[2] = 536870911;
  bitCount[3] = 536870911;
  bitCount[4] = 536870911;
  bitCount[5] = ((bc5_6) >> 16);
  bitCount[6] = ((bc5_6) & 0xffff);
  bitCount[7] = ((bc7_8) >> 16) + sc;
  bitCount[8] = ((bc7_8) & 0xffff) + sc;
  bitCount[9] = ((bc9_10) >> 16) + sc;
  bitCount[10] = ((bc9_10) & 0xffff) + sc;
  bitCount[11] = bc11 + sc;
}

static void FDKaacEnc_count7_8_9_10_11(const SHORT* __restrict values,
                                       const INT width, INT* bitCount) {
  INT i;
  INT bc7_8, bc9_10, bc11, sc;
  INT t0, t1;
  bc7_8 = 0;
  bc9_10 = 0;
  bc11 = 0;
  sc = 0;
  for (i = 0; i < width; i += 2) {
    t0 = fixp_abs(values[i + 0]);
    t1 = fixp_abs(values[i + 1]);
    bc7_8 += FDKaacEnc_huff_ltab7_8[t0][t1];
    bc9_10 += FDKaacEnc_huff_ltab9_10[t0][t1];
    bc11 += (INT)FDKaacEnc_huff_ltab11[t0][t1];
    sc += (t0 > 0) + (t1 > 0);
  }
  bitCount[1] = 536870911;
  bitCount[2] = 536870911;
  bitCount[3] = 536870911;
  bitCount[4] = 536870911;
  bitCount[5] = 536870911;
  bitCount[6] = 536870911;
  bitCount[7] = ((bc7_8) >> 16) + sc;
  bitCount[8] = ((bc7_8) & 0xffff) + sc;
  bitCount[9] = ((bc9_10) >> 16) + sc;
  bitCount[10] = ((bc9_10) & 0xffff) + sc;
  bitCount[11] = bc11 + sc;
}

static void FDKaacEnc_count9_10_11(const SHORT* __restrict values,
                                   const INT width, INT* bitCount) {
  INT i;
  INT bc9_10, bc11, sc;
  INT t0, t1;
  bc9_10 = 0;
  bc11 = 0;
  sc = 0;
  for (i = 0; i < width; i += 2) {
    t0 = fixp_abs(values[i + 0]);
    t1 = fixp_abs(values[i + 1]);
    bc9_10 += FDKaacEnc_huff_ltab9_10[t0][t1];
    bc11 += (INT)FDKaacEnc_huff_ltab11[t0][t1];
    sc += (t0 > 0) + (t1 > 0);
  }
  bitCount[1] = 536870911;
  bitCount[2] = 536870911;
  bitCount[3] = 536870911;
  bitCount[4] = 536870911;
  bitCount[5] = 536870911;
  bitCount[6] = 536870911;
  bitCount[7] = 536870911;
  bitCount[8] = 536870911;
  bitCount[9] = ((bc9_10) >> 16) + sc;
  bitCount[10] = ((bc9_10) & 0xffff) + sc;
  bitCount[11] = bc11 + sc;
}

static void FDKaacEnc_count11(const SHORT* __restrict values, const INT width,
                              INT* bitCount) {
  INT i;
  INT bc11, sc;
  INT t0, t1;
  bc11 = 0;
  sc = 0;
  for (i = 0; i < width; i += 2) {
    t0 = fixp_abs(values[i + 0]);
    t1 = fixp_abs(values[i + 1]);
    bc11 += (INT)FDKaacEnc_huff_ltab11[t0][t1];
    sc += (t0 > 0) + (t1 > 0);
  }
  bitCount[1] = 536870911;
  bitCount[2] = 536870911;
  bitCount[3] = 536870911;
  bitCount[4] = 536870911;
  bitCount[5] = 536870911;
  bitCount[6] = 536870911;
  bitCount[7] = 536870911;
  bitCount[8] = 536870911;
  bitCount[9] = 536870911;
  bitCount[10] = 536870911;
  bitCount[11] = bc11 + sc;
}

static void FDKaacEnc_countEsc(const SHORT* __restrict values, const INT width,
                               INT* __restrict bitCount) {
  INT i;
  INT bc11, ec, sc;
  INT t0, t1, t00, t01;
  bc11 = 0;
  sc = 0;
  ec = 0;
  for (i = 0; i < width; i += 2) {
    t0 = fixp_abs(values[i + 0]);
    t1 = fixp_abs(values[i + 1]);
    sc += (t0 > 0) + (t1 > 0);
    t00 = fixMin(t0, 16);
    t01 = fixMin(t1, 16);
    bc11 += (INT)FDKaacEnc_huff_ltab11[t00][t01];
    if (t0 >= 16) {
      ec += 5;
      while ((t0 >>= 1) >= 16)
        ec += 2;
    }
    if (t1 >= 16) {
      ec += 5;
      while ((t1 >>= 1) >= 16)
        ec += 2;
    }
  }
  for (i = 0; i < 11; i++)
    bitCount[i] = 536870911;
  bitCount[11] = bc11 + sc + ec;
}

typedef void (*COUNT_FUNCTION)(const SHORT* __restrict values, const INT width,
                               INT* __restrict bitCount);
static const COUNT_FUNCTION countFuncTable[CODE_BOOK_ESC_LAV + 1] = {
  FDKaacEnc_count1_2_3_4_5_6_7_8_9_10_11,
  FDKaacEnc_count1_2_3_4_5_6_7_8_9_10_11,
  FDKaacEnc_count3_4_5_6_7_8_9_10_11,
  FDKaacEnc_count5_6_7_8_9_10_11,
  FDKaacEnc_count5_6_7_8_9_10_11,
  FDKaacEnc_count7_8_9_10_11,
  FDKaacEnc_count7_8_9_10_11,
  FDKaacEnc_count7_8_9_10_11,
  FDKaacEnc_count9_10_11,
  FDKaacEnc_count9_10_11,
  FDKaacEnc_count9_10_11,
  FDKaacEnc_count9_10_11,
  FDKaacEnc_count9_10_11,
  FDKaacEnc_count11,
  FDKaacEnc_count11,
  FDKaacEnc_count11,
  FDKaacEnc_countEsc};
INT FDKaacEnc_bitCount(const SHORT* values, const INT width, INT maxVal,
                       INT* bitCount) {
  if (maxVal == 0)
    bitCount[0] = 0;
  else
    bitCount[0] = 536870911;
  maxVal = fixMin(maxVal, (INT)CODE_BOOK_ESC_LAV);
  countFuncTable[maxVal](values, width, bitCount);
  return (0);
}

INT FDKaacEnc_countValues(SHORT* __restrict values, INT width, INT codeBook) {
  INT i, t0, t1, t2, t3, t00, t01;
  INT codeLength;
  INT signLength;
  INT bitCnt = 0;
  switch (codeBook) {
    case CODE_BOOK_ZERO_NO:
      break;
    case CODE_BOOK_1_NO:
      for (i = 0; i < width; i += 4) {
        t0 = values[i + 0];
        t1 = values[i + 1];
        t2 = values[i + 2];
        t3 = values[i + 3];
        codeLength =
          ((FDKaacEnc_huff_ltab1_2[t0 + 1][t1 + 1][t2 + 1][t3 + 1]) >> 16);
        bitCnt += codeLength;
      }
      break;
    case CODE_BOOK_2_NO:
      for (i = 0; i < width; i += 4) {
        t0 = values[i + 0];
        t1 = values[i + 1];
        t2 = values[i + 2];
        t3 = values[i + 3];
        codeLength =
          ((FDKaacEnc_huff_ltab1_2[t0 + 1][t1 + 1][t2 + 1][t3 + 1]) & 0xffff);
        bitCnt += codeLength;
      }
      break;
    case CODE_BOOK_3_NO:
      for (i = 0; i < width; i += 4) {
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          t0 = fixp_abs(t0);
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          t1 = fixp_abs(t1);
        }
        t2 = values[i + 2];
        if (t2 != 0) {
          signLength++;
          t2 = fixp_abs(t2);
        }
        t3 = values[i + 3];
        if (t3 != 0) {
          signLength++;
          t3 = fixp_abs(t3);
        }
        codeLength = ((FDKaacEnc_huff_ltab3_4[t0][t1][t2][t3]) >> 16);
        bitCnt += codeLength + signLength;
      }
      break;
    case CODE_BOOK_4_NO:
      for (i = 0; i < width; i += 4) {
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          t0 = fixp_abs(t0);
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          t1 = fixp_abs(t1);
        }
        t2 = values[i + 2];
        if (t2 != 0) {
          signLength++;
          t2 = fixp_abs(t2);
        }
        t3 = values[i + 3];
        if (t3 != 0) {
          signLength++;
          t3 = fixp_abs(t3);
        }
        codeLength = ((FDKaacEnc_huff_ltab3_4[t0][t1][t2][t3]) & 0xffff);
        bitCnt += codeLength + signLength;
      }
      break;
    case CODE_BOOK_5_NO:
      for (i = 0; i < width; i += 2) {
        t0 = values[i + 0];
        t1 = values[i + 1];
        codeLength = ((FDKaacEnc_huff_ltab5_6[t0 + 4][t1 + 4]) >> 16);
        bitCnt += codeLength;
      }
      break;
    case CODE_BOOK_6_NO:
      for (i = 0; i < width; i += 2) {
        t0 = values[i + 0];
        t1 = values[i + 1];
        codeLength = ((FDKaacEnc_huff_ltab5_6[t0 + 4][t1 + 4]) & 0xffff);
        bitCnt += codeLength;
      }
      break;
    case CODE_BOOK_7_NO:
      for (i = 0; i < width; i += 2) {
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          t0 = fixp_abs(t0);
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          t1 = fixp_abs(t1);
        }
        codeLength = ((FDKaacEnc_huff_ltab7_8[t0][t1]) >> 16);
        bitCnt += codeLength + signLength;
      }
      break;
    case CODE_BOOK_8_NO:
      for (i = 0; i < width; i += 2) {
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          t0 = fixp_abs(t0);
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          t1 = fixp_abs(t1);
        }
        codeLength = ((FDKaacEnc_huff_ltab7_8[t0][t1]) & 0xffff);
        bitCnt += codeLength + signLength;
      }
      break;
    case CODE_BOOK_9_NO:
      for (i = 0; i < width; i += 2) {
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          t0 = fixp_abs(t0);
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          t1 = fixp_abs(t1);
        }
        codeLength = ((FDKaacEnc_huff_ltab9_10[t0][t1]) >> 16);
        bitCnt += codeLength + signLength;
      }
      break;
    case CODE_BOOK_10_NO:
      for (i = 0; i < width; i += 2) {
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          t0 = fixp_abs(t0);
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          t1 = fixp_abs(t1);
        }
        codeLength = ((FDKaacEnc_huff_ltab9_10[t0][t1]) & 0xffff);
        bitCnt += codeLength + signLength;
      }
      break;
    case CODE_BOOK_ESC_NO:
      for (i = 0; i < width; i += 2) {
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          t0 = fixp_abs(t0);
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          t1 = fixp_abs(t1);
        }
        t00 = fixMin(t0, 16);
        t01 = fixMin(t1, 16);
        codeLength = (INT)FDKaacEnc_huff_ltab11[t00][t01];
        bitCnt += codeLength + signLength;
        if (t0 >= 16) {
          INT n, p;
          n = 0;
          p = t0;
          while ((p >>= 1) >= 16) {
            bitCnt++;
            n++;
          }
          bitCnt += (n + 5);
        }
        if (t1 >= 16) {
          INT n, p;
          n = 0;
          p = t1;
          while ((p >>= 1) >= 16) {
            bitCnt++;
            n++;
          }
          bitCnt += (n + 5);
        }
      }
      break;
    default:
      break;
  }
  return (bitCnt);
}

INT FDKaacEnc_codeValues(SHORT* __restrict values, INT width, INT codeBook,
                         HANDLE_FDK_BITSTREAM hBitstream) {
  INT i, t0, t1, t2, t3, t00, t01;
  INT codeWord, codeLength;
  INT sign, signLength;
  switch (codeBook) {
    case CODE_BOOK_ZERO_NO:
      break;
    case CODE_BOOK_1_NO:
      for (i = 0; i < width; i += 4) {
        t0 = values[i + 0] + 1;
        t1 = values[i + 1] + 1;
        t2 = values[i + 2] + 1;
        t3 = values[i + 3] + 1;
        codeWord = FDKaacEnc_huff_ctab1[t0][t1][t2][t3];
        codeLength = ((FDKaacEnc_huff_ltab1_2[t0][t1][t2][t3]) >> 16);
        FDKwriteBits(hBitstream, codeWord, codeLength);
      }
      break;
    case CODE_BOOK_2_NO:
      for (i = 0; i < width; i += 4) {
        t0 = values[i + 0] + 1;
        t1 = values[i + 1] + 1;
        t2 = values[i + 2] + 1;
        t3 = values[i + 3] + 1;
        codeWord = FDKaacEnc_huff_ctab2[t0][t1][t2][t3];
        codeLength = ((FDKaacEnc_huff_ltab1_2[t0][t1][t2][t3]) & 0xffff);
        FDKwriteBits(hBitstream, codeWord, codeLength);
      }
      break;
    case CODE_BOOK_3_NO:
      for (i = 0; i < width; i += 4) {
        sign = 0;
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          sign <<= 1;
          if (t0 < 0) {
            sign |= 1;
            t0 = fixp_abs(t0);
          }
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          sign <<= 1;
          if (t1 < 0) {
            sign |= 1;
            t1 = fixp_abs(t1);
          }
        }
        t2 = values[i + 2];
        if (t2 != 0) {
          signLength++;
          sign <<= 1;
          if (t2 < 0) {
            sign |= 1;
            t2 = fixp_abs(t2);
          }
        }
        t3 = values[i + 3];
        if (t3 != 0) {
          signLength++;
          sign <<= 1;
          if (t3 < 0) {
            sign |= 1;
            t3 = fixp_abs(t3);
          }
        }
        codeWord = FDKaacEnc_huff_ctab3[t0][t1][t2][t3];
        codeLength = ((FDKaacEnc_huff_ltab3_4[t0][t1][t2][t3]) >> 16);
        FDKwriteBits(hBitstream, codeWord, codeLength);
        FDKwriteBits(hBitstream, sign, signLength);
      }
      break;
    case CODE_BOOK_4_NO:
      for (i = 0; i < width; i += 4) {
        sign = 0;
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          sign <<= 1;
          if (t0 < 0) {
            sign |= 1;
            t0 = fixp_abs(t0);
          }
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          sign <<= 1;
          if (t1 < 0) {
            sign |= 1;
            t1 = fixp_abs(t1);
          }
        }
        t2 = values[i + 2];
        if (t2 != 0) {
          signLength++;
          sign <<= 1;
          if (t2 < 0) {
            sign |= 1;
            t2 = fixp_abs(t2);
          }
        }
        t3 = values[i + 3];
        if (t3 != 0) {
          signLength++;
          sign <<= 1;
          if (t3 < 0) {
            sign |= 1;
            t3 = fixp_abs(t3);
          }
        }
        codeWord = FDKaacEnc_huff_ctab4[t0][t1][t2][t3];
        codeLength = ((FDKaacEnc_huff_ltab3_4[t0][t1][t2][t3]) & 0xffff);
        FDKwriteBits(hBitstream, codeWord, codeLength);
        FDKwriteBits(hBitstream, sign, signLength);
      }
      break;
    case CODE_BOOK_5_NO:
      for (i = 0; i < width; i += 2) {
        t0 = values[i + 0] + 4;
        t1 = values[i + 1] + 4;
        codeWord = FDKaacEnc_huff_ctab5[t0][t1];
        codeLength = ((FDKaacEnc_huff_ltab5_6[t0][t1]) >> 16);
        FDKwriteBits(hBitstream, codeWord, codeLength);
      }
      break;
    case CODE_BOOK_6_NO:
      for (i = 0; i < width; i += 2) {
        t0 = values[i + 0] + 4;
        t1 = values[i + 1] + 4;
        codeWord = FDKaacEnc_huff_ctab6[t0][t1];
        codeLength = ((FDKaacEnc_huff_ltab5_6[t0][t1]) & 0xffff);
        FDKwriteBits(hBitstream, codeWord, codeLength);
      }
      break;
    case CODE_BOOK_7_NO:
      for (i = 0; i < width; i += 2) {
        sign = 0;
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          sign <<= 1;
          if (t0 < 0) {
            sign |= 1;
            t0 = fixp_abs(t0);
          }
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          sign <<= 1;
          if (t1 < 0) {
            sign |= 1;
            t1 = fixp_abs(t1);
          }
        }
        codeWord = FDKaacEnc_huff_ctab7[t0][t1];
        codeLength = ((FDKaacEnc_huff_ltab7_8[t0][t1]) >> 16);
        FDKwriteBits(hBitstream, codeWord, codeLength);
        FDKwriteBits(hBitstream, sign, signLength);
      }
      break;
    case CODE_BOOK_8_NO:
      for (i = 0; i < width; i += 2) {
        sign = 0;
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          sign <<= 1;
          if (t0 < 0) {
            sign |= 1;
            t0 = fixp_abs(t0);
          }
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          sign <<= 1;
          if (t1 < 0) {
            sign |= 1;
            t1 = fixp_abs(t1);
          }
        }
        codeWord = FDKaacEnc_huff_ctab8[t0][t1];
        codeLength = ((FDKaacEnc_huff_ltab7_8[t0][t1]) & 0xffff);
        FDKwriteBits(hBitstream, codeWord, codeLength);
        FDKwriteBits(hBitstream, sign, signLength);
      }
      break;
    case CODE_BOOK_9_NO:
      for (i = 0; i < width; i += 2) {
        sign = 0;
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          sign <<= 1;
          if (t0 < 0) {
            sign |= 1;
            t0 = fixp_abs(t0);
          }
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          sign <<= 1;
          if (t1 < 0) {
            sign |= 1;
            t1 = fixp_abs(t1);
          }
        }
        codeWord = FDKaacEnc_huff_ctab9[t0][t1];
        codeLength = ((FDKaacEnc_huff_ltab9_10[t0][t1]) >> 16);
        FDKwriteBits(hBitstream, codeWord, codeLength);
        FDKwriteBits(hBitstream, sign, signLength);
      }
      break;
    case CODE_BOOK_10_NO:
      for (i = 0; i < width; i += 2) {
        sign = 0;
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          sign <<= 1;
          if (t0 < 0) {
            sign |= 1;
            t0 = fixp_abs(t0);
          }
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          sign <<= 1;
          if (t1 < 0) {
            sign |= 1;
            t1 = fixp_abs(t1);
          }
        }
        codeWord = FDKaacEnc_huff_ctab10[t0][t1];
        codeLength = ((FDKaacEnc_huff_ltab9_10[t0][t1]) & 0xffff);
        FDKwriteBits(hBitstream, codeWord, codeLength);
        FDKwriteBits(hBitstream, sign, signLength);
      }
      break;
    case CODE_BOOK_ESC_NO:
      for (i = 0; i < width; i += 2) {
        sign = 0;
        signLength = 0;
        t0 = values[i + 0];
        if (t0 != 0) {
          signLength++;
          sign <<= 1;
          if (t0 < 0) {
            sign |= 1;
            t0 = fixp_abs(t0);
          }
        }
        t1 = values[i + 1];
        if (t1 != 0) {
          signLength++;
          sign <<= 1;
          if (t1 < 0) {
            sign |= 1;
            t1 = fixp_abs(t1);
          }
        }
        t00 = fixMin(t0, 16);
        t01 = fixMin(t1, 16);
        codeWord = FDKaacEnc_huff_ctab11[t00][t01];
        codeLength = (INT)FDKaacEnc_huff_ltab11[t00][t01];
        FDKwriteBits(hBitstream, codeWord, codeLength);
        FDKwriteBits(hBitstream, sign, signLength);
        if (t0 >= 16) {
          INT n, p;
          n = 0;
          p = t0;
          while ((p >>= 1) >= 16) {
            FDKwriteBits(hBitstream, 1, 1);
            n++;
          }
          FDKwriteBits(hBitstream, 0, 1);
          FDKwriteBits(hBitstream, t0 - (1 << (n + 4)), n + 4);
        }
        if (t1 >= 16) {
          INT n, p;
          n = 0;
          p = t1;
          while ((p >>= 1) >= 16) {
            FDKwriteBits(hBitstream, 1, 1);
            n++;
          }
          FDKwriteBits(hBitstream, 0, 1);
          FDKwriteBits(hBitstream, t1 - (1 << (n + 4)), n + 4);
        }
      }
      break;
    default:
      break;
  }
  return (0);
}

INT FDKaacEnc_codeScalefactorDelta(INT delta, HANDLE_FDK_BITSTREAM hBitstream) {
  INT codeWord, codeLength;
  if (uint32_t(fixp_abs(delta)) > CODE_BOOK_SCF_LAV)
    return (1);
  codeWord = FDKaacEnc_huff_ctabscf[delta + CODE_BOOK_SCF_LAV];
  codeLength = (INT)FDKaacEnc_huff_ltabscf[delta + CODE_BOOK_SCF_LAV];
  FDKwriteBits(hBitstream, codeWord, codeLength);
  return (0);
}
}
