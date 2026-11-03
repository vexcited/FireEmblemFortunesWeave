#include "nn/os/process_exit.hpp"

namespace nn::os::detail {

extern unsigned char g_OsResourceManagerStorage[];
[[noreturn]] void ManagerExitProcess(void* manager, int status);

}

extern "C" [[noreturn]] void nnosExitProcess() {
  nn::os::detail::ManagerExitProcess(
    nn::os::detail::g_OsResourceManagerStorage + 288, 0);
}
