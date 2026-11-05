#pragma once

#include <cstdint>

#include "nn/fontll/fontll_scalable_font_engine.hpp"

namespace nn::fontll::detail {

uint16_t AcquireUint16Value(const uint8_t** pp);
uint16_t PickFeatureTableOffset(
  const void* pGpos, uint16_t scriptListOffset, uint16_t featureListOffset,
  const char* pTag);
uint16_t ReadCoverage(const void* pBase, uint16_t offset, uint16_t index);
void ReadXValues(
  uint16_t* pXAdvance, uint16_t* pXPlacement, const uint8_t** pp,
  uint16_t format);
void SkipXValues(const uint8_t** pp, uint16_t format);
void AddXValuesToOtfKerningTable(
  int* pCount, OtfKerningTable* pTable, uint16_t first, uint16_t second,
  uint16_t xAdvance, uint16_t xPlacement);
void ReadClass1(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t classDef1Offset, uint16_t classDef2Offset, uint16_t class1,
  uint16_t class2, uint16_t xAdvance, uint16_t xPlacement);
void ReadClass2(
  int* pCount, OtfKerningTable* pTable, const void* pBase, uint16_t first,
  uint16_t classDefOffset, uint16_t classValue, uint16_t xAdvance,
  uint16_t xPlacement);
void PickKernXValuesFromGlyphPairAdjustment(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t subtableOffset, const uint8_t** pp);
void PickKernXValuesFromClassPairAdjustment(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t subtableOffset, const uint8_t** pp);
void PickKernXValues(
  int* pCount, OtfKerningTable* pTable, const void* pGpos,
  uint16_t featureListOffset, uint16_t featureOffset,
  uint16_t lookupListOffset);
void PickPaltXValuesFromSinglePositioningValue(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t subtableOffset, const uint8_t** pp);
void PickPaltXValuesFromArrayOfPositioningValues(
  int* pCount, OtfKerningTable* pTable, const void* pBase,
  uint16_t subtableOffset, const uint8_t** pp);
void PickPaltXValues(
  int* pCount, OtfKerningTable* pTable, const void* pGpos,
  uint16_t featureListOffset, uint16_t featureOffset,
  uint16_t lookupListOffset);
bool CompareKerningPair(
  const OtfKerningTable::KerningPair& lhs,
  const OtfKerningTable::KerningPair& rhs);
int PickKerningFromGposTable(
  OtfKerningTable* pTable, const void* pGpos, bool isKernOnly);

}
