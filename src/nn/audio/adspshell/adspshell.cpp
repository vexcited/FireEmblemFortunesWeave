#include "nn/audio/adspshell/adspshell.hpp"

#include "nn/audio/audio_abort.hpp"

namespace nn::audio::sysdev::server {

class ISessionManager : public sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result OpenAdspShell(
    sf::SharedPointer<adspshell::detail::IAdspShell>* outShell) = 0;
};

sf::SharedPointer<ISessionManager> CreateSessionManagerByHipc();

}

namespace nn::audio::adspshell {
namespace detail {
namespace {

[[gnu::noinline]] void GetAdspShell(IAdspShell** outShell) {
  static sf::SharedPointer<IAdspShell> s_Shell;
  if (s_Shell.operator->() == nullptr) {
    sf::SharedPointer<sysdev::server::ISessionManager> manager =
      sysdev::server::CreateSessionManagerByHipc();
    audio::detail::AbortUnlessSuccess(manager->OpenAdspShell(&s_Shell));
  }
  IAdspShell* shell = s_Shell.operator->();
  *outShell = shell;
  if (shell != nullptr) {
    shell->AddReference();
  }
}

}

void SendKernelDebugCommand(const KernelDebugParameter& parameter) {
  IAdspShell* shell;
  GetAdspShell(&shell);
  audio::detail::AbortUnlessSuccess(shell->SendKernelDebugCommand(parameter));
  shell->Release();
}

void SendFatalErrorCommand(const FatalErrorParameter& parameter) {
  IAdspShell* shell;
  GetAdspShell(&shell);
  audio::detail::AbortUnlessSuccess(shell->SendFatalErrorCommand(parameter));
  shell->Release();
}

Result SendReadMemoryCommand(void* buffer, size_t bufferSize,
  uint64_t address, uint64_t size) {
  IAdspShell* shell;
  GetAdspShell(&shell);
  Result result =
    shell->ReadMemory(sf::OutBuffer(buffer, bufferSize), address, size);
  shell->Release();
  // Only the invalid argument result is handed back to the caller.
  if (result.IsFailure() && (result.value & 0x3fffff) != 0xc8699) {
    nn::diag::detail::AbortImpl(&result);
  }
  return result;
}

void SendStressTestCommand(const StressTestParameter& parameter) {
  IAdspShell* shell;
  GetAdspShell(&shell);
  audio::detail::AbortUnlessSuccess(shell->SendStressTestCommand(parameter));
  shell->Release();
}

}

}
