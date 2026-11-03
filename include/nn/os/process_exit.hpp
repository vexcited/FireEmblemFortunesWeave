#pragma once

namespace nn::os {

[[noreturn]] void QuickExit();
[[noreturn]] void ExitProcess(int status);

}

extern "C" [[noreturn]] void nnosQuickExit();
extern "C" [[noreturn]] void nnosExitProcess();
