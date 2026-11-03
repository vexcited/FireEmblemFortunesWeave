#pragma once

extern "C" {

int at_quick_exit(void (*callback)());
[[noreturn]] void quick_exit(int status);
[[noreturn]] void _Exit(int status);

}
