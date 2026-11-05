#include <algorithm>

#include "nn/fontll/fontll_otf_kerning_table.hpp"

namespace nn::fontll::detail {

namespace {

constexpr uint16_t AnyGlyph = 0xffff;

uint16_t Read16(const uint8_t* p) {
  return __builtin_bswap16(*reinterpret_cast<const uint16_t*>(p));
}

uint16_t Acquire16(const uint8_t** pp) {
  uint16_t value = Read16(*pp);
  *pp += 2;
  return value;
}

bool MatchTag(const uint8_t* p, const char* tag) {
  return p[0] == static_cast<uint8_t>(tag[0])
    && p[1] == static_cast<uint8_t>(tag[1])
    && p[2] == static_cast<uint8_t>(tag[2])
    && p[3] == static_cast<uint8_t>(tag[3]);
}

void ReadValues(
  uint16_t* pXAdvance, uint16_t* pXPlacement, const uint8_t** pp,
  uint16_t format
) {
  *pXAdvance = 0;
  *pXPlacement = 0;

  if ((format & 0x1) != 0) {
    *pXPlacement = Acquire16(pp);
  }
  if ((format & 0x2) != 0) {
    *pp += 2;
  }
  if ((format & 0x4) != 0) {
    *pXAdvance = Acquire16(pp);
  }
  if ((format & 0x8) != 0) {
    *pp += 2;
  }
  if ((format & 0x10) != 0) {
    *pp += 2;
  }
  if ((format & 0x20) != 0) {
    *pp += 2;
  }
  if ((format & 0x40) != 0) {
    *pp += 2;
  }
  if ((format & 0x80) != 0) {
    *pp += 2;
  }
}

void SkipValues(const uint8_t** pp, uint16_t format) {
  if ((format & 0x1) != 0) {
    *pp += 2;
  }
  if ((format & 0x2) != 0) {
    *pp += 2;
  }
  if ((format & 0x4) != 0) {
    *pp += 2;
  }
  if ((format & 0x8) != 0) {
    *pp += 2;
  }
  if ((format & 0x10) != 0) {
    *pp += 2;
  }
  if ((format & 0x20) != 0) {
    *pp += 2;
  }
  if ((format & 0x40) != 0) {
    *pp += 2;
  }
  if ((format & 0x80) != 0) {
    *pp += 2;
  }
}

void AddPair(
  int* pCount, OtfKerningTable* pTable, uint16_t first, uint16_t second,
  uint16_t xAdvance, uint16_t xPlacement
) {
  if ((xAdvance | xPlacement) == 0) {
    return;
  }

  if (pTable != nullptr) {
    OtfKerningTable::KerningPair& pair = pTable->pairs[*pCount];
    pair.first = first;
    pair.second = second;
    pair.xAdvance = xAdvance;
    pair.xPlacement = xPlacement;
  }
  ++*pCount;
}

uint16_t FindCoveredGlyph(
  const void* pBase, uint16_t offset, uint16_t index
) {
  const uint8_t* pCoverage = static_cast<const uint8_t*>(pBase) + offset;
  uint16_t format = Read16(pCoverage);
  uint16_t count = Read16(pCoverage + 2);

  if (format == 1) {
    for (uint16_t i = 0; i < count; ++i) {
      if (index == 0) {
        return Read16(pCoverage + 4 + 2 * i);
      }
      --index;
    }
    return 0;
  }

  for (uint16_t i = 0; i < count; ++i) {
    const uint8_t* pRange = pCoverage + 4 + 6 * i;
    uint16_t start = Read16(pRange);
    uint16_t end = Read16(pRange + 2);
    for (uint16_t glyph = start; glyph <= end; ++glyph) {
      if (index == 0) {
        return glyph;
      }
      --index;
    }
  }
  return 0;
}

[[gnu::always_inline]] inline void AddClassPairs(
  int* pCount, OtfKerningTable* pTable, const void* pBase, uint16_t first,
  uint16_t classDefOffset, uint16_t classValue, uint16_t xAdvance,
  uint16_t xPlacement
) {
  const uint8_t* pClassDef =
    static_cast<const uint8_t*>(pBase) + classDefOffset;

  if (Read16(pClassDef) == 1) {
    uint16_t startGlyph = Read16(pClassDef + 2);
    uint16_t glyphCount = Read16(pClassDef + 4);
    for (uint16_t i = 0; i < glyphCount; ++i) {
      if (Read16(pClassDef + 6 + 2 * i) == classValue) {
        AddPair(
          pCount, pTable, first, startGlyph + i, xAdvance, xPlacement);
      }
    }
    return;
  }

  uint16_t rangeCount = Read16(pClassDef + 2);
  for (uint16_t i = 0; i < rangeCount; ++i) {
    const uint8_t* pRange = pClassDef + 4 + 6 * i;
    if (Read16(pRange + 4) != classValue) {
      continue;
    }

    uint16_t start = Read16(pRange);
    uint16_t end = Read16(pRange + 2);
    for (uint16_t glyph = start; glyph <= end; ++glyph) {
      AddPair(pCount, pTable, first, glyph, xAdvance, xPlacement);
    }
  }
}

[[gnu::always_inline]] inline void PickGlyphPairs(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t subtableOffset, const uint8_t** pp
) {
  const uint8_t* pSubtable =
    static_cast<const uint8_t*>(pBase) + subtableOffset;
  uint16_t coverageOffset = Acquire16(pp);
  uint16_t valueFormat1 = Acquire16(pp);
  uint16_t valueFormat2 = Acquire16(pp);
  uint16_t pairSetCount = Acquire16(pp);

  for (uint16_t i = 0; i < pairSetCount; ++i) {
    uint16_t pairSetOffset = Acquire16(pp);
    uint16_t first =
      FindCoveredGlyph(pBase, subtableOffset + coverageOffset, i);

    const uint8_t* pPairSet = pSubtable + pairSetOffset;
    uint16_t pairCount = Read16(pPairSet);
    const uint8_t* pRecord = pPairSet + 2;
    for (uint16_t j = 0; j < pairCount; ++j) {
      uint16_t second = Acquire16(&pRecord);
      uint16_t xAdvance;
      uint16_t xPlacement;
      ReadValues(&xAdvance, &xPlacement, &pRecord, valueFormat1);
      SkipValues(&pRecord, valueFormat2);
      AddPair(pCount, pTable, first, second, xAdvance, xPlacement);
    }
  }
}

[[gnu::always_inline]] inline void PickClassPairs(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t subtableOffset, const uint8_t** pp
) {
  Acquire16(pp);
  uint16_t valueFormat1 = Acquire16(pp);
  uint16_t valueFormat2 = Acquire16(pp);
  uint16_t classDef1Offset = Acquire16(pp);
  uint16_t classDef2Offset = Acquire16(pp);
  uint16_t class1Count = Acquire16(pp);
  uint16_t class2Count = Acquire16(pp);

  for (uint16_t class1 = 0; class1 < class1Count; ++class1) {
    for (uint16_t class2 = 0; class2 < class2Count; ++class2) {
      uint16_t xAdvance;
      uint16_t xPlacement;
      ReadValues(&xAdvance, &xPlacement, pp, valueFormat1);
      SkipValues(pp, valueFormat2);
      ReadClass1(
        pCount, pTable, pBase, subtableOffset + classDef1Offset,
        subtableOffset + classDef2Offset, class1, class2, xAdvance,
        xPlacement);
    }
  }
}

[[gnu::always_inline]] inline void PickArrayPositioningValues(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t subtableOffset, const uint8_t** pp
) {
  uint16_t coverageOffset = Acquire16(pp);
  uint16_t valueFormat = Acquire16(pp);
  Acquire16(pp);

  const uint8_t* pCoverage =
    static_cast<const uint8_t*>(pBase) + subtableOffset + coverageOffset;
  uint16_t glyphCount = Read16(pCoverage + 2);
  for (uint16_t i = 0; i < glyphCount; ++i) {
    uint16_t glyph =
      FindCoveredGlyph(pBase, subtableOffset + coverageOffset, i);
    uint16_t xAdvance;
    uint16_t xPlacement;
    ReadValues(&xAdvance, &xPlacement, pp, valueFormat);
    AddPair(pCount, pTable, glyph, AnyGlyph, xAdvance, xPlacement);
  }
}

}

uint16_t AcquireUint16Value(const uint8_t** pp) {
  return Acquire16(pp);
}

uint16_t PickFeatureTableOffset(
  const void* pGpos, uint16_t scriptListOffset, uint16_t featureListOffset,
  const char* pTag
) {
  const uint8_t* pBase = static_cast<const uint8_t*>(pGpos);
  const uint8_t* pScriptList = pBase + scriptListOffset;
  uint16_t scriptCount = Read16(pScriptList);

  const uint8_t* pLangSys = nullptr;
  for (uint16_t i = 0; i < scriptCount; ++i) {
    const uint8_t* pRecord = pScriptList + 2 + 6 * i;
    if (!MatchTag(pRecord, "latn") && !MatchTag(pRecord, "kana")
      && !MatchTag(pRecord, "DFLT")) {
      continue;
    }

    const uint8_t* pScript = pScriptList + Read16(pRecord + 4);
    uint16_t langSysOffset = Read16(pScript);
    if (langSysOffset == 0) {
      if (Read16(pScript + 2) == 0) {
        continue;
      }
      langSysOffset = Read16(pScript + 8);
    }
    pLangSys = pScript + langSysOffset;
    break;
  }

  if (pLangSys == nullptr) {
    return 0;
  }

  uint16_t featureCount = Read16(pLangSys + 4);
  const uint8_t* pFeatureList = pBase + featureListOffset;
  for (uint16_t i = 0; i < featureCount; ++i) {
    uint16_t featureIndex = Read16(pLangSys + 6 + 2 * i);
    const uint8_t* pRecord = pFeatureList + 2 + 6 * featureIndex;
    if (MatchTag(pRecord, pTag)) {
      return Read16(pRecord + 4);
    }
  }
  return 0;
}

uint16_t ReadCoverage(const void* pBase, uint16_t offset, uint16_t index) {
  return FindCoveredGlyph(pBase, offset, index);
}

void ReadXValues(
  uint16_t* pXAdvance, uint16_t* pXPlacement, const uint8_t** pp,
  uint16_t format
) {
  ReadValues(pXAdvance, pXPlacement, pp, format);
}

void SkipXValues(const uint8_t** pp, uint16_t format) {
  SkipValues(pp, format);
}

void AddXValuesToOtfKerningTable(
  int* pCount, OtfKerningTable* pTable, uint16_t first, uint16_t second,
  uint16_t xAdvance, uint16_t xPlacement
) {
  AddPair(pCount, pTable, first, second, xAdvance, xPlacement);
}

void ReadClass1(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t classDef1Offset, uint16_t classDef2Offset, uint16_t class1,
  uint16_t class2, uint16_t xAdvance, uint16_t xPlacement
) {
  const uint8_t* pClassDef =
    static_cast<const uint8_t*>(pBase) + classDef1Offset;

  if (Read16(pClassDef) == 1) {
    uint16_t startGlyph = Read16(pClassDef + 2);
    uint16_t glyphCount = Read16(pClassDef + 4);
    for (uint16_t i = 0; i < glyphCount; ++i) {
      if (Read16(pClassDef + 6 + 2 * i) == class1) {
        AddClassPairs(
          pCount, pTable, pBase, startGlyph + i, classDef2Offset, class2,
          xAdvance, xPlacement);
      }
    }
    return;
  }

  uint16_t rangeCount = Read16(pClassDef + 2);
  for (uint16_t i = 0; i < rangeCount; ++i) {
    const uint8_t* pRange = pClassDef + 4 + 6 * i;
    if (Read16(pRange + 4) != class1) {
      continue;
    }

    uint16_t start = Read16(pRange);
    uint16_t end = Read16(pRange + 2);
    for (uint16_t glyph = start; glyph <= end; ++glyph) {
      AddClassPairs(
        pCount, pTable, pBase, glyph, classDef2Offset, class2, xAdvance,
        xPlacement);
    }
  }
}

void ReadClass2(
  int* pCount, OtfKerningTable* pTable, const void* pBase, uint16_t first,
  uint16_t classDefOffset, uint16_t classValue, uint16_t xAdvance,
  uint16_t xPlacement
) {
  AddClassPairs(
    pCount, pTable, pBase, first, classDefOffset, classValue, xAdvance,
    xPlacement);
}

void PickKernXValuesFromGlyphPairAdjustment(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t subtableOffset, const uint8_t** pp
) {
  PickGlyphPairs(pCount, pTable, pBase, subtableOffset, pp);
}

void PickKernXValuesFromClassPairAdjustment(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t subtableOffset, const uint8_t** pp
) {
  PickClassPairs(pCount, pTable, pBase, subtableOffset, pp);
}

void PickKernXValues(
  int* pCount, OtfKerningTable* pTable, const void* pGpos,
  uint16_t featureListOffset, uint16_t featureOffset,
  uint16_t lookupListOffset
) {
  const uint8_t* pBase = static_cast<const uint8_t*>(pGpos);
  const uint8_t* pFeature = pBase + featureListOffset + featureOffset;
  const uint8_t* pLookupList = pBase + lookupListOffset;
  uint16_t lookupIndexCount = Read16(pFeature + 2);

  for (uint16_t i = 0; i < lookupIndexCount; ++i) {
    uint16_t lookupIndex = Read16(pFeature + 4 + 2 * i);
    uint16_t lookupOffset = Read16(pLookupList + 2 + 2 * lookupIndex);
    const uint8_t* pLookup = pLookupList + lookupOffset;
    if (Read16(pLookup) != 2) {
      continue;
    }

    uint16_t subtableCount = Read16(pLookup + 4);
    for (uint16_t j = 0; j < subtableCount; ++j) {
      uint16_t subtableOffset = Read16(pLookup + 6 + 2 * j);
      const uint8_t* pSubtable = pLookup + subtableOffset;
      const uint8_t* p = pSubtable + 2;
      uint16_t offset = lookupListOffset + lookupOffset + subtableOffset;

      switch (Read16(pSubtable)) {
        case 1:
          PickGlyphPairs(pCount, pTable, pGpos, offset, &p);
          break;
        case 2:
          PickClassPairs(pCount, pTable, pGpos, offset, &p);
          break;
        default:
          break;
      }
    }
  }
}

void PickPaltXValuesFromSinglePositioningValue(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t subtableOffset, const uint8_t** pp
) {
  uint16_t coverageOffset = Acquire16(pp);
  uint16_t valueFormat = Acquire16(pp);
  uint16_t xAdvance;
  uint16_t xPlacement;
  ReadValues(&xAdvance, &xPlacement, pp, valueFormat);

  const uint8_t* pCoverage =
    static_cast<const uint8_t*>(pBase) + subtableOffset + coverageOffset;
  uint16_t glyphCount = Read16(pCoverage + 2);
  for (uint16_t i = 0; i < glyphCount; ++i) {
    uint16_t glyph =
      FindCoveredGlyph(pBase, subtableOffset + coverageOffset, i);
    AddPair(pCount, pTable, glyph, AnyGlyph, xAdvance, xPlacement);
  }
}

void PickPaltXValuesFromArrayOfPositioningValues(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t subtableOffset, const uint8_t** pp
) {
  PickArrayPositioningValues(pCount, pTable, pBase, subtableOffset, pp);
}

void PickPaltXValues(
  int* pCount, OtfKerningTable* pTable, const void* pGpos,
  uint16_t featureListOffset, uint16_t featureOffset,
  uint16_t lookupListOffset
) {
  const uint8_t* pBase = static_cast<const uint8_t*>(pGpos);
  const uint8_t* pFeature = pBase + featureListOffset + featureOffset;
  const uint8_t* pLookupList = pBase + lookupListOffset;
  uint16_t lookupIndexCount = Read16(pFeature + 2);

  for (uint16_t i = 0; i < lookupIndexCount; ++i) {
    uint16_t lookupIndex = Read16(pFeature + 4 + 2 * i);
    uint16_t lookupOffset = Read16(pLookupList + 2 + 2 * lookupIndex);
    const uint8_t* pLookup = pLookupList + lookupOffset;
    if (Read16(pLookup) != 1) {
      continue;
    }

    uint16_t subtableCount = Read16(pLookup + 4);
    for (uint16_t j = 0; j < subtableCount; ++j) {
      uint16_t subtableOffset = Read16(pLookup + 6 + 2 * j);
      const uint8_t* pSubtable = pLookup + subtableOffset;
      const uint8_t* p = pSubtable + 2;
      uint16_t offset = lookupListOffset + lookupOffset + subtableOffset;

      switch (Read16(pSubtable)) {
        case 1:
          PickPaltXValuesFromSinglePositioningValue(
            pCount, pTable, pGpos, offset, &p);
          break;
        case 2:
          PickArrayPositioningValues(pCount, pTable, pGpos, offset, &p);
          break;
        default:
          break;
      }
    }
  }
}

bool CompareKerningPair(
  const OtfKerningTable::KerningPair& lhs,
  const OtfKerningTable::KerningPair& rhs
) {
  if (lhs.first < rhs.first) {
    return true;
  }
  return lhs.first == rhs.first && lhs.second < rhs.second;
}

int PickKerningFromGposTable(
  OtfKerningTable* pTable, const void* pGpos, bool isKernOnly
) {
  const uint8_t* pBase = static_cast<const uint8_t*>(pGpos);
  uint16_t scriptListOffset = Read16(pBase + 4);
  uint16_t featureListOffset = Read16(pBase + 6);
  uint16_t lookupListOffset = Read16(pBase + 8);

  uint16_t kernOffset = PickFeatureTableOffset(
    pGpos, scriptListOffset, featureListOffset, "kern");
  uint16_t paltOffset = isKernOnly ? 0 : PickFeatureTableOffset(
    pGpos, scriptListOffset, featureListOffset, "palt");

  int count = 0;
  if (kernOffset != 0) {
    PickKernXValues(
      &count, pTable, pGpos, featureListOffset, kernOffset, lookupListOffset);
  }
  if (paltOffset != 0) {
    PickPaltXValues(
      &count, pTable, pGpos, featureListOffset, paltOffset, lookupListOffset);
  }

  if (pTable != nullptr) {
    std::sort(
      pTable->pairs, pTable->pairs + pTable->count, CompareKerningPair);
  }
  return count;
}

}

namespace nn::fontll {

int ScalableFontEngine::PickKerningFromGposTable(
  OtfKerningTable* pTable, const void* pGpos, bool isKernOnly
) {
  return detail::PickKerningFromGposTable(pTable, pGpos, isKernOnly);
}

}
