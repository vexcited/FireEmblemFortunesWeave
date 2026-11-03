#pragma once

extern "C" {

int atexit(void (*callback)());
int at_quick_exit(void (*callback)());
[[noreturn]] void exit(int status);
[[noreturn]] void quick_exit(int status);
[[noreturn]] void _Exit(int status);

}
