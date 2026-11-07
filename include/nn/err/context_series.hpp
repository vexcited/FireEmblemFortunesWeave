#pragma once

#include "nn/err/context_initialization.hpp"
#include "nn/result.hpp"

namespace nn::err::detail {

struct MemoryResourceDeleter {
  void operator()(void* pointer);

  void* resource;
  size_t size;
};

struct OwnedContextData {
  void* data;
  MemoryResourceDeleter deleter;
};

struct RawContext {
  uint8_t type;
  uint8_t reserved01;
  uint16_t size;
  uint32_t reserved04;
  void* data;
  MemoryResourceDeleter deleter;

  static RawContext Deserialize(const void* pData, size_t size);
  static bool IsDeserializable(const void* pData, size_t size);

  uint8_t GetType() const;
  const void* GetData() const;
  size_t GetDataSize() const;
  size_t GetSerializationSize() const;
  size_t Serialize(void* buffer, size_t bufferSize) const;
};

struct ContextSeriesEntry {
  ContextSeriesEntry* previous;
  ContextSeriesEntry* next;
  uint8_t active;
  uint8_t reserved11[7];
  RawContext context;

  void Reset();
  bool IsLinkedWithOtherEntries() const;
  ContextSeriesEntry* Prev() const;
  ContextSeriesEntry* Next() const;
  void LinkNext(ContextSeriesEntry* entry);
  const RawContext& GetRawContext() const;
};

struct ContextSeries {
  ContextSeriesEntry* first;
  ContextSeriesEntry* last;

