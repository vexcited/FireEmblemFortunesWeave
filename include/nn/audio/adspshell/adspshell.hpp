#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/os/time.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::audio::adspshell {

namespace detail {

enum KernelDebugCommand : uint64_t {
  KernelDebugCommand_PrintPort,
  KernelDebugCommand_DumpThread,
  KernelDebugCommand_DumpThreadCallStack,
  KernelDebugCommand_DumpKernelObject,
  KernelDebugCommand_DumpHandle,
  KernelDebugCommand_DumpMemory,
  KernelDebugCommand_DumpCpuUtilization,
  KernelDebugCommand_DumpProcess,
  KernelDebugCommand_SuspendProcess,
  KernelDebugCommand_ResumeProcess,
};

struct KernelDebugParameter {
  KernelDebugCommand command;
  uint64_t argument;
};

enum FatalErrorType : uint8_t {
  FatalErrorType_Abort,
  FatalErrorType_UserException,
};

struct FatalErrorParameter {
  FatalErrorType type;
  bool isDryRun;
};

struct StressTestParameter {
  uint16_t reserved0;
  uint16_t threadCount;
  uint16_t load;
  uint16_t reserved1;
  TimeSpan interval;
  TimeSpan duration;
};

static_assert(sizeof(StressTestParameter) == 24);

class IAdspShell : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result SendKernelDebugCommand(
    const KernelDebugParameter& parameter) = 0;
  virtual Result SendFatalErrorCommand(FatalErrorParameter parameter) = 0;
  virtual Result ReadMemory(const sf::OutBuffer& buffer, uint64_t address,
    uint64_t size) = 0;
  virtual Result SendStressTestCommand(
    const StressTestParameter& parameter) = 0;
};

void AcquireAdspShell(IAdspShell** outShell);

void SendKernelDebugCommand(const KernelDebugParameter& parameter);
void SendFatalErrorCommand(const FatalErrorParameter& parameter);
Result SendReadMemoryCommand(void* buffer, size_t bufferSize,
  uint64_t address, uint64_t size);
void SendStressTestCommand(const StressTestParameter& parameter);

}

void TriggerAbort();
void TriggerAbortDryRun();
void TriggerUserException();
void TriggerUserExceptionDryRun();
void AdspKernelDebugPrintPort(uint64_t port);
void AdspKernelDebugPrintPort();
void AdspKernelDebugDumpThread(uint64_t thread);
void AdspKernelDebugDumpThread();
void AdspKernelDebugDumpThreadCallStack(uint64_t thread);
void AdspKernelDebugDumpThreadCallStack();
void AdspKernelDebugDumpKernelObject();
void AdspKernelDebugDumpHandle(uint64_t process);
void AdspKernelDebugDumpHandle();
void AdspKernelDebugDumpMemory(uint64_t process);
void AdspKernelDebugDumpMemory();
void AdspKernelDebugDumpCpuUtilization(uint64_t core);
void AdspKernelDebugDumpCpuUtilization();
void AdspKernelDebugDumpProcess(uint64_t process);
void AdspKernelDebugDumpProcess();
void AdspKernelDebugSuspendProcess(uint64_t process);
void AdspKernelDebugSuspendProcess();
void AdspKernelDebugResumeProcess(uint64_t process);
void AdspKernelDebugResumeProcess();
Result ReadAudioAdspProcessMemoryRegion(void* buffer, size_t bufferSize,
  uint64_t address, uint64_t size);
void StartAdspStressTest(uint16_t threadCount, uint16_t load,
  TimeSpan interval, TimeSpan duration);

}
