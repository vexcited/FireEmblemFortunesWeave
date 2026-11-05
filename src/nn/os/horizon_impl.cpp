#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/os/memory_permission.hpp"
#include "nn/os/shared_memory.hpp"
#include "nn/os/thread_info.hpp"
#include "nn/os/transfer_memory.hpp"
#include "nn/util/tiny_mt.hpp"

enum nnosNotificationReason {
  nnosNotificationReason_Default,
};

enum nnosBreakReason {
  nnosBreakReason_Panic,
  nnosBreakReason_Assert,
};

struct SvcMemoryInfo {
  uint64_t baseAddress;
  uint64_t size;
  uint32_t state;
  uint32_t attribute;
  uint32_t permission;
  uint32_t ipcCount;
  uint32_t deviceCount;
  uint32_t reserved;
};

extern "C" uint32_t svcBreak(uint32_t reason, uintptr_t argument,
  uintptr_t size);
extern "C" uint32_t svcCloseHandle(uint32_t handle);
extern "C" uint32_t svcCreateTransferMemory(uint32_t* handle, void* address,
  size_t size, uint32_t permission);
extern "C" uint32_t svcGetInfo(uint64_t* value, uint32_t type,
  uint32_t handle, uint64_t subType);
extern "C" uint32_t svcQueryMemory(SvcMemoryInfo* info, uint32_t* pageInfo,
  uintptr_t address);
extern "C" uint32_t svcSetMemoryAttribute(uintptr_t address, size_t size,
  uint32_t mask, uint32_t value);
extern "C" uint32_t svcSetMemoryPermission(uintptr_t address, size_t size,
  uint32_t permission);
extern "C" uint32_t svcSetHeapSize(uintptr_t* address, size_t size);
extern "C" uint32_t svcUnmapMemory(const void* destination,
  const void* source, size_t size);
extern "C" uint32_t svcUnmapSharedMemory(uint32_t handle, void* address,
  size_t size);

namespace nn::os {

struct UserExceptionInfo;

enum MemoryAttribute {
  MemoryAttribute_Normal,
  MemoryAttribute_Uncached,
};

}

namespace nn::os::detail {

extern void (*g_UserExceptionHandler)(UserExceptionInfo*);
extern void* g_UserExceptionStackTop;
extern void* g_UserExceptionStackBottom;

struct FiberImplByHorizon {
  static bool UnmapAliasStack(const void* alias, const void* stack,
    size_t size);
};

struct MemoryHeapManagerImplByHorizon {
  Result SetHeapSize(uintptr_t* address, size_t size);
};

void NotifyDebuggerImpl(nnosNotificationReason reason, uintptr_t argument,
  uintptr_t size);
void BreakImpl(nnosBreakReason reason, uintptr_t argument, uintptr_t size);
bool ExamineWholeAddressSpaceHasNoAttribute(uintptr_t address, size_t size);
bool IsApplication();
void SetMemoryPermissionImpl(uintptr_t address, size_t size,
  MemoryPermission permission);
void SetMemoryAttributeImpl(uintptr_t address, size_t size,
  MemoryAttribute attribute);
void InitializeRandomImpl(util::TinyMt* generator);

namespace {

constexpr uint32_t CurrentProcessHandle = 0xffff8001;

template<MemoryPermission Permission>
void SetMemoryPermissionBySvc(uintptr_t address, size_t size) {
  while (size > 0) {
    SvcMemoryInfo info;
    uint32_t pageInfo = 0;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      Result{svcQueryMemory(&info, &pageInfo, address)});

    const size_t remaining = info.baseAddress + info.size - address;
    const size_t current = remaining < size ? remaining : size;

    if (info.permission != Permission) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(
        Result{svcSetMemoryPermission(address, current, Permission)});
    }

    address += current;
    size -= current;
  }
}

bool IsInStack(uintptr_t address, uintptr_t start, uintptr_t end) {
  return address >= start && address < end;
}

}

void DebugImplByHorizon::GetCurrentStackInfo(uintptr_t* stack,
  size_t* stackSize) {
  uintptr_t sp;
  asm("mov %0, sp" : "=r"(sp));

  uintptr_t tls;
  asm("mrs %0, tpidrro_el0" : "=r"(tls));
  auto* thread = *reinterpret_cast<ThreadType**>(tls + 0x1f8);
  auto* fiber = static_cast<FiberType*>(thread->current_fiber);

  uintptr_t start = reinterpret_cast<uintptr_t>(
    fiber == nullptr ? thread->stack : fiber->stack);
  size_t size = fiber == nullptr ? thread->stack_size : fiber->stackSize;
  uintptr_t end = start + size;

  if (g_UserExceptionHandler != nullptr && !IsInStack(sp, start, end)) {
    start = reinterpret_cast<uintptr_t>(g_UserExceptionStackTop);
    end = reinterpret_cast<uintptr_t>(g_UserExceptionStackBottom);
    size = end - start;
  }

  NN_ABORT_UNLESS(IsInStack(sp, start, end));
  *stack = start;
  *stackSize = size;
}

