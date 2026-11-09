#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___libcpp_verbose_abort(const char*, ...);
void __attribute__((noreturn)) GameRoutine_60a1f0(_QWORD);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a230();
void __attribute__((noreturn)) String_60a250(const char* a1);

void __attribute__((noreturn)) String_60a1d0()
{
  GameRoutine_60a1f0("basic_string");
}

void __attribute__((noreturn)) String_60a230()
{
  String_60a250("basic_string");
}

void __attribute__((noreturn)) String_60a250(const char* a1)
{
  std___1___libcpp_verbose_abort(
      "out_of_range was thrown in -fno-exceptions mode with message \"%s\"",
      a1);
  __udf(0);
}

#pragma GCC visibility pop
