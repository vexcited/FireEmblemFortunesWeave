#pragma once

#include <cstddef>
#include <cstdint>

#include "nn/fontll/itype/fs_api.h"
#include "nn/fontll/itype/fs_nnfontll.h"

namespace nn::fontll {

struct Metrics {
  uint16_t unitsPerEm;
  uint8_t _2[0x93a];
};

struct OtfKerningTable {
  struct KerningPair {
    uint16_t first;
    uint16_t second;
    int16_t xAdvance;
    int16_t xPlacement;
  };

  int count;
  KerningPair* pairs;
  float scale;
};

using KerningAllocateFunction = void* (*)(
  size_t size, size_t alignment, void* pUserData);
using KerningFreeFunction = void (*)(void* p, void* pUserData);

class ScalableFontEngine {
public:
  enum Flags {
    Flags_NoEffect,
    Flags_OutlinedFilled,
    Flags_OutlinedUnfilled,
  };

  ScalableFontEngine();
  ~ScalableFontEngine();

  int Initialize(void* pWorkBuffer, uint32_t workBufferSize);
  int Finalize();
  void* GetPointerToWorkBuffer();

  int GetFontMetrics(Metrics* pMetrics);
  int LoadFont(char* pName, const void* pData, uint32_t index, uint32_t size);
  int SetFont(char* pName);
  int SetScale(int s00, int s01, int s10, int s11);
  int SetBoldWeight(int weight);
  int SetFlags(Flags flags);
  int SetOutlineWidth(uint16_t width);
  int SetAutoHint(bool isEnabled);
  int GetError();

  int GetAdvance(
    int16_t* pDx, int16_t* pDy, int* pFixedDx, int* pFixedDy, uint32_t id,
    uint16_t type);
  int GetKerning(int* pDx, int* pDy, uint32_t id1, uint32_t id2);
  bool CheckTtfKernTableExist();

  OtfKerningTable* InitializeOtfKerningTable(
    KerningAllocateFunction allocate, void* pUserData);
  OtfKerningTable* InitializeOtfKerningTable(
    KerningAllocateFunction allocate, void* pUserData, bool isPalt);
  void FinalizeOtfKerningTable(
    OtfKerningTable* pTable, KerningFreeFunction free, void* pUserData);
  int AcquireOtfKerning(
    const OtfKerningTable* pTable, uint32_t first, uint32_t second,
    uint32_t size);
  int AcquireRawOtfKerning(
    const OtfKerningTable* pTable, uint32_t first, uint32_t second);
  int AcquireOtfKerningFirst(
    const OtfKerningTable* pTable, uint32_t first, uint32_t size);
  int AcquireRawOtfKerningFirst(const OtfKerningTable* pTable, uint32_t first);
  int AcquireOtfKerningLast(
    const OtfKerningTable* pTable, uint32_t last, uint32_t size);
  int AcquireRawOtfKerningLast(const OtfKerningTable* pTable, uint32_t last);
  bool BinarySearchForOtfKerning(
    int* pXAdvance, int* pXPlacement, const OtfKerningTable* pTable,
    uint32_t first, uint32_t second);

  FS_GLYPHMAP* AcquireGlyphmap(uint32_t id, uint16_t type);
  bool CheckGlyphExist(uint32_t id);
  int ReleasesGlyph(void* pGlyph);

private:
  int PickKerningFromGposTable(
    OtfKerningTable* pTable, const void* pGpos, bool isPalt);

  FS_STATE m_State;
  uint8_t m_Reserved[0x28];
  void* m_pWorkBuffer;
};

}
