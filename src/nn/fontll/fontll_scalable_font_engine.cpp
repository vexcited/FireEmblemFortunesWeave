#include <cmath>
#include <cstring>

#include "nn/fontll/fontll_scalable_font_engine.hpp"

namespace nn::fontll {

namespace {

constexpr uint32_t TagGpos = 0x47504f53;
constexpr uint32_t TagKern = 0x6b65726e;
constexpr uint16_t AnyGlyph = 0xffff;

constexpr int32_t FlagAutoHint = 0x1000000;

const int32_t FlagTable[] = {
  static_cast<int32_t>(0xfffffe03),
  0x80,
  0x40,
};

void* OpenNothing(const char*, const char*) {
  return nullptr;
}

int CloseNothing(void*) {
  return 0;
}

size_t ReadNothing(void*, size_t, size_t, void*) {
  return 0;
}

int SeekNothing(void*, long, int) {
  return 0;
}

int TellNothing(void*) {
  return 0;
}

int ErrorNothing(void*) {
  return 0;
}

const OtfKerningTable::KerningPair* FindKerningPair(
  const OtfKerningTable* pTable, uint32_t first, uint32_t second
) {
  int low = 0;
  int high = pTable->count - 1;

  while (low <= high) {
    int middle = (low + high) / 2;
    const OtfKerningTable::KerningPair& pair = pTable->pairs[middle];

    if (first < pair.first) {
      high = middle - 1;
    }
    else if (first > pair.first) {
      low = middle + 1;
    }
    else if (second < pair.second) {
      high = middle - 1;
    }
    else if (second > pair.second) {
      low = middle + 1;
    }
    else {
      return &pair;
    }
  }

  return nullptr;
}

int16_t FindFirstKerning(const OtfKerningTable* pTable, uint32_t glyph) {
  const OtfKerningTable::KerningPair* pPair =
    FindKerningPair(pTable, glyph, AnyGlyph);
  return pPair != nullptr ? pPair->xPlacement : 0;
}

int16_t FindLastKerning(const OtfKerningTable* pTable, uint32_t glyph) {
  const OtfKerningTable::KerningPair* pPair =
    FindKerningPair(pTable, glyph, AnyGlyph);
  return pPair != nullptr ? pPair->xAdvance - pPair->xPlacement : 0;
}

int ScaleKerning(float value, const OtfKerningTable* pTable, uint32_t size) {
  return static_cast<int>(std::floor(value * pTable->scale * size + 0.5f));
}

}

ScalableFontEngine::ScalableFontEngine()
  : m_State(), m_Reserved(), m_pWorkBuffer() {}

ScalableFontEngine::~ScalableFontEngine() {}

int ScalableFontEngine::Initialize(
  void* pWorkBuffer, uint32_t workBufferSize
) {
  nnfontllSetFsFunctions(
    OpenNothing, CloseNothing, ReadNothing, SeekNothing, TellNothing,
    ErrorNothing);
  m_pWorkBuffer = pWorkBuffer;
  return FS_init_ex(&m_State, pWorkBuffer, workBufferSize);
}

int ScalableFontEngine::Finalize() {
  return FSS_exit(&m_State);
}

void* ScalableFontEngine::GetPointerToWorkBuffer() {
  return m_pWorkBuffer;
}

int ScalableFontEngine::GetFontMetrics(Metrics* pMetrics) {
  return FSS_font_metrics(&m_State, pMetrics);
}

int ScalableFontEngine::LoadFont(
  char* pName, const void* pData, uint32_t index, uint32_t size
) {
  return FSS_load_font(&m_State, nullptr, pData, index, size, pName);
}

int ScalableFontEngine::SetScale(int s00, int s01, int s10, int s11) {
  return FSS_set_scale(&m_State, s00, s01, s10, s11);
}

int ScalableFontEngine::SetBoldWeight(int weight) {
  return FS_set_bold_pct(&m_State, weight);
}

int ScalableFontEngine::SetFlags(Flags flags) {
  return FS_set_flags(&m_State, FlagTable[flags]);
}

int ScalableFontEngine::SetOutlineWidth(uint16_t width) {
  return FS_set_outline_width(&m_State, width);
}

int ScalableFontEngine::GetAdvance(
  int16_t* pDx, int16_t* pDy, int* pFixedDx, int* pFixedDy, uint32_t id,
  uint16_t type
) {
  return FSS_get_advance(&m_State, id, type, pDx, pDy, pFixedDx, pFixedDy);
}

int ScalableFontEngine::GetKerning(
  int* pDx, int* pDy, uint32_t id1, uint32_t id2
) {
  return FSS_get_kerning(&m_State, id1, id2, pDx, pDy);
}

bool ScalableFontEngine::CheckTtfKernTableExist() {
  uint32_t length = 0;
  return FSS_get_table(&m_State, TagKern, 1, &length) != nullptr;
}

OtfKerningTable* ScalableFontEngine::InitializeOtfKerningTable(
  KerningAllocateFunction allocate, void* pUserData
) {
  return InitializeOtfKerningTable(allocate, pUserData, false);
}

OtfKerningTable* ScalableFontEngine::InitializeOtfKerningTable(
  KerningAllocateFunction allocate, void* pUserData, bool isPalt
) {
  uint32_t length = 0;
  uint8_t* pGpos = FSS_get_table(&m_State, TagGpos, 2, &length);
  if (pGpos == nullptr) {
    return nullptr;
  }

  OtfKerningTable* pTable = static_cast<OtfKerningTable*>(
    allocate(sizeof(OtfKerningTable), 4, pUserData));
  pTable->count = PickKerningFromGposTable(nullptr, pGpos, isPalt);
  pTable->pairs = pTable->count != 0
    ? static_cast<OtfKerningTable::KerningPair*>(allocate(
      sizeof(OtfKerningTable::KerningPair) * pTable->count, 4, pUserData))
    : nullptr;
  PickKerningFromGposTable(pTable, pGpos, isPalt);

  Metrics metrics;
  std::memset(&metrics, 0, sizeof(metrics));
  FSS_font_metrics(&m_State, &metrics);
  pTable->scale = 1.0f / metrics.unitsPerEm;

  FSS_free_table(&m_State, pGpos);
  return pTable;
}

void ScalableFontEngine::FinalizeOtfKerningTable(
  OtfKerningTable* pTable, KerningFreeFunction free, void* pUserData
) {
  if (pTable->pairs != nullptr) {
    free(pTable->pairs, pUserData);
  }
  free(pTable, pUserData);
}

int ScalableFontEngine::AcquireOtfKerning(
  const OtfKerningTable* pTable, uint32_t first, uint32_t second,
  uint32_t size
) {
  int kerning = AcquireRawOtfKerning(pTable, first, second);
  return ScaleKerning(kerning, pTable, size);
}

int ScalableFontEngine::AcquireRawOtfKerning(
  const OtfKerningTable* pTable, uint32_t first, uint32_t second
) {
  if (pTable == nullptr) {
    return 0;
  }

  uint16_t firstGlyph = map_char(&m_State, first, 0);
  uint16_t secondGlyph = map_char(&m_State, second, 0);

  int16_t kerning = FindLastKerning(pTable, firstGlyph);
  kerning += FindFirstKerning(pTable, secondGlyph);

  const OtfKerningTable::KerningPair* pPair =
    FindKerningPair(pTable, firstGlyph, secondGlyph);
  kerning += pPair != nullptr ? pPair->xAdvance : 0;
  return kerning;
}

int ScalableFontEngine::AcquireOtfKerningFirst(
  const OtfKerningTable* pTable, uint32_t first, uint32_t size
) {
  float kerning = 0.0f;
  if (pTable != nullptr) {
    kerning = FindFirstKerning(pTable, map_char(&m_State, first, 0));
  }
  return ScaleKerning(kerning, pTable, size);
}

int ScalableFontEngine::AcquireRawOtfKerningFirst(
  const OtfKerningTable* pTable, uint32_t first
) {
  if (pTable == nullptr) {
    return 0;
  }
  return FindFirstKerning(pTable, map_char(&m_State, first, 0));
}

int ScalableFontEngine::AcquireOtfKerningLast(
  const OtfKerningTable* pTable, uint32_t last, uint32_t size
) {
  float kerning = 0.0f;
  if (pTable != nullptr) {
    kerning = FindLastKerning(pTable, map_char(&m_State, last, 0));
  }
  return ScaleKerning(kerning, pTable, size);
}

int ScalableFontEngine::AcquireRawOtfKerningLast(
  const OtfKerningTable* pTable, uint32_t last
) {
  if (pTable == nullptr) {
    return 0;
  }
  return FindLastKerning(pTable, map_char(&m_State, last, 0));
}

bool ScalableFontEngine::BinarySearchForOtfKerning(
  int* pXAdvance, int* pXPlacement, const OtfKerningTable* pTable,
  uint32_t first, uint32_t second
) {
  *pXAdvance = 0;
  *pXPlacement = 0;

  const OtfKerningTable::KerningPair* pPair =
    FindKerningPair(pTable, first, second);
  if (pPair == nullptr) {
    return false;
  }

  *pXAdvance = pPair->xAdvance;
  *pXPlacement = pPair->xPlacement;
  return true;
}

int ScalableFontEngine::SetFont(char* pName) {
  int result = FSS_set_font(&m_State, pName);
  if (result == 0) {
    result = FSS_set_cmap(&m_State, 3, 10);
    if (result != 0) {
      result = FSS_set_cmap(&m_State, 3, 1);
    }
  }
  return result;
}

int ScalableFontEngine::GetError() {
  return FS_error(&m_State);
}

FS_GLYPHMAP* ScalableFontEngine::AcquireGlyphmap(uint32_t id, uint16_t type) {
  return FSS_get_glyphmap(&m_State, id, type);
}

bool ScalableFontEngine::CheckGlyphExist(uint32_t id) {
  return FSS_map_char(&m_State, id) != 0;
}

int ScalableFontEngine::ReleasesGlyph(void* pGlyph) {
  return FSS_free_char(&m_State, pGlyph);
}

int ScalableFontEngine::SetAutoHint(bool isEnabled) {
  return FS_set_flags(&m_State, isEnabled ? FlagAutoHint : ~FlagAutoHint);
}

}
