#include "nn/audio/adspshell/adspshell.hpp"

namespace nn::audio::adspshell {

namespace {

void SendFatalError(detail::FatalErrorType type, bool isDryRun) {
  detail::FatalErrorParameter parameter = {type, isDryRun};
  detail::SendFatalErrorCommand(parameter);
}

void SendKernelDebug(detail::KernelDebugCommand command, uint64_t argument) {
  detail::KernelDebugParameter parameter = {command, argument};
  detail::SendKernelDebugCommand(parameter);
}

constexpr uint64_t AllTargets = ~uint64_t(0);

}

void TriggerAbort() {
  SendFatalError(detail::FatalErrorType_Abort, false);
}

void TriggerAbortDryRun() {
  SendFatalError(detail::FatalErrorType_Abort, true);
}

void TriggerUserException() {
  SendFatalError(detail::FatalErrorType_UserException, false);
}

void TriggerUserExceptionDryRun() {
  SendFatalError(detail::FatalErrorType_UserException, true);
}

void AdspKernelDebugPrintPort(uint64_t port) {
  SendKernelDebug(detail::KernelDebugCommand_PrintPort, port);
}

void AdspKernelDebugPrintPort() {
  SendKernelDebug(detail::KernelDebugCommand_PrintPort, AllTargets);
}

void AdspKernelDebugDumpThread(uint64_t thread) {
  SendKernelDebug(detail::KernelDebugCommand_DumpThread, thread);
}

void AdspKernelDebugDumpThread() {
  SendKernelDebug(detail::KernelDebugCommand_DumpThread, AllTargets);
}

void AdspKernelDebugDumpThreadCallStack(uint64_t thread) {
  SendKernelDebug(detail::KernelDebugCommand_DumpThreadCallStack, thread);
}

void AdspKernelDebugDumpThreadCallStack() {
  SendKernelDebug(detail::KernelDebugCommand_DumpThreadCallStack,
    AllTargets);
}

void AdspKernelDebugDumpKernelObject() {
  SendKernelDebug(detail::KernelDebugCommand_DumpKernelObject, 0);
}

void AdspKernelDebugDumpHandle(uint64_t process) {
  SendKernelDebug(detail::KernelDebugCommand_DumpHandle, process);
}

void AdspKernelDebugDumpHandle() {
  SendKernelDebug(detail::KernelDebugCommand_DumpHandle, AllTargets);
}

void AdspKernelDebugDumpMemory(uint64_t process) {
  SendKernelDebug(detail::KernelDebugCommand_DumpMemory, process);
}

void AdspKernelDebugDumpMemory() {
  SendKernelDebug(detail::KernelDebugCommand_DumpMemory, AllTargets);
}

void AdspKernelDebugDumpCpuUtilization(uint64_t core) {
  SendKernelDebug(detail::KernelDebugCommand_DumpCpuUtilization, core);
}

void AdspKernelDebugDumpCpuUtilization() {
  SendKernelDebug(detail::KernelDebugCommand_DumpCpuUtilization, AllTargets);
}

void AdspKernelDebugDumpProcess(uint64_t process) {
  SendKernelDebug(detail::KernelDebugCommand_DumpProcess, process);
}

void AdspKernelDebugDumpProcess() {
  SendKernelDebug(detail::KernelDebugCommand_DumpProcess, AllTargets);
}

void AdspKernelDebugSuspendProcess(uint64_t process) {
  SendKernelDebug(detail::KernelDebugCommand_SuspendProcess, process);
}

void AdspKernelDebugSuspendProcess() {
  SendKernelDebug(detail::KernelDebugCommand_SuspendProcess, AllTargets);
}

void AdspKernelDebugResumeProcess(uint64_t process) {
  SendKernelDebug(detail::KernelDebugCommand_ResumeProcess, process);
}

void AdspKernelDebugResumeProcess() {
  SendKernelDebug(detail::KernelDebugCommand_ResumeProcess, AllTargets);
}

Result ReadAudioAdspProcessMemoryRegion(void* buffer, size_t bufferSize,
  uint64_t address, uint64_t size) {
  return detail::SendReadMemoryCommand(buffer, bufferSize, address, size);
}

void StartAdspStressTest(uint16_t threadCount, uint16_t load,
  TimeSpan interval, TimeSpan duration) {
  detail::StressTestParameter parameter = {};
  parameter.threadCount = threadCount;
  parameter.load = load;
  parameter.interval = interval;
  parameter.duration = duration;
  detail::SendStressTestCommand(parameter);
}

}
