#pragma once

namespace fw::libc {

int* GetThreadError();
int* GetErrnoLocation() asm("__errno_location");

}
