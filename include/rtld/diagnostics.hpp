#pragma once

namespace fw::rtld {

void LoaderWarning(const char* message);
[[noreturn]] void LoaderError(const char* message);

}
