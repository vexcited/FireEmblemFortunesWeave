#include <algorithm>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/transfer_memory.hpp"
#include "nn/streamplay/detail/streamplay_hid_application_resource_holder.hpp"
#include "nn/streamplay/detail/streamplay_user_service.hpp"

namespace nn::streamplay::detail {

namespace {

constexpr uintptr_t WorkBufferAlignment = 0x1000;

inline bool IsResultInRange(Result result, uint32_t module, uint32_t begin,
  uint32_t end) {
  const uint32_t description = (result.value >> 9) & 0x1fff;
  return (result.value & 0x1ff) == module && begin <= description &&
    description < end;
}

}

bool IsAbortNeeded(Result result) {
  if (result.IsSuccess()) {
    return false;
  }
  if (IsResultInRange(result, 260, 256, 320)) {
    return true;
  }
  return IsResultInRange(result, 287, 5000, 8000);
}

HidApplicationResourceHolder* GetHidApplicationResourceHolder() {
  if (!g_IsHidApplicationResourceHolderCreated.load(
    std::memory_order_acquire)) {
    return nullptr;
  }
  return &*g_HidApplicationResourceHolder;
}

void CalculateRequiredWorkBufferSizePerInterfaceAndGlobal(
  uint64_t* pOutPerInterfaceSize, uint64_t* pOutGlobalSize,
  StreamPlayType type, StreamingMode mode) {
  uint64_t globalSize = 0;
  uint64_t firstSize = 0;
  uint64_t secondSize = 0;
  uint64_t thirdSize = 0;
  sf::SharedPointer<IUserService> service = GetUserService();
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetRequiredWorkBufferSize(
    sf::Out<uint64_t>(&globalSize), sf::Out<uint64_t>(&firstSize),
    sf::Out<uint64_t>(&secondSize), sf::Out<uint64_t>(&thirdSize),
    {type, mode}));
  service.Reset();
  *pOutPerInterfaceSize = firstSize + secondSize + thirdSize;
  *pOutGlobalSize = globalSize;
}

uint64_t CalculateRequiredWorkBufferSizePerInterface(StreamPlayType type,
  StreamingMode mode) {
  uint64_t globalSize = 0;
  uint64_t firstSize = 0;
  uint64_t secondSize = 0;
  uint64_t thirdSize = 0;
  sf::SharedPointer<IUserService> service = GetUserService();
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetRequiredWorkBufferSize(
    sf::Out<uint64_t>(&globalSize), sf::Out<uint64_t>(&firstSize),
    sf::Out<uint64_t>(&secondSize), sf::Out<uint64_t>(&thirdSize),
    {type, mode}));
  service.Reset();
  return firstSize + secondSize + thirdSize;
}

int CalculateGuestCountFromMemorySize(int memorySize, StreamPlayType type,
  StreamingMode mode) {
  uint64_t globalSize = 0;
  uint64_t firstSize = 0;
  uint64_t secondSize = 0;
  uint64_t thirdSize = 0;
  sf::SharedPointer<IUserService> service = GetUserService();
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetRequiredWorkBufferSize(
    sf::Out<uint64_t>(&globalSize), sf::Out<uint64_t>(&firstSize),
    sf::Out<uint64_t>(&secondSize), sf::Out<uint64_t>(&thirdSize),
    {type, mode}));
  service.Reset();
  const int remainingSize = memorySize - static_cast<int>(globalSize);
  NN_ABORT_UNLESS(remainingSize > 0);
  const int guestCount = remainingSize / static_cast<int>(
    firstSize + secondSize + thirdSize);
  NN_ABORT_UNLESS(guestCount > 0);
  return std::min(guestCount, GuestCountMax);
}

void CreateTransferMemory(TransferMemorySet* pOutSet, void* address,
  size_t size) {
  NN_ABORT_UNLESS_NOT_NULL(pOutSet);
  NN_ABORT_UNLESS_NOT_NULL(address);
  if (size == 0) {
    return;
  }
  os::TransferMemoryType transferMemory = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateTransferMemory(&transferMemory,
    address, size, os::MemoryPermission_None));
  const uint32_t handle = os::DetachTransferMemory(&transferMemory);
  os::DestroyTransferMemory(&transferMemory);
  pOutSet->handle = handle;
  pOutSet->size = size;
}

TransferMemorySet CreateWorkBufferInProcessGlobal(StreamPlayType type,
  StreamingMode mode, void* buffer, size_t size) {
  NN_ABORT_UNLESS_NOT_NULL(buffer);
  NN_ABORT_UNLESS(reinterpret_cast<uintptr_t>(buffer) %
    WorkBufferAlignment == 0);
  NN_ABORT_UNLESS(size % WorkBufferAlignment == 0);
  uint64_t globalSize = 0;
  uint64_t firstSize = 0;
  uint64_t secondSize = 0;
  uint64_t thirdSize = 0;
  sf::SharedPointer<IUserService> service = GetUserService();
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetRequiredWorkBufferSize(
    sf::Out<uint64_t>(&globalSize), sf::Out<uint64_t>(&firstSize),
    sf::Out<uint64_t>(&secondSize), sf::Out<uint64_t>(&thirdSize),
    {type, mode}));
  service.Reset();
  TransferMemorySet set = {};
  CreateTransferMemory(&set, buffer, globalSize);
  return set;
}

WorkBufferPerGuest CreateWorkBufferPerGuest(StreamPlayType type,
  StreamingMode mode, void* buffer, size_t size) {
  NN_ABORT_UNLESS_NOT_NULL(buffer);
  NN_ABORT_UNLESS(reinterpret_cast<uintptr_t>(buffer) %
    WorkBufferAlignment == 0);
  NN_ABORT_UNLESS(size % WorkBufferAlignment == 0);
  uint64_t globalSize = 0;
  uint64_t firstSize = 0;
  uint64_t secondSize = 0;
  uint64_t thirdSize = 0;
  sf::SharedPointer<IUserService> service = GetUserService();
  NN_ABORT_UNLESS_RESULT_SUCCESS(service->GetRequiredWorkBufferSize(
    sf::Out<uint64_t>(&globalSize), sf::Out<uint64_t>(&firstSize),
    sf::Out<uint64_t>(&secondSize), sf::Out<uint64_t>(&thirdSize),
    {type, mode}));
  service.Reset();
  WorkBufferPerGuest workBuffer = {};
  uint8_t* pBuffer = static_cast<uint8_t*>(buffer);
  CreateTransferMemory(&workBuffer.first, pBuffer, firstSize);
  pBuffer += firstSize;
  CreateTransferMemory(&workBuffer.third, pBuffer, thirdSize);
  pBuffer += thirdSize;
  CreateTransferMemory(&workBuffer.second, pBuffer, secondSize);
  return workBuffer;
}

}