bool ExamineWholeAddressSpaceHasNoAttribute(uintptr_t address, size_t size) {
  const uintptr_t end = address + size;

  for (uintptr_t current = address; current < end;) {
    SvcMemoryInfo info;
    uint32_t pageInfo = 0;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      Result{svcQueryMemory(&info, &pageInfo, current)});

    if (info.attribute != 0) {
      return false;
    }

    current = info.baseAddress + info.size;
  }

  return true;
}

bool FiberImplByHorizon::UnmapAliasStack(const void* alias, const void* stack,
  size_t size) {
  return svcUnmapMemory(alias, stack, size) == 0;
}

void SharedMemoryImplByHorizon::Close(uint32_t handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(Result{svcCloseHandle(handle)});
}

void SharedMemoryImplByHorizon::Unmap(uint32_t handle, void* address,
  size_t size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Result{svcUnmapSharedMemory(handle, address, size)});
}

Result TransferMemoryImplByHorizon::Create(uint32_t* handle, void* address,
  size_t size, MemoryPermission permission) {
  NN_ABORT_UNLESS(static_cast<uint32_t>(permission) < 4);

  uint32_t created = 0;
  const Result result = {svcCreateTransferMemory(&created, address, size,
    permission)};

  if (result.IsSuccess()) {
    *handle = created;
    return result;
  }

  switch (result.GetInnerValueForDebug()) {
    case 0xce01:
      return {0x3f203};
    case 0xd201:
      return {0x3e803};
    case 0x10801: {
      const Result invalidParameter = {0x1a03};
      diag::detail::AbortImpl(&invalidParameter);
    }
    default:
      diag::detail::AbortImpl(&result);
  }
}

void TransferMemoryImplByHorizon::Close(uint32_t handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(Result{svcCloseHandle(handle)});
}

Result MemoryHeapManagerImplByHorizon::SetHeapSize(uintptr_t* address,
  size_t size) {
  const Result result = {svcSetHeapSize(address, size)};

  if (result.IsSuccess()) {
    return result;
  }

  switch (result.GetInnerValueForDebug()) {
    case 0xce01:
    case 0xd001:
    case 0x10801:
      return {0x1003};
    default:
      diag::detail::AbortImpl(&result);
  }
}

bool IsApplication() {
  uint64_t value = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Result{svcGetInfo(&value, 23, CurrentProcessHandle, 0)});
  return value != 0;
}

void NotifyDebuggerImpl(nnosNotificationReason reason, uintptr_t argument,
  uintptr_t size) {
  if (reason == nnosNotificationReason_Default) {
    svcBreak(0x80000007, argument, size);
  }
}

void BreakImpl(nnosBreakReason reason, uintptr_t argument, uintptr_t size) {
  switch (reason) {
    case nnosBreakReason_Panic:
      svcBreak(0, argument, size);
      return;
    case nnosBreakReason_Assert:
      svcBreak(1, argument, size);
      return;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void SetMemoryPermissionImpl(uintptr_t address, size_t size,
  MemoryPermission permission) {
  switch (permission) {
    case MemoryPermission_None:
      SetMemoryPermissionBySvc<MemoryPermission_None>(address, size);
      return;
    case MemoryPermission_ReadOnly:
      SetMemoryPermissionBySvc<MemoryPermission_ReadOnly>(address, size);
      return;
    case MemoryPermission_ReadWrite:
      SetMemoryPermissionBySvc<MemoryPermission_ReadWrite>(address, size);
      return;
    default:
      NN_ABORT_UNLESS(false);
  }
}

void SetMemoryAttributeImpl(uintptr_t address, size_t size,
  MemoryAttribute attribute) {
  constexpr uint32_t UncachedMask = 8;
  uint32_t value;

  switch (attribute) {
    case MemoryAttribute_Normal:
      value = 0;
      break;
    case MemoryAttribute_Uncached:
      value = UncachedMask;
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }

  while (size > 0) {
    SvcMemoryInfo info;
    uint32_t pageInfo = 0;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      Result{svcQueryMemory(&info, &pageInfo, address)});

    const size_t remaining = info.baseAddress + info.size - address;
    const size_t current = remaining < size ? remaining : size;

    if (info.attribute != value) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(
        Result{svcSetMemoryAttribute(address, current, UncachedMask, value)});
    }

    address += current;
    size -= current;
  }
}

void InitializeRandomImpl(util::TinyMt* generator) {
  uint64_t entropy[2];
  NN_ABORT_UNLESS_RESULT_SUCCESS(Result{svcGetInfo(&entropy[0], 11, 0, 0)});
  NN_ABORT_UNLESS_RESULT_SUCCESS(Result{svcGetInfo(&entropy[1], 11, 0, 1)});

  uint32_t seeds[4];
  __builtin_memcpy(seeds, entropy, sizeof(seeds));
  generator->Initialize(seeds, 4);
}

}
