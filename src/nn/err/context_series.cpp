#include "nn/err/context_series.hpp"

#include <stddef.h>

#include "nn/lmem/unit_heap_free.hpp"

namespace nn::err::detail {

static_assert(sizeof(MemoryResourceDeleter) == 16);
static_assert(sizeof(OwnedContextData) == 24);
static_assert(sizeof(RawContext) == 32);
static_assert(sizeof(ContextSeriesEntry) == 56);
static_assert(sizeof(ContextSeries) == 16);
static_assert(sizeof(ContextSeriesHolder) == 40);
static_assert(offsetof(ContextSeriesEntry, context) == 24);
static_assert(offsetof(ContextSeriesHolder, series) == 24);

uint64_t ReadContextTick() asm("_ZN2nn2os13GetSystemTickEv");

static uint8_t* At(void* object, size_t offset) {
  return static_cast<uint8_t*>(object) + offset;
}

static const uint8_t* At(const void* object, size_t offset) {
  return static_cast<const uint8_t*>(object) + offset;
}

template <typename T> static T Read(const void* object, size_t offset) {
  T value;
  __builtin_memcpy(&value, At(object, offset), sizeof(value));
  return value;
}

template <typename T> static void Write(void* object, size_t offset, T value) {
  __builtin_memcpy(At(object, offset), &value, sizeof(value));
}

static RawContext* Raw(ContextSeriesEntry* entry) {
  return reinterpret_cast<RawContext*>(At(entry, 24));
}

static ContextSeries* Series(ContextSeriesHolder* holder) {
  return reinterpret_cast<ContextSeries*>(At(holder, 24));
}

static ContextSeriesHolder* Holder(
  const ContextSeriesArray* array, size_t index) {
  return reinterpret_cast<ContextSeriesHolder*>(
    At(array->storage.series, index * 40));
}

void DeleteContextData(MemoryResourceDeleter* deleter, void* data) {
  void* resource = Read<void*>(deleter, 0);
  size_t size = Read<size_t>(deleter, 8);
  auto* vtable = Read<uintptr_t*>(resource, 0);
  using Deallocate = void (*)(void*, void*, size_t, size_t);
  reinterpret_cast<Deallocate>(vtable[3])(resource, data, size, 16);
}

static void DeleteOwnedData(RawContext* context) {
  void* data = Read<void*>(context, 8);
  Write<void*>(context, 8, nullptr);

  if (data) {
    DeleteContextData(
      reinterpret_cast<MemoryResourceDeleter*>(At(context, 16)), data);
  }
}

void* AllocateContextUnit(UnitAllocator* allocator, size_t, size_t) {
  return lmem::AllocateFromUnitHeap(
    Read<lmem::detail::HeapHead*>(allocator, 8));
}

void FreeContextUnit(UnitAllocator* allocator, void* data, size_t, size_t) {
  lmem::FreeToUnitHeap(Read<lmem::detail::HeapHead*>(allocator, 8), data);
}

void ConstructRawContext(
  RawContext* output, uint8_t type, uint16_t size, OwnedContextData* data) {
  Write(output, 0, type);
  Write(output, 2, size);
  void* owned = Read<void*>(data, 0);
  Write<void*>(data, 0, nullptr);
  Write(output, 8, owned);
  Write(output, 16, Read<MemoryResourceDeleter>(data, 8));
}

void MoveRawContext(RawContext* output, RawContext* input) {
  uint8_t type = Read<uint8_t>(input, 0);
  Write<uint8_t>(input, 0, 0);
  Write(output, 0, type);
  uint16_t size = Read<uint16_t>(input, 2);
  Write<uint16_t>(input, 2, 0);
  Write(output, 2, size);
  void* data = Read<void*>(input, 8);
  Write<void*>(input, 8, nullptr);
  Write(output, 8, data);
  Write(output, 16, Read<MemoryResourceDeleter>(input, 16));
}

RawContext* AssignRawContext(RawContext* output, RawContext* input) {
  RawContext temporary{};
  MoveRawContext(&temporary, input);
  uint8_t type = Read<uint8_t>(output, 0);
  uint16_t size = Read<uint16_t>(output, 2);
  Write(output, 2, temporary.size);
  temporary.size = size;
  Write(output, 0, temporary.type);
  temporary.type = type;
  void* data = Read<void*>(output, 8);
  auto deleter = Read<MemoryResourceDeleter>(output, 16);
  Write(output, 8, temporary.data);
  Write(output, 16, temporary.deleter);
  temporary.data = nullptr;
  temporary.deleter = deleter;

  if (data) {
    DeleteContextData(&temporary.deleter, data);
  }

  return output;
}

void MoveContextEntry(ContextSeriesEntry* output, ContextSeriesEntry* input) {
  RawContext empty{};
  auto* previous = Read<ContextSeriesEntry*>(input, 0);
  Write<ContextSeriesEntry*>(input, 0, nullptr);
  Write(output, 0, previous);
  auto* next = Read<ContextSeriesEntry*>(input, 8);
  Write<ContextSeriesEntry*>(input, 8, nullptr);
  Write(output, 8, next);
  uint8_t active = Read<uint8_t>(input, 16);
  Write<uint8_t>(input, 16, 0);
  Write(output, 16, active);
  __builtin_memset(Raw(output), 0, sizeof(RawContext));
  MoveRawContext(Raw(output), Raw(input));
  AssignRawContext(Raw(input), &empty);
  DeleteOwnedData(&empty);
}

ContextSeriesEntry* AssignContextEntry(
  ContextSeriesEntry* output, ContextSeriesEntry* input) {
  ContextSeriesEntry temporary{};
  MoveContextEntry(&temporary, input);
  auto* previous = Read<ContextSeriesEntry*>(output, 0);
  auto* next = Read<ContextSeriesEntry*>(output, 8);
  Write(output, 0, temporary.previous);
  Write(output, 8, temporary.next);
  temporary.previous = previous;
  temporary.next = next;
  uint8_t active = Read<uint8_t>(output, 16);
  Write(output, 16, temporary.active);
  temporary.active = active;
  RawContext old{};
  MoveRawContext(&old, Raw(output));
  AssignRawContext(Raw(output), &temporary.context);
  AssignRawContext(&temporary.context, &old);
  DeleteOwnedData(&old);
  DeleteOwnedData(&temporary.context);
  return output;
}

uint8_t HasContext(const ContextSeriesEntry* entry) {
  return Read<uint8_t>(entry, 16);
}

void AppendContextEntry(ContextSeries* series, ContextSeriesEntry* entry) {
  if (Read<ContextSeriesEntry*>(series, 0)) {
    auto* last = Read<ContextSeriesEntry*>(series, 8);
    auto* next = Read<ContextSeriesEntry*>(last, 8);
    Write(entry, 0, last);
    Write(entry, 8, next);
    Write(last, 8, entry);
    Write(series, 8, entry);
  }
  else {
    Write(series, 0, entry);
    Write(series, 8, entry);
  }
}

void ResetContextSeries(ContextSeries* series) {
  auto* entry = Read<ContextSeriesEntry*>(series, 0);

  while (entry) {
    auto* current = entry;
    Write<uint8_t>(current, 16, 0);
    entry = Read<ContextSeriesEntry*>(current, 8);
    Write<ContextSeriesEntry*>(current, 0, nullptr);
    Write<ContextSeriesEntry*>(current, 8, nullptr);
    RawContext empty{};
    AssignRawContext(Raw(current), &empty);
    DeleteOwnedData(&empty);
  }

  Write<ContextSeriesEntry*>(series, 0, nullptr);
  Write<ContextSeriesEntry*>(series, 8, nullptr);
}

ContextSeriesHolder* FindContextHolderUnsafe(
  const ContextSeriesArray* array, uint32_t descriptor, Result result) {
  for (size_t i = 0; i < array->storage.series_count; ++i) {
    auto* holder = Holder(array, i);
    uint32_t candidate = Read<uint32_t>(holder, 0);

    if (candidate != UINT32_MAX && candidate == descriptor &&
        ((Read<uint32_t>(holder, 8) ^ result.value) & 0x3fffff) == 0) {
      return Holder(array, i);
    }
  }

  return nullptr;
}

ContextSeriesHolder* FindMutableContextHolder(
  ContextSeriesArray* array, uint32_t descriptor, Result result) {
  return FindContextHolderUnsafe(array, descriptor, result);
}

ContextSeriesHolder* FindContextHolder(
  const ContextSeriesArray* array, uint32_t descriptor, Result result) {
  auto* mutable_array = const_cast<ContextSeriesArray*>(array);
  mutable_array->mutex.Lock();
  auto* holder = FindContextHolderUnsafe(array, descriptor, result);
  mutable_array->mutex.Unlock();
  return holder;
}

ContextSeriesHolder* FindOldestContextHolder(const ContextSeriesArray* array) {
  ContextSeriesHolder* oldest = nullptr;

  for (size_t i = 0; i < array->storage.series_count; ++i) {
    auto* holder = Holder(array, i);

    if (Read<uint32_t>(holder, 0) != UINT32_MAX &&
        (!oldest || Read<int64_t>(holder, 16) < Read<int64_t>(oldest, 16))) {
      oldest = holder;
    }
  }

  return oldest;
}

ContextSeriesEntry* FindUnusedContextEntry(const ContextSeriesArray* array) {
  size_t count = array->storage.context_count;
  size_t index = 0;

  for (; index < count; ++index) {
    auto* entry = reinterpret_cast<ContextSeriesEntry*>(
      At(array->storage.contexts, index * 56));

    if (!(HasContext(entry) & 1)) {
      break;
    }
  }

  if (index == array->storage.context_count) {
    return nullptr;
  }

  return reinterpret_cast<ContextSeriesEntry*>(
    At(array->storage.contexts, index * 56));
}

ContextSeriesHolder* AllocateContextHolder(ContextSeriesArray* array) {
  for (size_t i = 0; i < array->storage.series_count; ++i) {
    auto* holder = Holder(array, i);

    if (Read<uint32_t>(holder, 0) == UINT32_MAX) {
      return holder;
    }
  }

  auto* holder = FindOldestContextHolder(array);
  Write<uint32_t>(holder, 0, UINT32_MAX);
  ResetContextSeries(Series(holder));
  return holder;
}

void CreateContextSeries(
  ContextSeriesArray* array, uint32_t descriptor, Result result) {
  array->mutex.Lock();
  auto* holder = FindContextHolderUnsafe(array, descriptor, result);

  if (holder) {
    Write<uint32_t>(holder, 0, UINT32_MAX);
    ResetContextSeries(Series(holder));
  }
  else {
    holder = AllocateContextHolder(array);
  }

  Write(holder, 0, descriptor);
  Write(holder, 4, result);
  Write(holder, 8, result);
  Write(holder, 16, ReadContextTick());
  array->mutex.Unlock();
}

void AppendContext(ContextSeriesArray* array, uint32_t descriptor,
  Result previous, RawContext* input, Result current) {
  array->mutex.Lock();
  auto* holder = FindContextHolderUnsafe(array, descriptor, previous);

  if (holder) {
    Write(holder, 16, ReadContextTick());
    ContextSeriesEntry* entry;

    while (!(entry = FindUnusedContextEntry(array))) {
      auto* oldest = FindOldestContextHolder(array);

      if (oldest == holder) {
        array->mutex.Unlock();
        return;
      }

      Write<uint32_t>(oldest, 0, UINT32_MAX);
      ResetContextSeries(Series(oldest));
    }

    ContextSeriesEntry temporary;
    temporary.previous = nullptr;
    temporary.next = nullptr;
    temporary.active = 1;
    MoveRawContext(&temporary.context, input);
    AssignContextEntry(entry, &temporary);
    DeleteOwnedData(&temporary.context);
    Write(holder, 8, current);
    Write(holder, 16, ReadContextTick());
    AppendContextEntry(Series(holder), entry);
  }

  array->mutex.Unlock();
}

void UpdateContextResult(ContextSeriesArray* array, uint32_t descriptor,
  Result previous, Result current) {
  array->mutex.Lock();
  auto* holder = FindContextHolderUnsafe(array, descriptor, previous);

  if (holder) {
    Write(holder, 8, current);
    Write(holder, 16, ReadContextTick());
  }

  array->mutex.Unlock();
}

void ReleaseContextSeries(
  ContextSeriesArray* array, uint32_t descriptor, Result result) {
  array->mutex.Lock();
  auto* holder = FindContextHolderUnsafe(array, descriptor, result);

  if (holder) {
    Write<uint32_t>(holder, 0, UINT32_MAX);
    ResetContextSeries(Series(holder));
  }

  array->mutex.Unlock();
}

uint32_t GetContextDescriptor(Result result) {
  uint32_t descriptor = (result.value >> 22) & 0x1ff;

  if (static_cast<int32_t>(result.value) >= 0 || descriptor == 0) {
    return UINT32_MAX;
  }

  return descriptor;
}

void InheritWriterContext(
  ContextSeriesArray* array, uint32_t descriptor, Result result) {
  CreateContextSeries(array, descriptor, result);
}

void InheritContextApi(ContextWriterClientResourceAccessor* accessor,
  uint32_t descriptor, Result result) {
  if (descriptor != UINT32_MAX) {
    InheritWriterContext(accessor->series, descriptor, result);
  }
}

void InheritContext(uint32_t descriptor, Result result) {
  if (__atomic_load_n(&WriterState.initialized, __ATOMIC_ACQUIRE) == 1) {
    InheritContextApi(&WriterState.accessor, descriptor, result);
  }
}

void HandleWriterError(Result result) {
  uint32_t descriptor = GetContextDescriptor(result);

  if (descriptor != UINT32_MAX &&
      __atomic_load_n(&WriterState.initialized, __ATOMIC_ACQUIRE) == 1) {
    InheritContextApi(&WriterState.accessor, descriptor, result);
  }
}

}
