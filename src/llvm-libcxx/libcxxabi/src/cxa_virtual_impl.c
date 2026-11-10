#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

void __attribute__((noreturn)) SdkRoutine_84c1f0(__int64, ...);
void __attribute__((noreturn)) __cxa_pure_virtual();
void __attribute__((noreturn)) __cxa_deleted_virtual();

void __attribute__((noreturn)) __cxa_pure_virtual()
{
  SdkRoutine_84c1f0((__int64)"libc++abi: Pure virtual function called!");
}

void __attribute__((noreturn)) __cxa_deleted_virtual()
{
  SdkRoutine_84c1f0((__int64)"libc++abi: Deleted virtual function called!");
}

#pragma GCC visibility pop
