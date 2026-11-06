#pragma once

namespace nerd {

[[noreturn]] void OnVerifyFailed(
  const char* file, int line, const char* condition, const char* format, ...
);

}