  bool IsEmpty() const;
  size_t GetSerializationSize() const;
  const ContextSeriesEntry* CBegin() const;
  const ContextSeriesEntry* CEnd() const;
};

struct ContextSeriesHolder {
  uint32_t descriptor;
  Result initial;
  Result current;
  uint32_t reserved0c;
  int64_t tick;
  ContextSeries series;
};

void HandleWriterError(Result result);

uint32_t GetContextDescriptor(Result result) asm(
  "_ZN2nn3err30GetContextDescriptorFromResultENS_6ResultE");

void InheritContext(uint32_t descriptor, Result result) asm(
  "_ZN2nn3err34InheritRegisteredContextDescriptorENS0_17ContextDescriptorENS_"
  "6ResultE");

void InheritContextApi(ContextWriterClientResourceAccessor* accessor,
  uint32_t descriptor, Result result) asm(
  "_ZN2nn3err6detail14ContextApiImpl34InheritRegisteredContextDescriptorERNS1"
  "_35ContextWriterClientResourceAccessorENS0_17ContextDescriptorENS_6ResultE");

void InheritWriterContext(ContextSeriesArray* array,
  uint32_t descriptor, Result result) asm(
  "_ZN2nn3err6detail23ContextWriterClientImpl34InheritRegisteredContextDescri"
  "ptorERNS1_18ContextSeriesArrayENS0_17ContextDescriptorENS_6ResultE");

void CreateContextSeries(ContextSeriesArray* array,
  uint32_t descriptor, Result result) asm(
  "_ZN2nn3err6detail18ContextSeriesArray19CreateContextSeriesENS0_17ContextDe"
  "scriptorENS_6ResultE");

void ResetContextSeries(ContextSeries* series) asm(
  "_ZN2nn3err6detail13ContextSeries5ResetEv");

void DestroyContextSeries(ContextSeries* series) asm(
  "_ZN2nn3err6detail13ContextSeriesD2Ev");

void MoveRawContext(RawContext* output, RawContext* input) asm(
  "_ZN2nn3err6detail10RawContextC1EOS2_");

RawContext* AssignRawContext(RawContext* output, RawContext* input) asm(
  "_ZN2nn3err6detail10RawContextaSEOS2_");

void ConstructRawContext(RawContext* output, uint8_t type,
  uint16_t size, OwnedContextData* data) asm(
  "_ZN2nn3err6detail10RawContextC1ENS0_16ContextTypeValueEtNSt3__110unique_pt"
  "rIvNS1_21MemoryResourceDeleterEEE");

void AppendContextEntry(ContextSeries* series,
  ContextSeriesEntry* entry) asm(
  "_ZN2nn3err6detail13ContextSeries13AppendContextEPNS1_18ContextSeriesEntryE");

void DeleteContextData(MemoryResourceDeleter* deleter, void* data) asm(
  "_ZN2nn3err6detail21MemoryResourceDeleterclEPv");

void* AllocateContextUnit(UnitAllocator* allocator, size_t size,
  size_t alignment) asm(
  "_ZN2nn3err6detail12UnitHeapBase11do_allocateEmm");

void FreeContextUnit(UnitAllocator* allocator, void* data, size_t size,
  size_t alignment) asm(
  "_ZN2nn3err6detail12UnitHeapBase13do_deallocateEPvmm");

ContextSeriesHolder* FindContextHolderUnsafe(
  const ContextSeriesArray* array, uint32_t descriptor, Result result) asm(
  "_ZNK2nn3err6detail18ContextSeriesArray26FindSeriesHolderImplUnsafeENS0_17C"
  "ontextDescriptorENS_6ResultE");

ContextSeriesHolder* FindContextHolder(const ContextSeriesArray* array,
  uint32_t descriptor, Result result) asm(
  "_ZNK2nn3err6detail18ContextSeriesArray16FindSeriesHolderENS0_17ContextDesc"
  "riptorENS_6ResultE");

ContextSeriesHolder* FindMutableContextHolder(
  ContextSeriesArray* array, uint32_t descriptor, Result result) asm(
  "_ZN2nn3err6detail18ContextSeriesArray37FindSeriesHolderForModificationUnsa"
  "feENS0_17ContextDescriptorENS_6ResultE");

ContextSeriesHolder* FindOldestContextHolder(
  const ContextSeriesArray* array) asm(
  "_ZNK2nn3err6detail18ContextSeriesArray35FindOldestUpdatedSeriesHolderUnsaf"
  "eEv");

ContextSeriesEntry* FindUnusedContextEntry(
  const ContextSeriesArray* array) asm(
  "_ZNK2nn3err6detail18ContextSeriesArray26FindAllocatableEntryUnsafeEv");

ContextSeriesHolder* AllocateContextHolder(ContextSeriesArray* array) asm(
  "_ZN2nn3err6detail18ContextSeriesArray26AllocateSeriesHolderUnsafeEv");

void AppendContext(ContextSeriesArray* array, uint32_t descriptor,
  Result previous, RawContext* input, Result current) asm(
  "_ZN2nn3err6detail18ContextSeriesArray13AppendContextENS0_17ContextDescript"
  "orENS_6ResultEONS1_10RawContextES4_");

void UpdateContextResult(ContextSeriesArray* array,
  uint32_t descriptor, Result previous, Result current) asm(
  "_ZN2nn3err6detail18ContextSeriesArray27UpdateCurrentOriginalResultENS0_17C"
  "ontextDescriptorENS_6ResultES4_");

void ReleaseContextSeries(ContextSeriesArray* array,
  uint32_t descriptor, Result result) asm(
  "_ZN2nn3err6detail18ContextSeriesArray13ReleaseSeriesENS0_17ContextDescript"
  "orENS_6ResultE");

uint8_t HasContext(const ContextSeriesEntry* entry) asm(
  "_ZNK2nn3err6detail18ContextSeriesEntry10HasContextEv");

ContextSeriesEntry* AssignContextEntry(ContextSeriesEntry* output,
  ContextSeriesEntry* input) asm(
  "_ZN2nn3err6detail18ContextSeriesEntryaSEOS2_");

void MoveContextEntry(ContextSeriesEntry* output,
  ContextSeriesEntry* input) asm(
  "_ZN2nn3err6detail18ContextSeriesEntryC1EOS2_");

}
