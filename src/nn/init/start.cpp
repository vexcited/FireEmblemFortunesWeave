#include "nn/init/start.hpp"

extern "C" void _init_libc0();
extern "C" void _init_libc1();
extern "C" void _init_libc2();
extern "C" void nnosInitialize(uintptr_t, uintptr_t);
extern "C" void nninitInitializeSdkModule();
extern "C" void nninitFinalizeSdkModule();
extern "C" void nninitStartup();
extern "C" void nnMain();
extern "C" [[noreturn]] void nnosQuickExit();

namespace nn::init {
namespace detail {

void InitializeLibcPhase0() {
  _init_libc0();
}

void InitializeLibcPhase1() {
  _init_libc1();
}

void InitializeLibcPhase2() {
  _init_libc2();
}

}

[[noreturn]] void Start(uintptr_t thread_handle, uintptr_t boundary,
  Callback ready, Callback initialize, Callback finalize) {
  detail::InitializeLibcPhase0();
  nnosInitialize(thread_handle, boundary);
  ready();
  detail::InitializeLibcPhase1();
  nninitInitializeSdkModule();
  nninitStartup();
  detail::InitializeLibcPhase2();
  initialize();
  nnMain();
  finalize();
  nninitFinalizeSdkModule();
  nnosQuickExit();
}

}
