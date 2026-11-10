#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) SoundArchive_DeletingDestructor();

void __attribute__((noreturn)) SoundArchive_DeletingDestructor()
{
  __udf(0x8002u);
}

#pragma GCC visibility pop
