#include "nn/os/process_exit.hpp"

#include "libc/exit.hpp"

extern "C" void svcExitProcess();

namespace nn::os::detail {

extern unsigned char g_OsResourceManagerStorage[];
[[noreturn]] void AbortProcessExit() asm("_ZN2nn4diag6detail9AbortImplEv");

[[noreturn]] void KernelQuickExit() {
  quick_exit(0);
}

[[noreturn]] void ManagerQuickExit(void*) {
  KernelQuickExit();
}

[[noreturn]] void KernelExitProcess() {
  svcExitProcess();
  AbortProcessExit();
}

[[noreturn]] void ManagerExitProcess(void*, int) {
  KernelExitProcess();
}

}

namespace nn::os {

[[noreturn]] void QuickExit() {
  detail::ManagerQuickExit(detail::g_OsResourceManagerStorage + 288);
}

[[noreturn]] void ExitProcess(int status) {
  detail::ManagerExitProcess(detail::g_OsResourceManagerStorage + 288,
                             status);
}

}

extern "C" [[noreturn]] void nnosQuickExit() {
  nn::os::QuickExit();
}

extern "C" [[noreturn]] void LibcExitProcess(int status) {
  nn::os::ExitProcess(status);
}
